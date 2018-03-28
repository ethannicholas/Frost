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
typedef void (*$fn96)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn114)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn141)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn147)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn153)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn188)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn194)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn200)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn290)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn296)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn302)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn330)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn353)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn359)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn365)(panda$collections$Iterator*);
typedef void (*$fn373)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn409)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn415)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn444)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn452)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn496)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn501)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn522)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn530)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn539)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn542)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn547)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn571)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn601)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn609)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn646)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn651)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn672)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn680)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn683)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn693)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn699)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn705)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn733)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn761)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn767)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn773)(panda$collections$Iterator*);
typedef void (*$fn781)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn881)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn887)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn893)(panda$collections$Iterator*);
typedef void (*$fn901)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn922)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn994)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1012)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1033)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1066)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1079)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1089)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1092)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1104)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1110)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1123)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1133)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1136)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1148)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1194)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1199)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1212)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1238)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1240)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1257)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn1268)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1285)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1319)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1327)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1338)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1345)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1362)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1375)(panda$collections$CollectionView*);
typedef void (*$fn1397)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1553)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1573)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1630)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1635)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1665)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1672)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1683)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1687)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1693)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1699)(panda$collections$Iterator*);
typedef void (*$fn1707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1710)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1743)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1749)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1771)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1778)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1782)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1789)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1792)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1805)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1951)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2004)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2033)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2074)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2079)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2085)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2091)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2099)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn2106)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2111)(panda$collections$CollectionView*);
typedef void (*$fn2122)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2137)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2142)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2161)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2166)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2217)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2219)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2232)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2252)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2260)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2265)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2273)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2278)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2405)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2410)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2416)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2422)(panda$collections$Iterator*);
typedef void (*$fn2426)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2446)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2453)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2476)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2487)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2545)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2550)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2583)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2593)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2598)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2602)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2608)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2614)(panda$collections$Iterator*);
typedef void (*$fn2616)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2617)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2620)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2627)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2629)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2631)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2633)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2634)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2637)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2641)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2649)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2665)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2672)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2693)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2719)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2729)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2773)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2787)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2801)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2818)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2834)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2849)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2866)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2872)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2877)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2879)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2882)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2886)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2894)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2898)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2914)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2921)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2942)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2956)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2968)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2976)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2983)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2995)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3005)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3047)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3059)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3075)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3089)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3119)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3133)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3149)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3181)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3197)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3215)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3235)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3250)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3285)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3304)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3313)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3318)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3320)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3323)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3326)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3343)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3348)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3350)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3367)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3375)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3377)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3391)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3400)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3410)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3414)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3420)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3426)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn3478)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3488)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3497)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3512)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3526)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3532)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3534)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3572)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3579)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3585)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3591)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3596)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3602)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3608)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3619)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3625)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3631)(panda$collections$Iterator*);
typedef void (*$fn3639)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3641)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3643)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3646)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3763)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3772)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3777)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3783)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3789)(panda$collections$Iterator*);
typedef void (*$fn3802)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3805)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3816)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3822)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3828)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3844)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3850)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3856)(panda$collections$Iterator*);
typedef void (*$fn3859)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3861)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3864)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3875)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3877)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3879)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3881)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3883)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3884)(panda$io$OutputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, -2051020738728542693, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x28", 2, 14382, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x38", 1, 157, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x36", 2, 15204, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x33\x32", 2, 15402, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70", 2, 13545, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x73\x65\x6c\x66", 5, 14792042467, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6d", 12, -5595348649711353309, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2a", 9, 1496394141948660748, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x73\x65\x6c\x66\x2d\x3e\x76\x61\x6c\x75\x65", 12, 3684417363826496863, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s1180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s1182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s1184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s1193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20", 4, 137658487, NULL };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20", 4, 137372859, NULL };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s1306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s1312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s1320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s1325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static panda$core$String $s1425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 14, 9153752889249827899, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2a", 2, 14283, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d", 7, 157293860332681, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, 2191018519584705024, NULL };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s1521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s1536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x26", 2, 14279, NULL };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1705 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3f\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x4e\x55\x4c\x4c\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 17, 3278627383872437575, NULL };
static panda$core$String $s1762 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 22, -5027409806946055905, NULL };
static panda$core$String $s1765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x29\x3b", 15, -9084967859609473468, NULL };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s1787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s1791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 21448182697504497, NULL };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 19, -1805496395169551456, NULL };
static panda$core$String $s2025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x29\x3b", 8, 14794490123150471, NULL };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -5089590097621792313, NULL };
static panda$core$String $s2069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 2848555729212071077, NULL };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s2096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s2101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s2104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s2115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x73\x65\x6c\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s2193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s2247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s2439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s2441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d\x20\x3d\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s2474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x46\x72\x65\x65\x28", 10, -5790438204225352665, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s2591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s2685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x69\x6e\x2e\x76\x61\x6c\x75\x65\x3b", 11, -3956212002962864875, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x61\x78\x2e\x76\x61\x6c\x75\x65\x3b", 11, -4041768404061004273, NULL };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2762 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 12, -550717230962542041, NULL };
static panda$core$String $s2843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s2860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20\x31\x3b", 12, -4476855678279854640, NULL };
static panda$core$String $s2873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s2934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x61\x72\x74\x2e\x76\x61\x6c\x75\x65\x3b", 13, 3588086193908855763, NULL };
static panda$core$String $s2948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x65\x6e\x64\x2e\x76\x61\x6c\x75\x65\x3b", 11, 5794120589201096528, NULL };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x65\x70\x2e\x76\x61\x6c\x75\x65\x3b", 12, -1565217378717073995, NULL };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s3000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s3023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s3025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s3028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3034 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s3040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x30\x3b", 5, 13904243334, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s3081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2d\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s3248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x2d", 5, 13904537533, NULL };
static panda$core$String $s3275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x2d", 4, 137665772, NULL };
static panda$core$String $s3294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s3311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7b", 14, 1197661341919403142, NULL };
static panda$core$String $s3376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x6d\x73\x65\x74\x28\x26", 8, 22623213602606430, NULL };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x30\x2c\x20\x73\x69\x7a\x65\x6f\x66\x28", 12, 4086987682289124441, NULL };
static panda$core$String $s3408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s3454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s3492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s3495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static panda$core$String $s3501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20", 3, 1462916, NULL };
static panda$core$String $s3503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x63\x68\x61\x72\x2a\x29\x20", 9, 1531222690101128410, NULL };
static panda$core$String $s3505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s3509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s3568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x41\x4e\x44\x41\x5f\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s3583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s3586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s3589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s3633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s3637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s3640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x3b", 6, 2103477946177, NULL };
static panda$core$String $s3642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6c\x74\x3a", 8, 21658216358330300, NULL };
static panda$core$String $s3645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s3757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s3773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s3800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s3833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s3863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

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
    panda$core$String* result52;
    panda$core$MutableString* code58;
    panda$core$String* separator67;
    panda$core$Range$LTpanda$core$Int64$GT $tmp69;
    panda$core$String* tmp197;
    panda$core$Bit $tmp43 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_t);
    if ($tmp43.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp45 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
        cl44 = $tmp45;
        PANDA_ASSERT(((panda$core$Bit) { cl44 != NULL }).value);
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl44);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl44));
    }
    }
    panda$core$Bit $tmp47 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp46 = $tmp47.value;
    if ($tmp46) goto $l48;
    panda$core$Bit $tmp49 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 24 }));
    $tmp46 = $tmp49.value;
    $l48:;
    panda$core$Bit $tmp50 = { $tmp46 };
    if ($tmp50.value) {
    {
        panda$core$Int64 $tmp51 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp51;
        panda$core$Int64$wrapper* $tmp54;
        $tmp54 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp54->value = self->varCount;
        panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s53, ((panda$core$Object*) $tmp54));
        panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp55, &$s56);
        result52 = $tmp57;
        panda$core$MutableString* $tmp59 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp59, &$s60);
        code58 = $tmp59;
        panda$core$Int64 $tmp61 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp62 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp61, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp63 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp62);
        panda$core$String* $tmp64 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp63));
        panda$core$MutableString$append$panda$core$String(code58, $tmp64);
        panda$core$MutableString$append$panda$core$String(code58, &$s65);
        panda$core$MutableString$append$panda$core$String(code58, result52);
        panda$core$MutableString$append$panda$core$String(code58, &$s66);
        separator67 = &$s68;
        panda$core$Int64 $tmp70 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp71 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp70, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp69, ((panda$core$Int64) { 0 }), $tmp71, ((panda$core$Bit) { false }));
        int64_t $tmp73 = $tmp69.min.value;
        panda$core$Int64 i72 = { $tmp73 };
        int64_t $tmp75 = $tmp69.max.value;
        bool $tmp76 = $tmp69.inclusive.value;
        if ($tmp76) goto $l83; else goto $l84;
        $l83:;
        if ($tmp73 <= $tmp75) goto $l77; else goto $l79;
        $l84:;
        if ($tmp73 < $tmp75) goto $l77; else goto $l79;
        $l77:;
        {
            panda$core$MutableString$append$panda$core$String(code58, separator67);
            panda$core$Object* $tmp85 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i72);
            panda$core$String* $tmp86 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp85));
            panda$core$MutableString$append$panda$core$String(code58, $tmp86);
            {
                separator67 = &$s87;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator67));
            }
        }
        $l80:;
        int64_t $tmp89 = $tmp75 - i72.value;
        if ($tmp76) goto $l90; else goto $l91;
        $l90:;
        if ((uint64_t) $tmp89 >= 1) goto $l88; else goto $l79;
        $l91:;
        if ((uint64_t) $tmp89 > 1) goto $l88; else goto $l79;
        $l88:;
        i72.value += 1;
        goto $l77;
        $l79:;
        panda$core$MutableString$append$panda$core$String(code58, &$s94);
        panda$core$String* $tmp95 = panda$core$MutableString$finish$R$panda$core$String(code58);
        (($fn96) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp95);
        {
            tmp197 = result52;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator67));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result52));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code58));
            }
            return tmp197;
        }
    }
    }
    panda$core$String* $tmp98 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self->hCodeGen, p_t);
    return $tmp98;
}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    {
        self->compiler = p_compiler;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    }
    org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->hCodeGen, p_compiler);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp99 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp99;
    panda$core$Int64$wrapper* $tmp101;
    $tmp101 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp101->value = self->varCount;
    panda$core$String* $tmp102 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s100, ((panda$core$Object*) $tmp101));
    panda$core$String* $tmp104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp102, &$s103);
    return $tmp104;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp105 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp105;
    panda$core$Int64$wrapper* $tmp107;
    $tmp107 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp107->value = self->varCount;
    panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s106, ((panda$core$Object*) $tmp107));
    panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, &$s109);
    return $tmp110;
}
void org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp111 = panda$core$String$convert$R$panda$core$String(p_label);
    panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp111, &$s112);
    (($fn114) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp113);
    {
        self->currentBlock = p_label;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentBlock));
    }
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl126;
    panda$core$Int64 tmp2135;
    panda$core$Int64 result136;
    panda$collections$Iterator* Iter$271$9137;
    org$pandalanguage$pandac$FieldDecl* f150;
    panda$core$Int64 size160;
    panda$core$Int64 align162;
    panda$core$Int64 tmp3172;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp115 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp115.value) {
    {
        panda$core$Bit $tmp117 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s116);
        if ($tmp117.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp119 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s118);
        if ($tmp119.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp121 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s120);
        if ($tmp121.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp123 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s122);
        PANDA_ASSERT($tmp123.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp124 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp125 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp124);
    if ($tmp125.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp127 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl126 = $tmp127;
    PANDA_ASSERT(((panda$core$Bit) { cl126 != NULL }).value);
    panda$core$Bit $tmp129 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl126);
    panda$core$Bit $tmp130 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp129);
    bool $tmp128 = $tmp130.value;
    if ($tmp128) goto $l131;
    panda$core$Bit $tmp133 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl126)->name, &$s132);
    $tmp128 = $tmp133.value;
    $l131:;
    panda$core$Bit $tmp134 = { $tmp128 };
    if ($tmp134.value) {
    {
        {
            tmp2135 = ((panda$core$Int64) { 8 });
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl126));
            return tmp2135;
        }
    }
    }
    result136 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp138 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl126);
        ITable* $tmp139 = ((panda$collections$Iterable*) $tmp138)->$class->itable;
        while ($tmp139->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp139 = $tmp139->next;
        }
        $fn141 $tmp140 = $tmp139->methods[0];
        panda$collections$Iterator* $tmp142 = $tmp140(((panda$collections$Iterable*) $tmp138));
        Iter$271$9137 = $tmp142;
        $l143:;
        ITable* $tmp145 = Iter$271$9137->$class->itable;
        while ($tmp145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp145 = $tmp145->next;
        }
        $fn147 $tmp146 = $tmp145->methods[0];
        panda$core$Bit $tmp148 = $tmp146(Iter$271$9137);
        panda$core$Bit $tmp149 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp148);
        if (!$tmp149.value) goto $l144;
        {
            ITable* $tmp151 = Iter$271$9137->$class->itable;
            while ($tmp151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp151 = $tmp151->next;
            }
            $fn153 $tmp152 = $tmp151->methods[1];
            panda$core$Object* $tmp154 = $tmp152(Iter$271$9137);
            f150 = ((org$pandalanguage$pandac$FieldDecl*) $tmp154);
            panda$core$Bit $tmp155 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f150->annotations);
            if ($tmp155.value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f150));
                    goto $l143;
                }
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f150);
            org$pandalanguage$pandac$Type* $tmp156 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp157 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f150->type, $tmp156);
            if ($tmp157.value) {
            {
                panda$core$Int64 $tmp158 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl126);
                panda$core$Int64 $tmp159 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result136, $tmp158);
                result136 = $tmp159;
            }
            }
            else {
            {
                panda$core$Int64 $tmp161 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f150->type);
                size160 = $tmp161;
                panda$core$Int64 $tmp163 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result136, size160);
                align162 = $tmp163;
                panda$core$Bit $tmp164 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align162, ((panda$core$Int64) { 0 }));
                if ($tmp164.value) {
                {
                    panda$core$Int64 $tmp165 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size160, align162);
                    panda$core$Int64 $tmp166 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result136, $tmp165);
                    result136 = $tmp166;
                }
                }
                panda$core$Int64 $tmp167 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result136, size160);
                panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp168.value);
                panda$core$Int64 $tmp169 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result136, size160);
                result136 = $tmp169;
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f150));
        }
        goto $l143;
        $l144:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$271$9137));
    }
    panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp170.value) {
    {
        panda$core$Int64 $tmp171 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result136, ((panda$core$Int64) { 1 }));
        result136 = $tmp171;
    }
    }
    {
        tmp3172 = result136;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl126));
        return tmp3172;
    }
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp173 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp174 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp173, ((panda$core$Int64) { 8 }));
    return $tmp174;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl175;
    panda$core$Int64 result181;
    panda$collections$Iterator* Iter$304$9184;
    org$pandalanguage$pandac$FieldDecl* f197;
    panda$core$Int64 size206;
    panda$core$Int64 align208;
    panda$core$Int64 tmp4218;
    org$pandalanguage$pandac$ClassDecl* $tmp176 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl175 = $tmp176;
    bool $tmp177 = ((panda$core$Bit) { cl175 != NULL }).value;
    if (!$tmp177) goto $l178;
    panda$core$Bit $tmp179 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl175);
    $tmp177 = $tmp179.value;
    $l178:;
    panda$core$Bit $tmp180 = { $tmp177 };
    PANDA_ASSERT($tmp180.value);
    org$pandalanguage$pandac$Type* $tmp182 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp183 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp182);
    result181 = $tmp183;
    {
        panda$collections$ListView* $tmp185 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl175);
        ITable* $tmp186 = ((panda$collections$Iterable*) $tmp185)->$class->itable;
        while ($tmp186->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp186 = $tmp186->next;
        }
        $fn188 $tmp187 = $tmp186->methods[0];
        panda$collections$Iterator* $tmp189 = $tmp187(((panda$collections$Iterable*) $tmp185));
        Iter$304$9184 = $tmp189;
        $l190:;
        ITable* $tmp192 = Iter$304$9184->$class->itable;
        while ($tmp192->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp192 = $tmp192->next;
        }
        $fn194 $tmp193 = $tmp192->methods[0];
        panda$core$Bit $tmp195 = $tmp193(Iter$304$9184);
        panda$core$Bit $tmp196 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp195);
        if (!$tmp196.value) goto $l191;
        {
            ITable* $tmp198 = Iter$304$9184->$class->itable;
            while ($tmp198->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp198 = $tmp198->next;
            }
            $fn200 $tmp199 = $tmp198->methods[1];
            panda$core$Object* $tmp201 = $tmp199(Iter$304$9184);
            f197 = ((org$pandalanguage$pandac$FieldDecl*) $tmp201);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f197);
            org$pandalanguage$pandac$Type* $tmp202 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp203 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f197->type, $tmp202);
            if ($tmp203.value) {
            {
                panda$core$Int64 $tmp204 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl175);
                panda$core$Int64 $tmp205 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result181, $tmp204);
                result181 = $tmp205;
            }
            }
            else {
            {
                panda$core$Int64 $tmp207 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f197->type);
                size206 = $tmp207;
                panda$core$Int64 $tmp209 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result181, size206);
                align208 = $tmp209;
                panda$core$Bit $tmp210 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align208, ((panda$core$Int64) { 0 }));
                if ($tmp210.value) {
                {
                    panda$core$Int64 $tmp211 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size206, align208);
                    panda$core$Int64 $tmp212 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result181, $tmp211);
                    result181 = $tmp212;
                }
                }
                panda$core$Int64 $tmp213 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result181, size206);
                panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp213, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp214.value);
                panda$core$Int64 $tmp215 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result181, size206);
                result181 = $tmp215;
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f197));
        }
        goto $l190;
        $l191:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$304$9184));
    }
    panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp216.value) {
    {
        panda$core$Int64 $tmp217 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result181, ((panda$core$Int64) { 1 }));
        result181 = $tmp217;
    }
    }
    {
        tmp4218 = result181;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl175));
        return tmp4218;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp219 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp219.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp220 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    return $tmp220;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp221.value) {
    {
        panda$core$Object* $tmp222 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp223 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp222));
        return $tmp223;
    }
    }
    panda$core$String* $tmp224 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp225 = panda$core$String$convert$R$panda$core$String($tmp224);
    panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp225, &$s226);
    return $tmp227;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp228 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp228, &$s229);
    return $tmp230;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType231;
    panda$core$MutableString* result233;
    panda$core$Char8 $tmp239;
    panda$core$Char8 $tmp247;
    panda$core$Range$LTpanda$core$Int64$GT $tmp248;
    panda$core$String* tmp5274;
    org$pandalanguage$pandac$Type* $tmp232 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType231 = $tmp232;
    panda$core$MutableString* $tmp234 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp234);
    result233 = $tmp234;
    panda$core$Int64 $tmp235 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType231->subtypes);
    panda$core$Int64 $tmp236 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp235, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp237 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType231->subtypes, $tmp236);
    panda$core$String* $tmp238 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp237));
    panda$core$MutableString$append$panda$core$String(result233, $tmp238);
    panda$core$Char8$init$panda$core$UInt8(&$tmp239, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(result233, $tmp239);
    panda$core$Bit $tmp240 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp240.value);
    panda$core$String* $tmp241 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp242 = panda$core$String$convert$R$panda$core$String($tmp241);
    panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, &$s243);
    panda$core$MutableString$append$panda$core$String(result233, $tmp244);
    panda$core$Bit $tmp245 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp245.value) {
    {
        panda$core$MutableString$append$panda$core$String(result233, &$s246);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp247, ((panda$core$UInt8) { 42 }));
    panda$core$MutableString$append$panda$core$Char8(result233, $tmp247);
    panda$core$Int64 $tmp249 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType231->subtypes);
    panda$core$Int64 $tmp250 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp249, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp248, ((panda$core$Int64) { 0 }), $tmp250, ((panda$core$Bit) { false }));
    int64_t $tmp252 = $tmp248.min.value;
    panda$core$Int64 i251 = { $tmp252 };
    int64_t $tmp254 = $tmp248.max.value;
    bool $tmp255 = $tmp248.inclusive.value;
    if ($tmp255) goto $l262; else goto $l263;
    $l262:;
    if ($tmp252 <= $tmp254) goto $l256; else goto $l258;
    $l263:;
    if ($tmp252 < $tmp254) goto $l256; else goto $l258;
    $l256:;
    {
        panda$core$MutableString$append$panda$core$String(result233, &$s264);
        panda$core$Object* $tmp265 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType231->subtypes, i251);
        panda$core$String* $tmp266 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp265));
        panda$core$MutableString$append$panda$core$String(result233, $tmp266);
    }
    $l259:;
    int64_t $tmp268 = $tmp254 - i251.value;
    if ($tmp255) goto $l269; else goto $l270;
    $l269:;
    if ((uint64_t) $tmp268 >= 1) goto $l267; else goto $l258;
    $l270:;
    if ((uint64_t) $tmp268 > 1) goto $l267; else goto $l258;
    $l267:;
    i251.value += 1;
    goto $l256;
    $l258:;
    panda$core$MutableString$append$panda$core$String(result233, &$s273);
    {
        panda$core$String* $tmp275 = panda$core$MutableString$finish$R$panda$core$String(result233);
        tmp5274 = $tmp275;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result233));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inheritedType231));
        }
        return tmp5274;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp276.value);
    panda$core$Object* $tmp277 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp278 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp277));
    panda$core$String* $tmp279 = panda$core$String$convert$R$panda$core$String($tmp278);
    panda$core$String* $tmp281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp279, &$s280);
    return $tmp281;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces282;
    panda$core$String* previous285;
    panda$collections$Iterator* Iter$374$9287;
    org$pandalanguage$pandac$Type* intfType299;
    org$pandalanguage$pandac$ClassDecl* intf304;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC306;
    panda$collections$ListView* methods308;
    panda$core$String* name310;
    panda$core$MutableString* result319;
    panda$core$String* separator348;
    panda$collections$Iterator* Iter$383$13350;
    org$pandalanguage$pandac$MethodDecl* m362;
    panda$core$String* tmp6378;
    org$pandalanguage$pandac$Type* $tmp283 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp284 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp283);
    interfaces282 = $tmp284;
    previous285 = &$s286;
    {
        ITable* $tmp288 = ((panda$collections$Iterable*) interfaces282)->$class->itable;
        while ($tmp288->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp288 = $tmp288->next;
        }
        $fn290 $tmp289 = $tmp288->methods[0];
        panda$collections$Iterator* $tmp291 = $tmp289(((panda$collections$Iterable*) interfaces282));
        Iter$374$9287 = $tmp291;
        $l292:;
        ITable* $tmp294 = Iter$374$9287->$class->itable;
        while ($tmp294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp294 = $tmp294->next;
        }
        $fn296 $tmp295 = $tmp294->methods[0];
        panda$core$Bit $tmp297 = $tmp295(Iter$374$9287);
        panda$core$Bit $tmp298 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp297);
        if (!$tmp298.value) goto $l293;
        {
            ITable* $tmp300 = Iter$374$9287->$class->itable;
            while ($tmp300->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp300 = $tmp300->next;
            }
            $fn302 $tmp301 = $tmp300->methods[1];
            panda$core$Object* $tmp303 = $tmp301(Iter$374$9287);
            intfType299 = ((org$pandalanguage$pandac$Type*) $tmp303);
            org$pandalanguage$pandac$ClassDecl* $tmp305 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType299);
            intf304 = $tmp305;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp307 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf304);
            intfCC306 = $tmp307;
            panda$collections$ListView* $tmp309 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType299);
            methods308 = $tmp309;
            panda$core$String* $tmp311 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp312 = panda$core$String$convert$R$panda$core$String($tmp311);
            panda$core$String* $tmp314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp312, &$s313);
            panda$core$String* $tmp315 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf304)->name);
            panda$core$String* $tmp316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp314, $tmp315);
            panda$core$String* $tmp318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp316, &$s317);
            name310 = $tmp318;
            panda$core$MutableString* $tmp320 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            org$pandalanguage$pandac$Type* $tmp322 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp323 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp322);
            panda$core$String* $tmp324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s321, $tmp323);
            panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp324, &$s325);
            ITable* $tmp328 = ((panda$collections$CollectionView*) methods308)->$class->itable;
            while ($tmp328->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp328 = $tmp328->next;
            }
            $fn330 $tmp329 = $tmp328->methods[0];
            panda$core$Int64 $tmp331 = $tmp329(((panda$collections$CollectionView*) methods308));
            panda$core$Int64$wrapper* $tmp332;
            $tmp332 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp332->value = $tmp331;
            panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s327, ((panda$core$Object*) $tmp332));
            panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, &$s334);
            panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp335, name310);
            panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp336, &$s337);
            panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp326, $tmp338);
            panda$core$String* $tmp341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s340, intfCC306->name);
            panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp341, &$s342);
            panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, previous285);
            panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp344, &$s345);
            panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp339, $tmp346);
            panda$core$MutableString$init$panda$core$String($tmp320, $tmp347);
            result319 = $tmp320;
            separator348 = &$s349;
            {
                ITable* $tmp351 = ((panda$collections$Iterable*) methods308)->$class->itable;
                while ($tmp351->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp351 = $tmp351->next;
                }
                $fn353 $tmp352 = $tmp351->methods[0];
                panda$collections$Iterator* $tmp354 = $tmp352(((panda$collections$Iterable*) methods308));
                Iter$383$13350 = $tmp354;
                $l355:;
                ITable* $tmp357 = Iter$383$13350->$class->itable;
                while ($tmp357->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp357 = $tmp357->next;
                }
                $fn359 $tmp358 = $tmp357->methods[0];
                panda$core$Bit $tmp360 = $tmp358(Iter$383$13350);
                panda$core$Bit $tmp361 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp360);
                if (!$tmp361.value) goto $l356;
                {
                    ITable* $tmp363 = Iter$383$13350->$class->itable;
                    while ($tmp363->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp363 = $tmp363->next;
                    }
                    $fn365 $tmp364 = $tmp363->methods[1];
                    panda$core$Object* $tmp366 = $tmp364(Iter$383$13350);
                    m362 = ((org$pandalanguage$pandac$MethodDecl*) $tmp366);
                    panda$core$MutableString$append$panda$core$String(result319, separator348);
                    {
                        separator348 = &$s367;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator348));
                    }
                    panda$core$Bit $tmp368 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m362->annotations);
                    if ($tmp368.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result319, &$s369);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp370 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m362);
                        panda$core$MutableString$append$panda$core$String(result319, $tmp370);
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m362));
                }
                goto $l355;
                $l356:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$383$13350));
            }
            panda$core$MutableString$append$panda$core$String(result319, &$s371);
            panda$core$String* $tmp372 = panda$core$MutableString$finish$R$panda$core$String(result319);
            (($fn373) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp372);
            {
                panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s374, name310);
                panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp375, &$s376);
                previous285 = $tmp377;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous285));
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator348));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods308));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result319));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf304));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfType299));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name310));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfCC306));
            }
        }
        goto $l292;
        $l293:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$374$9287));
    }
    {
        tmp6378 = previous285;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous285));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) interfaces282));
        }
        return tmp6378;
    }
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer379;
    panda$io$IndentedOutputStream* out381;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found383;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* tmp7385;
    org$pandalanguage$pandac$Type* effectiveReturnType392;
    panda$core$String* resultName396;
    panda$core$MutableString* resultType400;
    panda$core$String* self_t410;
    panda$core$Char8 $tmp416;
    panda$core$Range$LTpanda$core$Int64$GT $tmp417;
    panda$core$String* pType432;
    panda$collections$Array* casts455;
    panda$core$Range$LTpanda$core$Int64$GT $tmp457;
    panda$core$String* p472;
    panda$core$Range$LTpanda$core$Int64$GT $tmp502;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result543;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* tmp8548;
    panda$io$MemoryOutputStream* $tmp380 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp380);
    outBuffer379 = $tmp380;
    panda$io$IndentedOutputStream* $tmp382 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp382, ((panda$io$OutputStream*) outBuffer379));
    out381 = $tmp382;
    panda$core$Object* $tmp384 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found383 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp384);
    if (((panda$core$Bit) { found383 != NULL }).value) {
    {
        {
            tmp7385 = found383;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found383));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) out381));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outBuffer379));
            }
            return tmp7385;
        }
    }
    }
    panda$core$Bit $tmp386 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp386.value);
    panda$core$Int64 $tmp387 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp388 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp389 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp388, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp387, $tmp389);
    PANDA_ASSERT($tmp390.value);
    panda$core$Bit $tmp391 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp391.value);
    panda$core$Int64 $tmp393 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp394 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp393, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp395 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp394);
    effectiveReturnType392 = ((org$pandalanguage$pandac$Type*) $tmp395);
    panda$core$String* $tmp397 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp397, &$s398);
    resultName396 = $tmp399;
    panda$core$MutableString* $tmp401 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp402 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType392);
    panda$core$MutableString$init$panda$core$String($tmp401, $tmp402);
    resultType400 = $tmp401;
    panda$core$String* $tmp403 = panda$core$MutableString$convert$R$panda$core$String(resultType400);
    panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp403, &$s404);
    panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, resultName396);
    panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp406, &$s407);
    (($fn409) ((panda$io$OutputStream*) out381)->$class->vtable[16])(((panda$io$OutputStream*) out381), $tmp408);
    panda$core$String* $tmp411 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t410 = $tmp411;
    panda$core$String* $tmp412 = panda$core$String$convert$R$panda$core$String(self_t410);
    panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp412, &$s413);
    (($fn415) ((panda$io$OutputStream*) out381)->$class->vtable[16])(((panda$io$OutputStream*) out381), $tmp414);
    panda$core$Char8$init$panda$core$UInt8(&$tmp416, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(resultType400, $tmp416);
    panda$core$MutableString$append$panda$core$String(resultType400, self_t410);
    panda$core$Int64 $tmp418 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp417, ((panda$core$Int64) { 0 }), $tmp418, ((panda$core$Bit) { false }));
    int64_t $tmp420 = $tmp417.min.value;
    panda$core$Int64 i419 = { $tmp420 };
    int64_t $tmp422 = $tmp417.max.value;
    bool $tmp423 = $tmp417.inclusive.value;
    if ($tmp423) goto $l430; else goto $l431;
    $l430:;
    if ($tmp420 <= $tmp422) goto $l424; else goto $l426;
    $l431:;
    if ($tmp420 < $tmp422) goto $l424; else goto $l426;
    $l424:;
    {
        panda$core$Object* $tmp433 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i419);
        panda$core$String* $tmp434 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp433));
        pType432 = $tmp434;
        panda$core$MutableString$append$panda$core$String(resultType400, &$s435);
        panda$core$MutableString$append$panda$core$String(resultType400, pType432);
        panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s436, pType432);
        panda$core$String* $tmp439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp437, &$s438);
        panda$core$Int64$wrapper* $tmp440;
        $tmp440 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp440->value = i419;
        panda$core$String* $tmp441 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp439, ((panda$core$Object*) $tmp440));
        panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp441, &$s442);
        (($fn444) ((panda$io$OutputStream*) out381)->$class->vtable[16])(((panda$io$OutputStream*) out381), $tmp443);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pType432));
    }
    $l427:;
    int64_t $tmp446 = $tmp422 - i419.value;
    if ($tmp423) goto $l447; else goto $l448;
    $l447:;
    if ((uint64_t) $tmp446 >= 1) goto $l445; else goto $l426;
    $l448:;
    if ((uint64_t) $tmp446 > 1) goto $l445; else goto $l426;
    $l445:;
    i419.value += 1;
    goto $l424;
    $l426:;
    (($fn452) ((panda$io$OutputStream*) out381)->$class->vtable[19])(((panda$io$OutputStream*) out381), &$s451);
    panda$core$Int64 $tmp453 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out381->level, ((panda$core$Int64) { 1 }));
    out381->level = $tmp453;
    panda$core$MutableString$append$panda$core$String(resultType400, &$s454);
    panda$collections$Array* $tmp456 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp456);
    casts455 = $tmp456;
    panda$core$Int64 $tmp458 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp457, ((panda$core$Int64) { 0 }), $tmp458, ((panda$core$Bit) { false }));
    int64_t $tmp460 = $tmp457.min.value;
    panda$core$Int64 i459 = { $tmp460 };
    int64_t $tmp462 = $tmp457.max.value;
    bool $tmp463 = $tmp457.inclusive.value;
    if ($tmp463) goto $l470; else goto $l471;
    $l470:;
    if ($tmp460 <= $tmp462) goto $l464; else goto $l466;
    $l471:;
    if ($tmp460 < $tmp462) goto $l464; else goto $l466;
    $l464:;
    {
        panda$core$Int64$wrapper* $tmp474;
        $tmp474 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp474->value = i459;
        panda$core$String* $tmp475 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s473, ((panda$core$Object*) $tmp474));
        panda$core$String* $tmp477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp475, &$s476);
        p472 = $tmp477;
        panda$core$Object* $tmp478 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i459);
        panda$core$Object* $tmp479 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i459);
        panda$core$Bit $tmp480 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp478)->type, ((org$pandalanguage$pandac$Type*) $tmp479));
        if ($tmp480.value) {
        {
            panda$core$Object* $tmp481 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i459);
            panda$core$Object* $tmp482 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i459);
            panda$core$String* $tmp483 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p472, ((org$pandalanguage$pandac$Type*) $tmp481), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp482)->type, out381);
            panda$collections$Array$add$panda$collections$Array$T(casts455, ((panda$core$Object*) $tmp483));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts455, ((panda$core$Object*) p472));
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p472));
    }
    $l467:;
    int64_t $tmp485 = $tmp462 - i459.value;
    if ($tmp463) goto $l486; else goto $l487;
    $l486:;
    if ((uint64_t) $tmp485 >= 1) goto $l484; else goto $l466;
    $l487:;
    if ((uint64_t) $tmp485 > 1) goto $l484; else goto $l466;
    $l484:;
    i459.value += 1;
    goto $l464;
    $l466:;
    org$pandalanguage$pandac$Type* $tmp490 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp491 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp490);
    if ($tmp491.value) {
    {
        panda$core$String* $tmp492 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp493 = panda$core$String$convert$R$panda$core$String($tmp492);
        panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp493, &$s494);
        (($fn496) ((panda$io$OutputStream*) out381)->$class->vtable[16])(((panda$io$OutputStream*) out381), $tmp495);
    }
    }
    panda$core$String* $tmp497 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp498 = panda$core$String$convert$R$panda$core$String($tmp497);
    panda$core$String* $tmp500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp498, &$s499);
    (($fn501) ((panda$io$OutputStream*) out381)->$class->vtable[16])(((panda$io$OutputStream*) out381), $tmp500);
    panda$core$Int64 $tmp503 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp502, ((panda$core$Int64) { 0 }), $tmp503, ((panda$core$Bit) { false }));
    int64_t $tmp505 = $tmp502.min.value;
    panda$core$Int64 i504 = { $tmp505 };
    int64_t $tmp507 = $tmp502.max.value;
    bool $tmp508 = $tmp502.inclusive.value;
    if ($tmp508) goto $l515; else goto $l516;
    $l515:;
    if ($tmp505 <= $tmp507) goto $l509; else goto $l511;
    $l516:;
    if ($tmp505 < $tmp507) goto $l509; else goto $l511;
    $l509:;
    {
        panda$core$Object* $tmp518 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts455, i504);
        panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s517, ((panda$core$String*) $tmp518));
        panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp519, &$s520);
        (($fn522) ((panda$io$OutputStream*) out381)->$class->vtable[16])(((panda$io$OutputStream*) out381), $tmp521);
    }
    $l512:;
    int64_t $tmp524 = $tmp507 - i504.value;
    if ($tmp508) goto $l525; else goto $l526;
    $l525:;
    if ((uint64_t) $tmp524 >= 1) goto $l523; else goto $l511;
    $l526:;
    if ((uint64_t) $tmp524 > 1) goto $l523; else goto $l511;
    $l523:;
    i504.value += 1;
    goto $l509;
    $l511:;
    (($fn530) ((panda$io$OutputStream*) out381)->$class->vtable[19])(((panda$io$OutputStream*) out381), &$s529);
    org$pandalanguage$pandac$Type* $tmp531 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp532 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp531);
    if ($tmp532.value) {
    {
        panda$core$String* $tmp535 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s534, p_raw->returnType, effectiveReturnType392, out381);
        panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s533, $tmp535);
        panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp536, &$s537);
        (($fn539) ((panda$io$OutputStream*) out381)->$class->vtable[19])(((panda$io$OutputStream*) out381), $tmp538);
    }
    }
    panda$core$Int64 $tmp540 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out381->level, ((panda$core$Int64) { 1 }));
    out381->level = $tmp540;
    (($fn542) ((panda$io$OutputStream*) out381)->$class->vtable[19])(((panda$io$OutputStream*) out381), &$s541);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp544 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class);
    panda$core$String* $tmp545 = panda$core$MutableString$finish$R$panda$core$String(resultType400);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp544, resultName396, $tmp545);
    result543 = $tmp544;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result543));
    panda$core$String* $tmp546 = panda$io$MemoryOutputStream$finish$R$panda$core$String(outBuffer379);
    (($fn547) p_rawOut->$class->vtable[16])(p_rawOut, $tmp546);
    {
        tmp8548 = result543;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found383));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) casts455));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result543));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultName396));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self_t410));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) out381));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) effectiveReturnType392));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outBuffer379));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultType400));
        }
        return tmp8548;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod550;
    panda$core$String* result551;
    panda$core$String* selfType556;
    org$pandalanguage$pandac$Type* actualMethodType572;
    org$pandalanguage$pandac$Type* inheritedMethodType574;
    panda$core$Range$LTpanda$core$Int64$GT $tmp576;
    panda$collections$Array* parameters611;
    panda$core$Range$LTpanda$core$Int64$GT $tmp613;
    panda$collections$Array* children638;
    org$pandalanguage$pandac$Position $tmp641;
    panda$core$Range$LTpanda$core$Int64$GT $tmp652;
    panda$core$String* tmp9684;
    panda$core$Bit $tmp549 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp549.value);
    oldMethod550 = self->currentMethod;
    {
        self->currentMethod = p_m;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentMethod));
    }
    panda$core$String* $tmp552 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp553 = panda$core$String$convert$R$panda$core$String($tmp552);
    panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp553, &$s554);
    result551 = $tmp555;
    panda$core$String* $tmp557 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp558 = panda$core$String$convert$R$panda$core$String($tmp557);
    panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp558, &$s559);
    selfType556 = $tmp560;
    panda$core$String* $tmp561 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp562 = panda$core$String$convert$R$panda$core$String($tmp561);
    panda$core$String* $tmp564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp562, &$s563);
    panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp564, result551);
    panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp565, &$s566);
    panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp567, selfType556);
    panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, &$s569);
    (($fn571) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp570);
    org$pandalanguage$pandac$Type* $tmp573 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType572 = $tmp573;
    org$pandalanguage$pandac$Type* $tmp575 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType574 = $tmp575;
    panda$core$Int64 $tmp577 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp576, ((panda$core$Int64) { 0 }), $tmp577, ((panda$core$Bit) { false }));
    int64_t $tmp579 = $tmp576.min.value;
    panda$core$Int64 i578 = { $tmp579 };
    int64_t $tmp581 = $tmp576.max.value;
    bool $tmp582 = $tmp576.inclusive.value;
    if ($tmp582) goto $l589; else goto $l590;
    $l589:;
    if ($tmp579 <= $tmp581) goto $l583; else goto $l585;
    $l590:;
    if ($tmp579 < $tmp581) goto $l583; else goto $l585;
    $l583:;
    {
        panda$core$Object* $tmp592 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType574->subtypes, i578);
        panda$core$String* $tmp593 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp592));
        panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s591, $tmp593);
        panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp594, &$s595);
        panda$core$Object* $tmp597 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i578);
        panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp597)->name);
        panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp598, &$s599);
        (($fn601) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp600);
    }
    $l586:;
    int64_t $tmp603 = $tmp581 - i578.value;
    if ($tmp582) goto $l604; else goto $l605;
    $l604:;
    if ((uint64_t) $tmp603 >= 1) goto $l602; else goto $l585;
    $l605:;
    if ((uint64_t) $tmp603 > 1) goto $l602; else goto $l585;
    $l602:;
    i578.value += 1;
    goto $l583;
    $l585:;
    (($fn609) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s608);
    panda$core$Int64 $tmp610 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp610;
    panda$collections$Array* $tmp612 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp612);
    parameters611 = $tmp612;
    panda$core$Int64 $tmp614 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp613, ((panda$core$Int64) { 0 }), $tmp614, ((panda$core$Bit) { false }));
    int64_t $tmp616 = $tmp613.min.value;
    panda$core$Int64 i615 = { $tmp616 };
    int64_t $tmp618 = $tmp613.max.value;
    bool $tmp619 = $tmp613.inclusive.value;
    if ($tmp619) goto $l626; else goto $l627;
    $l626:;
    if ($tmp616 <= $tmp618) goto $l620; else goto $l622;
    $l627:;
    if ($tmp616 < $tmp618) goto $l620; else goto $l622;
    $l620:;
    {
        panda$core$Object* $tmp628 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i615);
        panda$core$Object* $tmp629 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType574->subtypes, i615);
        panda$core$Object* $tmp630 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType572->subtypes, i615);
        panda$core$String* $tmp631 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp628)->name, ((org$pandalanguage$pandac$Type*) $tmp629), ((org$pandalanguage$pandac$Type*) $tmp630), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters611, ((panda$core$Object*) $tmp631));
    }
    $l623:;
    int64_t $tmp633 = $tmp618 - i615.value;
    if ($tmp619) goto $l634; else goto $l635;
    $l634:;
    if ((uint64_t) $tmp633 >= 1) goto $l632; else goto $l622;
    $l635:;
    if ((uint64_t) $tmp633 > 1) goto $l632; else goto $l622;
    $l632:;
    i615.value += 1;
    goto $l620;
    $l622:;
    panda$collections$Array* $tmp639 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp639);
    children638 = $tmp639;
    org$pandalanguage$pandac$IRNode* $tmp640 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
    org$pandalanguage$pandac$Position$init(&$tmp641);
    org$pandalanguage$pandac$Type* $tmp642 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp640, ((panda$core$Int64) { 31 }), $tmp641, $tmp642);
    panda$collections$Array$add$panda$collections$Array$T(children638, ((panda$core$Object*) $tmp640));
    org$pandalanguage$pandac$Type* $tmp643 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp644 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp643);
    if ($tmp644.value) {
    {
        (($fn646) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s645);
    }
    }
    panda$core$String* $tmp647 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp648 = panda$core$String$convert$R$panda$core$String($tmp647);
    panda$core$String* $tmp650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp648, &$s649);
    (($fn651) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp650);
    panda$core$Int64 $tmp653 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp652, ((panda$core$Int64) { 0 }), $tmp653, ((panda$core$Bit) { false }));
    int64_t $tmp655 = $tmp652.min.value;
    panda$core$Int64 i654 = { $tmp655 };
    int64_t $tmp657 = $tmp652.max.value;
    bool $tmp658 = $tmp652.inclusive.value;
    if ($tmp658) goto $l665; else goto $l666;
    $l665:;
    if ($tmp655 <= $tmp657) goto $l659; else goto $l661;
    $l666:;
    if ($tmp655 < $tmp657) goto $l659; else goto $l661;
    $l659:;
    {
        panda$core$Object* $tmp668 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters611, i654);
        panda$core$String* $tmp669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s667, ((panda$core$String*) $tmp668));
        panda$core$String* $tmp671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp669, &$s670);
        (($fn672) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp671);
    }
    $l662:;
    int64_t $tmp674 = $tmp657 - i654.value;
    if ($tmp658) goto $l675; else goto $l676;
    $l675:;
    if ((uint64_t) $tmp674 >= 1) goto $l673; else goto $l661;
    $l676:;
    if ((uint64_t) $tmp674 > 1) goto $l673; else goto $l661;
    $l673:;
    i654.value += 1;
    goto $l659;
    $l661:;
    (($fn680) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s679);
    panda$core$Int64 $tmp681 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp681;
    (($fn683) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s682);
    {
        self->currentMethod = oldMethod550;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentMethod));
    }
    {
        tmp9684 = result551;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inheritedMethodType574));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) selfType556));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result551));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters611));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldMethod550));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children638));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType572));
        }
        return tmp9684;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces685;
    panda$core$String* previous688;
    panda$collections$Iterator* Iter$496$9690;
    org$pandalanguage$pandac$Type* intfType702;
    org$pandalanguage$pandac$ClassDecl* intf707;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC709;
    panda$collections$ListView* methods711;
    panda$core$String* name713;
    panda$core$MutableString* result722;
    panda$core$String* separator756;
    panda$collections$Iterator* Iter$505$13758;
    org$pandalanguage$pandac$MethodDecl* m770;
    panda$core$String* tmp10786;
    org$pandalanguage$pandac$Type* $tmp686 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp687 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp686);
    interfaces685 = $tmp687;
    previous688 = &$s689;
    {
        ITable* $tmp691 = ((panda$collections$Iterable*) interfaces685)->$class->itable;
        while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp691 = $tmp691->next;
        }
        $fn693 $tmp692 = $tmp691->methods[0];
        panda$collections$Iterator* $tmp694 = $tmp692(((panda$collections$Iterable*) interfaces685));
        Iter$496$9690 = $tmp694;
        $l695:;
        ITable* $tmp697 = Iter$496$9690->$class->itable;
        while ($tmp697->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp697 = $tmp697->next;
        }
        $fn699 $tmp698 = $tmp697->methods[0];
        panda$core$Bit $tmp700 = $tmp698(Iter$496$9690);
        panda$core$Bit $tmp701 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp700);
        if (!$tmp701.value) goto $l696;
        {
            ITable* $tmp703 = Iter$496$9690->$class->itable;
            while ($tmp703->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp703 = $tmp703->next;
            }
            $fn705 $tmp704 = $tmp703->methods[1];
            panda$core$Object* $tmp706 = $tmp704(Iter$496$9690);
            intfType702 = ((org$pandalanguage$pandac$Type*) $tmp706);
            org$pandalanguage$pandac$ClassDecl* $tmp708 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType702);
            intf707 = $tmp708;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp710 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf707);
            intfCC709 = $tmp710;
            panda$collections$ListView* $tmp712 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType702);
            methods711 = $tmp712;
            panda$core$String* $tmp714 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp715 = panda$core$String$convert$R$panda$core$String($tmp714);
            panda$core$String* $tmp717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp715, &$s716);
            panda$core$String* $tmp718 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf707)->name);
            panda$core$String* $tmp719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp717, $tmp718);
            panda$core$String* $tmp721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp719, &$s720);
            name713 = $tmp721;
            panda$core$MutableString* $tmp723 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            org$pandalanguage$pandac$Type* $tmp725 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp726 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp725);
            panda$core$String* $tmp727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s724, $tmp726);
            panda$core$String* $tmp729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp727, &$s728);
            ITable* $tmp731 = ((panda$collections$CollectionView*) methods711)->$class->itable;
            while ($tmp731->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp731 = $tmp731->next;
            }
            $fn733 $tmp732 = $tmp731->methods[0];
            panda$core$Int64 $tmp734 = $tmp732(((panda$collections$CollectionView*) methods711));
            panda$core$Int64$wrapper* $tmp735;
            $tmp735 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp735->value = $tmp734;
            panda$core$String* $tmp736 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s730, ((panda$core$Object*) $tmp735));
            panda$core$String* $tmp738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp736, &$s737);
            panda$core$String* $tmp739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp738, name713);
            panda$core$String* $tmp741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp739, &$s740);
            panda$core$String* $tmp742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp729, $tmp741);
            org$pandalanguage$pandac$Type* $tmp744 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp745 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp744);
            panda$core$String* $tmp746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s743, $tmp745);
            panda$core$String* $tmp748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp746, &$s747);
            panda$core$String* $tmp749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp748, intfCC709->name);
            panda$core$String* $tmp751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp749, &$s750);
            panda$core$String* $tmp752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp751, previous688);
            panda$core$String* $tmp754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp752, &$s753);
            panda$core$String* $tmp755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp742, $tmp754);
            panda$core$MutableString$init$panda$core$String($tmp723, $tmp755);
            result722 = $tmp723;
            separator756 = &$s757;
            {
                ITable* $tmp759 = ((panda$collections$Iterable*) methods711)->$class->itable;
                while ($tmp759->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp759 = $tmp759->next;
                }
                $fn761 $tmp760 = $tmp759->methods[0];
                panda$collections$Iterator* $tmp762 = $tmp760(((panda$collections$Iterable*) methods711));
                Iter$505$13758 = $tmp762;
                $l763:;
                ITable* $tmp765 = Iter$505$13758->$class->itable;
                while ($tmp765->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp765 = $tmp765->next;
                }
                $fn767 $tmp766 = $tmp765->methods[0];
                panda$core$Bit $tmp768 = $tmp766(Iter$505$13758);
                panda$core$Bit $tmp769 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp768);
                if (!$tmp769.value) goto $l764;
                {
                    ITable* $tmp771 = Iter$505$13758->$class->itable;
                    while ($tmp771->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp771 = $tmp771->next;
                    }
                    $fn773 $tmp772 = $tmp771->methods[1];
                    panda$core$Object* $tmp774 = $tmp772(Iter$505$13758);
                    m770 = ((org$pandalanguage$pandac$MethodDecl*) $tmp774);
                    panda$core$MutableString$append$panda$core$String(result722, separator756);
                    {
                        separator756 = &$s775;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator756));
                    }
                    panda$core$Bit $tmp776 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m770->annotations);
                    if ($tmp776.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result722, &$s777);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp778 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m770, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result722, $tmp778);
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m770));
                }
                goto $l763;
                $l764:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$505$13758));
            }
            panda$core$MutableString$append$panda$core$String(result722, &$s779);
            panda$core$String* $tmp780 = panda$core$MutableString$finish$R$panda$core$String(result722);
            (($fn781) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp780);
            {
                panda$core$String* $tmp783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s782, name713);
                panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp783, &$s784);
                previous688 = $tmp785;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous688));
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator756));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods711));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result722));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf707));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfType702));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name713));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfCC709));
            }
        }
        goto $l695;
        $l696:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$496$9690));
    }
    {
        tmp10786 = previous688;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous688));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) interfaces685));
        }
        return tmp10786;
    }
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp787 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp787;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result789;
    org$pandalanguage$pandac$Type* declared790;
    org$pandalanguage$pandac$Type* inherited793;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim796;
    panda$core$String* tmp11800;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    panda$core$Bit $tmp788 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp788.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    memset(&result789, 0, sizeof(result789));
    org$pandalanguage$pandac$Type* $tmp791 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp792 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp791);
    declared790 = $tmp792;
    org$pandalanguage$pandac$Type* $tmp794 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited793 = $tmp794;
    panda$core$Bit $tmp795 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared790, inherited793);
    if ($tmp795.value) {
    {
        org$pandalanguage$pandac$Type* $tmp797 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp798 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp797, ((panda$io$OutputStream*) self->shims));
        shim796 = $tmp798;
        {
            result789 = shim796->name;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result789));
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) shim796));
    }
    }
    else {
    {
        {
            panda$core$String* $tmp799 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            result789 = $tmp799;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result789));
        }
    }
    }
    {
        tmp11800 = result789;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inherited793));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result789));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declared790));
        }
        return tmp11800;
    }
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result801;
    panda$core$String* type803;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp12812;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp13814;
    panda$collections$ListView* vtable815;
    panda$core$String* superPtr824;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC825;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant833;
    panda$core$String* name837;
    panda$core$MutableString* code841;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp844;
    panda$core$String* separator876;
    panda$collections$Iterator* Iter$576$13878;
    org$pandalanguage$pandac$MethodDecl* m890;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp14903;
    panda$core$Object* $tmp802 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result801 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp802);
    if (((panda$core$Bit) { result801 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        memset(&type803, 0, sizeof(type803));
        panda$core$Bit $tmp804 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp804.value) {
        {
            {
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp805 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
                org$pandalanguage$pandac$Type* $tmp806 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                panda$core$String* $tmp807 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp806)->name);
                panda$core$String* $tmp808 = panda$core$String$convert$R$panda$core$String($tmp807);
                panda$core$String* $tmp810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp808, &$s809);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp805, $tmp810, &$s811);
                result801 = $tmp805;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result801));
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result801));
            {
                panda$core$Object* $tmp813 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
                tmp12812 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp813);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type803));
                {
                    tmp13814 = tmp12812;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result801));
                    return tmp13814;
                }
            }
        }
        }
        panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp816 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable815 = $tmp816;
        {
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp817 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
            org$pandalanguage$pandac$Type* $tmp818 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp819 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp818)->name);
            panda$core$String* $tmp820 = panda$core$String$convert$R$panda$core$String($tmp819);
            panda$core$String* $tmp822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp820, &$s821);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp817, $tmp822, &$s823);
            result801 = $tmp817;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result801));
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result801));
        memset(&superPtr824, 0, sizeof(superPtr824));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp826 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp827 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp826);
            superCC825 = $tmp827;
            {
                panda$core$String* $tmp829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s828, superCC825->name);
                panda$core$String* $tmp831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp829, &$s830);
                superPtr824 = $tmp831;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superPtr824));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCC825));
        }
        }
        else {
        {
            {
                superPtr824 = &$s832;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superPtr824));
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp834 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp835 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp834);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp836 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp835);
        clConstant833 = $tmp836;
        panda$core$String* $tmp838 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        name837 = $tmp838;
        panda$core$Bit $tmp840 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(name837, &$s839);
        PANDA_ASSERT($tmp840.value);
        panda$core$MutableString* $tmp842 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp844, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp845 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(name837, $tmp844);
        panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s843, $tmp845);
        panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp846, &$s847);
        panda$core$String* $tmp849 = panda$core$String$convert$R$panda$core$String(result801->name);
        panda$core$String* $tmp851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp849, &$s850);
        panda$core$String* $tmp852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp851, result801->name);
        panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp852, &$s853);
        panda$core$String* $tmp855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp848, $tmp854);
        panda$core$String* $tmp857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s856, clConstant833->name);
        panda$core$String* $tmp859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp857, &$s858);
        panda$core$Int64$wrapper* $tmp860;
        $tmp860 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp860->value = ((panda$core$Int64) { -999 });
        panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp859, ((panda$core$Object*) $tmp860));
        panda$core$String* $tmp863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp861, &$s862);
        panda$core$String* $tmp864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp855, $tmp863);
        panda$core$String* $tmp865 = panda$core$String$convert$R$panda$core$String(name837);
        panda$core$String* $tmp867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp865, &$s866);
        panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp867, superPtr824);
        panda$core$String* $tmp870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp868, &$s869);
        panda$core$String* $tmp871 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp870, $tmp871);
        panda$core$String* $tmp874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp872, &$s873);
        panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp864, $tmp874);
        panda$core$MutableString$init$panda$core$String($tmp842, $tmp875);
        code841 = $tmp842;
        separator876 = &$s877;
        {
            ITable* $tmp879 = ((panda$collections$Iterable*) vtable815)->$class->itable;
            while ($tmp879->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp879 = $tmp879->next;
            }
            $fn881 $tmp880 = $tmp879->methods[0];
            panda$collections$Iterator* $tmp882 = $tmp880(((panda$collections$Iterable*) vtable815));
            Iter$576$13878 = $tmp882;
            $l883:;
            ITable* $tmp885 = Iter$576$13878->$class->itable;
            while ($tmp885->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp885 = $tmp885->next;
            }
            $fn887 $tmp886 = $tmp885->methods[0];
            panda$core$Bit $tmp888 = $tmp886(Iter$576$13878);
            panda$core$Bit $tmp889 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp888);
            if (!$tmp889.value) goto $l884;
            {
                ITable* $tmp891 = Iter$576$13878->$class->itable;
                while ($tmp891->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp891 = $tmp891->next;
                }
                $fn893 $tmp892 = $tmp891->methods[1];
                panda$core$Object* $tmp894 = $tmp892(Iter$576$13878);
                m890 = ((org$pandalanguage$pandac$MethodDecl*) $tmp894);
                panda$core$MutableString$append$panda$core$String(code841, separator876);
                panda$core$Bit $tmp895 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m890->annotations);
                if ($tmp895.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code841, &$s896);
                }
                }
                else {
                {
                    panda$core$String* $tmp897 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m890);
                    panda$core$MutableString$append$panda$core$String(code841, $tmp897);
                }
                }
                {
                    separator876 = &$s898;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator876));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m890));
            }
            goto $l883;
            $l884:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$576$13878));
        }
        panda$core$MutableString$append$panda$core$String(code841, &$s899);
        panda$core$String* $tmp900 = panda$core$MutableString$finish$R$panda$core$String(code841);
        (($fn901) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp900);
        panda$core$Object* $tmp902 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator876));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable815));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type803));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superPtr824));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name837));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code841));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) clConstant833));
        }
    }
    }
    {
        tmp14903 = result801;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result801));
        return tmp14903;
    }
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name904;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result909;
    panda$core$String* type914;
    org$pandalanguage$pandac$ClassDecl* value924;
    panda$collections$ListView* valueVTable927;
    panda$collections$ListView* vtable935;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC937;
    panda$core$String* superCast940;
    panda$core$String* itable945;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant947;
    panda$core$String* name951;
    panda$core$MutableString* code955;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp958;
    panda$core$String* separator989;
    panda$core$Range$LTpanda$core$Int64$GT $tmp991;
    org$pandalanguage$pandac$MethodDecl* m1009;
    panda$core$String* methodName1014;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp151034;
    panda$core$String* $tmp905 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp906 = panda$core$String$convert$R$panda$core$String($tmp905);
    panda$core$String* $tmp908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp906, &$s907);
    name904 = $tmp908;
    panda$core$Object* $tmp910 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name904));
    result909 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp910);
    if (((panda$core$Bit) { result909 == NULL }).value) {
    {
        panda$core$Bit $tmp911 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp911.value) {
        {
            org$pandalanguage$pandac$Type* $tmp912 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp913 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp912);
            type914 = &$s915;
            panda$core$String* $tmp916 = panda$core$String$convert$R$panda$core$String(name904);
            panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp916, &$s917);
            panda$core$String* $tmp919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp918, type914);
            panda$core$String* $tmp921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp919, &$s920);
            (($fn922) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp921);
            {
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp923 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp923, name904, type914);
                result909 = $tmp923;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result909));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type914));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp925 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp926 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp925);
            value924 = $tmp926;
            panda$collections$ListView* $tmp928 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value924);
            valueVTable927 = $tmp928;
            {
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp929 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
                panda$core$String* $tmp930 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$String* $tmp931 = panda$core$String$convert$R$panda$core$String($tmp930);
                panda$core$String* $tmp933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp931, &$s932);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp929, $tmp933, &$s934);
                result909 = $tmp929;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result909));
            }
            panda$collections$ListView* $tmp936 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable935 = $tmp936;
            org$pandalanguage$pandac$ClassDecl* $tmp938 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp939 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp938);
            superCC937 = $tmp939;
            panda$core$String* $tmp942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s941, superCC937->name);
            panda$core$String* $tmp944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp942, &$s943);
            superCast940 = $tmp944;
            panda$core$String* $tmp946 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable945 = $tmp946;
            org$pandalanguage$pandac$Type* $tmp948 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp949 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp948);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp950 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp949);
            clConstant947 = $tmp950;
            panda$core$String* $tmp952 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            name951 = $tmp952;
            panda$core$Bit $tmp954 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(name951, &$s953);
            PANDA_ASSERT($tmp954.value);
            panda$core$MutableString* $tmp956 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp958, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp959 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(name951, $tmp958);
            panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s957, $tmp959);
            panda$core$String* $tmp962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp960, &$s961);
            panda$core$String* $tmp963 = panda$core$String$convert$R$panda$core$String(result909->name);
            panda$core$String* $tmp965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp963, &$s964);
            panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp965, result909->name);
            panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp966, &$s967);
            panda$core$String* $tmp969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp962, $tmp968);
            panda$core$String* $tmp971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s970, clConstant947->name);
            panda$core$String* $tmp973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp971, &$s972);
            panda$core$Int64$wrapper* $tmp974;
            $tmp974 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp974->value = ((panda$core$Int64) { -999 });
            panda$core$String* $tmp975 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp973, ((panda$core$Object*) $tmp974));
            panda$core$String* $tmp977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp975, &$s976);
            panda$core$String* $tmp978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp969, $tmp977);
            panda$core$String* $tmp979 = panda$core$String$convert$R$panda$core$String(name951);
            panda$core$String* $tmp981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp979, &$s980);
            panda$core$String* $tmp982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp981, superCast940);
            panda$core$String* $tmp984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp982, &$s983);
            panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp984, itable945);
            panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp985, &$s986);
            panda$core$String* $tmp988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp978, $tmp987);
            panda$core$MutableString$init$panda$core$String($tmp956, $tmp988);
            code955 = $tmp956;
            separator989 = &$s990;
            ITable* $tmp992 = ((panda$collections$CollectionView*) valueVTable927)->$class->itable;
            while ($tmp992->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp992 = $tmp992->next;
            }
            $fn994 $tmp993 = $tmp992->methods[0];
            panda$core$Int64 $tmp995 = $tmp993(((panda$collections$CollectionView*) valueVTable927));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp991, ((panda$core$Int64) { 0 }), $tmp995, ((panda$core$Bit) { false }));
            int64_t $tmp997 = $tmp991.min.value;
            panda$core$Int64 i996 = { $tmp997 };
            int64_t $tmp999 = $tmp991.max.value;
            bool $tmp1000 = $tmp991.inclusive.value;
            if ($tmp1000) goto $l1007; else goto $l1008;
            $l1007:;
            if ($tmp997 <= $tmp999) goto $l1001; else goto $l1003;
            $l1008:;
            if ($tmp997 < $tmp999) goto $l1001; else goto $l1003;
            $l1001:;
            {
                ITable* $tmp1010 = vtable935->$class->itable;
                while ($tmp1010->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1010 = $tmp1010->next;
                }
                $fn1012 $tmp1011 = $tmp1010->methods[0];
                panda$core$Object* $tmp1013 = $tmp1011(vtable935, i996);
                m1009 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1013);
                memset(&methodName1014, 0, sizeof(methodName1014));
                if (((panda$core$Bit) { ((panda$core$Object*) m1009->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    {
                        panda$core$String* $tmp1015 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1009, self->wrapperShims);
                        methodName1014 = $tmp1015;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodName1014));
                    }
                }
                }
                else {
                {
                    {
                        panda$core$String* $tmp1016 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1009);
                        methodName1014 = $tmp1016;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodName1014));
                    }
                    panda$core$Bit $tmp1017 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1009->owner);
                    if ($tmp1017.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1009);
                    }
                    }
                }
                }
                panda$core$String* $tmp1018 = panda$core$String$convert$R$panda$core$String(separator989);
                panda$core$String* $tmp1020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1018, &$s1019);
                panda$core$String* $tmp1021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1020, methodName1014);
                panda$core$String* $tmp1023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1021, &$s1022);
                panda$core$MutableString$append$panda$core$String(code955, $tmp1023);
                {
                    separator989 = &$s1024;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator989));
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodName1014));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1009));
                }
            }
            $l1004:;
            int64_t $tmp1026 = $tmp999 - i996.value;
            if ($tmp1000) goto $l1027; else goto $l1028;
            $l1027:;
            if ((uint64_t) $tmp1026 >= 1) goto $l1025; else goto $l1003;
            $l1028:;
            if ((uint64_t) $tmp1026 > 1) goto $l1025; else goto $l1003;
            $l1025:;
            i996.value += 1;
            goto $l1001;
            $l1003:;
            panda$core$MutableString$append$panda$core$String(code955, &$s1031);
            panda$core$String* $tmp1032 = panda$core$MutableString$finish$R$panda$core$String(code955);
            (($fn1033) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1032);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator989));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCast940));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable935));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) itable945));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCC937));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value924));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable927));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name951));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code955));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) clConstant947));
            }
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name904), ((panda$core$Object*) result909));
    }
    }
    {
        tmp151034 = result909;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result909));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name904));
        }
        return tmp151034;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1040;
    panda$core$String* tmp161050;
    panda$core$Bit $tmp1035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp1035.value) {
    {
        panda$core$String* $tmp1037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1036, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1037, &$s1038);
        return $tmp1039;
    }
    }
    panda$core$Object* $tmp1041 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1040 = ((panda$core$String*) $tmp1041);
    if (((panda$core$Bit) { result1040 == NULL }).value) {
    {
        panda$core$Int64 $tmp1042 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1042;
        {
            panda$core$String* $tmp1043 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_v)->name);
            panda$core$String* $tmp1045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1043, &$s1044);
            panda$core$Int64$wrapper* $tmp1046;
            $tmp1046 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1046->value = self->varCount;
            panda$core$String* $tmp1047 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1045, ((panda$core$Object*) $tmp1046));
            panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, &$s1048);
            result1040 = $tmp1049;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1040));
        }
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1040));
    }
    }
    {
        tmp161050 = result1040;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1040));
        return tmp161050;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1051 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1051.value);
    panda$core$String* $tmp1052 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1053 = panda$core$String$convert$R$panda$core$String($tmp1052);
    panda$core$String* $tmp1055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1053, &$s1054);
    panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1055, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1056, &$s1057);
    return $tmp1058;
}
org$pandalanguage$pandac$CCodeGenerator$OpClass org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1059;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1060;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1061;
    switch (p_t->typeKind.value) {
        case 12:
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1059, ((panda$core$Int64) { 0 }));
            return $tmp1059;
        }
        break;
        case 13:
        case 19:
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1060, ((panda$core$Int64) { 1 }));
            return $tmp1060;
        }
        break;
        case 20:
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1061, ((panda$core$Int64) { 2 }));
            return $tmp1061;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1062;
    panda$core$String* leftRef1064;
    panda$core$String* falseLabel1080;
    panda$core$String* rightRef1090;
    panda$core$String* tmp171105;
    panda$core$String* $tmp1063 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1062 = $tmp1063;
    panda$core$String* $tmp1065 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1064 = $tmp1065;
    org$pandalanguage$pandac$Type* $tmp1067 = (($fn1066) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1068 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1069 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1067, $tmp1068);
    if ($tmp1069.value) {
    {
        {
            panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1064, &$s1070);
            leftRef1064 = $tmp1071;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1064));
        }
    }
    }
    panda$core$String* $tmp1073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1072, result1062);
    panda$core$String* $tmp1075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1073, &$s1074);
    panda$core$String* $tmp1076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1075, leftRef1064);
    panda$core$String* $tmp1078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1076, &$s1077);
    (($fn1079) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1078);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp1081 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1080 = $tmp1081;
    panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1082, result1062);
    panda$core$String* $tmp1085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1083, &$s1084);
    panda$core$String* $tmp1086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1085, falseLabel1080);
    panda$core$String* $tmp1088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1086, &$s1087);
    (($fn1089) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1088);
    panda$core$String* $tmp1091 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1090 = $tmp1091;
    org$pandalanguage$pandac$Type* $tmp1093 = (($fn1092) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1094 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1095 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1093, $tmp1094);
    if ($tmp1095.value) {
    {
        {
            panda$core$String* $tmp1097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1090, &$s1096);
            rightRef1090 = $tmp1097;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1090));
        }
    }
    }
    panda$core$String* $tmp1098 = panda$core$String$convert$R$panda$core$String(result1062);
    panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1098, &$s1099);
    panda$core$String* $tmp1101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1100, rightRef1090);
    panda$core$String* $tmp1103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1101, &$s1102);
    (($fn1104) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1103);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1080, p_out);
    {
        tmp171105 = result1062;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1062));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1090));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) falseLabel1080));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1064));
        }
        return tmp171105;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1106;
    panda$core$String* leftRef1108;
    panda$core$String* trueLabel1124;
    panda$core$String* rightRef1134;
    panda$core$String* tmp181149;
    panda$core$String* $tmp1107 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1106 = $tmp1107;
    panda$core$String* $tmp1109 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1108 = $tmp1109;
    org$pandalanguage$pandac$Type* $tmp1111 = (($fn1110) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1112 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1113 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1111, $tmp1112);
    if ($tmp1113.value) {
    {
        {
            panda$core$String* $tmp1115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1108, &$s1114);
            leftRef1108 = $tmp1115;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1108));
        }
    }
    }
    panda$core$String* $tmp1117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1116, result1106);
    panda$core$String* $tmp1119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1117, &$s1118);
    panda$core$String* $tmp1120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1119, leftRef1108);
    panda$core$String* $tmp1122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1120, &$s1121);
    (($fn1123) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1122);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp1125 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1124 = $tmp1125;
    panda$core$String* $tmp1127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1126, result1106);
    panda$core$String* $tmp1129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1127, &$s1128);
    panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1129, trueLabel1124);
    panda$core$String* $tmp1132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1130, &$s1131);
    (($fn1133) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1132);
    panda$core$String* $tmp1135 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1134 = $tmp1135;
    org$pandalanguage$pandac$Type* $tmp1137 = (($fn1136) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1138 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1139 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1137, $tmp1138);
    if ($tmp1139.value) {
    {
        {
            panda$core$String* $tmp1141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1134, &$s1140);
            rightRef1134 = $tmp1141;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1134));
        }
    }
    }
    panda$core$String* $tmp1142 = panda$core$String$convert$R$panda$core$String(result1106);
    panda$core$String* $tmp1144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1142, &$s1143);
    panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1144, rightRef1134);
    panda$core$String* $tmp1147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1145, &$s1146);
    (($fn1148) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1147);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1124, p_out);
    {
        tmp181149 = result1106;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1106));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1134));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) trueLabel1124));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1108));
        }
        return tmp181149;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, org$pandalanguage$pandac$parser$Token$Kind p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1150;
    panda$core$Bit logical1151;
    org$pandalanguage$pandac$parser$Token$Kind $match$723_91152;
    panda$core$String* result1191;
    panda$core$String* tmp191213;
    memset(&cOp1150, 0, sizeof(cOp1150));
    logical1151 = ((panda$core$Bit) { false });
    {
        $match$723_91152 = p_op;
        panda$core$Bit $tmp1153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp1153.value) {
        {
            {
                cOp1150 = &$s1154;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
        }
        }
        else {
        panda$core$Bit $tmp1155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp1155.value) {
        {
            {
                cOp1150 = &$s1156;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
        }
        }
        else {
        panda$core$Bit $tmp1157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp1157.value) {
        {
            {
                cOp1150 = &$s1158;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
        }
        }
        else {
        panda$core$Bit $tmp1159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp1159.value) {
        {
            {
                cOp1150 = &$s1160;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
        }
        }
        else {
        panda$core$Bit $tmp1161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp1161.value) {
        {
            {
                cOp1150 = &$s1162;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
        }
        }
        else {
        panda$core$Bit $tmp1163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp1163.value) {
        {
            {
                cOp1150 = &$s1164;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
        }
        }
        else {
        panda$core$Bit $tmp1165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp1165.value) {
        {
            {
                cOp1150 = &$s1166;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
        }
        }
        else {
        panda$core$Bit $tmp1167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1167.value) {
        {
            {
                cOp1150 = &$s1168;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
        }
        }
        else {
        panda$core$Bit $tmp1169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp1169.value) {
        {
            {
                cOp1150 = &$s1170;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
        }
        }
        else {
        panda$core$Bit $tmp1171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp1171.value) {
        {
            {
                cOp1150 = &$s1172;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
        }
        }
        else {
        panda$core$Bit $tmp1174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 70 }));
        bool $tmp1173 = $tmp1174.value;
        if ($tmp1173) goto $l1175;
        panda$core$Bit $tmp1176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp1173 = $tmp1176.value;
        $l1175:;
        panda$core$Bit $tmp1177 = { $tmp1173 };
        if ($tmp1177.value) {
        {
            {
                cOp1150 = &$s1178;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
        }
        }
        else {
        panda$core$Bit $tmp1179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1179.value) {
        {
            {
                cOp1150 = &$s1180;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
            logical1151 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp1181.value) {
        {
            {
                cOp1150 = &$s1182;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
            logical1151 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp1183.value) {
        {
            {
                cOp1150 = &$s1184;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
            logical1151 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1185.value) {
        {
            {
                cOp1150 = &$s1186;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
            logical1151 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp1187.value) {
        {
            {
                cOp1150 = &$s1188;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
            }
            logical1151 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91152.$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp1189.value) {
        {
            logical1151 = ((panda$core$Bit) { true });
            {
                cOp1150 = &$s1190;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
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
    panda$core$String* $tmp1192 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1191 = $tmp1192;
    if (logical1151.value) {
    {
        (($fn1194) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1193);
    }
    }
    else {
    {
        panda$core$String* $tmp1195 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1196 = panda$core$String$convert$R$panda$core$String($tmp1195);
        panda$core$String* $tmp1198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1196, &$s1197);
        (($fn1199) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1198);
    }
    }
    panda$core$String* $tmp1200 = panda$core$String$convert$R$panda$core$String(result1191);
    panda$core$String* $tmp1202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1200, &$s1201);
    panda$core$String* $tmp1203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1202, p_leftRef);
    panda$core$String* $tmp1205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1203, &$s1204);
    panda$core$String* $tmp1206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1205, cOp1150);
    panda$core$String* $tmp1208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1206, &$s1207);
    panda$core$String* $tmp1209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1208, p_rightRef);
    panda$core$String* $tmp1211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1209, &$s1210);
    (($fn1212) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1211);
    {
        tmp191213 = result1191;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1191));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1150));
        }
        return tmp191213;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1214;
    panda$core$String* rightRef1216;
    panda$core$String* tmp201218;
    panda$core$String* $tmp1215 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1214 = $tmp1215;
    panda$core$String* $tmp1217 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1216 = $tmp1217;
    {
        panda$core$String* $tmp1220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1219, leftRef1214);
        panda$core$String* $tmp1222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1220, &$s1221);
        panda$core$String* $tmp1223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1222, rightRef1216);
        panda$core$String* $tmp1225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1223, &$s1224);
        tmp201218 = $tmp1225;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1216));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1214));
        }
        return tmp201218;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1226;
    panda$core$String* rightRef1228;
    panda$core$String* tmp211230;
    panda$core$String* $tmp1227 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1226 = $tmp1227;
    panda$core$String* $tmp1229 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1228 = $tmp1229;
    {
        panda$core$String* $tmp1232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1231, leftRef1226);
        panda$core$String* $tmp1234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1232, &$s1233);
        panda$core$String* $tmp1235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1234, rightRef1228);
        panda$core$String* $tmp1237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1235, &$s1236);
        tmp211230 = $tmp1237;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1228));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1226));
        }
        return tmp211230;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$parser$Token$Kind $match$793_91243;
    panda$core$String* leftRef1252;
    panda$core$String* rightRef1254;
    panda$core$String* tmp221256;
    org$pandalanguage$pandac$Type* $tmp1239 = (($fn1238) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1241 = (($fn1240) p_right->$class->vtable[2])(p_right);
    panda$core$Bit $tmp1242 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1239, $tmp1241);
    PANDA_ASSERT($tmp1242.value);
    {
        $match$793_91243 = p_op;
        panda$core$Bit $tmp1244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$793_91243.$rawValue, ((panda$core$Int64) { 66 }));
        if ($tmp1244.value) {
        {
            panda$core$String* $tmp1245 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1245;
        }
        }
        else {
        panda$core$Bit $tmp1246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$793_91243.$rawValue, ((panda$core$Int64) { 68 }));
        if ($tmp1246.value) {
        {
            panda$core$String* $tmp1247 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1247;
        }
        }
        else {
        panda$core$Bit $tmp1248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$793_91243.$rawValue, ((panda$core$Int64) { 60 }));
        if ($tmp1248.value) {
        {
            panda$core$String* $tmp1249 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1249;
        }
        }
        else {
        panda$core$Bit $tmp1250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$793_91243.$rawValue, ((panda$core$Int64) { 61 }));
        if ($tmp1250.value) {
        {
            panda$core$String* $tmp1251 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1251;
        }
        }
        else {
        {
            panda$core$String* $tmp1253 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1252 = $tmp1253;
            panda$core$String* $tmp1255 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1254 = $tmp1255;
            {
                org$pandalanguage$pandac$Type* $tmp1258 = (($fn1257) p_left->$class->vtable[2])(p_left);
                panda$core$String* $tmp1259 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1258, leftRef1252, p_op, rightRef1254, p_out);
                tmp221256 = $tmp1259;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1254));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1252));
                }
                return tmp221256;
            }
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1260;
    panda$core$Int64 index1262;
    panda$collections$ListView* vtable1263;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1265;
    panda$core$String* tmp231294;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1261 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1260 = $tmp1261;
    index1262 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1264 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1263 = $tmp1264;
    ITable* $tmp1266 = ((panda$collections$CollectionView*) vtable1263)->$class->itable;
    while ($tmp1266->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1266 = $tmp1266->next;
    }
    $fn1268 $tmp1267 = $tmp1266->methods[0];
    panda$core$Int64 $tmp1269 = $tmp1267(((panda$collections$CollectionView*) vtable1263));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1265, ((panda$core$Int64) { 0 }), $tmp1269, ((panda$core$Bit) { false }));
    int64_t $tmp1271 = $tmp1265.min.value;
    panda$core$Int64 i1270 = { $tmp1271 };
    int64_t $tmp1273 = $tmp1265.max.value;
    bool $tmp1274 = $tmp1265.inclusive.value;
    if ($tmp1274) goto $l1281; else goto $l1282;
    $l1281:;
    if ($tmp1271 <= $tmp1273) goto $l1275; else goto $l1277;
    $l1282:;
    if ($tmp1271 < $tmp1273) goto $l1275; else goto $l1277;
    $l1275:;
    {
        ITable* $tmp1283 = vtable1263->$class->itable;
        while ($tmp1283->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1283 = $tmp1283->next;
        }
        $fn1285 $tmp1284 = $tmp1283->methods[0];
        panda$core$Object* $tmp1286 = $tmp1284(vtable1263, i1270);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1286)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1262 = i1270;
            goto $l1277;
        }
        }
    }
    $l1278:;
    int64_t $tmp1288 = $tmp1273 - i1270.value;
    if ($tmp1274) goto $l1289; else goto $l1290;
    $l1289:;
    if ((uint64_t) $tmp1288 >= 1) goto $l1287; else goto $l1277;
    $l1290:;
    if ((uint64_t) $tmp1288 > 1) goto $l1287; else goto $l1277;
    $l1287:;
    i1270.value += 1;
    goto $l1275;
    $l1277:;
    panda$core$Bit $tmp1293 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1262, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1293.value);
    {
        org$pandalanguage$pandac$Type* $tmp1296 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        panda$core$String* $tmp1297 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1296);
        panda$core$String* $tmp1298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1295, $tmp1297);
        panda$core$String* $tmp1300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1298, &$s1299);
        panda$core$String* $tmp1301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1300, p_target);
        panda$core$String* $tmp1303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1301, &$s1302);
        panda$core$Int64$wrapper* $tmp1304;
        $tmp1304 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp1304->value = index1262;
        panda$core$String* $tmp1305 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1303, ((panda$core$Object*) $tmp1304));
        panda$core$String* $tmp1307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1305, &$s1306);
        tmp231294 = $tmp1307;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1263));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc1260));
        }
        return tmp231294;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1308;
    panda$core$String* itable1310;
    panda$core$Int64 index1339;
    panda$collections$ListView* vtable1340;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1342;
    panda$core$String* result1379;
    panda$core$String* methodType1381;
    panda$core$String* tmp241398;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1309 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1308 = $tmp1309;
    panda$core$String* $tmp1311 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1310 = $tmp1311;
    panda$core$String* $tmp1313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1312, itable1310);
    panda$core$String* $tmp1315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1313, &$s1314);
    panda$core$String* $tmp1316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1315, p_target);
    panda$core$String* $tmp1318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1316, &$s1317);
    (($fn1319) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1318);
    panda$core$String* $tmp1321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1320, itable1310);
    panda$core$String* $tmp1323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1321, &$s1322);
    panda$core$String* $tmp1324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1323, cc1308->name);
    panda$core$String* $tmp1326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1324, &$s1325);
    (($fn1327) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1326);
    panda$core$Int64 $tmp1328 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1328;
    panda$core$String* $tmp1329 = panda$core$String$convert$R$panda$core$String(itable1310);
    panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1329, &$s1330);
    panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, itable1310);
    panda$core$String* $tmp1334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1332, &$s1333);
    (($fn1335) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1334);
    panda$core$Int64 $tmp1336 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1336;
    (($fn1338) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1337);
    index1339 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1341 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1340 = $tmp1341;
    ITable* $tmp1343 = ((panda$collections$CollectionView*) vtable1340)->$class->itable;
    while ($tmp1343->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1343 = $tmp1343->next;
    }
    $fn1345 $tmp1344 = $tmp1343->methods[0];
    panda$core$Int64 $tmp1346 = $tmp1344(((panda$collections$CollectionView*) vtable1340));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1342, ((panda$core$Int64) { 0 }), $tmp1346, ((panda$core$Bit) { false }));
    int64_t $tmp1348 = $tmp1342.min.value;
    panda$core$Int64 i1347 = { $tmp1348 };
    int64_t $tmp1350 = $tmp1342.max.value;
    bool $tmp1351 = $tmp1342.inclusive.value;
    if ($tmp1351) goto $l1358; else goto $l1359;
    $l1358:;
    if ($tmp1348 <= $tmp1350) goto $l1352; else goto $l1354;
    $l1359:;
    if ($tmp1348 < $tmp1350) goto $l1352; else goto $l1354;
    $l1352:;
    {
        ITable* $tmp1360 = vtable1340->$class->itable;
        while ($tmp1360->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1360 = $tmp1360->next;
        }
        $fn1362 $tmp1361 = $tmp1360->methods[0];
        panda$core$Object* $tmp1363 = $tmp1361(vtable1340, i1347);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1363)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1339 = i1347;
            goto $l1354;
        }
        }
    }
    $l1355:;
    int64_t $tmp1365 = $tmp1350 - i1347.value;
    if ($tmp1351) goto $l1366; else goto $l1367;
    $l1366:;
    if ((uint64_t) $tmp1365 >= 1) goto $l1364; else goto $l1354;
    $l1367:;
    if ((uint64_t) $tmp1365 > 1) goto $l1364; else goto $l1354;
    $l1364:;
    i1347.value += 1;
    goto $l1352;
    $l1354:;
    org$pandalanguage$pandac$Type* $tmp1370 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1371 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1370);
    panda$collections$ListView* $tmp1372 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1371);
    ITable* $tmp1373 = ((panda$collections$CollectionView*) $tmp1372)->$class->itable;
    while ($tmp1373->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1373 = $tmp1373->next;
    }
    $fn1375 $tmp1374 = $tmp1373->methods[0];
    panda$core$Int64 $tmp1376 = $tmp1374(((panda$collections$CollectionView*) $tmp1372));
    panda$core$Int64 $tmp1377 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1339, $tmp1376);
    index1339 = $tmp1377;
    panda$core$Bit $tmp1378 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1339, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1378.value);
    panda$core$String* $tmp1380 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1379 = $tmp1380;
    org$pandalanguage$pandac$Type* $tmp1382 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1383 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1382);
    methodType1381 = $tmp1383;
    panda$core$String* $tmp1384 = panda$core$String$convert$R$panda$core$String(methodType1381);
    panda$core$String* $tmp1386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1384, &$s1385);
    panda$core$String* $tmp1387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1386, result1379);
    panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1387, &$s1388);
    panda$core$String* $tmp1390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, itable1310);
    panda$core$String* $tmp1392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1390, &$s1391);
    panda$core$Int64$wrapper* $tmp1393;
    $tmp1393 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp1393->value = index1339;
    panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1392, ((panda$core$Object*) $tmp1393));
    panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1394, &$s1395);
    (($fn1397) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1396);
    {
        tmp241398 = result1379;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1379));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc1308));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) itable1310));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodType1381));
        }
        return tmp241398;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1400 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1399 = $tmp1400.value;
    if (!$tmp1399) goto $l1401;
    panda$core$Bit $tmp1402 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1399 = $tmp1402.value;
    $l1401:;
    panda$core$Bit $tmp1403 = { $tmp1399 };
    if ($tmp1403.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1404.value) {
        {
            panda$core$String* $tmp1405 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1405;
        }
        }
        else {
        {
            panda$core$String* $tmp1406 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1406;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1407 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1407.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1408 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1408;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$866_91409;
    panda$core$String* count1414;
    panda$core$Int64 elementSize1420;
    panda$core$String* tmp251424;
    panda$core$String* ptr1441;
    panda$core$String* tmp261444;
    panda$core$String* ptr1453;
    panda$core$String* index1456;
    panda$core$String* tmp271459;
    panda$core$String* ptr1470;
    panda$core$String* oldCount1473;
    panda$core$String* newCount1476;
    panda$core$Int64 elementSize1482;
    panda$core$String* tmp281486;
    panda$core$String* ptr1514;
    panda$core$String* offset1517;
    panda$core$String* tmp291520;
    {
        $match$866_91409 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp1411 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$866_91409, &$s1410);
        if ($tmp1411.value) {
        {
            panda$core$Int64 $tmp1412 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1412, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1413.value);
            panda$core$Object* $tmp1415 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1416 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1415), p_out);
            count1414 = $tmp1416;
            org$pandalanguage$pandac$Type* $tmp1417 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1418 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1417->subtypes);
            panda$core$Bit $tmp1419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1418, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1419.value);
            org$pandalanguage$pandac$Type* $tmp1421 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1422 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1421->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1423 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1422));
            elementSize1420 = $tmp1423;
            {
                panda$core$String* $tmp1426 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
                panda$core$String* $tmp1427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1425, $tmp1426);
                panda$core$String* $tmp1429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1427, &$s1428);
                panda$core$String* $tmp1430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1429, count1414);
                panda$core$String* $tmp1432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1430, &$s1431);
                panda$core$Int64$wrapper* $tmp1433;
                $tmp1433 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp1433->value = elementSize1420;
                panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1432, ((panda$core$Object*) $tmp1433));
                panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, &$s1435);
                tmp251424 = $tmp1436;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) count1414));
                return tmp251424;
            }
        }
        }
        else {
        panda$core$Bit $tmp1438 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$866_91409, &$s1437);
        if ($tmp1438.value) {
        {
            panda$core$Int64 $tmp1439 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1439, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1440.value);
            panda$core$Object* $tmp1442 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1443 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1442), p_out);
            ptr1441 = $tmp1443;
            {
                panda$core$String* $tmp1446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1445, ptr1441);
                panda$core$String* $tmp1448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1446, &$s1447);
                tmp261444 = $tmp1448;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ptr1441));
                return tmp261444;
            }
        }
        }
        else {
        panda$core$Bit $tmp1450 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$866_91409, &$s1449);
        if ($tmp1450.value) {
        {
            panda$core$Int64 $tmp1451 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1451, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1452.value);
            panda$core$Object* $tmp1454 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1455 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1454), p_out);
            ptr1453 = $tmp1455;
            panda$core$Object* $tmp1457 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1458 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1457), p_out);
            index1456 = $tmp1458;
            {
                panda$core$String* $tmp1460 = panda$core$String$convert$R$panda$core$String(ptr1453);
                panda$core$String* $tmp1462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1460, &$s1461);
                panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1462, index1456);
                panda$core$String* $tmp1465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1463, &$s1464);
                tmp271459 = $tmp1465;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ptr1453));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index1456));
                }
                return tmp271459;
            }
        }
        }
        else {
        panda$core$Bit $tmp1467 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$866_91409, &$s1466);
        if ($tmp1467.value) {
        {
            panda$core$Int64 $tmp1468 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1468, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp1469.value);
            panda$core$Object* $tmp1471 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1472 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1471), p_out);
            ptr1470 = $tmp1472;
            panda$core$Object* $tmp1474 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1475 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1474), p_out);
            oldCount1473 = $tmp1475;
            panda$core$Object* $tmp1477 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp1478 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1477), p_out);
            newCount1476 = $tmp1478;
            org$pandalanguage$pandac$Type* $tmp1479 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1480 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1479->subtypes);
            panda$core$Bit $tmp1481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1480, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1481.value);
            org$pandalanguage$pandac$Type* $tmp1483 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1484 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1483->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1485 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1484));
            elementSize1482 = $tmp1485;
            {
                panda$core$String* $tmp1488 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
                panda$core$String* $tmp1489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1487, $tmp1488);
                panda$core$String* $tmp1491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1489, &$s1490);
                panda$core$String* $tmp1492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1491, ptr1470);
                panda$core$String* $tmp1494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1492, &$s1493);
                panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1494, oldCount1473);
                panda$core$String* $tmp1497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1495, &$s1496);
                panda$core$Int64$wrapper* $tmp1498;
                $tmp1498 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp1498->value = elementSize1482;
                panda$core$String* $tmp1499 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1497, ((panda$core$Object*) $tmp1498));
                panda$core$String* $tmp1501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1499, &$s1500);
                panda$core$String* $tmp1502 = panda$core$String$convert$R$panda$core$String(newCount1476);
                panda$core$String* $tmp1504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1502, &$s1503);
                panda$core$Int64$wrapper* $tmp1505;
                $tmp1505 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp1505->value = elementSize1482;
                panda$core$String* $tmp1506 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1504, ((panda$core$Object*) $tmp1505));
                panda$core$String* $tmp1508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1506, &$s1507);
                panda$core$String* $tmp1509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1501, $tmp1508);
                tmp281486 = $tmp1509;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldCount1473));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ptr1470));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newCount1476));
                }
                return tmp281486;
            }
        }
        }
        else {
        panda$core$Bit $tmp1511 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$866_91409, &$s1510);
        if ($tmp1511.value) {
        {
            panda$core$Int64 $tmp1512 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1512, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1513.value);
            panda$core$Object* $tmp1515 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1516 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1515), p_out);
            ptr1514 = $tmp1516;
            panda$core$Object* $tmp1518 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1519 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1518), p_out);
            offset1517 = $tmp1519;
            {
                panda$core$String* $tmp1522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1521, ptr1514);
                panda$core$String* $tmp1524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1522, &$s1523);
                panda$core$String* $tmp1525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1524, offset1517);
                panda$core$String* $tmp1527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1525, &$s1526);
                tmp291520 = $tmp1527;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ptr1514));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) offset1517));
                }
                return tmp291520;
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
    org$pandalanguage$pandac$MethodDecl* m1528;
    panda$core$String* tmp301531;
    panda$core$String* bit1540;
    panda$core$String* result1544;
    panda$core$String* tmp311554;
    panda$core$String* tmp331555;
    panda$core$String* bit1560;
    panda$core$String* result1564;
    panda$core$String* tmp321574;
    panda$core$String* tmp341575;
    panda$collections$Array* argRefs1576;
    org$pandalanguage$pandac$Type* actualMethodType1579;
    panda$core$String* actualResultType1580;
    panda$core$Bit isSuper1581;
    panda$core$Int64 offset1601;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1606;
    panda$core$String* arg1621;
    panda$core$String* target1646;
    panda$core$String* methodRef1650;
    panda$core$Bit indirect1652;
    panda$core$String* result1654;
    panda$core$String* separator1656;
    panda$core$String* indirectVar1658;
    panda$collections$Iterator* Iter$970$91684;
    panda$core$String* arg1696;
    panda$core$String* tmp351713;
    panda$core$String* tmp361718;
    m1528 = p_mref->value;
    panda$core$Bit $tmp1530 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1528->owner)->name, &$s1529);
    if ($tmp1530.value) {
    {
        {
            panda$core$String* $tmp1532 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, p_t, p_mref, p_args, p_out);
            tmp301531 = $tmp1532;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1528));
            return tmp301531;
        }
    }
    }
    panda$core$Bit $tmp1533 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1528->owner);
    if ($tmp1533.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1528);
    }
    }
    panda$core$Bit $tmp1535 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1528->owner)->name, &$s1534);
    if ($tmp1535.value) {
    {
        panda$core$Bit $tmp1537 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1528)->name, &$s1536);
        if ($tmp1537.value) {
        {
            panda$core$Int64 $tmp1538 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1538, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1539.value);
            panda$core$Object* $tmp1541 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1542 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1543 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1541), ((org$pandalanguage$pandac$IRNode*) $tmp1542), p_out);
            bit1540 = $tmp1543;
            panda$core$String* $tmp1545 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1544 = $tmp1545;
            panda$core$String* $tmp1547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1546, result1544);
            panda$core$String* $tmp1549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1547, &$s1548);
            panda$core$String* $tmp1550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1549, bit1540);
            panda$core$String* $tmp1552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1550, &$s1551);
            (($fn1553) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1552);
            {
                tmp311554 = result1544;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1544));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit1540));
                }
                {
                    tmp331555 = tmp311554;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1528));
                    return tmp331555;
                }
            }
        }
        }
        panda$core$Bit $tmp1557 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1528)->name, &$s1556);
        if ($tmp1557.value) {
        {
            panda$core$Int64 $tmp1558 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1558, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1559.value);
            panda$core$Object* $tmp1561 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1562 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1563 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1561), ((org$pandalanguage$pandac$IRNode*) $tmp1562), p_out);
            bit1560 = $tmp1563;
            panda$core$String* $tmp1565 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1564 = $tmp1565;
            panda$core$String* $tmp1567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1566, result1564);
            panda$core$String* $tmp1569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1567, &$s1568);
            panda$core$String* $tmp1570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1569, bit1560);
            panda$core$String* $tmp1572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1570, &$s1571);
            (($fn1573) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1572);
            {
                tmp321574 = result1564;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1564));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit1560));
                }
                {
                    tmp341575 = tmp321574;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1528));
                    return tmp341575;
                }
            }
        }
        }
    }
    }
    panda$collections$Array* $tmp1577 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$core$Int64 $tmp1578 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$collections$Array$init$panda$core$Int64($tmp1577, $tmp1578);
    argRefs1576 = $tmp1577;
    memset(&actualMethodType1579, 0, sizeof(actualMethodType1579));
    memset(&actualResultType1580, 0, sizeof(actualResultType1580));
    panda$core$Int64 $tmp1583 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp1584 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1583, ((panda$core$Int64) { 1 }));
    bool $tmp1582 = $tmp1584.value;
    if (!$tmp1582) goto $l1585;
    panda$core$Object* $tmp1586 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1586)->$rawValue, ((panda$core$Int64) { 33 }));
    $tmp1582 = $tmp1587.value;
    $l1585:;
    panda$core$Bit $tmp1588 = { $tmp1582 };
    isSuper1581 = $tmp1588;
    panda$core$Bit $tmp1590 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1581);
    bool $tmp1589 = $tmp1590.value;
    if (!$tmp1589) goto $l1591;
    panda$core$Bit $tmp1592 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1528);
    $tmp1589 = $tmp1592.value;
    $l1591:;
    panda$core$Bit $tmp1593 = { $tmp1589 };
    if ($tmp1593.value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp1594 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1528);
            actualMethodType1579 = $tmp1594;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1579));
        }
        {
            panda$core$Int64 $tmp1595 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1579->subtypes);
            panda$core$Int64 $tmp1596 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1595, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp1597 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1579->subtypes, $tmp1596);
            panda$core$String* $tmp1598 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1597));
            actualResultType1580 = $tmp1598;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1580));
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp1599 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1528);
            actualMethodType1579 = $tmp1599;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1579));
        }
        {
            panda$core$String* $tmp1600 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            actualResultType1580 = $tmp1600;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1580));
        }
    }
    }
    panda$core$Int64 $tmp1602 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp1603 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1579->subtypes);
    panda$core$Int64 $tmp1604 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1602, $tmp1603);
    panda$core$Int64 $tmp1605 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1604, ((panda$core$Int64) { 1 }));
    offset1601 = $tmp1605;
    panda$core$Int64 $tmp1607 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1606, ((panda$core$Int64) { 0 }), $tmp1607, ((panda$core$Bit) { false }));
    int64_t $tmp1609 = $tmp1606.min.value;
    panda$core$Int64 i1608 = { $tmp1609 };
    int64_t $tmp1611 = $tmp1606.max.value;
    bool $tmp1612 = $tmp1606.inclusive.value;
    if ($tmp1612) goto $l1619; else goto $l1620;
    $l1619:;
    if ($tmp1609 <= $tmp1611) goto $l1613; else goto $l1615;
    $l1620:;
    if ($tmp1609 < $tmp1611) goto $l1613; else goto $l1615;
    $l1613:;
    {
        panda$core$Object* $tmp1622 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1608);
        panda$core$String* $tmp1623 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1622), p_out);
        arg1621 = $tmp1623;
        panda$core$Bit $tmp1625 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1608, offset1601);
        bool $tmp1624 = $tmp1625.value;
        if (!$tmp1624) goto $l1626;
        panda$core$Int64 $tmp1627 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1608, offset1601);
        panda$core$Object* $tmp1628 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1579->subtypes, $tmp1627);
        panda$core$Object* $tmp1629 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1608);
        org$pandalanguage$pandac$Type* $tmp1631 = (($fn1630) ((org$pandalanguage$pandac$IRNode*) $tmp1629)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1629));
        panda$core$Bit $tmp1632 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1628), $tmp1631);
        $tmp1624 = $tmp1632.value;
        $l1626:;
        panda$core$Bit $tmp1633 = { $tmp1624 };
        if ($tmp1633.value) {
        {
            {
                panda$core$Object* $tmp1634 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1608);
                org$pandalanguage$pandac$Type* $tmp1636 = (($fn1635) ((org$pandalanguage$pandac$IRNode*) $tmp1634)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1634));
                panda$core$Int64 $tmp1637 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1608, offset1601);
                panda$core$Object* $tmp1638 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1579->subtypes, $tmp1637);
                panda$core$String* $tmp1639 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1621, $tmp1636, ((org$pandalanguage$pandac$Type*) $tmp1638), p_out);
                arg1621 = $tmp1639;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1621));
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs1576, ((panda$core$Object*) arg1621));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1621));
    }
    $l1616:;
    int64_t $tmp1641 = $tmp1611 - i1608.value;
    if ($tmp1612) goto $l1642; else goto $l1643;
    $l1642:;
    if ((uint64_t) $tmp1641 >= 1) goto $l1640; else goto $l1615;
    $l1643:;
    if ((uint64_t) $tmp1641 > 1) goto $l1640; else goto $l1615;
    $l1640:;
    i1608.value += 1;
    goto $l1613;
    $l1615:;
    memset(&target1646, 0, sizeof(target1646));
    panda$core$Int64 $tmp1647 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs1576);
    panda$core$Bit $tmp1648 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1647, ((panda$core$Int64) { 0 }));
    if ($tmp1648.value) {
    {
        {
            panda$core$Object* $tmp1649 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs1576, ((panda$core$Int64) { 0 }));
            target1646 = ((panda$core$String*) $tmp1649);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1646));
        }
    }
    }
    else {
    {
        {
            target1646 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1646));
        }
    }
    }
    panda$core$String* $tmp1651 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1646, m1528, isSuper1581, p_out);
    methodRef1650 = $tmp1651;
    panda$core$Bit $tmp1653 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1528);
    indirect1652 = $tmp1653;
    panda$core$String* $tmp1655 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1654 = $tmp1655;
    separator1656 = &$s1657;
    memset(&indirectVar1658, 0, sizeof(indirectVar1658));
    if (indirect1652.value) {
    {
        panda$core$String* $tmp1659 = panda$core$String$convert$R$panda$core$String(actualResultType1580);
        panda$core$String* $tmp1661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1659, &$s1660);
        panda$core$String* $tmp1662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1661, result1654);
        panda$core$String* $tmp1664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1662, &$s1663);
        (($fn1665) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1664);
        panda$core$String* $tmp1666 = panda$core$String$convert$R$panda$core$String(methodRef1650);
        panda$core$String* $tmp1668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1666, &$s1667);
        panda$core$String* $tmp1669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1668, result1654);
        panda$core$String* $tmp1671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1669, &$s1670);
        (($fn1672) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1671);
        {
            separator1656 = &$s1673;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1656));
        }
    }
    }
    else {
    {
        panda$core$String* $tmp1674 = panda$core$String$convert$R$panda$core$String(actualResultType1580);
        panda$core$String* $tmp1676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1674, &$s1675);
        panda$core$String* $tmp1677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1676, result1654);
        panda$core$String* $tmp1679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1677, &$s1678);
        panda$core$String* $tmp1680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1679, methodRef1650);
        panda$core$String* $tmp1682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1680, &$s1681);
        (($fn1683) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1682);
    }
    }
    {
        ITable* $tmp1685 = ((panda$collections$Iterable*) argRefs1576)->$class->itable;
        while ($tmp1685->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1685 = $tmp1685->next;
        }
        $fn1687 $tmp1686 = $tmp1685->methods[0];
        panda$collections$Iterator* $tmp1688 = $tmp1686(((panda$collections$Iterable*) argRefs1576));
        Iter$970$91684 = $tmp1688;
        $l1689:;
        ITable* $tmp1691 = Iter$970$91684->$class->itable;
        while ($tmp1691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1691 = $tmp1691->next;
        }
        $fn1693 $tmp1692 = $tmp1691->methods[0];
        panda$core$Bit $tmp1694 = $tmp1692(Iter$970$91684);
        panda$core$Bit $tmp1695 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1694);
        if (!$tmp1695.value) goto $l1690;
        {
            ITable* $tmp1697 = Iter$970$91684->$class->itable;
            while ($tmp1697->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1697 = $tmp1697->next;
            }
            $fn1699 $tmp1698 = $tmp1697->methods[1];
            panda$core$Object* $tmp1700 = $tmp1698(Iter$970$91684);
            arg1696 = ((panda$core$String*) $tmp1700);
            panda$core$String* $tmp1701 = panda$core$String$convert$R$panda$core$String(separator1656);
            panda$core$String* $tmp1703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1701, &$s1702);
            panda$core$String* $tmp1704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1703, arg1696);
            panda$core$String* $tmp1706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1704, &$s1705);
            (($fn1707) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1706);
            {
                separator1656 = &$s1708;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1656));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1696));
        }
        goto $l1689;
        $l1690:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$970$91684));
    }
    (($fn1710) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1709);
    panda$core$String* $tmp1711 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$Bit $tmp1712 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1711, actualResultType1580);
    if ($tmp1712.value) {
    {
        {
            panda$core$Int64 $tmp1714 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1579->subtypes);
            panda$core$Int64 $tmp1715 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1714, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp1716 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1579->subtypes, $tmp1715);
            panda$core$String* $tmp1717 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1654, ((org$pandalanguage$pandac$Type*) $tmp1716), p_t, p_out);
            tmp351713 = $tmp1717;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs1576));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1656));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1654));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1580));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar1658));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1579));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef1650));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1646));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1528));
            }
            return tmp351713;
        }
    }
    }
    {
        tmp361718 = result1654;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs1576));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1656));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1654));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1580));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar1658));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1579));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef1650));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1646));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1528));
        }
        return tmp361718;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1720;
    panda$core$String* nonNullValue1723;
    panda$core$String* tmp371726;
    panda$core$String* wrapped1734;
    panda$core$String* tmp381793;
    panda$core$Bit $tmp1719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1719.value) {
    {
        panda$core$Object* $tmp1721 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1722 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1721), p_out);
        unwrapped1720 = $tmp1722;
        panda$core$Object* $tmp1724 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1725 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1720, ((org$pandalanguage$pandac$Type*) $tmp1724), p_dstType, p_out);
        nonNullValue1723 = $tmp1725;
        {
            panda$core$String* $tmp1728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1727, p_value);
            panda$core$String* $tmp1730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1728, &$s1729);
            panda$core$String* $tmp1731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1730, nonNullValue1723);
            panda$core$String* $tmp1733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1731, &$s1732);
            tmp371726 = $tmp1733;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unwrapped1720));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nonNullValue1723));
            }
            return tmp371726;
        }
    }
    }
    panda$core$String* $tmp1735 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    wrapped1734 = $tmp1735;
    panda$core$String* $tmp1736 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1737 = panda$core$String$convert$R$panda$core$String($tmp1736);
    panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1737, &$s1738);
    panda$core$String* $tmp1740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1739, wrapped1734);
    panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1740, &$s1741);
    (($fn1743) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1742);
    panda$core$Bit $tmp1744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1744.value) {
    {
        panda$core$String* $tmp1746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1745, p_value);
        panda$core$String* $tmp1748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1746, &$s1747);
        (($fn1749) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1748);
        panda$core$Int64 $tmp1750 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1750;
    }
    }
    panda$core$String* $tmp1751 = panda$core$String$convert$R$panda$core$String(wrapped1734);
    panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1751, &$s1752);
    panda$core$String* $tmp1754 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1753, $tmp1754);
    panda$core$String* $tmp1757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1755, &$s1756);
    panda$core$Int64 $tmp1759 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_srcType);
    panda$core$Int64$wrapper* $tmp1760;
    $tmp1760 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp1760->value = $tmp1759;
    panda$core$String* $tmp1761 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1758, ((panda$core$Object*) $tmp1760));
    panda$core$String* $tmp1763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1761, &$s1762);
    panda$core$String* $tmp1764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1757, $tmp1763);
    panda$core$String* $tmp1766 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_srcType)->name);
    panda$core$String* $tmp1767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1765, $tmp1766);
    panda$core$String* $tmp1769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1767, &$s1768);
    panda$core$String* $tmp1770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1764, $tmp1769);
    (($fn1771) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1770);
    panda$core$String* $tmp1772 = panda$core$String$convert$R$panda$core$String(wrapped1734);
    panda$core$String* $tmp1774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1772, &$s1773);
    panda$core$String* $tmp1775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1774, p_value);
    panda$core$String* $tmp1777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1775, &$s1776);
    (($fn1778) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1777);
    panda$core$Bit $tmp1779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1779.value) {
    {
        panda$core$Int64 $tmp1780 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1780;
        (($fn1782) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1781);
        (($fn1784) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1783);
        panda$core$Int64 $tmp1785 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1785;
        panda$core$String* $tmp1786 = panda$core$String$convert$R$panda$core$String(wrapped1734);
        panda$core$String* $tmp1788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1786, &$s1787);
        (($fn1789) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1788);
        panda$core$Int64 $tmp1790 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1790;
        (($fn1792) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1791);
    }
    }
    {
        panda$core$String* $tmp1795 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1794, $tmp1795);
        panda$core$String* $tmp1798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1796, &$s1797);
        panda$core$String* $tmp1799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1798, wrapped1734);
        panda$core$String* $tmp1801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1799, &$s1800);
        tmp381793 = $tmp1801;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wrapped1734));
        return tmp381793;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$FieldDecl* p_field, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1804;
    panda$core$String* baseRef1808;
    panda$core$String* tmp391811;
    panda$core$String* tmp401819;
    panda$core$Bit $tmp1802 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_field->annotations);
    if ($tmp1802.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_field->value != NULL }).value);
        panda$core$String* $tmp1803 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_field->value, p_out);
        return $tmp1803;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1806 = (($fn1805) p_base->$class->vtable[2])(p_base);
    org$pandalanguage$pandac$ClassDecl* $tmp1807 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1806);
    cl1804 = $tmp1807;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1804);
    panda$core$String* $tmp1809 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef1808 = $tmp1809;
    PANDA_ASSERT(((panda$core$Bit) { cl1804 != NULL }).value);
    panda$core$Bit $tmp1810 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1804);
    if ($tmp1810.value) {
    {
        {
            panda$core$String* $tmp1812 = panda$core$String$convert$R$panda$core$String(baseRef1808);
            panda$core$String* $tmp1814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1812, &$s1813);
            panda$core$String* $tmp1815 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
            panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1814, $tmp1815);
            panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1816, &$s1817);
            tmp391811 = $tmp1818;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1808));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1804));
            }
            return tmp391811;
        }
    }
    }
    {
        panda$core$String* $tmp1820 = panda$core$String$convert$R$panda$core$String(baseRef1808);
        panda$core$String* $tmp1822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1820, &$s1821);
        panda$core$String* $tmp1823 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
        panda$core$String* $tmp1824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, $tmp1823);
        panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1824, &$s1825);
        tmp401819 = $tmp1826;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1808));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1804));
        }
        return tmp401819;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1827;
    panda$core$String* wrapped1837;
    panda$core$String* nonNullValue1840;
    panda$core$String* tmp411843;
    panda$core$String* tmp421855;
    panda$core$String* tmp431856;
    panda$core$String* $tmp1829 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1828, $tmp1829);
    panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, &$s1831);
    panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1832, p_value);
    panda$core$String* $tmp1835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1833, &$s1834);
    result1827 = $tmp1835;
    panda$core$Bit $tmp1836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1836.value) {
    {
        panda$core$Object* $tmp1838 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1839 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1838), p_out);
        wrapped1837 = $tmp1839;
        panda$core$Object* $tmp1841 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1842 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1837, ((org$pandalanguage$pandac$Type*) $tmp1841), p_dstType, p_out);
        nonNullValue1840 = $tmp1842;
        {
            panda$core$String* $tmp1845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1844, p_value);
            panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1845, &$s1846);
            panda$core$String* $tmp1848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1847, nonNullValue1840);
            panda$core$String* $tmp1850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1848, &$s1849);
            panda$core$String* $tmp1851 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
            panda$core$String* $tmp1852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1850, $tmp1851);
            panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1852, &$s1853);
            tmp411843 = $tmp1854;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nonNullValue1840));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wrapped1837));
            }
            {
                tmp421855 = tmp411843;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1827));
                return tmp421855;
            }
        }
    }
    }
    {
        tmp431856 = result1827;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1827));
        return tmp431856;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1858 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1857, $tmp1858);
    panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, &$s1860);
    panda$core$String* $tmp1862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1861, p_value);
    panda$core$String* $tmp1864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1862, &$s1863);
    return $tmp1864;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1866 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1865, $tmp1866);
    panda$core$String* $tmp1869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1867, &$s1868);
    panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1869, p_value);
    panda$core$String* $tmp1872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1870, &$s1871);
    return $tmp1872;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1873;
    panda$core$String* tmp481876;
    org$pandalanguage$pandac$ClassDecl* srcClass1885;
    org$pandalanguage$pandac$ClassDecl* targetClass1887;
    panda$core$String* tmp441895;
    panda$core$String* tmp491897;
    panda$core$String* tmp451904;
    panda$core$String* tmp501906;
    panda$core$String* tmp461917;
    panda$core$String* tmp511919;
    panda$core$String* tmp471930;
    panda$core$String* tmp521932;
    panda$core$String* srcType1934;
    panda$core$String* dstType1936;
    panda$core$String* tmp531939;
    panda$core$String* tmp541940;
    memset(&op1873, 0, sizeof(op1873));
    panda$core$Bit $tmp1874 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1874.value) {
    {
        panda$core$Bit $tmp1875 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1875.value);
        {
            panda$core$String* $tmp1878 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            panda$core$String* $tmp1879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1877, $tmp1878);
            panda$core$String* $tmp1881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1879, &$s1880);
            panda$core$String* $tmp1882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1881, p_value);
            panda$core$String* $tmp1884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1882, &$s1883);
            tmp481876 = $tmp1884;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1873));
            return tmp481876;
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1886 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1885 = $tmp1886;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1885 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1888 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1887 = $tmp1888;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1887 != NULL }).value);
        panda$core$Bit $tmp1890 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1885);
        bool $tmp1889 = $tmp1890.value;
        if (!$tmp1889) goto $l1891;
        panda$core$Bit $tmp1892 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1887);
        panda$core$Bit $tmp1893 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1892);
        $tmp1889 = $tmp1893.value;
        $l1891:;
        panda$core$Bit $tmp1894 = { $tmp1889 };
        if ($tmp1894.value) {
        {
            {
                panda$core$String* $tmp1896 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp441895 = $tmp1896;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1887));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1885));
                }
                {
                    tmp491897 = tmp441895;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1873));
                    return tmp491897;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1899 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1885);
        panda$core$Bit $tmp1900 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1899);
        bool $tmp1898 = $tmp1900.value;
        if (!$tmp1898) goto $l1901;
        panda$core$Bit $tmp1902 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1887);
        $tmp1898 = $tmp1902.value;
        $l1901:;
        panda$core$Bit $tmp1903 = { $tmp1898 };
        if ($tmp1903.value) {
        {
            {
                panda$core$String* $tmp1905 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp451904 = $tmp1905;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1887));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1885));
                }
                {
                    tmp501906 = tmp451904;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1873));
                    return tmp501906;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1909 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1885);
        bool $tmp1908 = $tmp1909.value;
        if (!$tmp1908) goto $l1910;
        panda$core$Bit $tmp1911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1908 = $tmp1911.value;
        $l1910:;
        panda$core$Bit $tmp1912 = { $tmp1908 };
        bool $tmp1907 = $tmp1912.value;
        if (!$tmp1907) goto $l1913;
        panda$core$Object* $tmp1914 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1915 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1914), p_src);
        $tmp1907 = $tmp1915.value;
        $l1913:;
        panda$core$Bit $tmp1916 = { $tmp1907 };
        if ($tmp1916.value) {
        {
            {
                panda$core$String* $tmp1918 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp461917 = $tmp1918;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1887));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1885));
                }
                {
                    tmp511919 = tmp461917;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1873));
                    return tmp511919;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1922 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1887);
        bool $tmp1921 = $tmp1922.value;
        if (!$tmp1921) goto $l1923;
        panda$core$Bit $tmp1924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1921 = $tmp1924.value;
        $l1923:;
        panda$core$Bit $tmp1925 = { $tmp1921 };
        bool $tmp1920 = $tmp1925.value;
        if (!$tmp1920) goto $l1926;
        panda$core$Object* $tmp1927 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1928 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1927), p_target);
        $tmp1920 = $tmp1928.value;
        $l1926:;
        panda$core$Bit $tmp1929 = { $tmp1920 };
        if ($tmp1929.value) {
        {
            {
                panda$core$String* $tmp1931 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp471930 = $tmp1931;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1887));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1885));
                }
                {
                    tmp521932 = tmp471930;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1873));
                    return tmp521932;
                }
            }
        }
        }
        }
        }
        }
        {
            op1873 = &$s1933;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1873));
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1887));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1885));
        }
    }
    }
    panda$core$String* $tmp1935 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1934 = $tmp1935;
    panda$core$String* $tmp1937 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1936 = $tmp1937;
    panda$core$Bit $tmp1938 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1934, dstType1936);
    if ($tmp1938.value) {
    {
        {
            tmp531939 = p_value;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dstType1936));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcType1934));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1873));
            }
            return tmp531939;
        }
    }
    }
    {
        panda$core$String* $tmp1942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1941, dstType1936);
        panda$core$String* $tmp1944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1942, &$s1943);
        panda$core$String* $tmp1945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1944, p_value);
        panda$core$String* $tmp1947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1945, &$s1946);
        tmp541940 = $tmp1947;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dstType1936));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcType1934));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1873));
        }
        return tmp541940;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef1948;
    panda$core$String* tmp551950;
    panda$core$String* $tmp1949 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef1948 = $tmp1949;
    {
        org$pandalanguage$pandac$Type* $tmp1952 = (($fn1951) p_base->$class->vtable[2])(p_base);
        panda$core$String* $tmp1953 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, baseRef1948, $tmp1952, p_t, p_out);
        tmp551950 = $tmp1953;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1948));
        return tmp551950;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_target, org$pandalanguage$pandac$IRNode* p_initCall, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1090_91954;
    org$pandalanguage$pandac$Type* initType1956;
    org$pandalanguage$pandac$MethodRef* initMref1958;
    panda$collections$ImmutableArray* initArgs1960;
    org$pandalanguage$pandac$ClassDecl* cl1962;
    panda$core$String* t1964;
    org$pandalanguage$pandac$IRNode* $match$1096_211972;
    panda$collections$ImmutableArray* args1974;
    panda$core$String* value1978;
    panda$core$String* tmp561981;
    panda$core$String* tmp571989;
    panda$core$String* tmp1992;
    panda$core$String* tmp582009;
    panda$core$String* tmp592010;
    panda$core$String* result2011;
    panda$core$String* tmp602037;
    {
        $match$1090_91954 = p_initCall;
        panda$core$Bit $tmp1955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1090_91954->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1955.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1957 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1090_91954->$data + 16));
            initType1956 = *$tmp1957;
            org$pandalanguage$pandac$MethodRef** $tmp1959 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1090_91954->$data + 24));
            initMref1958 = *$tmp1959;
            panda$collections$ImmutableArray** $tmp1961 = ((panda$collections$ImmutableArray**) ((char*) $match$1090_91954->$data + 32));
            initArgs1960 = *$tmp1961;
            org$pandalanguage$pandac$ClassDecl* $tmp1963 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
            cl1962 = $tmp1963;
            PANDA_ASSERT(((panda$core$Bit) { cl1962 != NULL }).value);
            panda$core$String* $tmp1965 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            t1964 = $tmp1965;
            panda$core$Bit $tmp1967 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            bool $tmp1966 = $tmp1967.value;
            if ($tmp1966) goto $l1968;
            org$pandalanguage$pandac$Type* $tmp1969 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1970 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1969);
            $tmp1966 = $tmp1970.value;
            $l1968:;
            panda$core$Bit $tmp1971 = { $tmp1966 };
            if ($tmp1971.value) {
            {
                {
                    $match$1096_211972 = p_initCall;
                    panda$core$Bit $tmp1973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1096_211972->$rawValue, ((panda$core$Int64) { 5 }));
                    if ($tmp1973.value) {
                    {
                        panda$collections$ImmutableArray** $tmp1975 = ((panda$collections$ImmutableArray**) ((char*) $match$1096_211972->$data + 32));
                        args1974 = *$tmp1975;
                        panda$core$Int64 $tmp1976 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(args1974);
                        panda$core$Bit $tmp1977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1977.value);
                        panda$core$Object* $tmp1979 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(args1974, ((panda$core$Int64) { 0 }));
                        panda$core$String* $tmp1980 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1979), p_out);
                        value1978 = $tmp1980;
                        {
                            panda$core$String* $tmp1983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1982, t1964);
                            panda$core$String* $tmp1985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1983, &$s1984);
                            panda$core$String* $tmp1986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1985, value1978);
                            panda$core$String* $tmp1988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1986, &$s1987);
                            tmp561981 = $tmp1988;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1978));
                            {
                                tmp571989 = tmp561981;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1964));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1962));
                                }
                                return tmp571989;
                            }
                        }
                    }
                    }
                }
            }
            }
            panda$core$Bit $tmp1990 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1962);
            if ($tmp1990.value) {
            {
                panda$core$Int64 $tmp1991 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
                self->varCount = $tmp1991;
                panda$core$Int64$wrapper* $tmp1994;
                $tmp1994 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp1994->value = self->varCount;
                panda$core$String* $tmp1995 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1993, ((panda$core$Object*) $tmp1994));
                panda$core$String* $tmp1997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1995, &$s1996);
                tmp1992 = $tmp1997;
                panda$core$String* $tmp1998 = panda$core$String$convert$R$panda$core$String(t1964);
                panda$core$String* $tmp2000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1998, &$s1999);
                panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2000, tmp1992);
                panda$core$String* $tmp2003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2001, &$s2002);
                (($fn2004) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2003);
                panda$core$String* $tmp2006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2005, tmp1992);
                panda$core$String* $tmp2008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2006, &$s2007);
                org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType1956, initMref1958, initArgs1960, $tmp2008, p_out);
                {
                    tmp582009 = tmp1992;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tmp1992));
                    {
                        tmp592010 = tmp582009;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1964));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1962));
                        }
                        return tmp592010;
                    }
                }
            }
            }
            panda$core$String* $tmp2012 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result2011 = $tmp2012;
            panda$core$String* $tmp2013 = panda$core$String$convert$R$panda$core$String(t1964);
            panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2013, &$s2014);
            panda$core$String* $tmp2016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, result2011);
            panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2016, &$s2017);
            panda$core$String* $tmp2019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2018, t1964);
            panda$core$String* $tmp2021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2019, &$s2020);
            panda$core$Int64 $tmp2022 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
            panda$core$Int64$wrapper* $tmp2023;
            $tmp2023 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2023->value = $tmp2022;
            panda$core$String* $tmp2024 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2021, ((panda$core$Object*) $tmp2023));
            panda$core$String* $tmp2026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2024, &$s2025);
            panda$core$String* $tmp2028 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1962)->name);
            panda$core$String* $tmp2029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2027, $tmp2028);
            panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2029, &$s2030);
            panda$core$String* $tmp2032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2026, $tmp2031);
            (($fn2033) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2032);
            panda$core$String* $tmp2034 = panda$core$String$convert$R$panda$core$String(result2011);
            panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2034, &$s2035);
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType1956, initMref1958, initArgs1960, $tmp2036, p_out);
            {
                tmp602037 = result2011;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2011));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1964));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1962));
                }
                return tmp602037;
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
    panda$core$String* $tmp2038 = panda$core$UInt64$convert$R$panda$core$String(p_int);
    return $tmp2038;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$UInt64 p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$UInt64$wrapper* $tmp2040;
    $tmp2040 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
    $tmp2040->value = p_int;
    panda$core$String* $tmp2041 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2039, ((panda$core$Object*) $tmp2040));
    return $tmp2041;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Real64 p_real, panda$io$OutputStream* p_out) {
    panda$core$String* result2042;
    panda$core$Char8 $tmp2044;
    panda$core$String* tmp612046;
    panda$core$String* tmp622047;
    panda$core$String* $tmp2043 = panda$core$Real64$convert$R$panda$core$String(p_real);
    result2042 = $tmp2043;
    panda$core$Char8$init$panda$core$UInt8(&$tmp2044, ((panda$core$UInt8) { 46 }));
    panda$core$Bit $tmp2045 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(result2042, $tmp2044);
    if ($tmp2045.value) {
    {
        {
            tmp612046 = result2042;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2042));
            return tmp612046;
        }
    }
    }
    {
        panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result2042, &$s2048);
        tmp622047 = $tmp2049;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2042));
        return tmp622047;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_bit, panda$io$IndentedOutputStream* p_out) {
    if (p_bit.value) {
    {
        return &$s2050;
    }
    }
    return &$s2051;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2052 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2052;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* result2054;
    panda$collections$Iterator* Iter$1154$92075;
    panda$core$Char8 c2088;
    panda$core$String* tmp632123;
    panda$core$Int64 $tmp2053 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2053;
    panda$core$Int64$wrapper* $tmp2056;
    $tmp2056 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2056->value = self->varCount;
    panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2055, ((panda$core$Object*) $tmp2056));
    panda$core$String* $tmp2059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2057, &$s2058);
    result2054 = $tmp2059;
    org$pandalanguage$pandac$Type* $tmp2060 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2061 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2060);
    panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2062, result2054);
    panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2063, &$s2064);
    panda$core$Int64$wrapper* $tmp2067;
    $tmp2067 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2067->value = ((panda$core$Int64) { -999 });
    panda$core$String* $tmp2068 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2066, ((panda$core$Object*) $tmp2067));
    panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2068, &$s2069);
    panda$core$String* $tmp2071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, $tmp2070);
    panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2071, &$s2072);
    (($fn2074) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2073);
    {
        panda$collections$ListView* $tmp2076 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2077 = ((panda$collections$Iterable*) $tmp2076)->$class->itable;
        while ($tmp2077->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2077 = $tmp2077->next;
        }
        $fn2079 $tmp2078 = $tmp2077->methods[0];
        panda$collections$Iterator* $tmp2080 = $tmp2078(((panda$collections$Iterable*) $tmp2076));
        Iter$1154$92075 = $tmp2080;
        $l2081:;
        ITable* $tmp2083 = Iter$1154$92075->$class->itable;
        while ($tmp2083->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2083 = $tmp2083->next;
        }
        $fn2085 $tmp2084 = $tmp2083->methods[0];
        panda$core$Bit $tmp2086 = $tmp2084(Iter$1154$92075);
        panda$core$Bit $tmp2087 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2086);
        if (!$tmp2087.value) goto $l2082;
        {
            ITable* $tmp2089 = Iter$1154$92075->$class->itable;
            while ($tmp2089->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2089 = $tmp2089->next;
            }
            $fn2091 $tmp2090 = $tmp2089->methods[1];
            panda$core$Object* $tmp2092 = $tmp2090(Iter$1154$92075);
            c2088 = ((panda$core$Char8$wrapper*) $tmp2092)->value;
            panda$core$UInt8 $tmp2094 = panda$core$Char8$convert$R$panda$core$UInt8(c2088);
            panda$core$UInt8$wrapper* $tmp2095;
            $tmp2095 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
            $tmp2095->value = $tmp2094;
            ITable* $tmp2097 = ((panda$core$Formattable*) $tmp2095)->$class->itable;
            while ($tmp2097->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2097 = $tmp2097->next;
            }
            $fn2099 $tmp2098 = $tmp2097->methods[0];
            panda$core$String* $tmp2100 = $tmp2098(((panda$core$Formattable*) $tmp2095), &$s2096);
            panda$core$String* $tmp2102 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp2100, &$s2101);
            panda$core$String* $tmp2103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2093, $tmp2102);
            panda$core$String* $tmp2105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2103, &$s2104);
            (($fn2106) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2105);
        }
        goto $l2081;
        $l2082:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1154$92075));
    }
    panda$collections$ListView* $tmp2108 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2109 = ((panda$collections$CollectionView*) $tmp2108)->$class->itable;
    while ($tmp2109->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2109 = $tmp2109->next;
    }
    $fn2111 $tmp2110 = $tmp2109->methods[0];
    panda$core$Int64 $tmp2112 = $tmp2110(((panda$collections$CollectionView*) $tmp2108));
    panda$core$Int64$wrapper* $tmp2113;
    $tmp2113 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2113->value = $tmp2112;
    panda$core$String* $tmp2114 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2107, ((panda$core$Object*) $tmp2113));
    panda$core$String* $tmp2116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2114, &$s2115);
    panda$core$Int64 $tmp2117 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$Int64$wrapper* $tmp2118;
    $tmp2118 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2118->value = $tmp2117;
    panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2116, ((panda$core$Object*) $tmp2118));
    panda$core$String* $tmp2121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2119, &$s2120);
    (($fn2122) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2121);
    {
        panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2124, result2054);
        panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2125, &$s2126);
        tmp632123 = $tmp2127;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2054));
        return tmp632123;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    return &$s2128;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2130 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2129, $tmp2130);
    panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2131, &$s2132);
    return $tmp2133;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2134;
    org$pandalanguage$pandac$ClassDecl* cl2136;
    panda$core$String* bit2140;
    panda$core$String* tmp642153;
    panda$core$String* $tmp2135 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    ref2134 = $tmp2135;
    org$pandalanguage$pandac$Type* $tmp2138 = (($fn2137) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2139 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2138);
    cl2136 = $tmp2139;
    memset(&bit2140, 0, sizeof(bit2140));
    panda$core$Bit $tmp2141 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2136);
    if ($tmp2141.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2143 = (($fn2142) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2144 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2143->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2144.value) {
        {
            {
                bit2140 = &$s2145;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2140));
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2146, ref2134);
                panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2147, &$s2148);
                bit2140 = $tmp2149;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2140));
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp2150 = panda$core$String$convert$R$panda$core$String(ref2134);
            panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, &$s2151);
            bit2140 = $tmp2152;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2140));
        }
    }
    }
    {
        panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2154, bit2140);
        panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2155, &$s2156);
        tmp642153 = $tmp2157;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2136));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref2134));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2140));
        }
        return tmp642153;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2158;
    org$pandalanguage$pandac$ClassDecl* cl2160;
    panda$core$String* bit2164;
    panda$core$String* tmp652176;
    panda$core$String* $tmp2159 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    ref2158 = $tmp2159;
    org$pandalanguage$pandac$Type* $tmp2162 = (($fn2161) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2163 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2162);
    cl2160 = $tmp2163;
    memset(&bit2164, 0, sizeof(bit2164));
    panda$core$Bit $tmp2165 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2160);
    if ($tmp2165.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2167 = (($fn2166) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2168 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2167->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2168.value) {
        {
            {
                bit2164 = &$s2169;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2164));
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp2170 = panda$core$String$convert$R$panda$core$String(ref2158);
                panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2170, &$s2171);
                bit2164 = $tmp2172;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2164));
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp2173 = panda$core$String$convert$R$panda$core$String(ref2158);
            panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, &$s2174);
            bit2164 = $tmp2175;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2164));
        }
    }
    }
    {
        panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2177, bit2164);
        panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2178, &$s2179);
        tmp652176 = $tmp2180;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2160));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref2158));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2164));
        }
        return tmp652176;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2182;
    panda$core$String* tmp662186;
    panda$core$String* tmp672192;
    panda$core$Bit $tmp2181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2181.value);
    panda$core$Object* $tmp2183 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2184 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2183));
    cl2182 = $tmp2184;
    PANDA_ASSERT(((panda$core$Bit) { cl2182 != NULL }).value);
    panda$core$Bit $tmp2185 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2182);
    if ($tmp2185.value) {
    {
        {
            panda$core$String* $tmp2188 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2187, $tmp2188);
            panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, &$s2190);
            tmp662186 = $tmp2191;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2182));
            return tmp662186;
        }
    }
    }
    else {
    {
        {
            tmp672192 = &$s2193;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2182));
            return tmp672192;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2182));
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_base, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef2194;
    panda$core$String* result2196;
    org$pandalanguage$pandac$parser$Token$Kind $match$1220_92198;
    panda$core$String* tmp682200;
    panda$core$String* tmp692206;
    panda$core$String* tmp702212;
    panda$core$String* $tmp2195 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef2194 = $tmp2195;
    panda$core$String* $tmp2197 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2196 = $tmp2197;
    {
        $match$1220_92198 = p_op;
        panda$core$Bit $tmp2199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1220_92198.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp2199.value) {
        {
            {
                panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2201, baseRef2194);
                panda$core$String* $tmp2204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2202, &$s2203);
                tmp682200 = $tmp2204;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2196));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2194));
                }
                return tmp682200;
            }
        }
        }
        else {
        panda$core$Bit $tmp2205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1220_92198.$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp2205.value) {
        {
            {
                panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2207, baseRef2194);
                panda$core$String* $tmp2210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2208, &$s2209);
                tmp692206 = $tmp2210;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2196));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2194));
                }
                return tmp692206;
            }
        }
        }
        else {
        panda$core$Bit $tmp2211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1220_92198.$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp2211.value) {
        {
            {
                panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2213, baseRef2194);
                panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2214, &$s2215);
                tmp702212 = $tmp2216;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2196));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2194));
                }
                return tmp702212;
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2196));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2194));
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef2222;
    panda$core$String* trueLabel2224;
    panda$core$String* falseLabel2226;
    panda$core$String* merge2228;
    panda$core$String* result2230;
    panda$core$String* tmp712279;
    org$pandalanguage$pandac$Type* $tmp2218 = (($fn2217) p_ifTrue->$class->vtable[2])(p_ifTrue);
    org$pandalanguage$pandac$Type* $tmp2220 = (($fn2219) p_ifFalse->$class->vtable[2])(p_ifFalse);
    panda$core$Bit $tmp2221 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2218, $tmp2220);
    PANDA_ASSERT($tmp2221.value);
    panda$core$String* $tmp2223 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    testRef2222 = $tmp2223;
    panda$core$String* $tmp2225 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2224 = $tmp2225;
    panda$core$String* $tmp2227 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2226 = $tmp2227;
    panda$core$String* $tmp2229 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2228 = $tmp2229;
    panda$core$String* $tmp2231 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2230 = $tmp2231;
    org$pandalanguage$pandac$Type* $tmp2233 = (($fn2232) p_ifTrue->$class->vtable[2])(p_ifTrue);
    panda$core$String* $tmp2234 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2233);
    panda$core$String* $tmp2235 = panda$core$String$convert$R$panda$core$String($tmp2234);
    panda$core$String* $tmp2237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, &$s2236);
    panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2237, result2230);
    panda$core$String* $tmp2240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2238, &$s2239);
    (($fn2241) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2240);
    panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2242, testRef2222);
    panda$core$String* $tmp2245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2243, &$s2244);
    panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2245, trueLabel2224);
    panda$core$String* $tmp2248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2246, &$s2247);
    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2248, falseLabel2226);
    panda$core$String* $tmp2251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, &$s2250);
    (($fn2252) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2251);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel2224, p_out);
    panda$core$String* $tmp2253 = panda$core$String$convert$R$panda$core$String(result2230);
    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2253, &$s2254);
    panda$core$String* $tmp2256 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifTrue, p_out);
    panda$core$String* $tmp2257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2255, $tmp2256);
    panda$core$String* $tmp2259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2257, &$s2258);
    (($fn2260) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2259);
    panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2261, merge2228);
    panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2262, &$s2263);
    (($fn2265) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2264);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel2226, p_out);
    panda$core$String* $tmp2266 = panda$core$String$convert$R$panda$core$String(result2230);
    panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2266, &$s2267);
    panda$core$String* $tmp2269 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifFalse, p_out);
    panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2268, $tmp2269);
    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2270, &$s2271);
    (($fn2273) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2272);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2274, merge2228);
    panda$core$String* $tmp2277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2275, &$s2276);
    (($fn2278) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2277);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, merge2228, p_out);
    {
        tmp712279 = result2230;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testRef2222));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2230));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) merge2228));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) falseLabel2226));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) trueLabel2224));
        }
        return tmp712279;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2280 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2280;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2281;
    panda$core$String* tmp722283;
    panda$core$String* $tmp2282 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    result2281 = $tmp2282;
    panda$collections$Array$add$panda$collections$Array$T(self->extraEffects, ((panda$core$Object*) p_stmt));
    {
        tmp722283 = result2281;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2281));
        return tmp722283;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1264_92284;
    org$pandalanguage$pandac$IRNode* left2286;
    org$pandalanguage$pandac$parser$Token$Kind op2288;
    org$pandalanguage$pandac$IRNode* right2290;
    org$pandalanguage$pandac$Type* type2294;
    org$pandalanguage$pandac$MethodRef* target2296;
    panda$collections$ImmutableArray* args2298;
    org$pandalanguage$pandac$IRNode* base2302;
    org$pandalanguage$pandac$Type* type2304;
    panda$core$Bit explicit2306;
    panda$core$UInt64 value2310;
    panda$core$UInt64 value2314;
    panda$core$Real64 value2318;
    panda$core$Bit value2322;
    org$pandalanguage$pandac$Type* type2326;
    org$pandalanguage$pandac$IRNode* initCall2328;
    org$pandalanguage$pandac$Variable* variable2332;
    org$pandalanguage$pandac$IRNode* base2336;
    org$pandalanguage$pandac$FieldDecl* field2338;
    panda$core$String* str2342;
    org$pandalanguage$pandac$Type* t2348;
    org$pandalanguage$pandac$IRNode* base2352;
    panda$core$Int64 id2354;
    panda$core$String* value2356;
    panda$core$String* tmp732359;
    panda$core$Int64 id2361;
    panda$core$String* result2363;
    panda$core$String* tmp742366;
    org$pandalanguage$pandac$Position pos2368;
    org$pandalanguage$pandac$Type* type2370;
    org$pandalanguage$pandac$IRNode* value2374;
    org$pandalanguage$pandac$IRNode* value2378;
    org$pandalanguage$pandac$parser$Token$Kind op2382;
    org$pandalanguage$pandac$IRNode* base2384;
    org$pandalanguage$pandac$IRNode* test2388;
    org$pandalanguage$pandac$IRNode* ifTrue2390;
    org$pandalanguage$pandac$IRNode* ifFalse2392;
    org$pandalanguage$pandac$IRNode* base2398;
    org$pandalanguage$pandac$IRNode* stmt2400;
    {
        $match$1264_92284 = p_expr;
        panda$core$Bit $tmp2285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp2285.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2287 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92284->$data + 24));
            left2286 = *$tmp2287;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2289 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1264_92284->$data + 32));
            op2288 = *$tmp2289;
            org$pandalanguage$pandac$IRNode** $tmp2291 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92284->$data + 40));
            right2290 = *$tmp2291;
            panda$core$String* $tmp2292 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, left2286, op2288, right2290, p_out);
            return $tmp2292;
        }
        }
        else {
        panda$core$Bit $tmp2293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp2293.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2295 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1264_92284->$data + 16));
            type2294 = *$tmp2295;
            org$pandalanguage$pandac$MethodRef** $tmp2297 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1264_92284->$data + 24));
            target2296 = *$tmp2297;
            panda$collections$ImmutableArray** $tmp2299 = ((panda$collections$ImmutableArray**) ((char*) $match$1264_92284->$data + 32));
            args2298 = *$tmp2299;
            panda$core$String* $tmp2300 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, type2294, target2296, args2298, p_out);
            return $tmp2300;
        }
        }
        else {
        panda$core$Bit $tmp2301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp2301.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2303 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92284->$data + 16));
            base2302 = *$tmp2303;
            org$pandalanguage$pandac$Type** $tmp2305 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1264_92284->$data + 24));
            type2304 = *$tmp2305;
            panda$core$Bit* $tmp2307 = ((panda$core$Bit*) ((char*) $match$1264_92284->$data + 32));
            explicit2306 = *$tmp2307;
            panda$core$String* $tmp2308 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base2302, type2304, p_out);
            return $tmp2308;
        }
        }
        else {
        panda$core$Bit $tmp2309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2309.value) {
        {
            panda$core$UInt64* $tmp2311 = ((panda$core$UInt64*) ((char*) $match$1264_92284->$data + 24));
            value2310 = *$tmp2311;
            panda$core$String* $tmp2312 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2310, p_out);
            return $tmp2312;
        }
        }
        else {
        panda$core$Bit $tmp2313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp2313.value) {
        {
            panda$core$UInt64* $tmp2315 = ((panda$core$UInt64*) ((char*) $match$1264_92284->$data + 24));
            value2314 = *$tmp2315;
            panda$core$String* $tmp2316 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2314, p_out);
            return $tmp2316;
        }
        }
        else {
        panda$core$Bit $tmp2317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2317.value) {
        {
            panda$core$Real64* $tmp2319 = ((panda$core$Real64*) ((char*) $match$1264_92284->$data + 24));
            value2318 = *$tmp2319;
            panda$core$String* $tmp2320 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(self, value2318, ((panda$io$OutputStream*) p_out));
            return $tmp2320;
        }
        }
        else {
        panda$core$Bit $tmp2321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp2321.value) {
        {
            panda$core$Bit* $tmp2323 = ((panda$core$Bit*) ((char*) $match$1264_92284->$data + 24));
            value2322 = *$tmp2323;
            panda$core$String* $tmp2324 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, value2322, p_out);
            return $tmp2324;
        }
        }
        else {
        panda$core$Bit $tmp2325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp2325.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2327 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1264_92284->$data + 16));
            type2326 = *$tmp2327;
            org$pandalanguage$pandac$IRNode** $tmp2329 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92284->$data + 24));
            initCall2328 = *$tmp2329;
            panda$core$String* $tmp2330 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, type2326, initCall2328, p_out);
            return $tmp2330;
        }
        }
        else {
        panda$core$Bit $tmp2331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2331.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2333 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1264_92284->$data + 16));
            variable2332 = *$tmp2333;
            panda$core$String* $tmp2334 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, variable2332, p_out);
            return $tmp2334;
        }
        }
        else {
        panda$core$Bit $tmp2335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp2335.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2337 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92284->$data + 24));
            base2336 = *$tmp2337;
            org$pandalanguage$pandac$FieldDecl** $tmp2339 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1264_92284->$data + 32));
            field2338 = *$tmp2339;
            panda$core$String* $tmp2340 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, base2336, field2338, p_out);
            return $tmp2340;
        }
        }
        else {
        panda$core$Bit $tmp2341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2341.value) {
        {
            panda$core$String** $tmp2343 = ((panda$core$String**) ((char*) $match$1264_92284->$data + 16));
            str2342 = *$tmp2343;
            panda$core$String* $tmp2344 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(self, str2342);
            return $tmp2344;
        }
        }
        else {
        panda$core$Bit $tmp2345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2345.value) {
        {
            panda$core$String* $tmp2346 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(self, p_out);
            return $tmp2346;
        }
        }
        else {
        panda$core$Bit $tmp2347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2347.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2349 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1264_92284->$data + 16));
            t2348 = *$tmp2349;
            panda$core$String* $tmp2350 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, t2348, p_out);
            return $tmp2350;
        }
        }
        else {
        panda$core$Bit $tmp2351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2351.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2353 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92284->$data + 0));
            base2352 = *$tmp2353;
            panda$core$Int64* $tmp2355 = ((panda$core$Int64*) ((char*) $match$1264_92284->$data + 8));
            id2354 = *$tmp2355;
            panda$core$String* $tmp2357 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base2352, p_out);
            value2356 = $tmp2357;
            panda$core$Int64$wrapper* $tmp2358;
            $tmp2358 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2358->value = id2354;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp2358), ((panda$core$Object*) value2356));
            {
                tmp732359 = value2356;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value2356));
                return tmp732359;
            }
        }
        }
        else {
        panda$core$Bit $tmp2360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2360.value) {
        {
            panda$core$Int64* $tmp2362 = ((panda$core$Int64*) ((char*) $match$1264_92284->$data + 24));
            id2361 = *$tmp2362;
            panda$core$Int64$wrapper* $tmp2364;
            $tmp2364 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2364->value = id2361;
            panda$core$Object* $tmp2365 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) $tmp2364));
            result2363 = ((panda$core$String*) $tmp2365);
            PANDA_ASSERT(((panda$core$Bit) { result2363 != NULL }).value);
            {
                tmp742366 = result2363;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2363));
                return tmp742366;
            }
        }
        }
        else {
        panda$core$Bit $tmp2367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp2367.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2369 = ((org$pandalanguage$pandac$Position*) ((char*) $match$1264_92284->$data + 0));
            pos2368 = *$tmp2369;
            org$pandalanguage$pandac$Type** $tmp2371 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1264_92284->$data + 16));
            type2370 = *$tmp2371;
            panda$core$String* $tmp2372 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, type2370, p_out);
            return $tmp2372;
        }
        }
        else {
        panda$core$Bit $tmp2373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp2373.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2375 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92284->$data + 16));
            value2374 = *$tmp2375;
            panda$core$String* $tmp2376 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2374, p_out);
            return $tmp2376;
        }
        }
        else {
        panda$core$Bit $tmp2377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2377.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2379 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92284->$data + 16));
            value2378 = *$tmp2379;
            panda$core$String* $tmp2380 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2378, p_out);
            return $tmp2380;
        }
        }
        else {
        panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2381.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2383 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1264_92284->$data + 16));
            op2382 = *$tmp2383;
            org$pandalanguage$pandac$IRNode** $tmp2385 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92284->$data + 24));
            base2384 = *$tmp2385;
            panda$core$String* $tmp2386 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, op2382, base2384, p_out);
            return $tmp2386;
        }
        }
        else {
        panda$core$Bit $tmp2387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2387.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2389 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92284->$data + 16));
            test2388 = *$tmp2389;
            org$pandalanguage$pandac$IRNode** $tmp2391 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92284->$data + 24));
            ifTrue2390 = *$tmp2391;
            org$pandalanguage$pandac$IRNode** $tmp2393 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92284->$data + 32));
            ifFalse2392 = *$tmp2393;
            panda$core$String* $tmp2394 = org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, test2388, ifTrue2390, ifFalse2392, p_out);
            return $tmp2394;
        }
        }
        else {
        panda$core$Bit $tmp2395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp2395.value) {
        {
            panda$core$String* $tmp2396 = org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2396;
        }
        }
        else {
        panda$core$Bit $tmp2397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92284->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2397.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2399 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92284->$data + 0));
            base2398 = *$tmp2399;
            org$pandalanguage$pandac$IRNode** $tmp2401 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92284->$data + 8));
            stmt2400 = *$tmp2401;
            panda$core$String* $tmp2402 = org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base2398, stmt2400, p_out);
            return $tmp2402;
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
    panda$core$String* $tmp2403 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2403;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* Iter$1325$92407;
    org$pandalanguage$pandac$IRNode* s2419;
    (($fn2405) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2404);
    panda$core$Int64 $tmp2406 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2406;
    {
        ITable* $tmp2408 = ((panda$collections$Iterable*) p_statements)->$class->itable;
        while ($tmp2408->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2408 = $tmp2408->next;
        }
        $fn2410 $tmp2409 = $tmp2408->methods[0];
        panda$collections$Iterator* $tmp2411 = $tmp2409(((panda$collections$Iterable*) p_statements));
        Iter$1325$92407 = $tmp2411;
        $l2412:;
        ITable* $tmp2414 = Iter$1325$92407->$class->itable;
        while ($tmp2414->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2414 = $tmp2414->next;
        }
        $fn2416 $tmp2415 = $tmp2414->methods[0];
        panda$core$Bit $tmp2417 = $tmp2415(Iter$1325$92407);
        panda$core$Bit $tmp2418 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2417);
        if (!$tmp2418.value) goto $l2413;
        {
            ITable* $tmp2420 = Iter$1325$92407->$class->itable;
            while ($tmp2420->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2420 = $tmp2420->next;
            }
            $fn2422 $tmp2421 = $tmp2420->methods[1];
            panda$core$Object* $tmp2423 = $tmp2421(Iter$1325$92407);
            s2419 = ((org$pandalanguage$pandac$IRNode*) $tmp2423);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2419, p_out);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2419));
        }
        goto $l2412;
        $l2413:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1325$92407));
    }
    panda$core$Int64 $tmp2424 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2424;
    (($fn2426) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2425);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$1333_92427;
    panda$core$String* ptr2432;
    panda$core$String* arg2435;
    panda$core$String* base2457;
    panda$core$String* index2460;
    panda$core$String* value2463;
    {
        $match$1333_92427 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp2429 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1333_92427, &$s2428);
        if ($tmp2429.value) {
        {
            panda$core$Int64 $tmp2430 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2430, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2431.value);
            panda$core$Object* $tmp2433 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2434 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2433), p_out);
            ptr2432 = $tmp2434;
            panda$core$Object* $tmp2436 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2437 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2436));
            panda$core$String* $tmp2438 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2437, p_out);
            arg2435 = $tmp2438;
            panda$core$String* $tmp2440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2439, arg2435);
            panda$core$String* $tmp2442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2440, &$s2441);
            panda$core$String* $tmp2443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2442, ptr2432);
            panda$core$String* $tmp2445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2443, &$s2444);
            (($fn2446) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2445);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ptr2432));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2435));
            }
        }
        }
        else {
        panda$core$Bit $tmp2448 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1333_92427, &$s2447);
        if ($tmp2448.value) {
        {
            panda$core$Int64 $tmp2449 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2449, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2450.value);
            panda$core$Object* $tmp2451 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2452 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2451));
            org$pandalanguage$pandac$Type* $tmp2454 = (($fn2453) $tmp2452->$class->vtable[2])($tmp2452);
            panda$core$Int64 $tmp2455 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2454->subtypes);
            panda$core$Bit $tmp2456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2455, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2456.value);
            panda$core$Object* $tmp2458 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2459 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2458), p_out);
            base2457 = $tmp2459;
            panda$core$Object* $tmp2461 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2462 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2461), p_out);
            index2460 = $tmp2462;
            panda$core$Object* $tmp2464 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2465 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2464));
            panda$core$String* $tmp2466 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2465, p_out);
            value2463 = $tmp2466;
            panda$core$String* $tmp2467 = panda$core$String$convert$R$panda$core$String(base2457);
            panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2467, &$s2468);
            panda$core$String* $tmp2470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, index2460);
            panda$core$String* $tmp2472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, &$s2471);
            panda$core$String* $tmp2473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2472, value2463);
            panda$core$String* $tmp2475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2473, &$s2474);
            (($fn2476) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2475);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base2457));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value2463));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2460));
            }
        }
        }
        else {
        panda$core$Bit $tmp2478 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1333_92427, &$s2477);
        if ($tmp2478.value) {
        {
            panda$core$Int64 $tmp2479 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2479, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2480.value);
            panda$core$Object* $tmp2482 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2483 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2482), p_out);
            panda$core$String* $tmp2484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2481, $tmp2483);
            panda$core$String* $tmp2486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2484, &$s2485);
            (($fn2487) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2486);
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
    org$pandalanguage$pandac$MethodDecl* m2488;
    org$pandalanguage$pandac$Type* actualMethodType2492;
    panda$core$String* actualResultType2493;
    panda$core$Bit isSuper2494;
    panda$collections$Array* argRefs2514;
    panda$core$Int64 offset2516;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2521;
    panda$core$String* arg2536;
    panda$core$String* targetRef2561;
    panda$core$String* methodRef2565;
    panda$core$String* separator2567;
    panda$core$String* indirectVar2571;
    panda$core$String* resultType2575;
    panda$collections$Iterator* Iter$1413$92599;
    panda$core$String* a2611;
    m2488 = p_mref->value;
    panda$core$Bit $tmp2490 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2488->owner)->name, &$s2489);
    if ($tmp2490.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_mref, p_args, p_out);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2488));
            return;
        }
    }
    }
    panda$core$Bit $tmp2491 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2488->owner);
    if ($tmp2491.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2488);
    }
    }
    memset(&actualMethodType2492, 0, sizeof(actualMethodType2492));
    memset(&actualResultType2493, 0, sizeof(actualResultType2493));
    panda$core$Int64 $tmp2496 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp2497 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2496, ((panda$core$Int64) { 1 }));
    bool $tmp2495 = $tmp2497.value;
    if (!$tmp2495) goto $l2498;
    panda$core$Object* $tmp2499 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2499)->$rawValue, ((panda$core$Int64) { 33 }));
    $tmp2495 = $tmp2500.value;
    $l2498:;
    panda$core$Bit $tmp2501 = { $tmp2495 };
    isSuper2494 = $tmp2501;
    panda$core$Bit $tmp2503 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2494);
    bool $tmp2502 = $tmp2503.value;
    if (!$tmp2502) goto $l2504;
    panda$core$Bit $tmp2505 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2488);
    $tmp2502 = $tmp2505.value;
    $l2504:;
    panda$core$Bit $tmp2506 = { $tmp2502 };
    if ($tmp2506.value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp2507 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2488);
            actualMethodType2492 = $tmp2507;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType2492));
        }
        {
            panda$core$Int64 $tmp2508 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2492->subtypes);
            panda$core$Int64 $tmp2509 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2508, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2510 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2492->subtypes, $tmp2509);
            panda$core$String* $tmp2511 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2510));
            actualResultType2493 = $tmp2511;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType2493));
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp2512 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2488);
            actualMethodType2492 = $tmp2512;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType2492));
        }
        {
            panda$core$String* $tmp2513 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            actualResultType2493 = $tmp2513;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType2493));
        }
    }
    }
    panda$collections$Array* $tmp2515 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2515);
    argRefs2514 = $tmp2515;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(argRefs2514, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2517 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp2518 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2492->subtypes);
    panda$core$Int64 $tmp2519 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2517, $tmp2518);
    panda$core$Int64 $tmp2520 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2519, ((panda$core$Int64) { 1 }));
    offset2516 = $tmp2520;
    panda$core$Int64 $tmp2522 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2521, ((panda$core$Int64) { 0 }), $tmp2522, ((panda$core$Bit) { false }));
    int64_t $tmp2524 = $tmp2521.min.value;
    panda$core$Int64 i2523 = { $tmp2524 };
    int64_t $tmp2526 = $tmp2521.max.value;
    bool $tmp2527 = $tmp2521.inclusive.value;
    if ($tmp2527) goto $l2534; else goto $l2535;
    $l2534:;
    if ($tmp2524 <= $tmp2526) goto $l2528; else goto $l2530;
    $l2535:;
    if ($tmp2524 < $tmp2526) goto $l2528; else goto $l2530;
    $l2528:;
    {
        panda$core$Object* $tmp2537 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2523);
        panda$core$String* $tmp2538 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2537), p_out);
        arg2536 = $tmp2538;
        panda$core$Bit $tmp2540 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2523, offset2516);
        bool $tmp2539 = $tmp2540.value;
        if (!$tmp2539) goto $l2541;
        panda$core$Int64 $tmp2542 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2523, offset2516);
        panda$core$Object* $tmp2543 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2492->subtypes, $tmp2542);
        panda$core$Object* $tmp2544 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2523);
        org$pandalanguage$pandac$Type* $tmp2546 = (($fn2545) ((org$pandalanguage$pandac$IRNode*) $tmp2544)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2544));
        panda$core$Bit $tmp2547 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2543), $tmp2546);
        $tmp2539 = $tmp2547.value;
        $l2541:;
        panda$core$Bit $tmp2548 = { $tmp2539 };
        if ($tmp2548.value) {
        {
            {
                panda$core$Object* $tmp2549 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2523);
                org$pandalanguage$pandac$Type* $tmp2551 = (($fn2550) ((org$pandalanguage$pandac$IRNode*) $tmp2549)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2549));
                panda$core$Int64 $tmp2552 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2523, offset2516);
                panda$core$Object* $tmp2553 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2492->subtypes, $tmp2552);
                panda$core$String* $tmp2554 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2536, $tmp2551, ((org$pandalanguage$pandac$Type*) $tmp2553), p_out);
                arg2536 = $tmp2554;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2536));
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs2514, ((panda$core$Object*) arg2536));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2536));
    }
    $l2531:;
    int64_t $tmp2556 = $tmp2526 - i2523.value;
    if ($tmp2527) goto $l2557; else goto $l2558;
    $l2557:;
    if ((uint64_t) $tmp2556 >= 1) goto $l2555; else goto $l2530;
    $l2558:;
    if ((uint64_t) $tmp2556 > 1) goto $l2555; else goto $l2530;
    $l2555:;
    i2523.value += 1;
    goto $l2528;
    $l2530:;
    memset(&targetRef2561, 0, sizeof(targetRef2561));
    panda$core$Int64 $tmp2562 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs2514);
    panda$core$Bit $tmp2563 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2562, ((panda$core$Int64) { 0 }));
    if ($tmp2563.value) {
    {
        {
            panda$core$Object* $tmp2564 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs2514, ((panda$core$Int64) { 0 }));
            targetRef2561 = ((panda$core$String*) $tmp2564);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetRef2561));
        }
    }
    }
    else {
    {
        {
            targetRef2561 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetRef2561));
        }
    }
    }
    panda$core$String* $tmp2566 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, targetRef2561, m2488, isSuper2494, p_out);
    methodRef2565 = $tmp2566;
    separator2567 = &$s2568;
    panda$core$Bit $tmp2569 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2488);
    if ($tmp2569.value) {
    {
        panda$core$Int64 $tmp2570 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2570;
        panda$core$Int64$wrapper* $tmp2573;
        $tmp2573 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp2573->value = self->varCount;
        panda$core$String* $tmp2574 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2572, ((panda$core$Object*) $tmp2573));
        indirectVar2571 = $tmp2574;
        panda$core$String* $tmp2576 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        resultType2575 = $tmp2576;
        panda$core$String* $tmp2577 = panda$core$String$convert$R$panda$core$String(resultType2575);
        panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2577, &$s2578);
        panda$core$String* $tmp2580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2579, indirectVar2571);
        panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2580, &$s2581);
        (($fn2583) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2582);
        panda$core$String* $tmp2584 = panda$core$String$convert$R$panda$core$String(methodRef2565);
        panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, &$s2585);
        panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, resultType2575);
        panda$core$String* $tmp2589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, &$s2588);
        panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2589, indirectVar2571);
        panda$core$String* $tmp2592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2590, &$s2591);
        (($fn2593) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2592);
        {
            separator2567 = &$s2594;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2567));
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultType2575));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar2571));
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2595 = panda$core$String$convert$R$panda$core$String(methodRef2565);
        panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2595, &$s2596);
        (($fn2598) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2597);
    }
    }
    {
        ITable* $tmp2600 = ((panda$collections$Iterable*) argRefs2514)->$class->itable;
        while ($tmp2600->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2600 = $tmp2600->next;
        }
        $fn2602 $tmp2601 = $tmp2600->methods[0];
        panda$collections$Iterator* $tmp2603 = $tmp2601(((panda$collections$Iterable*) argRefs2514));
        Iter$1413$92599 = $tmp2603;
        $l2604:;
        ITable* $tmp2606 = Iter$1413$92599->$class->itable;
        while ($tmp2606->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2606 = $tmp2606->next;
        }
        $fn2608 $tmp2607 = $tmp2606->methods[0];
        panda$core$Bit $tmp2609 = $tmp2607(Iter$1413$92599);
        panda$core$Bit $tmp2610 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2609);
        if (!$tmp2610.value) goto $l2605;
        {
            ITable* $tmp2612 = Iter$1413$92599->$class->itable;
            while ($tmp2612->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2612 = $tmp2612->next;
            }
            $fn2614 $tmp2613 = $tmp2612->methods[1];
            panda$core$Object* $tmp2615 = $tmp2613(Iter$1413$92599);
            a2611 = ((panda$core$String*) $tmp2615);
            (($fn2616) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2567);
            (($fn2617) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2611);
            {
                separator2567 = &$s2618;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2567));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2611));
        }
        goto $l2604;
        $l2605:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1413$92599));
    }
    (($fn2620) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2619);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2567));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs2514));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef2565));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType2493));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2488));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetRef2561));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType2492));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$collections$ImmutableArray* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef2621;
    panda$core$String* $tmp2622 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    testRef2621 = $tmp2622;
    panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2623, testRef2621);
    panda$core$String* $tmp2626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2624, &$s2625);
    (($fn2627) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2626);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { false }), p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_ifTrue, p_out);
    (($fn2629) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2628);
    if (((panda$core$Bit) { p_ifFalse != NULL }).value) {
    {
        (($fn2631) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2630);
        org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { false }), p_out);
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_ifFalse, p_out);
        (($fn2633) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2632);
    }
    }
    panda$collections$Array$clear(self->extraEffects);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testRef2621));
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range2646;
    org$pandalanguage$pandac$Type* t2648;
    panda$core$String* llt2652;
    panda$core$String* indexType2654;
    org$pandalanguage$pandac$ClassDecl* cl2660;
    org$pandalanguage$pandac$FieldDecl* field2668;
    panda$core$String* numberType2674;
    panda$core$String* index2676;
    org$pandalanguage$pandac$IRNode* $match$1464_92677;
    org$pandalanguage$pandac$Variable* variable2679;
    panda$core$String* start2682;
    panda$core$String* indexValuePtr2694;
    panda$core$String* end2708;
    panda$core$String* inclusive2720;
    panda$core$String* loopStart2730;
    panda$core$String* loopBody2732;
    panda$core$String* loopEnd2734;
    panda$core$String* loopTest2736;
    panda$core$String* forwardEntry2739;
    panda$core$String* backwardEntry2741;
    panda$core$String* signPrefix2743;
    panda$core$String* unsigned2744;
    panda$core$String* forwardEntryInclusive2758;
    panda$core$String* forwardEntryExclusive2760;
    panda$core$String* loopInc2802;
    panda$core$String* forwardDelta2804;
    panda$core$String* forwardInclusiveLabel2819;
    panda$core$String* forwardExclusiveLabel2821;
    panda$core$String* forwardExclusiveTest2850;
    panda$core$String* inc2867;
    org$pandalanguage$pandac$Type* $tmp2635 = (($fn2634) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp2636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2635->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2636.value);
    org$pandalanguage$pandac$Type* $tmp2638 = (($fn2637) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp2639 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2638->subtypes);
    panda$core$Bit $tmp2640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2639, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2640.value);
    org$pandalanguage$pandac$Type* $tmp2642 = (($fn2641) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2643 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2642->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2645 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2643))->name, &$s2644);
    PANDA_ASSERT($tmp2645.value);
    panda$core$String* $tmp2647 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    range2646 = $tmp2647;
    org$pandalanguage$pandac$Type* $tmp2650 = (($fn2649) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2651 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2650->subtypes, ((panda$core$Int64) { 1 }));
    t2648 = ((org$pandalanguage$pandac$Type*) $tmp2651);
    panda$core$String* $tmp2653 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2648);
    llt2652 = $tmp2653;
    memset(&indexType2654, 0, sizeof(indexType2654));
    panda$core$Bit $tmp2655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2648->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2655.value) {
    {
        panda$core$Int64 $tmp2656 = panda$collections$Array$get_count$R$panda$core$Int64(t2648->subtypes);
        panda$core$Bit $tmp2657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2656, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2657.value);
        {
            panda$core$Object* $tmp2658 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2648->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2659 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2658));
            indexType2654 = $tmp2659;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2654));
        }
    }
    }
    else {
    {
        {
            indexType2654 = llt2652;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2654));
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2661 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2648);
    cl2660 = $tmp2661;
    PANDA_ASSERT(((panda$core$Bit) { cl2660 != NULL }).value);
    panda$collections$ListView* $tmp2662 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2660);
    ITable* $tmp2663 = ((panda$collections$CollectionView*) $tmp2662)->$class->itable;
    while ($tmp2663->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2663 = $tmp2663->next;
    }
    $fn2665 $tmp2664 = $tmp2663->methods[0];
    panda$core$Int64 $tmp2666 = $tmp2664(((panda$collections$CollectionView*) $tmp2662));
    panda$core$Bit $tmp2667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2666, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2667.value);
    panda$collections$ListView* $tmp2669 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2660);
    ITable* $tmp2670 = $tmp2669->$class->itable;
    while ($tmp2670->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2670 = $tmp2670->next;
    }
    $fn2672 $tmp2671 = $tmp2670->methods[0];
    panda$core$Object* $tmp2673 = $tmp2671($tmp2669, ((panda$core$Int64) { 0 }));
    field2668 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2673);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2668);
    panda$core$String* $tmp2675 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2668->type);
    numberType2674 = $tmp2675;
    memset(&index2676, 0, sizeof(index2676));
    {
        $match$1464_92677 = p_target;
        panda$core$Bit $tmp2678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1464_92677->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2678.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2680 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1464_92677->$data + 16));
            variable2679 = *$tmp2680;
            {
                panda$core$String* $tmp2681 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable2679);
                index2676 = $tmp2681;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2676));
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp2683 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2682 = $tmp2683;
    panda$core$String* $tmp2684 = panda$core$String$convert$R$panda$core$String(numberType2674);
    panda$core$String* $tmp2686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2684, &$s2685);
    panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2686, start2682);
    panda$core$String* $tmp2689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2687, &$s2688);
    panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2689, range2646);
    panda$core$String* $tmp2692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2690, &$s2691);
    (($fn2693) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2692);
    panda$core$String* $tmp2695 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2694 = $tmp2695;
    org$pandalanguage$pandac$Type* $tmp2696 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2660);
    panda$core$String* $tmp2697 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2696);
    panda$core$String* $tmp2698 = panda$core$String$convert$R$panda$core$String($tmp2697);
    panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2699);
    panda$core$String* $tmp2701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, index2676);
    panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2701, &$s2702);
    panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2703, start2682);
    panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2704, &$s2705);
    (($fn2707) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2706);
    panda$core$String* $tmp2709 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2708 = $tmp2709;
    panda$core$String* $tmp2710 = panda$core$String$convert$R$panda$core$String(numberType2674);
    panda$core$String* $tmp2712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, &$s2711);
    panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2712, end2708);
    panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, &$s2714);
    panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, range2646);
    panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, &$s2717);
    (($fn2719) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2718);
    panda$core$String* $tmp2721 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2720 = $tmp2721;
    panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2722, inclusive2720);
    panda$core$String* $tmp2725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2723, &$s2724);
    panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2725, range2646);
    panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, &$s2727);
    (($fn2729) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2728);
    panda$core$String* $tmp2731 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2730 = $tmp2731;
    panda$core$String* $tmp2733 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2732 = $tmp2733;
    panda$core$String* $tmp2735 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2734 = $tmp2735;
    panda$core$String* $tmp2737 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2736 = $tmp2737;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2738 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2738, p_label, loopEnd2734, loopTest2736);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2738));
    panda$core$String* $tmp2740 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2739 = $tmp2740;
    panda$core$String* $tmp2742 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2741 = $tmp2742;
    memset(&signPrefix2743, 0, sizeof(signPrefix2743));
    memset(&unsigned2744, 0, sizeof(unsigned2744));
    panda$core$Bit $tmp2746 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2648)->name, &$s2745);
    if ($tmp2746.value) {
    {
        {
            signPrefix2743 = &$s2747;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix2743));
        }
        {
            panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2748, numberType2674);
            unsigned2744 = $tmp2749;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned2744));
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp2752 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2648)->name, &$s2751);
        bool $tmp2750 = $tmp2752.value;
        if ($tmp2750) goto $l2753;
        panda$core$Bit $tmp2755 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2648)->name, &$s2754);
        $tmp2750 = $tmp2755.value;
        $l2753:;
        panda$core$Bit $tmp2756 = { $tmp2750 };
        PANDA_ASSERT($tmp2756.value);
        {
            signPrefix2743 = &$s2757;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix2743));
        }
        {
            unsigned2744 = numberType2674;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned2744));
        }
    }
    }
    panda$core$String* $tmp2759 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2758 = $tmp2759;
    panda$core$String* $tmp2761 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2760 = $tmp2761;
    panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2762, inclusive2720);
    panda$core$String* $tmp2765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2763, &$s2764);
    panda$core$String* $tmp2766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2765, forwardEntryInclusive2758);
    panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2766, &$s2767);
    panda$core$String* $tmp2769 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2760);
    panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2769, &$s2770);
    panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2768, $tmp2771);
    (($fn2773) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2772);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2758, p_out);
    panda$core$String* $tmp2775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2774, start2682);
    panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2775, &$s2776);
    panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, end2708);
    panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, &$s2779);
    panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, loopStart2730);
    panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2781, &$s2782);
    panda$core$String* $tmp2784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2783, loopEnd2734);
    panda$core$String* $tmp2786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2784, &$s2785);
    (($fn2787) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2786);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2760, p_out);
    panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2788, start2682);
    panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, &$s2790);
    panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, end2708);
    panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, &$s2793);
    panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2794, loopStart2730);
    panda$core$String* $tmp2797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2795, &$s2796);
    panda$core$String* $tmp2798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2797, loopEnd2734);
    panda$core$String* $tmp2800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2798, &$s2799);
    (($fn2801) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2800);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2730, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2736, p_out);
    panda$core$String* $tmp2803 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2802 = $tmp2803;
    panda$core$String* $tmp2805 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2804 = $tmp2805;
    panda$core$String* $tmp2806 = panda$core$String$convert$R$panda$core$String(numberType2674);
    panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2806, &$s2807);
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, forwardDelta2804);
    panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, &$s2810);
    panda$core$String* $tmp2812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2811, end2708);
    panda$core$String* $tmp2814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2812, &$s2813);
    panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2814, index2676);
    panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, &$s2816);
    (($fn2818) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2817);
    panda$core$String* $tmp2820 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2819 = $tmp2820;
    panda$core$String* $tmp2822 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2821 = $tmp2822;
    panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2823, inclusive2720);
    panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, &$s2825);
    panda$core$String* $tmp2827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2826, forwardInclusiveLabel2819);
    panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2827, &$s2828);
    panda$core$String* $tmp2830 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2821);
    panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2830, &$s2831);
    panda$core$String* $tmp2833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2829, $tmp2832);
    (($fn2834) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2833);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2819, p_out);
    panda$core$String* $tmp2836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2835, unsigned2744);
    panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, &$s2837);
    panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, forwardDelta2804);
    panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, &$s2840);
    panda$core$String* $tmp2842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2841, loopInc2802);
    panda$core$String* $tmp2844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2842, &$s2843);
    panda$core$String* $tmp2845 = panda$core$String$convert$R$panda$core$String(loopEnd2734);
    panda$core$String* $tmp2847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2845, &$s2846);
    panda$core$String* $tmp2848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2844, $tmp2847);
    (($fn2849) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2848);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2821, p_out);
    panda$core$String* $tmp2851 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2850 = $tmp2851;
    panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2852, unsigned2744);
    panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2853, &$s2854);
    panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2855, forwardDelta2804);
    panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2856, &$s2857);
    panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2858, loopInc2802);
    panda$core$String* $tmp2861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2859, &$s2860);
    panda$core$String* $tmp2862 = panda$core$String$convert$R$panda$core$String(loopEnd2734);
    panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2862, &$s2863);
    panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2861, $tmp2864);
    (($fn2866) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2865);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2802, p_out);
    panda$core$String* $tmp2868 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2867 = $tmp2868;
    panda$core$String* $tmp2869 = panda$core$String$convert$R$panda$core$String(index2676);
    panda$core$String* $tmp2871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2869, &$s2870);
    (($fn2872) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2871);
    panda$core$String* $tmp2874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2873, loopStart2730);
    panda$core$String* $tmp2876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2874, &$s2875);
    (($fn2877) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2876);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2734, p_out);
    panda$core$Object* $tmp2878 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix2743));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveLabel2821));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$1464_92677));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inclusive2720));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned2744));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2682));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopBody2732));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopTest2736));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryInclusive2758));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2648));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardInclusiveLabel2819));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) end2708));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inc2867));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart2730));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntry2741));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexValuePtr2694));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd2734));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopInc2802));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2654));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llt2652));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveTest2850));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) numberType2674));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntry2739));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2676));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryExclusive2760));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field2668));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardDelta2804));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2660));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) range2646));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range2891;
    org$pandalanguage$pandac$Type* t2893;
    org$pandalanguage$pandac$Type* stepType2897;
    panda$core$String* llt2901;
    panda$core$String* indexType2903;
    org$pandalanguage$pandac$ClassDecl* cl2909;
    org$pandalanguage$pandac$FieldDecl* field2917;
    panda$core$String* numberType2923;
    panda$core$String* index2925;
    org$pandalanguage$pandac$IRNode* $match$1576_92926;
    org$pandalanguage$pandac$Variable* variable2928;
    panda$core$String* start2931;
    panda$core$String* indexValuePtr2943;
    panda$core$String* end2957;
    panda$core$String* step2969;
    org$pandalanguage$pandac$ClassDecl* stepCl2971;
    org$pandalanguage$pandac$FieldDecl* stepField2979;
    panda$core$String* inclusive2996;
    panda$core$String* loopStart3006;
    panda$core$String* loopBody3008;
    panda$core$String* loopEnd3010;
    panda$core$String* loopTest3012;
    panda$core$String* forwardEntry3015;
    panda$core$String* backwardEntry3017;
    panda$core$String* unsigned3019;
    panda$core$String* signPrefix3020;
    panda$core$String* direction3036;
    panda$core$String* forwardEntryInclusive3060;
    panda$core$String* forwardEntryExclusive3062;
    panda$core$String* backwardEntryInclusive3104;
    panda$core$String* backwardEntryExclusive3106;
    panda$core$String* backwardEntryExclusiveTest3134;
    panda$core$String* loopInc3150;
    panda$core$String* forwardLabel3152;
    panda$core$String* backwardLabel3154;
    panda$core$String* forwardDelta3167;
    panda$core$String* forwardInclusiveLabel3182;
    panda$core$String* forwardExclusiveLabel3184;
    panda$core$String* forwardExclusiveTest3216;
    panda$core$String* backwardDelta3236;
    panda$core$String* backwardInclusiveLabel3251;
    panda$core$String* backwardExclusiveLabel3253;
    panda$core$String* inc3305;
    org$pandalanguage$pandac$Type* $tmp2880 = (($fn2879) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp2881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2880->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2881.value);
    org$pandalanguage$pandac$Type* $tmp2883 = (($fn2882) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp2884 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2883->subtypes);
    panda$core$Bit $tmp2885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2884, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2885.value);
    org$pandalanguage$pandac$Type* $tmp2887 = (($fn2886) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2888 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2887->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2890 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2888))->name, &$s2889);
    PANDA_ASSERT($tmp2890.value);
    panda$core$String* $tmp2892 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    range2891 = $tmp2892;
    org$pandalanguage$pandac$Type* $tmp2895 = (($fn2894) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2896 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2895->subtypes, ((panda$core$Int64) { 1 }));
    t2893 = ((org$pandalanguage$pandac$Type*) $tmp2896);
    org$pandalanguage$pandac$Type* $tmp2899 = (($fn2898) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2900 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2899->subtypes, ((panda$core$Int64) { 2 }));
    stepType2897 = ((org$pandalanguage$pandac$Type*) $tmp2900);
    panda$core$String* $tmp2902 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2893);
    llt2901 = $tmp2902;
    memset(&indexType2903, 0, sizeof(indexType2903));
    panda$core$Bit $tmp2904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2893->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2904.value) {
    {
        panda$core$Int64 $tmp2905 = panda$collections$Array$get_count$R$panda$core$Int64(t2893->subtypes);
        panda$core$Bit $tmp2906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2905, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2906.value);
        {
            panda$core$Object* $tmp2907 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2893->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2908 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2907));
            indexType2903 = $tmp2908;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2903));
        }
    }
    }
    else {
    {
        {
            indexType2903 = llt2901;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2903));
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2910 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2893);
    cl2909 = $tmp2910;
    PANDA_ASSERT(((panda$core$Bit) { cl2909 != NULL }).value);
    panda$collections$ListView* $tmp2911 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2909);
    ITable* $tmp2912 = ((panda$collections$CollectionView*) $tmp2911)->$class->itable;
    while ($tmp2912->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2912 = $tmp2912->next;
    }
    $fn2914 $tmp2913 = $tmp2912->methods[0];
    panda$core$Int64 $tmp2915 = $tmp2913(((panda$collections$CollectionView*) $tmp2911));
    panda$core$Bit $tmp2916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2915, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2916.value);
    panda$collections$ListView* $tmp2918 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2909);
    ITable* $tmp2919 = $tmp2918->$class->itable;
    while ($tmp2919->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2919 = $tmp2919->next;
    }
    $fn2921 $tmp2920 = $tmp2919->methods[0];
    panda$core$Object* $tmp2922 = $tmp2920($tmp2918, ((panda$core$Int64) { 0 }));
    field2917 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2922);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2917);
    panda$core$String* $tmp2924 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2917->type);
    numberType2923 = $tmp2924;
    memset(&index2925, 0, sizeof(index2925));
    {
        $match$1576_92926 = p_target;
        panda$core$Bit $tmp2927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1576_92926->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2927.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2929 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1576_92926->$data + 16));
            variable2928 = *$tmp2929;
            {
                panda$core$String* $tmp2930 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable2928);
                index2925 = $tmp2930;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2925));
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp2932 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2931 = $tmp2932;
    panda$core$String* $tmp2933 = panda$core$String$convert$R$panda$core$String(numberType2923);
    panda$core$String* $tmp2935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2933, &$s2934);
    panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, start2931);
    panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2936, &$s2937);
    panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2938, range2891);
    panda$core$String* $tmp2941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2939, &$s2940);
    (($fn2942) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2941);
    panda$core$String* $tmp2944 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2943 = $tmp2944;
    org$pandalanguage$pandac$Type* $tmp2945 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2909);
    panda$core$String* $tmp2946 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2945);
    panda$core$String* $tmp2947 = panda$core$String$convert$R$panda$core$String($tmp2946);
    panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2947, &$s2948);
    panda$core$String* $tmp2950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2949, index2925);
    panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, &$s2951);
    panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2952, start2931);
    panda$core$String* $tmp2955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2953, &$s2954);
    (($fn2956) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2955);
    panda$core$String* $tmp2958 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2957 = $tmp2958;
    panda$core$String* $tmp2959 = panda$core$String$convert$R$panda$core$String(numberType2923);
    panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2959, &$s2960);
    panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2961, end2957);
    panda$core$String* $tmp2964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, &$s2963);
    panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2964, range2891);
    panda$core$String* $tmp2967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2965, &$s2966);
    (($fn2968) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2967);
    panda$core$String* $tmp2970 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2969 = $tmp2970;
    org$pandalanguage$pandac$ClassDecl* $tmp2972 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, stepType2897);
    stepCl2971 = $tmp2972;
    PANDA_ASSERT(((panda$core$Bit) { stepCl2971 != NULL }).value);
    panda$collections$ListView* $tmp2973 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2971);
    ITable* $tmp2974 = ((panda$collections$CollectionView*) $tmp2973)->$class->itable;
    while ($tmp2974->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2974 = $tmp2974->next;
    }
    $fn2976 $tmp2975 = $tmp2974->methods[0];
    panda$core$Int64 $tmp2977 = $tmp2975(((panda$collections$CollectionView*) $tmp2973));
    panda$core$Bit $tmp2978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2977, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2978.value);
    panda$collections$ListView* $tmp2980 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2971);
    ITable* $tmp2981 = $tmp2980->$class->itable;
    while ($tmp2981->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2981 = $tmp2981->next;
    }
    $fn2983 $tmp2982 = $tmp2981->methods[0];
    panda$core$Object* $tmp2984 = $tmp2982($tmp2980, ((panda$core$Int64) { 0 }));
    stepField2979 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2984);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, stepField2979);
    panda$core$String* $tmp2985 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, stepField2979->type);
    panda$core$String* $tmp2986 = panda$core$String$convert$R$panda$core$String($tmp2985);
    panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2986, &$s2987);
    panda$core$String* $tmp2989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2988, step2969);
    panda$core$String* $tmp2991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2989, &$s2990);
    panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2991, range2891);
    panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2992, &$s2993);
    (($fn2995) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2994);
    panda$core$String* $tmp2997 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2996 = $tmp2997;
    panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2998, inclusive2996);
    panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2999, &$s3000);
    panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, range2891);
    panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, &$s3003);
    (($fn3005) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3004);
    panda$core$String* $tmp3007 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3006 = $tmp3007;
    panda$core$String* $tmp3009 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody3008 = $tmp3009;
    panda$core$String* $tmp3011 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3010 = $tmp3011;
    panda$core$String* $tmp3013 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest3012 = $tmp3013;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3014 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3014, p_label, loopEnd3010, loopTest3012);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3014));
    panda$core$String* $tmp3016 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry3015 = $tmp3016;
    panda$core$String* $tmp3018 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry3017 = $tmp3018;
    memset(&unsigned3019, 0, sizeof(unsigned3019));
    memset(&signPrefix3020, 0, sizeof(signPrefix3020));
    panda$core$Bit $tmp3022 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2897)->name, &$s3021);
    if ($tmp3022.value) {
    {
        {
            signPrefix3020 = &$s3023;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix3020));
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp3026 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2897)->name, &$s3025);
        bool $tmp3024 = $tmp3026.value;
        if ($tmp3024) goto $l3027;
        panda$core$Bit $tmp3029 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2897)->name, &$s3028);
        $tmp3024 = $tmp3029.value;
        $l3027:;
        panda$core$Bit $tmp3030 = { $tmp3024 };
        PANDA_ASSERT($tmp3030.value);
        {
            signPrefix3020 = &$s3031;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix3020));
        }
    }
    }
    panda$core$Bit $tmp3033 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(numberType2923, &$s3032);
    if ($tmp3033.value) {
    {
        {
            unsigned3019 = numberType2923;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned3019));
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp3035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3034, numberType2923);
            unsigned3019 = $tmp3035;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned3019));
        }
    }
    }
    memset(&direction3036, 0, sizeof(direction3036));
    panda$core$Bit $tmp3038 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix3020, &$s3037);
    if ($tmp3038.value) {
    {
        {
            panda$core$String* $tmp3039 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            direction3036 = $tmp3039;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) direction3036));
        }
        panda$core$String* $tmp3041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3040, direction3036);
        panda$core$String* $tmp3043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3041, &$s3042);
        panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3043, step2969);
        panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, &$s3045);
        (($fn3047) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3046);
    }
    }
    else {
    {
        {
            direction3036 = &$s3048;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) direction3036));
        }
    }
    }
    panda$core$String* $tmp3050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3049, direction3036);
    panda$core$String* $tmp3052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3050, &$s3051);
    panda$core$String* $tmp3053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3052, forwardEntry3015);
    panda$core$String* $tmp3055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3053, &$s3054);
    panda$core$String* $tmp3056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3055, backwardEntry3017);
    panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3056, &$s3057);
    (($fn3059) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3058);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry3015, p_out);
    panda$core$String* $tmp3061 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive3060 = $tmp3061;
    panda$core$String* $tmp3063 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive3062 = $tmp3063;
    panda$core$String* $tmp3065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3064, inclusive2996);
    panda$core$String* $tmp3067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3065, &$s3066);
    panda$core$String* $tmp3068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3067, forwardEntryInclusive3060);
    panda$core$String* $tmp3070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3068, &$s3069);
    panda$core$String* $tmp3071 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive3062);
    panda$core$String* $tmp3073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3071, &$s3072);
    panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3070, $tmp3073);
    (($fn3075) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3074);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive3060, p_out);
    panda$core$String* $tmp3077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3076, start2931);
    panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3077, &$s3078);
    panda$core$String* $tmp3080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3079, end2957);
    panda$core$String* $tmp3082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3080, &$s3081);
    panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3082, loopStart3006);
    panda$core$String* $tmp3085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3083, &$s3084);
    panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3085, loopEnd3010);
    panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3086, &$s3087);
    (($fn3089) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3088);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive3062, p_out);
    panda$core$String* $tmp3091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3090, start2931);
    panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3091, &$s3092);
    panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, end2957);
    panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, &$s3095);
    panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, loopStart3006);
    panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3097, &$s3098);
    panda$core$String* $tmp3100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, loopEnd3010);
    panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3100, &$s3101);
    (($fn3103) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3102);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry3017, p_out);
    panda$core$String* $tmp3105 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive3104 = $tmp3105;
    panda$core$String* $tmp3107 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive3106 = $tmp3107;
    panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3108, inclusive2996);
    panda$core$String* $tmp3111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, &$s3110);
    panda$core$String* $tmp3112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3111, backwardEntryInclusive3104);
    panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3112, &$s3113);
    panda$core$String* $tmp3115 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive3106);
    panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3115, &$s3116);
    panda$core$String* $tmp3118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3114, $tmp3117);
    (($fn3119) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3118);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive3104, p_out);
    panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3120, start2931);
    panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3121, &$s3122);
    panda$core$String* $tmp3124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3123, end2957);
    panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3124, &$s3125);
    panda$core$String* $tmp3127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3126, loopStart3006);
    panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3127, &$s3128);
    panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, loopEnd3010);
    panda$core$String* $tmp3132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3130, &$s3131);
    (($fn3133) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3132);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive3106, p_out);
    panda$core$String* $tmp3135 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest3134 = $tmp3135;
    panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3136, start2931);
    panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, &$s3138);
    panda$core$String* $tmp3140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3139, end2957);
    panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3140, &$s3141);
    panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3142, loopStart3006);
    panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, &$s3144);
    panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3145, loopEnd3010);
    panda$core$String* $tmp3148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3146, &$s3147);
    (($fn3149) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3148);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3006, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest3012, p_out);
    panda$core$String* $tmp3151 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc3150 = $tmp3151;
    panda$core$String* $tmp3153 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel3152 = $tmp3153;
    panda$core$String* $tmp3155 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel3154 = $tmp3155;
    panda$core$String* $tmp3157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3156, direction3036);
    panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3157, &$s3158);
    panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3159, forwardLabel3152);
    panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, &$s3161);
    panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3162, backwardLabel3154);
    panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, &$s3164);
    (($fn3166) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3165);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel3152, p_out);
    panda$core$String* $tmp3168 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta3167 = $tmp3168;
    panda$core$String* $tmp3169 = panda$core$String$convert$R$panda$core$String(numberType2923);
    panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3169, &$s3170);
    panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3171, forwardDelta3167);
    panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3172, &$s3173);
    panda$core$String* $tmp3175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, end2957);
    panda$core$String* $tmp3177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3175, &$s3176);
    panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3177, index2925);
    panda$core$String* $tmp3180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, &$s3179);
    (($fn3181) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3180);
    panda$core$String* $tmp3183 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel3182 = $tmp3183;
    panda$core$String* $tmp3185 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel3184 = $tmp3185;
    panda$core$String* $tmp3187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3186, inclusive2996);
    panda$core$String* $tmp3189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3187, &$s3188);
    panda$core$String* $tmp3190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3189, forwardInclusiveLabel3182);
    panda$core$String* $tmp3192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3190, &$s3191);
    panda$core$String* $tmp3193 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel3184);
    panda$core$String* $tmp3195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3193, &$s3194);
    panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3192, $tmp3195);
    (($fn3197) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3196);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel3182, p_out);
    panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3198, unsigned3019);
    panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3199, &$s3200);
    panda$core$String* $tmp3202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3201, forwardDelta3167);
    panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3202, &$s3203);
    panda$core$String* $tmp3205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3204, step2969);
    panda$core$String* $tmp3207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3205, &$s3206);
    panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3207, loopInc3150);
    panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, &$s3209);
    panda$core$String* $tmp3211 = panda$core$String$convert$R$panda$core$String(loopEnd3010);
    panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3211, &$s3212);
    panda$core$String* $tmp3214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3210, $tmp3213);
    (($fn3215) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3214);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel3184, p_out);
    panda$core$String* $tmp3217 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest3216 = $tmp3217;
    panda$core$String* $tmp3219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3218, unsigned3019);
    panda$core$String* $tmp3221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3219, &$s3220);
    panda$core$String* $tmp3222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3221, forwardDelta3167);
    panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3222, &$s3223);
    panda$core$String* $tmp3225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3224, step2969);
    panda$core$String* $tmp3227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3225, &$s3226);
    panda$core$String* $tmp3228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3227, loopInc3150);
    panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3228, &$s3229);
    panda$core$String* $tmp3231 = panda$core$String$convert$R$panda$core$String(loopEnd3010);
    panda$core$String* $tmp3233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3231, &$s3232);
    panda$core$String* $tmp3234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3230, $tmp3233);
    (($fn3235) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3234);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel3154, p_out);
    panda$core$String* $tmp3237 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta3236 = $tmp3237;
    panda$core$String* $tmp3238 = panda$core$String$convert$R$panda$core$String(numberType2923);
    panda$core$String* $tmp3240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3238, &$s3239);
    panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3240, backwardDelta3236);
    panda$core$String* $tmp3243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, &$s3242);
    panda$core$String* $tmp3244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3243, index2925);
    panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3244, &$s3245);
    panda$core$String* $tmp3247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3246, end2957);
    panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3247, &$s3248);
    (($fn3250) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3249);
    panda$core$String* $tmp3252 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel3251 = $tmp3252;
    panda$core$String* $tmp3254 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel3253 = $tmp3254;
    panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3255, inclusive2996);
    panda$core$String* $tmp3258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3256, &$s3257);
    panda$core$String* $tmp3259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3258, backwardInclusiveLabel3251);
    panda$core$String* $tmp3261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3259, &$s3260);
    panda$core$String* $tmp3262 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel3253);
    panda$core$String* $tmp3264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3262, &$s3263);
    panda$core$String* $tmp3265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3261, $tmp3264);
    (($fn3266) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3265);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel3251, p_out);
    panda$core$String* $tmp3268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3267, unsigned3019);
    panda$core$String* $tmp3270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3268, &$s3269);
    panda$core$String* $tmp3271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3270, backwardDelta3236);
    panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3271, &$s3272);
    panda$core$String* $tmp3274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3273, step2969);
    panda$core$String* $tmp3276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3274, &$s3275);
    panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3276, loopInc3150);
    panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3277, &$s3278);
    panda$core$String* $tmp3281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3280, loopEnd3010);
    panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3281, &$s3282);
    panda$core$String* $tmp3284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3279, $tmp3283);
    (($fn3285) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3284);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel3253, p_out);
    panda$core$String* $tmp3287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3286, unsigned3019);
    panda$core$String* $tmp3289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3287, &$s3288);
    panda$core$String* $tmp3290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3289, backwardDelta3236);
    panda$core$String* $tmp3292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3290, &$s3291);
    panda$core$String* $tmp3293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3292, step2969);
    panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3293, &$s3294);
    panda$core$String* $tmp3296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3295, loopInc3150);
    panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3296, &$s3297);
    panda$core$String* $tmp3300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3299, loopEnd3010);
    panda$core$String* $tmp3302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3300, &$s3301);
    panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3298, $tmp3302);
    (($fn3304) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3303);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc3150, p_out);
    panda$core$String* $tmp3306 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3305 = $tmp3306;
    panda$core$String* $tmp3307 = panda$core$String$convert$R$panda$core$String(index2925);
    panda$core$String* $tmp3309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3307, &$s3308);
    panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3309, step2969);
    panda$core$String* $tmp3312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3310, &$s3311);
    (($fn3313) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3312);
    panda$core$String* $tmp3315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3314, loopStart3006);
    panda$core$String* $tmp3317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3315, &$s3316);
    (($fn3318) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3317);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3010, p_out);
    panda$core$Object* $tmp3319 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardInclusiveLabel3251));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix3020));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveLabel3184));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inclusive2996));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned3019));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardLabel3154));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryExclusiveTest3134));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2931));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopBody3008));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardLabel3152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopTest3012));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryExclusive3106));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryInclusive3060));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardExclusiveLabel3253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2893));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardInclusiveLabel3182));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) end2957));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepCl2971));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inc3305));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2969));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3006));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntry3017));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexValuePtr2943));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopInc3150));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepType2897));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3010));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepField2979));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2903));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llt2901));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardDelta3236));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveTest3216));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) numberType2923));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntry3015));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2925));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryExclusive3062));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) direction3036));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field2917));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$1576_92926));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardDelta3167));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2909));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryInclusive3104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) range2891));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Type* $tmp3321 = (($fn3320) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3322 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit($tmp3321);
    if ($tmp3322.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_label, p_target, p_list, p_statements, p_out);
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp3324 = (($fn3323) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3325 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit($tmp3324);
    if ($tmp3325.value) {
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
    panda$core$String* loopStart3330;
    panda$core$String* loopEnd3332;
    org$pandalanguage$pandac$Type* $tmp3327 = (($fn3326) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3328 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3329 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3327, $tmp3328);
    PANDA_ASSERT($tmp3329.value);
    panda$core$String* $tmp3331 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3330 = $tmp3331;
    panda$core$String* $tmp3333 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3332 = $tmp3333;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3334 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3334, p_label, loopEnd3332, loopStart3330);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3334));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3330, p_out);
    panda$core$String* $tmp3336 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3335, $tmp3336);
    panda$core$String* $tmp3339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, &$s3338);
    panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3339, loopEnd3332);
    panda$core$String* $tmp3342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3340, &$s3341);
    (($fn3343) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3342);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3344, loopStart3330);
    panda$core$String* $tmp3347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3345, &$s3346);
    (($fn3348) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3347);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3332, p_out);
    panda$core$Object* $tmp3349 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3332));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3330));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3354;
    panda$core$String* loopEnd3356;
    org$pandalanguage$pandac$Type* $tmp3351 = (($fn3350) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3352 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3353 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3351, $tmp3352);
    PANDA_ASSERT($tmp3353.value);
    panda$core$String* $tmp3355 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3354 = $tmp3355;
    panda$core$String* $tmp3357 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3356 = $tmp3357;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3358 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3358, p_label, loopEnd3356, loopStart3354);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3358));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3354, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3360 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3359, $tmp3360);
    panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3361, &$s3362);
    panda$core$String* $tmp3364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3363, loopStart3354);
    panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3364, &$s3365);
    (($fn3367) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3366);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3356, p_out);
    panda$core$Object* $tmp3368 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3356));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3354));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3369;
    panda$core$String* loopEnd3371;
    panda$core$String* $tmp3370 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3369 = $tmp3370;
    panda$core$String* $tmp3372 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3371 = $tmp3372;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3373 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3373, p_label, loopEnd3371, loopStart3369);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3373));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3369, p_out);
    (($fn3375) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3374);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    (($fn3377) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3376);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3371, p_out);
    panda$core$Object* $tmp3378 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3369));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1778_93379;
    org$pandalanguage$pandac$Variable* v3381;
    {
        $match$1778_93379 = p_target;
        panda$core$Bit $tmp3380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1778_93379->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp3380.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3382 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1778_93379->$data + 16));
            v3381 = *$tmp3382;
            panda$core$String* $tmp3383 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3381->type);
            panda$core$String* $tmp3384 = panda$core$String$convert$R$panda$core$String($tmp3383);
            panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3384, &$s3385);
            panda$core$String* $tmp3387 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3381);
            panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3386, $tmp3387);
            panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, &$s3389);
            (($fn3391) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3390);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3392 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3381);
                panda$core$String* $tmp3393 = panda$core$String$convert$R$panda$core$String($tmp3392);
                panda$core$String* $tmp3395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3393, &$s3394);
                panda$core$String* $tmp3396 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3395, $tmp3396);
                panda$core$String* $tmp3399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3397, &$s3398);
                (($fn3400) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3399);
            }
            }
            else {
            {
                panda$core$String* $tmp3402 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3381);
                panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3401, $tmp3402);
                panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3403, &$s3404);
                panda$core$String* $tmp3406 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3381);
                panda$core$String* $tmp3407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3405, $tmp3406);
                panda$core$String* $tmp3409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3407, &$s3408);
                (($fn3410) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3409);
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
    panda$collections$Iterator* Iter$1793$93411;
    org$pandalanguage$pandac$IRNode* decl3423;
    org$pandalanguage$pandac$IRNode* $match$1794_133428;
    org$pandalanguage$pandac$IRNode* target3430;
    org$pandalanguage$pandac$IRNode* value3432;
    {
        ITable* $tmp3412 = ((panda$collections$Iterable*) p_decls)->$class->itable;
        while ($tmp3412->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3412 = $tmp3412->next;
        }
        $fn3414 $tmp3413 = $tmp3412->methods[0];
        panda$collections$Iterator* $tmp3415 = $tmp3413(((panda$collections$Iterable*) p_decls));
        Iter$1793$93411 = $tmp3415;
        $l3416:;
        ITable* $tmp3418 = Iter$1793$93411->$class->itable;
        while ($tmp3418->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3418 = $tmp3418->next;
        }
        $fn3420 $tmp3419 = $tmp3418->methods[0];
        panda$core$Bit $tmp3421 = $tmp3419(Iter$1793$93411);
        panda$core$Bit $tmp3422 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3421);
        if (!$tmp3422.value) goto $l3417;
        {
            ITable* $tmp3424 = Iter$1793$93411->$class->itable;
            while ($tmp3424->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3424 = $tmp3424->next;
            }
            $fn3426 $tmp3425 = $tmp3424->methods[1];
            panda$core$Object* $tmp3427 = $tmp3425(Iter$1793$93411);
            decl3423 = ((org$pandalanguage$pandac$IRNode*) $tmp3427);
            {
                $match$1794_133428 = decl3423;
                panda$core$Bit $tmp3429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_133428->$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp3429.value) {
                {
                    org$pandalanguage$pandac$IRNode** $tmp3431 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1794_133428->$data + 0));
                    target3430 = *$tmp3431;
                    org$pandalanguage$pandac$IRNode** $tmp3433 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1794_133428->$data + 8));
                    value3432 = *$tmp3433;
                    org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, target3430, value3432, p_out);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3423));
        }
        goto $l3416;
        $l3417:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1793$93411));
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1804_93434;
    org$pandalanguage$pandac$Variable* v3439;
    org$pandalanguage$pandac$IRNode* base3443;
    org$pandalanguage$pandac$FieldDecl* field3445;
    panda$core$String* baseRef3447;
    panda$core$String* tmp753449;
    org$pandalanguage$pandac$IRNode* value3457;
    panda$core$Int64 id3459;
    panda$core$String* result3461;
    panda$core$String* tmp763464;
    org$pandalanguage$pandac$IRNode* value3466;
    org$pandalanguage$pandac$ChoiceEntry* ce3468;
    panda$core$Int64 field3470;
    org$pandalanguage$pandac$FieldDecl* data3472;
    org$pandalanguage$pandac$IRNode* fieldRef3476;
    panda$core$String* base3480;
    panda$core$Int64 size3482;
    panda$core$Int64 offset3484;
    panda$core$String* result3486;
    panda$core$String* tmp773513;
    {
        $match$1804_93434 = p_lvalue;
        panda$core$Bit $tmp3435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1804_93434->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp3435.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3436 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3437 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3436, p_out);
            return $tmp3437;
        }
        }
        else {
        panda$core$Bit $tmp3438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1804_93434->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp3438.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3440 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1804_93434->$data + 16));
            v3439 = *$tmp3440;
            panda$core$String* $tmp3441 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3439);
            return $tmp3441;
        }
        }
        else {
        panda$core$Bit $tmp3442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1804_93434->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp3442.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3444 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1804_93434->$data + 24));
            base3443 = *$tmp3444;
            org$pandalanguage$pandac$FieldDecl** $tmp3446 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1804_93434->$data + 32));
            field3445 = *$tmp3446;
            panda$core$String* $tmp3448 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3443, p_out);
            baseRef3447 = $tmp3448;
            {
                panda$core$String* $tmp3450 = panda$core$String$convert$R$panda$core$String(baseRef3447);
                panda$core$String* $tmp3452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3450, &$s3451);
                panda$core$String* $tmp3453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3452, ((org$pandalanguage$pandac$Symbol*) field3445)->name);
                panda$core$String* $tmp3455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3453, &$s3454);
                tmp753449 = $tmp3455;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef3447));
                return tmp753449;
            }
        }
        }
        else {
        panda$core$Bit $tmp3456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1804_93434->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3456.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3458 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1804_93434->$data + 0));
            value3457 = *$tmp3458;
            panda$core$Int64* $tmp3460 = ((panda$core$Int64*) ((char*) $match$1804_93434->$data + 8));
            id3459 = *$tmp3460;
            panda$core$String* $tmp3462 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value3457, p_out);
            result3461 = $tmp3462;
            panda$core$Int64$wrapper* $tmp3463;
            $tmp3463 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3463->value = id3459;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp3463), ((panda$core$Object*) result3461));
            {
                tmp763464 = result3461;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3461));
                return tmp763464;
            }
        }
        }
        else {
        panda$core$Bit $tmp3465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1804_93434->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp3465.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3467 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1804_93434->$data + 16));
            value3466 = *$tmp3467;
            org$pandalanguage$pandac$ChoiceEntry** $tmp3469 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$1804_93434->$data + 24));
            ce3468 = *$tmp3469;
            panda$core$Int64* $tmp3471 = ((panda$core$Int64*) ((char*) $match$1804_93434->$data + 32));
            field3470 = *$tmp3471;
            panda$core$Object* $tmp3473 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce3468->owner->fields, ((panda$core$Int64) { 1 }));
            data3472 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3473);
            panda$core$Bit $tmp3475 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) data3472)->name, &$s3474);
            PANDA_ASSERT($tmp3475.value);
            org$pandalanguage$pandac$IRNode* $tmp3477 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
            org$pandalanguage$pandac$Position $tmp3479 = (($fn3478) p_lvalue->$class->vtable[3])(p_lvalue);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp3477, ((panda$core$Int64) { 15 }), $tmp3479, data3472->type, value3466, data3472);
            fieldRef3476 = $tmp3477;
            panda$core$String* $tmp3481 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, fieldRef3476, p_out);
            base3480 = $tmp3481;
            panda$core$Int64 $tmp3483 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3468->owner);
            size3482 = $tmp3483;
            panda$core$Int64 $tmp3485 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3468, field3470);
            offset3484 = $tmp3485;
            panda$core$String* $tmp3487 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result3486 = $tmp3487;
            org$pandalanguage$pandac$Type* $tmp3489 = (($fn3488) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3490 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3489);
            panda$core$String* $tmp3491 = panda$core$String$convert$R$panda$core$String($tmp3490);
            panda$core$String* $tmp3493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3491, &$s3492);
            panda$core$String* $tmp3494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3493, result3486);
            panda$core$String* $tmp3496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3494, &$s3495);
            org$pandalanguage$pandac$Type* $tmp3498 = (($fn3497) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3499 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3498);
            panda$core$String* $tmp3500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3496, $tmp3499);
            panda$core$String* $tmp3502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3500, &$s3501);
            panda$core$String* $tmp3504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3503, base3480);
            panda$core$String* $tmp3506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3504, &$s3505);
            panda$core$Int64$wrapper* $tmp3507;
            $tmp3507 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3507->value = offset3484;
            panda$core$String* $tmp3508 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3506, ((panda$core$Object*) $tmp3507));
            panda$core$String* $tmp3510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3508, &$s3509);
            panda$core$String* $tmp3511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3502, $tmp3510);
            (($fn3512) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3511);
            {
                panda$core$String* $tmp3515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3514, result3486);
                panda$core$String* $tmp3517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3515, &$s3516);
                tmp773513 = $tmp3517;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base3480));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fieldRef3476));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3486));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data3472));
                }
                return tmp773513;
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
    panda$core$String* $tmp3518 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$String* $tmp3519 = panda$core$String$convert$R$panda$core$String($tmp3518);
    panda$core$String* $tmp3521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, &$s3520);
    panda$core$String* $tmp3522 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$String* $tmp3523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3521, $tmp3522);
    panda$core$String* $tmp3525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3523, &$s3524);
    (($fn3526) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3525);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit) { p_value != NULL }).value) {
    {
        panda$core$String* $tmp3528 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
        panda$core$String* $tmp3529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3527, $tmp3528);
        panda$core$String* $tmp3531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3529, &$s3530);
        (($fn3532) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3531);
    }
    }
    else {
    {
        (($fn3534) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3533);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3538;
    panda$core$Int64 $tmp3535 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3536 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3535, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3536.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3537 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3537);
    }
    }
    panda$core$Int64 $tmp3539 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3538, ((panda$core$Int64) { 0 }), $tmp3539, ((panda$core$Bit) { false }));
    int64_t $tmp3541 = $tmp3538.min.value;
    panda$core$Int64 i3540 = { $tmp3541 };
    int64_t $tmp3543 = $tmp3538.max.value;
    bool $tmp3544 = $tmp3538.inclusive.value;
    if ($tmp3544) goto $l3551; else goto $l3552;
    $l3551:;
    if ($tmp3541 <= $tmp3543) goto $l3545; else goto $l3547;
    $l3552:;
    if ($tmp3541 < $tmp3543) goto $l3545; else goto $l3547;
    $l3545:;
    {
        panda$core$Object* $tmp3553 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3540);
        panda$core$Bit $tmp3557;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3553)->loopLabel != NULL }).value) goto $l3554; else goto $l3555;
        $l3554:;
        panda$core$Bit $tmp3558 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3553)->loopLabel, p_name);
        $tmp3557 = $tmp3558;
        goto $l3556;
        $l3555:;
        $tmp3557 = ((panda$core$Bit) { false });
        goto $l3556;
        $l3556:;
        if ($tmp3557.value) {
        {
            panda$core$Object* $tmp3559 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3540);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3559);
        }
        }
    }
    $l3548:;
    int64_t $tmp3561 = $tmp3543 - i3540.value;
    if ($tmp3544) goto $l3562; else goto $l3563;
    $l3562:;
    if ((uint64_t) $tmp3561 >= 1) goto $l3560; else goto $l3547;
    $l3563:;
    if ((uint64_t) $tmp3561 > 1) goto $l3560; else goto $l3547;
    $l3560:;
    i3540.value += 1;
    goto $l3545;
    $l3547:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3566;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3567 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    desc3566 = $tmp3567;
    panda$core$String* $tmp3569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3568, desc3566->breakLabel);
    panda$core$String* $tmp3571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3569, &$s3570);
    (($fn3572) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3571);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc3566));
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3573;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3574 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    desc3573 = $tmp3574;
    panda$core$String* $tmp3576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3575, desc3573->continueLabel);
    panda$core$String* $tmp3578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3576, &$s3577);
    (($fn3579) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3578);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc3573));
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_message, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3581 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3580, $tmp3581);
    panda$core$String* $tmp3584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3582, &$s3583);
    (($fn3585) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3584);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$collections$ImmutableArray* p_whens, panda$collections$ImmutableArray* p_other, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* Iter$1877$93593;
    org$pandalanguage$pandac$IRNode* w3605;
    org$pandalanguage$pandac$IRNode* $match$1878_133610;
    panda$collections$ImmutableArray* tests3612;
    panda$collections$ImmutableArray* statements3614;
    panda$collections$Iterator* Iter$1880$213616;
    org$pandalanguage$pandac$IRNode* test3628;
    panda$core$String* $tmp3587 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    panda$core$String* $tmp3588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3586, $tmp3587);
    panda$core$String* $tmp3590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3588, &$s3589);
    (($fn3591) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3590);
    panda$core$Int64 $tmp3592 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3592;
    {
        ITable* $tmp3594 = ((panda$collections$Iterable*) p_whens)->$class->itable;
        while ($tmp3594->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3594 = $tmp3594->next;
        }
        $fn3596 $tmp3595 = $tmp3594->methods[0];
        panda$collections$Iterator* $tmp3597 = $tmp3595(((panda$collections$Iterable*) p_whens));
        Iter$1877$93593 = $tmp3597;
        $l3598:;
        ITable* $tmp3600 = Iter$1877$93593->$class->itable;
        while ($tmp3600->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3600 = $tmp3600->next;
        }
        $fn3602 $tmp3601 = $tmp3600->methods[0];
        panda$core$Bit $tmp3603 = $tmp3601(Iter$1877$93593);
        panda$core$Bit $tmp3604 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3603);
        if (!$tmp3604.value) goto $l3599;
        {
            ITable* $tmp3606 = Iter$1877$93593->$class->itable;
            while ($tmp3606->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3606 = $tmp3606->next;
            }
            $fn3608 $tmp3607 = $tmp3606->methods[1];
            panda$core$Object* $tmp3609 = $tmp3607(Iter$1877$93593);
            w3605 = ((org$pandalanguage$pandac$IRNode*) $tmp3609);
            {
                $match$1878_133610 = w3605;
                panda$core$Bit $tmp3611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133610->$rawValue, ((panda$core$Int64) { 43 }));
                if ($tmp3611.value) {
                {
                    panda$collections$ImmutableArray** $tmp3613 = ((panda$collections$ImmutableArray**) ((char*) $match$1878_133610->$data + 16));
                    tests3612 = *$tmp3613;
                    panda$collections$ImmutableArray** $tmp3615 = ((panda$collections$ImmutableArray**) ((char*) $match$1878_133610->$data + 24));
                    statements3614 = *$tmp3615;
                    {
                        ITable* $tmp3617 = ((panda$collections$Iterable*) tests3612)->$class->itable;
                        while ($tmp3617->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3617 = $tmp3617->next;
                        }
                        $fn3619 $tmp3618 = $tmp3617->methods[0];
                        panda$collections$Iterator* $tmp3620 = $tmp3618(((panda$collections$Iterable*) tests3612));
                        Iter$1880$213616 = $tmp3620;
                        $l3621:;
                        ITable* $tmp3623 = Iter$1880$213616->$class->itable;
                        while ($tmp3623->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3623 = $tmp3623->next;
                        }
                        $fn3625 $tmp3624 = $tmp3623->methods[0];
                        panda$core$Bit $tmp3626 = $tmp3624(Iter$1880$213616);
                        panda$core$Bit $tmp3627 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3626);
                        if (!$tmp3627.value) goto $l3622;
                        {
                            ITable* $tmp3629 = Iter$1880$213616->$class->itable;
                            while ($tmp3629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3629 = $tmp3629->next;
                            }
                            $fn3631 $tmp3630 = $tmp3629->methods[1];
                            panda$core$Object* $tmp3632 = $tmp3630(Iter$1880$213616);
                            test3628 = ((org$pandalanguage$pandac$IRNode*) $tmp3632);
                            panda$core$UInt64 $tmp3634 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, test3628);
                            panda$core$UInt64$wrapper* $tmp3635;
                            $tmp3635 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
                            $tmp3635->value = $tmp3634;
                            panda$core$String* $tmp3636 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3633, ((panda$core$Object*) $tmp3635));
                            panda$core$String* $tmp3638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3636, &$s3637);
                            (($fn3639) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3638);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test3628));
                        }
                        goto $l3621;
                        $l3622:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1880$213616));
                    }
                    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3614, p_out);
                    (($fn3641) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3640);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w3605));
        }
        goto $l3598;
        $l3599:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1877$93593));
    }
    if (((panda$core$Bit) { p_other != NULL }).value) {
    {
        (($fn3643) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3642);
        org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_other, p_out);
    }
    }
    panda$core$Int64 $tmp3644 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3644;
    (($fn3646) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3645);
}
void org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_clear, panda$io$IndentedOutputStream* p_out) {
}
void org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { true }), p_out);
}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1914_93647;
    org$pandalanguage$pandac$IRNode* left3649;
    org$pandalanguage$pandac$parser$Token$Kind op3651;
    org$pandalanguage$pandac$IRNode* right3653;
    panda$collections$ImmutableArray* statements3656;
    org$pandalanguage$pandac$Type* target3659;
    org$pandalanguage$pandac$MethodRef* mref3661;
    panda$collections$ImmutableArray* args3663;
    org$pandalanguage$pandac$IRNode* base3666;
    org$pandalanguage$pandac$IRNode* stmt3668;
    org$pandalanguage$pandac$IRNode* test3672;
    panda$collections$ImmutableArray* ifTrue3674;
    org$pandalanguage$pandac$IRNode* ifFalse3676;
    panda$core$String* label3679;
    org$pandalanguage$pandac$IRNode* target3681;
    org$pandalanguage$pandac$IRNode* list3683;
    panda$collections$ImmutableArray* statements3685;
    panda$core$String* label3688;
    org$pandalanguage$pandac$IRNode* test3690;
    panda$collections$ImmutableArray* statements3692;
    panda$core$String* label3695;
    panda$collections$ImmutableArray* statements3697;
    org$pandalanguage$pandac$IRNode* test3699;
    panda$core$String* label3702;
    panda$collections$ImmutableArray* statements3704;
    org$pandalanguage$pandac$Variable$Kind kind3707;
    panda$collections$ImmutableArray* decls3709;
    org$pandalanguage$pandac$IRNode* value3712;
    panda$core$String* label3715;
    panda$core$String* label3718;
    org$pandalanguage$pandac$IRNode* test3721;
    org$pandalanguage$pandac$IRNode* msg3723;
    org$pandalanguage$pandac$IRNode* value3726;
    panda$collections$ImmutableArray* whens3728;
    panda$collections$ImmutableArray* other3730;
    org$pandalanguage$pandac$IRNode* base3733;
    panda$core$Int64 id3735;
    {
        $match$1914_93647 = p_stmt;
        panda$core$Bit $tmp3648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp3648.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3650 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93647->$data + 24));
            left3649 = *$tmp3650;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3652 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1914_93647->$data + 32));
            op3651 = *$tmp3652;
            org$pandalanguage$pandac$IRNode** $tmp3654 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93647->$data + 40));
            right3653 = *$tmp3654;
            org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, left3649, right3653, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp3655.value) {
        {
            panda$collections$ImmutableArray** $tmp3657 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93647->$data + 16));
            statements3656 = *$tmp3657;
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3656, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp3658.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3660 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1914_93647->$data + 16));
            target3659 = *$tmp3660;
            org$pandalanguage$pandac$MethodRef** $tmp3662 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1914_93647->$data + 24));
            mref3661 = *$tmp3662;
            panda$collections$ImmutableArray** $tmp3664 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93647->$data + 32));
            args3663 = *$tmp3664;
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, target3659, mref3661, args3663, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp3665.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3667 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93647->$data + 0));
            base3666 = *$tmp3667;
            org$pandalanguage$pandac$IRNode** $tmp3669 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93647->$data + 8));
            stmt3668 = *$tmp3669;
            panda$core$String* $tmp3670 = org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3666, stmt3668, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp3671.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3673 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93647->$data + 16));
            test3672 = *$tmp3673;
            panda$collections$ImmutableArray** $tmp3675 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93647->$data + 24));
            ifTrue3674 = *$tmp3675;
            org$pandalanguage$pandac$IRNode** $tmp3677 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93647->$data + 32));
            ifFalse3676 = *$tmp3677;
            org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3672, ifTrue3674, ifFalse3676, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp3678.value) {
        {
            panda$core$String** $tmp3680 = ((panda$core$String**) ((char*) $match$1914_93647->$data + 16));
            label3679 = *$tmp3680;
            org$pandalanguage$pandac$IRNode** $tmp3682 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93647->$data + 24));
            target3681 = *$tmp3682;
            org$pandalanguage$pandac$IRNode** $tmp3684 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93647->$data + 32));
            list3683 = *$tmp3684;
            panda$collections$ImmutableArray** $tmp3686 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93647->$data + 40));
            statements3685 = *$tmp3686;
            org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3679, target3681, list3683, statements3685, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp3687.value) {
        {
            panda$core$String** $tmp3689 = ((panda$core$String**) ((char*) $match$1914_93647->$data + 16));
            label3688 = *$tmp3689;
            org$pandalanguage$pandac$IRNode** $tmp3691 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93647->$data + 24));
            test3690 = *$tmp3691;
            panda$collections$ImmutableArray** $tmp3693 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93647->$data + 32));
            statements3692 = *$tmp3693;
            org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3688, test3690, statements3692, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp3694.value) {
        {
            panda$core$String** $tmp3696 = ((panda$core$String**) ((char*) $match$1914_93647->$data + 16));
            label3695 = *$tmp3696;
            panda$collections$ImmutableArray** $tmp3698 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93647->$data + 24));
            statements3697 = *$tmp3698;
            org$pandalanguage$pandac$IRNode** $tmp3700 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93647->$data + 32));
            test3699 = *$tmp3700;
            org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, label3695, statements3697, test3699, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp3701.value) {
        {
            panda$core$String** $tmp3703 = ((panda$core$String**) ((char*) $match$1914_93647->$data + 16));
            label3702 = *$tmp3703;
            panda$collections$ImmutableArray** $tmp3705 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93647->$data + 24));
            statements3704 = *$tmp3705;
            org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3702, statements3704, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp3706.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp3708 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$1914_93647->$data + 16));
            kind3707 = *$tmp3708;
            panda$collections$ImmutableArray** $tmp3710 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93647->$data + 24));
            decls3709 = *$tmp3710;
            org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, kind3707, decls3709, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp3711.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3713 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93647->$data + 16));
            value3712 = *$tmp3713;
            org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, value3712, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp3714.value) {
        {
            panda$core$String** $tmp3716 = ((panda$core$String**) ((char*) $match$1914_93647->$data + 16));
            label3715 = *$tmp3716;
            org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3715, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp3717.value) {
        {
            panda$core$String** $tmp3719 = ((panda$core$String**) ((char*) $match$1914_93647->$data + 16));
            label3718 = *$tmp3719;
            org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3718, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp3720.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3722 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93647->$data + 16));
            test3721 = *$tmp3722;
            org$pandalanguage$pandac$IRNode** $tmp3724 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93647->$data + 24));
            msg3723 = *$tmp3724;
            org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3721, msg3723, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp3725.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3727 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93647->$data + 16));
            value3726 = *$tmp3727;
            panda$collections$ImmutableArray** $tmp3729 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93647->$data + 24));
            whens3728 = *$tmp3729;
            panda$collections$ImmutableArray** $tmp3731 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93647->$data + 32));
            other3730 = *$tmp3731;
            org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(self, value3726, whens3728, other3730, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93647->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3732.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3734 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93647->$data + 0));
            base3733 = *$tmp3734;
            panda$core$Int64* $tmp3736 = ((panda$core$Int64*) ((char*) $match$1914_93647->$data + 8));
            id3735 = *$tmp3736;
            panda$core$Int64$wrapper* $tmp3737;
            $tmp3737 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3737->value = id3735;
            panda$core$String* $tmp3738 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3733, p_out);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp3737), ((panda$core$Object*) $tmp3738));
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
    panda$core$String* result3739;
    panda$core$String* tmp783749;
    panda$core$String* tmp793752;
    org$pandalanguage$pandac$Type* $tmp3740 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3741 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3740);
    result3739 = $tmp3741;
    panda$core$Bit $tmp3743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp3742 = $tmp3743.value;
    if (!$tmp3742) goto $l3744;
    panda$core$Bit $tmp3746 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3739, &$s3745);
    panda$core$Bit $tmp3747 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3746);
    $tmp3742 = $tmp3747.value;
    $l3744:;
    panda$core$Bit $tmp3748 = { $tmp3742 };
    if ($tmp3748.value) {
    {
        {
            panda$core$String* $tmp3751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3739, &$s3750);
            tmp783749 = $tmp3751;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3739));
            return tmp783749;
        }
    }
    }
    {
        tmp793752 = result3739;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3739));
        return tmp793752;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    panda$core$String* separator3764;
    panda$collections$Iterator* Iter$1978$93774;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3786;
    panda$io$MemoryOutputStream* bodyBuffer3807;
    panda$io$IndentedOutputStream* indentedBody3809;
    panda$collections$Iterator* Iter$1987$133812;
    org$pandalanguage$pandac$FieldDecl* f3825;
    panda$collections$Iterator* Iter$1996$93841;
    org$pandalanguage$pandac$IRNode* s3853;
    panda$core$Object* $tmp3753 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3753)) == ((panda$core$Object*) p_m->owner) }).value);
    {
        self->currentMethod = p_m;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentMethod));
    }
    {
        self->currentBlock = &$s3754;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentBlock));
    }
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp3755 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3756 = panda$core$String$convert$R$panda$core$String($tmp3755);
    panda$core$String* $tmp3758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3756, &$s3757);
    panda$core$String* $tmp3759 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3758, $tmp3759);
    panda$core$String* $tmp3762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3760, &$s3761);
    (($fn3763) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3762);
    separator3764 = &$s3765;
    panda$core$Bit $tmp3766 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3767 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3766);
    if ($tmp3767.value) {
    {
        panda$core$String* $tmp3768 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3769 = panda$core$String$convert$R$panda$core$String($tmp3768);
        panda$core$String* $tmp3771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3769, &$s3770);
        (($fn3772) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3771);
        {
            separator3764 = &$s3773;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3764));
        }
    }
    }
    {
        ITable* $tmp3775 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3775->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3775 = $tmp3775->next;
        }
        $fn3777 $tmp3776 = $tmp3775->methods[0];
        panda$collections$Iterator* $tmp3778 = $tmp3776(((panda$collections$Iterable*) p_m->parameters));
        Iter$1978$93774 = $tmp3778;
        $l3779:;
        ITable* $tmp3781 = Iter$1978$93774->$class->itable;
        while ($tmp3781->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3781 = $tmp3781->next;
        }
        $fn3783 $tmp3782 = $tmp3781->methods[0];
        panda$core$Bit $tmp3784 = $tmp3782(Iter$1978$93774);
        panda$core$Bit $tmp3785 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3784);
        if (!$tmp3785.value) goto $l3780;
        {
            ITable* $tmp3787 = Iter$1978$93774->$class->itable;
            while ($tmp3787->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3787 = $tmp3787->next;
            }
            $fn3789 $tmp3788 = $tmp3787->methods[1];
            panda$core$Object* $tmp3790 = $tmp3788(Iter$1978$93774);
            p3786 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3790);
            panda$core$String* $tmp3791 = panda$core$String$convert$R$panda$core$String(separator3764);
            panda$core$String* $tmp3793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3791, &$s3792);
            panda$core$String* $tmp3794 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3786->type);
            panda$core$String* $tmp3795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3793, $tmp3794);
            panda$core$String* $tmp3797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3795, &$s3796);
            panda$core$String* $tmp3798 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3786->name);
            panda$core$String* $tmp3799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3797, $tmp3798);
            panda$core$String* $tmp3801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3799, &$s3800);
            (($fn3802) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3801);
            {
                separator3764 = &$s3803;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3764));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p3786));
        }
        goto $l3779;
        $l3780:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1978$93774));
    }
    (($fn3805) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3804);
    panda$core$Int64 $tmp3806 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3806;
    panda$io$MemoryOutputStream* $tmp3808 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp3808);
    bodyBuffer3807 = $tmp3808;
    panda$io$IndentedOutputStream* $tmp3810 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3810, ((panda$io$OutputStream*) bodyBuffer3807));
    indentedBody3809 = $tmp3810;
    panda$core$Bit $tmp3811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp3811.value) {
    {
        {
            panda$collections$ListView* $tmp3813 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, p_m->owner);
            ITable* $tmp3814 = ((panda$collections$Iterable*) $tmp3813)->$class->itable;
            while ($tmp3814->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3814 = $tmp3814->next;
            }
            $fn3816 $tmp3815 = $tmp3814->methods[0];
            panda$collections$Iterator* $tmp3817 = $tmp3815(((panda$collections$Iterable*) $tmp3813));
            Iter$1987$133812 = $tmp3817;
            $l3818:;
            ITable* $tmp3820 = Iter$1987$133812->$class->itable;
            while ($tmp3820->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3820 = $tmp3820->next;
            }
            $fn3822 $tmp3821 = $tmp3820->methods[0];
            panda$core$Bit $tmp3823 = $tmp3821(Iter$1987$133812);
            panda$core$Bit $tmp3824 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3823);
            if (!$tmp3824.value) goto $l3819;
            {
                ITable* $tmp3826 = Iter$1987$133812->$class->itable;
                while ($tmp3826->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3826 = $tmp3826->next;
                }
                $fn3828 $tmp3827 = $tmp3826->methods[1];
                panda$core$Object* $tmp3829 = $tmp3827(Iter$1987$133812);
                f3825 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3829);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f3825);
                panda$core$Bit $tmp3831 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->compiler, f3825->type);
                bool $tmp3830 = $tmp3831.value;
                if (!$tmp3830) goto $l3832;
                panda$core$Bit $tmp3834 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) f3825)->name, &$s3833);
                $tmp3830 = $tmp3834.value;
                $l3832:;
                panda$core$Bit $tmp3835 = { $tmp3830 };
                if ($tmp3835.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3836 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                    org$pandalanguage$pandac$IRNode* $tmp3837 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                    org$pandalanguage$pandac$Type* $tmp3838 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3837, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp3838);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp3836, ((panda$core$Int64) { 15 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f3825->type, $tmp3837, f3825);
                    org$pandalanguage$pandac$IRNode* $tmp3839 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                    org$pandalanguage$pandac$Type* $tmp3840 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(f3825->type);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3839, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp3840);
                    org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, $tmp3836, $tmp3839, indentedBody3809);
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f3825));
            }
            goto $l3818;
            $l3819:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1987$133812));
        }
    }
    }
    {
        ITable* $tmp3842 = ((panda$collections$Iterable*) p_body)->$class->itable;
        while ($tmp3842->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3842 = $tmp3842->next;
        }
        $fn3844 $tmp3843 = $tmp3842->methods[0];
        panda$collections$Iterator* $tmp3845 = $tmp3843(((panda$collections$Iterable*) p_body));
        Iter$1996$93841 = $tmp3845;
        $l3846:;
        ITable* $tmp3848 = Iter$1996$93841->$class->itable;
        while ($tmp3848->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3848 = $tmp3848->next;
        }
        $fn3850 $tmp3849 = $tmp3848->methods[0];
        panda$core$Bit $tmp3851 = $tmp3849(Iter$1996$93841);
        panda$core$Bit $tmp3852 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3851);
        if (!$tmp3852.value) goto $l3847;
        {
            ITable* $tmp3854 = Iter$1996$93841->$class->itable;
            while ($tmp3854->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3854 = $tmp3854->next;
            }
            $fn3856 $tmp3855 = $tmp3854->methods[1];
            panda$core$Object* $tmp3857 = $tmp3855(Iter$1996$93841);
            s3853 = ((org$pandalanguage$pandac$IRNode*) $tmp3857);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3853, indentedBody3809);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3853));
        }
        goto $l3846;
        $l3847:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1996$93841));
    }
    panda$core$String* $tmp3858 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn3859) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3858);
    panda$core$String* $tmp3860 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer3807);
    (($fn3861) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3860);
    panda$core$Int64 $tmp3862 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3862;
    (($fn3864) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3863);
    {
        self->currentMethod = NULL;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentMethod));
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indentedBody3809));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3764));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bodyBuffer3807));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3865;
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
    panda$io$File* $tmp3867 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3866);
    path3865 = $tmp3867;
    panda$io$File* $tmp3868 = panda$io$File$parent$R$panda$io$File$Q(path3865);
    panda$io$File$createDirectories($tmp3868);
    {
        panda$io$IndentedOutputStream* $tmp3869 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$OutputStream* $tmp3870 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3865);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3869, $tmp3870);
        self->out = $tmp3869;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
    }
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp3871 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3872 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3872.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp3873 = org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path3865));
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    {
        self->currentClass = NULL;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentClass));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$String* $tmp3874 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn3875) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3874);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp3876 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn3877) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3876);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp3878 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn3879) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3878);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp3880 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn3881) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3880);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp3882 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn3883) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3882);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn3884) self->out->out->$class->vtable[1])(self->out->out);
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

