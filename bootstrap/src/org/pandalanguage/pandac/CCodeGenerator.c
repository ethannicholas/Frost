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
typedef org$pandalanguage$pandac$Type* (*$fn1074)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1087)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1097)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1100)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1112)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1118)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1131)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1141)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1144)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1156)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1202)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1207)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1220)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1246)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1248)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1264)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn1275)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1292)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1326)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1334)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1342)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1345)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1352)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1369)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1382)(panda$collections$CollectionView*);
typedef void (*$fn1404)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1555)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1575)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1632)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1637)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1667)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1674)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1685)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1689)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1695)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1701)(panda$collections$Iterator*);
typedef void (*$fn1709)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1712)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1745)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1751)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1773)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1780)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1786)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1794)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1807)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1953)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2004)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2032)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2072)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2077)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2083)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2089)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2097)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn2104)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2109)(panda$collections$CollectionView*);
typedef void (*$fn2120)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2135)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2140)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2159)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2164)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2215)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2217)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2230)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2239)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2250)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2258)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2263)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2271)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2276)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2401)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2406)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2412)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2418)(panda$collections$Iterator*);
typedef void (*$fn2422)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2442)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2449)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2472)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2483)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2541)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2546)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2579)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2589)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2594)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2598)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2604)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2610)(panda$collections$Iterator*);
typedef void (*$fn2612)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2613)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2616)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2623)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2625)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2627)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2629)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2630)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2633)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2637)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2645)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2661)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2668)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2689)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2703)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2715)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2725)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2769)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2783)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2797)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2814)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2830)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2845)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2862)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2868)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2873)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2875)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2878)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2882)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2890)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2894)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2910)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2917)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2938)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2952)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2964)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2972)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2979)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2991)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3001)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3043)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3055)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3071)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3085)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3099)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3115)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3129)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3145)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3162)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3177)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3193)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3211)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3246)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3262)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3281)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3300)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3309)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3314)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3316)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3319)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3322)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3339)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3344)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3346)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3363)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3371)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3373)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3387)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3396)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3406)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3410)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3416)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3422)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn3472)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3482)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3491)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3506)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3519)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3525)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3527)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3565)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3572)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3578)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3584)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3589)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3595)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3601)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3612)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3618)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3624)(panda$collections$Iterator*);
typedef void (*$fn3632)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3634)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3636)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3639)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3749)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3758)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3763)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3769)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3775)(panda$collections$Iterator*);
typedef void (*$fn3788)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3791)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3802)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3808)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3814)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3829)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3835)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3841)(panda$collections$Iterator*);
typedef void (*$fn3844)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3846)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3849)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3860)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3862)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3864)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3866)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3868)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3869)(panda$io$OutputStream*);

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
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s1201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20", 4, 137658487, NULL };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20", 4, 137372859, NULL };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s1327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s1329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s1332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s1344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 14, 9153752889249827899, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2a", 2, 14283, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d", 7, 157293860332681, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, 2191018519584705024, NULL };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s1523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s1538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x26", 2, 14279, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3f\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x4e\x55\x4c\x4c\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 17, 3278627383872437575, NULL };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 22, -5027409806946055905, NULL };
static panda$core$String $s1767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x29\x3b", 15, -9084967859609473468, NULL };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 21448182697504497, NULL };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 19, -1805496395169551456, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x29\x3b", 8, 14794490123150471, NULL };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -5089590097621792313, NULL };
static panda$core$String $s2067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 2848555729212071077, NULL };
static panda$core$String $s2091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s2094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s2113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x73\x65\x6c\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s2143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s2152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s2199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s2435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s2437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d\x20\x3d\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s2470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x46\x72\x65\x65\x28", 10, -5790438204225352665, NULL };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x69\x6e\x2e\x76\x61\x6c\x75\x65\x3b", 11, -3956212002962864875, NULL };
static panda$core$String $s2695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x61\x78\x2e\x76\x61\x6c\x75\x65\x3b", 11, -4041768404061004273, NULL };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2723 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s2812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 12, -550717230962542041, NULL };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s2856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20\x31\x3b", 12, -4476855678279854640, NULL };
static panda$core$String $s2869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s2930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x61\x72\x74\x2e\x76\x61\x6c\x75\x65\x3b", 13, 3588086193908855763, NULL };
static panda$core$String $s2944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2950 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x65\x6e\x64\x2e\x76\x61\x6c\x75\x65\x3b", 11, 5794120589201096528, NULL };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x65\x70\x2e\x76\x61\x6c\x75\x65\x3b", 12, -1565217378717073995, NULL };
static panda$core$String $s2994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s3019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s3024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s3027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s3036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s3038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3041 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x30\x3b", 5, 13904243334, NULL };
static panda$core$String $s3044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s3091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s3182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2d\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s3244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x2d", 5, 13904537533, NULL };
static panda$core$String $s3271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x2d", 4, 137665772, NULL };
static panda$core$String $s3290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s3334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7b", 14, 1197661341919403142, NULL };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x6d\x73\x65\x74\x28\x26", 8, 22623213602606430, NULL };
static panda$core$String $s3400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x30\x2c\x20\x73\x69\x7a\x65\x6f\x66\x28", 12, 4086987682289124441, NULL };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s3449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s3486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s3489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static panda$core$String $s3495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20", 3, 1462916, NULL };
static panda$core$String $s3497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x63\x68\x61\x72\x2a\x29\x20", 9, 1531222690101128410, NULL };
static panda$core$String $s3499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s3503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s3561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x41\x4e\x44\x41\x5f\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s3576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s3579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s3582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s3626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s3630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s3633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x3b", 6, 2103477946177, NULL };
static panda$core$String $s3635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6c\x74\x3a", 8, 21658216358330300, NULL };
static panda$core$String $s3638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s3743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s3759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s3786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s3848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

void org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$File* p_outDir) {
    self->compiler = NULL;
    self->currentClass = NULL;
    self->extraEffects = NULL;
    self->currentBlock = NULL;
    self->currentMethod = NULL;
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
    }
    {
        panda$io$IndentedOutputStream* $tmp25 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp26 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp26);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp25, ((panda$io$OutputStream*) $tmp26));
        self->out = $tmp25;
    }
    {
        org$pandalanguage$pandac$HCodeGenerator* $tmp27 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
        org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp27, p_outDir);
        self->hCodeGen = $tmp27;
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator67));
                separator67 = &$s87;
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
    }
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl126;
    panda$core$Int64 tmp2135;
    panda$core$Int64 result136;
    panda$collections$Iterator* f$Iter137;
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
        f$Iter137 = $tmp142;
        $l143:;
        ITable* $tmp145 = f$Iter137->$class->itable;
        while ($tmp145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp145 = $tmp145->next;
        }
        $fn147 $tmp146 = $tmp145->methods[0];
        panda$core$Bit $tmp148 = $tmp146(f$Iter137);
        panda$core$Bit $tmp149 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp148);
        if (!$tmp149.value) goto $l144;
        {
            ITable* $tmp151 = f$Iter137->$class->itable;
            while ($tmp151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp151 = $tmp151->next;
            }
            $fn153 $tmp152 = $tmp151->methods[1];
            panda$core$Object* $tmp154 = $tmp152(f$Iter137);
            f150 = ((org$pandalanguage$pandac$FieldDecl*) $tmp154);
            panda$core$Bit $tmp155 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f150->annotations);
            if ($tmp155.value) {
            {
                goto $l143;
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
        }
        goto $l143;
        $l144:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp142));
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
    panda$collections$Iterator* f$Iter184;
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
        f$Iter184 = $tmp189;
        $l190:;
        ITable* $tmp192 = f$Iter184->$class->itable;
        while ($tmp192->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp192 = $tmp192->next;
        }
        $fn194 $tmp193 = $tmp192->methods[0];
        panda$core$Bit $tmp195 = $tmp193(f$Iter184);
        panda$core$Bit $tmp196 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp195);
        if (!$tmp196.value) goto $l191;
        {
            ITable* $tmp198 = f$Iter184->$class->itable;
            while ($tmp198->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp198 = $tmp198->next;
            }
            $fn200 $tmp199 = $tmp198->methods[1];
            panda$core$Object* $tmp201 = $tmp199(f$Iter184);
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
        }
        goto $l190;
        $l191:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
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
    panda$collections$Iterator* intfType$Iter287;
    org$pandalanguage$pandac$Type* intfType299;
    org$pandalanguage$pandac$ClassDecl* intf304;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC306;
    panda$collections$ListView* methods308;
    panda$core$String* name310;
    panda$core$MutableString* result319;
    panda$core$String* separator348;
    panda$collections$Iterator* m$Iter350;
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
        intfType$Iter287 = $tmp291;
        $l292:;
        ITable* $tmp294 = intfType$Iter287->$class->itable;
        while ($tmp294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp294 = $tmp294->next;
        }
        $fn296 $tmp295 = $tmp294->methods[0];
        panda$core$Bit $tmp297 = $tmp295(intfType$Iter287);
        panda$core$Bit $tmp298 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp297);
        if (!$tmp298.value) goto $l293;
        {
            ITable* $tmp300 = intfType$Iter287->$class->itable;
            while ($tmp300->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp300 = $tmp300->next;
            }
            $fn302 $tmp301 = $tmp300->methods[1];
            panda$core$Object* $tmp303 = $tmp301(intfType$Iter287);
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
                m$Iter350 = $tmp354;
                $l355:;
                ITable* $tmp357 = m$Iter350->$class->itable;
                while ($tmp357->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp357 = $tmp357->next;
                }
                $fn359 $tmp358 = $tmp357->methods[0];
                panda$core$Bit $tmp360 = $tmp358(m$Iter350);
                panda$core$Bit $tmp361 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp360);
                if (!$tmp361.value) goto $l356;
                {
                    ITable* $tmp363 = m$Iter350->$class->itable;
                    while ($tmp363->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp363 = $tmp363->next;
                    }
                    $fn365 $tmp364 = $tmp363->methods[1];
                    panda$core$Object* $tmp366 = $tmp364(m$Iter350);
                    m362 = ((org$pandalanguage$pandac$MethodDecl*) $tmp366);
                    panda$core$MutableString$append$panda$core$String(result319, separator348);
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator348));
                        separator348 = &$s367;
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
                }
                goto $l355;
                $l356:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
            }
            panda$core$MutableString$append$panda$core$String(result319, &$s371);
            panda$core$String* $tmp372 = panda$core$MutableString$finish$R$panda$core$String(result319);
            (($fn373) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp372);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous285));
                panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s374, name310);
                panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp375, &$s376);
                previous285 = $tmp377;
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator348));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods308));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result319));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf304));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name310));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfCC306));
            }
        }
        goto $l292;
        $l293:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
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
    panda$collections$Iterator* intfType$Iter690;
    org$pandalanguage$pandac$Type* intfType702;
    org$pandalanguage$pandac$ClassDecl* intf707;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC709;
    panda$collections$ListView* methods711;
    panda$core$String* name713;
    panda$core$MutableString* result722;
    panda$core$String* separator756;
    panda$collections$Iterator* m$Iter758;
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
        intfType$Iter690 = $tmp694;
        $l695:;
        ITable* $tmp697 = intfType$Iter690->$class->itable;
        while ($tmp697->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp697 = $tmp697->next;
        }
        $fn699 $tmp698 = $tmp697->methods[0];
        panda$core$Bit $tmp700 = $tmp698(intfType$Iter690);
        panda$core$Bit $tmp701 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp700);
        if (!$tmp701.value) goto $l696;
        {
            ITable* $tmp703 = intfType$Iter690->$class->itable;
            while ($tmp703->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp703 = $tmp703->next;
            }
            $fn705 $tmp704 = $tmp703->methods[1];
            panda$core$Object* $tmp706 = $tmp704(intfType$Iter690);
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
                m$Iter758 = $tmp762;
                $l763:;
                ITable* $tmp765 = m$Iter758->$class->itable;
                while ($tmp765->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp765 = $tmp765->next;
                }
                $fn767 $tmp766 = $tmp765->methods[0];
                panda$core$Bit $tmp768 = $tmp766(m$Iter758);
                panda$core$Bit $tmp769 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp768);
                if (!$tmp769.value) goto $l764;
                {
                    ITable* $tmp771 = m$Iter758->$class->itable;
                    while ($tmp771->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp771 = $tmp771->next;
                    }
                    $fn773 $tmp772 = $tmp771->methods[1];
                    panda$core$Object* $tmp774 = $tmp772(m$Iter758);
                    m770 = ((org$pandalanguage$pandac$MethodDecl*) $tmp774);
                    panda$core$MutableString$append$panda$core$String(result722, separator756);
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator756));
                        separator756 = &$s775;
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
                }
                goto $l763;
                $l764:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
            }
            panda$core$MutableString$append$panda$core$String(result722, &$s779);
            panda$core$String* $tmp780 = panda$core$MutableString$finish$R$panda$core$String(result722);
            (($fn781) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp780);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous688));
                panda$core$String* $tmp783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s782, name713);
                panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp783, &$s784);
                previous688 = $tmp785;
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator756));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods711));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result722));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf707));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name713));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfCC709));
            }
        }
        goto $l695;
        $l696:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
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
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) shim796));
    }
    }
    else {
    {
        {
            panda$core$String* $tmp799 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            result789 = $tmp799;
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
    panda$collections$Iterator* m$Iter878;
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result801));
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp805 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
                org$pandalanguage$pandac$Type* $tmp806 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                panda$core$String* $tmp807 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp806)->name);
                panda$core$String* $tmp808 = panda$core$String$convert$R$panda$core$String($tmp807);
                panda$core$String* $tmp810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp808, &$s809);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp805, $tmp810, &$s811);
                result801 = $tmp805;
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result801));
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp817 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
            org$pandalanguage$pandac$Type* $tmp818 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp819 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp818)->name);
            panda$core$String* $tmp820 = panda$core$String$convert$R$panda$core$String($tmp819);
            panda$core$String* $tmp822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp820, &$s821);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp817, $tmp822, &$s823);
            result801 = $tmp817;
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
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCC825));
        }
        }
        else {
        {
            {
                superPtr824 = &$s832;
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
            m$Iter878 = $tmp882;
            $l883:;
            ITable* $tmp885 = m$Iter878->$class->itable;
            while ($tmp885->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp885 = $tmp885->next;
            }
            $fn887 $tmp886 = $tmp885->methods[0];
            panda$core$Bit $tmp888 = $tmp886(m$Iter878);
            panda$core$Bit $tmp889 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp888);
            if (!$tmp889.value) goto $l884;
            {
                ITable* $tmp891 = m$Iter878->$class->itable;
                while ($tmp891->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp891 = $tmp891->next;
                }
                $fn893 $tmp892 = $tmp891->methods[1];
                panda$core$Object* $tmp894 = $tmp892(m$Iter878);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator876));
                    separator876 = &$s898;
                }
            }
            goto $l883;
            $l884:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp882));
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result909));
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp923 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp923, name904, type914);
                result909 = $tmp923;
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result909));
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp929 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
                panda$core$String* $tmp930 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$String* $tmp931 = panda$core$String$convert$R$panda$core$String($tmp930);
                panda$core$String* $tmp933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp931, &$s932);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp929, $tmp933, &$s934);
                result909 = $tmp929;
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
                    }
                }
                }
                else {
                {
                    {
                        panda$core$String* $tmp1016 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1009);
                        methodName1014 = $tmp1016;
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator989));
                    separator989 = &$s1024;
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1040));
            panda$core$String* $tmp1043 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_v)->name);
            panda$core$String* $tmp1045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1043, &$s1044);
            panda$core$Int64$wrapper* $tmp1046;
            $tmp1046 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1046->value = self->varCount;
            panda$core$String* $tmp1047 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1045, ((panda$core$Object*) $tmp1046));
            panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, &$s1048);
            result1040 = $tmp1049;
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
    panda$core$Int64 $match$668_131059;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1061;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1067;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1069;
    {
        $match$668_131059 = p_t->typeKind;
        panda$core$Bit $tmp1060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$668_131059, ((panda$core$Int64) { 12 }));
        if ($tmp1060.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1061, ((panda$core$Int64) { 0 }));
            return $tmp1061;
        }
        }
        else {
        panda$core$Bit $tmp1063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$668_131059, ((panda$core$Int64) { 13 }));
        bool $tmp1062 = $tmp1063.value;
        if ($tmp1062) goto $l1064;
        panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$668_131059, ((panda$core$Int64) { 19 }));
        $tmp1062 = $tmp1065.value;
        $l1064:;
        panda$core$Bit $tmp1066 = { $tmp1062 };
        if ($tmp1066.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1067, ((panda$core$Int64) { 1 }));
            return $tmp1067;
        }
        }
        else {
        panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$668_131059, ((panda$core$Int64) { 20 }));
        if ($tmp1068.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1069, ((panda$core$Int64) { 2 }));
            return $tmp1069;
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
    panda$core$String* result1070;
    panda$core$String* leftRef1072;
    panda$core$String* falseLabel1088;
    panda$core$String* rightRef1098;
    panda$core$String* tmp171113;
    panda$core$String* $tmp1071 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1070 = $tmp1071;
    panda$core$String* $tmp1073 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1072 = $tmp1073;
    org$pandalanguage$pandac$Type* $tmp1075 = (($fn1074) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1076 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1077 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1075, $tmp1076);
    if ($tmp1077.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1072));
            panda$core$String* $tmp1079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1072, &$s1078);
            leftRef1072 = $tmp1079;
        }
    }
    }
    panda$core$String* $tmp1081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1080, result1070);
    panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1081, &$s1082);
    panda$core$String* $tmp1084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1083, leftRef1072);
    panda$core$String* $tmp1086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1084, &$s1085);
    (($fn1087) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1086);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp1089 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1088 = $tmp1089;
    panda$core$String* $tmp1091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1090, result1070);
    panda$core$String* $tmp1093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1091, &$s1092);
    panda$core$String* $tmp1094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1093, falseLabel1088);
    panda$core$String* $tmp1096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1094, &$s1095);
    (($fn1097) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1096);
    panda$core$String* $tmp1099 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1098 = $tmp1099;
    org$pandalanguage$pandac$Type* $tmp1101 = (($fn1100) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1102 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1103 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1101, $tmp1102);
    if ($tmp1103.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1098));
            panda$core$String* $tmp1105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1098, &$s1104);
            rightRef1098 = $tmp1105;
        }
    }
    }
    panda$core$String* $tmp1106 = panda$core$String$convert$R$panda$core$String(result1070);
    panda$core$String* $tmp1108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1106, &$s1107);
    panda$core$String* $tmp1109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1108, rightRef1098);
    panda$core$String* $tmp1111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1109, &$s1110);
    (($fn1112) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1111);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1088, p_out);
    {
        tmp171113 = result1070;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1070));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1098));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) falseLabel1088));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1072));
        }
        return tmp171113;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1114;
    panda$core$String* leftRef1116;
    panda$core$String* trueLabel1132;
    panda$core$String* rightRef1142;
    panda$core$String* tmp181157;
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
    trueLabel1132 = $tmp1133;
    panda$core$String* $tmp1135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1134, result1114);
    panda$core$String* $tmp1137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1135, &$s1136);
    panda$core$String* $tmp1138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1137, trueLabel1132);
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
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1132, p_out);
    {
        tmp181157 = result1114;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1114));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1142));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) trueLabel1132));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1116));
        }
        return tmp181157;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, org$pandalanguage$pandac$parser$Token$Kind p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1158;
    panda$core$Bit logical1159;
    org$pandalanguage$pandac$parser$Token$Kind $match$723_91160;
    panda$core$String* result1199;
    panda$core$String* tmp191221;
    memset(&cOp1158, 0, sizeof(cOp1158));
    logical1159 = ((panda$core$Bit) { false });
    {
        $match$723_91160 = p_op;
        panda$core$Bit $tmp1161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp1161.value) {
        {
            {
                cOp1158 = &$s1162;
            }
        }
        }
        else {
        panda$core$Bit $tmp1163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp1163.value) {
        {
            {
                cOp1158 = &$s1164;
            }
        }
        }
        else {
        panda$core$Bit $tmp1165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp1165.value) {
        {
            {
                cOp1158 = &$s1166;
            }
        }
        }
        else {
        panda$core$Bit $tmp1167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp1167.value) {
        {
            {
                cOp1158 = &$s1168;
            }
        }
        }
        else {
        panda$core$Bit $tmp1169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp1169.value) {
        {
            {
                cOp1158 = &$s1170;
            }
        }
        }
        else {
        panda$core$Bit $tmp1171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp1171.value) {
        {
            {
                cOp1158 = &$s1172;
            }
        }
        }
        else {
        panda$core$Bit $tmp1173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp1173.value) {
        {
            {
                cOp1158 = &$s1174;
            }
        }
        }
        else {
        panda$core$Bit $tmp1175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1175.value) {
        {
            {
                cOp1158 = &$s1176;
            }
        }
        }
        else {
        panda$core$Bit $tmp1177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp1177.value) {
        {
            {
                cOp1158 = &$s1178;
            }
        }
        }
        else {
        panda$core$Bit $tmp1179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp1179.value) {
        {
            {
                cOp1158 = &$s1180;
            }
        }
        }
        else {
        panda$core$Bit $tmp1182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 70 }));
        bool $tmp1181 = $tmp1182.value;
        if ($tmp1181) goto $l1183;
        panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp1181 = $tmp1184.value;
        $l1183:;
        panda$core$Bit $tmp1185 = { $tmp1181 };
        if ($tmp1185.value) {
        {
            {
                cOp1158 = &$s1186;
            }
        }
        }
        else {
        panda$core$Bit $tmp1187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1187.value) {
        {
            {
                cOp1158 = &$s1188;
            }
            logical1159 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp1189.value) {
        {
            {
                cOp1158 = &$s1190;
            }
            logical1159 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp1191.value) {
        {
            {
                cOp1158 = &$s1192;
            }
            logical1159 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1193.value) {
        {
            {
                cOp1158 = &$s1194;
            }
            logical1159 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp1195.value) {
        {
            {
                cOp1158 = &$s1196;
            }
            logical1159 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$723_91160.$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp1197.value) {
        {
            logical1159 = ((panda$core$Bit) { true });
            {
                cOp1158 = &$s1198;
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
    panda$core$String* $tmp1200 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1199 = $tmp1200;
    if (logical1159.value) {
    {
        (($fn1202) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1201);
    }
    }
    else {
    {
        panda$core$String* $tmp1203 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1204 = panda$core$String$convert$R$panda$core$String($tmp1203);
        panda$core$String* $tmp1206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1204, &$s1205);
        (($fn1207) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1206);
    }
    }
    panda$core$String* $tmp1208 = panda$core$String$convert$R$panda$core$String(result1199);
    panda$core$String* $tmp1210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1208, &$s1209);
    panda$core$String* $tmp1211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1210, p_leftRef);
    panda$core$String* $tmp1213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1211, &$s1212);
    panda$core$String* $tmp1214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1213, cOp1158);
    panda$core$String* $tmp1216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1214, &$s1215);
    panda$core$String* $tmp1217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1216, p_rightRef);
    panda$core$String* $tmp1219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1217, &$s1218);
    (($fn1220) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1219);
    {
        tmp191221 = result1199;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1199));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1158));
        }
        return tmp191221;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1222;
    panda$core$String* rightRef1224;
    panda$core$String* tmp201226;
    panda$core$String* $tmp1223 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1222 = $tmp1223;
    panda$core$String* $tmp1225 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1224 = $tmp1225;
    {
        panda$core$String* $tmp1228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1227, leftRef1222);
        panda$core$String* $tmp1230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1228, &$s1229);
        panda$core$String* $tmp1231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1230, rightRef1224);
        panda$core$String* $tmp1233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1231, &$s1232);
        tmp201226 = $tmp1233;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1224));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1222));
        }
        return tmp201226;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1234;
    panda$core$String* rightRef1236;
    panda$core$String* tmp211238;
    panda$core$String* $tmp1235 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1234 = $tmp1235;
    panda$core$String* $tmp1237 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1236 = $tmp1237;
    {
        panda$core$String* $tmp1240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1239, leftRef1234);
        panda$core$String* $tmp1242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1240, &$s1241);
        panda$core$String* $tmp1243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1242, rightRef1236);
        panda$core$String* $tmp1245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1243, &$s1244);
        tmp211238 = $tmp1245;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1236));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1234));
        }
        return tmp211238;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$parser$Token$Kind $match$793_91251;
    panda$core$String* leftRef1260;
    panda$core$String* rightRef1262;
    org$pandalanguage$pandac$Type* $tmp1247 = (($fn1246) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1249 = (($fn1248) p_right->$class->vtable[2])(p_right);
    panda$core$Bit $tmp1250 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1247, $tmp1249);
    PANDA_ASSERT($tmp1250.value);
    {
        $match$793_91251 = p_op;
        panda$core$Bit $tmp1252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$793_91251.$rawValue, ((panda$core$Int64) { 66 }));
        if ($tmp1252.value) {
        {
            panda$core$String* $tmp1253 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1253;
        }
        }
        else {
        panda$core$Bit $tmp1254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$793_91251.$rawValue, ((panda$core$Int64) { 68 }));
        if ($tmp1254.value) {
        {
            panda$core$String* $tmp1255 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1255;
        }
        }
        else {
        panda$core$Bit $tmp1256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$793_91251.$rawValue, ((panda$core$Int64) { 60 }));
        if ($tmp1256.value) {
        {
            panda$core$String* $tmp1257 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1257;
        }
        }
        else {
        panda$core$Bit $tmp1258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$793_91251.$rawValue, ((panda$core$Int64) { 61 }));
        if ($tmp1258.value) {
        {
            panda$core$String* $tmp1259 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1259;
        }
        }
        else {
        {
            panda$core$String* $tmp1261 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1260 = $tmp1261;
            panda$core$String* $tmp1263 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1262 = $tmp1263;
            org$pandalanguage$pandac$Type* $tmp1265 = (($fn1264) p_left->$class->vtable[2])(p_left);
            panda$core$String* $tmp1266 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1265, leftRef1260, p_op, rightRef1262, p_out);
            return $tmp1266;
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1267;
    panda$core$Int64 index1269;
    panda$collections$ListView* vtable1270;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1272;
    panda$core$String* tmp221301;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1268 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1267 = $tmp1268;
    index1269 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1271 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1270 = $tmp1271;
    ITable* $tmp1273 = ((panda$collections$CollectionView*) vtable1270)->$class->itable;
    while ($tmp1273->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1273 = $tmp1273->next;
    }
    $fn1275 $tmp1274 = $tmp1273->methods[0];
    panda$core$Int64 $tmp1276 = $tmp1274(((panda$collections$CollectionView*) vtable1270));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1272, ((panda$core$Int64) { 0 }), $tmp1276, ((panda$core$Bit) { false }));
    int64_t $tmp1278 = $tmp1272.min.value;
    panda$core$Int64 i1277 = { $tmp1278 };
    int64_t $tmp1280 = $tmp1272.max.value;
    bool $tmp1281 = $tmp1272.inclusive.value;
    if ($tmp1281) goto $l1288; else goto $l1289;
    $l1288:;
    if ($tmp1278 <= $tmp1280) goto $l1282; else goto $l1284;
    $l1289:;
    if ($tmp1278 < $tmp1280) goto $l1282; else goto $l1284;
    $l1282:;
    {
        ITable* $tmp1290 = vtable1270->$class->itable;
        while ($tmp1290->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1290 = $tmp1290->next;
        }
        $fn1292 $tmp1291 = $tmp1290->methods[0];
        panda$core$Object* $tmp1293 = $tmp1291(vtable1270, i1277);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1293)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1269 = i1277;
            goto $l1284;
        }
        }
    }
    $l1285:;
    int64_t $tmp1295 = $tmp1280 - i1277.value;
    if ($tmp1281) goto $l1296; else goto $l1297;
    $l1296:;
    if ((uint64_t) $tmp1295 >= 1) goto $l1294; else goto $l1284;
    $l1297:;
    if ((uint64_t) $tmp1295 > 1) goto $l1294; else goto $l1284;
    $l1294:;
    i1277.value += 1;
    goto $l1282;
    $l1284:;
    panda$core$Bit $tmp1300 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1269, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1300.value);
    {
        org$pandalanguage$pandac$Type* $tmp1303 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        panda$core$String* $tmp1304 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1303);
        panda$core$String* $tmp1305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1302, $tmp1304);
        panda$core$String* $tmp1307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1305, &$s1306);
        panda$core$String* $tmp1308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1307, p_target);
        panda$core$String* $tmp1310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1308, &$s1309);
        panda$core$Int64$wrapper* $tmp1311;
        $tmp1311 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp1311->value = index1269;
        panda$core$String* $tmp1312 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1310, ((panda$core$Object*) $tmp1311));
        panda$core$String* $tmp1314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1312, &$s1313);
        tmp221301 = $tmp1314;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1270));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc1267));
        }
        return tmp221301;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1315;
    panda$core$String* itable1317;
    panda$core$Int64 index1346;
    panda$collections$ListView* vtable1347;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1349;
    panda$core$String* result1386;
    panda$core$String* methodType1388;
    panda$core$String* tmp231405;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1316 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1315 = $tmp1316;
    panda$core$String* $tmp1318 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1317 = $tmp1318;
    panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1319, itable1317);
    panda$core$String* $tmp1322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1320, &$s1321);
    panda$core$String* $tmp1323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1322, p_target);
    panda$core$String* $tmp1325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1323, &$s1324);
    (($fn1326) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1325);
    panda$core$String* $tmp1328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1327, itable1317);
    panda$core$String* $tmp1330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1328, &$s1329);
    panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1330, cc1315->name);
    panda$core$String* $tmp1333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, &$s1332);
    (($fn1334) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1333);
    panda$core$Int64 $tmp1335 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1335;
    panda$core$String* $tmp1336 = panda$core$String$convert$R$panda$core$String(itable1317);
    panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1336, &$s1337);
    panda$core$String* $tmp1339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1338, itable1317);
    panda$core$String* $tmp1341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1339, &$s1340);
    (($fn1342) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1341);
    panda$core$Int64 $tmp1343 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1343;
    (($fn1345) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1344);
    index1346 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1348 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1347 = $tmp1348;
    ITable* $tmp1350 = ((panda$collections$CollectionView*) vtable1347)->$class->itable;
    while ($tmp1350->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1350 = $tmp1350->next;
    }
    $fn1352 $tmp1351 = $tmp1350->methods[0];
    panda$core$Int64 $tmp1353 = $tmp1351(((panda$collections$CollectionView*) vtable1347));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1349, ((panda$core$Int64) { 0 }), $tmp1353, ((panda$core$Bit) { false }));
    int64_t $tmp1355 = $tmp1349.min.value;
    panda$core$Int64 i1354 = { $tmp1355 };
    int64_t $tmp1357 = $tmp1349.max.value;
    bool $tmp1358 = $tmp1349.inclusive.value;
    if ($tmp1358) goto $l1365; else goto $l1366;
    $l1365:;
    if ($tmp1355 <= $tmp1357) goto $l1359; else goto $l1361;
    $l1366:;
    if ($tmp1355 < $tmp1357) goto $l1359; else goto $l1361;
    $l1359:;
    {
        ITable* $tmp1367 = vtable1347->$class->itable;
        while ($tmp1367->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1367 = $tmp1367->next;
        }
        $fn1369 $tmp1368 = $tmp1367->methods[0];
        panda$core$Object* $tmp1370 = $tmp1368(vtable1347, i1354);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1370)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1346 = i1354;
            goto $l1361;
        }
        }
    }
    $l1362:;
    int64_t $tmp1372 = $tmp1357 - i1354.value;
    if ($tmp1358) goto $l1373; else goto $l1374;
    $l1373:;
    if ((uint64_t) $tmp1372 >= 1) goto $l1371; else goto $l1361;
    $l1374:;
    if ((uint64_t) $tmp1372 > 1) goto $l1371; else goto $l1361;
    $l1371:;
    i1354.value += 1;
    goto $l1359;
    $l1361:;
    org$pandalanguage$pandac$Type* $tmp1377 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1378 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1377);
    panda$collections$ListView* $tmp1379 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1378);
    ITable* $tmp1380 = ((panda$collections$CollectionView*) $tmp1379)->$class->itable;
    while ($tmp1380->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1380 = $tmp1380->next;
    }
    $fn1382 $tmp1381 = $tmp1380->methods[0];
    panda$core$Int64 $tmp1383 = $tmp1381(((panda$collections$CollectionView*) $tmp1379));
    panda$core$Int64 $tmp1384 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1346, $tmp1383);
    index1346 = $tmp1384;
    panda$core$Bit $tmp1385 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1346, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1385.value);
    panda$core$String* $tmp1387 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1386 = $tmp1387;
    org$pandalanguage$pandac$Type* $tmp1389 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1390 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1389);
    methodType1388 = $tmp1390;
    panda$core$String* $tmp1391 = panda$core$String$convert$R$panda$core$String(methodType1388);
    panda$core$String* $tmp1393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1391, &$s1392);
    panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1393, result1386);
    panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1394, &$s1395);
    panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1396, itable1317);
    panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1397, &$s1398);
    panda$core$Int64$wrapper* $tmp1400;
    $tmp1400 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp1400->value = index1346;
    panda$core$String* $tmp1401 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1399, ((panda$core$Object*) $tmp1400));
    panda$core$String* $tmp1403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1401, &$s1402);
    (($fn1404) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1403);
    {
        tmp231405 = result1386;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1386));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1347));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc1315));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) itable1317));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodType1388));
        }
        return tmp231405;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1407 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1406 = $tmp1407.value;
    if (!$tmp1406) goto $l1408;
    panda$core$Bit $tmp1409 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1406 = $tmp1409.value;
    $l1408:;
    panda$core$Bit $tmp1410 = { $tmp1406 };
    if ($tmp1410.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1411.value) {
        {
            panda$core$String* $tmp1412 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1412;
        }
        }
        else {
        {
            panda$core$String* $tmp1413 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1413;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1414 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1414.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1415 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1415;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$866_91416;
    panda$core$String* count1421;
    panda$core$Int64 elementSize1427;
    panda$core$String* ptr1447;
    panda$core$String* ptr1458;
    panda$core$String* index1461;
    panda$core$String* ptr1474;
    panda$core$String* oldCount1477;
    panda$core$String* newCount1480;
    panda$core$Int64 elementSize1486;
    panda$core$String* ptr1517;
    panda$core$String* offset1520;
    {
        $match$866_91416 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp1418 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$866_91416, &$s1417);
        if ($tmp1418.value) {
        {
            panda$core$Int64 $tmp1419 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1419, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1420.value);
            panda$core$Object* $tmp1422 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1423 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1422), p_out);
            count1421 = $tmp1423;
            org$pandalanguage$pandac$Type* $tmp1424 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1425 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1424->subtypes);
            panda$core$Bit $tmp1426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1425, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1426.value);
            org$pandalanguage$pandac$Type* $tmp1428 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1429 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1428->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1430 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1429));
            elementSize1427 = $tmp1430;
            panda$core$String* $tmp1432 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1431, $tmp1432);
            panda$core$String* $tmp1435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1433, &$s1434);
            panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1435, count1421);
            panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1436, &$s1437);
            panda$core$Int64$wrapper* $tmp1439;
            $tmp1439 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1439->value = elementSize1427;
            panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1438, ((panda$core$Object*) $tmp1439));
            panda$core$String* $tmp1442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1440, &$s1441);
            return $tmp1442;
        }
        }
        else {
        panda$core$Bit $tmp1444 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$866_91416, &$s1443);
        if ($tmp1444.value) {
        {
            panda$core$Int64 $tmp1445 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1445, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1446.value);
            panda$core$Object* $tmp1448 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1449 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1448), p_out);
            ptr1447 = $tmp1449;
            panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1450, ptr1447);
            panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1451, &$s1452);
            return $tmp1453;
        }
        }
        else {
        panda$core$Bit $tmp1455 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$866_91416, &$s1454);
        if ($tmp1455.value) {
        {
            panda$core$Int64 $tmp1456 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1456, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1457.value);
            panda$core$Object* $tmp1459 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1460 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1459), p_out);
            ptr1458 = $tmp1460;
            panda$core$Object* $tmp1462 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1463 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1462), p_out);
            index1461 = $tmp1463;
            panda$core$String* $tmp1464 = panda$core$String$convert$R$panda$core$String(ptr1458);
            panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1464, &$s1465);
            panda$core$String* $tmp1467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1466, index1461);
            panda$core$String* $tmp1469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1467, &$s1468);
            return $tmp1469;
        }
        }
        else {
        panda$core$Bit $tmp1471 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$866_91416, &$s1470);
        if ($tmp1471.value) {
        {
            panda$core$Int64 $tmp1472 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1472, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp1473.value);
            panda$core$Object* $tmp1475 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1476 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1475), p_out);
            ptr1474 = $tmp1476;
            panda$core$Object* $tmp1478 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1479 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1478), p_out);
            oldCount1477 = $tmp1479;
            panda$core$Object* $tmp1481 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp1482 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1481), p_out);
            newCount1480 = $tmp1482;
            org$pandalanguage$pandac$Type* $tmp1483 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1484 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1483->subtypes);
            panda$core$Bit $tmp1485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1484, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1485.value);
            org$pandalanguage$pandac$Type* $tmp1487 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1488 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1487->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1489 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1488));
            elementSize1486 = $tmp1489;
            panda$core$String* $tmp1491 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp1492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1490, $tmp1491);
            panda$core$String* $tmp1494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1492, &$s1493);
            panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1494, ptr1474);
            panda$core$String* $tmp1497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1495, &$s1496);
            panda$core$String* $tmp1498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1497, oldCount1477);
            panda$core$String* $tmp1500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1498, &$s1499);
            panda$core$Int64$wrapper* $tmp1501;
            $tmp1501 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1501->value = elementSize1486;
            panda$core$String* $tmp1502 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1500, ((panda$core$Object*) $tmp1501));
            panda$core$String* $tmp1504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1502, &$s1503);
            panda$core$String* $tmp1505 = panda$core$String$convert$R$panda$core$String(newCount1480);
            panda$core$String* $tmp1507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1505, &$s1506);
            panda$core$Int64$wrapper* $tmp1508;
            $tmp1508 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1508->value = elementSize1486;
            panda$core$String* $tmp1509 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1507, ((panda$core$Object*) $tmp1508));
            panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1509, &$s1510);
            panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1504, $tmp1511);
            return $tmp1512;
        }
        }
        else {
        panda$core$Bit $tmp1514 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$866_91416, &$s1513);
        if ($tmp1514.value) {
        {
            panda$core$Int64 $tmp1515 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1515, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1516.value);
            panda$core$Object* $tmp1518 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1519 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1518), p_out);
            ptr1517 = $tmp1519;
            panda$core$Object* $tmp1521 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1522 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1521), p_out);
            offset1520 = $tmp1522;
            panda$core$String* $tmp1524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1523, ptr1517);
            panda$core$String* $tmp1526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1524, &$s1525);
            panda$core$String* $tmp1527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1526, offset1520);
            panda$core$String* $tmp1529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1527, &$s1528);
            return $tmp1529;
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
    org$pandalanguage$pandac$MethodDecl* m1530;
    panda$core$String* tmp241533;
    panda$core$String* bit1542;
    panda$core$String* result1546;
    panda$core$String* tmp251556;
    panda$core$String* tmp271557;
    panda$core$String* bit1562;
    panda$core$String* result1566;
    panda$core$String* tmp261576;
    panda$core$String* tmp281577;
    panda$collections$Array* argRefs1578;
    org$pandalanguage$pandac$Type* actualMethodType1581;
    panda$core$String* actualResultType1582;
    panda$core$Bit isSuper1583;
    panda$core$Int64 offset1603;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1608;
    panda$core$String* arg1623;
    panda$core$String* target1648;
    panda$core$String* methodRef1652;
    panda$core$Bit indirect1654;
    panda$core$String* result1656;
    panda$core$String* separator1658;
    panda$core$String* indirectVar1660;
    panda$collections$Iterator* arg$Iter1686;
    panda$core$String* arg1698;
    panda$core$String* tmp291715;
    panda$core$String* tmp301720;
    m1530 = p_mref->value;
    panda$core$Bit $tmp1532 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1530->owner)->name, &$s1531);
    if ($tmp1532.value) {
    {
        {
            panda$core$String* $tmp1534 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, p_t, p_mref, p_args, p_out);
            tmp241533 = $tmp1534;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1530));
            return tmp241533;
        }
    }
    }
    panda$core$Bit $tmp1535 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1530->owner);
    if ($tmp1535.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1530);
    }
    }
    panda$core$Bit $tmp1537 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1530->owner)->name, &$s1536);
    if ($tmp1537.value) {
    {
        panda$core$Bit $tmp1539 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1530)->name, &$s1538);
        if ($tmp1539.value) {
        {
            panda$core$Int64 $tmp1540 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1540, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1541.value);
            panda$core$Object* $tmp1543 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1544 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1545 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1543), ((org$pandalanguage$pandac$IRNode*) $tmp1544), p_out);
            bit1542 = $tmp1545;
            panda$core$String* $tmp1547 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1546 = $tmp1547;
            panda$core$String* $tmp1549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1548, result1546);
            panda$core$String* $tmp1551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1549, &$s1550);
            panda$core$String* $tmp1552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1551, bit1542);
            panda$core$String* $tmp1554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1552, &$s1553);
            (($fn1555) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1554);
            {
                tmp251556 = result1546;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1546));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit1542));
                }
                {
                    tmp271557 = tmp251556;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1530));
                    return tmp271557;
                }
            }
        }
        }
        panda$core$Bit $tmp1559 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1530)->name, &$s1558);
        if ($tmp1559.value) {
        {
            panda$core$Int64 $tmp1560 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1560, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1561.value);
            panda$core$Object* $tmp1563 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1564 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1565 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1563), ((org$pandalanguage$pandac$IRNode*) $tmp1564), p_out);
            bit1562 = $tmp1565;
            panda$core$String* $tmp1567 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1566 = $tmp1567;
            panda$core$String* $tmp1569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1568, result1566);
            panda$core$String* $tmp1571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1569, &$s1570);
            panda$core$String* $tmp1572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1571, bit1562);
            panda$core$String* $tmp1574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1572, &$s1573);
            (($fn1575) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1574);
            {
                tmp261576 = result1566;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1566));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit1562));
                }
                {
                    tmp281577 = tmp261576;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1530));
                    return tmp281577;
                }
            }
        }
        }
    }
    }
    panda$collections$Array* $tmp1579 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$core$Int64 $tmp1580 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$collections$Array$init$panda$core$Int64($tmp1579, $tmp1580);
    argRefs1578 = $tmp1579;
    memset(&actualMethodType1581, 0, sizeof(actualMethodType1581));
    memset(&actualResultType1582, 0, sizeof(actualResultType1582));
    panda$core$Int64 $tmp1585 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp1586 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1585, ((panda$core$Int64) { 1 }));
    bool $tmp1584 = $tmp1586.value;
    if (!$tmp1584) goto $l1587;
    panda$core$Object* $tmp1588 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1588)->$rawValue, ((panda$core$Int64) { 33 }));
    $tmp1584 = $tmp1589.value;
    $l1587:;
    panda$core$Bit $tmp1590 = { $tmp1584 };
    isSuper1583 = $tmp1590;
    panda$core$Bit $tmp1592 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1583);
    bool $tmp1591 = $tmp1592.value;
    if (!$tmp1591) goto $l1593;
    panda$core$Bit $tmp1594 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1530);
    $tmp1591 = $tmp1594.value;
    $l1593:;
    panda$core$Bit $tmp1595 = { $tmp1591 };
    if ($tmp1595.value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp1596 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1530);
            actualMethodType1581 = $tmp1596;
        }
        {
            panda$core$Int64 $tmp1597 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1581->subtypes);
            panda$core$Int64 $tmp1598 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1597, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp1599 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1581->subtypes, $tmp1598);
            panda$core$String* $tmp1600 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1599));
            actualResultType1582 = $tmp1600;
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp1601 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1530);
            actualMethodType1581 = $tmp1601;
        }
        {
            panda$core$String* $tmp1602 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            actualResultType1582 = $tmp1602;
        }
    }
    }
    panda$core$Int64 $tmp1604 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp1605 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1581->subtypes);
    panda$core$Int64 $tmp1606 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1604, $tmp1605);
    panda$core$Int64 $tmp1607 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1606, ((panda$core$Int64) { 1 }));
    offset1603 = $tmp1607;
    panda$core$Int64 $tmp1609 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1608, ((panda$core$Int64) { 0 }), $tmp1609, ((panda$core$Bit) { false }));
    int64_t $tmp1611 = $tmp1608.min.value;
    panda$core$Int64 i1610 = { $tmp1611 };
    int64_t $tmp1613 = $tmp1608.max.value;
    bool $tmp1614 = $tmp1608.inclusive.value;
    if ($tmp1614) goto $l1621; else goto $l1622;
    $l1621:;
    if ($tmp1611 <= $tmp1613) goto $l1615; else goto $l1617;
    $l1622:;
    if ($tmp1611 < $tmp1613) goto $l1615; else goto $l1617;
    $l1615:;
    {
        panda$core$Object* $tmp1624 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1610);
        panda$core$String* $tmp1625 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1624), p_out);
        arg1623 = $tmp1625;
        panda$core$Bit $tmp1627 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1610, offset1603);
        bool $tmp1626 = $tmp1627.value;
        if (!$tmp1626) goto $l1628;
        panda$core$Int64 $tmp1629 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1610, offset1603);
        panda$core$Object* $tmp1630 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1581->subtypes, $tmp1629);
        panda$core$Object* $tmp1631 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1610);
        org$pandalanguage$pandac$Type* $tmp1633 = (($fn1632) ((org$pandalanguage$pandac$IRNode*) $tmp1631)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1631));
        panda$core$Bit $tmp1634 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1630), $tmp1633);
        $tmp1626 = $tmp1634.value;
        $l1628:;
        panda$core$Bit $tmp1635 = { $tmp1626 };
        if ($tmp1635.value) {
        {
            {
                panda$core$Object* $tmp1636 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1610);
                org$pandalanguage$pandac$Type* $tmp1638 = (($fn1637) ((org$pandalanguage$pandac$IRNode*) $tmp1636)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1636));
                panda$core$Int64 $tmp1639 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1610, offset1603);
                panda$core$Object* $tmp1640 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1581->subtypes, $tmp1639);
                panda$core$String* $tmp1641 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1623, $tmp1638, ((org$pandalanguage$pandac$Type*) $tmp1640), p_out);
                arg1623 = $tmp1641;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs1578, ((panda$core$Object*) arg1623));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1623));
    }
    $l1618:;
    int64_t $tmp1643 = $tmp1613 - i1610.value;
    if ($tmp1614) goto $l1644; else goto $l1645;
    $l1644:;
    if ((uint64_t) $tmp1643 >= 1) goto $l1642; else goto $l1617;
    $l1645:;
    if ((uint64_t) $tmp1643 > 1) goto $l1642; else goto $l1617;
    $l1642:;
    i1610.value += 1;
    goto $l1615;
    $l1617:;
    memset(&target1648, 0, sizeof(target1648));
    panda$core$Int64 $tmp1649 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs1578);
    panda$core$Bit $tmp1650 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1649, ((panda$core$Int64) { 0 }));
    if ($tmp1650.value) {
    {
        {
            panda$core$Object* $tmp1651 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs1578, ((panda$core$Int64) { 0 }));
            target1648 = ((panda$core$String*) $tmp1651);
        }
    }
    }
    else {
    {
        {
            target1648 = NULL;
        }
    }
    }
    panda$core$String* $tmp1653 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1648, m1530, isSuper1583, p_out);
    methodRef1652 = $tmp1653;
    panda$core$Bit $tmp1655 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1530);
    indirect1654 = $tmp1655;
    panda$core$String* $tmp1657 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1656 = $tmp1657;
    separator1658 = &$s1659;
    memset(&indirectVar1660, 0, sizeof(indirectVar1660));
    if (indirect1654.value) {
    {
        panda$core$String* $tmp1661 = panda$core$String$convert$R$panda$core$String(actualResultType1582);
        panda$core$String* $tmp1663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1661, &$s1662);
        panda$core$String* $tmp1664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1663, result1656);
        panda$core$String* $tmp1666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1664, &$s1665);
        (($fn1667) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1666);
        panda$core$String* $tmp1668 = panda$core$String$convert$R$panda$core$String(methodRef1652);
        panda$core$String* $tmp1670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1668, &$s1669);
        panda$core$String* $tmp1671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1670, result1656);
        panda$core$String* $tmp1673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1671, &$s1672);
        (($fn1674) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1673);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1658));
            separator1658 = &$s1675;
        }
    }
    }
    else {
    {
        panda$core$String* $tmp1676 = panda$core$String$convert$R$panda$core$String(actualResultType1582);
        panda$core$String* $tmp1678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1676, &$s1677);
        panda$core$String* $tmp1679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1678, result1656);
        panda$core$String* $tmp1681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1679, &$s1680);
        panda$core$String* $tmp1682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1681, methodRef1652);
        panda$core$String* $tmp1684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1682, &$s1683);
        (($fn1685) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1684);
    }
    }
    {
        ITable* $tmp1687 = ((panda$collections$Iterable*) argRefs1578)->$class->itable;
        while ($tmp1687->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1687 = $tmp1687->next;
        }
        $fn1689 $tmp1688 = $tmp1687->methods[0];
        panda$collections$Iterator* $tmp1690 = $tmp1688(((panda$collections$Iterable*) argRefs1578));
        arg$Iter1686 = $tmp1690;
        $l1691:;
        ITable* $tmp1693 = arg$Iter1686->$class->itable;
        while ($tmp1693->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1693 = $tmp1693->next;
        }
        $fn1695 $tmp1694 = $tmp1693->methods[0];
        panda$core$Bit $tmp1696 = $tmp1694(arg$Iter1686);
        panda$core$Bit $tmp1697 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1696);
        if (!$tmp1697.value) goto $l1692;
        {
            ITable* $tmp1699 = arg$Iter1686->$class->itable;
            while ($tmp1699->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1699 = $tmp1699->next;
            }
            $fn1701 $tmp1700 = $tmp1699->methods[1];
            panda$core$Object* $tmp1702 = $tmp1700(arg$Iter1686);
            arg1698 = ((panda$core$String*) $tmp1702);
            panda$core$String* $tmp1703 = panda$core$String$convert$R$panda$core$String(separator1658);
            panda$core$String* $tmp1705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1703, &$s1704);
            panda$core$String* $tmp1706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1705, arg1698);
            panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, &$s1707);
            (($fn1709) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1708);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1658));
                separator1658 = &$s1710;
            }
        }
        goto $l1691;
        $l1692:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1690));
    }
    (($fn1712) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1711);
    panda$core$String* $tmp1713 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$Bit $tmp1714 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1713, actualResultType1582);
    if ($tmp1714.value) {
    {
        {
            panda$core$Int64 $tmp1716 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1581->subtypes);
            panda$core$Int64 $tmp1717 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1716, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp1718 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1581->subtypes, $tmp1717);
            panda$core$String* $tmp1719 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1656, ((org$pandalanguage$pandac$Type*) $tmp1718), p_t, p_out);
            tmp291715 = $tmp1719;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs1578));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1658));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1656));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1582));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar1660));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1581));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef1652));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1648));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1530));
            }
            return tmp291715;
        }
    }
    }
    {
        tmp301720 = result1656;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs1578));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1658));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1656));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType1582));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar1660));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType1581));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef1652));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1648));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1530));
        }
        return tmp301720;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1722;
    panda$core$String* nonNullValue1725;
    panda$core$String* tmp311728;
    panda$core$String* wrapped1736;
    panda$core$String* tmp321795;
    panda$core$Bit $tmp1721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1721.value) {
    {
        panda$core$Object* $tmp1723 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1724 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1723), p_out);
        unwrapped1722 = $tmp1724;
        panda$core$Object* $tmp1726 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1727 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1722, ((org$pandalanguage$pandac$Type*) $tmp1726), p_dstType, p_out);
        nonNullValue1725 = $tmp1727;
        {
            panda$core$String* $tmp1730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1729, p_value);
            panda$core$String* $tmp1732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1730, &$s1731);
            panda$core$String* $tmp1733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1732, nonNullValue1725);
            panda$core$String* $tmp1735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1733, &$s1734);
            tmp311728 = $tmp1735;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unwrapped1722));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nonNullValue1725));
            }
            return tmp311728;
        }
    }
    }
    panda$core$String* $tmp1737 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    wrapped1736 = $tmp1737;
    panda$core$String* $tmp1738 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1739 = panda$core$String$convert$R$panda$core$String($tmp1738);
    panda$core$String* $tmp1741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1739, &$s1740);
    panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1741, wrapped1736);
    panda$core$String* $tmp1744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1742, &$s1743);
    (($fn1745) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1744);
    panda$core$Bit $tmp1746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1746.value) {
    {
        panda$core$String* $tmp1748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1747, p_value);
        panda$core$String* $tmp1750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1748, &$s1749);
        (($fn1751) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1750);
        panda$core$Int64 $tmp1752 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1752;
    }
    }
    panda$core$String* $tmp1753 = panda$core$String$convert$R$panda$core$String(wrapped1736);
    panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1753, &$s1754);
    panda$core$String* $tmp1756 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1755, $tmp1756);
    panda$core$String* $tmp1759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1757, &$s1758);
    panda$core$Int64 $tmp1761 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_srcType);
    panda$core$Int64$wrapper* $tmp1762;
    $tmp1762 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp1762->value = $tmp1761;
    panda$core$String* $tmp1763 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1760, ((panda$core$Object*) $tmp1762));
    panda$core$String* $tmp1765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1763, &$s1764);
    panda$core$String* $tmp1766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1759, $tmp1765);
    panda$core$String* $tmp1768 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_srcType)->name);
    panda$core$String* $tmp1769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1767, $tmp1768);
    panda$core$String* $tmp1771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1769, &$s1770);
    panda$core$String* $tmp1772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1766, $tmp1771);
    (($fn1773) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1772);
    panda$core$String* $tmp1774 = panda$core$String$convert$R$panda$core$String(wrapped1736);
    panda$core$String* $tmp1776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1774, &$s1775);
    panda$core$String* $tmp1777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1776, p_value);
    panda$core$String* $tmp1779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1777, &$s1778);
    (($fn1780) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1779);
    panda$core$Bit $tmp1781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1781.value) {
    {
        panda$core$Int64 $tmp1782 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1782;
        (($fn1784) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1783);
        (($fn1786) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1785);
        panda$core$Int64 $tmp1787 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1787;
        panda$core$String* $tmp1788 = panda$core$String$convert$R$panda$core$String(wrapped1736);
        panda$core$String* $tmp1790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1788, &$s1789);
        (($fn1791) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1790);
        panda$core$Int64 $tmp1792 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1792;
        (($fn1794) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1793);
    }
    }
    {
        panda$core$String* $tmp1797 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1796, $tmp1797);
        panda$core$String* $tmp1800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1798, &$s1799);
        panda$core$String* $tmp1801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1800, wrapped1736);
        panda$core$String* $tmp1803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1801, &$s1802);
        tmp321795 = $tmp1803;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wrapped1736));
        return tmp321795;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$FieldDecl* p_field, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1806;
    panda$core$String* baseRef1810;
    panda$core$String* tmp331813;
    panda$core$String* tmp341821;
    panda$core$Bit $tmp1804 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_field->annotations);
    if ($tmp1804.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_field->value != NULL }).value);
        panda$core$String* $tmp1805 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_field->value, p_out);
        return $tmp1805;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1808 = (($fn1807) p_base->$class->vtable[2])(p_base);
    org$pandalanguage$pandac$ClassDecl* $tmp1809 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1808);
    cl1806 = $tmp1809;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1806);
    panda$core$String* $tmp1811 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef1810 = $tmp1811;
    PANDA_ASSERT(((panda$core$Bit) { cl1806 != NULL }).value);
    panda$core$Bit $tmp1812 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1806);
    if ($tmp1812.value) {
    {
        {
            panda$core$String* $tmp1814 = panda$core$String$convert$R$panda$core$String(baseRef1810);
            panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1814, &$s1815);
            panda$core$String* $tmp1817 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
            panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1816, $tmp1817);
            panda$core$String* $tmp1820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, &$s1819);
            tmp331813 = $tmp1820;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1810));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1806));
            }
            return tmp331813;
        }
    }
    }
    {
        panda$core$String* $tmp1822 = panda$core$String$convert$R$panda$core$String(baseRef1810);
        panda$core$String* $tmp1824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, &$s1823);
        panda$core$String* $tmp1825 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
        panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1824, $tmp1825);
        panda$core$String* $tmp1828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1826, &$s1827);
        tmp341821 = $tmp1828;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1810));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1806));
        }
        return tmp341821;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1829;
    panda$core$String* wrapped1839;
    panda$core$String* nonNullValue1842;
    panda$core$String* tmp351845;
    panda$core$String* tmp361857;
    panda$core$String* tmp371858;
    panda$core$String* $tmp1831 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1830, $tmp1831);
    panda$core$String* $tmp1834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1832, &$s1833);
    panda$core$String* $tmp1835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1834, p_value);
    panda$core$String* $tmp1837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1835, &$s1836);
    result1829 = $tmp1837;
    panda$core$Bit $tmp1838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1838.value) {
    {
        panda$core$Object* $tmp1840 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1841 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1840), p_out);
        wrapped1839 = $tmp1841;
        panda$core$Object* $tmp1843 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1844 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1839, ((org$pandalanguage$pandac$Type*) $tmp1843), p_dstType, p_out);
        nonNullValue1842 = $tmp1844;
        {
            panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1846, p_value);
            panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1847, &$s1848);
            panda$core$String* $tmp1850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1849, nonNullValue1842);
            panda$core$String* $tmp1852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1850, &$s1851);
            panda$core$String* $tmp1853 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
            panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1852, $tmp1853);
            panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1854, &$s1855);
            tmp351845 = $tmp1856;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nonNullValue1842));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wrapped1839));
            }
            {
                tmp361857 = tmp351845;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1829));
                return tmp361857;
            }
        }
    }
    }
    {
        tmp371858 = result1829;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1829));
        return tmp371858;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1860 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1859, $tmp1860);
    panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1861, &$s1862);
    panda$core$String* $tmp1864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1863, p_value);
    panda$core$String* $tmp1866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, &$s1865);
    return $tmp1866;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1868 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1867, $tmp1868);
    panda$core$String* $tmp1871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1869, &$s1870);
    panda$core$String* $tmp1872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1871, p_value);
    panda$core$String* $tmp1874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1872, &$s1873);
    return $tmp1874;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1875;
    panda$core$String* tmp421878;
    org$pandalanguage$pandac$ClassDecl* srcClass1887;
    org$pandalanguage$pandac$ClassDecl* targetClass1889;
    panda$core$String* tmp381897;
    panda$core$String* tmp431899;
    panda$core$String* tmp391906;
    panda$core$String* tmp441908;
    panda$core$String* tmp401919;
    panda$core$String* tmp451921;
    panda$core$String* tmp411932;
    panda$core$String* tmp461934;
    panda$core$String* srcType1936;
    panda$core$String* dstType1938;
    panda$core$String* tmp471941;
    panda$core$String* tmp481942;
    memset(&op1875, 0, sizeof(op1875));
    panda$core$Bit $tmp1876 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1876.value) {
    {
        panda$core$Bit $tmp1877 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1877.value);
        {
            panda$core$String* $tmp1880 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            panda$core$String* $tmp1881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1879, $tmp1880);
            panda$core$String* $tmp1883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1881, &$s1882);
            panda$core$String* $tmp1884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1883, p_value);
            panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1884, &$s1885);
            tmp421878 = $tmp1886;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1875));
            return tmp421878;
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1888 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1887 = $tmp1888;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1887 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1890 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1889 = $tmp1890;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1889 != NULL }).value);
        panda$core$Bit $tmp1892 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1887);
        bool $tmp1891 = $tmp1892.value;
        if (!$tmp1891) goto $l1893;
        panda$core$Bit $tmp1894 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1889);
        panda$core$Bit $tmp1895 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1894);
        $tmp1891 = $tmp1895.value;
        $l1893:;
        panda$core$Bit $tmp1896 = { $tmp1891 };
        if ($tmp1896.value) {
        {
            {
                panda$core$String* $tmp1898 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp381897 = $tmp1898;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1889));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1887));
                }
                {
                    tmp431899 = tmp381897;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1875));
                    return tmp431899;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1901 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1887);
        panda$core$Bit $tmp1902 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1901);
        bool $tmp1900 = $tmp1902.value;
        if (!$tmp1900) goto $l1903;
        panda$core$Bit $tmp1904 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1889);
        $tmp1900 = $tmp1904.value;
        $l1903:;
        panda$core$Bit $tmp1905 = { $tmp1900 };
        if ($tmp1905.value) {
        {
            {
                panda$core$String* $tmp1907 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp391906 = $tmp1907;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1889));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1887));
                }
                {
                    tmp441908 = tmp391906;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1875));
                    return tmp441908;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1911 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1887);
        bool $tmp1910 = $tmp1911.value;
        if (!$tmp1910) goto $l1912;
        panda$core$Bit $tmp1913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1910 = $tmp1913.value;
        $l1912:;
        panda$core$Bit $tmp1914 = { $tmp1910 };
        bool $tmp1909 = $tmp1914.value;
        if (!$tmp1909) goto $l1915;
        panda$core$Object* $tmp1916 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1917 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1916), p_src);
        $tmp1909 = $tmp1917.value;
        $l1915:;
        panda$core$Bit $tmp1918 = { $tmp1909 };
        if ($tmp1918.value) {
        {
            {
                panda$core$String* $tmp1920 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp401919 = $tmp1920;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1889));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1887));
                }
                {
                    tmp451921 = tmp401919;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1875));
                    return tmp451921;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1924 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1889);
        bool $tmp1923 = $tmp1924.value;
        if (!$tmp1923) goto $l1925;
        panda$core$Bit $tmp1926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1923 = $tmp1926.value;
        $l1925:;
        panda$core$Bit $tmp1927 = { $tmp1923 };
        bool $tmp1922 = $tmp1927.value;
        if (!$tmp1922) goto $l1928;
        panda$core$Object* $tmp1929 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1930 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1929), p_target);
        $tmp1922 = $tmp1930.value;
        $l1928:;
        panda$core$Bit $tmp1931 = { $tmp1922 };
        if ($tmp1931.value) {
        {
            {
                panda$core$String* $tmp1933 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                tmp411932 = $tmp1933;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1889));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1887));
                }
                {
                    tmp461934 = tmp411932;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1875));
                    return tmp461934;
                }
            }
        }
        }
        }
        }
        }
        {
            op1875 = &$s1935;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass1889));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass1887));
        }
    }
    }
    panda$core$String* $tmp1937 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1936 = $tmp1937;
    panda$core$String* $tmp1939 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1938 = $tmp1939;
    panda$core$Bit $tmp1940 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1936, dstType1938);
    if ($tmp1940.value) {
    {
        {
            tmp471941 = p_value;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dstType1938));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcType1936));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1875));
            }
            return tmp471941;
        }
    }
    }
    {
        panda$core$String* $tmp1944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1943, dstType1938);
        panda$core$String* $tmp1946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1944, &$s1945);
        panda$core$String* $tmp1947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1946, p_value);
        panda$core$String* $tmp1949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1947, &$s1948);
        tmp481942 = $tmp1949;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dstType1938));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcType1936));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op1875));
        }
        return tmp481942;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef1950;
    panda$core$String* tmp491952;
    panda$core$String* $tmp1951 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef1950 = $tmp1951;
    {
        org$pandalanguage$pandac$Type* $tmp1954 = (($fn1953) p_base->$class->vtable[2])(p_base);
        panda$core$String* $tmp1955 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, baseRef1950, $tmp1954, p_t, p_out);
        tmp491952 = $tmp1955;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef1950));
        return tmp491952;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_target, org$pandalanguage$pandac$IRNode* p_initCall, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1090_91956;
    org$pandalanguage$pandac$Type* initType1958;
    org$pandalanguage$pandac$MethodRef* initMref1960;
    panda$collections$ImmutableArray* initArgs1962;
    org$pandalanguage$pandac$ClassDecl* cl1964;
    panda$core$String* t1966;
    org$pandalanguage$pandac$IRNode* $match$1096_211974;
    panda$collections$ImmutableArray* args1976;
    panda$core$String* value1980;
    panda$core$String* tmp1992;
    panda$core$String* tmp502009;
    panda$core$String* result2010;
    {
        $match$1090_91956 = p_initCall;
        panda$core$Bit $tmp1957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1090_91956->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1957.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1959 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1090_91956->$data + 16));
            initType1958 = *$tmp1959;
            org$pandalanguage$pandac$MethodRef** $tmp1961 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1090_91956->$data + 24));
            initMref1960 = *$tmp1961;
            panda$collections$ImmutableArray** $tmp1963 = ((panda$collections$ImmutableArray**) ((char*) $match$1090_91956->$data + 32));
            initArgs1962 = *$tmp1963;
            org$pandalanguage$pandac$ClassDecl* $tmp1965 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
            cl1964 = $tmp1965;
            PANDA_ASSERT(((panda$core$Bit) { cl1964 != NULL }).value);
            panda$core$String* $tmp1967 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            t1966 = $tmp1967;
            panda$core$Bit $tmp1969 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            bool $tmp1968 = $tmp1969.value;
            if ($tmp1968) goto $l1970;
            org$pandalanguage$pandac$Type* $tmp1971 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1972 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1971);
            $tmp1968 = $tmp1972.value;
            $l1970:;
            panda$core$Bit $tmp1973 = { $tmp1968 };
            if ($tmp1973.value) {
            {
                {
                    $match$1096_211974 = p_initCall;
                    panda$core$Bit $tmp1975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1096_211974->$rawValue, ((panda$core$Int64) { 5 }));
                    if ($tmp1975.value) {
                    {
                        panda$collections$ImmutableArray** $tmp1977 = ((panda$collections$ImmutableArray**) ((char*) $match$1096_211974->$data + 32));
                        args1976 = *$tmp1977;
                        panda$core$Int64 $tmp1978 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(args1976);
                        panda$core$Bit $tmp1979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1978, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1979.value);
                        panda$core$Object* $tmp1981 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(args1976, ((panda$core$Int64) { 0 }));
                        panda$core$String* $tmp1982 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1981), p_out);
                        value1980 = $tmp1982;
                        panda$core$String* $tmp1984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1983, t1966);
                        panda$core$String* $tmp1986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1984, &$s1985);
                        panda$core$String* $tmp1987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1986, value1980);
                        panda$core$String* $tmp1989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1987, &$s1988);
                        return $tmp1989;
                    }
                    }
                }
            }
            }
            panda$core$Bit $tmp1990 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1964);
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
                panda$core$String* $tmp1998 = panda$core$String$convert$R$panda$core$String(t1966);
                panda$core$String* $tmp2000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1998, &$s1999);
                panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2000, tmp1992);
                panda$core$String* $tmp2003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2001, &$s2002);
                (($fn2004) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2003);
                panda$core$String* $tmp2006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2005, tmp1992);
                panda$core$String* $tmp2008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2006, &$s2007);
                org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType1958, initMref1960, initArgs1962, $tmp2008, p_out);
                {
                    tmp502009 = tmp1992;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tmp1992));
                    return tmp502009;
                }
            }
            }
            panda$core$String* $tmp2011 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result2010 = $tmp2011;
            panda$core$String* $tmp2012 = panda$core$String$convert$R$panda$core$String(t1966);
            panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2012, &$s2013);
            panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, result2010);
            panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, &$s2016);
            panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2017, t1966);
            panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2018, &$s2019);
            panda$core$Int64 $tmp2021 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
            panda$core$Int64$wrapper* $tmp2022;
            $tmp2022 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2022->value = $tmp2021;
            panda$core$String* $tmp2023 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2020, ((panda$core$Object*) $tmp2022));
            panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2023, &$s2024);
            panda$core$String* $tmp2027 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1964)->name);
            panda$core$String* $tmp2028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2026, $tmp2027);
            panda$core$String* $tmp2030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2028, &$s2029);
            panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2025, $tmp2030);
            (($fn2032) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2031);
            panda$core$String* $tmp2033 = panda$core$String$convert$R$panda$core$String(result2010);
            panda$core$String* $tmp2035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2033, &$s2034);
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType1958, initMref1960, initArgs1962, $tmp2035, p_out);
            return result2010;
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
    panda$core$String* $tmp2036 = panda$core$UInt64$convert$R$panda$core$String(p_int);
    return $tmp2036;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$UInt64 p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$UInt64$wrapper* $tmp2038;
    $tmp2038 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
    $tmp2038->value = p_int;
    panda$core$String* $tmp2039 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2037, ((panda$core$Object*) $tmp2038));
    return $tmp2039;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Real64 p_real, panda$io$OutputStream* p_out) {
    panda$core$String* result2040;
    panda$core$Char8 $tmp2042;
    panda$core$String* tmp512044;
    panda$core$String* tmp522045;
    panda$core$String* $tmp2041 = panda$core$Real64$convert$R$panda$core$String(p_real);
    result2040 = $tmp2041;
    panda$core$Char8$init$panda$core$UInt8(&$tmp2042, ((panda$core$UInt8) { 46 }));
    panda$core$Bit $tmp2043 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(result2040, $tmp2042);
    if ($tmp2043.value) {
    {
        {
            tmp512044 = result2040;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2040));
            return tmp512044;
        }
    }
    }
    {
        panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result2040, &$s2046);
        tmp522045 = $tmp2047;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2040));
        return tmp522045;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_bit, panda$io$IndentedOutputStream* p_out) {
    if (p_bit.value) {
    {
        return &$s2048;
    }
    }
    return &$s2049;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2050 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2050;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* result2052;
    panda$collections$Iterator* c$Iter2073;
    panda$core$Char8 c2086;
    panda$core$String* tmp532121;
    panda$core$Int64 $tmp2051 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2051;
    panda$core$Int64$wrapper* $tmp2054;
    $tmp2054 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2054->value = self->varCount;
    panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2053, ((panda$core$Object*) $tmp2054));
    panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2055, &$s2056);
    result2052 = $tmp2057;
    org$pandalanguage$pandac$Type* $tmp2058 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2059 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2058);
    panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2060, result2052);
    panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2061, &$s2062);
    panda$core$Int64$wrapper* $tmp2065;
    $tmp2065 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2065->value = ((panda$core$Int64) { -999 });
    panda$core$String* $tmp2066 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2064, ((panda$core$Object*) $tmp2065));
    panda$core$String* $tmp2068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2066, &$s2067);
    panda$core$String* $tmp2069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2063, $tmp2068);
    panda$core$String* $tmp2071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2069, &$s2070);
    (($fn2072) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2071);
    {
        panda$collections$ListView* $tmp2074 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2075 = ((panda$collections$Iterable*) $tmp2074)->$class->itable;
        while ($tmp2075->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2075 = $tmp2075->next;
        }
        $fn2077 $tmp2076 = $tmp2075->methods[0];
        panda$collections$Iterator* $tmp2078 = $tmp2076(((panda$collections$Iterable*) $tmp2074));
        c$Iter2073 = $tmp2078;
        $l2079:;
        ITable* $tmp2081 = c$Iter2073->$class->itable;
        while ($tmp2081->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2081 = $tmp2081->next;
        }
        $fn2083 $tmp2082 = $tmp2081->methods[0];
        panda$core$Bit $tmp2084 = $tmp2082(c$Iter2073);
        panda$core$Bit $tmp2085 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2084);
        if (!$tmp2085.value) goto $l2080;
        {
            ITable* $tmp2087 = c$Iter2073->$class->itable;
            while ($tmp2087->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2087 = $tmp2087->next;
            }
            $fn2089 $tmp2088 = $tmp2087->methods[1];
            panda$core$Object* $tmp2090 = $tmp2088(c$Iter2073);
            c2086 = ((panda$core$Char8$wrapper*) $tmp2090)->value;
            panda$core$UInt8 $tmp2092 = panda$core$Char8$convert$R$panda$core$UInt8(c2086);
            panda$core$UInt8$wrapper* $tmp2093;
            $tmp2093 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
            $tmp2093->value = $tmp2092;
            ITable* $tmp2095 = ((panda$core$Formattable*) $tmp2093)->$class->itable;
            while ($tmp2095->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2095 = $tmp2095->next;
            }
            $fn2097 $tmp2096 = $tmp2095->methods[0];
            panda$core$String* $tmp2098 = $tmp2096(((panda$core$Formattable*) $tmp2093), &$s2094);
            panda$core$String* $tmp2100 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp2098, &$s2099);
            panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2091, $tmp2100);
            panda$core$String* $tmp2103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2101, &$s2102);
            (($fn2104) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2103);
        }
        goto $l2079;
        $l2080:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2078));
    }
    panda$collections$ListView* $tmp2106 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2107 = ((panda$collections$CollectionView*) $tmp2106)->$class->itable;
    while ($tmp2107->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2107 = $tmp2107->next;
    }
    $fn2109 $tmp2108 = $tmp2107->methods[0];
    panda$core$Int64 $tmp2110 = $tmp2108(((panda$collections$CollectionView*) $tmp2106));
    panda$core$Int64$wrapper* $tmp2111;
    $tmp2111 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2111->value = $tmp2110;
    panda$core$String* $tmp2112 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2105, ((panda$core$Object*) $tmp2111));
    panda$core$String* $tmp2114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2112, &$s2113);
    panda$core$Int64 $tmp2115 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$Int64$wrapper* $tmp2116;
    $tmp2116 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2116->value = $tmp2115;
    panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2114, ((panda$core$Object*) $tmp2116));
    panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2117, &$s2118);
    (($fn2120) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2119);
    {
        panda$core$String* $tmp2123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2122, result2052);
        panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2123, &$s2124);
        tmp532121 = $tmp2125;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2052));
        return tmp532121;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    return &$s2126;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2128 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2127, $tmp2128);
    panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2129, &$s2130);
    return $tmp2131;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2132;
    org$pandalanguage$pandac$ClassDecl* cl2134;
    panda$core$String* bit2138;
    panda$core$String* tmp542151;
    panda$core$String* $tmp2133 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    ref2132 = $tmp2133;
    org$pandalanguage$pandac$Type* $tmp2136 = (($fn2135) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2137 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2136);
    cl2134 = $tmp2137;
    memset(&bit2138, 0, sizeof(bit2138));
    panda$core$Bit $tmp2139 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2134);
    if ($tmp2139.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2141 = (($fn2140) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2142 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2141->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2142.value) {
        {
            {
                bit2138 = &$s2143;
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2144, ref2132);
                panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2145, &$s2146);
                bit2138 = $tmp2147;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp2148 = panda$core$String$convert$R$panda$core$String(ref2132);
            panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2148, &$s2149);
            bit2138 = $tmp2150;
        }
    }
    }
    {
        panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2152, bit2138);
        panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2153, &$s2154);
        tmp542151 = $tmp2155;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2134));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref2132));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2138));
        }
        return tmp542151;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2156;
    org$pandalanguage$pandac$ClassDecl* cl2158;
    panda$core$String* bit2162;
    panda$core$String* tmp552174;
    panda$core$String* $tmp2157 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    ref2156 = $tmp2157;
    org$pandalanguage$pandac$Type* $tmp2160 = (($fn2159) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2161 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2160);
    cl2158 = $tmp2161;
    memset(&bit2162, 0, sizeof(bit2162));
    panda$core$Bit $tmp2163 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2158);
    if ($tmp2163.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2165 = (($fn2164) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2166 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2165->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2166.value) {
        {
            {
                bit2162 = &$s2167;
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp2168 = panda$core$String$convert$R$panda$core$String(ref2156);
                panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2168, &$s2169);
                bit2162 = $tmp2170;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp2171 = panda$core$String$convert$R$panda$core$String(ref2156);
            panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2171, &$s2172);
            bit2162 = $tmp2173;
        }
    }
    }
    {
        panda$core$String* $tmp2176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2175, bit2162);
        panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2176, &$s2177);
        tmp552174 = $tmp2178;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2158));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref2156));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2162));
        }
        return tmp552174;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2180;
    panda$core$String* tmp562184;
    panda$core$String* tmp572190;
    panda$core$Bit $tmp2179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2179.value);
    panda$core$Object* $tmp2181 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2182 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2181));
    cl2180 = $tmp2182;
    PANDA_ASSERT(((panda$core$Bit) { cl2180 != NULL }).value);
    panda$core$Bit $tmp2183 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2180);
    if ($tmp2183.value) {
    {
        {
            panda$core$String* $tmp2186 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2185, $tmp2186);
            panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2187, &$s2188);
            tmp562184 = $tmp2189;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2180));
            return tmp562184;
        }
    }
    }
    else {
    {
        {
            tmp572190 = &$s2191;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2180));
            return tmp572190;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2180));
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_base, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef2192;
    panda$core$String* result2194;
    org$pandalanguage$pandac$parser$Token$Kind $match$1220_92196;
    panda$core$String* tmp582198;
    panda$core$String* tmp592204;
    panda$core$String* tmp602210;
    panda$core$String* $tmp2193 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef2192 = $tmp2193;
    panda$core$String* $tmp2195 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2194 = $tmp2195;
    {
        $match$1220_92196 = p_op;
        panda$core$Bit $tmp2197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1220_92196.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp2197.value) {
        {
            {
                panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2199, baseRef2192);
                panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2200, &$s2201);
                tmp582198 = $tmp2202;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2194));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2192));
                }
                return tmp582198;
            }
        }
        }
        else {
        panda$core$Bit $tmp2203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1220_92196.$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp2203.value) {
        {
            {
                panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2205, baseRef2192);
                panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2206, &$s2207);
                tmp592204 = $tmp2208;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2194));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2192));
                }
                return tmp592204;
            }
        }
        }
        else {
        panda$core$Bit $tmp2209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1220_92196.$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp2209.value) {
        {
            {
                panda$core$String* $tmp2212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2211, baseRef2192);
                panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2212, &$s2213);
                tmp602210 = $tmp2214;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2194));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2192));
                }
                return tmp602210;
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2194));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2192));
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef2220;
    panda$core$String* trueLabel2222;
    panda$core$String* falseLabel2224;
    panda$core$String* merge2226;
    panda$core$String* result2228;
    panda$core$String* tmp612277;
    org$pandalanguage$pandac$Type* $tmp2216 = (($fn2215) p_ifTrue->$class->vtable[2])(p_ifTrue);
    org$pandalanguage$pandac$Type* $tmp2218 = (($fn2217) p_ifFalse->$class->vtable[2])(p_ifFalse);
    panda$core$Bit $tmp2219 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2216, $tmp2218);
    PANDA_ASSERT($tmp2219.value);
    panda$core$String* $tmp2221 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    testRef2220 = $tmp2221;
    panda$core$String* $tmp2223 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2222 = $tmp2223;
    panda$core$String* $tmp2225 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2224 = $tmp2225;
    panda$core$String* $tmp2227 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2226 = $tmp2227;
    panda$core$String* $tmp2229 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2228 = $tmp2229;
    org$pandalanguage$pandac$Type* $tmp2231 = (($fn2230) p_ifTrue->$class->vtable[2])(p_ifTrue);
    panda$core$String* $tmp2232 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2231);
    panda$core$String* $tmp2233 = panda$core$String$convert$R$panda$core$String($tmp2232);
    panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2233, &$s2234);
    panda$core$String* $tmp2236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, result2228);
    panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2236, &$s2237);
    (($fn2239) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2238);
    panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2240, testRef2220);
    panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2241, &$s2242);
    panda$core$String* $tmp2244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2243, trueLabel2222);
    panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2244, &$s2245);
    panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2246, falseLabel2224);
    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2247, &$s2248);
    (($fn2250) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2249);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel2222, p_out);
    panda$core$String* $tmp2251 = panda$core$String$convert$R$panda$core$String(result2228);
    panda$core$String* $tmp2253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2251, &$s2252);
    panda$core$String* $tmp2254 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifTrue, p_out);
    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2253, $tmp2254);
    panda$core$String* $tmp2257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2255, &$s2256);
    (($fn2258) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2257);
    panda$core$String* $tmp2260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2259, merge2226);
    panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2260, &$s2261);
    (($fn2263) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2262);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel2224, p_out);
    panda$core$String* $tmp2264 = panda$core$String$convert$R$panda$core$String(result2228);
    panda$core$String* $tmp2266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, &$s2265);
    panda$core$String* $tmp2267 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifFalse, p_out);
    panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2266, $tmp2267);
    panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2268, &$s2269);
    (($fn2271) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2270);
    panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2272, merge2226);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2273, &$s2274);
    (($fn2276) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2275);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, merge2226, p_out);
    {
        tmp612277 = result2228;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testRef2220));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2228));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) merge2226));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) falseLabel2224));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) trueLabel2222));
        }
        return tmp612277;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2278 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2278;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2279;
    panda$core$String* tmp622281;
    panda$core$String* $tmp2280 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    result2279 = $tmp2280;
    panda$collections$Array$add$panda$collections$Array$T(self->extraEffects, ((panda$core$Object*) p_stmt));
    {
        tmp622281 = result2279;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2279));
        return tmp622281;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1264_92282;
    org$pandalanguage$pandac$IRNode* left2284;
    org$pandalanguage$pandac$parser$Token$Kind op2286;
    org$pandalanguage$pandac$IRNode* right2288;
    org$pandalanguage$pandac$Type* type2292;
    org$pandalanguage$pandac$MethodRef* target2294;
    panda$collections$ImmutableArray* args2296;
    org$pandalanguage$pandac$IRNode* base2300;
    org$pandalanguage$pandac$Type* type2302;
    panda$core$Bit explicit2304;
    panda$core$UInt64 value2308;
    panda$core$UInt64 value2312;
    panda$core$Real64 value2316;
    panda$core$Bit value2320;
    org$pandalanguage$pandac$Type* type2324;
    org$pandalanguage$pandac$IRNode* initCall2326;
    org$pandalanguage$pandac$Variable* variable2330;
    org$pandalanguage$pandac$IRNode* base2334;
    org$pandalanguage$pandac$FieldDecl* field2336;
    panda$core$String* str2340;
    org$pandalanguage$pandac$Type* t2346;
    org$pandalanguage$pandac$IRNode* base2350;
    panda$core$Int64 id2352;
    panda$core$String* value2354;
    panda$core$Int64 id2358;
    panda$core$String* result2360;
    org$pandalanguage$pandac$Position pos2364;
    org$pandalanguage$pandac$Type* type2366;
    org$pandalanguage$pandac$IRNode* value2370;
    org$pandalanguage$pandac$IRNode* value2374;
    org$pandalanguage$pandac$parser$Token$Kind op2378;
    org$pandalanguage$pandac$IRNode* base2380;
    org$pandalanguage$pandac$IRNode* test2384;
    org$pandalanguage$pandac$IRNode* ifTrue2386;
    org$pandalanguage$pandac$IRNode* ifFalse2388;
    org$pandalanguage$pandac$IRNode* base2394;
    org$pandalanguage$pandac$IRNode* stmt2396;
    {
        $match$1264_92282 = p_expr;
        panda$core$Bit $tmp2283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp2283.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2285 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92282->$data + 24));
            left2284 = *$tmp2285;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2287 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1264_92282->$data + 32));
            op2286 = *$tmp2287;
            org$pandalanguage$pandac$IRNode** $tmp2289 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92282->$data + 40));
            right2288 = *$tmp2289;
            panda$core$String* $tmp2290 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, left2284, op2286, right2288, p_out);
            return $tmp2290;
        }
        }
        else {
        panda$core$Bit $tmp2291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp2291.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2293 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1264_92282->$data + 16));
            type2292 = *$tmp2293;
            org$pandalanguage$pandac$MethodRef** $tmp2295 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1264_92282->$data + 24));
            target2294 = *$tmp2295;
            panda$collections$ImmutableArray** $tmp2297 = ((panda$collections$ImmutableArray**) ((char*) $match$1264_92282->$data + 32));
            args2296 = *$tmp2297;
            panda$core$String* $tmp2298 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, type2292, target2294, args2296, p_out);
            return $tmp2298;
        }
        }
        else {
        panda$core$Bit $tmp2299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp2299.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2301 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92282->$data + 16));
            base2300 = *$tmp2301;
            org$pandalanguage$pandac$Type** $tmp2303 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1264_92282->$data + 24));
            type2302 = *$tmp2303;
            panda$core$Bit* $tmp2305 = ((panda$core$Bit*) ((char*) $match$1264_92282->$data + 32));
            explicit2304 = *$tmp2305;
            panda$core$String* $tmp2306 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base2300, type2302, p_out);
            return $tmp2306;
        }
        }
        else {
        panda$core$Bit $tmp2307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2307.value) {
        {
            panda$core$UInt64* $tmp2309 = ((panda$core$UInt64*) ((char*) $match$1264_92282->$data + 24));
            value2308 = *$tmp2309;
            panda$core$String* $tmp2310 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2308, p_out);
            return $tmp2310;
        }
        }
        else {
        panda$core$Bit $tmp2311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp2311.value) {
        {
            panda$core$UInt64* $tmp2313 = ((panda$core$UInt64*) ((char*) $match$1264_92282->$data + 24));
            value2312 = *$tmp2313;
            panda$core$String* $tmp2314 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2312, p_out);
            return $tmp2314;
        }
        }
        else {
        panda$core$Bit $tmp2315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2315.value) {
        {
            panda$core$Real64* $tmp2317 = ((panda$core$Real64*) ((char*) $match$1264_92282->$data + 24));
            value2316 = *$tmp2317;
            panda$core$String* $tmp2318 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(self, value2316, ((panda$io$OutputStream*) p_out));
            return $tmp2318;
        }
        }
        else {
        panda$core$Bit $tmp2319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp2319.value) {
        {
            panda$core$Bit* $tmp2321 = ((panda$core$Bit*) ((char*) $match$1264_92282->$data + 24));
            value2320 = *$tmp2321;
            panda$core$String* $tmp2322 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, value2320, p_out);
            return $tmp2322;
        }
        }
        else {
        panda$core$Bit $tmp2323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp2323.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2325 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1264_92282->$data + 16));
            type2324 = *$tmp2325;
            org$pandalanguage$pandac$IRNode** $tmp2327 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92282->$data + 24));
            initCall2326 = *$tmp2327;
            panda$core$String* $tmp2328 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, type2324, initCall2326, p_out);
            return $tmp2328;
        }
        }
        else {
        panda$core$Bit $tmp2329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2329.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2331 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1264_92282->$data + 16));
            variable2330 = *$tmp2331;
            panda$core$String* $tmp2332 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, variable2330, p_out);
            return $tmp2332;
        }
        }
        else {
        panda$core$Bit $tmp2333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp2333.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2335 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92282->$data + 24));
            base2334 = *$tmp2335;
            org$pandalanguage$pandac$FieldDecl** $tmp2337 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1264_92282->$data + 32));
            field2336 = *$tmp2337;
            panda$core$String* $tmp2338 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, base2334, field2336, p_out);
            return $tmp2338;
        }
        }
        else {
        panda$core$Bit $tmp2339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2339.value) {
        {
            panda$core$String** $tmp2341 = ((panda$core$String**) ((char*) $match$1264_92282->$data + 16));
            str2340 = *$tmp2341;
            panda$core$String* $tmp2342 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(self, str2340);
            return $tmp2342;
        }
        }
        else {
        panda$core$Bit $tmp2343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2343.value) {
        {
            panda$core$String* $tmp2344 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(self, p_out);
            return $tmp2344;
        }
        }
        else {
        panda$core$Bit $tmp2345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2345.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2347 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1264_92282->$data + 16));
            t2346 = *$tmp2347;
            panda$core$String* $tmp2348 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, t2346, p_out);
            return $tmp2348;
        }
        }
        else {
        panda$core$Bit $tmp2349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2349.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2351 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92282->$data + 0));
            base2350 = *$tmp2351;
            panda$core$Int64* $tmp2353 = ((panda$core$Int64*) ((char*) $match$1264_92282->$data + 8));
            id2352 = *$tmp2353;
            panda$core$String* $tmp2355 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base2350, p_out);
            value2354 = $tmp2355;
            panda$core$Int64$wrapper* $tmp2356;
            $tmp2356 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2356->value = id2352;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp2356), ((panda$core$Object*) value2354));
            return value2354;
        }
        }
        else {
        panda$core$Bit $tmp2357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2357.value) {
        {
            panda$core$Int64* $tmp2359 = ((panda$core$Int64*) ((char*) $match$1264_92282->$data + 24));
            id2358 = *$tmp2359;
            panda$core$Int64$wrapper* $tmp2361;
            $tmp2361 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2361->value = id2358;
            panda$core$Object* $tmp2362 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) $tmp2361));
            result2360 = ((panda$core$String*) $tmp2362);
            PANDA_ASSERT(((panda$core$Bit) { result2360 != NULL }).value);
            return result2360;
        }
        }
        else {
        panda$core$Bit $tmp2363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp2363.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2365 = ((org$pandalanguage$pandac$Position*) ((char*) $match$1264_92282->$data + 0));
            pos2364 = *$tmp2365;
            org$pandalanguage$pandac$Type** $tmp2367 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1264_92282->$data + 16));
            type2366 = *$tmp2367;
            panda$core$String* $tmp2368 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, type2366, p_out);
            return $tmp2368;
        }
        }
        else {
        panda$core$Bit $tmp2369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp2369.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2371 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92282->$data + 16));
            value2370 = *$tmp2371;
            panda$core$String* $tmp2372 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2370, p_out);
            return $tmp2372;
        }
        }
        else {
        panda$core$Bit $tmp2373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2373.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2375 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92282->$data + 16));
            value2374 = *$tmp2375;
            panda$core$String* $tmp2376 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2374, p_out);
            return $tmp2376;
        }
        }
        else {
        panda$core$Bit $tmp2377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2377.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2379 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1264_92282->$data + 16));
            op2378 = *$tmp2379;
            org$pandalanguage$pandac$IRNode** $tmp2381 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92282->$data + 24));
            base2380 = *$tmp2381;
            panda$core$String* $tmp2382 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, op2378, base2380, p_out);
            return $tmp2382;
        }
        }
        else {
        panda$core$Bit $tmp2383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2383.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2385 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92282->$data + 16));
            test2384 = *$tmp2385;
            org$pandalanguage$pandac$IRNode** $tmp2387 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92282->$data + 24));
            ifTrue2386 = *$tmp2387;
            org$pandalanguage$pandac$IRNode** $tmp2389 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92282->$data + 32));
            ifFalse2388 = *$tmp2389;
            panda$core$String* $tmp2390 = org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, test2384, ifTrue2386, ifFalse2388, p_out);
            return $tmp2390;
        }
        }
        else {
        panda$core$Bit $tmp2391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp2391.value) {
        {
            panda$core$String* $tmp2392 = org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2392;
        }
        }
        else {
        panda$core$Bit $tmp2393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92282->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2393.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2395 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92282->$data + 0));
            base2394 = *$tmp2395;
            org$pandalanguage$pandac$IRNode** $tmp2397 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92282->$data + 8));
            stmt2396 = *$tmp2397;
            panda$core$String* $tmp2398 = org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base2394, stmt2396, p_out);
            return $tmp2398;
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
    panda$core$String* $tmp2399 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2399;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2403;
    org$pandalanguage$pandac$IRNode* s2415;
    (($fn2401) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2400);
    panda$core$Int64 $tmp2402 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2402;
    {
        ITable* $tmp2404 = ((panda$collections$Iterable*) p_statements)->$class->itable;
        while ($tmp2404->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2404 = $tmp2404->next;
        }
        $fn2406 $tmp2405 = $tmp2404->methods[0];
        panda$collections$Iterator* $tmp2407 = $tmp2405(((panda$collections$Iterable*) p_statements));
        s$Iter2403 = $tmp2407;
        $l2408:;
        ITable* $tmp2410 = s$Iter2403->$class->itable;
        while ($tmp2410->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2410 = $tmp2410->next;
        }
        $fn2412 $tmp2411 = $tmp2410->methods[0];
        panda$core$Bit $tmp2413 = $tmp2411(s$Iter2403);
        panda$core$Bit $tmp2414 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2413);
        if (!$tmp2414.value) goto $l2409;
        {
            ITable* $tmp2416 = s$Iter2403->$class->itable;
            while ($tmp2416->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2416 = $tmp2416->next;
            }
            $fn2418 $tmp2417 = $tmp2416->methods[1];
            panda$core$Object* $tmp2419 = $tmp2417(s$Iter2403);
            s2415 = ((org$pandalanguage$pandac$IRNode*) $tmp2419);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2415, p_out);
        }
        goto $l2408;
        $l2409:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2407));
    }
    panda$core$Int64 $tmp2420 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2420;
    (($fn2422) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2421);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$1333_92423;
    panda$core$String* ptr2428;
    panda$core$String* arg2431;
    panda$core$String* base2453;
    panda$core$String* index2456;
    panda$core$String* value2459;
    {
        $match$1333_92423 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp2425 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1333_92423, &$s2424);
        if ($tmp2425.value) {
        {
            panda$core$Int64 $tmp2426 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2426, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2427.value);
            panda$core$Object* $tmp2429 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2430 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2429), p_out);
            ptr2428 = $tmp2430;
            panda$core$Object* $tmp2432 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2433 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2432));
            panda$core$String* $tmp2434 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2433, p_out);
            arg2431 = $tmp2434;
            panda$core$String* $tmp2436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2435, arg2431);
            panda$core$String* $tmp2438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2436, &$s2437);
            panda$core$String* $tmp2439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2438, ptr2428);
            panda$core$String* $tmp2441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2439, &$s2440);
            (($fn2442) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2441);
        }
        }
        else {
        panda$core$Bit $tmp2444 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1333_92423, &$s2443);
        if ($tmp2444.value) {
        {
            panda$core$Int64 $tmp2445 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2445, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2446.value);
            panda$core$Object* $tmp2447 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2448 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2447));
            org$pandalanguage$pandac$Type* $tmp2450 = (($fn2449) $tmp2448->$class->vtable[2])($tmp2448);
            panda$core$Int64 $tmp2451 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2450->subtypes);
            panda$core$Bit $tmp2452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2451, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2452.value);
            panda$core$Object* $tmp2454 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2455 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2454), p_out);
            base2453 = $tmp2455;
            panda$core$Object* $tmp2457 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2458 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2457), p_out);
            index2456 = $tmp2458;
            panda$core$Object* $tmp2460 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2461 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2460));
            panda$core$String* $tmp2462 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2461, p_out);
            value2459 = $tmp2462;
            panda$core$String* $tmp2463 = panda$core$String$convert$R$panda$core$String(base2453);
            panda$core$String* $tmp2465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2463, &$s2464);
            panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2465, index2456);
            panda$core$String* $tmp2468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2466, &$s2467);
            panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2468, value2459);
            panda$core$String* $tmp2471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, &$s2470);
            (($fn2472) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2471);
        }
        }
        else {
        panda$core$Bit $tmp2474 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1333_92423, &$s2473);
        if ($tmp2474.value) {
        {
            panda$core$Int64 $tmp2475 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2475, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2476.value);
            panda$core$Object* $tmp2478 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2479 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2478), p_out);
            panda$core$String* $tmp2480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2477, $tmp2479);
            panda$core$String* $tmp2482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2480, &$s2481);
            (($fn2483) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2482);
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
    org$pandalanguage$pandac$MethodDecl* m2484;
    org$pandalanguage$pandac$Type* actualMethodType2488;
    panda$core$String* actualResultType2489;
    panda$core$Bit isSuper2490;
    panda$collections$Array* argRefs2510;
    panda$core$Int64 offset2512;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2517;
    panda$core$String* arg2532;
    panda$core$String* targetRef2557;
    panda$core$String* methodRef2561;
    panda$core$String* separator2563;
    panda$core$String* indirectVar2567;
    panda$core$String* resultType2571;
    panda$collections$Iterator* a$Iter2595;
    panda$core$String* a2607;
    m2484 = p_mref->value;
    panda$core$Bit $tmp2486 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2484->owner)->name, &$s2485);
    if ($tmp2486.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_mref, p_args, p_out);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2484));
            return;
        }
    }
    }
    panda$core$Bit $tmp2487 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2484->owner);
    if ($tmp2487.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2484);
    }
    }
    memset(&actualMethodType2488, 0, sizeof(actualMethodType2488));
    memset(&actualResultType2489, 0, sizeof(actualResultType2489));
    panda$core$Int64 $tmp2492 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp2493 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2492, ((panda$core$Int64) { 1 }));
    bool $tmp2491 = $tmp2493.value;
    if (!$tmp2491) goto $l2494;
    panda$core$Object* $tmp2495 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2495)->$rawValue, ((panda$core$Int64) { 33 }));
    $tmp2491 = $tmp2496.value;
    $l2494:;
    panda$core$Bit $tmp2497 = { $tmp2491 };
    isSuper2490 = $tmp2497;
    panda$core$Bit $tmp2499 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2490);
    bool $tmp2498 = $tmp2499.value;
    if (!$tmp2498) goto $l2500;
    panda$core$Bit $tmp2501 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2484);
    $tmp2498 = $tmp2501.value;
    $l2500:;
    panda$core$Bit $tmp2502 = { $tmp2498 };
    if ($tmp2502.value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp2503 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2484);
            actualMethodType2488 = $tmp2503;
        }
        {
            panda$core$Int64 $tmp2504 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2488->subtypes);
            panda$core$Int64 $tmp2505 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2504, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2506 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2488->subtypes, $tmp2505);
            panda$core$String* $tmp2507 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2506));
            actualResultType2489 = $tmp2507;
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp2508 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2484);
            actualMethodType2488 = $tmp2508;
        }
        {
            panda$core$String* $tmp2509 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            actualResultType2489 = $tmp2509;
        }
    }
    }
    panda$collections$Array* $tmp2511 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2511);
    argRefs2510 = $tmp2511;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(argRefs2510, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2513 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp2514 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2488->subtypes);
    panda$core$Int64 $tmp2515 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2513, $tmp2514);
    panda$core$Int64 $tmp2516 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2515, ((panda$core$Int64) { 1 }));
    offset2512 = $tmp2516;
    panda$core$Int64 $tmp2518 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2517, ((panda$core$Int64) { 0 }), $tmp2518, ((panda$core$Bit) { false }));
    int64_t $tmp2520 = $tmp2517.min.value;
    panda$core$Int64 i2519 = { $tmp2520 };
    int64_t $tmp2522 = $tmp2517.max.value;
    bool $tmp2523 = $tmp2517.inclusive.value;
    if ($tmp2523) goto $l2530; else goto $l2531;
    $l2530:;
    if ($tmp2520 <= $tmp2522) goto $l2524; else goto $l2526;
    $l2531:;
    if ($tmp2520 < $tmp2522) goto $l2524; else goto $l2526;
    $l2524:;
    {
        panda$core$Object* $tmp2533 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2519);
        panda$core$String* $tmp2534 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2533), p_out);
        arg2532 = $tmp2534;
        panda$core$Bit $tmp2536 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2519, offset2512);
        bool $tmp2535 = $tmp2536.value;
        if (!$tmp2535) goto $l2537;
        panda$core$Int64 $tmp2538 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2519, offset2512);
        panda$core$Object* $tmp2539 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2488->subtypes, $tmp2538);
        panda$core$Object* $tmp2540 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2519);
        org$pandalanguage$pandac$Type* $tmp2542 = (($fn2541) ((org$pandalanguage$pandac$IRNode*) $tmp2540)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2540));
        panda$core$Bit $tmp2543 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2539), $tmp2542);
        $tmp2535 = $tmp2543.value;
        $l2537:;
        panda$core$Bit $tmp2544 = { $tmp2535 };
        if ($tmp2544.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2532));
                panda$core$Object* $tmp2545 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2519);
                org$pandalanguage$pandac$Type* $tmp2547 = (($fn2546) ((org$pandalanguage$pandac$IRNode*) $tmp2545)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2545));
                panda$core$Int64 $tmp2548 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2519, offset2512);
                panda$core$Object* $tmp2549 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2488->subtypes, $tmp2548);
                panda$core$String* $tmp2550 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2532, $tmp2547, ((org$pandalanguage$pandac$Type*) $tmp2549), p_out);
                arg2532 = $tmp2550;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs2510, ((panda$core$Object*) arg2532));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2532));
    }
    $l2527:;
    int64_t $tmp2552 = $tmp2522 - i2519.value;
    if ($tmp2523) goto $l2553; else goto $l2554;
    $l2553:;
    if ((uint64_t) $tmp2552 >= 1) goto $l2551; else goto $l2526;
    $l2554:;
    if ((uint64_t) $tmp2552 > 1) goto $l2551; else goto $l2526;
    $l2551:;
    i2519.value += 1;
    goto $l2524;
    $l2526:;
    memset(&targetRef2557, 0, sizeof(targetRef2557));
    panda$core$Int64 $tmp2558 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs2510);
    panda$core$Bit $tmp2559 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2558, ((panda$core$Int64) { 0 }));
    if ($tmp2559.value) {
    {
        {
            panda$core$Object* $tmp2560 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs2510, ((panda$core$Int64) { 0 }));
            targetRef2557 = ((panda$core$String*) $tmp2560);
        }
    }
    }
    else {
    {
        {
            targetRef2557 = NULL;
        }
    }
    }
    panda$core$String* $tmp2562 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, targetRef2557, m2484, isSuper2490, p_out);
    methodRef2561 = $tmp2562;
    separator2563 = &$s2564;
    panda$core$Bit $tmp2565 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2484);
    if ($tmp2565.value) {
    {
        panda$core$Int64 $tmp2566 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2566;
        panda$core$Int64$wrapper* $tmp2569;
        $tmp2569 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp2569->value = self->varCount;
        panda$core$String* $tmp2570 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2568, ((panda$core$Object*) $tmp2569));
        indirectVar2567 = $tmp2570;
        panda$core$String* $tmp2572 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        resultType2571 = $tmp2572;
        panda$core$String* $tmp2573 = panda$core$String$convert$R$panda$core$String(resultType2571);
        panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2573, &$s2574);
        panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2575, indirectVar2567);
        panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2576, &$s2577);
        (($fn2579) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2578);
        panda$core$String* $tmp2580 = panda$core$String$convert$R$panda$core$String(methodRef2561);
        panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2580, &$s2581);
        panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, resultType2571);
        panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2583, &$s2584);
        panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, indirectVar2567);
        panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, &$s2587);
        (($fn2589) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2588);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2563));
            separator2563 = &$s2590;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultType2571));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar2567));
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2591 = panda$core$String$convert$R$panda$core$String(methodRef2561);
        panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, &$s2592);
        (($fn2594) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2593);
    }
    }
    {
        ITable* $tmp2596 = ((panda$collections$Iterable*) argRefs2510)->$class->itable;
        while ($tmp2596->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2596 = $tmp2596->next;
        }
        $fn2598 $tmp2597 = $tmp2596->methods[0];
        panda$collections$Iterator* $tmp2599 = $tmp2597(((panda$collections$Iterable*) argRefs2510));
        a$Iter2595 = $tmp2599;
        $l2600:;
        ITable* $tmp2602 = a$Iter2595->$class->itable;
        while ($tmp2602->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2602 = $tmp2602->next;
        }
        $fn2604 $tmp2603 = $tmp2602->methods[0];
        panda$core$Bit $tmp2605 = $tmp2603(a$Iter2595);
        panda$core$Bit $tmp2606 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2605);
        if (!$tmp2606.value) goto $l2601;
        {
            ITable* $tmp2608 = a$Iter2595->$class->itable;
            while ($tmp2608->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2608 = $tmp2608->next;
            }
            $fn2610 $tmp2609 = $tmp2608->methods[1];
            panda$core$Object* $tmp2611 = $tmp2609(a$Iter2595);
            a2607 = ((panda$core$String*) $tmp2611);
            (($fn2612) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2563);
            (($fn2613) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2607);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2563));
                separator2563 = &$s2614;
            }
        }
        goto $l2600;
        $l2601:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2599));
    }
    (($fn2616) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2615);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2563));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs2510));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef2561));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType2489));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2484));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetRef2557));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType2488));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$collections$ImmutableArray* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef2617;
    panda$core$String* $tmp2618 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    testRef2617 = $tmp2618;
    panda$core$String* $tmp2620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2619, testRef2617);
    panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2620, &$s2621);
    (($fn2623) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2622);
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { false }), p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_ifTrue, p_out);
    (($fn2625) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2624);
    if (((panda$core$Bit) { p_ifFalse != NULL }).value) {
    {
        (($fn2627) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2626);
        org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { false }), p_out);
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_ifFalse, p_out);
        (($fn2629) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2628);
    }
    }
    panda$collections$Array$clear(self->extraEffects);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testRef2617));
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range2642;
    org$pandalanguage$pandac$Type* t2644;
    panda$core$String* llt2648;
    panda$core$String* indexType2650;
    org$pandalanguage$pandac$ClassDecl* cl2656;
    org$pandalanguage$pandac$FieldDecl* field2664;
    panda$core$String* numberType2670;
    panda$core$String* index2672;
    org$pandalanguage$pandac$IRNode* $match$1464_92673;
    org$pandalanguage$pandac$Variable* variable2675;
    panda$core$String* start2678;
    panda$core$String* indexValuePtr2690;
    panda$core$String* end2704;
    panda$core$String* inclusive2716;
    panda$core$String* loopStart2726;
    panda$core$String* loopBody2728;
    panda$core$String* loopEnd2730;
    panda$core$String* loopTest2732;
    panda$core$String* forwardEntry2735;
    panda$core$String* backwardEntry2737;
    panda$core$String* signPrefix2739;
    panda$core$String* unsigned2740;
    panda$core$String* forwardEntryInclusive2754;
    panda$core$String* forwardEntryExclusive2756;
    panda$core$String* loopInc2798;
    panda$core$String* forwardDelta2800;
    panda$core$String* forwardInclusiveLabel2815;
    panda$core$String* forwardExclusiveLabel2817;
    panda$core$String* forwardExclusiveTest2846;
    panda$core$String* inc2863;
    org$pandalanguage$pandac$Type* $tmp2631 = (($fn2630) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp2632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2631->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2632.value);
    org$pandalanguage$pandac$Type* $tmp2634 = (($fn2633) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp2635 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2634->subtypes);
    panda$core$Bit $tmp2636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2635, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2636.value);
    org$pandalanguage$pandac$Type* $tmp2638 = (($fn2637) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2639 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2638->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2641 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2639))->name, &$s2640);
    PANDA_ASSERT($tmp2641.value);
    panda$core$String* $tmp2643 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    range2642 = $tmp2643;
    org$pandalanguage$pandac$Type* $tmp2646 = (($fn2645) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2647 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2646->subtypes, ((panda$core$Int64) { 1 }));
    t2644 = ((org$pandalanguage$pandac$Type*) $tmp2647);
    panda$core$String* $tmp2649 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2644);
    llt2648 = $tmp2649;
    memset(&indexType2650, 0, sizeof(indexType2650));
    panda$core$Bit $tmp2651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2644->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2651.value) {
    {
        panda$core$Int64 $tmp2652 = panda$collections$Array$get_count$R$panda$core$Int64(t2644->subtypes);
        panda$core$Bit $tmp2653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2652, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2653.value);
        {
            panda$core$Object* $tmp2654 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2644->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2655 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2654));
            indexType2650 = $tmp2655;
        }
    }
    }
    else {
    {
        {
            indexType2650 = llt2648;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2657 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2644);
    cl2656 = $tmp2657;
    PANDA_ASSERT(((panda$core$Bit) { cl2656 != NULL }).value);
    panda$collections$ListView* $tmp2658 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2656);
    ITable* $tmp2659 = ((panda$collections$CollectionView*) $tmp2658)->$class->itable;
    while ($tmp2659->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2659 = $tmp2659->next;
    }
    $fn2661 $tmp2660 = $tmp2659->methods[0];
    panda$core$Int64 $tmp2662 = $tmp2660(((panda$collections$CollectionView*) $tmp2658));
    panda$core$Bit $tmp2663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2662, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2663.value);
    panda$collections$ListView* $tmp2665 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2656);
    ITable* $tmp2666 = $tmp2665->$class->itable;
    while ($tmp2666->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2666 = $tmp2666->next;
    }
    $fn2668 $tmp2667 = $tmp2666->methods[0];
    panda$core$Object* $tmp2669 = $tmp2667($tmp2665, ((panda$core$Int64) { 0 }));
    field2664 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2669);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2664);
    panda$core$String* $tmp2671 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2664->type);
    numberType2670 = $tmp2671;
    memset(&index2672, 0, sizeof(index2672));
    {
        $match$1464_92673 = p_target;
        panda$core$Bit $tmp2674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1464_92673->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2674.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2676 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1464_92673->$data + 16));
            variable2675 = *$tmp2676;
            {
                panda$core$String* $tmp2677 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable2675);
                index2672 = $tmp2677;
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp2679 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2678 = $tmp2679;
    panda$core$String* $tmp2680 = panda$core$String$convert$R$panda$core$String(numberType2670);
    panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2680, &$s2681);
    panda$core$String* $tmp2683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, start2678);
    panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2683, &$s2684);
    panda$core$String* $tmp2686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, range2642);
    panda$core$String* $tmp2688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2686, &$s2687);
    (($fn2689) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2688);
    panda$core$String* $tmp2691 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2690 = $tmp2691;
    org$pandalanguage$pandac$Type* $tmp2692 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2656);
    panda$core$String* $tmp2693 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2692);
    panda$core$String* $tmp2694 = panda$core$String$convert$R$panda$core$String($tmp2693);
    panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2694, &$s2695);
    panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2696, index2672);
    panda$core$String* $tmp2699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, &$s2698);
    panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2699, start2678);
    panda$core$String* $tmp2702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, &$s2701);
    (($fn2703) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2702);
    panda$core$String* $tmp2705 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2704 = $tmp2705;
    panda$core$String* $tmp2706 = panda$core$String$convert$R$panda$core$String(numberType2670);
    panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2706, &$s2707);
    panda$core$String* $tmp2709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2708, end2704);
    panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2709, &$s2710);
    panda$core$String* $tmp2712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2711, range2642);
    panda$core$String* $tmp2714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2712, &$s2713);
    (($fn2715) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2714);
    panda$core$String* $tmp2717 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2716 = $tmp2717;
    panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2718, inclusive2716);
    panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2719, &$s2720);
    panda$core$String* $tmp2722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, range2642);
    panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2722, &$s2723);
    (($fn2725) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2724);
    panda$core$String* $tmp2727 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2726 = $tmp2727;
    panda$core$String* $tmp2729 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2728 = $tmp2729;
    panda$core$String* $tmp2731 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2730 = $tmp2731;
    panda$core$String* $tmp2733 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2732 = $tmp2733;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2734 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2734, p_label, loopEnd2730, loopTest2732);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2734));
    panda$core$String* $tmp2736 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2735 = $tmp2736;
    panda$core$String* $tmp2738 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2737 = $tmp2738;
    memset(&signPrefix2739, 0, sizeof(signPrefix2739));
    memset(&unsigned2740, 0, sizeof(unsigned2740));
    panda$core$Bit $tmp2742 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2644)->name, &$s2741);
    if ($tmp2742.value) {
    {
        {
            signPrefix2739 = &$s2743;
        }
        {
            panda$core$String* $tmp2745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2744, numberType2670);
            unsigned2740 = $tmp2745;
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp2748 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2644)->name, &$s2747);
        bool $tmp2746 = $tmp2748.value;
        if ($tmp2746) goto $l2749;
        panda$core$Bit $tmp2751 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2644)->name, &$s2750);
        $tmp2746 = $tmp2751.value;
        $l2749:;
        panda$core$Bit $tmp2752 = { $tmp2746 };
        PANDA_ASSERT($tmp2752.value);
        {
            signPrefix2739 = &$s2753;
        }
        {
            unsigned2740 = numberType2670;
        }
    }
    }
    panda$core$String* $tmp2755 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2754 = $tmp2755;
    panda$core$String* $tmp2757 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2756 = $tmp2757;
    panda$core$String* $tmp2759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2758, inclusive2716);
    panda$core$String* $tmp2761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2759, &$s2760);
    panda$core$String* $tmp2762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2761, forwardEntryInclusive2754);
    panda$core$String* $tmp2764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2762, &$s2763);
    panda$core$String* $tmp2765 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2756);
    panda$core$String* $tmp2767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2765, &$s2766);
    panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2764, $tmp2767);
    (($fn2769) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2768);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2754, p_out);
    panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2770, start2678);
    panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2771, &$s2772);
    panda$core$String* $tmp2774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2773, end2704);
    panda$core$String* $tmp2776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2774, &$s2775);
    panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2776, loopStart2726);
    panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, &$s2778);
    panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2779, loopEnd2730);
    panda$core$String* $tmp2782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, &$s2781);
    (($fn2783) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2782);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2756, p_out);
    panda$core$String* $tmp2785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2784, start2678);
    panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2785, &$s2786);
    panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2787, end2704);
    panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2788, &$s2789);
    panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, loopStart2726);
    panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, &$s2792);
    panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, loopEnd2730);
    panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2794, &$s2795);
    (($fn2797) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2796);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2726, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2732, p_out);
    panda$core$String* $tmp2799 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2798 = $tmp2799;
    panda$core$String* $tmp2801 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2800 = $tmp2801;
    panda$core$String* $tmp2802 = panda$core$String$convert$R$panda$core$String(numberType2670);
    panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2802, &$s2803);
    panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, forwardDelta2800);
    panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, &$s2806);
    panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, end2704);
    panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, &$s2809);
    panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2810, index2672);
    panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2811, &$s2812);
    (($fn2814) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2813);
    panda$core$String* $tmp2816 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2815 = $tmp2816;
    panda$core$String* $tmp2818 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2817 = $tmp2818;
    panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2819, inclusive2716);
    panda$core$String* $tmp2822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, &$s2821);
    panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2822, forwardInclusiveLabel2815);
    panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, &$s2824);
    panda$core$String* $tmp2826 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2817);
    panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2826, &$s2827);
    panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2825, $tmp2828);
    (($fn2830) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2829);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2815, p_out);
    panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2831, unsigned2740);
    panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, &$s2833);
    panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, forwardDelta2800);
    panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, &$s2836);
    panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, loopInc2798);
    panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, &$s2839);
    panda$core$String* $tmp2841 = panda$core$String$convert$R$panda$core$String(loopEnd2730);
    panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2841, &$s2842);
    panda$core$String* $tmp2844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2840, $tmp2843);
    (($fn2845) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2844);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2817, p_out);
    panda$core$String* $tmp2847 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2846 = $tmp2847;
    panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2848, unsigned2740);
    panda$core$String* $tmp2851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2849, &$s2850);
    panda$core$String* $tmp2852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2851, forwardDelta2800);
    panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2852, &$s2853);
    panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2854, loopInc2798);
    panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2855, &$s2856);
    panda$core$String* $tmp2858 = panda$core$String$convert$R$panda$core$String(loopEnd2730);
    panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2858, &$s2859);
    panda$core$String* $tmp2861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2857, $tmp2860);
    (($fn2862) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2861);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2798, p_out);
    panda$core$String* $tmp2864 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2863 = $tmp2864;
    panda$core$String* $tmp2865 = panda$core$String$convert$R$panda$core$String(index2672);
    panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2865, &$s2866);
    (($fn2868) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2867);
    panda$core$String* $tmp2870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2869, loopStart2726);
    panda$core$String* $tmp2872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2870, &$s2871);
    (($fn2873) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2872);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2730, p_out);
    panda$core$Object* $tmp2874 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix2739));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveLabel2817));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$1464_92673));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inclusive2716));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned2740));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2678));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopBody2728));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopTest2732));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryInclusive2754));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2644));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardInclusiveLabel2815));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) end2704));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inc2863));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart2726));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntry2737));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexValuePtr2690));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd2730));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopInc2798));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2650));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llt2648));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveTest2846));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) numberType2670));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntry2735));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2672));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryExclusive2756));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field2664));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardDelta2800));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2656));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) range2642));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range2887;
    org$pandalanguage$pandac$Type* t2889;
    org$pandalanguage$pandac$Type* stepType2893;
    panda$core$String* llt2897;
    panda$core$String* indexType2899;
    org$pandalanguage$pandac$ClassDecl* cl2905;
    org$pandalanguage$pandac$FieldDecl* field2913;
    panda$core$String* numberType2919;
    panda$core$String* index2921;
    org$pandalanguage$pandac$IRNode* $match$1576_92922;
    org$pandalanguage$pandac$Variable* variable2924;
    panda$core$String* start2927;
    panda$core$String* indexValuePtr2939;
    panda$core$String* end2953;
    panda$core$String* step2965;
    org$pandalanguage$pandac$ClassDecl* stepCl2967;
    org$pandalanguage$pandac$FieldDecl* stepField2975;
    panda$core$String* inclusive2992;
    panda$core$String* loopStart3002;
    panda$core$String* loopBody3004;
    panda$core$String* loopEnd3006;
    panda$core$String* loopTest3008;
    panda$core$String* forwardEntry3011;
    panda$core$String* backwardEntry3013;
    panda$core$String* unsigned3015;
    panda$core$String* signPrefix3016;
    panda$core$String* direction3032;
    panda$core$String* forwardEntryInclusive3056;
    panda$core$String* forwardEntryExclusive3058;
    panda$core$String* backwardEntryInclusive3100;
    panda$core$String* backwardEntryExclusive3102;
    panda$core$String* backwardEntryExclusiveTest3130;
    panda$core$String* loopInc3146;
    panda$core$String* forwardLabel3148;
    panda$core$String* backwardLabel3150;
    panda$core$String* forwardDelta3163;
    panda$core$String* forwardInclusiveLabel3178;
    panda$core$String* forwardExclusiveLabel3180;
    panda$core$String* forwardExclusiveTest3212;
    panda$core$String* backwardDelta3232;
    panda$core$String* backwardInclusiveLabel3247;
    panda$core$String* backwardExclusiveLabel3249;
    panda$core$String* inc3301;
    org$pandalanguage$pandac$Type* $tmp2876 = (($fn2875) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp2877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2876->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2877.value);
    org$pandalanguage$pandac$Type* $tmp2879 = (($fn2878) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp2880 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2879->subtypes);
    panda$core$Bit $tmp2881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2880, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2881.value);
    org$pandalanguage$pandac$Type* $tmp2883 = (($fn2882) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2884 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2883->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2886 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2884))->name, &$s2885);
    PANDA_ASSERT($tmp2886.value);
    panda$core$String* $tmp2888 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    range2887 = $tmp2888;
    org$pandalanguage$pandac$Type* $tmp2891 = (($fn2890) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2892 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2891->subtypes, ((panda$core$Int64) { 1 }));
    t2889 = ((org$pandalanguage$pandac$Type*) $tmp2892);
    org$pandalanguage$pandac$Type* $tmp2895 = (($fn2894) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2896 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2895->subtypes, ((panda$core$Int64) { 2 }));
    stepType2893 = ((org$pandalanguage$pandac$Type*) $tmp2896);
    panda$core$String* $tmp2898 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2889);
    llt2897 = $tmp2898;
    memset(&indexType2899, 0, sizeof(indexType2899));
    panda$core$Bit $tmp2900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2889->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2900.value) {
    {
        panda$core$Int64 $tmp2901 = panda$collections$Array$get_count$R$panda$core$Int64(t2889->subtypes);
        panda$core$Bit $tmp2902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2901, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2902.value);
        {
            panda$core$Object* $tmp2903 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2889->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2904 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2903));
            indexType2899 = $tmp2904;
        }
    }
    }
    else {
    {
        {
            indexType2899 = llt2897;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2906 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2889);
    cl2905 = $tmp2906;
    PANDA_ASSERT(((panda$core$Bit) { cl2905 != NULL }).value);
    panda$collections$ListView* $tmp2907 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2905);
    ITable* $tmp2908 = ((panda$collections$CollectionView*) $tmp2907)->$class->itable;
    while ($tmp2908->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2908 = $tmp2908->next;
    }
    $fn2910 $tmp2909 = $tmp2908->methods[0];
    panda$core$Int64 $tmp2911 = $tmp2909(((panda$collections$CollectionView*) $tmp2907));
    panda$core$Bit $tmp2912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2911, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2912.value);
    panda$collections$ListView* $tmp2914 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2905);
    ITable* $tmp2915 = $tmp2914->$class->itable;
    while ($tmp2915->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2915 = $tmp2915->next;
    }
    $fn2917 $tmp2916 = $tmp2915->methods[0];
    panda$core$Object* $tmp2918 = $tmp2916($tmp2914, ((panda$core$Int64) { 0 }));
    field2913 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2918);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2913);
    panda$core$String* $tmp2920 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2913->type);
    numberType2919 = $tmp2920;
    memset(&index2921, 0, sizeof(index2921));
    {
        $match$1576_92922 = p_target;
        panda$core$Bit $tmp2923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1576_92922->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2923.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2925 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1576_92922->$data + 16));
            variable2924 = *$tmp2925;
            {
                panda$core$String* $tmp2926 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable2924);
                index2921 = $tmp2926;
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp2928 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2927 = $tmp2928;
    panda$core$String* $tmp2929 = panda$core$String$convert$R$panda$core$String(numberType2919);
    panda$core$String* $tmp2931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2929, &$s2930);
    panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2931, start2927);
    panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2932, &$s2933);
    panda$core$String* $tmp2935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2934, range2887);
    panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, &$s2936);
    (($fn2938) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2937);
    panda$core$String* $tmp2940 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2939 = $tmp2940;
    org$pandalanguage$pandac$Type* $tmp2941 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2905);
    panda$core$String* $tmp2942 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2941);
    panda$core$String* $tmp2943 = panda$core$String$convert$R$panda$core$String($tmp2942);
    panda$core$String* $tmp2945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2943, &$s2944);
    panda$core$String* $tmp2946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2945, index2921);
    panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2946, &$s2947);
    panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2948, start2927);
    panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2949, &$s2950);
    (($fn2952) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2951);
    panda$core$String* $tmp2954 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2953 = $tmp2954;
    panda$core$String* $tmp2955 = panda$core$String$convert$R$panda$core$String(numberType2919);
    panda$core$String* $tmp2957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2955, &$s2956);
    panda$core$String* $tmp2958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2957, end2953);
    panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2958, &$s2959);
    panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, range2887);
    panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2961, &$s2962);
    (($fn2964) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2963);
    panda$core$String* $tmp2966 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2965 = $tmp2966;
    org$pandalanguage$pandac$ClassDecl* $tmp2968 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, stepType2893);
    stepCl2967 = $tmp2968;
    PANDA_ASSERT(((panda$core$Bit) { stepCl2967 != NULL }).value);
    panda$collections$ListView* $tmp2969 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2967);
    ITable* $tmp2970 = ((panda$collections$CollectionView*) $tmp2969)->$class->itable;
    while ($tmp2970->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2970 = $tmp2970->next;
    }
    $fn2972 $tmp2971 = $tmp2970->methods[0];
    panda$core$Int64 $tmp2973 = $tmp2971(((panda$collections$CollectionView*) $tmp2969));
    panda$core$Bit $tmp2974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2973, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2974.value);
    panda$collections$ListView* $tmp2976 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2967);
    ITable* $tmp2977 = $tmp2976->$class->itable;
    while ($tmp2977->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2977 = $tmp2977->next;
    }
    $fn2979 $tmp2978 = $tmp2977->methods[0];
    panda$core$Object* $tmp2980 = $tmp2978($tmp2976, ((panda$core$Int64) { 0 }));
    stepField2975 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2980);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, stepField2975);
    panda$core$String* $tmp2981 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, stepField2975->type);
    panda$core$String* $tmp2982 = panda$core$String$convert$R$panda$core$String($tmp2981);
    panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, &$s2983);
    panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2984, step2965);
    panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2985, &$s2986);
    panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2987, range2887);
    panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2988, &$s2989);
    (($fn2991) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2990);
    panda$core$String* $tmp2993 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2992 = $tmp2993;
    panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2994, inclusive2992);
    panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, &$s2996);
    panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2997, range2887);
    panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2998, &$s2999);
    (($fn3001) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3000);
    panda$core$String* $tmp3003 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3002 = $tmp3003;
    panda$core$String* $tmp3005 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody3004 = $tmp3005;
    panda$core$String* $tmp3007 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3006 = $tmp3007;
    panda$core$String* $tmp3009 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest3008 = $tmp3009;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3010 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3010, p_label, loopEnd3006, loopTest3008);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3010));
    panda$core$String* $tmp3012 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry3011 = $tmp3012;
    panda$core$String* $tmp3014 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry3013 = $tmp3014;
    memset(&unsigned3015, 0, sizeof(unsigned3015));
    memset(&signPrefix3016, 0, sizeof(signPrefix3016));
    panda$core$Bit $tmp3018 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2893)->name, &$s3017);
    if ($tmp3018.value) {
    {
        {
            signPrefix3016 = &$s3019;
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp3022 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2893)->name, &$s3021);
        bool $tmp3020 = $tmp3022.value;
        if ($tmp3020) goto $l3023;
        panda$core$Bit $tmp3025 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2893)->name, &$s3024);
        $tmp3020 = $tmp3025.value;
        $l3023:;
        panda$core$Bit $tmp3026 = { $tmp3020 };
        PANDA_ASSERT($tmp3026.value);
        {
            signPrefix3016 = &$s3027;
        }
    }
    }
    panda$core$Bit $tmp3029 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(numberType2919, &$s3028);
    if ($tmp3029.value) {
    {
        {
            unsigned3015 = numberType2919;
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp3031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3030, numberType2919);
            unsigned3015 = $tmp3031;
        }
    }
    }
    memset(&direction3032, 0, sizeof(direction3032));
    panda$core$Bit $tmp3034 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix3016, &$s3033);
    if ($tmp3034.value) {
    {
        {
            panda$core$String* $tmp3035 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            direction3032 = $tmp3035;
        }
        panda$core$String* $tmp3037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3036, direction3032);
        panda$core$String* $tmp3039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3037, &$s3038);
        panda$core$String* $tmp3040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3039, step2965);
        panda$core$String* $tmp3042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3040, &$s3041);
        (($fn3043) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3042);
    }
    }
    else {
    {
        {
            direction3032 = &$s3044;
        }
    }
    }
    panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3045, direction3032);
    panda$core$String* $tmp3048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3046, &$s3047);
    panda$core$String* $tmp3049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3048, forwardEntry3011);
    panda$core$String* $tmp3051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3049, &$s3050);
    panda$core$String* $tmp3052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3051, backwardEntry3013);
    panda$core$String* $tmp3054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3052, &$s3053);
    (($fn3055) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3054);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry3011, p_out);
    panda$core$String* $tmp3057 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive3056 = $tmp3057;
    panda$core$String* $tmp3059 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive3058 = $tmp3059;
    panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3060, inclusive2992);
    panda$core$String* $tmp3063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3061, &$s3062);
    panda$core$String* $tmp3064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3063, forwardEntryInclusive3056);
    panda$core$String* $tmp3066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3064, &$s3065);
    panda$core$String* $tmp3067 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive3058);
    panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3067, &$s3068);
    panda$core$String* $tmp3070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3066, $tmp3069);
    (($fn3071) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3070);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive3056, p_out);
    panda$core$String* $tmp3073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3072, start2927);
    panda$core$String* $tmp3075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3073, &$s3074);
    panda$core$String* $tmp3076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3075, end2953);
    panda$core$String* $tmp3078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3076, &$s3077);
    panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3078, loopStart3002);
    panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3079, &$s3080);
    panda$core$String* $tmp3082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3081, loopEnd3006);
    panda$core$String* $tmp3084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3082, &$s3083);
    (($fn3085) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3084);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive3058, p_out);
    panda$core$String* $tmp3087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3086, start2927);
    panda$core$String* $tmp3089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3087, &$s3088);
    panda$core$String* $tmp3090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3089, end2953);
    panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3090, &$s3091);
    panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, loopStart3002);
    panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, &$s3094);
    panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, loopEnd3006);
    panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3097);
    (($fn3099) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3098);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry3013, p_out);
    panda$core$String* $tmp3101 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive3100 = $tmp3101;
    panda$core$String* $tmp3103 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive3102 = $tmp3103;
    panda$core$String* $tmp3105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3104, inclusive2992);
    panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3105, &$s3106);
    panda$core$String* $tmp3108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3107, backwardEntryInclusive3100);
    panda$core$String* $tmp3110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3108, &$s3109);
    panda$core$String* $tmp3111 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive3102);
    panda$core$String* $tmp3113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3111, &$s3112);
    panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3110, $tmp3113);
    (($fn3115) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3114);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive3100, p_out);
    panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3116, start2927);
    panda$core$String* $tmp3119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3117, &$s3118);
    panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, end2953);
    panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3120, &$s3121);
    panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3122, loopStart3002);
    panda$core$String* $tmp3125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3123, &$s3124);
    panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3125, loopEnd3006);
    panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3126, &$s3127);
    (($fn3129) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3128);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive3102, p_out);
    panda$core$String* $tmp3131 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest3130 = $tmp3131;
    panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3132, start2927);
    panda$core$String* $tmp3135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3133, &$s3134);
    panda$core$String* $tmp3136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3135, end2953);
    panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3136, &$s3137);
    panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3138, loopStart3002);
    panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3139, &$s3140);
    panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, loopEnd3006);
    panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3142, &$s3143);
    (($fn3145) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3144);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3002, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest3008, p_out);
    panda$core$String* $tmp3147 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc3146 = $tmp3147;
    panda$core$String* $tmp3149 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel3148 = $tmp3149;
    panda$core$String* $tmp3151 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel3150 = $tmp3151;
    panda$core$String* $tmp3153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3152, direction3032);
    panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3153, &$s3154);
    panda$core$String* $tmp3156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, forwardLabel3148);
    panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3156, &$s3157);
    panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, backwardLabel3150);
    panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3159, &$s3160);
    (($fn3162) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3161);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel3148, p_out);
    panda$core$String* $tmp3164 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta3163 = $tmp3164;
    panda$core$String* $tmp3165 = panda$core$String$convert$R$panda$core$String(numberType2919);
    panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3165, &$s3166);
    panda$core$String* $tmp3168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3167, forwardDelta3163);
    panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3168, &$s3169);
    panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, end2953);
    panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3171, &$s3172);
    panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3173, index2921);
    panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, &$s3175);
    (($fn3177) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3176);
    panda$core$String* $tmp3179 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel3178 = $tmp3179;
    panda$core$String* $tmp3181 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel3180 = $tmp3181;
    panda$core$String* $tmp3183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3182, inclusive2992);
    panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3183, &$s3184);
    panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3185, forwardInclusiveLabel3178);
    panda$core$String* $tmp3188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3186, &$s3187);
    panda$core$String* $tmp3189 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel3180);
    panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3189, &$s3190);
    panda$core$String* $tmp3192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3188, $tmp3191);
    (($fn3193) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3192);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel3178, p_out);
    panda$core$String* $tmp3195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3194, unsigned3015);
    panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3195, &$s3196);
    panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, forwardDelta3163);
    panda$core$String* $tmp3200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3198, &$s3199);
    panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3200, step2965);
    panda$core$String* $tmp3203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3201, &$s3202);
    panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3203, loopInc3146);
    panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3204, &$s3205);
    panda$core$String* $tmp3207 = panda$core$String$convert$R$panda$core$String(loopEnd3006);
    panda$core$String* $tmp3209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3207, &$s3208);
    panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3206, $tmp3209);
    (($fn3211) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3210);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel3180, p_out);
    panda$core$String* $tmp3213 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest3212 = $tmp3213;
    panda$core$String* $tmp3215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3214, unsigned3015);
    panda$core$String* $tmp3217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3215, &$s3216);
    panda$core$String* $tmp3218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3217, forwardDelta3163);
    panda$core$String* $tmp3220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3218, &$s3219);
    panda$core$String* $tmp3221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3220, step2965);
    panda$core$String* $tmp3223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3221, &$s3222);
    panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3223, loopInc3146);
    panda$core$String* $tmp3226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3224, &$s3225);
    panda$core$String* $tmp3227 = panda$core$String$convert$R$panda$core$String(loopEnd3006);
    panda$core$String* $tmp3229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3227, &$s3228);
    panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3226, $tmp3229);
    (($fn3231) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3230);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel3150, p_out);
    panda$core$String* $tmp3233 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta3232 = $tmp3233;
    panda$core$String* $tmp3234 = panda$core$String$convert$R$panda$core$String(numberType2919);
    panda$core$String* $tmp3236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3234, &$s3235);
    panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3236, backwardDelta3232);
    panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3237, &$s3238);
    panda$core$String* $tmp3240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3239, index2921);
    panda$core$String* $tmp3242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3240, &$s3241);
    panda$core$String* $tmp3243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3242, end2953);
    panda$core$String* $tmp3245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3243, &$s3244);
    (($fn3246) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3245);
    panda$core$String* $tmp3248 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel3247 = $tmp3248;
    panda$core$String* $tmp3250 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel3249 = $tmp3250;
    panda$core$String* $tmp3252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3251, inclusive2992);
    panda$core$String* $tmp3254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3252, &$s3253);
    panda$core$String* $tmp3255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3254, backwardInclusiveLabel3247);
    panda$core$String* $tmp3257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3255, &$s3256);
    panda$core$String* $tmp3258 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel3249);
    panda$core$String* $tmp3260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3258, &$s3259);
    panda$core$String* $tmp3261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3257, $tmp3260);
    (($fn3262) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3261);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel3247, p_out);
    panda$core$String* $tmp3264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3263, unsigned3015);
    panda$core$String* $tmp3266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3264, &$s3265);
    panda$core$String* $tmp3267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3266, backwardDelta3232);
    panda$core$String* $tmp3269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3267, &$s3268);
    panda$core$String* $tmp3270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3269, step2965);
    panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3270, &$s3271);
    panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3272, loopInc3146);
    panda$core$String* $tmp3275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3273, &$s3274);
    panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3276, loopEnd3006);
    panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3277, &$s3278);
    panda$core$String* $tmp3280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3275, $tmp3279);
    (($fn3281) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3280);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel3249, p_out);
    panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3282, unsigned3015);
    panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, &$s3284);
    panda$core$String* $tmp3286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3285, backwardDelta3232);
    panda$core$String* $tmp3288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3286, &$s3287);
    panda$core$String* $tmp3289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3288, step2965);
    panda$core$String* $tmp3291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3289, &$s3290);
    panda$core$String* $tmp3292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3291, loopInc3146);
    panda$core$String* $tmp3294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3292, &$s3293);
    panda$core$String* $tmp3296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3295, loopEnd3006);
    panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3296, &$s3297);
    panda$core$String* $tmp3299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3294, $tmp3298);
    (($fn3300) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3299);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc3146, p_out);
    panda$core$String* $tmp3302 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3301 = $tmp3302;
    panda$core$String* $tmp3303 = panda$core$String$convert$R$panda$core$String(index2921);
    panda$core$String* $tmp3305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3303, &$s3304);
    panda$core$String* $tmp3306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3305, step2965);
    panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3306, &$s3307);
    (($fn3309) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3308);
    panda$core$String* $tmp3311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3310, loopStart3002);
    panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3311, &$s3312);
    (($fn3314) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3313);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3006, p_out);
    panda$core$Object* $tmp3315 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardInclusiveLabel3247));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix3016));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveLabel3180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inclusive2992));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned3015));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardLabel3150));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryExclusiveTest3130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2927));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopBody3004));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardLabel3148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopTest3008));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryExclusive3102));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryInclusive3056));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardExclusiveLabel3249));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2889));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardInclusiveLabel3178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) end2953));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepCl2967));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inc3301));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2965));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3002));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntry3013));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexValuePtr2939));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopInc3146));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepType2893));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3006));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepField2975));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType2899));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llt2897));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardDelta3232));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveTest3212));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) numberType2919));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntry3011));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2921));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryExclusive3058));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) direction3032));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field2913));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$1576_92922));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardDelta3163));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2905));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryInclusive3100));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) range2887));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Type* $tmp3317 = (($fn3316) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3318 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit($tmp3317);
    if ($tmp3318.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_label, p_target, p_list, p_statements, p_out);
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp3320 = (($fn3319) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3321 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit($tmp3320);
    if ($tmp3321.value) {
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
    panda$core$String* loopStart3326;
    panda$core$String* loopEnd3328;
    org$pandalanguage$pandac$Type* $tmp3323 = (($fn3322) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3324 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3325 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3323, $tmp3324);
    PANDA_ASSERT($tmp3325.value);
    panda$core$String* $tmp3327 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3326 = $tmp3327;
    panda$core$String* $tmp3329 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3328 = $tmp3329;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3330 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3330, p_label, loopEnd3328, loopStart3326);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3330));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3326, p_out);
    panda$core$String* $tmp3332 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3331, $tmp3332);
    panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3333, &$s3334);
    panda$core$String* $tmp3336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, loopEnd3328);
    panda$core$String* $tmp3338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3336, &$s3337);
    (($fn3339) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3338);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3340, loopStart3326);
    panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, &$s3342);
    (($fn3344) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3343);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3328, p_out);
    panda$core$Object* $tmp3345 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3328));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3326));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3350;
    panda$core$String* loopEnd3352;
    org$pandalanguage$pandac$Type* $tmp3347 = (($fn3346) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3348 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3349 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3347, $tmp3348);
    PANDA_ASSERT($tmp3349.value);
    panda$core$String* $tmp3351 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3350 = $tmp3351;
    panda$core$String* $tmp3353 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3352 = $tmp3353;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3354 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3354, p_label, loopEnd3352, loopStart3350);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3354));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3350, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3356 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3355, $tmp3356);
    panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3357, &$s3358);
    panda$core$String* $tmp3360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3359, loopStart3350);
    panda$core$String* $tmp3362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3360, &$s3361);
    (($fn3363) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3362);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3352, p_out);
    panda$core$Object* $tmp3364 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3352));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3350));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3365;
    panda$core$String* loopEnd3367;
    panda$core$String* $tmp3366 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3365 = $tmp3366;
    panda$core$String* $tmp3368 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3367 = $tmp3368;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3369 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3369, p_label, loopEnd3367, loopStart3365);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3369));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3365, p_out);
    (($fn3371) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3370);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    (($fn3373) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3372);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3367, p_out);
    panda$core$Object* $tmp3374 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd3367));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart3365));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1778_93375;
    org$pandalanguage$pandac$Variable* v3377;
    {
        $match$1778_93375 = p_target;
        panda$core$Bit $tmp3376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1778_93375->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp3376.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3378 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1778_93375->$data + 16));
            v3377 = *$tmp3378;
            panda$core$String* $tmp3379 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3377->type);
            panda$core$String* $tmp3380 = panda$core$String$convert$R$panda$core$String($tmp3379);
            panda$core$String* $tmp3382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3380, &$s3381);
            panda$core$String* $tmp3383 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3377);
            panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3382, $tmp3383);
            panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3384, &$s3385);
            (($fn3387) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3386);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3388 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3377);
                panda$core$String* $tmp3389 = panda$core$String$convert$R$panda$core$String($tmp3388);
                panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3389, &$s3390);
                panda$core$String* $tmp3392 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3391, $tmp3392);
                panda$core$String* $tmp3395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3393, &$s3394);
                (($fn3396) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3395);
            }
            }
            else {
            {
                panda$core$String* $tmp3398 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3377);
                panda$core$String* $tmp3399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3397, $tmp3398);
                panda$core$String* $tmp3401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3399, &$s3400);
                panda$core$String* $tmp3402 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3377);
                panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3401, $tmp3402);
                panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3403, &$s3404);
                (($fn3406) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3405);
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
    panda$collections$Iterator* decl$Iter3407;
    org$pandalanguage$pandac$IRNode* decl3419;
    org$pandalanguage$pandac$IRNode* $match$1794_133424;
    org$pandalanguage$pandac$IRNode* target3426;
    org$pandalanguage$pandac$IRNode* value3428;
    {
        ITable* $tmp3408 = ((panda$collections$Iterable*) p_decls)->$class->itable;
        while ($tmp3408->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3408 = $tmp3408->next;
        }
        $fn3410 $tmp3409 = $tmp3408->methods[0];
        panda$collections$Iterator* $tmp3411 = $tmp3409(((panda$collections$Iterable*) p_decls));
        decl$Iter3407 = $tmp3411;
        $l3412:;
        ITable* $tmp3414 = decl$Iter3407->$class->itable;
        while ($tmp3414->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3414 = $tmp3414->next;
        }
        $fn3416 $tmp3415 = $tmp3414->methods[0];
        panda$core$Bit $tmp3417 = $tmp3415(decl$Iter3407);
        panda$core$Bit $tmp3418 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3417);
        if (!$tmp3418.value) goto $l3413;
        {
            ITable* $tmp3420 = decl$Iter3407->$class->itable;
            while ($tmp3420->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3420 = $tmp3420->next;
            }
            $fn3422 $tmp3421 = $tmp3420->methods[1];
            panda$core$Object* $tmp3423 = $tmp3421(decl$Iter3407);
            decl3419 = ((org$pandalanguage$pandac$IRNode*) $tmp3423);
            {
                $match$1794_133424 = decl3419;
                panda$core$Bit $tmp3425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_133424->$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp3425.value) {
                {
                    org$pandalanguage$pandac$IRNode** $tmp3427 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1794_133424->$data + 0));
                    target3426 = *$tmp3427;
                    org$pandalanguage$pandac$IRNode** $tmp3429 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1794_133424->$data + 8));
                    value3428 = *$tmp3429;
                    org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, target3426, value3428, p_out);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l3412;
        $l3413:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3411));
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1804_93430;
    org$pandalanguage$pandac$Variable* v3435;
    org$pandalanguage$pandac$IRNode* base3439;
    org$pandalanguage$pandac$FieldDecl* field3441;
    panda$core$String* baseRef3443;
    org$pandalanguage$pandac$IRNode* value3452;
    panda$core$Int64 id3454;
    panda$core$String* result3456;
    org$pandalanguage$pandac$IRNode* value3460;
    org$pandalanguage$pandac$ChoiceEntry* ce3462;
    panda$core$Int64 field3464;
    org$pandalanguage$pandac$FieldDecl* data3466;
    org$pandalanguage$pandac$IRNode* fieldRef3470;
    panda$core$String* base3474;
    panda$core$Int64 size3476;
    panda$core$Int64 offset3478;
    panda$core$String* result3480;
    {
        $match$1804_93430 = p_lvalue;
        panda$core$Bit $tmp3431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1804_93430->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp3431.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3432 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3433 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3432, p_out);
            return $tmp3433;
        }
        }
        else {
        panda$core$Bit $tmp3434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1804_93430->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp3434.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3436 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1804_93430->$data + 16));
            v3435 = *$tmp3436;
            panda$core$String* $tmp3437 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3435);
            return $tmp3437;
        }
        }
        else {
        panda$core$Bit $tmp3438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1804_93430->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp3438.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3440 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1804_93430->$data + 24));
            base3439 = *$tmp3440;
            org$pandalanguage$pandac$FieldDecl** $tmp3442 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1804_93430->$data + 32));
            field3441 = *$tmp3442;
            panda$core$String* $tmp3444 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3439, p_out);
            baseRef3443 = $tmp3444;
            panda$core$String* $tmp3445 = panda$core$String$convert$R$panda$core$String(baseRef3443);
            panda$core$String* $tmp3447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3445, &$s3446);
            panda$core$String* $tmp3448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3447, ((org$pandalanguage$pandac$Symbol*) field3441)->name);
            panda$core$String* $tmp3450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3448, &$s3449);
            return $tmp3450;
        }
        }
        else {
        panda$core$Bit $tmp3451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1804_93430->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3451.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3453 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1804_93430->$data + 0));
            value3452 = *$tmp3453;
            panda$core$Int64* $tmp3455 = ((panda$core$Int64*) ((char*) $match$1804_93430->$data + 8));
            id3454 = *$tmp3455;
            panda$core$String* $tmp3457 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value3452, p_out);
            result3456 = $tmp3457;
            panda$core$Int64$wrapper* $tmp3458;
            $tmp3458 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3458->value = id3454;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp3458), ((panda$core$Object*) result3456));
            return result3456;
        }
        }
        else {
        panda$core$Bit $tmp3459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1804_93430->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp3459.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3461 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1804_93430->$data + 16));
            value3460 = *$tmp3461;
            org$pandalanguage$pandac$ChoiceEntry** $tmp3463 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$1804_93430->$data + 24));
            ce3462 = *$tmp3463;
            panda$core$Int64* $tmp3465 = ((panda$core$Int64*) ((char*) $match$1804_93430->$data + 32));
            field3464 = *$tmp3465;
            panda$core$Object* $tmp3467 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce3462->owner->fields, ((panda$core$Int64) { 1 }));
            data3466 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3467);
            panda$core$Bit $tmp3469 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) data3466)->name, &$s3468);
            PANDA_ASSERT($tmp3469.value);
            org$pandalanguage$pandac$IRNode* $tmp3471 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
            org$pandalanguage$pandac$Position $tmp3473 = (($fn3472) p_lvalue->$class->vtable[3])(p_lvalue);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp3471, ((panda$core$Int64) { 15 }), $tmp3473, data3466->type, value3460, data3466);
            fieldRef3470 = $tmp3471;
            panda$core$String* $tmp3475 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, fieldRef3470, p_out);
            base3474 = $tmp3475;
            panda$core$Int64 $tmp3477 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3462->owner);
            size3476 = $tmp3477;
            panda$core$Int64 $tmp3479 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3462, field3464);
            offset3478 = $tmp3479;
            panda$core$String* $tmp3481 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result3480 = $tmp3481;
            org$pandalanguage$pandac$Type* $tmp3483 = (($fn3482) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3484 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3483);
            panda$core$String* $tmp3485 = panda$core$String$convert$R$panda$core$String($tmp3484);
            panda$core$String* $tmp3487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3485, &$s3486);
            panda$core$String* $tmp3488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3487, result3480);
            panda$core$String* $tmp3490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3488, &$s3489);
            org$pandalanguage$pandac$Type* $tmp3492 = (($fn3491) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3493 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3492);
            panda$core$String* $tmp3494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3490, $tmp3493);
            panda$core$String* $tmp3496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3494, &$s3495);
            panda$core$String* $tmp3498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3497, base3474);
            panda$core$String* $tmp3500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3498, &$s3499);
            panda$core$Int64$wrapper* $tmp3501;
            $tmp3501 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3501->value = offset3478;
            panda$core$String* $tmp3502 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3500, ((panda$core$Object*) $tmp3501));
            panda$core$String* $tmp3504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3502, &$s3503);
            panda$core$String* $tmp3505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3496, $tmp3504);
            (($fn3506) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3505);
            panda$core$String* $tmp3508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3507, result3480);
            panda$core$String* $tmp3510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3508, &$s3509);
            return $tmp3510;
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
    panda$core$String* $tmp3511 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$String* $tmp3512 = panda$core$String$convert$R$panda$core$String($tmp3511);
    panda$core$String* $tmp3514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3512, &$s3513);
    panda$core$String* $tmp3515 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$String* $tmp3516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3514, $tmp3515);
    panda$core$String* $tmp3518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3516, &$s3517);
    (($fn3519) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3518);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit) { p_value != NULL }).value) {
    {
        panda$core$String* $tmp3521 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
        panda$core$String* $tmp3522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3520, $tmp3521);
        panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3522, &$s3523);
        (($fn3525) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3524);
    }
    }
    else {
    {
        (($fn3527) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3526);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3531;
    panda$core$Int64 $tmp3528 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3529 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3528, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3529.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3530 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3530);
    }
    }
    panda$core$Int64 $tmp3532 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3531, ((panda$core$Int64) { 0 }), $tmp3532, ((panda$core$Bit) { false }));
    int64_t $tmp3534 = $tmp3531.min.value;
    panda$core$Int64 i3533 = { $tmp3534 };
    int64_t $tmp3536 = $tmp3531.max.value;
    bool $tmp3537 = $tmp3531.inclusive.value;
    if ($tmp3537) goto $l3544; else goto $l3545;
    $l3544:;
    if ($tmp3534 <= $tmp3536) goto $l3538; else goto $l3540;
    $l3545:;
    if ($tmp3534 < $tmp3536) goto $l3538; else goto $l3540;
    $l3538:;
    {
        panda$core$Object* $tmp3546 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3533);
        panda$core$Bit $tmp3550;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3546)->loopLabel != NULL }).value) goto $l3547; else goto $l3548;
        $l3547:;
        panda$core$Bit $tmp3551 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3546)->loopLabel, p_name);
        $tmp3550 = $tmp3551;
        goto $l3549;
        $l3548:;
        $tmp3550 = ((panda$core$Bit) { false });
        goto $l3549;
        $l3549:;
        if ($tmp3550.value) {
        {
            panda$core$Object* $tmp3552 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3533);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3552);
        }
        }
    }
    $l3541:;
    int64_t $tmp3554 = $tmp3536 - i3533.value;
    if ($tmp3537) goto $l3555; else goto $l3556;
    $l3555:;
    if ((uint64_t) $tmp3554 >= 1) goto $l3553; else goto $l3540;
    $l3556:;
    if ((uint64_t) $tmp3554 > 1) goto $l3553; else goto $l3540;
    $l3553:;
    i3533.value += 1;
    goto $l3538;
    $l3540:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3559;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3560 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    desc3559 = $tmp3560;
    panda$core$String* $tmp3562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3561, desc3559->breakLabel);
    panda$core$String* $tmp3564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3562, &$s3563);
    (($fn3565) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3564);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc3559));
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3566;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3567 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    desc3566 = $tmp3567;
    panda$core$String* $tmp3569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3568, desc3566->continueLabel);
    panda$core$String* $tmp3571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3569, &$s3570);
    (($fn3572) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3571);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc3566));
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_message, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3574 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3573, $tmp3574);
    panda$core$String* $tmp3577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3575, &$s3576);
    (($fn3578) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3577);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$collections$ImmutableArray* p_whens, panda$collections$ImmutableArray* p_other, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* w$Iter3586;
    org$pandalanguage$pandac$IRNode* w3598;
    org$pandalanguage$pandac$IRNode* $match$1878_133603;
    panda$collections$ImmutableArray* tests3605;
    panda$collections$ImmutableArray* statements3607;
    panda$collections$Iterator* test$Iter3609;
    org$pandalanguage$pandac$IRNode* test3621;
    panda$core$String* $tmp3580 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    panda$core$String* $tmp3581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3579, $tmp3580);
    panda$core$String* $tmp3583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3581, &$s3582);
    (($fn3584) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3583);
    panda$core$Int64 $tmp3585 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3585;
    {
        ITable* $tmp3587 = ((panda$collections$Iterable*) p_whens)->$class->itable;
        while ($tmp3587->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3587 = $tmp3587->next;
        }
        $fn3589 $tmp3588 = $tmp3587->methods[0];
        panda$collections$Iterator* $tmp3590 = $tmp3588(((panda$collections$Iterable*) p_whens));
        w$Iter3586 = $tmp3590;
        $l3591:;
        ITable* $tmp3593 = w$Iter3586->$class->itable;
        while ($tmp3593->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3593 = $tmp3593->next;
        }
        $fn3595 $tmp3594 = $tmp3593->methods[0];
        panda$core$Bit $tmp3596 = $tmp3594(w$Iter3586);
        panda$core$Bit $tmp3597 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3596);
        if (!$tmp3597.value) goto $l3592;
        {
            ITable* $tmp3599 = w$Iter3586->$class->itable;
            while ($tmp3599->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3599 = $tmp3599->next;
            }
            $fn3601 $tmp3600 = $tmp3599->methods[1];
            panda$core$Object* $tmp3602 = $tmp3600(w$Iter3586);
            w3598 = ((org$pandalanguage$pandac$IRNode*) $tmp3602);
            {
                $match$1878_133603 = w3598;
                panda$core$Bit $tmp3604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133603->$rawValue, ((panda$core$Int64) { 43 }));
                if ($tmp3604.value) {
                {
                    panda$collections$ImmutableArray** $tmp3606 = ((panda$collections$ImmutableArray**) ((char*) $match$1878_133603->$data + 16));
                    tests3605 = *$tmp3606;
                    panda$collections$ImmutableArray** $tmp3608 = ((panda$collections$ImmutableArray**) ((char*) $match$1878_133603->$data + 24));
                    statements3607 = *$tmp3608;
                    {
                        ITable* $tmp3610 = ((panda$collections$Iterable*) tests3605)->$class->itable;
                        while ($tmp3610->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3610 = $tmp3610->next;
                        }
                        $fn3612 $tmp3611 = $tmp3610->methods[0];
                        panda$collections$Iterator* $tmp3613 = $tmp3611(((panda$collections$Iterable*) tests3605));
                        test$Iter3609 = $tmp3613;
                        $l3614:;
                        ITable* $tmp3616 = test$Iter3609->$class->itable;
                        while ($tmp3616->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3616 = $tmp3616->next;
                        }
                        $fn3618 $tmp3617 = $tmp3616->methods[0];
                        panda$core$Bit $tmp3619 = $tmp3617(test$Iter3609);
                        panda$core$Bit $tmp3620 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3619);
                        if (!$tmp3620.value) goto $l3615;
                        {
                            ITable* $tmp3622 = test$Iter3609->$class->itable;
                            while ($tmp3622->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3622 = $tmp3622->next;
                            }
                            $fn3624 $tmp3623 = $tmp3622->methods[1];
                            panda$core$Object* $tmp3625 = $tmp3623(test$Iter3609);
                            test3621 = ((org$pandalanguage$pandac$IRNode*) $tmp3625);
                            panda$core$UInt64 $tmp3627 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, test3621);
                            panda$core$UInt64$wrapper* $tmp3628;
                            $tmp3628 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
                            $tmp3628->value = $tmp3627;
                            panda$core$String* $tmp3629 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3626, ((panda$core$Object*) $tmp3628));
                            panda$core$String* $tmp3631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3629, &$s3630);
                            (($fn3632) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3631);
                        }
                        goto $l3614;
                        $l3615:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3613));
                    }
                    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3607, p_out);
                    (($fn3634) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3633);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l3591;
        $l3592:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3590));
    }
    if (((panda$core$Bit) { p_other != NULL }).value) {
    {
        (($fn3636) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3635);
        org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_other, p_out);
    }
    }
    panda$core$Int64 $tmp3637 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3637;
    (($fn3639) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3638);
}
void org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_clear, panda$io$IndentedOutputStream* p_out) {
}
void org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$core$Bit$panda$io$IndentedOutputStream(self, ((panda$core$Bit) { true }), p_out);
}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1914_93640;
    org$pandalanguage$pandac$IRNode* left3642;
    org$pandalanguage$pandac$parser$Token$Kind op3644;
    org$pandalanguage$pandac$IRNode* right3646;
    panda$collections$ImmutableArray* statements3649;
    org$pandalanguage$pandac$Type* target3652;
    org$pandalanguage$pandac$MethodRef* mref3654;
    panda$collections$ImmutableArray* args3656;
    org$pandalanguage$pandac$IRNode* base3659;
    org$pandalanguage$pandac$IRNode* stmt3661;
    org$pandalanguage$pandac$IRNode* test3665;
    panda$collections$ImmutableArray* ifTrue3667;
    org$pandalanguage$pandac$IRNode* ifFalse3669;
    panda$core$String* label3672;
    org$pandalanguage$pandac$IRNode* target3674;
    org$pandalanguage$pandac$IRNode* list3676;
    panda$collections$ImmutableArray* statements3678;
    panda$core$String* label3681;
    org$pandalanguage$pandac$IRNode* test3683;
    panda$collections$ImmutableArray* statements3685;
    panda$core$String* label3688;
    panda$collections$ImmutableArray* statements3690;
    org$pandalanguage$pandac$IRNode* test3692;
    panda$core$String* label3695;
    panda$collections$ImmutableArray* statements3697;
    org$pandalanguage$pandac$Variable$Kind kind3700;
    panda$collections$ImmutableArray* decls3702;
    org$pandalanguage$pandac$IRNode* value3705;
    panda$core$String* label3708;
    panda$core$String* label3711;
    org$pandalanguage$pandac$IRNode* test3714;
    org$pandalanguage$pandac$IRNode* msg3716;
    org$pandalanguage$pandac$IRNode* value3719;
    panda$collections$ImmutableArray* whens3721;
    panda$collections$ImmutableArray* other3723;
    {
        $match$1914_93640 = p_stmt;
        panda$core$Bit $tmp3641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93640->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp3641.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3643 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93640->$data + 24));
            left3642 = *$tmp3643;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3645 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1914_93640->$data + 32));
            op3644 = *$tmp3645;
            org$pandalanguage$pandac$IRNode** $tmp3647 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93640->$data + 40));
            right3646 = *$tmp3647;
            org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, left3642, right3646, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93640->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp3648.value) {
        {
            panda$collections$ImmutableArray** $tmp3650 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93640->$data + 16));
            statements3649 = *$tmp3650;
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3649, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93640->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp3651.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3653 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1914_93640->$data + 16));
            target3652 = *$tmp3653;
            org$pandalanguage$pandac$MethodRef** $tmp3655 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1914_93640->$data + 24));
            mref3654 = *$tmp3655;
            panda$collections$ImmutableArray** $tmp3657 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93640->$data + 32));
            args3656 = *$tmp3657;
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, target3652, mref3654, args3656, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93640->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp3658.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3660 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93640->$data + 0));
            base3659 = *$tmp3660;
            org$pandalanguage$pandac$IRNode** $tmp3662 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93640->$data + 8));
            stmt3661 = *$tmp3662;
            panda$core$String* $tmp3663 = org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3659, stmt3661, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93640->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp3664.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3666 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93640->$data + 16));
            test3665 = *$tmp3666;
            panda$collections$ImmutableArray** $tmp3668 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93640->$data + 24));
            ifTrue3667 = *$tmp3668;
            org$pandalanguage$pandac$IRNode** $tmp3670 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93640->$data + 32));
            ifFalse3669 = *$tmp3670;
            org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3665, ifTrue3667, ifFalse3669, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93640->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp3671.value) {
        {
            panda$core$String** $tmp3673 = ((panda$core$String**) ((char*) $match$1914_93640->$data + 16));
            label3672 = *$tmp3673;
            org$pandalanguage$pandac$IRNode** $tmp3675 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93640->$data + 24));
            target3674 = *$tmp3675;
            org$pandalanguage$pandac$IRNode** $tmp3677 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93640->$data + 32));
            list3676 = *$tmp3677;
            panda$collections$ImmutableArray** $tmp3679 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93640->$data + 40));
            statements3678 = *$tmp3679;
            org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3672, target3674, list3676, statements3678, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93640->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp3680.value) {
        {
            panda$core$String** $tmp3682 = ((panda$core$String**) ((char*) $match$1914_93640->$data + 16));
            label3681 = *$tmp3682;
            org$pandalanguage$pandac$IRNode** $tmp3684 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93640->$data + 24));
            test3683 = *$tmp3684;
            panda$collections$ImmutableArray** $tmp3686 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93640->$data + 32));
            statements3685 = *$tmp3686;
            org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3681, test3683, statements3685, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93640->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp3687.value) {
        {
            panda$core$String** $tmp3689 = ((panda$core$String**) ((char*) $match$1914_93640->$data + 16));
            label3688 = *$tmp3689;
            panda$collections$ImmutableArray** $tmp3691 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93640->$data + 24));
            statements3690 = *$tmp3691;
            org$pandalanguage$pandac$IRNode** $tmp3693 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93640->$data + 32));
            test3692 = *$tmp3693;
            org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, label3688, statements3690, test3692, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93640->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp3694.value) {
        {
            panda$core$String** $tmp3696 = ((panda$core$String**) ((char*) $match$1914_93640->$data + 16));
            label3695 = *$tmp3696;
            panda$collections$ImmutableArray** $tmp3698 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93640->$data + 24));
            statements3697 = *$tmp3698;
            org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3695, statements3697, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93640->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp3699.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp3701 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$1914_93640->$data + 16));
            kind3700 = *$tmp3701;
            panda$collections$ImmutableArray** $tmp3703 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93640->$data + 24));
            decls3702 = *$tmp3703;
            org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, kind3700, decls3702, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93640->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp3704.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3706 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93640->$data + 16));
            value3705 = *$tmp3706;
            org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, value3705, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93640->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp3707.value) {
        {
            panda$core$String** $tmp3709 = ((panda$core$String**) ((char*) $match$1914_93640->$data + 16));
            label3708 = *$tmp3709;
            org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3708, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93640->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp3710.value) {
        {
            panda$core$String** $tmp3712 = ((panda$core$String**) ((char*) $match$1914_93640->$data + 16));
            label3711 = *$tmp3712;
            org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3711, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93640->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp3713.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3715 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93640->$data + 16));
            test3714 = *$tmp3715;
            org$pandalanguage$pandac$IRNode** $tmp3717 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93640->$data + 24));
            msg3716 = *$tmp3717;
            org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3714, msg3716, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1914_93640->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp3718.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3720 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1914_93640->$data + 16));
            value3719 = *$tmp3720;
            panda$collections$ImmutableArray** $tmp3722 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93640->$data + 24));
            whens3721 = *$tmp3722;
            panda$collections$ImmutableArray** $tmp3724 = ((panda$collections$ImmutableArray**) ((char*) $match$1914_93640->$data + 32));
            other3723 = *$tmp3724;
            org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(self, value3719, whens3721, other3723, p_out);
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
    panda$core$String* result3725;
    panda$core$String* tmp633735;
    panda$core$String* tmp643738;
    org$pandalanguage$pandac$Type* $tmp3726 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3727 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3726);
    result3725 = $tmp3727;
    panda$core$Bit $tmp3729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp3728 = $tmp3729.value;
    if (!$tmp3728) goto $l3730;
    panda$core$Bit $tmp3732 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3725, &$s3731);
    panda$core$Bit $tmp3733 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3732);
    $tmp3728 = $tmp3733.value;
    $l3730:;
    panda$core$Bit $tmp3734 = { $tmp3728 };
    if ($tmp3734.value) {
    {
        {
            panda$core$String* $tmp3737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3725, &$s3736);
            tmp633735 = $tmp3737;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3725));
            return tmp633735;
        }
    }
    }
    {
        tmp643738 = result3725;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3725));
        return tmp643738;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    panda$core$String* separator3750;
    panda$collections$Iterator* p$Iter3760;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3772;
    panda$io$MemoryOutputStream* bodyBuffer3793;
    panda$io$IndentedOutputStream* indentedBody3795;
    panda$collections$Iterator* f$Iter3798;
    org$pandalanguage$pandac$FieldDecl* f3811;
    panda$collections$Iterator* s$Iter3826;
    org$pandalanguage$pandac$IRNode* s3838;
    panda$core$Object* $tmp3739 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3739)) == ((panda$core$Object*) p_m->owner) }).value);
    {
        self->currentMethod = p_m;
    }
    {
        self->currentBlock = &$s3740;
    }
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp3741 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3742 = panda$core$String$convert$R$panda$core$String($tmp3741);
    panda$core$String* $tmp3744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3742, &$s3743);
    panda$core$String* $tmp3745 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3744, $tmp3745);
    panda$core$String* $tmp3748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3746, &$s3747);
    (($fn3749) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3748);
    separator3750 = &$s3751;
    panda$core$Bit $tmp3752 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3753 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3752);
    if ($tmp3753.value) {
    {
        panda$core$String* $tmp3754 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3755 = panda$core$String$convert$R$panda$core$String($tmp3754);
        panda$core$String* $tmp3757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3755, &$s3756);
        (($fn3758) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3757);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3750));
            separator3750 = &$s3759;
        }
    }
    }
    {
        ITable* $tmp3761 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3761->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3761 = $tmp3761->next;
        }
        $fn3763 $tmp3762 = $tmp3761->methods[0];
        panda$collections$Iterator* $tmp3764 = $tmp3762(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3760 = $tmp3764;
        $l3765:;
        ITable* $tmp3767 = p$Iter3760->$class->itable;
        while ($tmp3767->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3767 = $tmp3767->next;
        }
        $fn3769 $tmp3768 = $tmp3767->methods[0];
        panda$core$Bit $tmp3770 = $tmp3768(p$Iter3760);
        panda$core$Bit $tmp3771 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3770);
        if (!$tmp3771.value) goto $l3766;
        {
            ITable* $tmp3773 = p$Iter3760->$class->itable;
            while ($tmp3773->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3773 = $tmp3773->next;
            }
            $fn3775 $tmp3774 = $tmp3773->methods[1];
            panda$core$Object* $tmp3776 = $tmp3774(p$Iter3760);
            p3772 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3776);
            panda$core$String* $tmp3777 = panda$core$String$convert$R$panda$core$String(separator3750);
            panda$core$String* $tmp3779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3777, &$s3778);
            panda$core$String* $tmp3780 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3772->type);
            panda$core$String* $tmp3781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3779, $tmp3780);
            panda$core$String* $tmp3783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3781, &$s3782);
            panda$core$String* $tmp3784 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3772->name);
            panda$core$String* $tmp3785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3783, $tmp3784);
            panda$core$String* $tmp3787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3785, &$s3786);
            (($fn3788) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3787);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3750));
                separator3750 = &$s3789;
            }
        }
        goto $l3765;
        $l3766:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3764));
    }
    (($fn3791) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3790);
    panda$core$Int64 $tmp3792 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3792;
    panda$io$MemoryOutputStream* $tmp3794 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp3794);
    bodyBuffer3793 = $tmp3794;
    panda$io$IndentedOutputStream* $tmp3796 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3796, ((panda$io$OutputStream*) bodyBuffer3793));
    indentedBody3795 = $tmp3796;
    panda$core$Bit $tmp3797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp3797.value) {
    {
        {
            panda$collections$ListView* $tmp3799 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, p_m->owner);
            ITable* $tmp3800 = ((panda$collections$Iterable*) $tmp3799)->$class->itable;
            while ($tmp3800->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3800 = $tmp3800->next;
            }
            $fn3802 $tmp3801 = $tmp3800->methods[0];
            panda$collections$Iterator* $tmp3803 = $tmp3801(((panda$collections$Iterable*) $tmp3799));
            f$Iter3798 = $tmp3803;
            $l3804:;
            ITable* $tmp3806 = f$Iter3798->$class->itable;
            while ($tmp3806->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3806 = $tmp3806->next;
            }
            $fn3808 $tmp3807 = $tmp3806->methods[0];
            panda$core$Bit $tmp3809 = $tmp3807(f$Iter3798);
            panda$core$Bit $tmp3810 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3809);
            if (!$tmp3810.value) goto $l3805;
            {
                ITable* $tmp3812 = f$Iter3798->$class->itable;
                while ($tmp3812->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3812 = $tmp3812->next;
                }
                $fn3814 $tmp3813 = $tmp3812->methods[1];
                panda$core$Object* $tmp3815 = $tmp3813(f$Iter3798);
                f3811 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3815);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f3811);
                panda$core$Bit $tmp3817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f3811->fieldKind.$rawValue, ((panda$core$Int64) { 0 }));
                bool $tmp3816 = $tmp3817.value;
                if (!$tmp3816) goto $l3818;
                panda$core$Bit $tmp3819 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->compiler, f3811->type);
                $tmp3816 = $tmp3819.value;
                $l3818:;
                panda$core$Bit $tmp3820 = { $tmp3816 };
                if ($tmp3820.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3821 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                    org$pandalanguage$pandac$IRNode* $tmp3822 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                    org$pandalanguage$pandac$Type* $tmp3823 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3822, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp3823);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp3821, ((panda$core$Int64) { 15 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f3811->type, $tmp3822, f3811);
                    org$pandalanguage$pandac$IRNode* $tmp3824 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                    org$pandalanguage$pandac$Type* $tmp3825 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(f3811->type);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3824, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp3825);
                    org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, $tmp3821, $tmp3824, indentedBody3795);
                }
                }
            }
            goto $l3804;
            $l3805:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3803));
        }
    }
    }
    {
        ITable* $tmp3827 = ((panda$collections$Iterable*) p_body)->$class->itable;
        while ($tmp3827->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3827 = $tmp3827->next;
        }
        $fn3829 $tmp3828 = $tmp3827->methods[0];
        panda$collections$Iterator* $tmp3830 = $tmp3828(((panda$collections$Iterable*) p_body));
        s$Iter3826 = $tmp3830;
        $l3831:;
        ITable* $tmp3833 = s$Iter3826->$class->itable;
        while ($tmp3833->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3833 = $tmp3833->next;
        }
        $fn3835 $tmp3834 = $tmp3833->methods[0];
        panda$core$Bit $tmp3836 = $tmp3834(s$Iter3826);
        panda$core$Bit $tmp3837 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3836);
        if (!$tmp3837.value) goto $l3832;
        {
            ITable* $tmp3839 = s$Iter3826->$class->itable;
            while ($tmp3839->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3839 = $tmp3839->next;
            }
            $fn3841 $tmp3840 = $tmp3839->methods[1];
            panda$core$Object* $tmp3842 = $tmp3840(s$Iter3826);
            s3838 = ((org$pandalanguage$pandac$IRNode*) $tmp3842);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3838, indentedBody3795);
        }
        goto $l3831;
        $l3832:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3830));
    }
    panda$core$String* $tmp3843 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn3844) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3843);
    panda$core$String* $tmp3845 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer3793);
    (($fn3846) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3845);
    panda$core$Int64 $tmp3847 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3847;
    (($fn3849) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3848);
    {
        self->currentMethod = NULL;
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indentedBody3795));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator3750));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bodyBuffer3793));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3850;
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
    panda$io$File* $tmp3852 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3851);
    path3850 = $tmp3852;
    panda$io$File* $tmp3853 = panda$io$File$parent$R$panda$io$File$Q(path3850);
    panda$io$File$createDirectories($tmp3853);
    {
        panda$io$IndentedOutputStream* $tmp3854 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$OutputStream* $tmp3855 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3850);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3854, $tmp3855);
        self->out = $tmp3854;
    }
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp3856 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3857 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3857.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp3858 = org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path3850));
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    {
        self->currentClass = NULL;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$String* $tmp3859 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn3860) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3859);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp3861 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn3862) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3861);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp3863 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn3864) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3863);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp3865 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn3866) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3865);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp3867 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn3868) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3867);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn3869) self->out->out->$class->vtable[1])(self->out->out);
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

