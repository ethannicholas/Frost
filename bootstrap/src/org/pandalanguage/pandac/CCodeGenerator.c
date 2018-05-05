#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/core/Panda.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
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
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Weak.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Array.h"
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
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

static panda$core$String $s1;
org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

typedef void (*$fn110)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn116)(panda$core$Weak*);
typedef void (*$fn183)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn222)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn246)(panda$core$Weak*);
typedef panda$core$Object* (*$fn251)(panda$core$Weak*);
typedef panda$core$Object* (*$fn267)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn272)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn279)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn287)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn291)(panda$core$Weak*);
typedef panda$core$Object* (*$fn319)(panda$core$Weak*);
typedef panda$core$Object* (*$fn325)(panda$core$Weak*);
typedef panda$core$Object* (*$fn338)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn343)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn350)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn358)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn361)(panda$core$Weak*);
typedef panda$core$Object* (*$fn414)(panda$core$Weak*);
typedef panda$core$Object* (*$fn437)(panda$core$Weak*);
typedef panda$core$Object* (*$fn491)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn504)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn511)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn519)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn525)(panda$core$Weak*);
typedef panda$core$Object* (*$fn536)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn579)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn609)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn616)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn624)(panda$collections$Iterator*);
typedef void (*$fn636)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn698)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn708)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn745)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn753)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn812)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn820)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn844)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn852)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn865)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn868)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn877)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn921)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn926)(panda$core$Weak*);
typedef panda$core$Object* (*$fn933)(panda$core$Weak*);
typedef void (*$fn968)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn976)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1024)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1032)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1056)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1064)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1067)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1077)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1090)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1097)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1105)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1111)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1122)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn1165)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1204)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1211)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1219)(panda$collections$Iterator*);
typedef void (*$fn1231)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1246)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1254)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1263)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1272)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1290)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1315)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1321)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1344)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1364)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1443)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1450)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1458)(panda$collections$Iterator*);
typedef void (*$fn1470)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1473)(panda$core$Weak*);
typedef void (*$fn1510)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1519)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1528)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1547)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1555)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1576)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn1651)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1671)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1705)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1772)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1793)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1809)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1817)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1837)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1852)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1873)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1889)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1897)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1917)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2001)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2009)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2030)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2079)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2082)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2118)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn2131)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn2137)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2155)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2176)(panda$core$Weak*);
typedef void (*$fn2211)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2223)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2235)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2238)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2244)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn2250)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2268)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2278)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2282)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn2290)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2303)(panda$core$Weak*);
typedef void (*$fn2329)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2587)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2619)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2649)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2664)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn2706)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2716)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2761)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2772)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2791)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2797)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2804)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2812)(panda$collections$Iterator*);
typedef void (*$fn2824)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2829)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2888)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2896)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2931)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2942)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2946)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2948)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2955)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2958)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2984)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn2987)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn2995)(panda$core$Weak*);
typedef panda$core$Object* (*$fn3134)(panda$core$Weak*);
typedef panda$core$Object* (*$fn3141)(panda$core$Weak*);
typedef panda$core$Object* (*$fn3146)(panda$core$Weak*);
typedef panda$core$Object* (*$fn3151)(panda$core$Weak*);
typedef panda$core$Object* (*$fn3164)(panda$core$Weak*);
typedef panda$core$Object* (*$fn3170)(panda$core$Weak*);
typedef panda$core$Object* (*$fn3183)(panda$core$Weak*);
typedef panda$core$Object* (*$fn3203)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn3257)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn3273)(panda$core$Weak*);
typedef panda$core$Object* (*$fn3315)(panda$core$Weak*);
typedef void (*$fn3339)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3387)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3466)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3474)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3481)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3488)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3501)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn3508)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3519)(panda$collections$CollectionView*);
typedef void (*$fn3531)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3562)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn3565)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn3570)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn3574)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn3612)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn3615)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn3620)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn3624)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn3658)(panda$core$Weak*);
typedef panda$core$Object* (*$fn3664)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn3724)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3727)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3756)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3765)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3782)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3797)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3804)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3819)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3826)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3966)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3980)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4060)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4067)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4074)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4082)(panda$collections$Iterator*);
typedef void (*$fn4086)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn4103)(panda$core$Weak*);
typedef void (*$fn4120)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn4128)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn4133)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn4154)(panda$core$Weak*);
typedef void (*$fn4175)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4190)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn4216)(panda$core$Weak*);
typedef panda$core$Object* (*$fn4231)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Type* (*$fn4277)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4287)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4338)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4354)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4363)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4369)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4376)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4384)(panda$collections$Iterator*);
typedef void (*$fn4386)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4387)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4392)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4405)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4407)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4409)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4411)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4413)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4417)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4423)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4436)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn4459)(panda$core$Weak*);
typedef panda$core$Object* (*$fn4464)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn4469)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4477)(panda$core$Weak*);
typedef panda$core$Object* (*$fn4482)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn4485)(panda$core$Weak*);
typedef void (*$fn4519)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4543)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4563)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4579)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4656)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4678)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4700)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4729)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4756)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4780)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4808)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4818)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4825)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4829)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4833)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4839)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4852)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4859)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn4882)(panda$core$Weak*);
typedef panda$core$Object* (*$fn4887)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn4892)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4900)(panda$core$Weak*);
typedef panda$core$Object* (*$fn4905)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn4908)(panda$core$Weak*);
typedef void (*$fn4942)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4966)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4986)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn4995)(panda$core$Weak*);
typedef panda$core$Object* (*$fn5000)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn5005)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5013)(panda$core$Weak*);
typedef panda$core$Object* (*$fn5018)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn5021)(panda$core$Weak*);
typedef void (*$fn5040)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5056)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5127)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5174)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5196)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5218)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5245)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5267)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5293)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5322)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5347)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5374)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5403)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5436)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5488)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5518)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5548)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5563)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5570)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn5574)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn5578)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn5582)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5616)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5628)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5635)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn5639)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5673)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5685)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5699)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5701)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5722)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5737)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5753)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5759)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5766)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5774)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5789)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Position (*$fn5853)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn5876)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn5887)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5907)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5931)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn5946)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5960)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5967)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5969)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6019)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6030)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6041)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6050)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6057)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6064)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6072)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn6085)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6092)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6100)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6107)(panda$core$Weak*);
typedef void (*$fn6114)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6116)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6121)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn6265)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn6279)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn6306)(panda$core$Weak*);
typedef void (*$fn6328)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6341)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6350)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6357)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6365)(panda$collections$Iterator*);
typedef void (*$fn6386)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6391)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn6407)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn6412)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6419)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6427)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6430)(panda$core$Weak*);
typedef panda$core$Object* (*$fn6434)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn6456)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6463)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6471)(panda$collections$Iterator*);
typedef void (*$fn6475)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6478)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6481)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn6502)(panda$core$Weak*);
typedef void (*$fn6511)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6514)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6517)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6520)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6523)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6524)(panda$io$OutputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, -2051020738728542693, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x28", 2, 14382, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x38", 1, 157, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x36", 2, 15204, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x33\x32", 2, 15402, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70", 2, 13545, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x73\x65\x6c\x66", 5, 14792042467, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static panda$core$String $s863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6d", 12, -5595348649711353309, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2a", 9, 1496394141948660748, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x73\x65\x6c\x66\x2d\x3e\x76\x61\x6c\x75\x65", 12, 3684417363826496863, NULL };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s1335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s1400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s1409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s1499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s1505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s1508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s1565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s1602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static panda$core$String $s1714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s1804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s1931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s1983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20", 4, 137658487, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20", 4, 137372859, NULL };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s2189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s2204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s2216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s2221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s2353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static panda$core$String $s2381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 14, 9153752889249827899, NULL };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s2396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s2410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2a", 2, 14283, NULL };
static panda$core$String $s2412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d", 7, 157293860332681, NULL };
static panda$core$String $s2444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, 2191018519584705024, NULL };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s2518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s2560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x26", 2, 14279, NULL };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3f\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s2869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x4e\x55\x4c\x4c\x29", 8, 14321312880043979, NULL };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2892 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s2905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s2910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 17, 3278627383872437575, NULL };
static panda$core$String $s2919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 22, -5027409806946055905, NULL };
static panda$core$String $s2924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x29\x3b", 15, -9084967859609473468, NULL };
static panda$core$String $s2937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s2940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s2957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s3025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3034 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3041 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s3064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s3069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s3074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s3094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s3102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 21448182697504497, NULL };
static panda$core$String $s3241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s3310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s3323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s3370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 19, -1805496395169551456, NULL };
static panda$core$String $s3376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s3384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x29\x3b", 8, 14794490123150471, NULL };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s3419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s3424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s3441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s3457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -5089590097621792313, NULL };
static panda$core$String $s3461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 2848555729212071077, NULL };
static panda$core$String $s3492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s3498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s3503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s3506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s3523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s3536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s3548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x73\x65\x6c\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s3579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s3593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s3599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s3601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s3629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s3642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s3648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s3650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s3671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s3680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s3696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s3698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s3718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s4085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s4088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s4113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s4115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s4167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s4170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d\x20\x3d\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s4173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static panda$core$String $s4182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x46\x72\x65\x65\x28", 10, -5790438204225352665, NULL };
static panda$core$String $s4188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s4314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s4333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s4352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s4403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s4406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s4408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s4410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s4426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s4511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x69\x6e\x2e\x76\x61\x6c\x75\x65\x3b", 11, -3956212002962864875, NULL };
static panda$core$String $s4535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s4541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s4555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x61\x78\x2e\x76\x61\x6c\x75\x65\x3b", 11, -4041768404061004273, NULL };
static panda$core$String $s4572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s4574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s4608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s4616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s4619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s4622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s4627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s4643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s4645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s4648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s4653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s4667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s4670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s4673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s4676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s4689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s4692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s4695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s4698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s4727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s4743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s4745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s4748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s4753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s4766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s4769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 12, -550717230962542041, NULL };
static panda$core$String $s4772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s4777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s4794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s4797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s4800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s4805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20\x31\x3b", 12, -4476855678279854640, NULL };
static panda$core$String $s4821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s4823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s4934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x61\x72\x74\x2e\x76\x61\x6c\x75\x65\x3b", 13, 3588086193908855763, NULL };
static panda$core$String $s4958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s4964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s4978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x65\x6e\x64\x2e\x76\x61\x6c\x75\x65\x3b", 11, 5794120589201096528, NULL };
static panda$core$String $s5032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s5038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x65\x70\x2e\x76\x61\x6c\x75\x65\x3b", 12, -1565217378717073995, NULL };
static panda$core$String $s5049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s5051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s5054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s5085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s5089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s5091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s5094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s5099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s5100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s5107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s5110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s5120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s5122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s5125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x30\x3b", 5, 13904243334, NULL };
static panda$core$String $s5130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s5137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s5139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s5145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s5163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s5171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s5185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s5188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s5194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s5207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s5210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s5216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s5234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s5242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s5256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s5259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s5265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s5282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s5285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s5291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s5314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s5320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s5342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s5345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s5361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s5363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s5371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s5386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s5389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s5392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s5400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s5419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s5422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s5425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s5433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s5456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2d\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s5459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s5477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s5485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s5500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s5503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x2d", 5, 13904537533, NULL };
static panda$core$String $s5506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s5513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s5515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s5530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s5533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x2d", 4, 137665772, NULL };
static panda$core$String $s5536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s5543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s5545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s5561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s5568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s5609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s5614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s5621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s5623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s5633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s5666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s5671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s5678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s5680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s5683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7b", 14, 1197661341919403142, NULL };
static panda$core$String $s5700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s5715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s5735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x6d\x73\x65\x74\x28\x26", 8, 22623213602606430, NULL };
static panda$core$String $s5746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x30\x2c\x20\x73\x69\x7a\x65\x6f\x66\x28", 12, 4086987682289124441, NULL };
static panda$core$String $s5751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s5816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s5819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s5880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s5883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static panda$core$String $s5891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20", 3, 1462916, NULL };
static panda$core$String $s5897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x63\x68\x61\x72\x2a\x29\x20", 9, 1531222690101128410, NULL };
static panda$core$String $s5899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s5904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s5912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s5914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s5929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5950 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s5958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s5965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s6015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s6017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s6026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s6028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s6035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x41\x4e\x44\x41\x5f\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s6039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s6044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s6048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s6104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s6112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s6115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x3b", 6, 2103477946177, NULL };
static panda$core$String $s6117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6c\x74\x3a", 8, 21658216358330300, NULL };
static panda$core$String $s6120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s6269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s6277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s6291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s6298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s6313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s6321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s6326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s6331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s6344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s6374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s6384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s6389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s6390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s6438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s6480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s6489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

void org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$File* p_outDir) {
    self->compiler = NULL;
    self->outDir = NULL;
    self->out = NULL;
    self->strings = NULL;
    self->imports = NULL;
    self->hCodeGen = NULL;
    self->currentClass = NULL;
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
    self->extraEffects = NULL;
    self->reusedValues = NULL;
    self->methodShims = NULL;
    self->inlineContext = NULL;
    self->currentlyInlining = NULL;
    panda$io$MemoryOutputStream* $tmp4 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp4);
    panda$io$MemoryOutputStream* $tmp3 = $tmp4;
    panda$io$MemoryOutputStream* $tmp2 = $tmp3;
    self->strings = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$collections$Set* $tmp7 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp7);
    panda$collections$Set* $tmp6 = $tmp7;
    panda$collections$Set* $tmp5 = $tmp6;
    self->imports = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    org$pandalanguage$pandac$ClassDecl* $tmp8 = NULL;
    self->currentClass = $tmp8;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$io$MemoryOutputStream* $tmp11 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp11);
    panda$io$MemoryOutputStream* $tmp10 = $tmp11;
    panda$io$MemoryOutputStream* $tmp9 = $tmp10;
    self->declarations = $tmp9;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    panda$io$MemoryOutputStream* $tmp14 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp14);
    panda$io$MemoryOutputStream* $tmp13 = $tmp14;
    panda$io$MemoryOutputStream* $tmp12 = $tmp13;
    self->types = $tmp12;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    panda$io$MemoryOutputStream* $tmp17 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp17);
    panda$io$MemoryOutputStream* $tmp16 = $tmp17;
    panda$io$MemoryOutputStream* $tmp15 = $tmp16;
    self->methodsBuffer = $tmp15;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    panda$io$IndentedOutputStream* $tmp20 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp20, ((panda$io$OutputStream*) self->methodsBuffer));
    panda$io$IndentedOutputStream* $tmp19 = $tmp20;
    panda$io$IndentedOutputStream* $tmp18 = $tmp19;
    self->methods = $tmp18;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
    panda$io$MemoryOutputStream* $tmp23 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp23);
    panda$io$MemoryOutputStream* $tmp22 = $tmp23;
    panda$io$MemoryOutputStream* $tmp21 = $tmp22;
    self->methodHeaderBuffer = $tmp21;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    panda$io$IndentedOutputStream* $tmp26 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp26, ((panda$io$OutputStream*) self->methodHeaderBuffer));
    panda$io$IndentedOutputStream* $tmp25 = $tmp26;
    panda$io$IndentedOutputStream* $tmp24 = $tmp25;
    self->methodHeader = $tmp24;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp24));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
    panda$io$MemoryOutputStream* $tmp29 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp29);
    panda$io$MemoryOutputStream* $tmp28 = $tmp29;
    panda$io$MemoryOutputStream* $tmp27 = $tmp28;
    self->wrapperShimsBuffer = $tmp27;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp28));
    panda$io$IndentedOutputStream* $tmp32 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp32, ((panda$io$OutputStream*) self->wrapperShimsBuffer));
    panda$io$IndentedOutputStream* $tmp31 = $tmp32;
    panda$io$IndentedOutputStream* $tmp30 = $tmp31;
    self->wrapperShims = $tmp30;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
    panda$io$MemoryOutputStream* $tmp35 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp35);
    panda$io$MemoryOutputStream* $tmp34 = $tmp35;
    panda$io$MemoryOutputStream* $tmp33 = $tmp34;
    self->shimsBuffer = $tmp33;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp33));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
    panda$io$IndentedOutputStream* $tmp38 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp38, ((panda$io$OutputStream*) self->shimsBuffer));
    panda$io$IndentedOutputStream* $tmp37 = $tmp38;
    panda$io$IndentedOutputStream* $tmp36 = $tmp37;
    self->shims = $tmp36;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
    panda$collections$Set* $tmp41 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp41);
    panda$collections$Set* $tmp40 = $tmp41;
    panda$collections$Set* $tmp39 = $tmp40;
    self->declared = $tmp39;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp39));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
    panda$collections$Set* $tmp44 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp44);
    panda$collections$Set* $tmp43 = $tmp44;
    panda$collections$Set* $tmp42 = $tmp43;
    self->writtenTypes = $tmp42;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    panda$collections$Set* $tmp47 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp47);
    panda$collections$Set* $tmp46 = $tmp47;
    panda$collections$Set* $tmp45 = $tmp46;
    self->writtenWrappers = $tmp45;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp45));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
    panda$collections$HashMap* $tmp50 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp50);
    panda$collections$HashMap* $tmp49 = $tmp50;
    panda$collections$HashMap* $tmp48 = $tmp49;
    self->classConstants = $tmp48;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp48));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
    panda$collections$IdentityMap* $tmp53 = (panda$collections$IdentityMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$IdentityMap$class);
    panda$collections$IdentityMap$init($tmp53);
    panda$collections$IdentityMap* $tmp52 = $tmp53;
    panda$collections$IdentityMap* $tmp51 = $tmp52;
    self->variableNames = $tmp51;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
    panda$collections$Stack* $tmp56 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
    panda$collections$Stack$init($tmp56);
    panda$collections$Stack* $tmp55 = $tmp56;
    panda$collections$Stack* $tmp54 = $tmp55;
    self->loopDescriptors = $tmp54;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp54));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
    panda$collections$Stack* $tmp59 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
    panda$collections$Stack$init($tmp59);
    panda$collections$Stack* $tmp58 = $tmp59;
    panda$collections$Stack* $tmp57 = $tmp58;
    self->extraEffects = $tmp57;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap* $tmp62 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp62);
    panda$collections$HashMap* $tmp61 = $tmp62;
    panda$collections$HashMap* $tmp60 = $tmp61;
    self->reusedValues = $tmp60;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
    panda$collections$IdentityMap* $tmp65 = (panda$collections$IdentityMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$IdentityMap$class);
    panda$collections$IdentityMap$init($tmp65);
    panda$collections$IdentityMap* $tmp64 = $tmp65;
    panda$collections$IdentityMap* $tmp63 = $tmp64;
    self->methodShims = $tmp63;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
    panda$collections$Stack* $tmp68 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
    panda$collections$Stack$init($tmp68);
    panda$collections$Stack* $tmp67 = $tmp68;
    panda$collections$Stack* $tmp66 = $tmp67;
    self->inlineContext = $tmp66;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp66));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
    panda$collections$IdentityMap* $tmp71 = (panda$collections$IdentityMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$IdentityMap$class);
    panda$collections$IdentityMap$init($tmp71);
    panda$collections$IdentityMap* $tmp70 = $tmp71;
    panda$collections$IdentityMap* $tmp69 = $tmp70;
    self->currentlyInlining = $tmp69;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
    {
        panda$io$File* $tmp72 = self->outDir;
        panda$io$File* $tmp73 = p_outDir;
        self->outDir = $tmp73;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp73));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
    }
    {
        panda$io$IndentedOutputStream* $tmp74 = self->out;
        panda$io$IndentedOutputStream* $tmp77 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp79 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp79);
        panda$io$MemoryOutputStream* $tmp78 = $tmp79;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp77, ((panda$io$OutputStream*) $tmp78));
        panda$io$IndentedOutputStream* $tmp76 = $tmp77;
        panda$io$IndentedOutputStream* $tmp75 = $tmp76;
        self->out = $tmp75;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
    }
    {
        org$pandalanguage$pandac$HCodeGenerator* $tmp80 = self->hCodeGen;
        org$pandalanguage$pandac$HCodeGenerator* $tmp83 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
        org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp83, p_outDir);
        org$pandalanguage$pandac$HCodeGenerator* $tmp82 = $tmp83;
        org$pandalanguage$pandac$HCodeGenerator* $tmp81 = $tmp82;
        self->hCodeGen = $tmp81;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp81));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp82));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp87 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->hCodeGen, p_s);
    panda$core$String* $tmp86 = $tmp87;
    panda$core$String* $tmp85 = $tmp86;
    panda$core$String* $tmp84 = $tmp85;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
    return $tmp84;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* $tmp91 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->hCodeGen, p_m);
    panda$core$String* $tmp90 = $tmp91;
    panda$core$String* $tmp89 = $tmp90;
    panda$core$String* $tmp88 = $tmp89;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp89));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
    return $tmp88;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp93 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->hCodeGen, p_t);
    panda$core$Int64 $tmp92 = $tmp93;
    return $tmp92;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp94 = ((panda$core$Bit) { ((panda$core$Object*) p_cl) != ((panda$core$Object*) self->currentClass) });
    return $tmp94;
}
void org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* includePath97;
    panda$core$Bit $tmp96 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s95);
    if ($tmp96.value) {
    {
        return;
    }
    }
    panda$core$String* $tmp101 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self->hCodeGen, p_cl, &$s100);
    panda$core$String* $tmp99 = $tmp101;
    panda$core$String* $tmp98 = $tmp99;
    includePath97 = $tmp98;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp98));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp99));
    panda$core$Bit $tmp102 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath97));
    panda$core$Bit $tmp103 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp102);
    if ($tmp103.value) {
    {
        panda$core$String* $tmp107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s106, includePath97);
        panda$core$String* $tmp105 = $tmp107;
        panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp105, &$s108);
        panda$core$String* $tmp104 = $tmp109;
        (($fn110) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp104);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath97));
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath97));
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl112;
    panda$core$String* result125;
    panda$core$MutableString* code135;
    panda$core$String* separator148;
    panda$core$Range$LTpanda$core$Int64$GT $tmp151;
    panda$core$String* tmp1184;
    panda$core$Bit $tmp111 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_t);
    if ($tmp111.value) {
    {
        panda$core$Object* $tmp117 = (($fn116) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp115 = $tmp117;
        org$pandalanguage$pandac$ClassDecl* $tmp118 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp115), p_t);
        org$pandalanguage$pandac$ClassDecl* $tmp114 = $tmp118;
        org$pandalanguage$pandac$ClassDecl* $tmp113 = $tmp114;
        cl112 = $tmp113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
        panda$core$Panda$unref$panda$core$Object($tmp115);
        PANDA_ASSERT(((panda$core$Bit) { cl112 != NULL }).value);
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl112);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl112));
    }
    }
    panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp119 = $tmp120.value;
    if ($tmp119) goto $l121;
    panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 24 }));
    $tmp119 = $tmp122.value;
    $l121:;
    panda$core$Bit $tmp123 = { $tmp119 };
    if ($tmp123.value) {
    {
        panda$core$Int64 $tmp124 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp124;
        panda$core$Int64$wrapper* $tmp131;
        $tmp131 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp131->value = self->varCount;
        panda$core$Object* $tmp130 = ((panda$core$Object*) $tmp131);
        panda$core$String* $tmp132 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s129, $tmp130);
        panda$core$String* $tmp128 = $tmp132;
        panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, &$s133);
        panda$core$String* $tmp127 = $tmp134;
        panda$core$String* $tmp126 = $tmp127;
        result125 = $tmp126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
        panda$core$Panda$unref$panda$core$Object($tmp130);
        panda$core$MutableString* $tmp138 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp138, &$s139);
        panda$core$MutableString* $tmp137 = $tmp138;
        panda$core$MutableString* $tmp136 = $tmp137;
        code135 = $tmp136;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
        panda$core$Int64 $tmp142 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp143 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp142, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp144 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp143);
        panda$core$Object* $tmp141 = $tmp144;
        panda$core$String* $tmp145 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp141));
        panda$core$String* $tmp140 = $tmp145;
        panda$core$MutableString$append$panda$core$String(code135, $tmp140);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
        panda$core$Panda$unref$panda$core$Object($tmp141);
        panda$core$MutableString$append$panda$core$String(code135, &$s146);
        panda$core$MutableString$append$panda$core$String(code135, result125);
        panda$core$MutableString$append$panda$core$String(code135, &$s147);
        panda$core$String* $tmp149 = &$s150;
        separator148 = $tmp149;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
        panda$core$Int64 $tmp152 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp153 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp152, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp151, ((panda$core$Int64) { 0 }), $tmp153, ((panda$core$Bit) { false }));
        int64_t $tmp155 = $tmp151.min.value;
        panda$core$Int64 i154 = { $tmp155 };
        int64_t $tmp157 = $tmp151.max.value;
        bool $tmp158 = $tmp151.inclusive.value;
        if ($tmp158) goto $l165; else goto $l166;
        $l165:;
        if ($tmp155 <= $tmp157) goto $l159; else goto $l161;
        $l166:;
        if ($tmp155 < $tmp157) goto $l159; else goto $l161;
        $l159:;
        {
            panda$core$MutableString$append$panda$core$String(code135, separator148);
            panda$core$Object* $tmp169 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i154);
            panda$core$Object* $tmp168 = $tmp169;
            panda$core$String* $tmp170 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp168));
            panda$core$String* $tmp167 = $tmp170;
            panda$core$MutableString$append$panda$core$String(code135, $tmp167);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp167));
            panda$core$Panda$unref$panda$core$Object($tmp168);
            {
                panda$core$String* $tmp171 = separator148;
                panda$core$String* $tmp172 = &$s173;
                separator148 = $tmp172;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
            }
        }
        $l162:;
        int64_t $tmp175 = $tmp157 - i154.value;
        if ($tmp158) goto $l176; else goto $l177;
        $l176:;
        if ((uint64_t) $tmp175 >= 1) goto $l174; else goto $l161;
        $l177:;
        if ((uint64_t) $tmp175 > 1) goto $l174; else goto $l161;
        $l174:;
        i154.value += 1;
        goto $l159;
        $l161:;
        panda$core$MutableString$append$panda$core$String(code135, &$s180);
        panda$core$String* $tmp182 = panda$core$MutableString$finish$R$panda$core$String(code135);
        panda$core$String* $tmp181 = $tmp182;
        (($fn183) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp181);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
        {
            panda$core$String* $tmp185 = result125;
            tmp1184 = $tmp185;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator148));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code135));
            }
            panda$core$String* $tmp186 = tmp1184;
            return $tmp186;
        }
    }
    }
    panda$core$String* $tmp190 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self->hCodeGen, p_t);
    panda$core$String* $tmp189 = $tmp190;
    panda$core$String* $tmp188 = $tmp189;
    panda$core$String* $tmp187 = $tmp188;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp188));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
    return $tmp187;
}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    {
        panda$core$Weak* $tmp191 = self->compiler;
        panda$core$Weak* $tmp194 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp194, ((panda$core$Object*) p_compiler));
        panda$core$Weak* $tmp193 = $tmp194;
        panda$core$Weak* $tmp192 = $tmp193;
        self->compiler = $tmp192;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
    }
    org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->hCodeGen, p_compiler);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp195 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp195;
    panda$core$Int64$wrapper* $tmp202;
    $tmp202 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp202->value = self->varCount;
    panda$core$Object* $tmp201 = ((panda$core$Object*) $tmp202);
    panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s200, $tmp201);
    panda$core$String* $tmp199 = $tmp203;
    panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp199, &$s204);
    panda$core$String* $tmp198 = $tmp205;
    panda$core$String* $tmp197 = $tmp198;
    panda$core$String* $tmp196 = $tmp197;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
    panda$core$Panda$unref$panda$core$Object($tmp201);
    return $tmp196;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp206 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp206;
    panda$core$Int64$wrapper* $tmp213;
    $tmp213 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp213->value = self->varCount;
    panda$core$Object* $tmp212 = ((panda$core$Object*) $tmp213);
    panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s211, $tmp212);
    panda$core$String* $tmp210 = $tmp214;
    panda$core$String* $tmp216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp210, &$s215);
    panda$core$String* $tmp209 = $tmp216;
    panda$core$String* $tmp208 = $tmp209;
    panda$core$String* $tmp207 = $tmp208;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
    panda$core$Panda$unref$panda$core$Object($tmp212);
    return $tmp207;
}
void org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp219 = panda$core$String$convert$R$panda$core$String(p_label);
    panda$core$String* $tmp218 = $tmp219;
    panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp218, &$s220);
    panda$core$String* $tmp217 = $tmp221;
    (($fn222) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp217);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
    {
        panda$core$String* $tmp223 = self->currentBlock;
        panda$core$String* $tmp224 = p_label;
        self->currentBlock = $tmp224;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp224));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp223));
    }
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl242;
    panda$core$Int64 tmp2259;
    panda$core$Int64 result261;
    panda$collections$Iterator* Iter$272$9262;
    org$pandalanguage$pandac$FieldDecl* f282;
    panda$core$Int64 size298;
    panda$core$Int64 align300;
    panda$core$Int64 tmp3310;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp225 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp225.value) {
    {
        panda$core$Bit $tmp227 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s226);
        if ($tmp227.value) {
        {
            panda$core$Int64 $tmp228 = ((panda$core$Int64) { 1 });
            return $tmp228;
        }
        }
        panda$core$Bit $tmp230 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s229);
        if ($tmp230.value) {
        {
            panda$core$Int64 $tmp231 = ((panda$core$Int64) { 2 });
            return $tmp231;
        }
        }
        panda$core$Bit $tmp233 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s232);
        if ($tmp233.value) {
        {
            panda$core$Int64 $tmp234 = ((panda$core$Int64) { 4 });
            return $tmp234;
        }
        }
        panda$core$Bit $tmp236 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s235);
        PANDA_ASSERT($tmp236.value);
        panda$core$Int64 $tmp237 = ((panda$core$Int64) { 8 });
        return $tmp237;
    }
    }
    org$pandalanguage$pandac$Type* $tmp239 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp238 = $tmp239;
    panda$core$Bit $tmp240 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp238);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp238));
    if ($tmp240.value) {
    {
        panda$core$Int64 $tmp241 = ((panda$core$Int64) { 1 });
        return $tmp241;
    }
    }
    panda$core$Object* $tmp247 = (($fn246) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp245 = $tmp247;
    org$pandalanguage$pandac$ClassDecl* $tmp248 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp245), p_t);
    org$pandalanguage$pandac$ClassDecl* $tmp244 = $tmp248;
    org$pandalanguage$pandac$ClassDecl* $tmp243 = $tmp244;
    cl242 = $tmp243;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp243));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp244));
    panda$core$Panda$unref$panda$core$Object($tmp245);
    PANDA_ASSERT(((panda$core$Bit) { cl242 != NULL }).value);
    panda$core$Object* $tmp252 = (($fn251) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp250 = $tmp252;
    panda$core$Bit $tmp253 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp250), cl242);
    panda$core$Bit $tmp254 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp253);
    bool $tmp249 = $tmp254.value;
    panda$core$Panda$unref$panda$core$Object($tmp250);
    if ($tmp249) goto $l255;
    panda$core$Bit $tmp257 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl242)->name, &$s256);
    $tmp249 = $tmp257.value;
    $l255:;
    panda$core$Bit $tmp258 = { $tmp249 };
    if ($tmp258.value) {
    {
        {
            tmp2259 = ((panda$core$Int64) { 8 });
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl242));
            panda$core$Int64 $tmp260 = tmp2259;
            return $tmp260;
        }
    }
    }
    result261 = ((panda$core$Int64) { 0 });
    {
        panda$core$Object* $tmp268 = (($fn267) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp266 = $tmp268;
        panda$collections$ListView* $tmp269 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp266), cl242);
        panda$collections$ListView* $tmp265 = $tmp269;
        ITable* $tmp270 = ((panda$collections$Iterable*) $tmp265)->$class->itable;
        while ($tmp270->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp270 = $tmp270->next;
        }
        $fn272 $tmp271 = $tmp270->methods[0];
        panda$collections$Iterator* $tmp273 = $tmp271(((panda$collections$Iterable*) $tmp265));
        panda$collections$Iterator* $tmp264 = $tmp273;
        panda$collections$Iterator* $tmp263 = $tmp264;
        Iter$272$9262 = $tmp263;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp263));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp265));
        panda$core$Panda$unref$panda$core$Object($tmp266);
        $l274:;
        ITable* $tmp277 = Iter$272$9262->$class->itable;
        while ($tmp277->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp277 = $tmp277->next;
        }
        $fn279 $tmp278 = $tmp277->methods[0];
        panda$core$Bit $tmp280 = $tmp278(Iter$272$9262);
        panda$core$Bit $tmp281 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp280);
        bool $tmp276 = $tmp281.value;
        if (!$tmp276) goto $l275;
        {
            ITable* $tmp285 = Iter$272$9262->$class->itable;
            while ($tmp285->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp285 = $tmp285->next;
            }
            $fn287 $tmp286 = $tmp285->methods[1];
            panda$core$Object* $tmp288 = $tmp286(Iter$272$9262);
            panda$core$Object* $tmp284 = $tmp288;
            org$pandalanguage$pandac$FieldDecl* $tmp283 = ((org$pandalanguage$pandac$FieldDecl*) $tmp284);
            f282 = $tmp283;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp283));
            panda$core$Panda$unref$panda$core$Object($tmp284);
            panda$core$Bit $tmp289 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f282->annotations);
            if ($tmp289.value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f282));
                    goto $l274;
                }
            }
            }
            panda$core$Object* $tmp292 = (($fn291) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp290 = $tmp292;
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp290), f282);
            panda$core$Panda$unref$panda$core$Object($tmp290);
            org$pandalanguage$pandac$Type* $tmp294 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp293 = $tmp294;
            panda$core$Bit $tmp295 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f282->type, $tmp293);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
            if ($tmp295.value) {
            {
                panda$core$Int64 $tmp296 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl242);
                panda$core$Int64 $tmp297 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result261, $tmp296);
                result261 = $tmp297;
            }
            }
            else {
            {
                panda$core$Int64 $tmp299 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f282->type);
                size298 = $tmp299;
                panda$core$Int64 $tmp301 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result261, size298);
                align300 = $tmp301;
                panda$core$Bit $tmp302 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align300, ((panda$core$Int64) { 0 }));
                if ($tmp302.value) {
                {
                    panda$core$Int64 $tmp303 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size298, align300);
                    panda$core$Int64 $tmp304 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result261, $tmp303);
                    result261 = $tmp304;
                }
                }
                panda$core$Int64 $tmp305 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result261, size298);
                panda$core$Bit $tmp306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp305, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp306.value);
                panda$core$Int64 $tmp307 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result261, size298);
                result261 = $tmp307;
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f282));
        }
        goto $l274;
        $l275:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$272$9262));
    }
    panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp308.value) {
    {
        panda$core$Int64 $tmp309 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result261, ((panda$core$Int64) { 1 }));
        result261 = $tmp309;
    }
    }
    {
        tmp3310 = result261;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl242));
        panda$core$Int64 $tmp311 = tmp3310;
        return $tmp311;
    }
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp313 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp314 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp313, ((panda$core$Int64) { 8 }));
    panda$core$Int64 $tmp312 = $tmp314;
    return $tmp312;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl315;
    panda$core$Int64 result329;
    panda$collections$Iterator* Iter$305$9333;
    org$pandalanguage$pandac$FieldDecl* f353;
    panda$core$Int64 size368;
    panda$core$Int64 align370;
    panda$core$Int64 tmp4380;
    panda$core$Object* $tmp320 = (($fn319) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp318 = $tmp320;
    org$pandalanguage$pandac$ClassDecl* $tmp321 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp318), p_t);
    org$pandalanguage$pandac$ClassDecl* $tmp317 = $tmp321;
    org$pandalanguage$pandac$ClassDecl* $tmp316 = $tmp317;
    cl315 = $tmp316;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp316));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
    panda$core$Panda$unref$panda$core$Object($tmp318);
    bool $tmp322 = ((panda$core$Bit) { cl315 != NULL }).value;
    if (!$tmp322) goto $l323;
    panda$core$Object* $tmp326 = (($fn325) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp324 = $tmp326;
    panda$core$Bit $tmp327 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp324), cl315);
    $tmp322 = $tmp327.value;
    panda$core$Panda$unref$panda$core$Object($tmp324);
    $l323:;
    panda$core$Bit $tmp328 = { $tmp322 };
    PANDA_ASSERT($tmp328.value);
    org$pandalanguage$pandac$Type* $tmp331 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp330 = $tmp331;
    panda$core$Int64 $tmp332 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp330);
    result329 = $tmp332;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
    {
        panda$core$Object* $tmp339 = (($fn338) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp337 = $tmp339;
        panda$collections$ListView* $tmp340 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp337), cl315);
        panda$collections$ListView* $tmp336 = $tmp340;
        ITable* $tmp341 = ((panda$collections$Iterable*) $tmp336)->$class->itable;
        while ($tmp341->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp341 = $tmp341->next;
        }
        $fn343 $tmp342 = $tmp341->methods[0];
        panda$collections$Iterator* $tmp344 = $tmp342(((panda$collections$Iterable*) $tmp336));
        panda$collections$Iterator* $tmp335 = $tmp344;
        panda$collections$Iterator* $tmp334 = $tmp335;
        Iter$305$9333 = $tmp334;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp334));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
        panda$core$Panda$unref$panda$core$Object($tmp337);
        $l345:;
        ITable* $tmp348 = Iter$305$9333->$class->itable;
        while ($tmp348->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp348 = $tmp348->next;
        }
        $fn350 $tmp349 = $tmp348->methods[0];
        panda$core$Bit $tmp351 = $tmp349(Iter$305$9333);
        panda$core$Bit $tmp352 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp351);
        bool $tmp347 = $tmp352.value;
        if (!$tmp347) goto $l346;
        {
            ITable* $tmp356 = Iter$305$9333->$class->itable;
            while ($tmp356->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp356 = $tmp356->next;
            }
            $fn358 $tmp357 = $tmp356->methods[1];
            panda$core$Object* $tmp359 = $tmp357(Iter$305$9333);
            panda$core$Object* $tmp355 = $tmp359;
            org$pandalanguage$pandac$FieldDecl* $tmp354 = ((org$pandalanguage$pandac$FieldDecl*) $tmp355);
            f353 = $tmp354;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp354));
            panda$core$Panda$unref$panda$core$Object($tmp355);
            panda$core$Object* $tmp362 = (($fn361) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp360 = $tmp362;
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp360), f353);
            panda$core$Panda$unref$panda$core$Object($tmp360);
            org$pandalanguage$pandac$Type* $tmp364 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp363 = $tmp364;
            panda$core$Bit $tmp365 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f353->type, $tmp363);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp363));
            if ($tmp365.value) {
            {
                panda$core$Int64 $tmp366 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl315);
                panda$core$Int64 $tmp367 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result329, $tmp366);
                result329 = $tmp367;
            }
            }
            else {
            {
                panda$core$Int64 $tmp369 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f353->type);
                size368 = $tmp369;
                panda$core$Int64 $tmp371 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result329, size368);
                align370 = $tmp371;
                panda$core$Bit $tmp372 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align370, ((panda$core$Int64) { 0 }));
                if ($tmp372.value) {
                {
                    panda$core$Int64 $tmp373 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size368, align370);
                    panda$core$Int64 $tmp374 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result329, $tmp373);
                    result329 = $tmp374;
                }
                }
                panda$core$Int64 $tmp375 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result329, size368);
                panda$core$Bit $tmp376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp375, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp376.value);
                panda$core$Int64 $tmp377 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result329, size368);
                result329 = $tmp377;
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f353));
        }
        goto $l345;
        $l346:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$305$9333));
    }
    panda$core$Bit $tmp378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp378.value) {
    {
        panda$core$Int64 $tmp379 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result329, ((panda$core$Int64) { 1 }));
        result329 = $tmp379;
    }
    }
    {
        tmp4380 = result329;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl315));
        panda$core$Int64 $tmp381 = tmp4380;
        return $tmp381;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp382 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp382.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp386 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp385 = $tmp386;
    panda$core$String* $tmp384 = $tmp385;
    panda$core$String* $tmp383 = $tmp384;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp384));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
    return $tmp383;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp387.value) {
    {
        panda$core$Object* $tmp392 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp391 = $tmp392;
        panda$core$String* $tmp393 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp391));
        panda$core$String* $tmp390 = $tmp393;
        panda$core$String* $tmp389 = $tmp390;
        panda$core$String* $tmp388 = $tmp389;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp389));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp390));
        panda$core$Panda$unref$panda$core$Object($tmp391);
        return $tmp388;
    }
    }
    panda$core$String* $tmp399 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp398 = $tmp399;
    panda$core$String* $tmp400 = panda$core$String$convert$R$panda$core$String($tmp398);
    panda$core$String* $tmp397 = $tmp400;
    panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp397, &$s401);
    panda$core$String* $tmp396 = $tmp402;
    panda$core$String* $tmp395 = $tmp396;
    panda$core$String* $tmp394 = $tmp395;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp395));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp397));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp398));
    return $tmp394;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp407 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp406 = $tmp407;
    panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp406, &$s408);
    panda$core$String* $tmp405 = $tmp409;
    panda$core$String* $tmp404 = $tmp405;
    panda$core$String* $tmp403 = $tmp404;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp404));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp405));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp406));
    return $tmp403;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType410;
    panda$core$MutableString* result417;
    panda$core$Char8 $tmp427;
    panda$core$Char8 $tmp441;
    panda$core$Range$LTpanda$core$Int64$GT $tmp442;
    panda$core$String* tmp5470;
    panda$core$Object* $tmp415 = (($fn414) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp413 = $tmp415;
    org$pandalanguage$pandac$Type* $tmp416 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp413), p_m);
    org$pandalanguage$pandac$Type* $tmp412 = $tmp416;
    org$pandalanguage$pandac$Type* $tmp411 = $tmp412;
    inheritedType410 = $tmp411;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp411));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
    panda$core$Panda$unref$panda$core$Object($tmp413);
    panda$core$MutableString* $tmp420 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp420);
    panda$core$MutableString* $tmp419 = $tmp420;
    panda$core$MutableString* $tmp418 = $tmp419;
    result417 = $tmp418;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp418));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
    panda$core$Int64 $tmp423 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType410->subtypes);
    panda$core$Int64 $tmp424 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp423, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp425 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType410->subtypes, $tmp424);
    panda$core$Object* $tmp422 = $tmp425;
    panda$core$String* $tmp426 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp422));
    panda$core$String* $tmp421 = $tmp426;
    panda$core$MutableString$append$panda$core$String(result417, $tmp421);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
    panda$core$Panda$unref$panda$core$Object($tmp422);
    panda$core$Char8$init$panda$core$UInt8(&$tmp427, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(result417, $tmp427);
    panda$core$Bit $tmp428 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp428.value);
    panda$core$String* $tmp432 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp431 = $tmp432;
    panda$core$String* $tmp433 = panda$core$String$convert$R$panda$core$String($tmp431);
    panda$core$String* $tmp430 = $tmp433;
    panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp430, &$s434);
    panda$core$String* $tmp429 = $tmp435;
    panda$core$MutableString$append$panda$core$String(result417, $tmp429);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
    panda$core$Object* $tmp438 = (($fn437) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp436 = $tmp438;
    panda$core$Bit $tmp439 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp436), p_m->owner);
    panda$core$Panda$unref$panda$core$Object($tmp436);
    if ($tmp439.value) {
    {
        panda$core$MutableString$append$panda$core$String(result417, &$s440);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp441, ((panda$core$UInt8) { 42 }));
    panda$core$MutableString$append$panda$core$Char8(result417, $tmp441);
    panda$core$Int64 $tmp443 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType410->subtypes);
    panda$core$Int64 $tmp444 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp443, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp442, ((panda$core$Int64) { 0 }), $tmp444, ((panda$core$Bit) { false }));
    int64_t $tmp446 = $tmp442.min.value;
    panda$core$Int64 i445 = { $tmp446 };
    int64_t $tmp448 = $tmp442.max.value;
    bool $tmp449 = $tmp442.inclusive.value;
    if ($tmp449) goto $l456; else goto $l457;
    $l456:;
    if ($tmp446 <= $tmp448) goto $l450; else goto $l452;
    $l457:;
    if ($tmp446 < $tmp448) goto $l450; else goto $l452;
    $l450:;
    {
        panda$core$MutableString$append$panda$core$String(result417, &$s458);
        panda$core$Object* $tmp461 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType410->subtypes, i445);
        panda$core$Object* $tmp460 = $tmp461;
        panda$core$String* $tmp462 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp460));
        panda$core$String* $tmp459 = $tmp462;
        panda$core$MutableString$append$panda$core$String(result417, $tmp459);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
        panda$core$Panda$unref$panda$core$Object($tmp460);
    }
    $l453:;
    int64_t $tmp464 = $tmp448 - i445.value;
    if ($tmp449) goto $l465; else goto $l466;
    $l465:;
    if ((uint64_t) $tmp464 >= 1) goto $l463; else goto $l452;
    $l466:;
    if ((uint64_t) $tmp464 > 1) goto $l463; else goto $l452;
    $l463:;
    i445.value += 1;
    goto $l450;
    $l452:;
    panda$core$MutableString$append$panda$core$String(result417, &$s469);
    {
        panda$core$String* $tmp473 = panda$core$MutableString$finish$R$panda$core$String(result417);
        panda$core$String* $tmp472 = $tmp473;
        panda$core$String* $tmp471 = $tmp472;
        tmp5470 = $tmp471;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp471));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result417));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inheritedType410));
        }
        panda$core$String* $tmp474 = tmp5470;
        return $tmp474;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp475.value);
    panda$core$Object* $tmp482 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp481 = $tmp482;
    panda$core$String* $tmp483 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp481));
    panda$core$String* $tmp480 = $tmp483;
    panda$core$String* $tmp484 = panda$core$String$convert$R$panda$core$String($tmp480);
    panda$core$String* $tmp479 = $tmp484;
    panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp479, &$s485);
    panda$core$String* $tmp478 = $tmp486;
    panda$core$String* $tmp477 = $tmp478;
    panda$core$String* $tmp476 = $tmp477;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp477));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp478));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
    panda$core$Panda$unref$panda$core$Object($tmp481);
    return $tmp476;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces487;
    panda$core$String* previous496;
    panda$collections$Iterator* Iter$375$9499;
    org$pandalanguage$pandac$Type* intfType514;
    org$pandalanguage$pandac$ClassDecl* intf521;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC528;
    panda$collections$ListView* methods532;
    panda$core$String* name539;
    panda$core$MutableString* result555;
    panda$core$String* separator601;
    panda$collections$Iterator* Iter$384$13604;
    org$pandalanguage$pandac$MethodDecl* m619;
    panda$core$String* tmp6645;
    panda$core$Object* $tmp492 = (($fn491) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp490 = $tmp492;
    org$pandalanguage$pandac$Type* $tmp494 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$Type* $tmp493 = $tmp494;
    panda$collections$Set* $tmp495 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(((org$pandalanguage$pandac$Compiler*) $tmp490), $tmp493);
    panda$collections$Set* $tmp489 = $tmp495;
    panda$collections$Set* $tmp488 = $tmp489;
    interfaces487 = $tmp488;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp488));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp493));
    panda$core$Panda$unref$panda$core$Object($tmp490);
    panda$core$String* $tmp497 = &$s498;
    previous496 = $tmp497;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp497));
    {
        ITable* $tmp502 = ((panda$collections$Iterable*) interfaces487)->$class->itable;
        while ($tmp502->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp502 = $tmp502->next;
        }
        $fn504 $tmp503 = $tmp502->methods[0];
        panda$collections$Iterator* $tmp505 = $tmp503(((panda$collections$Iterable*) interfaces487));
        panda$collections$Iterator* $tmp501 = $tmp505;
        panda$collections$Iterator* $tmp500 = $tmp501;
        Iter$375$9499 = $tmp500;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp500));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
        $l506:;
        ITable* $tmp509 = Iter$375$9499->$class->itable;
        while ($tmp509->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp509 = $tmp509->next;
        }
        $fn511 $tmp510 = $tmp509->methods[0];
        panda$core$Bit $tmp512 = $tmp510(Iter$375$9499);
        panda$core$Bit $tmp513 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp512);
        bool $tmp508 = $tmp513.value;
        if (!$tmp508) goto $l507;
        {
            ITable* $tmp517 = Iter$375$9499->$class->itable;
            while ($tmp517->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp517 = $tmp517->next;
            }
            $fn519 $tmp518 = $tmp517->methods[1];
            panda$core$Object* $tmp520 = $tmp518(Iter$375$9499);
            panda$core$Object* $tmp516 = $tmp520;
            org$pandalanguage$pandac$Type* $tmp515 = ((org$pandalanguage$pandac$Type*) $tmp516);
            intfType514 = $tmp515;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp515));
            panda$core$Panda$unref$panda$core$Object($tmp516);
            panda$core$Object* $tmp526 = (($fn525) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp524 = $tmp526;
            org$pandalanguage$pandac$ClassDecl* $tmp527 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp524), intfType514);
            org$pandalanguage$pandac$ClassDecl* $tmp523 = $tmp527;
            org$pandalanguage$pandac$ClassDecl* $tmp522 = $tmp523;
            intf521 = $tmp522;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp522));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp523));
            panda$core$Panda$unref$panda$core$Object($tmp524);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp531 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf521);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp530 = $tmp531;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp529 = $tmp530;
            intfCC528 = $tmp529;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp529));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp530));
            panda$core$Object* $tmp537 = (($fn536) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp535 = $tmp537;
            panda$collections$ListView* $tmp538 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp535), p_cl, intfType514);
            panda$collections$ListView* $tmp534 = $tmp538;
            panda$collections$ListView* $tmp533 = $tmp534;
            methods532 = $tmp533;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp533));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
            panda$core$Panda$unref$panda$core$Object($tmp535);
            panda$core$String* $tmp546 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp545 = $tmp546;
            panda$core$String* $tmp547 = panda$core$String$convert$R$panda$core$String($tmp545);
            panda$core$String* $tmp544 = $tmp547;
            panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp544, &$s548);
            panda$core$String* $tmp543 = $tmp549;
            panda$core$String* $tmp551 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf521)->name);
            panda$core$String* $tmp550 = $tmp551;
            panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp543, $tmp550);
            panda$core$String* $tmp542 = $tmp552;
            panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp542, &$s553);
            panda$core$String* $tmp541 = $tmp554;
            panda$core$String* $tmp540 = $tmp541;
            name539 = $tmp540;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp540));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
            panda$core$MutableString* $tmp558 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            org$pandalanguage$pandac$Type* $tmp566 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp565 = $tmp566;
            panda$core$String* $tmp567 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp565);
            panda$core$String* $tmp564 = $tmp567;
            panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s563, $tmp564);
            panda$core$String* $tmp562 = $tmp568;
            panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp562, &$s569);
            panda$core$String* $tmp561 = $tmp570;
            ITable* $tmp577 = ((panda$collections$CollectionView*) methods532)->$class->itable;
            while ($tmp577->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp577 = $tmp577->next;
            }
            $fn579 $tmp578 = $tmp577->methods[0];
            panda$core$Int64 $tmp580 = $tmp578(((panda$collections$CollectionView*) methods532));
            panda$core$Int64$wrapper* $tmp581;
            $tmp581 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp581->value = $tmp580;
            panda$core$Object* $tmp576 = ((panda$core$Object*) $tmp581);
            panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s575, $tmp576);
            panda$core$String* $tmp574 = $tmp582;
            panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp574, &$s583);
            panda$core$String* $tmp573 = $tmp584;
            panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp573, name539);
            panda$core$String* $tmp572 = $tmp585;
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp572, &$s586);
            panda$core$String* $tmp571 = $tmp587;
            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp561, $tmp571);
            panda$core$String* $tmp560 = $tmp588;
            panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s593, intfCC528->name);
            panda$core$String* $tmp592 = $tmp594;
            panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp592, &$s595);
            panda$core$String* $tmp591 = $tmp596;
            panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp591, previous496);
            panda$core$String* $tmp590 = $tmp597;
            panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp590, &$s598);
            panda$core$String* $tmp589 = $tmp599;
            panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, $tmp589);
            panda$core$String* $tmp559 = $tmp600;
            panda$core$MutableString$init$panda$core$String($tmp558, $tmp559);
            panda$core$MutableString* $tmp557 = $tmp558;
            panda$core$MutableString* $tmp556 = $tmp557;
            result555 = $tmp556;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp556));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp589));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp591));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp560));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp571));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp574));
            panda$core$Panda$unref$panda$core$Object($tmp576);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp561));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp562));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp564));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
            panda$core$String* $tmp602 = &$s603;
            separator601 = $tmp602;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp602));
            {
                ITable* $tmp607 = ((panda$collections$Iterable*) methods532)->$class->itable;
                while ($tmp607->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp607 = $tmp607->next;
                }
                $fn609 $tmp608 = $tmp607->methods[0];
                panda$collections$Iterator* $tmp610 = $tmp608(((panda$collections$Iterable*) methods532));
                panda$collections$Iterator* $tmp606 = $tmp610;
                panda$collections$Iterator* $tmp605 = $tmp606;
                Iter$384$13604 = $tmp605;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp605));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
                $l611:;
                ITable* $tmp614 = Iter$384$13604->$class->itable;
                while ($tmp614->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp614 = $tmp614->next;
                }
                $fn616 $tmp615 = $tmp614->methods[0];
                panda$core$Bit $tmp617 = $tmp615(Iter$384$13604);
                panda$core$Bit $tmp618 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp617);
                bool $tmp613 = $tmp618.value;
                if (!$tmp613) goto $l612;
                {
                    ITable* $tmp622 = Iter$384$13604->$class->itable;
                    while ($tmp622->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp622 = $tmp622->next;
                    }
                    $fn624 $tmp623 = $tmp622->methods[1];
                    panda$core$Object* $tmp625 = $tmp623(Iter$384$13604);
                    panda$core$Object* $tmp621 = $tmp625;
                    org$pandalanguage$pandac$MethodDecl* $tmp620 = ((org$pandalanguage$pandac$MethodDecl*) $tmp621);
                    m619 = $tmp620;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp620));
                    panda$core$Panda$unref$panda$core$Object($tmp621);
                    panda$core$MutableString$append$panda$core$String(result555, separator601);
                    {
                        panda$core$String* $tmp626 = separator601;
                        panda$core$String* $tmp627 = &$s628;
                        separator601 = $tmp627;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp627));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp626));
                    }
                    panda$core$Bit $tmp629 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m619->annotations);
                    if ($tmp629.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result555, &$s630);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp632 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m619);
                        panda$core$String* $tmp631 = $tmp632;
                        panda$core$MutableString$append$panda$core$String(result555, $tmp631);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp631));
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m619));
                }
                goto $l611;
                $l612:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$384$13604));
            }
            panda$core$MutableString$append$panda$core$String(result555, &$s633);
            panda$core$String* $tmp635 = panda$core$MutableString$finish$R$panda$core$String(result555);
            panda$core$String* $tmp634 = $tmp635;
            (($fn636) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp634);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
            {
                panda$core$String* $tmp637 = previous496;
                panda$core$String* $tmp642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s641, name539);
                panda$core$String* $tmp640 = $tmp642;
                panda$core$String* $tmp644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp640, &$s643);
                panda$core$String* $tmp639 = $tmp644;
                panda$core$String* $tmp638 = $tmp639;
                previous496 = $tmp638;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp638));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp640));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator601));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods532));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result555));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf521));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfType514));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name539));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfCC528));
            }
        }
        goto $l506;
        $l507:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$375$9499));
    }
    {
        panda$core$String* $tmp646 = previous496;
        tmp6645 = $tmp646;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp646));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous496));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) interfaces487));
        }
        panda$core$String* $tmp647 = tmp6645;
        return $tmp647;
    }
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer648;
    panda$io$IndentedOutputStream* out652;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found656;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* tmp7660;
    org$pandalanguage$pandac$Type* effectiveReturnType669;
    panda$core$String* resultName675;
    panda$core$MutableString* resultType682;
    panda$core$String* self_t699;
    panda$core$Char8 $tmp709;
    panda$core$Range$LTpanda$core$Int64$GT $tmp710;
    panda$core$String* pType725;
    panda$collections$Array* casts756;
    panda$core$Range$LTpanda$core$Int64$GT $tmp760;
    panda$core$String* p775;
    panda$core$Range$LTpanda$core$Int64$GT $tmp821;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result869;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* tmp8878;
    panda$io$MemoryOutputStream* $tmp651 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp651);
    panda$io$MemoryOutputStream* $tmp650 = $tmp651;
    panda$io$MemoryOutputStream* $tmp649 = $tmp650;
    outBuffer648 = $tmp649;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp649));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp650));
    panda$io$IndentedOutputStream* $tmp655 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp655, ((panda$io$OutputStream*) outBuffer648));
    panda$io$IndentedOutputStream* $tmp654 = $tmp655;
    panda$io$IndentedOutputStream* $tmp653 = $tmp654;
    out652 = $tmp653;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp653));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp654));
    panda$core$Object* $tmp659 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    panda$core$Object* $tmp658 = $tmp659;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp657 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp658);
    found656 = $tmp657;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp657));
    panda$core$Panda$unref$panda$core$Object($tmp658);
    if (((panda$core$Bit) { found656 != NULL }).value) {
    {
        {
            org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp661 = found656;
            tmp7660 = $tmp661;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp661));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found656));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) out652));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outBuffer648));
            }
            org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp662 = tmp7660;
            return $tmp662;
        }
    }
    }
    panda$core$Bit $tmp663 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp663.value);
    panda$core$Int64 $tmp664 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp665 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp666 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp665, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp664, $tmp666);
    PANDA_ASSERT($tmp667.value);
    panda$core$Bit $tmp668 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp668.value);
    panda$core$Int64 $tmp672 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp673 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp672, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp674 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp673);
    panda$core$Object* $tmp671 = $tmp674;
    org$pandalanguage$pandac$Type* $tmp670 = ((org$pandalanguage$pandac$Type*) $tmp671);
    effectiveReturnType669 = $tmp670;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp670));
    panda$core$Panda$unref$panda$core$Object($tmp671);
    panda$core$String* $tmp679 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp678 = $tmp679;
    panda$core$String* $tmp681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp678, &$s680);
    panda$core$String* $tmp677 = $tmp681;
    panda$core$String* $tmp676 = $tmp677;
    resultName675 = $tmp676;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp676));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp678));
    panda$core$MutableString* $tmp685 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp687 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType669);
    panda$core$String* $tmp686 = $tmp687;
    panda$core$MutableString$init$panda$core$String($tmp685, $tmp686);
    panda$core$MutableString* $tmp684 = $tmp685;
    panda$core$MutableString* $tmp683 = $tmp684;
    resultType682 = $tmp683;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp683));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp686));
    panda$core$String* $tmp692 = panda$core$MutableString$convert$R$panda$core$String(resultType682);
    panda$core$String* $tmp691 = $tmp692;
    panda$core$String* $tmp694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp691, &$s693);
    panda$core$String* $tmp690 = $tmp694;
    panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp690, resultName675);
    panda$core$String* $tmp689 = $tmp695;
    panda$core$String* $tmp697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp689, &$s696);
    panda$core$String* $tmp688 = $tmp697;
    (($fn698) ((panda$io$OutputStream*) out652)->$class->vtable[16])(((panda$io$OutputStream*) out652), $tmp688);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp688));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp689));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
    panda$core$String* $tmp702 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp701 = $tmp702;
    panda$core$String* $tmp700 = $tmp701;
    self_t699 = $tmp700;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp700));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
    panda$core$String* $tmp705 = panda$core$String$convert$R$panda$core$String(self_t699);
    panda$core$String* $tmp704 = $tmp705;
    panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp704, &$s706);
    panda$core$String* $tmp703 = $tmp707;
    (($fn708) ((panda$io$OutputStream*) out652)->$class->vtable[16])(((panda$io$OutputStream*) out652), $tmp703);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp703));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp704));
    panda$core$Char8$init$panda$core$UInt8(&$tmp709, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(resultType682, $tmp709);
    panda$core$MutableString$append$panda$core$String(resultType682, self_t699);
    panda$core$Int64 $tmp711 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp710, ((panda$core$Int64) { 0 }), $tmp711, ((panda$core$Bit) { false }));
    int64_t $tmp713 = $tmp710.min.value;
    panda$core$Int64 i712 = { $tmp713 };
    int64_t $tmp715 = $tmp710.max.value;
    bool $tmp716 = $tmp710.inclusive.value;
    if ($tmp716) goto $l723; else goto $l724;
    $l723:;
    if ($tmp713 <= $tmp715) goto $l717; else goto $l719;
    $l724:;
    if ($tmp713 < $tmp715) goto $l717; else goto $l719;
    $l717:;
    {
        panda$core$Object* $tmp729 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i712);
        panda$core$Object* $tmp728 = $tmp729;
        panda$core$String* $tmp730 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp728));
        panda$core$String* $tmp727 = $tmp730;
        panda$core$String* $tmp726 = $tmp727;
        pType725 = $tmp726;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp726));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp727));
        panda$core$Panda$unref$panda$core$Object($tmp728);
        panda$core$MutableString$append$panda$core$String(resultType682, &$s731);
        panda$core$MutableString$append$panda$core$String(resultType682, pType725);
        panda$core$String* $tmp737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s736, pType725);
        panda$core$String* $tmp735 = $tmp737;
        panda$core$String* $tmp739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp735, &$s738);
        panda$core$String* $tmp734 = $tmp739;
        panda$core$Int64$wrapper* $tmp741;
        $tmp741 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp741->value = i712;
        panda$core$Object* $tmp740 = ((panda$core$Object*) $tmp741);
        panda$core$String* $tmp742 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp734, $tmp740);
        panda$core$String* $tmp733 = $tmp742;
        panda$core$String* $tmp744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp733, &$s743);
        panda$core$String* $tmp732 = $tmp744;
        (($fn745) ((panda$io$OutputStream*) out652)->$class->vtable[16])(((panda$io$OutputStream*) out652), $tmp732);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp732));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp733));
        panda$core$Panda$unref$panda$core$Object($tmp740);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp734));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp735));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pType725));
    }
    $l720:;
    int64_t $tmp747 = $tmp715 - i712.value;
    if ($tmp716) goto $l748; else goto $l749;
    $l748:;
    if ((uint64_t) $tmp747 >= 1) goto $l746; else goto $l719;
    $l749:;
    if ((uint64_t) $tmp747 > 1) goto $l746; else goto $l719;
    $l746:;
    i712.value += 1;
    goto $l717;
    $l719:;
    (($fn753) ((panda$io$OutputStream*) out652)->$class->vtable[19])(((panda$io$OutputStream*) out652), &$s752);
    panda$core$Int64 $tmp754 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out652->level, ((panda$core$Int64) { 1 }));
    out652->level = $tmp754;
    panda$core$MutableString$append$panda$core$String(resultType682, &$s755);
    panda$collections$Array* $tmp759 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp759);
    panda$collections$Array* $tmp758 = $tmp759;
    panda$collections$Array* $tmp757 = $tmp758;
    casts756 = $tmp757;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp757));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp758));
    panda$core$Int64 $tmp761 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp760, ((panda$core$Int64) { 0 }), $tmp761, ((panda$core$Bit) { false }));
    int64_t $tmp763 = $tmp760.min.value;
    panda$core$Int64 i762 = { $tmp763 };
    int64_t $tmp765 = $tmp760.max.value;
    bool $tmp766 = $tmp760.inclusive.value;
    if ($tmp766) goto $l773; else goto $l774;
    $l773:;
    if ($tmp763 <= $tmp765) goto $l767; else goto $l769;
    $l774:;
    if ($tmp763 < $tmp765) goto $l767; else goto $l769;
    $l767:;
    {
        panda$core$Int64$wrapper* $tmp781;
        $tmp781 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp781->value = i762;
        panda$core$Object* $tmp780 = ((panda$core$Object*) $tmp781);
        panda$core$String* $tmp782 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s779, $tmp780);
        panda$core$String* $tmp778 = $tmp782;
        panda$core$String* $tmp784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp778, &$s783);
        panda$core$String* $tmp777 = $tmp784;
        panda$core$String* $tmp776 = $tmp777;
        p775 = $tmp776;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp776));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp777));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp778));
        panda$core$Panda$unref$panda$core$Object($tmp780);
        panda$core$Object* $tmp786 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i762);
        panda$core$Object* $tmp785 = $tmp786;
        panda$core$Object* $tmp788 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i762);
        panda$core$Object* $tmp787 = $tmp788;
        panda$core$Bit $tmp789 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp785)->type, ((org$pandalanguage$pandac$Type*) $tmp787));
        panda$core$Panda$unref$panda$core$Object($tmp787);
        panda$core$Panda$unref$panda$core$Object($tmp785);
        if ($tmp789.value) {
        {
            panda$core$Object* $tmp792 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i762);
            panda$core$Object* $tmp791 = $tmp792;
            panda$core$Object* $tmp794 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i762);
            panda$core$Object* $tmp793 = $tmp794;
            panda$core$String* $tmp795 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p775, ((org$pandalanguage$pandac$Type*) $tmp791), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp793)->type, out652);
            panda$core$String* $tmp790 = $tmp795;
            panda$collections$Array$add$panda$collections$Array$T(casts756, ((panda$core$Object*) $tmp790));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp790));
            panda$core$Panda$unref$panda$core$Object($tmp793);
            panda$core$Panda$unref$panda$core$Object($tmp791);
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts756, ((panda$core$Object*) p775));
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p775));
    }
    $l770:;
    int64_t $tmp797 = $tmp765 - i762.value;
    if ($tmp766) goto $l798; else goto $l799;
    $l798:;
    if ((uint64_t) $tmp797 >= 1) goto $l796; else goto $l769;
    $l799:;
    if ((uint64_t) $tmp797 > 1) goto $l796; else goto $l769;
    $l796:;
    i762.value += 1;
    goto $l767;
    $l769:;
    org$pandalanguage$pandac$Type* $tmp803 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp802 = $tmp803;
    panda$core$Bit $tmp804 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp802);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp802));
    if ($tmp804.value) {
    {
        panda$core$String* $tmp808 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp807 = $tmp808;
        panda$core$String* $tmp809 = panda$core$String$convert$R$panda$core$String($tmp807);
        panda$core$String* $tmp806 = $tmp809;
        panda$core$String* $tmp811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp806, &$s810);
        panda$core$String* $tmp805 = $tmp811;
        (($fn812) ((panda$io$OutputStream*) out652)->$class->vtable[16])(((panda$io$OutputStream*) out652), $tmp805);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp805));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp806));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp807));
    }
    }
    panda$core$String* $tmp816 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp815 = $tmp816;
    panda$core$String* $tmp817 = panda$core$String$convert$R$panda$core$String($tmp815);
    panda$core$String* $tmp814 = $tmp817;
    panda$core$String* $tmp819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp814, &$s818);
    panda$core$String* $tmp813 = $tmp819;
    (($fn820) ((panda$io$OutputStream*) out652)->$class->vtable[16])(((panda$io$OutputStream*) out652), $tmp813);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp813));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp814));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp815));
    panda$core$Int64 $tmp822 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp821, ((panda$core$Int64) { 0 }), $tmp822, ((panda$core$Bit) { false }));
    int64_t $tmp824 = $tmp821.min.value;
    panda$core$Int64 i823 = { $tmp824 };
    int64_t $tmp826 = $tmp821.max.value;
    bool $tmp827 = $tmp821.inclusive.value;
    if ($tmp827) goto $l834; else goto $l835;
    $l834:;
    if ($tmp824 <= $tmp826) goto $l828; else goto $l830;
    $l835:;
    if ($tmp824 < $tmp826) goto $l828; else goto $l830;
    $l828:;
    {
        panda$core$Object* $tmp840 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts756, i823);
        panda$core$Object* $tmp839 = $tmp840;
        panda$core$String* $tmp841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s838, ((panda$core$String*) $tmp839));
        panda$core$String* $tmp837 = $tmp841;
        panda$core$String* $tmp843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp837, &$s842);
        panda$core$String* $tmp836 = $tmp843;
        (($fn844) ((panda$io$OutputStream*) out652)->$class->vtable[16])(((panda$io$OutputStream*) out652), $tmp836);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp836));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp837));
        panda$core$Panda$unref$panda$core$Object($tmp839);
    }
    $l831:;
    int64_t $tmp846 = $tmp826 - i823.value;
    if ($tmp827) goto $l847; else goto $l848;
    $l847:;
    if ((uint64_t) $tmp846 >= 1) goto $l845; else goto $l830;
    $l848:;
    if ((uint64_t) $tmp846 > 1) goto $l845; else goto $l830;
    $l845:;
    i823.value += 1;
    goto $l828;
    $l830:;
    (($fn852) ((panda$io$OutputStream*) out652)->$class->vtable[19])(((panda$io$OutputStream*) out652), &$s851);
    org$pandalanguage$pandac$Type* $tmp854 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp853 = $tmp854;
    panda$core$Bit $tmp855 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp853);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp853));
    if ($tmp855.value) {
    {
        panda$core$String* $tmp861 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s860, p_raw->returnType, effectiveReturnType669, out652);
        panda$core$String* $tmp859 = $tmp861;
        panda$core$String* $tmp862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s858, $tmp859);
        panda$core$String* $tmp857 = $tmp862;
        panda$core$String* $tmp864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp857, &$s863);
        panda$core$String* $tmp856 = $tmp864;
        (($fn865) ((panda$io$OutputStream*) out652)->$class->vtable[19])(((panda$io$OutputStream*) out652), $tmp856);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp856));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp857));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp859));
    }
    }
    panda$core$Int64 $tmp866 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out652->level, ((panda$core$Int64) { 1 }));
    out652->level = $tmp866;
    (($fn868) ((panda$io$OutputStream*) out652)->$class->vtable[19])(((panda$io$OutputStream*) out652), &$s867);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp872 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class);
    panda$core$String* $tmp874 = panda$core$MutableString$finish$R$panda$core$String(resultType682);
    panda$core$String* $tmp873 = $tmp874;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp872, resultName675, $tmp873);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp871 = $tmp872;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp870 = $tmp871;
    result869 = $tmp870;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp870));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp873));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result869));
    panda$core$String* $tmp876 = panda$io$MemoryOutputStream$finish$R$panda$core$String(outBuffer648);
    panda$core$String* $tmp875 = $tmp876;
    (($fn877) p_rawOut->$class->vtable[16])(p_rawOut, $tmp875);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp875));
    {
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp879 = result869;
        tmp8878 = $tmp879;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp879));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found656));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) casts756));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result869));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultName675));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self_t699));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) out652));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) effectiveReturnType669));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outBuffer648));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultType682));
        }
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp880 = tmp8878;
        return $tmp880;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod882;
    panda$core$String* result886;
    panda$core$String* selfType895;
    org$pandalanguage$pandac$Type* actualMethodType922;
    org$pandalanguage$pandac$Type* inheritedMethodType929;
    panda$core$Range$LTpanda$core$Int64$GT $tmp936;
    panda$collections$Array* parameters978;
    panda$core$Range$LTpanda$core$Int64$GT $tmp982;
    panda$collections$Array* children1011;
    org$pandalanguage$pandac$Position $tmp1017;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1033;
    panda$core$String* tmp91070;
    panda$core$Bit $tmp881 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp881.value);
    org$pandalanguage$pandac$MethodDecl* $tmp883 = self->currentMethod;
    oldMethod882 = $tmp883;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp883));
    {
        org$pandalanguage$pandac$MethodDecl* $tmp884 = self->currentMethod;
        org$pandalanguage$pandac$MethodDecl* $tmp885 = p_m;
        self->currentMethod = $tmp885;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp885));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp884));
    }
    panda$core$String* $tmp891 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp890 = $tmp891;
    panda$core$String* $tmp892 = panda$core$String$convert$R$panda$core$String($tmp890);
    panda$core$String* $tmp889 = $tmp892;
    panda$core$String* $tmp894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp889, &$s893);
    panda$core$String* $tmp888 = $tmp894;
    panda$core$String* $tmp887 = $tmp888;
    result886 = $tmp887;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp887));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp889));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp890));
    panda$core$String* $tmp900 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp899 = $tmp900;
    panda$core$String* $tmp901 = panda$core$String$convert$R$panda$core$String($tmp899);
    panda$core$String* $tmp898 = $tmp901;
    panda$core$String* $tmp903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp898, &$s902);
    panda$core$String* $tmp897 = $tmp903;
    panda$core$String* $tmp896 = $tmp897;
    selfType895 = $tmp896;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp896));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp897));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp898));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp899));
    panda$core$String* $tmp911 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp910 = $tmp911;
    panda$core$String* $tmp912 = panda$core$String$convert$R$panda$core$String($tmp910);
    panda$core$String* $tmp909 = $tmp912;
    panda$core$String* $tmp914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp909, &$s913);
    panda$core$String* $tmp908 = $tmp914;
    panda$core$String* $tmp915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp908, result886);
    panda$core$String* $tmp907 = $tmp915;
    panda$core$String* $tmp917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp907, &$s916);
    panda$core$String* $tmp906 = $tmp917;
    panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp906, selfType895);
    panda$core$String* $tmp905 = $tmp918;
    panda$core$String* $tmp920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp905, &$s919);
    panda$core$String* $tmp904 = $tmp920;
    (($fn921) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp904);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp904));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp905));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp906));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp907));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp908));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp910));
    panda$core$Object* $tmp927 = (($fn926) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp925 = $tmp927;
    org$pandalanguage$pandac$Type* $tmp928 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp925), p_m);
    org$pandalanguage$pandac$Type* $tmp924 = $tmp928;
    org$pandalanguage$pandac$Type* $tmp923 = $tmp924;
    actualMethodType922 = $tmp923;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp923));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp924));
    panda$core$Panda$unref$panda$core$Object($tmp925);
    panda$core$Object* $tmp934 = (($fn933) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp932 = $tmp934;
    org$pandalanguage$pandac$Type* $tmp935 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp932), p_m);
    org$pandalanguage$pandac$Type* $tmp931 = $tmp935;
    org$pandalanguage$pandac$Type* $tmp930 = $tmp931;
    inheritedMethodType929 = $tmp930;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp930));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp931));
    panda$core$Panda$unref$panda$core$Object($tmp932);
    panda$core$Int64 $tmp937 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp936, ((panda$core$Int64) { 0 }), $tmp937, ((panda$core$Bit) { false }));
    int64_t $tmp939 = $tmp936.min.value;
    panda$core$Int64 i938 = { $tmp939 };
    int64_t $tmp941 = $tmp936.max.value;
    bool $tmp942 = $tmp936.inclusive.value;
    if ($tmp942) goto $l949; else goto $l950;
    $l949:;
    if ($tmp939 <= $tmp941) goto $l943; else goto $l945;
    $l950:;
    if ($tmp939 < $tmp941) goto $l943; else goto $l945;
    $l943:;
    {
        panda$core$Object* $tmp958 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType929->subtypes, i938);
        panda$core$Object* $tmp957 = $tmp958;
        panda$core$String* $tmp959 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp957));
        panda$core$String* $tmp956 = $tmp959;
        panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s955, $tmp956);
        panda$core$String* $tmp954 = $tmp960;
        panda$core$String* $tmp962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp954, &$s961);
        panda$core$String* $tmp953 = $tmp962;
        panda$core$Object* $tmp964 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i938);
        panda$core$Object* $tmp963 = $tmp964;
        panda$core$String* $tmp965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp953, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp963)->name);
        panda$core$String* $tmp952 = $tmp965;
        panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp952, &$s966);
        panda$core$String* $tmp951 = $tmp967;
        (($fn968) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp951);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp951));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp952));
        panda$core$Panda$unref$panda$core$Object($tmp963);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp953));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp954));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp956));
        panda$core$Panda$unref$panda$core$Object($tmp957);
    }
    $l946:;
    int64_t $tmp970 = $tmp941 - i938.value;
    if ($tmp942) goto $l971; else goto $l972;
    $l971:;
    if ((uint64_t) $tmp970 >= 1) goto $l969; else goto $l945;
    $l972:;
    if ((uint64_t) $tmp970 > 1) goto $l969; else goto $l945;
    $l969:;
    i938.value += 1;
    goto $l943;
    $l945:;
    (($fn976) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s975);
    panda$core$Int64 $tmp977 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp977;
    panda$collections$Array* $tmp981 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp981);
    panda$collections$Array* $tmp980 = $tmp981;
    panda$collections$Array* $tmp979 = $tmp980;
    parameters978 = $tmp979;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp979));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp980));
    panda$core$Int64 $tmp983 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp982, ((panda$core$Int64) { 0 }), $tmp983, ((panda$core$Bit) { false }));
    int64_t $tmp985 = $tmp982.min.value;
    panda$core$Int64 i984 = { $tmp985 };
    int64_t $tmp987 = $tmp982.max.value;
    bool $tmp988 = $tmp982.inclusive.value;
    if ($tmp988) goto $l995; else goto $l996;
    $l995:;
    if ($tmp985 <= $tmp987) goto $l989; else goto $l991;
    $l996:;
    if ($tmp985 < $tmp987) goto $l989; else goto $l991;
    $l989:;
    {
        panda$core$Object* $tmp999 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i984);
        panda$core$Object* $tmp998 = $tmp999;
        panda$core$Object* $tmp1001 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType929->subtypes, i984);
        panda$core$Object* $tmp1000 = $tmp1001;
        panda$core$Object* $tmp1003 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType922->subtypes, i984);
        panda$core$Object* $tmp1002 = $tmp1003;
        panda$core$String* $tmp1004 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp998)->name, ((org$pandalanguage$pandac$Type*) $tmp1000), ((org$pandalanguage$pandac$Type*) $tmp1002), p_out);
        panda$core$String* $tmp997 = $tmp1004;
        panda$collections$Array$add$panda$collections$Array$T(parameters978, ((panda$core$Object*) $tmp997));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp997));
        panda$core$Panda$unref$panda$core$Object($tmp1002);
        panda$core$Panda$unref$panda$core$Object($tmp1000);
        panda$core$Panda$unref$panda$core$Object($tmp998);
    }
    $l992:;
    int64_t $tmp1006 = $tmp987 - i984.value;
    if ($tmp988) goto $l1007; else goto $l1008;
    $l1007:;
    if ((uint64_t) $tmp1006 >= 1) goto $l1005; else goto $l991;
    $l1008:;
    if ((uint64_t) $tmp1006 > 1) goto $l1005; else goto $l991;
    $l1005:;
    i984.value += 1;
    goto $l989;
    $l991:;
    panda$collections$Array* $tmp1014 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1014);
    panda$collections$Array* $tmp1013 = $tmp1014;
    panda$collections$Array* $tmp1012 = $tmp1013;
    children1011 = $tmp1012;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1012));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1013));
    org$pandalanguage$pandac$IRNode* $tmp1016 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
    org$pandalanguage$pandac$Position$init(&$tmp1017);
    org$pandalanguage$pandac$Type* $tmp1019 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp1018 = $tmp1019;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1016, ((panda$core$Int64) { 31 }), $tmp1017, $tmp1018);
    org$pandalanguage$pandac$IRNode* $tmp1015 = $tmp1016;
    panda$collections$Array$add$panda$collections$Array$T(children1011, ((panda$core$Object*) $tmp1015));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1015));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1018));
    org$pandalanguage$pandac$Type* $tmp1021 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp1020 = $tmp1021;
    panda$core$Bit $tmp1022 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1020);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1020));
    if ($tmp1022.value) {
    {
        (($fn1024) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1023);
    }
    }
    panda$core$String* $tmp1028 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp1027 = $tmp1028;
    panda$core$String* $tmp1029 = panda$core$String$convert$R$panda$core$String($tmp1027);
    panda$core$String* $tmp1026 = $tmp1029;
    panda$core$String* $tmp1031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1026, &$s1030);
    panda$core$String* $tmp1025 = $tmp1031;
    (($fn1032) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1025);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1025));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1026));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1027));
    panda$core$Int64 $tmp1034 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1033, ((panda$core$Int64) { 0 }), $tmp1034, ((panda$core$Bit) { false }));
    int64_t $tmp1036 = $tmp1033.min.value;
    panda$core$Int64 i1035 = { $tmp1036 };
    int64_t $tmp1038 = $tmp1033.max.value;
    bool $tmp1039 = $tmp1033.inclusive.value;
    if ($tmp1039) goto $l1046; else goto $l1047;
    $l1046:;
    if ($tmp1036 <= $tmp1038) goto $l1040; else goto $l1042;
    $l1047:;
    if ($tmp1036 < $tmp1038) goto $l1040; else goto $l1042;
    $l1040:;
    {
        panda$core$Object* $tmp1052 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters978, i1035);
        panda$core$Object* $tmp1051 = $tmp1052;
        panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1050, ((panda$core$String*) $tmp1051));
        panda$core$String* $tmp1049 = $tmp1053;
        panda$core$String* $tmp1055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, &$s1054);
        panda$core$String* $tmp1048 = $tmp1055;
        (($fn1056) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1048);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1049));
        panda$core$Panda$unref$panda$core$Object($tmp1051);
    }
    $l1043:;
    int64_t $tmp1058 = $tmp1038 - i1035.value;
    if ($tmp1039) goto $l1059; else goto $l1060;
    $l1059:;
    if ((uint64_t) $tmp1058 >= 1) goto $l1057; else goto $l1042;
    $l1060:;
    if ((uint64_t) $tmp1058 > 1) goto $l1057; else goto $l1042;
    $l1057:;
    i1035.value += 1;
    goto $l1040;
    $l1042:;
    (($fn1064) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1063);
    panda$core$Int64 $tmp1065 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1065;
    (($fn1067) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1066);
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1068 = self->currentMethod;
        org$pandalanguage$pandac$MethodDecl* $tmp1069 = oldMethod882;
        self->currentMethod = $tmp1069;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1069));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1068));
    }
    {
        panda$core$String* $tmp1071 = result886;
        tmp91070 = $tmp1071;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1071));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inheritedMethodType929));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) selfType895));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result886));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters978));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldMethod882));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1011));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType922));
        }
        panda$core$String* $tmp1072 = tmp91070;
        return $tmp1072;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces1073;
    panda$core$String* previous1082;
    panda$collections$Iterator* Iter$497$91085;
    org$pandalanguage$pandac$Type* intfType1100;
    org$pandalanguage$pandac$ClassDecl* intf1107;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC1114;
    panda$collections$ListView* methods1118;
    panda$core$String* name1125;
    panda$core$MutableString* result1141;
    panda$core$String* separator1196;
    panda$collections$Iterator* Iter$506$131199;
    org$pandalanguage$pandac$MethodDecl* m1214;
    panda$core$String* tmp101240;
    panda$core$Object* $tmp1078 = (($fn1077) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp1076 = $tmp1078;
    org$pandalanguage$pandac$Type* $tmp1080 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$Type* $tmp1079 = $tmp1080;
    panda$collections$Set* $tmp1081 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(((org$pandalanguage$pandac$Compiler*) $tmp1076), $tmp1079);
    panda$collections$Set* $tmp1075 = $tmp1081;
    panda$collections$Set* $tmp1074 = $tmp1075;
    interfaces1073 = $tmp1074;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1074));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1075));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1079));
    panda$core$Panda$unref$panda$core$Object($tmp1076);
    panda$core$String* $tmp1083 = &$s1084;
    previous1082 = $tmp1083;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1083));
    {
        ITable* $tmp1088 = ((panda$collections$Iterable*) interfaces1073)->$class->itable;
        while ($tmp1088->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1088 = $tmp1088->next;
        }
        $fn1090 $tmp1089 = $tmp1088->methods[0];
        panda$collections$Iterator* $tmp1091 = $tmp1089(((panda$collections$Iterable*) interfaces1073));
        panda$collections$Iterator* $tmp1087 = $tmp1091;
        panda$collections$Iterator* $tmp1086 = $tmp1087;
        Iter$497$91085 = $tmp1086;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1086));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1087));
        $l1092:;
        ITable* $tmp1095 = Iter$497$91085->$class->itable;
        while ($tmp1095->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1095 = $tmp1095->next;
        }
        $fn1097 $tmp1096 = $tmp1095->methods[0];
        panda$core$Bit $tmp1098 = $tmp1096(Iter$497$91085);
        panda$core$Bit $tmp1099 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1098);
        bool $tmp1094 = $tmp1099.value;
        if (!$tmp1094) goto $l1093;
        {
            ITable* $tmp1103 = Iter$497$91085->$class->itable;
            while ($tmp1103->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1103 = $tmp1103->next;
            }
            $fn1105 $tmp1104 = $tmp1103->methods[1];
            panda$core$Object* $tmp1106 = $tmp1104(Iter$497$91085);
            panda$core$Object* $tmp1102 = $tmp1106;
            org$pandalanguage$pandac$Type* $tmp1101 = ((org$pandalanguage$pandac$Type*) $tmp1102);
            intfType1100 = $tmp1101;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1101));
            panda$core$Panda$unref$panda$core$Object($tmp1102);
            panda$core$Object* $tmp1112 = (($fn1111) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp1110 = $tmp1112;
            org$pandalanguage$pandac$ClassDecl* $tmp1113 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1110), intfType1100);
            org$pandalanguage$pandac$ClassDecl* $tmp1109 = $tmp1113;
            org$pandalanguage$pandac$ClassDecl* $tmp1108 = $tmp1109;
            intf1107 = $tmp1108;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1108));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1109));
            panda$core$Panda$unref$panda$core$Object($tmp1110);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1117 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf1107);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1116 = $tmp1117;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1115 = $tmp1116;
            intfCC1114 = $tmp1115;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1115));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1116));
            panda$core$Object* $tmp1123 = (($fn1122) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp1121 = $tmp1123;
            panda$collections$ListView* $tmp1124 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1121), p_cl, intfType1100);
            panda$collections$ListView* $tmp1120 = $tmp1124;
            panda$collections$ListView* $tmp1119 = $tmp1120;
            methods1118 = $tmp1119;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1119));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1120));
            panda$core$Panda$unref$panda$core$Object($tmp1121);
            panda$core$String* $tmp1132 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1131 = $tmp1132;
            panda$core$String* $tmp1133 = panda$core$String$convert$R$panda$core$String($tmp1131);
            panda$core$String* $tmp1130 = $tmp1133;
            panda$core$String* $tmp1135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1130, &$s1134);
            panda$core$String* $tmp1129 = $tmp1135;
            panda$core$String* $tmp1137 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf1107)->name);
            panda$core$String* $tmp1136 = $tmp1137;
            panda$core$String* $tmp1138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1129, $tmp1136);
            panda$core$String* $tmp1128 = $tmp1138;
            panda$core$String* $tmp1140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1128, &$s1139);
            panda$core$String* $tmp1127 = $tmp1140;
            panda$core$String* $tmp1126 = $tmp1127;
            name1125 = $tmp1126;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1126));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1127));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1128));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1136));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1129));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1130));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1131));
            panda$core$MutableString* $tmp1144 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            org$pandalanguage$pandac$Type* $tmp1152 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1151 = $tmp1152;
            panda$core$String* $tmp1153 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1151);
            panda$core$String* $tmp1150 = $tmp1153;
            panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1149, $tmp1150);
            panda$core$String* $tmp1148 = $tmp1154;
            panda$core$String* $tmp1156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1148, &$s1155);
            panda$core$String* $tmp1147 = $tmp1156;
            ITable* $tmp1163 = ((panda$collections$CollectionView*) methods1118)->$class->itable;
            while ($tmp1163->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1163 = $tmp1163->next;
            }
            $fn1165 $tmp1164 = $tmp1163->methods[0];
            panda$core$Int64 $tmp1166 = $tmp1164(((panda$collections$CollectionView*) methods1118));
            panda$core$Int64$wrapper* $tmp1167;
            $tmp1167 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1167->value = $tmp1166;
            panda$core$Object* $tmp1162 = ((panda$core$Object*) $tmp1167);
            panda$core$String* $tmp1168 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1161, $tmp1162);
            panda$core$String* $tmp1160 = $tmp1168;
            panda$core$String* $tmp1170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1160, &$s1169);
            panda$core$String* $tmp1159 = $tmp1170;
            panda$core$String* $tmp1171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1159, name1125);
            panda$core$String* $tmp1158 = $tmp1171;
            panda$core$String* $tmp1173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1158, &$s1172);
            panda$core$String* $tmp1157 = $tmp1173;
            panda$core$String* $tmp1174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1147, $tmp1157);
            panda$core$String* $tmp1146 = $tmp1174;
            org$pandalanguage$pandac$Type* $tmp1184 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1183 = $tmp1184;
            panda$core$String* $tmp1185 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1183);
            panda$core$String* $tmp1182 = $tmp1185;
            panda$core$String* $tmp1186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1181, $tmp1182);
            panda$core$String* $tmp1180 = $tmp1186;
            panda$core$String* $tmp1188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1180, &$s1187);
            panda$core$String* $tmp1179 = $tmp1188;
            panda$core$String* $tmp1189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1179, intfCC1114->name);
            panda$core$String* $tmp1178 = $tmp1189;
            panda$core$String* $tmp1191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1178, &$s1190);
            panda$core$String* $tmp1177 = $tmp1191;
            panda$core$String* $tmp1192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1177, previous1082);
            panda$core$String* $tmp1176 = $tmp1192;
            panda$core$String* $tmp1194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1176, &$s1193);
            panda$core$String* $tmp1175 = $tmp1194;
            panda$core$String* $tmp1195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1146, $tmp1175);
            panda$core$String* $tmp1145 = $tmp1195;
            panda$core$MutableString$init$panda$core$String($tmp1144, $tmp1145);
            panda$core$MutableString* $tmp1143 = $tmp1144;
            panda$core$MutableString* $tmp1142 = $tmp1143;
            result1141 = $tmp1142;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1142));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1143));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1145));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1175));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1176));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1177));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1178));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1179));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1180));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1182));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1183));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1146));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1157));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1158));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1159));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1160));
            panda$core$Panda$unref$panda$core$Object($tmp1162);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1147));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1148));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1150));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1151));
            panda$core$String* $tmp1197 = &$s1198;
            separator1196 = $tmp1197;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1197));
            {
                ITable* $tmp1202 = ((panda$collections$Iterable*) methods1118)->$class->itable;
                while ($tmp1202->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1202 = $tmp1202->next;
                }
                $fn1204 $tmp1203 = $tmp1202->methods[0];
                panda$collections$Iterator* $tmp1205 = $tmp1203(((panda$collections$Iterable*) methods1118));
                panda$collections$Iterator* $tmp1201 = $tmp1205;
                panda$collections$Iterator* $tmp1200 = $tmp1201;
                Iter$506$131199 = $tmp1200;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1200));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1201));
                $l1206:;
                ITable* $tmp1209 = Iter$506$131199->$class->itable;
                while ($tmp1209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1209 = $tmp1209->next;
                }
                $fn1211 $tmp1210 = $tmp1209->methods[0];
                panda$core$Bit $tmp1212 = $tmp1210(Iter$506$131199);
                panda$core$Bit $tmp1213 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1212);
                bool $tmp1208 = $tmp1213.value;
                if (!$tmp1208) goto $l1207;
                {
                    ITable* $tmp1217 = Iter$506$131199->$class->itable;
                    while ($tmp1217->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1217 = $tmp1217->next;
                    }
                    $fn1219 $tmp1218 = $tmp1217->methods[1];
                    panda$core$Object* $tmp1220 = $tmp1218(Iter$506$131199);
                    panda$core$Object* $tmp1216 = $tmp1220;
                    org$pandalanguage$pandac$MethodDecl* $tmp1215 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1216);
                    m1214 = $tmp1215;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1215));
                    panda$core$Panda$unref$panda$core$Object($tmp1216);
                    panda$core$MutableString$append$panda$core$String(result1141, separator1196);
                    {
                        panda$core$String* $tmp1221 = separator1196;
                        panda$core$String* $tmp1222 = &$s1223;
                        separator1196 = $tmp1222;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1222));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1221));
                    }
                    panda$core$Bit $tmp1224 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1214->annotations);
                    if ($tmp1224.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1141, &$s1225);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp1227 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1214, self->wrapperShims);
                        panda$core$String* $tmp1226 = $tmp1227;
                        panda$core$MutableString$append$panda$core$String(result1141, $tmp1226);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1226));
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1214));
                }
                goto $l1206;
                $l1207:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$506$131199));
            }
            panda$core$MutableString$append$panda$core$String(result1141, &$s1228);
            panda$core$String* $tmp1230 = panda$core$MutableString$finish$R$panda$core$String(result1141);
            panda$core$String* $tmp1229 = $tmp1230;
            (($fn1231) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1229);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1229));
            {
                panda$core$String* $tmp1232 = previous1082;
                panda$core$String* $tmp1237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1236, name1125);
                panda$core$String* $tmp1235 = $tmp1237;
                panda$core$String* $tmp1239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1235, &$s1238);
                panda$core$String* $tmp1234 = $tmp1239;
                panda$core$String* $tmp1233 = $tmp1234;
                previous1082 = $tmp1233;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1233));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1234));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1235));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1232));
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1196));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods1118));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1141));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf1107));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfType1100));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfCC1114));
            }
        }
        goto $l1092;
        $l1093:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$497$91085));
    }
    {
        panda$core$String* $tmp1241 = previous1082;
        tmp101240 = $tmp1241;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1241));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) previous1082));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) interfaces1073));
        }
        panda$core$String* $tmp1242 = tmp101240;
        return $tmp1242;
    }
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp1244 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    panda$core$Bit $tmp1243 = $tmp1244;
    return $tmp1243;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result1249;
    org$pandalanguage$pandac$Type* declared1250;
    org$pandalanguage$pandac$Type* inherited1259;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim1267;
    panda$core$String* tmp111282;
    panda$core$Object* $tmp1247 = (($fn1246) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp1245 = $tmp1247;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(((org$pandalanguage$pandac$Compiler*) $tmp1245), p_m);
    panda$core$Panda$unref$panda$core$Object($tmp1245);
    panda$core$Bit $tmp1248 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp1248.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    memset(&result1249, 0, sizeof(result1249));
    panda$core$Object* $tmp1255 = (($fn1254) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp1253 = $tmp1255;
    org$pandalanguage$pandac$Type* $tmp1257 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp1256 = $tmp1257;
    org$pandalanguage$pandac$Type* $tmp1258 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp1253), p_m, $tmp1256);
    org$pandalanguage$pandac$Type* $tmp1252 = $tmp1258;
    org$pandalanguage$pandac$Type* $tmp1251 = $tmp1252;
    declared1250 = $tmp1251;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1251));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1252));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1256));
    panda$core$Panda$unref$panda$core$Object($tmp1253);
    panda$core$Object* $tmp1264 = (($fn1263) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp1262 = $tmp1264;
    org$pandalanguage$pandac$Type* $tmp1265 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp1262), p_m);
    org$pandalanguage$pandac$Type* $tmp1261 = $tmp1265;
    org$pandalanguage$pandac$Type* $tmp1260 = $tmp1261;
    inherited1259 = $tmp1260;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1260));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1261));
    panda$core$Panda$unref$panda$core$Object($tmp1262);
    panda$core$Bit $tmp1266 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared1250, inherited1259);
    if ($tmp1266.value) {
    {
        panda$core$Object* $tmp1273 = (($fn1272) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp1271 = $tmp1273;
        org$pandalanguage$pandac$Type* $tmp1274 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp1271), p_m);
        org$pandalanguage$pandac$Type* $tmp1270 = $tmp1274;
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1275 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp1270, ((panda$io$OutputStream*) self->shims));
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1269 = $tmp1275;
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1268 = $tmp1269;
        shim1267 = $tmp1268;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1268));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1269));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1270));
        panda$core$Panda$unref$panda$core$Object($tmp1271);
        {
            panda$core$String* $tmp1276 = result1249;
            panda$core$String* $tmp1277 = shim1267->name;
            result1249 = $tmp1277;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1277));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1276));
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) shim1267));
    }
    }
    else {
    {
        {
            panda$core$String* $tmp1278 = result1249;
            panda$core$String* $tmp1281 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            panda$core$String* $tmp1280 = $tmp1281;
            panda$core$String* $tmp1279 = $tmp1280;
            result1249 = $tmp1279;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1279));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1280));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1278));
        }
    }
    }
    {
        panda$core$String* $tmp1283 = result1249;
        tmp111282 = $tmp1283;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1283));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inherited1259));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1249));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declared1250));
        }
        panda$core$String* $tmp1284 = tmp111282;
        return $tmp1284;
    }
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result1285;
    panda$core$String* type1292;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp121308;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp131312;
    panda$collections$ListView* vtable1317;
    panda$core$String* superPtr1338;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC1339;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant1359;
    panda$core$String* name1370;
    panda$core$MutableString* code1376;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1387;
    panda$core$String* separator1435;
    panda$collections$Iterator* Iter$577$131438;
    org$pandalanguage$pandac$MethodDecl* m1453;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp141476;
    panda$core$Object* $tmp1288 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    panda$core$Object* $tmp1287 = $tmp1288;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1286 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1287);
    result1285 = $tmp1286;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1286));
    panda$core$Panda$unref$panda$core$Object($tmp1287);
    if (((panda$core$Bit) { result1285 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$core$Object* $tmp1291 = (($fn1290) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp1289 = $tmp1291;
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(((org$pandalanguage$pandac$Compiler*) $tmp1289), p_cl);
        panda$core$Panda$unref$panda$core$Object($tmp1289);
        memset(&type1292, 0, sizeof(type1292));
        panda$core$Bit $tmp1293 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp1293.value) {
        {
            {
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1294 = result1285;
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1297 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
                org$pandalanguage$pandac$Type* $tmp1302 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                org$pandalanguage$pandac$Type* $tmp1301 = $tmp1302;
                panda$core$String* $tmp1303 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1301)->name);
                panda$core$String* $tmp1300 = $tmp1303;
                panda$core$String* $tmp1304 = panda$core$String$convert$R$panda$core$String($tmp1300);
                panda$core$String* $tmp1299 = $tmp1304;
                panda$core$String* $tmp1306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1299, &$s1305);
                panda$core$String* $tmp1298 = $tmp1306;
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1297, $tmp1298, &$s1307);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1296 = $tmp1297;
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1295 = $tmp1296;
                result1285 = $tmp1295;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1295));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1296));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1298));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1299));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1301));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1294));
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1285));
            {
                panda$core$Object* $tmp1311 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
                panda$core$Object* $tmp1310 = $tmp1311;
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1309 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1310);
                tmp121308 = $tmp1309;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1309));
                panda$core$Panda$unref$panda$core$Object($tmp1310);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1292));
                {
                    tmp131312 = tmp121308;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1285));
                    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1313 = tmp131312;
                    return $tmp1313;
                }
            }
        }
        }
        panda$core$Object* $tmp1316 = (($fn1315) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp1314 = $tmp1316;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1314)->currentClass, ((panda$core$Object*) p_cl));
        panda$core$Panda$unref$panda$core$Object($tmp1314);
        panda$core$Object* $tmp1322 = (($fn1321) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp1320 = $tmp1322;
        panda$collections$ListView* $tmp1323 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1320), p_cl);
        panda$collections$ListView* $tmp1319 = $tmp1323;
        panda$collections$ListView* $tmp1318 = $tmp1319;
        vtable1317 = $tmp1318;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1318));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
        panda$core$Panda$unref$panda$core$Object($tmp1320);
        {
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1324 = result1285;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1327 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
            org$pandalanguage$pandac$Type* $tmp1332 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1331 = $tmp1332;
            panda$core$String* $tmp1333 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1331)->name);
            panda$core$String* $tmp1330 = $tmp1333;
            panda$core$String* $tmp1334 = panda$core$String$convert$R$panda$core$String($tmp1330);
            panda$core$String* $tmp1329 = $tmp1334;
            panda$core$String* $tmp1336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1329, &$s1335);
            panda$core$String* $tmp1328 = $tmp1336;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1327, $tmp1328, &$s1337);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1326 = $tmp1327;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1325 = $tmp1326;
            result1285 = $tmp1325;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1325));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1326));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1328));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1329));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1330));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1331));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1324));
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1285));
        memset(&superPtr1338, 0, sizeof(superPtr1338));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            panda$core$Object* $tmp1345 = (($fn1344) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp1343 = $tmp1345;
            org$pandalanguage$pandac$ClassDecl* $tmp1346 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1343), p_cl->rawSuper);
            org$pandalanguage$pandac$ClassDecl* $tmp1342 = $tmp1346;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1347 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1342);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1341 = $tmp1347;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1340 = $tmp1341;
            superCC1339 = $tmp1340;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1342));
            panda$core$Panda$unref$panda$core$Object($tmp1343);
            {
                panda$core$String* $tmp1348 = superPtr1338;
                panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1352, superCC1339->name);
                panda$core$String* $tmp1351 = $tmp1353;
                panda$core$String* $tmp1355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1351, &$s1354);
                panda$core$String* $tmp1350 = $tmp1355;
                panda$core$String* $tmp1349 = $tmp1350;
                superPtr1338 = $tmp1349;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1349));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1350));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1351));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1348));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCC1339));
        }
        }
        else {
        {
            {
                panda$core$String* $tmp1356 = superPtr1338;
                panda$core$String* $tmp1357 = &$s1358;
                superPtr1338 = $tmp1357;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1357));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1356));
            }
        }
        }
        panda$core$Object* $tmp1365 = (($fn1364) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp1363 = $tmp1365;
        org$pandalanguage$pandac$Type* $tmp1367 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$Type* $tmp1366 = $tmp1367;
        org$pandalanguage$pandac$ClassDecl* $tmp1368 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1363), $tmp1366);
        org$pandalanguage$pandac$ClassDecl* $tmp1362 = $tmp1368;
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1369 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1362);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1361 = $tmp1369;
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1360 = $tmp1361;
        clConstant1359 = $tmp1360;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1360));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1361));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1362));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1366));
        panda$core$Panda$unref$panda$core$Object($tmp1363);
        panda$core$String* $tmp1373 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp1372 = $tmp1373;
        panda$core$String* $tmp1371 = $tmp1372;
        name1370 = $tmp1371;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
        panda$core$Bit $tmp1375 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(name1370, &$s1374);
        PANDA_ASSERT($tmp1375.value);
        panda$core$MutableString* $tmp1379 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1387, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp1388 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(name1370, $tmp1387);
        panda$core$String* $tmp1386 = $tmp1388;
        panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1385, $tmp1386);
        panda$core$String* $tmp1384 = $tmp1389;
        panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1384, &$s1390);
        panda$core$String* $tmp1383 = $tmp1391;
        panda$core$String* $tmp1396 = panda$core$String$convert$R$panda$core$String(result1285->name);
        panda$core$String* $tmp1395 = $tmp1396;
        panda$core$String* $tmp1398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1395, &$s1397);
        panda$core$String* $tmp1394 = $tmp1398;
        panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1394, result1285->name);
        panda$core$String* $tmp1393 = $tmp1399;
        panda$core$String* $tmp1401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1393, &$s1400);
        panda$core$String* $tmp1392 = $tmp1401;
        panda$core$String* $tmp1402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1383, $tmp1392);
        panda$core$String* $tmp1382 = $tmp1402;
        panda$core$String* $tmp1408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1407, clConstant1359->name);
        panda$core$String* $tmp1406 = $tmp1408;
        panda$core$String* $tmp1410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1406, &$s1409);
        panda$core$String* $tmp1405 = $tmp1410;
        panda$core$Int64$wrapper* $tmp1412;
        $tmp1412 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp1412->value = ((panda$core$Int64) { -999 });
        panda$core$Object* $tmp1411 = ((panda$core$Object*) $tmp1412);
        panda$core$String* $tmp1413 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1405, $tmp1411);
        panda$core$String* $tmp1404 = $tmp1413;
        panda$core$String* $tmp1415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1404, &$s1414);
        panda$core$String* $tmp1403 = $tmp1415;
        panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1382, $tmp1403);
        panda$core$String* $tmp1381 = $tmp1416;
        panda$core$String* $tmp1423 = panda$core$String$convert$R$panda$core$String(name1370);
        panda$core$String* $tmp1422 = $tmp1423;
        panda$core$String* $tmp1425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1422, &$s1424);
        panda$core$String* $tmp1421 = $tmp1425;
        panda$core$String* $tmp1426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, superPtr1338);
        panda$core$String* $tmp1420 = $tmp1426;
        panda$core$String* $tmp1428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1420, &$s1427);
        panda$core$String* $tmp1419 = $tmp1428;
        panda$core$String* $tmp1430 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp1429 = $tmp1430;
        panda$core$String* $tmp1431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, $tmp1429);
        panda$core$String* $tmp1418 = $tmp1431;
        panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1418, &$s1432);
        panda$core$String* $tmp1417 = $tmp1433;
        panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1381, $tmp1417);
        panda$core$String* $tmp1380 = $tmp1434;
        panda$core$MutableString$init$panda$core$String($tmp1379, $tmp1380);
        panda$core$MutableString* $tmp1378 = $tmp1379;
        panda$core$MutableString* $tmp1377 = $tmp1378;
        code1376 = $tmp1377;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1377));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1378));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1380));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1417));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1418));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1429));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1419));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1420));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1422));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1403));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1404));
        panda$core$Panda$unref$panda$core$Object($tmp1411);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1405));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1406));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1382));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1392));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1393));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1394));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1395));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1383));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1384));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1386));
        panda$core$String* $tmp1436 = &$s1437;
        separator1435 = $tmp1436;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1436));
        {
            ITable* $tmp1441 = ((panda$collections$Iterable*) vtable1317)->$class->itable;
            while ($tmp1441->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1441 = $tmp1441->next;
            }
            $fn1443 $tmp1442 = $tmp1441->methods[0];
            panda$collections$Iterator* $tmp1444 = $tmp1442(((panda$collections$Iterable*) vtable1317));
            panda$collections$Iterator* $tmp1440 = $tmp1444;
            panda$collections$Iterator* $tmp1439 = $tmp1440;
            Iter$577$131438 = $tmp1439;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1440));
            $l1445:;
            ITable* $tmp1448 = Iter$577$131438->$class->itable;
            while ($tmp1448->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1448 = $tmp1448->next;
            }
            $fn1450 $tmp1449 = $tmp1448->methods[0];
            panda$core$Bit $tmp1451 = $tmp1449(Iter$577$131438);
            panda$core$Bit $tmp1452 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1451);
            bool $tmp1447 = $tmp1452.value;
            if (!$tmp1447) goto $l1446;
            {
                ITable* $tmp1456 = Iter$577$131438->$class->itable;
                while ($tmp1456->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1456 = $tmp1456->next;
                }
                $fn1458 $tmp1457 = $tmp1456->methods[1];
                panda$core$Object* $tmp1459 = $tmp1457(Iter$577$131438);
                panda$core$Object* $tmp1455 = $tmp1459;
                org$pandalanguage$pandac$MethodDecl* $tmp1454 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1455);
                m1453 = $tmp1454;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1454));
                panda$core$Panda$unref$panda$core$Object($tmp1455);
                panda$core$MutableString$append$panda$core$String(code1376, separator1435);
                panda$core$Bit $tmp1460 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1453->annotations);
                if ($tmp1460.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code1376, &$s1461);
                }
                }
                else {
                {
                    panda$core$String* $tmp1463 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1453);
                    panda$core$String* $tmp1462 = $tmp1463;
                    panda$core$MutableString$append$panda$core$String(code1376, $tmp1462);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1462));
                }
                }
                {
                    panda$core$String* $tmp1464 = separator1435;
                    panda$core$String* $tmp1465 = &$s1466;
                    separator1435 = $tmp1465;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1465));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1464));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1453));
            }
            goto $l1445;
            $l1446:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$577$131438));
        }
        panda$core$MutableString$append$panda$core$String(code1376, &$s1467);
        panda$core$String* $tmp1469 = panda$core$MutableString$finish$R$panda$core$String(code1376);
        panda$core$String* $tmp1468 = $tmp1469;
        (($fn1470) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1468);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1468));
        panda$core$Object* $tmp1474 = (($fn1473) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp1472 = $tmp1474;
        panda$core$Object* $tmp1475 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1472)->currentClass);
        panda$core$Object* $tmp1471 = $tmp1475;
        panda$core$Panda$unref$panda$core$Object($tmp1471);
        panda$core$Panda$unref$panda$core$Object($tmp1472);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1435));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1317));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1292));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superPtr1338));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1370));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code1376));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) clConstant1359));
        }
    }
    }
    {
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1477 = result1285;
        tmp141476 = $tmp1477;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1477));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1285));
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1478 = tmp141476;
        return $tmp1478;
    }
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1479;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result1488;
    panda$core$String* type1497;
    org$pandalanguage$pandac$ClassDecl* value1515;
    panda$collections$ListView* valueVTable1524;
    panda$collections$ListView* vtable1543;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC1550;
    panda$core$String* superCast1559;
    panda$core$String* itable1567;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant1571;
    panda$core$String* name1582;
    panda$core$MutableString* code1588;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1599;
    panda$core$String* separator1645;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1648;
    org$pandalanguage$pandac$MethodDecl* m1666;
    panda$core$String* methodName1673;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* tmp151706;
    panda$core$String* $tmp1484 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1483 = $tmp1484;
    panda$core$String* $tmp1485 = panda$core$String$convert$R$panda$core$String($tmp1483);
    panda$core$String* $tmp1482 = $tmp1485;
    panda$core$String* $tmp1487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1482, &$s1486);
    panda$core$String* $tmp1481 = $tmp1487;
    panda$core$String* $tmp1480 = $tmp1481;
    name1479 = $tmp1480;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1480));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1481));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1482));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1483));
    panda$core$Object* $tmp1491 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name1479));
    panda$core$Object* $tmp1490 = $tmp1491;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1489 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1490);
    result1488 = $tmp1489;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1489));
    panda$core$Panda$unref$panda$core$Object($tmp1490);
    if (((panda$core$Bit) { result1488 == NULL }).value) {
    {
        panda$core$Bit $tmp1492 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp1492.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1495 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1494 = $tmp1495;
            panda$core$String* $tmp1496 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1494);
            panda$core$String* $tmp1493 = $tmp1496;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1494));
            panda$core$String* $tmp1498 = &$s1499;
            type1497 = $tmp1498;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1498));
            panda$core$String* $tmp1504 = panda$core$String$convert$R$panda$core$String(name1479);
            panda$core$String* $tmp1503 = $tmp1504;
            panda$core$String* $tmp1506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1503, &$s1505);
            panda$core$String* $tmp1502 = $tmp1506;
            panda$core$String* $tmp1507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1502, type1497);
            panda$core$String* $tmp1501 = $tmp1507;
            panda$core$String* $tmp1509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1501, &$s1508);
            panda$core$String* $tmp1500 = $tmp1509;
            (($fn1510) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1500);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1500));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1501));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1502));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1503));
            {
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1511 = result1488;
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1514 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1514, name1479, type1497);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1513 = $tmp1514;
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1512 = $tmp1513;
                result1488 = $tmp1512;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1512));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1513));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1511));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1497));
        }
        }
        else {
        {
            panda$core$Object* $tmp1520 = (($fn1519) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp1518 = $tmp1520;
            org$pandalanguage$pandac$Type* $tmp1522 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1521 = $tmp1522;
            org$pandalanguage$pandac$ClassDecl* $tmp1523 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1518), $tmp1521);
            org$pandalanguage$pandac$ClassDecl* $tmp1517 = $tmp1523;
            org$pandalanguage$pandac$ClassDecl* $tmp1516 = $tmp1517;
            value1515 = $tmp1516;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1516));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1517));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1521));
            panda$core$Panda$unref$panda$core$Object($tmp1518);
            panda$core$Object* $tmp1529 = (($fn1528) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp1527 = $tmp1529;
            panda$collections$ListView* $tmp1530 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1527), value1515);
            panda$collections$ListView* $tmp1526 = $tmp1530;
            panda$collections$ListView* $tmp1525 = $tmp1526;
            valueVTable1524 = $tmp1525;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1525));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1526));
            panda$core$Panda$unref$panda$core$Object($tmp1527);
            {
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1531 = result1488;
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1534 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
                panda$core$String* $tmp1538 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$String* $tmp1537 = $tmp1538;
                panda$core$String* $tmp1539 = panda$core$String$convert$R$panda$core$String($tmp1537);
                panda$core$String* $tmp1536 = $tmp1539;
                panda$core$String* $tmp1541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1536, &$s1540);
                panda$core$String* $tmp1535 = $tmp1541;
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1534, $tmp1535, &$s1542);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1533 = $tmp1534;
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1532 = $tmp1533;
                result1488 = $tmp1532;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1532));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1533));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1536));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1537));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1531));
            }
            panda$core$Object* $tmp1548 = (($fn1547) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp1546 = $tmp1548;
            panda$collections$ListView* $tmp1549 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1546), p_cl);
            panda$collections$ListView* $tmp1545 = $tmp1549;
            panda$collections$ListView* $tmp1544 = $tmp1545;
            vtable1543 = $tmp1544;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1544));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1545));
            panda$core$Panda$unref$panda$core$Object($tmp1546);
            panda$core$Object* $tmp1556 = (($fn1555) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp1554 = $tmp1556;
            org$pandalanguage$pandac$ClassDecl* $tmp1557 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1554), p_cl->rawSuper);
            org$pandalanguage$pandac$ClassDecl* $tmp1553 = $tmp1557;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1558 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1553);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1552 = $tmp1558;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1551 = $tmp1552;
            superCC1550 = $tmp1551;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1551));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1552));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1553));
            panda$core$Panda$unref$panda$core$Object($tmp1554);
            panda$core$String* $tmp1564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1563, superCC1550->name);
            panda$core$String* $tmp1562 = $tmp1564;
            panda$core$String* $tmp1566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1562, &$s1565);
            panda$core$String* $tmp1561 = $tmp1566;
            panda$core$String* $tmp1560 = $tmp1561;
            superCast1559 = $tmp1560;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1560));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1561));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1562));
            panda$core$String* $tmp1570 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            panda$core$String* $tmp1569 = $tmp1570;
            panda$core$String* $tmp1568 = $tmp1569;
            itable1567 = $tmp1568;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1568));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
            panda$core$Object* $tmp1577 = (($fn1576) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp1575 = $tmp1577;
            org$pandalanguage$pandac$Type* $tmp1579 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1578 = $tmp1579;
            org$pandalanguage$pandac$ClassDecl* $tmp1580 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1575), $tmp1578);
            org$pandalanguage$pandac$ClassDecl* $tmp1574 = $tmp1580;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1581 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1574);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1573 = $tmp1581;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1572 = $tmp1573;
            clConstant1571 = $tmp1572;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1572));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1573));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1574));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1578));
            panda$core$Panda$unref$panda$core$Object($tmp1575);
            panda$core$String* $tmp1585 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1584 = $tmp1585;
            panda$core$String* $tmp1583 = $tmp1584;
            name1582 = $tmp1583;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1583));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1584));
            panda$core$Bit $tmp1587 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(name1582, &$s1586);
            PANDA_ASSERT($tmp1587.value);
            panda$core$MutableString* $tmp1591 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1599, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1600 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(name1582, $tmp1599);
            panda$core$String* $tmp1598 = $tmp1600;
            panda$core$String* $tmp1601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1597, $tmp1598);
            panda$core$String* $tmp1596 = $tmp1601;
            panda$core$String* $tmp1603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1596, &$s1602);
            panda$core$String* $tmp1595 = $tmp1603;
            panda$core$String* $tmp1608 = panda$core$String$convert$R$panda$core$String(result1488->name);
            panda$core$String* $tmp1607 = $tmp1608;
            panda$core$String* $tmp1610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1607, &$s1609);
            panda$core$String* $tmp1606 = $tmp1610;
            panda$core$String* $tmp1611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1606, result1488->name);
            panda$core$String* $tmp1605 = $tmp1611;
            panda$core$String* $tmp1613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1605, &$s1612);
            panda$core$String* $tmp1604 = $tmp1613;
            panda$core$String* $tmp1614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1595, $tmp1604);
            panda$core$String* $tmp1594 = $tmp1614;
            panda$core$String* $tmp1620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1619, clConstant1571->name);
            panda$core$String* $tmp1618 = $tmp1620;
            panda$core$String* $tmp1622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1618, &$s1621);
            panda$core$String* $tmp1617 = $tmp1622;
            panda$core$Int64$wrapper* $tmp1624;
            $tmp1624 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1624->value = ((panda$core$Int64) { -999 });
            panda$core$Object* $tmp1623 = ((panda$core$Object*) $tmp1624);
            panda$core$String* $tmp1625 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1617, $tmp1623);
            panda$core$String* $tmp1616 = $tmp1625;
            panda$core$String* $tmp1627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1616, &$s1626);
            panda$core$String* $tmp1615 = $tmp1627;
            panda$core$String* $tmp1628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1594, $tmp1615);
            panda$core$String* $tmp1593 = $tmp1628;
            panda$core$String* $tmp1635 = panda$core$String$convert$R$panda$core$String(name1582);
            panda$core$String* $tmp1634 = $tmp1635;
            panda$core$String* $tmp1637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1634, &$s1636);
            panda$core$String* $tmp1633 = $tmp1637;
            panda$core$String* $tmp1638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1633, superCast1559);
            panda$core$String* $tmp1632 = $tmp1638;
            panda$core$String* $tmp1640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1632, &$s1639);
            panda$core$String* $tmp1631 = $tmp1640;
            panda$core$String* $tmp1641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1631, itable1567);
            panda$core$String* $tmp1630 = $tmp1641;
            panda$core$String* $tmp1643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1630, &$s1642);
            panda$core$String* $tmp1629 = $tmp1643;
            panda$core$String* $tmp1644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1593, $tmp1629);
            panda$core$String* $tmp1592 = $tmp1644;
            panda$core$MutableString$init$panda$core$String($tmp1591, $tmp1592);
            panda$core$MutableString* $tmp1590 = $tmp1591;
            panda$core$MutableString* $tmp1589 = $tmp1590;
            code1588 = $tmp1589;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1589));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1590));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1592));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1629));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1630));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1631));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1632));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1633));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1634));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1593));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1615));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1616));
            panda$core$Panda$unref$panda$core$Object($tmp1623);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1617));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1618));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1594));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1604));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1605));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1606));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1607));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1595));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1596));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1598));
            panda$core$String* $tmp1646 = &$s1647;
            separator1645 = $tmp1646;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1646));
            ITable* $tmp1649 = ((panda$collections$CollectionView*) valueVTable1524)->$class->itable;
            while ($tmp1649->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1649 = $tmp1649->next;
            }
            $fn1651 $tmp1650 = $tmp1649->methods[0];
            panda$core$Int64 $tmp1652 = $tmp1650(((panda$collections$CollectionView*) valueVTable1524));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1648, ((panda$core$Int64) { 0 }), $tmp1652, ((panda$core$Bit) { false }));
            int64_t $tmp1654 = $tmp1648.min.value;
            panda$core$Int64 i1653 = { $tmp1654 };
            int64_t $tmp1656 = $tmp1648.max.value;
            bool $tmp1657 = $tmp1648.inclusive.value;
            if ($tmp1657) goto $l1664; else goto $l1665;
            $l1664:;
            if ($tmp1654 <= $tmp1656) goto $l1658; else goto $l1660;
            $l1665:;
            if ($tmp1654 < $tmp1656) goto $l1658; else goto $l1660;
            $l1658:;
            {
                ITable* $tmp1669 = vtable1543->$class->itable;
                while ($tmp1669->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1669 = $tmp1669->next;
                }
                $fn1671 $tmp1670 = $tmp1669->methods[0];
                panda$core$Object* $tmp1672 = $tmp1670(vtable1543, i1653);
                panda$core$Object* $tmp1668 = $tmp1672;
                org$pandalanguage$pandac$MethodDecl* $tmp1667 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1668);
                m1666 = $tmp1667;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1667));
                panda$core$Panda$unref$panda$core$Object($tmp1668);
                memset(&methodName1673, 0, sizeof(methodName1673));
                if (((panda$core$Bit) { ((panda$core$Object*) m1666->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    {
                        panda$core$String* $tmp1674 = methodName1673;
                        panda$core$String* $tmp1677 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1666, self->wrapperShims);
                        panda$core$String* $tmp1676 = $tmp1677;
                        panda$core$String* $tmp1675 = $tmp1676;
                        methodName1673 = $tmp1675;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1675));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1676));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1674));
                    }
                }
                }
                else {
                {
                    {
                        panda$core$String* $tmp1678 = methodName1673;
                        panda$core$String* $tmp1681 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1666);
                        panda$core$String* $tmp1680 = $tmp1681;
                        panda$core$String* $tmp1679 = $tmp1680;
                        methodName1673 = $tmp1679;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1679));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1680));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1678));
                    }
                    panda$core$Bit $tmp1682 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1666->owner);
                    if ($tmp1682.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1666);
                    }
                    }
                }
                }
                panda$core$String* $tmp1687 = panda$core$String$convert$R$panda$core$String(separator1645);
                panda$core$String* $tmp1686 = $tmp1687;
                panda$core$String* $tmp1689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1686, &$s1688);
                panda$core$String* $tmp1685 = $tmp1689;
                panda$core$String* $tmp1690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1685, methodName1673);
                panda$core$String* $tmp1684 = $tmp1690;
                panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1684, &$s1691);
                panda$core$String* $tmp1683 = $tmp1692;
                panda$core$MutableString$append$panda$core$String(code1588, $tmp1683);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1683));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1684));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1685));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1686));
                {
                    panda$core$String* $tmp1693 = separator1645;
                    panda$core$String* $tmp1694 = &$s1695;
                    separator1645 = $tmp1694;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1694));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1693));
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodName1673));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1666));
                }
            }
            $l1661:;
            int64_t $tmp1697 = $tmp1656 - i1653.value;
            if ($tmp1657) goto $l1698; else goto $l1699;
            $l1698:;
            if ((uint64_t) $tmp1697 >= 1) goto $l1696; else goto $l1660;
            $l1699:;
            if ((uint64_t) $tmp1697 > 1) goto $l1696; else goto $l1660;
            $l1696:;
            i1653.value += 1;
            goto $l1658;
            $l1660:;
            panda$core$MutableString$append$panda$core$String(code1588, &$s1702);
            panda$core$String* $tmp1704 = panda$core$MutableString$finish$R$panda$core$String(code1588);
            panda$core$String* $tmp1703 = $tmp1704;
            (($fn1705) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1703);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1703));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1645));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCast1559));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable1543));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) itable1567));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) superCC1550));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1515));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable1524));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1582));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code1588));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) clConstant1571));
            }
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name1479), ((panda$core$Object*) result1488));
    }
    }
    {
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1707 = result1488;
        tmp151706 = $tmp1707;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1707));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1488));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1479));
        }
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1708 = tmp151706;
        return $tmp1708;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1718;
    panda$core$String* tmp161737;
    panda$core$Bit $tmp1709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp1709.value) {
    {
        panda$core$String* $tmp1715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1714, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1713 = $tmp1715;
        panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1713, &$s1716);
        panda$core$String* $tmp1712 = $tmp1717;
        panda$core$String* $tmp1711 = $tmp1712;
        panda$core$String* $tmp1710 = $tmp1711;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1711));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1712));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1713));
        return $tmp1710;
    }
    }
    panda$core$Object* $tmp1721 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    panda$core$Object* $tmp1720 = $tmp1721;
    panda$core$String* $tmp1719 = ((panda$core$String*) $tmp1720);
    result1718 = $tmp1719;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1719));
    panda$core$Panda$unref$panda$core$Object($tmp1720);
    if (((panda$core$Bit) { result1718 == NULL }).value) {
    {
        panda$core$Int64 $tmp1722 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1722;
        {
            panda$core$String* $tmp1723 = result1718;
            panda$core$String* $tmp1729 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_v)->name);
            panda$core$String* $tmp1728 = $tmp1729;
            panda$core$String* $tmp1731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1728, &$s1730);
            panda$core$String* $tmp1727 = $tmp1731;
            panda$core$Int64$wrapper* $tmp1733;
            $tmp1733 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1733->value = self->varCount;
            panda$core$Object* $tmp1732 = ((panda$core$Object*) $tmp1733);
            panda$core$String* $tmp1734 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1727, $tmp1732);
            panda$core$String* $tmp1726 = $tmp1734;
            panda$core$String* $tmp1736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1726, &$s1735);
            panda$core$String* $tmp1725 = $tmp1736;
            panda$core$String* $tmp1724 = $tmp1725;
            result1718 = $tmp1724;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1724));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1725));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1726));
            panda$core$Panda$unref$panda$core$Object($tmp1732);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1727));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1728));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1723));
        }
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1718));
    }
    }
    {
        panda$core$String* $tmp1738 = result1718;
        tmp161737 = $tmp1738;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1738));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1718));
        panda$core$String* $tmp1739 = tmp161737;
        return $tmp1739;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1740 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1740.value);
    panda$core$String* $tmp1748 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1747 = $tmp1748;
    panda$core$String* $tmp1749 = panda$core$String$convert$R$panda$core$String($tmp1747);
    panda$core$String* $tmp1746 = $tmp1749;
    panda$core$String* $tmp1751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1746, &$s1750);
    panda$core$String* $tmp1745 = $tmp1751;
    panda$core$String* $tmp1752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1745, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1744 = $tmp1752;
    panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1744, &$s1753);
    panda$core$String* $tmp1743 = $tmp1754;
    panda$core$String* $tmp1742 = $tmp1743;
    panda$core$String* $tmp1741 = $tmp1742;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1742));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1743));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1744));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1745));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1746));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1747));
    return $tmp1741;
}
org$pandalanguage$pandac$CCodeGenerator$OpClass org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1756;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1758;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1760;
    switch (p_t->typeKind.value) {
        case 12:
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1756, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1755 = $tmp1756;
            return $tmp1755;
        }
        break;
        case 13:
        case 19:
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1758, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1757 = $tmp1758;
            return $tmp1757;
        }
        break;
        case 20:
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1760, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1759 = $tmp1760;
            return $tmp1759;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1763;
    panda$core$String* leftRef1767;
    panda$core$String* falseLabel1794;
    panda$core$String* rightRef1812;
    panda$core$String* tmp171838;
    panda$collections$Array* $tmp1762 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1762);
    panda$collections$Array* $tmp1761 = $tmp1762;
    panda$collections$Stack$push$panda$collections$Stack$T(self->extraEffects, ((panda$core$Object*) $tmp1761));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1761));
    panda$core$String* $tmp1766 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp1765 = $tmp1766;
    panda$core$String* $tmp1764 = $tmp1765;
    result1763 = $tmp1764;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1764));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1765));
    panda$core$String* $tmp1770 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$String* $tmp1769 = $tmp1770;
    panda$core$String* $tmp1768 = $tmp1769;
    leftRef1767 = $tmp1768;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1768));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1769));
    org$pandalanguage$pandac$Type* $tmp1773 = (($fn1772) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1771 = $tmp1773;
    org$pandalanguage$pandac$Type* $tmp1775 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp1774 = $tmp1775;
    panda$core$Bit $tmp1776 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1771, $tmp1774);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1774));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1771));
    if ($tmp1776.value) {
    {
        {
            panda$core$String* $tmp1777 = leftRef1767;
            panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1767, &$s1780);
            panda$core$String* $tmp1779 = $tmp1781;
            panda$core$String* $tmp1778 = $tmp1779;
            leftRef1767 = $tmp1778;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1778));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1779));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1777));
        }
    }
    }
    panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1786, result1763);
    panda$core$String* $tmp1785 = $tmp1787;
    panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1785, &$s1788);
    panda$core$String* $tmp1784 = $tmp1789;
    panda$core$String* $tmp1790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1784, leftRef1767);
    panda$core$String* $tmp1783 = $tmp1790;
    panda$core$String* $tmp1792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1783, &$s1791);
    panda$core$String* $tmp1782 = $tmp1792;
    (($fn1793) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1782);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1782));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1783));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1784));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1785));
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp1797 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp1796 = $tmp1797;
    panda$core$String* $tmp1795 = $tmp1796;
    falseLabel1794 = $tmp1795;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1795));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1796));
    panda$core$String* $tmp1803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1802, result1763);
    panda$core$String* $tmp1801 = $tmp1803;
    panda$core$String* $tmp1805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1801, &$s1804);
    panda$core$String* $tmp1800 = $tmp1805;
    panda$core$String* $tmp1806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1800, falseLabel1794);
    panda$core$String* $tmp1799 = $tmp1806;
    panda$core$String* $tmp1808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1799, &$s1807);
    panda$core$String* $tmp1798 = $tmp1808;
    (($fn1809) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1798);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1798));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1799));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1800));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1801));
    panda$collections$Array* $tmp1811 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1811);
    panda$collections$Array* $tmp1810 = $tmp1811;
    panda$collections$Stack$push$panda$collections$Stack$T(self->extraEffects, ((panda$core$Object*) $tmp1810));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1810));
    panda$core$String* $tmp1815 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$String* $tmp1814 = $tmp1815;
    panda$core$String* $tmp1813 = $tmp1814;
    rightRef1812 = $tmp1813;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1813));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1814));
    org$pandalanguage$pandac$Type* $tmp1818 = (($fn1817) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1816 = $tmp1818;
    org$pandalanguage$pandac$Type* $tmp1820 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp1819 = $tmp1820;
    panda$core$Bit $tmp1821 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1816, $tmp1819);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1819));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1816));
    if ($tmp1821.value) {
    {
        {
            panda$core$String* $tmp1822 = rightRef1812;
            panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1812, &$s1825);
            panda$core$String* $tmp1824 = $tmp1826;
            panda$core$String* $tmp1823 = $tmp1824;
            rightRef1812 = $tmp1823;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1823));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1824));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1822));
        }
    }
    }
    panda$core$String* $tmp1831 = panda$core$String$convert$R$panda$core$String(result1763);
    panda$core$String* $tmp1830 = $tmp1831;
    panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, &$s1832);
    panda$core$String* $tmp1829 = $tmp1833;
    panda$core$String* $tmp1834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1829, rightRef1812);
    panda$core$String* $tmp1828 = $tmp1834;
    panda$core$String* $tmp1836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1828, &$s1835);
    panda$core$String* $tmp1827 = $tmp1836;
    (($fn1837) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1827);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1827));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1828));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1829));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1830));
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1794, p_out);
    {
        panda$core$String* $tmp1839 = result1763;
        tmp171838 = $tmp1839;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1839));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1763));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1812));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) falseLabel1794));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1767));
        }
        panda$core$String* $tmp1840 = tmp171838;
        return $tmp1840;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1843;
    panda$core$String* leftRef1847;
    panda$core$String* trueLabel1874;
    panda$core$String* rightRef1892;
    panda$core$String* tmp181918;
    panda$collections$Array* $tmp1842 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1842);
    panda$collections$Array* $tmp1841 = $tmp1842;
    panda$collections$Stack$push$panda$collections$Stack$T(self->extraEffects, ((panda$core$Object*) $tmp1841));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1841));
    panda$core$String* $tmp1846 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp1845 = $tmp1846;
    panda$core$String* $tmp1844 = $tmp1845;
    result1843 = $tmp1844;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1844));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1845));
    panda$core$String* $tmp1850 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$String* $tmp1849 = $tmp1850;
    panda$core$String* $tmp1848 = $tmp1849;
    leftRef1847 = $tmp1848;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1848));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1849));
    org$pandalanguage$pandac$Type* $tmp1853 = (($fn1852) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1851 = $tmp1853;
    org$pandalanguage$pandac$Type* $tmp1855 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp1854 = $tmp1855;
    panda$core$Bit $tmp1856 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1851, $tmp1854);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1854));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1851));
    if ($tmp1856.value) {
    {
        {
            panda$core$String* $tmp1857 = leftRef1847;
            panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1847, &$s1860);
            panda$core$String* $tmp1859 = $tmp1861;
            panda$core$String* $tmp1858 = $tmp1859;
            leftRef1847 = $tmp1858;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1858));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1859));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1857));
        }
    }
    }
    panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1866, result1843);
    panda$core$String* $tmp1865 = $tmp1867;
    panda$core$String* $tmp1869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1865, &$s1868);
    panda$core$String* $tmp1864 = $tmp1869;
    panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, leftRef1847);
    panda$core$String* $tmp1863 = $tmp1870;
    panda$core$String* $tmp1872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1863, &$s1871);
    panda$core$String* $tmp1862 = $tmp1872;
    (($fn1873) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1862);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1862));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1863));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1864));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1865));
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp1877 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp1876 = $tmp1877;
    panda$core$String* $tmp1875 = $tmp1876;
    trueLabel1874 = $tmp1875;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1875));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1876));
    panda$core$String* $tmp1883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1882, result1843);
    panda$core$String* $tmp1881 = $tmp1883;
    panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1881, &$s1884);
    panda$core$String* $tmp1880 = $tmp1885;
    panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1880, trueLabel1874);
    panda$core$String* $tmp1879 = $tmp1886;
    panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1879, &$s1887);
    panda$core$String* $tmp1878 = $tmp1888;
    (($fn1889) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1878);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1878));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1879));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1880));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1881));
    panda$collections$Array* $tmp1891 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1891);
    panda$collections$Array* $tmp1890 = $tmp1891;
    panda$collections$Stack$push$panda$collections$Stack$T(self->extraEffects, ((panda$core$Object*) $tmp1890));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1890));
    panda$core$String* $tmp1895 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$String* $tmp1894 = $tmp1895;
    panda$core$String* $tmp1893 = $tmp1894;
    rightRef1892 = $tmp1893;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1893));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1894));
    org$pandalanguage$pandac$Type* $tmp1898 = (($fn1897) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1896 = $tmp1898;
    org$pandalanguage$pandac$Type* $tmp1900 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp1899 = $tmp1900;
    panda$core$Bit $tmp1901 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1896, $tmp1899);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1899));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1896));
    if ($tmp1901.value) {
    {
        {
            panda$core$String* $tmp1902 = rightRef1892;
            panda$core$String* $tmp1906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1892, &$s1905);
            panda$core$String* $tmp1904 = $tmp1906;
            panda$core$String* $tmp1903 = $tmp1904;
            rightRef1892 = $tmp1903;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1903));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1904));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1902));
        }
    }
    }
    panda$core$String* $tmp1911 = panda$core$String$convert$R$panda$core$String(result1843);
    panda$core$String* $tmp1910 = $tmp1911;
    panda$core$String* $tmp1913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1910, &$s1912);
    panda$core$String* $tmp1909 = $tmp1913;
    panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1909, rightRef1892);
    panda$core$String* $tmp1908 = $tmp1914;
    panda$core$String* $tmp1916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1908, &$s1915);
    panda$core$String* $tmp1907 = $tmp1916;
    (($fn1917) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1907);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1907));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1908));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1909));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1910));
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1874, p_out);
    {
        panda$core$String* $tmp1919 = result1843;
        tmp181918 = $tmp1919;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1919));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1843));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef1892));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) trueLabel1874));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef1847));
        }
        panda$core$String* $tmp1920 = tmp181918;
        return $tmp1920;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, org$pandalanguage$pandac$parser$Token$Kind p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1921;
    panda$core$Bit logical1922;
    org$pandalanguage$pandac$parser$Token$Kind $match$728_91923;
    panda$core$String* result1996;
    panda$core$String* tmp192031;
    memset(&cOp1921, 0, sizeof(cOp1921));
    logical1922 = ((panda$core$Bit) { false });
    {
        $match$728_91923 = p_op;
        panda$core$Bit $tmp1924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp1924.value) {
        {
            {
                panda$core$String* $tmp1925 = cOp1921;
                panda$core$String* $tmp1926 = &$s1927;
                cOp1921 = $tmp1926;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1926));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1925));
            }
        }
        }
        else {
        panda$core$Bit $tmp1928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp1928.value) {
        {
            {
                panda$core$String* $tmp1929 = cOp1921;
                panda$core$String* $tmp1930 = &$s1931;
                cOp1921 = $tmp1930;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1930));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1929));
            }
        }
        }
        else {
        panda$core$Bit $tmp1932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp1932.value) {
        {
            {
                panda$core$String* $tmp1933 = cOp1921;
                panda$core$String* $tmp1934 = &$s1935;
                cOp1921 = $tmp1934;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1934));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1933));
            }
        }
        }
        else {
        panda$core$Bit $tmp1936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp1936.value) {
        {
            {
                panda$core$String* $tmp1937 = cOp1921;
                panda$core$String* $tmp1938 = &$s1939;
                cOp1921 = $tmp1938;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1938));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1937));
            }
        }
        }
        else {
        panda$core$Bit $tmp1940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp1940.value) {
        {
            {
                panda$core$String* $tmp1941 = cOp1921;
                panda$core$String* $tmp1942 = &$s1943;
                cOp1921 = $tmp1942;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1942));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1941));
            }
        }
        }
        else {
        panda$core$Bit $tmp1944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp1944.value) {
        {
            {
                panda$core$String* $tmp1945 = cOp1921;
                panda$core$String* $tmp1946 = &$s1947;
                cOp1921 = $tmp1946;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1946));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1945));
            }
        }
        }
        else {
        panda$core$Bit $tmp1948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp1948.value) {
        {
            {
                panda$core$String* $tmp1949 = cOp1921;
                panda$core$String* $tmp1950 = &$s1951;
                cOp1921 = $tmp1950;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1950));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1949));
            }
        }
        }
        else {
        panda$core$Bit $tmp1952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1952.value) {
        {
            {
                panda$core$String* $tmp1953 = cOp1921;
                panda$core$String* $tmp1954 = &$s1955;
                cOp1921 = $tmp1954;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1954));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1953));
            }
        }
        }
        else {
        panda$core$Bit $tmp1956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp1956.value) {
        {
            {
                panda$core$String* $tmp1957 = cOp1921;
                panda$core$String* $tmp1958 = &$s1959;
                cOp1921 = $tmp1958;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1958));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1957));
            }
        }
        }
        else {
        panda$core$Bit $tmp1960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp1960.value) {
        {
            {
                panda$core$String* $tmp1961 = cOp1921;
                panda$core$String* $tmp1962 = &$s1963;
                cOp1921 = $tmp1962;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1962));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1961));
            }
        }
        }
        else {
        panda$core$Bit $tmp1965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 70 }));
        bool $tmp1964 = $tmp1965.value;
        if ($tmp1964) goto $l1966;
        panda$core$Bit $tmp1967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp1964 = $tmp1967.value;
        $l1966:;
        panda$core$Bit $tmp1968 = { $tmp1964 };
        if ($tmp1968.value) {
        {
            {
                panda$core$String* $tmp1969 = cOp1921;
                panda$core$String* $tmp1970 = &$s1971;
                cOp1921 = $tmp1970;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1970));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1969));
            }
        }
        }
        else {
        panda$core$Bit $tmp1972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1972.value) {
        {
            {
                panda$core$String* $tmp1973 = cOp1921;
                panda$core$String* $tmp1974 = &$s1975;
                cOp1921 = $tmp1974;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1974));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1973));
            }
            logical1922 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp1976.value) {
        {
            {
                panda$core$String* $tmp1977 = cOp1921;
                panda$core$String* $tmp1978 = &$s1979;
                cOp1921 = $tmp1978;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1978));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1977));
            }
            logical1922 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp1980.value) {
        {
            {
                panda$core$String* $tmp1981 = cOp1921;
                panda$core$String* $tmp1982 = &$s1983;
                cOp1921 = $tmp1982;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1982));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1981));
            }
            logical1922 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1984.value) {
        {
            {
                panda$core$String* $tmp1985 = cOp1921;
                panda$core$String* $tmp1986 = &$s1987;
                cOp1921 = $tmp1986;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1986));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1985));
            }
            logical1922 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp1988.value) {
        {
            {
                panda$core$String* $tmp1989 = cOp1921;
                panda$core$String* $tmp1990 = &$s1991;
                cOp1921 = $tmp1990;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1990));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1989));
            }
            logical1922 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_91923.$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp1992.value) {
        {
            logical1922 = ((panda$core$Bit) { true });
            {
                panda$core$String* $tmp1993 = cOp1921;
                panda$core$String* $tmp1994 = &$s1995;
                cOp1921 = $tmp1994;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1994));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1993));
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
    panda$core$String* $tmp1999 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp1998 = $tmp1999;
    panda$core$String* $tmp1997 = $tmp1998;
    result1996 = $tmp1997;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1997));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1998));
    if (logical1922.value) {
    {
        (($fn2001) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s2000);
    }
    }
    else {
    {
        panda$core$String* $tmp2005 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp2004 = $tmp2005;
        panda$core$String* $tmp2006 = panda$core$String$convert$R$panda$core$String($tmp2004);
        panda$core$String* $tmp2003 = $tmp2006;
        panda$core$String* $tmp2008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2003, &$s2007);
        panda$core$String* $tmp2002 = $tmp2008;
        (($fn2009) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2002);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2002));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2003));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2004));
    }
    }
    panda$core$String* $tmp2018 = panda$core$String$convert$R$panda$core$String(result1996);
    panda$core$String* $tmp2017 = $tmp2018;
    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2017, &$s2019);
    panda$core$String* $tmp2016 = $tmp2020;
    panda$core$String* $tmp2021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2016, p_leftRef);
    panda$core$String* $tmp2015 = $tmp2021;
    panda$core$String* $tmp2023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, &$s2022);
    panda$core$String* $tmp2014 = $tmp2023;
    panda$core$String* $tmp2024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, cOp1921);
    panda$core$String* $tmp2013 = $tmp2024;
    panda$core$String* $tmp2026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2013, &$s2025);
    panda$core$String* $tmp2012 = $tmp2026;
    panda$core$String* $tmp2027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2012, p_rightRef);
    panda$core$String* $tmp2011 = $tmp2027;
    panda$core$String* $tmp2029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2011, &$s2028);
    panda$core$String* $tmp2010 = $tmp2029;
    (($fn2030) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2010);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2010));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2011));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2012));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2013));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2014));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2015));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2016));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2017));
    {
        panda$core$String* $tmp2032 = result1996;
        tmp192031 = $tmp2032;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2032));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1996));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cOp1921));
        }
        panda$core$String* $tmp2033 = tmp192031;
        return $tmp2033;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2034;
    panda$core$String* rightRef2038;
    panda$core$String* tmp202042;
    panda$core$String* $tmp2037 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$String* $tmp2036 = $tmp2037;
    panda$core$String* $tmp2035 = $tmp2036;
    leftRef2034 = $tmp2035;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2035));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2036));
    panda$core$String* $tmp2041 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$String* $tmp2040 = $tmp2041;
    panda$core$String* $tmp2039 = $tmp2040;
    rightRef2038 = $tmp2039;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2039));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2040));
    {
        panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2048, leftRef2034);
        panda$core$String* $tmp2047 = $tmp2049;
        panda$core$String* $tmp2051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2047, &$s2050);
        panda$core$String* $tmp2046 = $tmp2051;
        panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2046, rightRef2038);
        panda$core$String* $tmp2045 = $tmp2052;
        panda$core$String* $tmp2054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2045, &$s2053);
        panda$core$String* $tmp2044 = $tmp2054;
        panda$core$String* $tmp2043 = $tmp2044;
        tmp202042 = $tmp2043;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2043));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2044));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2045));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2046));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2047));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef2038));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef2034));
        }
        panda$core$String* $tmp2055 = tmp202042;
        return $tmp2055;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2056;
    panda$core$String* rightRef2060;
    panda$core$String* tmp212064;
    panda$core$String* $tmp2059 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$String* $tmp2058 = $tmp2059;
    panda$core$String* $tmp2057 = $tmp2058;
    leftRef2056 = $tmp2057;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2057));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2058));
    panda$core$String* $tmp2063 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$String* $tmp2062 = $tmp2063;
    panda$core$String* $tmp2061 = $tmp2062;
    rightRef2060 = $tmp2061;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2061));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2062));
    {
        panda$core$String* $tmp2071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2070, leftRef2056);
        panda$core$String* $tmp2069 = $tmp2071;
        panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2069, &$s2072);
        panda$core$String* $tmp2068 = $tmp2073;
        panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2068, rightRef2060);
        panda$core$String* $tmp2067 = $tmp2074;
        panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2067, &$s2075);
        panda$core$String* $tmp2066 = $tmp2076;
        panda$core$String* $tmp2065 = $tmp2066;
        tmp212064 = $tmp2065;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2065));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2066));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2067));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2068));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2069));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef2060));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef2056));
        }
        panda$core$String* $tmp2077 = tmp212064;
        return $tmp2077;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$parser$Token$Kind $match$798_92085;
    panda$core$String* leftRef2106;
    panda$core$String* rightRef2110;
    panda$core$String* tmp222114;
    org$pandalanguage$pandac$Type* $tmp2080 = (($fn2079) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp2078 = $tmp2080;
    org$pandalanguage$pandac$Type* $tmp2083 = (($fn2082) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp2081 = $tmp2083;
    panda$core$Bit $tmp2084 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2078, $tmp2081);
    PANDA_ASSERT($tmp2084.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2081));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2078));
    {
        $match$798_92085 = p_op;
        panda$core$Bit $tmp2086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$798_92085.$rawValue, ((panda$core$Int64) { 66 }));
        if ($tmp2086.value) {
        {
            panda$core$String* $tmp2090 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            panda$core$String* $tmp2089 = $tmp2090;
            panda$core$String* $tmp2088 = $tmp2089;
            panda$core$String* $tmp2087 = $tmp2088;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2088));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2089));
            return $tmp2087;
        }
        }
        else {
        panda$core$Bit $tmp2091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$798_92085.$rawValue, ((panda$core$Int64) { 68 }));
        if ($tmp2091.value) {
        {
            panda$core$String* $tmp2095 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            panda$core$String* $tmp2094 = $tmp2095;
            panda$core$String* $tmp2093 = $tmp2094;
            panda$core$String* $tmp2092 = $tmp2093;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2093));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2094));
            return $tmp2092;
        }
        }
        else {
        panda$core$Bit $tmp2096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$798_92085.$rawValue, ((panda$core$Int64) { 60 }));
        if ($tmp2096.value) {
        {
            panda$core$String* $tmp2100 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            panda$core$String* $tmp2099 = $tmp2100;
            panda$core$String* $tmp2098 = $tmp2099;
            panda$core$String* $tmp2097 = $tmp2098;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2098));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2099));
            return $tmp2097;
        }
        }
        else {
        panda$core$Bit $tmp2101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$798_92085.$rawValue, ((panda$core$Int64) { 61 }));
        if ($tmp2101.value) {
        {
            panda$core$String* $tmp2105 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            panda$core$String* $tmp2104 = $tmp2105;
            panda$core$String* $tmp2103 = $tmp2104;
            panda$core$String* $tmp2102 = $tmp2103;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2103));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2104));
            return $tmp2102;
        }
        }
        else {
        {
            panda$core$String* $tmp2109 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            panda$core$String* $tmp2108 = $tmp2109;
            panda$core$String* $tmp2107 = $tmp2108;
            leftRef2106 = $tmp2107;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2107));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2108));
            panda$core$String* $tmp2113 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            panda$core$String* $tmp2112 = $tmp2113;
            panda$core$String* $tmp2111 = $tmp2112;
            rightRef2110 = $tmp2111;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2111));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2112));
            {
                org$pandalanguage$pandac$Type* $tmp2119 = (($fn2118) p_left->$class->vtable[2])(p_left);
                org$pandalanguage$pandac$Type* $tmp2117 = $tmp2119;
                panda$core$String* $tmp2120 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2117, leftRef2106, p_op, rightRef2110, p_out);
                panda$core$String* $tmp2116 = $tmp2120;
                panda$core$String* $tmp2115 = $tmp2116;
                tmp222114 = $tmp2115;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2115));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2116));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2117));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rightRef2110));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leftRef2106));
                }
                panda$core$String* $tmp2121 = tmp222114;
                return $tmp2121;
            }
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc2122;
    panda$core$Int64 index2126;
    panda$collections$ListView* vtable2127;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2134;
    panda$core$String* tmp232164;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2125 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2124 = $tmp2125;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2123 = $tmp2124;
    cc2122 = $tmp2123;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2123));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2124));
    index2126 = ((panda$core$Int64) { -1 });
    panda$core$Object* $tmp2132 = (($fn2131) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp2130 = $tmp2132;
    panda$collections$ListView* $tmp2133 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2130), p_m->owner);
    panda$collections$ListView* $tmp2129 = $tmp2133;
    panda$collections$ListView* $tmp2128 = $tmp2129;
    vtable2127 = $tmp2128;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2128));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2129));
    panda$core$Panda$unref$panda$core$Object($tmp2130);
    ITable* $tmp2135 = ((panda$collections$CollectionView*) vtable2127)->$class->itable;
    while ($tmp2135->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2135 = $tmp2135->next;
    }
    $fn2137 $tmp2136 = $tmp2135->methods[0];
    panda$core$Int64 $tmp2138 = $tmp2136(((panda$collections$CollectionView*) vtable2127));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2134, ((panda$core$Int64) { 0 }), $tmp2138, ((panda$core$Bit) { false }));
    int64_t $tmp2140 = $tmp2134.min.value;
    panda$core$Int64 i2139 = { $tmp2140 };
    int64_t $tmp2142 = $tmp2134.max.value;
    bool $tmp2143 = $tmp2134.inclusive.value;
    if ($tmp2143) goto $l2150; else goto $l2151;
    $l2150:;
    if ($tmp2140 <= $tmp2142) goto $l2144; else goto $l2146;
    $l2151:;
    if ($tmp2140 < $tmp2142) goto $l2144; else goto $l2146;
    $l2144:;
    {
        ITable* $tmp2153 = vtable2127->$class->itable;
        while ($tmp2153->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2153 = $tmp2153->next;
        }
        $fn2155 $tmp2154 = $tmp2153->methods[0];
        panda$core$Object* $tmp2156 = $tmp2154(vtable2127, i2139);
        panda$core$Object* $tmp2152 = $tmp2156;
        panda$core$Panda$unref$panda$core$Object($tmp2152);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2152)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2126 = i2139;
            goto $l2146;
        }
        }
    }
    $l2147:;
    int64_t $tmp2158 = $tmp2142 - i2139.value;
    if ($tmp2143) goto $l2159; else goto $l2160;
    $l2159:;
    if ((uint64_t) $tmp2158 >= 1) goto $l2157; else goto $l2146;
    $l2160:;
    if ((uint64_t) $tmp2158 > 1) goto $l2157; else goto $l2146;
    $l2157:;
    i2139.value += 1;
    goto $l2144;
    $l2146:;
    panda$core$Bit $tmp2163 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2126, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2163.value);
    {
        panda$core$Object* $tmp2177 = (($fn2176) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp2175 = $tmp2177;
        org$pandalanguage$pandac$Type* $tmp2178 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp2175), p_m);
        org$pandalanguage$pandac$Type* $tmp2174 = $tmp2178;
        panda$core$String* $tmp2179 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2174);
        panda$core$String* $tmp2173 = $tmp2179;
        panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2172, $tmp2173);
        panda$core$String* $tmp2171 = $tmp2180;
        panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2171, &$s2181);
        panda$core$String* $tmp2170 = $tmp2182;
        panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2170, p_target);
        panda$core$String* $tmp2169 = $tmp2183;
        panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, &$s2184);
        panda$core$String* $tmp2168 = $tmp2185;
        panda$core$Int64$wrapper* $tmp2187;
        $tmp2187 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp2187->value = index2126;
        panda$core$Object* $tmp2186 = ((panda$core$Object*) $tmp2187);
        panda$core$String* $tmp2188 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2168, $tmp2186);
        panda$core$String* $tmp2167 = $tmp2188;
        panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2167, &$s2189);
        panda$core$String* $tmp2166 = $tmp2190;
        panda$core$String* $tmp2165 = $tmp2166;
        tmp232164 = $tmp2165;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2165));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2166));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2167));
        panda$core$Panda$unref$panda$core$Object($tmp2186);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2168));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2169));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2170));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2173));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2174));
        panda$core$Panda$unref$panda$core$Object($tmp2175);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable2127));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc2122));
        }
        panda$core$String* $tmp2191 = tmp232164;
        return $tmp2191;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc2192;
    panda$core$String* itable2196;
    panda$core$Int64 index2239;
    panda$collections$ListView* vtable2240;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2247;
    panda$core$String* result2294;
    panda$core$String* methodType2298;
    panda$core$String* tmp242330;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2195 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2194 = $tmp2195;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2193 = $tmp2194;
    cc2192 = $tmp2193;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2193));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2194));
    panda$core$String* $tmp2199 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp2198 = $tmp2199;
    panda$core$String* $tmp2197 = $tmp2198;
    itable2196 = $tmp2197;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2197));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2198));
    panda$core$String* $tmp2205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2204, itable2196);
    panda$core$String* $tmp2203 = $tmp2205;
    panda$core$String* $tmp2207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2203, &$s2206);
    panda$core$String* $tmp2202 = $tmp2207;
    panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2202, p_target);
    panda$core$String* $tmp2201 = $tmp2208;
    panda$core$String* $tmp2210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2201, &$s2209);
    panda$core$String* $tmp2200 = $tmp2210;
    (($fn2211) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2200);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2200));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2201));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2202));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2203));
    panda$core$String* $tmp2217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2216, itable2196);
    panda$core$String* $tmp2215 = $tmp2217;
    panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2215, &$s2218);
    panda$core$String* $tmp2214 = $tmp2219;
    panda$core$String* $tmp2220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2214, cc2192->name);
    panda$core$String* $tmp2213 = $tmp2220;
    panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2213, &$s2221);
    panda$core$String* $tmp2212 = $tmp2222;
    (($fn2223) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2212);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2212));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2213));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2214));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2215));
    panda$core$Int64 $tmp2224 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2224;
    panda$core$String* $tmp2229 = panda$core$String$convert$R$panda$core$String(itable2196);
    panda$core$String* $tmp2228 = $tmp2229;
    panda$core$String* $tmp2231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2228, &$s2230);
    panda$core$String* $tmp2227 = $tmp2231;
    panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2227, itable2196);
    panda$core$String* $tmp2226 = $tmp2232;
    panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2226, &$s2233);
    panda$core$String* $tmp2225 = $tmp2234;
    (($fn2235) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2225);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2225));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2226));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2227));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2228));
    panda$core$Int64 $tmp2236 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2236;
    (($fn2238) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2237);
    index2239 = ((panda$core$Int64) { -1 });
    panda$core$Object* $tmp2245 = (($fn2244) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp2243 = $tmp2245;
    panda$collections$ListView* $tmp2246 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2243), p_m->owner);
    panda$collections$ListView* $tmp2242 = $tmp2246;
    panda$collections$ListView* $tmp2241 = $tmp2242;
    vtable2240 = $tmp2241;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2241));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2242));
    panda$core$Panda$unref$panda$core$Object($tmp2243);
    ITable* $tmp2248 = ((panda$collections$CollectionView*) vtable2240)->$class->itable;
    while ($tmp2248->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2248 = $tmp2248->next;
    }
    $fn2250 $tmp2249 = $tmp2248->methods[0];
    panda$core$Int64 $tmp2251 = $tmp2249(((panda$collections$CollectionView*) vtable2240));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2247, ((panda$core$Int64) { 0 }), $tmp2251, ((panda$core$Bit) { false }));
    int64_t $tmp2253 = $tmp2247.min.value;
    panda$core$Int64 i2252 = { $tmp2253 };
    int64_t $tmp2255 = $tmp2247.max.value;
    bool $tmp2256 = $tmp2247.inclusive.value;
    if ($tmp2256) goto $l2263; else goto $l2264;
    $l2263:;
    if ($tmp2253 <= $tmp2255) goto $l2257; else goto $l2259;
    $l2264:;
    if ($tmp2253 < $tmp2255) goto $l2257; else goto $l2259;
    $l2257:;
    {
        ITable* $tmp2266 = vtable2240->$class->itable;
        while ($tmp2266->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2266 = $tmp2266->next;
        }
        $fn2268 $tmp2267 = $tmp2266->methods[0];
        panda$core$Object* $tmp2269 = $tmp2267(vtable2240, i2252);
        panda$core$Object* $tmp2265 = $tmp2269;
        panda$core$Panda$unref$panda$core$Object($tmp2265);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2265)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2239 = i2252;
            goto $l2259;
        }
        }
    }
    $l2260:;
    int64_t $tmp2271 = $tmp2255 - i2252.value;
    if ($tmp2256) goto $l2272; else goto $l2273;
    $l2272:;
    if ((uint64_t) $tmp2271 >= 1) goto $l2270; else goto $l2259;
    $l2273:;
    if ((uint64_t) $tmp2271 > 1) goto $l2270; else goto $l2259;
    $l2270:;
    i2252.value += 1;
    goto $l2257;
    $l2259:;
    panda$core$Object* $tmp2279 = (($fn2278) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp2277 = $tmp2279;
    panda$core$Object* $tmp2283 = (($fn2282) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp2281 = $tmp2283;
    org$pandalanguage$pandac$Type* $tmp2285 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp2284 = $tmp2285;
    org$pandalanguage$pandac$ClassDecl* $tmp2286 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2281), $tmp2284);
    org$pandalanguage$pandac$ClassDecl* $tmp2280 = $tmp2286;
    panda$collections$ListView* $tmp2287 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2277), $tmp2280);
    panda$collections$ListView* $tmp2276 = $tmp2287;
    ITable* $tmp2288 = ((panda$collections$CollectionView*) $tmp2276)->$class->itable;
    while ($tmp2288->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2288 = $tmp2288->next;
    }
    $fn2290 $tmp2289 = $tmp2288->methods[0];
    panda$core$Int64 $tmp2291 = $tmp2289(((panda$collections$CollectionView*) $tmp2276));
    panda$core$Int64 $tmp2292 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2239, $tmp2291);
    index2239 = $tmp2292;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2276));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2280));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2284));
    panda$core$Panda$unref$panda$core$Object($tmp2281);
    panda$core$Panda$unref$panda$core$Object($tmp2277);
    panda$core$Bit $tmp2293 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2239, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2293.value);
    panda$core$String* $tmp2297 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp2296 = $tmp2297;
    panda$core$String* $tmp2295 = $tmp2296;
    result2294 = $tmp2295;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2295));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2296));
    panda$core$Object* $tmp2304 = (($fn2303) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp2302 = $tmp2304;
    org$pandalanguage$pandac$Type* $tmp2305 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp2302), p_m);
    org$pandalanguage$pandac$Type* $tmp2301 = $tmp2305;
    panda$core$String* $tmp2306 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2301);
    panda$core$String* $tmp2300 = $tmp2306;
    panda$core$String* $tmp2299 = $tmp2300;
    methodType2298 = $tmp2299;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2299));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2300));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2301));
    panda$core$Panda$unref$panda$core$Object($tmp2302);
    panda$core$String* $tmp2315 = panda$core$String$convert$R$panda$core$String(methodType2298);
    panda$core$String* $tmp2314 = $tmp2315;
    panda$core$String* $tmp2317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2314, &$s2316);
    panda$core$String* $tmp2313 = $tmp2317;
    panda$core$String* $tmp2318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2313, result2294);
    panda$core$String* $tmp2312 = $tmp2318;
    panda$core$String* $tmp2320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2312, &$s2319);
    panda$core$String* $tmp2311 = $tmp2320;
    panda$core$String* $tmp2321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2311, itable2196);
    panda$core$String* $tmp2310 = $tmp2321;
    panda$core$String* $tmp2323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2310, &$s2322);
    panda$core$String* $tmp2309 = $tmp2323;
    panda$core$Int64$wrapper* $tmp2325;
    $tmp2325 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2325->value = index2239;
    panda$core$Object* $tmp2324 = ((panda$core$Object*) $tmp2325);
    panda$core$String* $tmp2326 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2309, $tmp2324);
    panda$core$String* $tmp2308 = $tmp2326;
    panda$core$String* $tmp2328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2308, &$s2327);
    panda$core$String* $tmp2307 = $tmp2328;
    (($fn2329) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2307);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2307));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2308));
    panda$core$Panda$unref$panda$core$Object($tmp2324);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2309));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2310));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2311));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2312));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2313));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2314));
    {
        panda$core$String* $tmp2331 = result2294;
        tmp242330 = $tmp2331;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2331));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2294));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) vtable2240));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cc2192));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) itable2196));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodType2298));
        }
        panda$core$String* $tmp2332 = tmp242330;
        return $tmp2332;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2334 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2333 = $tmp2334.value;
    if (!$tmp2333) goto $l2335;
    panda$core$Bit $tmp2336 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2333 = $tmp2336.value;
    $l2335:;
    panda$core$Bit $tmp2337 = { $tmp2333 };
    if ($tmp2337.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp2338.value) {
        {
            panda$core$String* $tmp2342 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            panda$core$String* $tmp2341 = $tmp2342;
            panda$core$String* $tmp2340 = $tmp2341;
            panda$core$String* $tmp2339 = $tmp2340;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2341));
            return $tmp2339;
        }
        }
        else {
        {
            panda$core$String* $tmp2346 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            panda$core$String* $tmp2345 = $tmp2346;
            panda$core$String* $tmp2344 = $tmp2345;
            panda$core$String* $tmp2343 = $tmp2344;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2344));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2345));
            return $tmp2343;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp2347 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp2347.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp2351 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp2350 = $tmp2351;
        panda$core$String* $tmp2349 = $tmp2350;
        panda$core$String* $tmp2348 = $tmp2349;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2349));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2350));
        return $tmp2348;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$871_92352;
    panda$core$String* count2357;
    panda$core$Int64 elementSize2367;
    panda$core$String* tmp252373;
    panda$core$String* ptr2400;
    panda$core$String* tmp262406;
    panda$core$String* ptr2419;
    panda$core$String* index2425;
    panda$core$String* tmp272431;
    panda$core$String* ptr2448;
    panda$core$String* oldCount2454;
    panda$core$String* newCount2460;
    panda$core$Int64 elementSize2470;
    panda$core$String* tmp282476;
    panda$core$String* ptr2522;
    panda$core$String* offset2528;
    panda$core$String* tmp292534;
    {
        $match$871_92352 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp2354 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$871_92352, &$s2353);
        if ($tmp2354.value) {
        {
            panda$core$Int64 $tmp2355 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2355, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2356.value);
            panda$core$Object* $tmp2361 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2360 = $tmp2361;
            panda$core$String* $tmp2362 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2360), p_out);
            panda$core$String* $tmp2359 = $tmp2362;
            panda$core$String* $tmp2358 = $tmp2359;
            count2357 = $tmp2358;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2358));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2359));
            panda$core$Panda$unref$panda$core$Object($tmp2360);
            org$pandalanguage$pandac$Type* $tmp2364 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            org$pandalanguage$pandac$Type* $tmp2363 = $tmp2364;
            panda$core$Int64 $tmp2365 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2363->subtypes);
            panda$core$Bit $tmp2366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2365, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2366.value);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2363));
            org$pandalanguage$pandac$Type* $tmp2370 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            org$pandalanguage$pandac$Type* $tmp2369 = $tmp2370;
            panda$core$Object* $tmp2371 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2369->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2368 = $tmp2371;
            panda$core$Int64 $tmp2372 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2368));
            elementSize2367 = $tmp2372;
            panda$core$Panda$unref$panda$core$Object($tmp2368);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2369));
            {
                panda$core$String* $tmp2383 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
                panda$core$String* $tmp2382 = $tmp2383;
                panda$core$String* $tmp2384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2381, $tmp2382);
                panda$core$String* $tmp2380 = $tmp2384;
                panda$core$String* $tmp2386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2380, &$s2385);
                panda$core$String* $tmp2379 = $tmp2386;
                panda$core$String* $tmp2387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2379, count2357);
                panda$core$String* $tmp2378 = $tmp2387;
                panda$core$String* $tmp2389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2378, &$s2388);
                panda$core$String* $tmp2377 = $tmp2389;
                panda$core$Int64$wrapper* $tmp2391;
                $tmp2391 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp2391->value = elementSize2367;
                panda$core$Object* $tmp2390 = ((panda$core$Object*) $tmp2391);
                panda$core$String* $tmp2392 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2377, $tmp2390);
                panda$core$String* $tmp2376 = $tmp2392;
                panda$core$String* $tmp2394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2376, &$s2393);
                panda$core$String* $tmp2375 = $tmp2394;
                panda$core$String* $tmp2374 = $tmp2375;
                tmp252373 = $tmp2374;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2374));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2375));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2376));
                panda$core$Panda$unref$panda$core$Object($tmp2390);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2377));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2379));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2380));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2382));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) count2357));
                panda$core$String* $tmp2395 = tmp252373;
                return $tmp2395;
            }
        }
        }
        else {
        panda$core$Bit $tmp2397 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$871_92352, &$s2396);
        if ($tmp2397.value) {
        {
            panda$core$Int64 $tmp2398 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2398, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2399.value);
            panda$core$Object* $tmp2404 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2403 = $tmp2404;
            panda$core$String* $tmp2405 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2403), p_out);
            panda$core$String* $tmp2402 = $tmp2405;
            panda$core$String* $tmp2401 = $tmp2402;
            ptr2400 = $tmp2401;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2401));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2402));
            panda$core$Panda$unref$panda$core$Object($tmp2403);
            {
                panda$core$String* $tmp2411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2410, ptr2400);
                panda$core$String* $tmp2409 = $tmp2411;
                panda$core$String* $tmp2413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2409, &$s2412);
                panda$core$String* $tmp2408 = $tmp2413;
                panda$core$String* $tmp2407 = $tmp2408;
                tmp262406 = $tmp2407;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2407));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2408));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2409));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ptr2400));
                panda$core$String* $tmp2414 = tmp262406;
                return $tmp2414;
            }
        }
        }
        else {
        panda$core$Bit $tmp2416 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$871_92352, &$s2415);
        if ($tmp2416.value) {
        {
            panda$core$Int64 $tmp2417 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2417, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2418.value);
            panda$core$Object* $tmp2423 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2422 = $tmp2423;
            panda$core$String* $tmp2424 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2422), p_out);
            panda$core$String* $tmp2421 = $tmp2424;
            panda$core$String* $tmp2420 = $tmp2421;
            ptr2419 = $tmp2420;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2420));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2421));
            panda$core$Panda$unref$panda$core$Object($tmp2422);
            panda$core$Object* $tmp2429 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2428 = $tmp2429;
            panda$core$String* $tmp2430 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2428), p_out);
            panda$core$String* $tmp2427 = $tmp2430;
            panda$core$String* $tmp2426 = $tmp2427;
            index2425 = $tmp2426;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2426));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2427));
            panda$core$Panda$unref$panda$core$Object($tmp2428);
            {
                panda$core$String* $tmp2437 = panda$core$String$convert$R$panda$core$String(ptr2419);
                panda$core$String* $tmp2436 = $tmp2437;
                panda$core$String* $tmp2439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2436, &$s2438);
                panda$core$String* $tmp2435 = $tmp2439;
                panda$core$String* $tmp2440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2435, index2425);
                panda$core$String* $tmp2434 = $tmp2440;
                panda$core$String* $tmp2442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2434, &$s2441);
                panda$core$String* $tmp2433 = $tmp2442;
                panda$core$String* $tmp2432 = $tmp2433;
                tmp272431 = $tmp2432;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2432));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2433));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2434));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2435));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2436));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ptr2419));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index2425));
                }
                panda$core$String* $tmp2443 = tmp272431;
                return $tmp2443;
            }
        }
        }
        else {
        panda$core$Bit $tmp2445 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$871_92352, &$s2444);
        if ($tmp2445.value) {
        {
            panda$core$Int64 $tmp2446 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2446, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2447.value);
            panda$core$Object* $tmp2452 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2451 = $tmp2452;
            panda$core$String* $tmp2453 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2451), p_out);
            panda$core$String* $tmp2450 = $tmp2453;
            panda$core$String* $tmp2449 = $tmp2450;
            ptr2448 = $tmp2449;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2449));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2450));
            panda$core$Panda$unref$panda$core$Object($tmp2451);
            panda$core$Object* $tmp2458 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2457 = $tmp2458;
            panda$core$String* $tmp2459 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2457), p_out);
            panda$core$String* $tmp2456 = $tmp2459;
            panda$core$String* $tmp2455 = $tmp2456;
            oldCount2454 = $tmp2455;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2455));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2456));
            panda$core$Panda$unref$panda$core$Object($tmp2457);
            panda$core$Object* $tmp2464 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            panda$core$Object* $tmp2463 = $tmp2464;
            panda$core$String* $tmp2465 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2463), p_out);
            panda$core$String* $tmp2462 = $tmp2465;
            panda$core$String* $tmp2461 = $tmp2462;
            newCount2460 = $tmp2461;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2461));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2462));
            panda$core$Panda$unref$panda$core$Object($tmp2463);
            org$pandalanguage$pandac$Type* $tmp2467 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            org$pandalanguage$pandac$Type* $tmp2466 = $tmp2467;
            panda$core$Int64 $tmp2468 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2466->subtypes);
            panda$core$Bit $tmp2469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2468, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2469.value);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2466));
            org$pandalanguage$pandac$Type* $tmp2473 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            org$pandalanguage$pandac$Type* $tmp2472 = $tmp2473;
            panda$core$Object* $tmp2474 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2472->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2471 = $tmp2474;
            panda$core$Int64 $tmp2475 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2471));
            elementSize2470 = $tmp2475;
            panda$core$Panda$unref$panda$core$Object($tmp2471);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2472));
            {
                panda$core$String* $tmp2489 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
                panda$core$String* $tmp2488 = $tmp2489;
                panda$core$String* $tmp2490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2487, $tmp2488);
                panda$core$String* $tmp2486 = $tmp2490;
                panda$core$String* $tmp2492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2486, &$s2491);
                panda$core$String* $tmp2485 = $tmp2492;
                panda$core$String* $tmp2493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2485, ptr2448);
                panda$core$String* $tmp2484 = $tmp2493;
                panda$core$String* $tmp2495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2484, &$s2494);
                panda$core$String* $tmp2483 = $tmp2495;
                panda$core$String* $tmp2496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2483, oldCount2454);
                panda$core$String* $tmp2482 = $tmp2496;
                panda$core$String* $tmp2498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2482, &$s2497);
                panda$core$String* $tmp2481 = $tmp2498;
                panda$core$Int64$wrapper* $tmp2500;
                $tmp2500 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp2500->value = elementSize2470;
                panda$core$Object* $tmp2499 = ((panda$core$Object*) $tmp2500);
                panda$core$String* $tmp2501 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2481, $tmp2499);
                panda$core$String* $tmp2480 = $tmp2501;
                panda$core$String* $tmp2503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2480, &$s2502);
                panda$core$String* $tmp2479 = $tmp2503;
                panda$core$String* $tmp2508 = panda$core$String$convert$R$panda$core$String(newCount2460);
                panda$core$String* $tmp2507 = $tmp2508;
                panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2507, &$s2509);
                panda$core$String* $tmp2506 = $tmp2510;
                panda$core$Int64$wrapper* $tmp2512;
                $tmp2512 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp2512->value = elementSize2470;
                panda$core$Object* $tmp2511 = ((panda$core$Object*) $tmp2512);
                panda$core$String* $tmp2513 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2506, $tmp2511);
                panda$core$String* $tmp2505 = $tmp2513;
                panda$core$String* $tmp2515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2505, &$s2514);
                panda$core$String* $tmp2504 = $tmp2515;
                panda$core$String* $tmp2516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, $tmp2504);
                panda$core$String* $tmp2478 = $tmp2516;
                panda$core$String* $tmp2477 = $tmp2478;
                tmp282476 = $tmp2477;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2477));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2478));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2504));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2505));
                panda$core$Panda$unref$panda$core$Object($tmp2511);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2506));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2507));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2479));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2480));
                panda$core$Panda$unref$panda$core$Object($tmp2499);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2481));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2482));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2483));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2484));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2485));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2486));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2488));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldCount2454));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ptr2448));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newCount2460));
                }
                panda$core$String* $tmp2517 = tmp282476;
                return $tmp2517;
            }
        }
        }
        else {
        panda$core$Bit $tmp2519 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$871_92352, &$s2518);
        if ($tmp2519.value) {
        {
            panda$core$Int64 $tmp2520 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2520, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2521.value);
            panda$core$Object* $tmp2526 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2525 = $tmp2526;
            panda$core$String* $tmp2527 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2525), p_out);
            panda$core$String* $tmp2524 = $tmp2527;
            panda$core$String* $tmp2523 = $tmp2524;
            ptr2522 = $tmp2523;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2523));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2524));
            panda$core$Panda$unref$panda$core$Object($tmp2525);
            panda$core$Object* $tmp2532 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2531 = $tmp2532;
            panda$core$String* $tmp2533 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2531), p_out);
            panda$core$String* $tmp2530 = $tmp2533;
            panda$core$String* $tmp2529 = $tmp2530;
            offset2528 = $tmp2529;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2529));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2530));
            panda$core$Panda$unref$panda$core$Object($tmp2531);
            {
                panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2540, ptr2522);
                panda$core$String* $tmp2539 = $tmp2541;
                panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2539, &$s2542);
                panda$core$String* $tmp2538 = $tmp2543;
                panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2538, offset2528);
                panda$core$String* $tmp2537 = $tmp2544;
                panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, &$s2545);
                panda$core$String* $tmp2536 = $tmp2546;
                panda$core$String* $tmp2535 = $tmp2536;
                tmp292534 = $tmp2535;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2535));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2536));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2537));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2538));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2539));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ptr2522));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) offset2528));
                }
                panda$core$String* $tmp2547 = tmp292534;
                return $tmp2547;
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
    org$pandalanguage$pandac$MethodDecl* m2548;
    panda$core$String* tmp302552;
    panda$core$String* bit2564;
    panda$core$String* result2572;
    panda$core$String* tmp312588;
    panda$core$String* tmp332590;
    panda$core$String* bit2596;
    panda$core$String* result2604;
    panda$core$String* tmp322620;
    panda$core$String* tmp342622;
    panda$collections$Array* argRefs2624;
    org$pandalanguage$pandac$Type* actualMethodType2629;
    panda$core$String* actualResultType2630;
    panda$core$Bit isSuper2631;
    panda$core$Int64 offset2671;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2676;
    panda$core$String* arg2691;
    panda$core$String* target2728;
    panda$core$String* methodRef2737;
    panda$core$Bit indirect2741;
    panda$core$String* result2743;
    panda$core$String* separator2747;
    panda$core$String* indirectVar2750;
    panda$collections$Iterator* Iter$975$92792;
    panda$core$String* arg2807;
    panda$core$String* tmp352833;
    panda$core$String* tmp362842;
    org$pandalanguage$pandac$MethodDecl* $tmp2549 = p_mref->value;
    m2548 = $tmp2549;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2549));
    panda$core$Bit $tmp2551 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2548->owner)->name, &$s2550);
    if ($tmp2551.value) {
    {
        {
            panda$core$String* $tmp2555 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, p_t, p_mref, p_args, p_out);
            panda$core$String* $tmp2554 = $tmp2555;
            panda$core$String* $tmp2553 = $tmp2554;
            tmp302552 = $tmp2553;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2553));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2554));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2548));
            panda$core$String* $tmp2556 = tmp302552;
            return $tmp2556;
        }
    }
    }
    panda$core$Bit $tmp2557 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2548->owner);
    if ($tmp2557.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2548);
    }
    }
    panda$core$Bit $tmp2559 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2548->owner)->name, &$s2558);
    if ($tmp2559.value) {
    {
        panda$core$Bit $tmp2561 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2548)->name, &$s2560);
        if ($tmp2561.value) {
        {
            panda$core$Int64 $tmp2562 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2562, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2563.value);
            panda$core$Object* $tmp2568 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2567 = $tmp2568;
            panda$core$Object* $tmp2570 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2569 = $tmp2570;
            panda$core$String* $tmp2571 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2567), ((org$pandalanguage$pandac$IRNode*) $tmp2569), p_out);
            panda$core$String* $tmp2566 = $tmp2571;
            panda$core$String* $tmp2565 = $tmp2566;
            bit2564 = $tmp2565;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2565));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2566));
            panda$core$Panda$unref$panda$core$Object($tmp2569);
            panda$core$Panda$unref$panda$core$Object($tmp2567);
            panda$core$String* $tmp2575 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            panda$core$String* $tmp2574 = $tmp2575;
            panda$core$String* $tmp2573 = $tmp2574;
            result2572 = $tmp2573;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2573));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2574));
            panda$core$String* $tmp2581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2580, result2572);
            panda$core$String* $tmp2579 = $tmp2581;
            panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2579, &$s2582);
            panda$core$String* $tmp2578 = $tmp2583;
            panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2578, bit2564);
            panda$core$String* $tmp2577 = $tmp2584;
            panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2577, &$s2585);
            panda$core$String* $tmp2576 = $tmp2586;
            (($fn2587) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2576);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2576));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2577));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2578));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2579));
            {
                panda$core$String* $tmp2589 = result2572;
                tmp312588 = $tmp2589;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2589));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2572));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2564));
                }
                {
                    tmp332590 = tmp312588;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2548));
                    panda$core$String* $tmp2591 = tmp332590;
                    return $tmp2591;
                }
            }
        }
        }
        panda$core$Bit $tmp2593 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2548)->name, &$s2592);
        if ($tmp2593.value) {
        {
            panda$core$Int64 $tmp2594 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2594, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2595.value);
            panda$core$Object* $tmp2600 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2599 = $tmp2600;
            panda$core$Object* $tmp2602 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2601 = $tmp2602;
            panda$core$String* $tmp2603 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2599), ((org$pandalanguage$pandac$IRNode*) $tmp2601), p_out);
            panda$core$String* $tmp2598 = $tmp2603;
            panda$core$String* $tmp2597 = $tmp2598;
            bit2596 = $tmp2597;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2597));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2598));
            panda$core$Panda$unref$panda$core$Object($tmp2601);
            panda$core$Panda$unref$panda$core$Object($tmp2599);
            panda$core$String* $tmp2607 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            panda$core$String* $tmp2606 = $tmp2607;
            panda$core$String* $tmp2605 = $tmp2606;
            result2604 = $tmp2605;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2605));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2606));
            panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2612, result2604);
            panda$core$String* $tmp2611 = $tmp2613;
            panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, &$s2614);
            panda$core$String* $tmp2610 = $tmp2615;
            panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2610, bit2596);
            panda$core$String* $tmp2609 = $tmp2616;
            panda$core$String* $tmp2618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, &$s2617);
            panda$core$String* $tmp2608 = $tmp2618;
            (($fn2619) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2608);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2608));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2609));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2610));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2611));
            {
                panda$core$String* $tmp2621 = result2604;
                tmp322620 = $tmp2621;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2621));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2604));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit2596));
                }
                {
                    tmp342622 = tmp322620;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2548));
                    panda$core$String* $tmp2623 = tmp342622;
                    return $tmp2623;
                }
            }
        }
        }
    }
    }
    panda$collections$Array* $tmp2627 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$core$Int64 $tmp2628 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$collections$Array$init$panda$core$Int64($tmp2627, $tmp2628);
    panda$collections$Array* $tmp2626 = $tmp2627;
    panda$collections$Array* $tmp2625 = $tmp2626;
    argRefs2624 = $tmp2625;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2625));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2626));
    memset(&actualMethodType2629, 0, sizeof(actualMethodType2629));
    memset(&actualResultType2630, 0, sizeof(actualResultType2630));
    panda$core$Int64 $tmp2633 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp2634 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2633, ((panda$core$Int64) { 1 }));
    bool $tmp2632 = $tmp2634.value;
    if (!$tmp2632) goto $l2635;
    panda$core$Object* $tmp2637 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2636 = $tmp2637;
    panda$core$Bit $tmp2638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2636)->$rawValue, ((panda$core$Int64) { 33 }));
    $tmp2632 = $tmp2638.value;
    panda$core$Panda$unref$panda$core$Object($tmp2636);
    $l2635:;
    panda$core$Bit $tmp2639 = { $tmp2632 };
    isSuper2631 = $tmp2639;
    panda$core$Bit $tmp2641 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2631);
    bool $tmp2640 = $tmp2641.value;
    if (!$tmp2640) goto $l2642;
    panda$core$Bit $tmp2643 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2548);
    $tmp2640 = $tmp2643.value;
    $l2642:;
    panda$core$Bit $tmp2644 = { $tmp2640 };
    if ($tmp2644.value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp2645 = actualMethodType2629;
            panda$core$Object* $tmp2650 = (($fn2649) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp2648 = $tmp2650;
            org$pandalanguage$pandac$Type* $tmp2651 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp2648), m2548);
            org$pandalanguage$pandac$Type* $tmp2647 = $tmp2651;
            org$pandalanguage$pandac$Type* $tmp2646 = $tmp2647;
            actualMethodType2629 = $tmp2646;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2646));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2647));
            panda$core$Panda$unref$panda$core$Object($tmp2648);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2645));
        }
        {
            panda$core$String* $tmp2652 = actualResultType2630;
            panda$core$Int64 $tmp2656 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2629->subtypes);
            panda$core$Int64 $tmp2657 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2656, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2658 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2629->subtypes, $tmp2657);
            panda$core$Object* $tmp2655 = $tmp2658;
            panda$core$String* $tmp2659 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2655));
            panda$core$String* $tmp2654 = $tmp2659;
            panda$core$String* $tmp2653 = $tmp2654;
            actualResultType2630 = $tmp2653;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2653));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2654));
            panda$core$Panda$unref$panda$core$Object($tmp2655);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2652));
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp2660 = actualMethodType2629;
            panda$core$Object* $tmp2665 = (($fn2664) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp2663 = $tmp2665;
            org$pandalanguage$pandac$Type* $tmp2666 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp2663), m2548);
            org$pandalanguage$pandac$Type* $tmp2662 = $tmp2666;
            org$pandalanguage$pandac$Type* $tmp2661 = $tmp2662;
            actualMethodType2629 = $tmp2661;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2661));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2662));
            panda$core$Panda$unref$panda$core$Object($tmp2663);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2660));
        }
        {
            panda$core$String* $tmp2667 = actualResultType2630;
            panda$core$String* $tmp2670 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp2669 = $tmp2670;
            panda$core$String* $tmp2668 = $tmp2669;
            actualResultType2630 = $tmp2668;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2668));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2669));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2667));
        }
    }
    }
    panda$core$Int64 $tmp2672 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp2673 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2629->subtypes);
    panda$core$Int64 $tmp2674 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2672, $tmp2673);
    panda$core$Int64 $tmp2675 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2674, ((panda$core$Int64) { 1 }));
    offset2671 = $tmp2675;
    panda$core$Int64 $tmp2677 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2676, ((panda$core$Int64) { 0 }), $tmp2677, ((panda$core$Bit) { false }));
    int64_t $tmp2679 = $tmp2676.min.value;
    panda$core$Int64 i2678 = { $tmp2679 };
    int64_t $tmp2681 = $tmp2676.max.value;
    bool $tmp2682 = $tmp2676.inclusive.value;
    if ($tmp2682) goto $l2689; else goto $l2690;
    $l2689:;
    if ($tmp2679 <= $tmp2681) goto $l2683; else goto $l2685;
    $l2690:;
    if ($tmp2679 < $tmp2681) goto $l2683; else goto $l2685;
    $l2683:;
    {
        panda$core$Object* $tmp2695 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2678);
        panda$core$Object* $tmp2694 = $tmp2695;
        panda$core$String* $tmp2696 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2694), p_out);
        panda$core$String* $tmp2693 = $tmp2696;
        panda$core$String* $tmp2692 = $tmp2693;
        arg2691 = $tmp2692;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2692));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2693));
        panda$core$Panda$unref$panda$core$Object($tmp2694);
        panda$core$Bit $tmp2698 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2678, offset2671);
        bool $tmp2697 = $tmp2698.value;
        if (!$tmp2697) goto $l2699;
        panda$core$Int64 $tmp2701 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2678, offset2671);
        panda$core$Object* $tmp2702 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2629->subtypes, $tmp2701);
        panda$core$Object* $tmp2700 = $tmp2702;
        panda$core$Object* $tmp2705 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2678);
        panda$core$Object* $tmp2704 = $tmp2705;
        org$pandalanguage$pandac$Type* $tmp2707 = (($fn2706) ((org$pandalanguage$pandac$IRNode*) $tmp2704)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2704));
        org$pandalanguage$pandac$Type* $tmp2703 = $tmp2707;
        panda$core$Bit $tmp2708 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2700), $tmp2703);
        $tmp2697 = $tmp2708.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2703));
        panda$core$Panda$unref$panda$core$Object($tmp2704);
        panda$core$Panda$unref$panda$core$Object($tmp2700);
        $l2699:;
        panda$core$Bit $tmp2709 = { $tmp2697 };
        if ($tmp2709.value) {
        {
            {
                panda$core$String* $tmp2710 = arg2691;
                panda$core$Object* $tmp2715 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2678);
                panda$core$Object* $tmp2714 = $tmp2715;
                org$pandalanguage$pandac$Type* $tmp2717 = (($fn2716) ((org$pandalanguage$pandac$IRNode*) $tmp2714)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2714));
                org$pandalanguage$pandac$Type* $tmp2713 = $tmp2717;
                panda$core$Int64 $tmp2719 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2678, offset2671);
                panda$core$Object* $tmp2720 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2629->subtypes, $tmp2719);
                panda$core$Object* $tmp2718 = $tmp2720;
                panda$core$String* $tmp2721 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2691, $tmp2713, ((org$pandalanguage$pandac$Type*) $tmp2718), p_out);
                panda$core$String* $tmp2712 = $tmp2721;
                panda$core$String* $tmp2711 = $tmp2712;
                arg2691 = $tmp2711;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2711));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2712));
                panda$core$Panda$unref$panda$core$Object($tmp2718);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2713));
                panda$core$Panda$unref$panda$core$Object($tmp2714);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2710));
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs2624, ((panda$core$Object*) arg2691));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2691));
    }
    $l2686:;
    int64_t $tmp2723 = $tmp2681 - i2678.value;
    if ($tmp2682) goto $l2724; else goto $l2725;
    $l2724:;
    if ((uint64_t) $tmp2723 >= 1) goto $l2722; else goto $l2685;
    $l2725:;
    if ((uint64_t) $tmp2723 > 1) goto $l2722; else goto $l2685;
    $l2722:;
    i2678.value += 1;
    goto $l2683;
    $l2685:;
    memset(&target2728, 0, sizeof(target2728));
    panda$core$Int64 $tmp2729 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs2624);
    panda$core$Bit $tmp2730 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2729, ((panda$core$Int64) { 0 }));
    if ($tmp2730.value) {
    {
        {
            panda$core$String* $tmp2731 = target2728;
            panda$core$Object* $tmp2734 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs2624, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2733 = $tmp2734;
            panda$core$String* $tmp2732 = ((panda$core$String*) $tmp2733);
            target2728 = $tmp2732;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2732));
            panda$core$Panda$unref$panda$core$Object($tmp2733);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2731));
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp2735 = target2728;
            panda$core$String* $tmp2736 = NULL;
            target2728 = $tmp2736;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2736));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2735));
        }
    }
    }
    panda$core$String* $tmp2740 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target2728, m2548, isSuper2631, p_out);
    panda$core$String* $tmp2739 = $tmp2740;
    panda$core$String* $tmp2738 = $tmp2739;
    methodRef2737 = $tmp2738;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2738));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2739));
    panda$core$Bit $tmp2742 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2548);
    indirect2741 = $tmp2742;
    panda$core$String* $tmp2746 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp2745 = $tmp2746;
    panda$core$String* $tmp2744 = $tmp2745;
    result2743 = $tmp2744;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2744));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2745));
    panda$core$String* $tmp2748 = &$s2749;
    separator2747 = $tmp2748;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2748));
    memset(&indirectVar2750, 0, sizeof(indirectVar2750));
    if (indirect2741.value) {
    {
        panda$core$String* $tmp2755 = panda$core$String$convert$R$panda$core$String(actualResultType2630);
        panda$core$String* $tmp2754 = $tmp2755;
        panda$core$String* $tmp2757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2754, &$s2756);
        panda$core$String* $tmp2753 = $tmp2757;
        panda$core$String* $tmp2758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2753, result2743);
        panda$core$String* $tmp2752 = $tmp2758;
        panda$core$String* $tmp2760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2752, &$s2759);
        panda$core$String* $tmp2751 = $tmp2760;
        (($fn2761) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2751);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2751));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2752));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2753));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2754));
        panda$core$String* $tmp2766 = panda$core$String$convert$R$panda$core$String(methodRef2737);
        panda$core$String* $tmp2765 = $tmp2766;
        panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2765, &$s2767);
        panda$core$String* $tmp2764 = $tmp2768;
        panda$core$String* $tmp2769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2764, result2743);
        panda$core$String* $tmp2763 = $tmp2769;
        panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2763, &$s2770);
        panda$core$String* $tmp2762 = $tmp2771;
        (($fn2772) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2762);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2762));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2763));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2764));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2765));
        {
            panda$core$String* $tmp2773 = separator2747;
            panda$core$String* $tmp2774 = &$s2775;
            separator2747 = $tmp2774;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2774));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2773));
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2782 = panda$core$String$convert$R$panda$core$String(actualResultType2630);
        panda$core$String* $tmp2781 = $tmp2782;
        panda$core$String* $tmp2784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2781, &$s2783);
        panda$core$String* $tmp2780 = $tmp2784;
        panda$core$String* $tmp2785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, result2743);
        panda$core$String* $tmp2779 = $tmp2785;
        panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2779, &$s2786);
        panda$core$String* $tmp2778 = $tmp2787;
        panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, methodRef2737);
        panda$core$String* $tmp2777 = $tmp2788;
        panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, &$s2789);
        panda$core$String* $tmp2776 = $tmp2790;
        (($fn2791) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2776);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2776));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2777));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2778));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2779));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2780));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2781));
    }
    }
    {
        ITable* $tmp2795 = ((panda$collections$Iterable*) argRefs2624)->$class->itable;
        while ($tmp2795->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2795 = $tmp2795->next;
        }
        $fn2797 $tmp2796 = $tmp2795->methods[0];
        panda$collections$Iterator* $tmp2798 = $tmp2796(((panda$collections$Iterable*) argRefs2624));
        panda$collections$Iterator* $tmp2794 = $tmp2798;
        panda$collections$Iterator* $tmp2793 = $tmp2794;
        Iter$975$92792 = $tmp2793;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2793));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2794));
        $l2799:;
        ITable* $tmp2802 = Iter$975$92792->$class->itable;
        while ($tmp2802->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2802 = $tmp2802->next;
        }
        $fn2804 $tmp2803 = $tmp2802->methods[0];
        panda$core$Bit $tmp2805 = $tmp2803(Iter$975$92792);
        panda$core$Bit $tmp2806 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2805);
        bool $tmp2801 = $tmp2806.value;
        if (!$tmp2801) goto $l2800;
        {
            ITable* $tmp2810 = Iter$975$92792->$class->itable;
            while ($tmp2810->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2810 = $tmp2810->next;
            }
            $fn2812 $tmp2811 = $tmp2810->methods[1];
            panda$core$Object* $tmp2813 = $tmp2811(Iter$975$92792);
            panda$core$Object* $tmp2809 = $tmp2813;
            panda$core$String* $tmp2808 = ((panda$core$String*) $tmp2809);
            arg2807 = $tmp2808;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2808));
            panda$core$Panda$unref$panda$core$Object($tmp2809);
            panda$core$String* $tmp2818 = panda$core$String$convert$R$panda$core$String(separator2747);
            panda$core$String* $tmp2817 = $tmp2818;
            panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, &$s2819);
            panda$core$String* $tmp2816 = $tmp2820;
            panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, arg2807);
            panda$core$String* $tmp2815 = $tmp2821;
            panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, &$s2822);
            panda$core$String* $tmp2814 = $tmp2823;
            (($fn2824) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2814);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2814));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2815));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2816));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2817));
            {
                panda$core$String* $tmp2825 = separator2747;
                panda$core$String* $tmp2826 = &$s2827;
                separator2747 = $tmp2826;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2826));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2825));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2807));
        }
        goto $l2799;
        $l2800:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$975$92792));
    }
    (($fn2829) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2828);
    panda$core$String* $tmp2831 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp2830 = $tmp2831;
    panda$core$Bit $tmp2832 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp2830, actualResultType2630);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2830));
    if ($tmp2832.value) {
    {
        {
            panda$core$Int64 $tmp2837 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2629->subtypes);
            panda$core$Int64 $tmp2838 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2837, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2839 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2629->subtypes, $tmp2838);
            panda$core$Object* $tmp2836 = $tmp2839;
            panda$core$String* $tmp2840 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result2743, ((org$pandalanguage$pandac$Type*) $tmp2836), p_t, p_out);
            panda$core$String* $tmp2835 = $tmp2840;
            panda$core$String* $tmp2834 = $tmp2835;
            tmp352833 = $tmp2834;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2834));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2835));
            panda$core$Panda$unref$panda$core$Object($tmp2836);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs2624));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2747));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2743));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType2630));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar2750));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType2629));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef2737));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2728));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2548));
            }
            panda$core$String* $tmp2841 = tmp352833;
            return $tmp2841;
        }
    }
    }
    {
        panda$core$String* $tmp2843 = result2743;
        tmp362842 = $tmp2843;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2843));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs2624));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator2747));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2743));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType2630));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar2750));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType2629));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef2737));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2728));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2548));
        }
        panda$core$String* $tmp2844 = tmp362842;
        return $tmp2844;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped2846;
    panda$core$String* nonNullValue2852;
    panda$core$String* tmp372858;
    panda$core$String* wrapped2872;
    panda$core$String* tmp382959;
    panda$core$Bit $tmp2845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2845.value) {
    {
        panda$core$Object* $tmp2850 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp2849 = $tmp2850;
        panda$core$String* $tmp2851 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp2849), p_out);
        panda$core$String* $tmp2848 = $tmp2851;
        panda$core$String* $tmp2847 = $tmp2848;
        unwrapped2846 = $tmp2847;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2847));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2848));
        panda$core$Panda$unref$panda$core$Object($tmp2849);
        panda$core$Object* $tmp2856 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp2855 = $tmp2856;
        panda$core$String* $tmp2857 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped2846, ((org$pandalanguage$pandac$Type*) $tmp2855), p_dstType, p_out);
        panda$core$String* $tmp2854 = $tmp2857;
        panda$core$String* $tmp2853 = $tmp2854;
        nonNullValue2852 = $tmp2853;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2853));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2854));
        panda$core$Panda$unref$panda$core$Object($tmp2855);
        {
            panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2864, p_value);
            panda$core$String* $tmp2863 = $tmp2865;
            panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2863, &$s2866);
            panda$core$String* $tmp2862 = $tmp2867;
            panda$core$String* $tmp2868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2862, nonNullValue2852);
            panda$core$String* $tmp2861 = $tmp2868;
            panda$core$String* $tmp2870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2861, &$s2869);
            panda$core$String* $tmp2860 = $tmp2870;
            panda$core$String* $tmp2859 = $tmp2860;
            tmp372858 = $tmp2859;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2859));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2860));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2861));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2862));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2863));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unwrapped2846));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nonNullValue2852));
            }
            panda$core$String* $tmp2871 = tmp372858;
            return $tmp2871;
        }
    }
    }
    panda$core$String* $tmp2875 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp2874 = $tmp2875;
    panda$core$String* $tmp2873 = $tmp2874;
    wrapped2872 = $tmp2873;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2873));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2874));
    panda$core$String* $tmp2881 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp2880 = $tmp2881;
    panda$core$String* $tmp2882 = panda$core$String$convert$R$panda$core$String($tmp2880);
    panda$core$String* $tmp2879 = $tmp2882;
    panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2879, &$s2883);
    panda$core$String* $tmp2878 = $tmp2884;
    panda$core$String* $tmp2885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2878, wrapped2872);
    panda$core$String* $tmp2877 = $tmp2885;
    panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2877, &$s2886);
    panda$core$String* $tmp2876 = $tmp2887;
    (($fn2888) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2876);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2876));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2877));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2878));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2879));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2880));
    panda$core$Bit $tmp2889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2889.value) {
    {
        panda$core$String* $tmp2893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2892, p_value);
        panda$core$String* $tmp2891 = $tmp2893;
        panda$core$String* $tmp2895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2891, &$s2894);
        panda$core$String* $tmp2890 = $tmp2895;
        (($fn2896) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2890);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2890));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2891));
        panda$core$Int64 $tmp2897 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp2897;
    }
    }
    panda$core$String* $tmp2904 = panda$core$String$convert$R$panda$core$String(wrapped2872);
    panda$core$String* $tmp2903 = $tmp2904;
    panda$core$String* $tmp2906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2903, &$s2905);
    panda$core$String* $tmp2902 = $tmp2906;
    panda$core$String* $tmp2908 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp2907 = $tmp2908;
    panda$core$String* $tmp2909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2902, $tmp2907);
    panda$core$String* $tmp2901 = $tmp2909;
    panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2901, &$s2910);
    panda$core$String* $tmp2900 = $tmp2911;
    panda$core$Int64 $tmp2916 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_srcType);
    panda$core$Int64$wrapper* $tmp2917;
    $tmp2917 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2917->value = $tmp2916;
    panda$core$Object* $tmp2915 = ((panda$core$Object*) $tmp2917);
    panda$core$String* $tmp2918 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2914, $tmp2915);
    panda$core$String* $tmp2913 = $tmp2918;
    panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2913, &$s2919);
    panda$core$String* $tmp2912 = $tmp2920;
    panda$core$String* $tmp2921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2900, $tmp2912);
    panda$core$String* $tmp2899 = $tmp2921;
    panda$core$String* $tmp2926 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_srcType)->name);
    panda$core$String* $tmp2925 = $tmp2926;
    panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2924, $tmp2925);
    panda$core$String* $tmp2923 = $tmp2927;
    panda$core$String* $tmp2929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2923, &$s2928);
    panda$core$String* $tmp2922 = $tmp2929;
    panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2899, $tmp2922);
    panda$core$String* $tmp2898 = $tmp2930;
    (($fn2931) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2898);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2898));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2922));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2923));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2925));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2899));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2912));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2913));
    panda$core$Panda$unref$panda$core$Object($tmp2915);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2900));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2901));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2907));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2902));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2903));
    panda$core$String* $tmp2936 = panda$core$String$convert$R$panda$core$String(wrapped2872);
    panda$core$String* $tmp2935 = $tmp2936;
    panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, &$s2937);
    panda$core$String* $tmp2934 = $tmp2938;
    panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2934, p_value);
    panda$core$String* $tmp2933 = $tmp2939;
    panda$core$String* $tmp2941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2933, &$s2940);
    panda$core$String* $tmp2932 = $tmp2941;
    (($fn2942) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2932);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2932));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2933));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2934));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2935));
    panda$core$Bit $tmp2943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2943.value) {
    {
        panda$core$Int64 $tmp2944 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp2944;
        (($fn2946) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2945);
        (($fn2948) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2947);
        panda$core$Int64 $tmp2949 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp2949;
        panda$core$String* $tmp2952 = panda$core$String$convert$R$panda$core$String(wrapped2872);
        panda$core$String* $tmp2951 = $tmp2952;
        panda$core$String* $tmp2954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2951, &$s2953);
        panda$core$String* $tmp2950 = $tmp2954;
        (($fn2955) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2950);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2950));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2951));
        panda$core$Int64 $tmp2956 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp2956;
        (($fn2958) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2957);
    }
    }
    {
        panda$core$String* $tmp2967 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp2966 = $tmp2967;
        panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2965, $tmp2966);
        panda$core$String* $tmp2964 = $tmp2968;
        panda$core$String* $tmp2970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2964, &$s2969);
        panda$core$String* $tmp2963 = $tmp2970;
        panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2963, wrapped2872);
        panda$core$String* $tmp2962 = $tmp2971;
        panda$core$String* $tmp2973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, &$s2972);
        panda$core$String* $tmp2961 = $tmp2973;
        panda$core$String* $tmp2960 = $tmp2961;
        tmp382959 = $tmp2960;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2960));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2961));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2962));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2963));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2964));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2966));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wrapped2872));
        panda$core$String* $tmp2974 = tmp382959;
        return $tmp2974;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$FieldDecl* p_field, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2980;
    panda$core$String* baseRef2990;
    panda$core$String* tmp392998;
    panda$core$String* tmp403013;
    panda$core$Bit $tmp2975 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_field->annotations);
    if ($tmp2975.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_field->value != NULL }).value);
        panda$core$String* $tmp2979 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_field->value, p_out);
        panda$core$String* $tmp2978 = $tmp2979;
        panda$core$String* $tmp2977 = $tmp2978;
        panda$core$String* $tmp2976 = $tmp2977;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2977));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2978));
        return $tmp2976;
    }
    }
    panda$core$Object* $tmp2985 = (($fn2984) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp2983 = $tmp2985;
    org$pandalanguage$pandac$Type* $tmp2988 = (($fn2987) p_base->$class->vtable[2])(p_base);
    org$pandalanguage$pandac$Type* $tmp2986 = $tmp2988;
    org$pandalanguage$pandac$ClassDecl* $tmp2989 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2983), $tmp2986);
    org$pandalanguage$pandac$ClassDecl* $tmp2982 = $tmp2989;
    org$pandalanguage$pandac$ClassDecl* $tmp2981 = $tmp2982;
    cl2980 = $tmp2981;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2981));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2982));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2986));
    panda$core$Panda$unref$panda$core$Object($tmp2983);
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl2980);
    panda$core$String* $tmp2993 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    panda$core$String* $tmp2992 = $tmp2993;
    panda$core$String* $tmp2991 = $tmp2992;
    baseRef2990 = $tmp2991;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2991));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2992));
    PANDA_ASSERT(((panda$core$Bit) { cl2980 != NULL }).value);
    panda$core$Object* $tmp2996 = (($fn2995) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp2994 = $tmp2996;
    panda$core$Bit $tmp2997 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp2994), cl2980);
    panda$core$Panda$unref$panda$core$Object($tmp2994);
    if ($tmp2997.value) {
    {
        {
            panda$core$String* $tmp3004 = panda$core$String$convert$R$panda$core$String(baseRef2990);
            panda$core$String* $tmp3003 = $tmp3004;
            panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3003, &$s3005);
            panda$core$String* $tmp3002 = $tmp3006;
            panda$core$String* $tmp3008 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
            panda$core$String* $tmp3007 = $tmp3008;
            panda$core$String* $tmp3009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, $tmp3007);
            panda$core$String* $tmp3001 = $tmp3009;
            panda$core$String* $tmp3011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, &$s3010);
            panda$core$String* $tmp3000 = $tmp3011;
            panda$core$String* $tmp2999 = $tmp3000;
            tmp392998 = $tmp2999;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2999));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3000));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3001));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3007));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3002));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3003));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2990));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2980));
            }
            panda$core$String* $tmp3012 = tmp392998;
            return $tmp3012;
        }
    }
    }
    {
        panda$core$String* $tmp3019 = panda$core$String$convert$R$panda$core$String(baseRef2990);
        panda$core$String* $tmp3018 = $tmp3019;
        panda$core$String* $tmp3021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3018, &$s3020);
        panda$core$String* $tmp3017 = $tmp3021;
        panda$core$String* $tmp3023 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
        panda$core$String* $tmp3022 = $tmp3023;
        panda$core$String* $tmp3024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3017, $tmp3022);
        panda$core$String* $tmp3016 = $tmp3024;
        panda$core$String* $tmp3026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, &$s3025);
        panda$core$String* $tmp3015 = $tmp3026;
        panda$core$String* $tmp3014 = $tmp3015;
        tmp403013 = $tmp3014;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3014));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3015));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3016));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3022));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3017));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3018));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef2990));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2980));
        }
        panda$core$String* $tmp3027 = tmp403013;
        return $tmp3027;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3028;
    panda$core$String* wrapped3044;
    panda$core$String* nonNullValue3050;
    panda$core$String* tmp413056;
    panda$core$String* tmp423076;
    panda$core$String* tmp433078;
    panda$core$String* $tmp3036 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp3035 = $tmp3036;
    panda$core$String* $tmp3037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3034, $tmp3035);
    panda$core$String* $tmp3033 = $tmp3037;
    panda$core$String* $tmp3039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3033, &$s3038);
    panda$core$String* $tmp3032 = $tmp3039;
    panda$core$String* $tmp3040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3032, p_value);
    panda$core$String* $tmp3031 = $tmp3040;
    panda$core$String* $tmp3042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3031, &$s3041);
    panda$core$String* $tmp3030 = $tmp3042;
    panda$core$String* $tmp3029 = $tmp3030;
    result3028 = $tmp3029;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3029));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3030));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3031));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3032));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3033));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3035));
    panda$core$Bit $tmp3043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3043.value) {
    {
        panda$core$Object* $tmp3048 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3047 = $tmp3048;
        panda$core$String* $tmp3049 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3047), p_out);
        panda$core$String* $tmp3046 = $tmp3049;
        panda$core$String* $tmp3045 = $tmp3046;
        wrapped3044 = $tmp3045;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3045));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3046));
        panda$core$Panda$unref$panda$core$Object($tmp3047);
        panda$core$Object* $tmp3054 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3053 = $tmp3054;
        panda$core$String* $tmp3055 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped3044, ((org$pandalanguage$pandac$Type*) $tmp3053), p_dstType, p_out);
        panda$core$String* $tmp3052 = $tmp3055;
        panda$core$String* $tmp3051 = $tmp3052;
        nonNullValue3050 = $tmp3051;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3051));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3052));
        panda$core$Panda$unref$panda$core$Object($tmp3053);
        {
            panda$core$String* $tmp3065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3064, p_value);
            panda$core$String* $tmp3063 = $tmp3065;
            panda$core$String* $tmp3067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3063, &$s3066);
            panda$core$String* $tmp3062 = $tmp3067;
            panda$core$String* $tmp3068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3062, nonNullValue3050);
            panda$core$String* $tmp3061 = $tmp3068;
            panda$core$String* $tmp3070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3061, &$s3069);
            panda$core$String* $tmp3060 = $tmp3070;
            panda$core$String* $tmp3072 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
            panda$core$String* $tmp3071 = $tmp3072;
            panda$core$String* $tmp3073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3060, $tmp3071);
            panda$core$String* $tmp3059 = $tmp3073;
            panda$core$String* $tmp3075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3059, &$s3074);
            panda$core$String* $tmp3058 = $tmp3075;
            panda$core$String* $tmp3057 = $tmp3058;
            tmp413056 = $tmp3057;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3057));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3058));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3059));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3071));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3060));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3061));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3062));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3063));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nonNullValue3050));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wrapped3044));
            }
            {
                tmp423076 = tmp413056;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3028));
                panda$core$String* $tmp3077 = tmp423076;
                return $tmp3077;
            }
        }
    }
    }
    {
        panda$core$String* $tmp3079 = result3028;
        tmp433078 = $tmp3079;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3079));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3028));
        panda$core$String* $tmp3080 = tmp433078;
        return $tmp3080;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3089 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp3088 = $tmp3089;
    panda$core$String* $tmp3090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3087, $tmp3088);
    panda$core$String* $tmp3086 = $tmp3090;
    panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3086, &$s3091);
    panda$core$String* $tmp3085 = $tmp3092;
    panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3085, p_value);
    panda$core$String* $tmp3084 = $tmp3093;
    panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3084, &$s3094);
    panda$core$String* $tmp3083 = $tmp3095;
    panda$core$String* $tmp3082 = $tmp3083;
    panda$core$String* $tmp3081 = $tmp3082;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3082));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3083));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3084));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3085));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3086));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3088));
    return $tmp3081;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3104 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp3103 = $tmp3104;
    panda$core$String* $tmp3105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3102, $tmp3103);
    panda$core$String* $tmp3101 = $tmp3105;
    panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3101, &$s3106);
    panda$core$String* $tmp3100 = $tmp3107;
    panda$core$String* $tmp3108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3100, p_value);
    panda$core$String* $tmp3099 = $tmp3108;
    panda$core$String* $tmp3110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, &$s3109);
    panda$core$String* $tmp3098 = $tmp3110;
    panda$core$String* $tmp3097 = $tmp3098;
    panda$core$String* $tmp3096 = $tmp3097;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3097));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3098));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3099));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3100));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3101));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3103));
    return $tmp3096;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op3111;
    panda$core$String* tmp483114;
    org$pandalanguage$pandac$ClassDecl* srcClass3130;
    org$pandalanguage$pandac$ClassDecl* targetClass3137;
    panda$core$String* tmp443156;
    panda$core$String* tmp493160;
    panda$core$String* tmp453174;
    panda$core$String* tmp503178;
    panda$core$String* tmp463194;
    panda$core$String* tmp513198;
    panda$core$String* tmp473214;
    panda$core$String* tmp523218;
    panda$core$String* srcType3223;
    panda$core$String* dstType3227;
    panda$core$String* tmp533232;
    panda$core$String* tmp543235;
    memset(&op3111, 0, sizeof(op3111));
    panda$core$Bit $tmp3112 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3112.value) {
    {
        panda$core$Bit $tmp3113 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3113.value);
        {
            panda$core$String* $tmp3122 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            panda$core$String* $tmp3121 = $tmp3122;
            panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3120, $tmp3121);
            panda$core$String* $tmp3119 = $tmp3123;
            panda$core$String* $tmp3125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, &$s3124);
            panda$core$String* $tmp3118 = $tmp3125;
            panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3118, p_value);
            panda$core$String* $tmp3117 = $tmp3126;
            panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3117, &$s3127);
            panda$core$String* $tmp3116 = $tmp3128;
            panda$core$String* $tmp3115 = $tmp3116;
            tmp483114 = $tmp3115;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3115));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3116));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3117));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3118));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3119));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3121));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op3111));
            panda$core$String* $tmp3129 = tmp483114;
            return $tmp3129;
        }
    }
    }
    else {
    {
        panda$core$Object* $tmp3135 = (($fn3134) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp3133 = $tmp3135;
        org$pandalanguage$pandac$ClassDecl* $tmp3136 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3133), p_src);
        org$pandalanguage$pandac$ClassDecl* $tmp3132 = $tmp3136;
        org$pandalanguage$pandac$ClassDecl* $tmp3131 = $tmp3132;
        srcClass3130 = $tmp3131;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3131));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3132));
        panda$core$Panda$unref$panda$core$Object($tmp3133);
        PANDA_ASSERT(((panda$core$Bit) { srcClass3130 != NULL }).value);
        panda$core$Object* $tmp3142 = (($fn3141) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp3140 = $tmp3142;
        org$pandalanguage$pandac$ClassDecl* $tmp3143 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3140), p_target);
        org$pandalanguage$pandac$ClassDecl* $tmp3139 = $tmp3143;
        org$pandalanguage$pandac$ClassDecl* $tmp3138 = $tmp3139;
        targetClass3137 = $tmp3138;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3138));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3139));
        panda$core$Panda$unref$panda$core$Object($tmp3140);
        PANDA_ASSERT(((panda$core$Bit) { targetClass3137 != NULL }).value);
        panda$core$Object* $tmp3147 = (($fn3146) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp3145 = $tmp3147;
        panda$core$Bit $tmp3148 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3145), srcClass3130);
        bool $tmp3144 = $tmp3148.value;
        panda$core$Panda$unref$panda$core$Object($tmp3145);
        if (!$tmp3144) goto $l3149;
        panda$core$Object* $tmp3152 = (($fn3151) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp3150 = $tmp3152;
        panda$core$Bit $tmp3153 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3150), targetClass3137);
        panda$core$Bit $tmp3154 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3153);
        $tmp3144 = $tmp3154.value;
        panda$core$Panda$unref$panda$core$Object($tmp3150);
        $l3149:;
        panda$core$Bit $tmp3155 = { $tmp3144 };
        if ($tmp3155.value) {
        {
            {
                panda$core$String* $tmp3159 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                panda$core$String* $tmp3158 = $tmp3159;
                panda$core$String* $tmp3157 = $tmp3158;
                tmp443156 = $tmp3157;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3157));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3158));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass3137));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass3130));
                }
                {
                    tmp493160 = tmp443156;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op3111));
                    panda$core$String* $tmp3161 = tmp493160;
                    return $tmp3161;
                }
            }
        }
        }
        else {
        panda$core$Object* $tmp3165 = (($fn3164) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp3163 = $tmp3165;
        panda$core$Bit $tmp3166 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3163), srcClass3130);
        panda$core$Bit $tmp3167 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3166);
        bool $tmp3162 = $tmp3167.value;
        panda$core$Panda$unref$panda$core$Object($tmp3163);
        if (!$tmp3162) goto $l3168;
        panda$core$Object* $tmp3171 = (($fn3170) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp3169 = $tmp3171;
        panda$core$Bit $tmp3172 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3169), targetClass3137);
        $tmp3162 = $tmp3172.value;
        panda$core$Panda$unref$panda$core$Object($tmp3169);
        $l3168:;
        panda$core$Bit $tmp3173 = { $tmp3162 };
        if ($tmp3173.value) {
        {
            {
                panda$core$String* $tmp3177 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                panda$core$String* $tmp3176 = $tmp3177;
                panda$core$String* $tmp3175 = $tmp3176;
                tmp453174 = $tmp3175;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3175));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3176));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass3137));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass3130));
                }
                {
                    tmp503178 = tmp453174;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op3111));
                    panda$core$String* $tmp3179 = tmp503178;
                    return $tmp3179;
                }
            }
        }
        }
        else {
        panda$core$Object* $tmp3184 = (($fn3183) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp3182 = $tmp3184;
        panda$core$Bit $tmp3185 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3182), srcClass3130);
        bool $tmp3181 = $tmp3185.value;
        panda$core$Panda$unref$panda$core$Object($tmp3182);
        if (!$tmp3181) goto $l3186;
        panda$core$Bit $tmp3187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3181 = $tmp3187.value;
        $l3186:;
        panda$core$Bit $tmp3188 = { $tmp3181 };
        bool $tmp3180 = $tmp3188.value;
        if (!$tmp3180) goto $l3189;
        panda$core$Object* $tmp3191 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3190 = $tmp3191;
        panda$core$Bit $tmp3192 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3190), p_src);
        $tmp3180 = $tmp3192.value;
        panda$core$Panda$unref$panda$core$Object($tmp3190);
        $l3189:;
        panda$core$Bit $tmp3193 = { $tmp3180 };
        if ($tmp3193.value) {
        {
            {
                panda$core$String* $tmp3197 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                panda$core$String* $tmp3196 = $tmp3197;
                panda$core$String* $tmp3195 = $tmp3196;
                tmp463194 = $tmp3195;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3195));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3196));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass3137));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass3130));
                }
                {
                    tmp513198 = tmp463194;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op3111));
                    panda$core$String* $tmp3199 = tmp513198;
                    return $tmp3199;
                }
            }
        }
        }
        else {
        panda$core$Object* $tmp3204 = (($fn3203) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp3202 = $tmp3204;
        panda$core$Bit $tmp3205 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3202), targetClass3137);
        bool $tmp3201 = $tmp3205.value;
        panda$core$Panda$unref$panda$core$Object($tmp3202);
        if (!$tmp3201) goto $l3206;
        panda$core$Bit $tmp3207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3201 = $tmp3207.value;
        $l3206:;
        panda$core$Bit $tmp3208 = { $tmp3201 };
        bool $tmp3200 = $tmp3208.value;
        if (!$tmp3200) goto $l3209;
        panda$core$Object* $tmp3211 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3210 = $tmp3211;
        panda$core$Bit $tmp3212 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3210), p_target);
        $tmp3200 = $tmp3212.value;
        panda$core$Panda$unref$panda$core$Object($tmp3210);
        $l3209:;
        panda$core$Bit $tmp3213 = { $tmp3200 };
        if ($tmp3213.value) {
        {
            {
                panda$core$String* $tmp3217 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
                panda$core$String* $tmp3216 = $tmp3217;
                panda$core$String* $tmp3215 = $tmp3216;
                tmp473214 = $tmp3215;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3215));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3216));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass3137));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass3130));
                }
                {
                    tmp523218 = tmp473214;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op3111));
                    panda$core$String* $tmp3219 = tmp523218;
                    return $tmp3219;
                }
            }
        }
        }
        }
        }
        }
        {
            panda$core$String* $tmp3220 = op3111;
            panda$core$String* $tmp3221 = &$s3222;
            op3111 = $tmp3221;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3221));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3220));
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetClass3137));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcClass3130));
        }
    }
    }
    panda$core$String* $tmp3226 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    panda$core$String* $tmp3225 = $tmp3226;
    panda$core$String* $tmp3224 = $tmp3225;
    srcType3223 = $tmp3224;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3224));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3225));
    panda$core$String* $tmp3230 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    panda$core$String* $tmp3229 = $tmp3230;
    panda$core$String* $tmp3228 = $tmp3229;
    dstType3227 = $tmp3228;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3228));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3229));
    panda$core$Bit $tmp3231 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3223, dstType3227);
    if ($tmp3231.value) {
    {
        {
            panda$core$String* $tmp3233 = p_value;
            tmp533232 = $tmp3233;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3233));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dstType3227));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcType3223));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op3111));
            }
            panda$core$String* $tmp3234 = tmp533232;
            return $tmp3234;
        }
    }
    }
    {
        panda$core$String* $tmp3242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3241, dstType3227);
        panda$core$String* $tmp3240 = $tmp3242;
        panda$core$String* $tmp3244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3240, &$s3243);
        panda$core$String* $tmp3239 = $tmp3244;
        panda$core$String* $tmp3245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3239, p_value);
        panda$core$String* $tmp3238 = $tmp3245;
        panda$core$String* $tmp3247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3238, &$s3246);
        panda$core$String* $tmp3237 = $tmp3247;
        panda$core$String* $tmp3236 = $tmp3237;
        tmp543235 = $tmp3236;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3236));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3237));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3238));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3239));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3240));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dstType3227));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) srcType3223));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) op3111));
        }
        panda$core$String* $tmp3248 = tmp543235;
        return $tmp3248;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef3249;
    panda$core$String* tmp553253;
    panda$core$String* $tmp3252 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    panda$core$String* $tmp3251 = $tmp3252;
    panda$core$String* $tmp3250 = $tmp3251;
    baseRef3249 = $tmp3250;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3250));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3251));
    {
        org$pandalanguage$pandac$Type* $tmp3258 = (($fn3257) p_base->$class->vtable[2])(p_base);
        org$pandalanguage$pandac$Type* $tmp3256 = $tmp3258;
        panda$core$String* $tmp3259 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, baseRef3249, $tmp3256, p_t, p_out);
        panda$core$String* $tmp3255 = $tmp3259;
        panda$core$String* $tmp3254 = $tmp3255;
        tmp553253 = $tmp3254;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3254));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3256));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef3249));
        panda$core$String* $tmp3260 = tmp553253;
        return $tmp3260;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_target, org$pandalanguage$pandac$IRNode* p_initCall, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1095_93261;
    org$pandalanguage$pandac$Type* initType3263;
    org$pandalanguage$pandac$MethodRef* initMref3265;
    panda$collections$ImmutableArray* initArgs3267;
    org$pandalanguage$pandac$ClassDecl* cl3269;
    panda$core$String* t3276;
    org$pandalanguage$pandac$IRNode* $match$1101_213287;
    panda$collections$ImmutableArray* args3289;
    panda$core$String* value3293;
    panda$core$String* tmp563299;
    panda$core$String* tmp573312;
    panda$core$String* tmp3319;
    panda$core$String* tmp583346;
    panda$core$String* tmp593348;
    panda$core$String* result3350;
    panda$core$String* tmp603393;
    {
        $match$1095_93261 = p_initCall;
        panda$core$Bit $tmp3262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1095_93261->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp3262.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3264 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1095_93261->$data + 16));
            initType3263 = *$tmp3264;
            org$pandalanguage$pandac$MethodRef** $tmp3266 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1095_93261->$data + 24));
            initMref3265 = *$tmp3266;
            panda$collections$ImmutableArray** $tmp3268 = ((panda$collections$ImmutableArray**) ((char*) $match$1095_93261->$data + 32));
            initArgs3267 = *$tmp3268;
            panda$core$Object* $tmp3274 = (($fn3273) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp3272 = $tmp3274;
            org$pandalanguage$pandac$ClassDecl* $tmp3275 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3272), p_target);
            org$pandalanguage$pandac$ClassDecl* $tmp3271 = $tmp3275;
            org$pandalanguage$pandac$ClassDecl* $tmp3270 = $tmp3271;
            cl3269 = $tmp3270;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3270));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3271));
            panda$core$Panda$unref$panda$core$Object($tmp3272);
            PANDA_ASSERT(((panda$core$Bit) { cl3269 != NULL }).value);
            panda$core$String* $tmp3279 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            panda$core$String* $tmp3278 = $tmp3279;
            panda$core$String* $tmp3277 = $tmp3278;
            t3276 = $tmp3277;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3277));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3278));
            panda$core$Bit $tmp3281 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            bool $tmp3280 = $tmp3281.value;
            if ($tmp3280) goto $l3282;
            org$pandalanguage$pandac$Type* $tmp3284 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp3283 = $tmp3284;
            panda$core$Bit $tmp3285 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp3283);
            $tmp3280 = $tmp3285.value;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3283));
            $l3282:;
            panda$core$Bit $tmp3286 = { $tmp3280 };
            if ($tmp3286.value) {
            {
                {
                    $match$1101_213287 = p_initCall;
                    panda$core$Bit $tmp3288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1101_213287->$rawValue, ((panda$core$Int64) { 5 }));
                    if ($tmp3288.value) {
                    {
                        panda$collections$ImmutableArray** $tmp3290 = ((panda$collections$ImmutableArray**) ((char*) $match$1101_213287->$data + 32));
                        args3289 = *$tmp3290;
                        panda$core$Int64 $tmp3291 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(args3289);
                        panda$core$Bit $tmp3292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3291, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp3292.value);
                        panda$core$Object* $tmp3297 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(args3289, ((panda$core$Int64) { 0 }));
                        panda$core$Object* $tmp3296 = $tmp3297;
                        panda$core$String* $tmp3298 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3296), p_out);
                        panda$core$String* $tmp3295 = $tmp3298;
                        panda$core$String* $tmp3294 = $tmp3295;
                        value3293 = $tmp3294;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3294));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3295));
                        panda$core$Panda$unref$panda$core$Object($tmp3296);
                        {
                            panda$core$String* $tmp3306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3305, t3276);
                            panda$core$String* $tmp3304 = $tmp3306;
                            panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3304, &$s3307);
                            panda$core$String* $tmp3303 = $tmp3308;
                            panda$core$String* $tmp3309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3303, value3293);
                            panda$core$String* $tmp3302 = $tmp3309;
                            panda$core$String* $tmp3311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3302, &$s3310);
                            panda$core$String* $tmp3301 = $tmp3311;
                            panda$core$String* $tmp3300 = $tmp3301;
                            tmp563299 = $tmp3300;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3300));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3301));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3302));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3303));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3304));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value3293));
                            {
                                tmp573312 = tmp563299;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3276));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl3269));
                                }
                                panda$core$String* $tmp3313 = tmp573312;
                                return $tmp3313;
                            }
                        }
                    }
                    }
                }
            }
            }
            panda$core$Object* $tmp3316 = (($fn3315) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp3314 = $tmp3316;
            panda$core$Bit $tmp3317 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3314), cl3269);
            panda$core$Panda$unref$panda$core$Object($tmp3314);
            if ($tmp3317.value) {
            {
                panda$core$Int64 $tmp3318 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
                self->varCount = $tmp3318;
                panda$core$Int64$wrapper* $tmp3325;
                $tmp3325 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp3325->value = self->varCount;
                panda$core$Object* $tmp3324 = ((panda$core$Object*) $tmp3325);
                panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3323, $tmp3324);
                panda$core$String* $tmp3322 = $tmp3326;
                panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3322, &$s3327);
                panda$core$String* $tmp3321 = $tmp3328;
                panda$core$String* $tmp3320 = $tmp3321;
                tmp3319 = $tmp3320;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3320));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3321));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3322));
                panda$core$Panda$unref$panda$core$Object($tmp3324);
                panda$core$String* $tmp3333 = panda$core$String$convert$R$panda$core$String(t3276);
                panda$core$String* $tmp3332 = $tmp3333;
                panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3332, &$s3334);
                panda$core$String* $tmp3331 = $tmp3335;
                panda$core$String* $tmp3336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3331, tmp3319);
                panda$core$String* $tmp3330 = $tmp3336;
                panda$core$String* $tmp3338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3330, &$s3337);
                panda$core$String* $tmp3329 = $tmp3338;
                (($fn3339) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3329);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3329));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3330));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3331));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3332));
                panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3342, tmp3319);
                panda$core$String* $tmp3341 = $tmp3343;
                panda$core$String* $tmp3345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, &$s3344);
                panda$core$String* $tmp3340 = $tmp3345;
                org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType3263, initMref3265, initArgs3267, $tmp3340, p_out);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3340));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3341));
                {
                    panda$core$String* $tmp3347 = tmp3319;
                    tmp583346 = $tmp3347;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3347));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tmp3319));
                    {
                        tmp593348 = tmp583346;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3276));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl3269));
                        }
                        panda$core$String* $tmp3349 = tmp593348;
                        return $tmp3349;
                    }
                }
            }
            }
            panda$core$String* $tmp3353 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            panda$core$String* $tmp3352 = $tmp3353;
            panda$core$String* $tmp3351 = $tmp3352;
            result3350 = $tmp3351;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3351));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3352));
            panda$core$String* $tmp3363 = panda$core$String$convert$R$panda$core$String(t3276);
            panda$core$String* $tmp3362 = $tmp3363;
            panda$core$String* $tmp3365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3362, &$s3364);
            panda$core$String* $tmp3361 = $tmp3365;
            panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3361, result3350);
            panda$core$String* $tmp3360 = $tmp3366;
            panda$core$String* $tmp3368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3360, &$s3367);
            panda$core$String* $tmp3359 = $tmp3368;
            panda$core$String* $tmp3369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3359, t3276);
            panda$core$String* $tmp3358 = $tmp3369;
            panda$core$String* $tmp3371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3358, &$s3370);
            panda$core$String* $tmp3357 = $tmp3371;
            panda$core$Int64 $tmp3373 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
            panda$core$Int64$wrapper* $tmp3374;
            $tmp3374 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3374->value = $tmp3373;
            panda$core$Object* $tmp3372 = ((panda$core$Object*) $tmp3374);
            panda$core$String* $tmp3375 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3357, $tmp3372);
            panda$core$String* $tmp3356 = $tmp3375;
            panda$core$String* $tmp3377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3356, &$s3376);
            panda$core$String* $tmp3355 = $tmp3377;
            panda$core$String* $tmp3382 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl3269)->name);
            panda$core$String* $tmp3381 = $tmp3382;
            panda$core$String* $tmp3383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3380, $tmp3381);
            panda$core$String* $tmp3379 = $tmp3383;
            panda$core$String* $tmp3385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3379, &$s3384);
            panda$core$String* $tmp3378 = $tmp3385;
            panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3355, $tmp3378);
            panda$core$String* $tmp3354 = $tmp3386;
            (($fn3387) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3354);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3354));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3378));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3379));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3381));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3355));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3356));
            panda$core$Panda$unref$panda$core$Object($tmp3372);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3357));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3358));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3359));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3360));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3361));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3362));
            panda$core$String* $tmp3390 = panda$core$String$convert$R$panda$core$String(result3350);
            panda$core$String* $tmp3389 = $tmp3390;
            panda$core$String* $tmp3392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3389, &$s3391);
            panda$core$String* $tmp3388 = $tmp3392;
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType3263, initMref3265, initArgs3267, $tmp3388, p_out);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3388));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3389));
            {
                panda$core$String* $tmp3394 = result3350;
                tmp603393 = $tmp3394;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3394));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3350));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3276));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl3269));
                }
                panda$core$String* $tmp3395 = tmp603393;
                return $tmp3395;
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
    panda$core$String* $tmp3399 = panda$core$UInt64$convert$R$panda$core$String(p_int);
    panda$core$String* $tmp3398 = $tmp3399;
    panda$core$String* $tmp3397 = $tmp3398;
    panda$core$String* $tmp3396 = $tmp3397;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3397));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3398));
    return $tmp3396;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$UInt64 p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$UInt64$wrapper* $tmp3405;
    $tmp3405 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
    $tmp3405->value = p_int;
    panda$core$Object* $tmp3404 = ((panda$core$Object*) $tmp3405);
    panda$core$String* $tmp3406 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3403, $tmp3404);
    panda$core$String* $tmp3402 = $tmp3406;
    panda$core$String* $tmp3401 = $tmp3402;
    panda$core$String* $tmp3400 = $tmp3401;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3401));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3402));
    panda$core$Panda$unref$panda$core$Object($tmp3404);
    return $tmp3400;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Real64 p_real, panda$io$OutputStream* p_out) {
    panda$core$String* result3407;
    panda$core$Char8 $tmp3411;
    panda$core$String* tmp613413;
    panda$core$String* tmp623416;
    panda$core$String* $tmp3410 = panda$core$Real64$convert$R$panda$core$String(p_real);
    panda$core$String* $tmp3409 = $tmp3410;
    panda$core$String* $tmp3408 = $tmp3409;
    result3407 = $tmp3408;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3408));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3409));
    panda$core$Char8$init$panda$core$UInt8(&$tmp3411, ((panda$core$UInt8) { 46 }));
    panda$core$Bit $tmp3412 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(result3407, $tmp3411);
    if ($tmp3412.value) {
    {
        {
            panda$core$String* $tmp3414 = result3407;
            tmp613413 = $tmp3414;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3414));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3407));
            panda$core$String* $tmp3415 = tmp613413;
            return $tmp3415;
        }
    }
    }
    {
        panda$core$String* $tmp3420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3407, &$s3419);
        panda$core$String* $tmp3418 = $tmp3420;
        panda$core$String* $tmp3417 = $tmp3418;
        tmp623416 = $tmp3417;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3417));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3418));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3407));
        panda$core$String* $tmp3421 = tmp623416;
        return $tmp3421;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_bit, panda$io$IndentedOutputStream* p_out) {
    if (p_bit.value) {
    {
        panda$core$String* $tmp3423 = &$s3424;
        panda$core$String* $tmp3422 = $tmp3423;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3423));
        return $tmp3422;
    }
    }
    panda$core$String* $tmp3426 = &$s3427;
    panda$core$String* $tmp3425 = $tmp3426;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3426));
    return $tmp3425;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3431 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp3430 = $tmp3431;
    panda$core$String* $tmp3429 = $tmp3430;
    panda$core$String* $tmp3428 = $tmp3429;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3429));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3430));
    return $tmp3428;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* result3433;
    panda$collections$Iterator* Iter$1159$93467;
    panda$core$Char8 c3484;
    panda$core$String* tmp633532;
    panda$core$Int64 $tmp3432 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp3432;
    panda$core$Int64$wrapper* $tmp3439;
    $tmp3439 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp3439->value = self->varCount;
    panda$core$Object* $tmp3438 = ((panda$core$Object*) $tmp3439);
    panda$core$String* $tmp3440 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3437, $tmp3438);
    panda$core$String* $tmp3436 = $tmp3440;
    panda$core$String* $tmp3442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3436, &$s3441);
    panda$core$String* $tmp3435 = $tmp3442;
    panda$core$String* $tmp3434 = $tmp3435;
    result3433 = $tmp3434;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3434));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3435));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3436));
    panda$core$Panda$unref$panda$core$Object($tmp3438);
    org$pandalanguage$pandac$Type* $tmp3445 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp3444 = $tmp3445;
    panda$core$String* $tmp3446 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3444);
    panda$core$String* $tmp3443 = $tmp3446;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3443));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3444));
    panda$core$String* $tmp3452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3451, result3433);
    panda$core$String* $tmp3450 = $tmp3452;
    panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3450, &$s3453);
    panda$core$String* $tmp3449 = $tmp3454;
    panda$core$Int64$wrapper* $tmp3459;
    $tmp3459 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp3459->value = ((panda$core$Int64) { -999 });
    panda$core$Object* $tmp3458 = ((panda$core$Object*) $tmp3459);
    panda$core$String* $tmp3460 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3457, $tmp3458);
    panda$core$String* $tmp3456 = $tmp3460;
    panda$core$String* $tmp3462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3456, &$s3461);
    panda$core$String* $tmp3455 = $tmp3462;
    panda$core$String* $tmp3463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3449, $tmp3455);
    panda$core$String* $tmp3448 = $tmp3463;
    panda$core$String* $tmp3465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3448, &$s3464);
    panda$core$String* $tmp3447 = $tmp3465;
    (($fn3466) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3447);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3447));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3448));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3455));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3456));
    panda$core$Panda$unref$panda$core$Object($tmp3458);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3449));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3450));
    {
        panda$collections$ListView* $tmp3471 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        panda$collections$ListView* $tmp3470 = $tmp3471;
        ITable* $tmp3472 = ((panda$collections$Iterable*) $tmp3470)->$class->itable;
        while ($tmp3472->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3472 = $tmp3472->next;
        }
        $fn3474 $tmp3473 = $tmp3472->methods[0];
        panda$collections$Iterator* $tmp3475 = $tmp3473(((panda$collections$Iterable*) $tmp3470));
        panda$collections$Iterator* $tmp3469 = $tmp3475;
        panda$collections$Iterator* $tmp3468 = $tmp3469;
        Iter$1159$93467 = $tmp3468;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3468));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3469));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3470));
        $l3476:;
        ITable* $tmp3479 = Iter$1159$93467->$class->itable;
        while ($tmp3479->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3479 = $tmp3479->next;
        }
        $fn3481 $tmp3480 = $tmp3479->methods[0];
        panda$core$Bit $tmp3482 = $tmp3480(Iter$1159$93467);
        panda$core$Bit $tmp3483 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3482);
        bool $tmp3478 = $tmp3483.value;
        if (!$tmp3478) goto $l3477;
        {
            ITable* $tmp3486 = Iter$1159$93467->$class->itable;
            while ($tmp3486->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3486 = $tmp3486->next;
            }
            $fn3488 $tmp3487 = $tmp3486->methods[1];
            panda$core$Object* $tmp3489 = $tmp3487(Iter$1159$93467);
            panda$core$Object* $tmp3485 = $tmp3489;
            c3484 = ((panda$core$Char8$wrapper*) $tmp3485)->value;
            panda$core$Panda$unref$panda$core$Object($tmp3485);
            panda$core$UInt8 $tmp3496 = panda$core$Char8$convert$R$panda$core$UInt8(c3484);
            panda$core$UInt8$wrapper* $tmp3497;
            $tmp3497 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
            $tmp3497->value = $tmp3496;
            panda$core$Formattable* $tmp3495 = ((panda$core$Formattable*) $tmp3497);
            ITable* $tmp3499 = $tmp3495->$class->itable;
            while ($tmp3499->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp3499 = $tmp3499->next;
            }
            $fn3501 $tmp3500 = $tmp3499->methods[0];
            panda$core$String* $tmp3502 = $tmp3500($tmp3495, &$s3498);
            panda$core$String* $tmp3494 = $tmp3502;
            panda$core$String* $tmp3504 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp3494, &$s3503);
            panda$core$String* $tmp3493 = $tmp3504;
            panda$core$String* $tmp3505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3492, $tmp3493);
            panda$core$String* $tmp3491 = $tmp3505;
            panda$core$String* $tmp3507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3491, &$s3506);
            panda$core$String* $tmp3490 = $tmp3507;
            (($fn3508) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3490);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3490));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3491));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3493));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3494));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3495));
        }
        goto $l3476;
        $l3477:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1159$93467));
    }
    panda$collections$ListView* $tmp3516 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    panda$collections$ListView* $tmp3515 = $tmp3516;
    ITable* $tmp3517 = ((panda$collections$CollectionView*) $tmp3515)->$class->itable;
    while ($tmp3517->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3517 = $tmp3517->next;
    }
    $fn3519 $tmp3518 = $tmp3517->methods[0];
    panda$core$Int64 $tmp3520 = $tmp3518(((panda$collections$CollectionView*) $tmp3515));
    panda$core$Int64$wrapper* $tmp3521;
    $tmp3521 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp3521->value = $tmp3520;
    panda$core$Object* $tmp3514 = ((panda$core$Object*) $tmp3521);
    panda$core$String* $tmp3522 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3513, $tmp3514);
    panda$core$String* $tmp3512 = $tmp3522;
    panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3512, &$s3523);
    panda$core$String* $tmp3511 = $tmp3524;
    panda$core$Int64 $tmp3526 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$Int64$wrapper* $tmp3527;
    $tmp3527 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp3527->value = $tmp3526;
    panda$core$Object* $tmp3525 = ((panda$core$Object*) $tmp3527);
    panda$core$String* $tmp3528 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3511, $tmp3525);
    panda$core$String* $tmp3510 = $tmp3528;
    panda$core$String* $tmp3530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3510, &$s3529);
    panda$core$String* $tmp3509 = $tmp3530;
    (($fn3531) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp3509);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3509));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3510));
    panda$core$Panda$unref$panda$core$Object($tmp3525);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3511));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3512));
    panda$core$Panda$unref$panda$core$Object($tmp3514);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3515));
    {
        panda$core$String* $tmp3537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3536, result3433);
        panda$core$String* $tmp3535 = $tmp3537;
        panda$core$String* $tmp3539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3535, &$s3538);
        panda$core$String* $tmp3534 = $tmp3539;
        panda$core$String* $tmp3533 = $tmp3534;
        tmp633532 = $tmp3533;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3533));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3534));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3535));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3433));
        panda$core$String* $tmp3540 = tmp633532;
        return $tmp3540;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3542 = &$s3543;
    panda$core$String* $tmp3541 = $tmp3542;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3542));
    return $tmp3541;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3550 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp3549 = $tmp3550;
    panda$core$String* $tmp3551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3548, $tmp3549);
    panda$core$String* $tmp3547 = $tmp3551;
    panda$core$String* $tmp3553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3547, &$s3552);
    panda$core$String* $tmp3546 = $tmp3553;
    panda$core$String* $tmp3545 = $tmp3546;
    panda$core$String* $tmp3544 = $tmp3545;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3545));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3546));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3547));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3549));
    return $tmp3544;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref3554;
    org$pandalanguage$pandac$ClassDecl* cl3558;
    panda$core$String* bit3568;
    panda$core$String* tmp643595;
    panda$core$String* $tmp3557 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    panda$core$String* $tmp3556 = $tmp3557;
    panda$core$String* $tmp3555 = $tmp3556;
    ref3554 = $tmp3555;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3555));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3556));
    panda$core$Object* $tmp3563 = (($fn3562) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp3561 = $tmp3563;
    org$pandalanguage$pandac$Type* $tmp3566 = (($fn3565) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$Type* $tmp3564 = $tmp3566;
    org$pandalanguage$pandac$ClassDecl* $tmp3567 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3561), $tmp3564);
    org$pandalanguage$pandac$ClassDecl* $tmp3560 = $tmp3567;
    org$pandalanguage$pandac$ClassDecl* $tmp3559 = $tmp3560;
    cl3558 = $tmp3559;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3559));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3560));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3564));
    panda$core$Panda$unref$panda$core$Object($tmp3561);
    memset(&bit3568, 0, sizeof(bit3568));
    panda$core$Object* $tmp3571 = (($fn3570) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp3569 = $tmp3571;
    panda$core$Bit $tmp3572 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3569), cl3558);
    panda$core$Panda$unref$panda$core$Object($tmp3569);
    if ($tmp3572.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3575 = (($fn3574) p_value->$class->vtable[2])(p_value);
        org$pandalanguage$pandac$Type* $tmp3573 = $tmp3575;
        panda$core$Bit $tmp3576 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3573->typeKind, ((panda$core$Int64) { 11 }));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3573));
        if ($tmp3576.value) {
        {
            {
                panda$core$String* $tmp3577 = bit3568;
                panda$core$String* $tmp3578 = &$s3579;
                bit3568 = $tmp3578;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3578));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3577));
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp3580 = bit3568;
                panda$core$String* $tmp3585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3584, ref3554);
                panda$core$String* $tmp3583 = $tmp3585;
                panda$core$String* $tmp3587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3583, &$s3586);
                panda$core$String* $tmp3582 = $tmp3587;
                panda$core$String* $tmp3581 = $tmp3582;
                bit3568 = $tmp3581;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3581));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3582));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3583));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3580));
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp3588 = bit3568;
            panda$core$String* $tmp3592 = panda$core$String$convert$R$panda$core$String(ref3554);
            panda$core$String* $tmp3591 = $tmp3592;
            panda$core$String* $tmp3594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3591, &$s3593);
            panda$core$String* $tmp3590 = $tmp3594;
            panda$core$String* $tmp3589 = $tmp3590;
            bit3568 = $tmp3589;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3589));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3590));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3591));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3588));
        }
    }
    }
    {
        panda$core$String* $tmp3600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3599, bit3568);
        panda$core$String* $tmp3598 = $tmp3600;
        panda$core$String* $tmp3602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3598, &$s3601);
        panda$core$String* $tmp3597 = $tmp3602;
        panda$core$String* $tmp3596 = $tmp3597;
        tmp643595 = $tmp3596;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3596));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3597));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3598));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl3558));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref3554));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit3568));
        }
        panda$core$String* $tmp3603 = tmp643595;
        return $tmp3603;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref3604;
    org$pandalanguage$pandac$ClassDecl* cl3608;
    panda$core$String* bit3618;
    panda$core$String* tmp653644;
    panda$core$String* $tmp3607 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    panda$core$String* $tmp3606 = $tmp3607;
    panda$core$String* $tmp3605 = $tmp3606;
    ref3604 = $tmp3605;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3605));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3606));
    panda$core$Object* $tmp3613 = (($fn3612) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp3611 = $tmp3613;
    org$pandalanguage$pandac$Type* $tmp3616 = (($fn3615) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$Type* $tmp3614 = $tmp3616;
    org$pandalanguage$pandac$ClassDecl* $tmp3617 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3611), $tmp3614);
    org$pandalanguage$pandac$ClassDecl* $tmp3610 = $tmp3617;
    org$pandalanguage$pandac$ClassDecl* $tmp3609 = $tmp3610;
    cl3608 = $tmp3609;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3609));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3610));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3614));
    panda$core$Panda$unref$panda$core$Object($tmp3611);
    memset(&bit3618, 0, sizeof(bit3618));
    panda$core$Object* $tmp3621 = (($fn3620) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp3619 = $tmp3621;
    panda$core$Bit $tmp3622 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3619), cl3608);
    panda$core$Panda$unref$panda$core$Object($tmp3619);
    if ($tmp3622.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3625 = (($fn3624) p_value->$class->vtable[2])(p_value);
        org$pandalanguage$pandac$Type* $tmp3623 = $tmp3625;
        panda$core$Bit $tmp3626 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3623->typeKind, ((panda$core$Int64) { 11 }));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3623));
        if ($tmp3626.value) {
        {
            {
                panda$core$String* $tmp3627 = bit3618;
                panda$core$String* $tmp3628 = &$s3629;
                bit3618 = $tmp3628;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3628));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3627));
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp3630 = bit3618;
                panda$core$String* $tmp3634 = panda$core$String$convert$R$panda$core$String(ref3604);
                panda$core$String* $tmp3633 = $tmp3634;
                panda$core$String* $tmp3636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3633, &$s3635);
                panda$core$String* $tmp3632 = $tmp3636;
                panda$core$String* $tmp3631 = $tmp3632;
                bit3618 = $tmp3631;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3631));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3632));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3633));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3630));
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp3637 = bit3618;
            panda$core$String* $tmp3641 = panda$core$String$convert$R$panda$core$String(ref3604);
            panda$core$String* $tmp3640 = $tmp3641;
            panda$core$String* $tmp3643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3640, &$s3642);
            panda$core$String* $tmp3639 = $tmp3643;
            panda$core$String* $tmp3638 = $tmp3639;
            bit3618 = $tmp3638;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3638));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3639));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3640));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3637));
        }
    }
    }
    {
        panda$core$String* $tmp3649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3648, bit3618);
        panda$core$String* $tmp3647 = $tmp3649;
        panda$core$String* $tmp3651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3647, &$s3650);
        panda$core$String* $tmp3646 = $tmp3651;
        panda$core$String* $tmp3645 = $tmp3646;
        tmp653644 = $tmp3645;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3645));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3646));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3647));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl3608));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ref3604));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bit3618));
        }
        panda$core$String* $tmp3652 = tmp653644;
        return $tmp3652;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3654;
    panda$core$String* tmp663667;
    panda$core$String* tmp673678;
    panda$core$Bit $tmp3653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp3653.value);
    panda$core$Object* $tmp3659 = (($fn3658) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp3657 = $tmp3659;
    panda$core$Object* $tmp3661 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3660 = $tmp3661;
    org$pandalanguage$pandac$ClassDecl* $tmp3662 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3657), ((org$pandalanguage$pandac$Type*) $tmp3660));
    org$pandalanguage$pandac$ClassDecl* $tmp3656 = $tmp3662;
    org$pandalanguage$pandac$ClassDecl* $tmp3655 = $tmp3656;
    cl3654 = $tmp3655;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3655));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3656));
    panda$core$Panda$unref$panda$core$Object($tmp3660);
    panda$core$Panda$unref$panda$core$Object($tmp3657);
    PANDA_ASSERT(((panda$core$Bit) { cl3654 != NULL }).value);
    panda$core$Object* $tmp3665 = (($fn3664) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp3663 = $tmp3665;
    panda$core$Bit $tmp3666 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3663), cl3654);
    panda$core$Panda$unref$panda$core$Object($tmp3663);
    if ($tmp3666.value) {
    {
        {
            panda$core$String* $tmp3673 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp3672 = $tmp3673;
            panda$core$String* $tmp3674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3671, $tmp3672);
            panda$core$String* $tmp3670 = $tmp3674;
            panda$core$String* $tmp3676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3670, &$s3675);
            panda$core$String* $tmp3669 = $tmp3676;
            panda$core$String* $tmp3668 = $tmp3669;
            tmp663667 = $tmp3668;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3668));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3669));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3670));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3672));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl3654));
            panda$core$String* $tmp3677 = tmp663667;
            return $tmp3677;
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp3679 = &$s3680;
            tmp673678 = $tmp3679;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3679));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl3654));
            panda$core$String* $tmp3681 = tmp673678;
            return $tmp3681;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl3654));
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_base, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef3682;
    panda$core$String* result3686;
    org$pandalanguage$pandac$parser$Token$Kind $match$1225_93690;
    panda$core$String* tmp683692;
    panda$core$String* tmp693702;
    panda$core$String* tmp703712;
    panda$core$String* $tmp3685 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    panda$core$String* $tmp3684 = $tmp3685;
    panda$core$String* $tmp3683 = $tmp3684;
    baseRef3682 = $tmp3683;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3683));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3684));
    panda$core$String* $tmp3689 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp3688 = $tmp3689;
    panda$core$String* $tmp3687 = $tmp3688;
    result3686 = $tmp3687;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3687));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3688));
    {
        $match$1225_93690 = p_op;
        panda$core$Bit $tmp3691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1225_93690.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp3691.value) {
        {
            {
                panda$core$String* $tmp3697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3696, baseRef3682);
                panda$core$String* $tmp3695 = $tmp3697;
                panda$core$String* $tmp3699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3695, &$s3698);
                panda$core$String* $tmp3694 = $tmp3699;
                panda$core$String* $tmp3693 = $tmp3694;
                tmp683692 = $tmp3693;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3693));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3694));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3695));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3686));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef3682));
                }
                panda$core$String* $tmp3700 = tmp683692;
                return $tmp3700;
            }
        }
        }
        else {
        panda$core$Bit $tmp3701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1225_93690.$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp3701.value) {
        {
            {
                panda$core$String* $tmp3707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3706, baseRef3682);
                panda$core$String* $tmp3705 = $tmp3707;
                panda$core$String* $tmp3709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3705, &$s3708);
                panda$core$String* $tmp3704 = $tmp3709;
                panda$core$String* $tmp3703 = $tmp3704;
                tmp693702 = $tmp3703;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3703));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3704));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3705));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3686));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef3682));
                }
                panda$core$String* $tmp3710 = tmp693702;
                return $tmp3710;
            }
        }
        }
        else {
        panda$core$Bit $tmp3711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1225_93690.$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp3711.value) {
        {
            {
                panda$core$String* $tmp3717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3716, baseRef3682);
                panda$core$String* $tmp3715 = $tmp3717;
                panda$core$String* $tmp3719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3715, &$s3718);
                panda$core$String* $tmp3714 = $tmp3719;
                panda$core$String* $tmp3713 = $tmp3714;
                tmp703712 = $tmp3713;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3713));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3714));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3715));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3686));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef3682));
                }
                panda$core$String* $tmp3720 = tmp703712;
                return $tmp3720;
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3686));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef3682));
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef3730;
    panda$core$String* trueLabel3734;
    panda$core$String* falseLabel3738;
    panda$core$String* merge3742;
    panda$core$String* result3746;
    panda$core$String* tmp713827;
    panda$collections$Array* $tmp3722 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp3722);
    panda$collections$Array* $tmp3721 = $tmp3722;
    panda$collections$Stack$push$panda$collections$Stack$T(self->extraEffects, ((panda$core$Object*) $tmp3721));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3721));
    org$pandalanguage$pandac$Type* $tmp3725 = (($fn3724) p_ifTrue->$class->vtable[2])(p_ifTrue);
    org$pandalanguage$pandac$Type* $tmp3723 = $tmp3725;
    org$pandalanguage$pandac$Type* $tmp3728 = (($fn3727) p_ifFalse->$class->vtable[2])(p_ifFalse);
    org$pandalanguage$pandac$Type* $tmp3726 = $tmp3728;
    panda$core$Bit $tmp3729 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3723, $tmp3726);
    PANDA_ASSERT($tmp3729.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3726));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3723));
    panda$core$String* $tmp3733 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3732 = $tmp3733;
    panda$core$String* $tmp3731 = $tmp3732;
    testRef3730 = $tmp3731;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3731));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3732));
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp3737 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp3736 = $tmp3737;
    panda$core$String* $tmp3735 = $tmp3736;
    trueLabel3734 = $tmp3735;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3735));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3736));
    panda$core$String* $tmp3741 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp3740 = $tmp3741;
    panda$core$String* $tmp3739 = $tmp3740;
    falseLabel3738 = $tmp3739;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3739));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3740));
    panda$core$String* $tmp3745 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp3744 = $tmp3745;
    panda$core$String* $tmp3743 = $tmp3744;
    merge3742 = $tmp3743;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3743));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3744));
    panda$core$String* $tmp3749 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp3748 = $tmp3749;
    panda$core$String* $tmp3747 = $tmp3748;
    result3746 = $tmp3747;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3747));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3748));
    org$pandalanguage$pandac$Type* $tmp3757 = (($fn3756) p_ifTrue->$class->vtable[2])(p_ifTrue);
    org$pandalanguage$pandac$Type* $tmp3755 = $tmp3757;
    panda$core$String* $tmp3758 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3755);
    panda$core$String* $tmp3754 = $tmp3758;
    panda$core$String* $tmp3759 = panda$core$String$convert$R$panda$core$String($tmp3754);
    panda$core$String* $tmp3753 = $tmp3759;
    panda$core$String* $tmp3761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3753, &$s3760);
    panda$core$String* $tmp3752 = $tmp3761;
    panda$core$String* $tmp3762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3752, result3746);
    panda$core$String* $tmp3751 = $tmp3762;
    panda$core$String* $tmp3764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3751, &$s3763);
    panda$core$String* $tmp3750 = $tmp3764;
    (($fn3765) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3750);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3750));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3751));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3752));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3753));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3754));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3755));
    panda$core$String* $tmp3773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3772, testRef3730);
    panda$core$String* $tmp3771 = $tmp3773;
    panda$core$String* $tmp3775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3771, &$s3774);
    panda$core$String* $tmp3770 = $tmp3775;
    panda$core$String* $tmp3776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3770, trueLabel3734);
    panda$core$String* $tmp3769 = $tmp3776;
    panda$core$String* $tmp3778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3769, &$s3777);
    panda$core$String* $tmp3768 = $tmp3778;
    panda$core$String* $tmp3779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3768, falseLabel3738);
    panda$core$String* $tmp3767 = $tmp3779;
    panda$core$String* $tmp3781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3767, &$s3780);
    panda$core$String* $tmp3766 = $tmp3781;
    (($fn3782) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3766);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3766));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3767));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3768));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3769));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3770));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3771));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel3734, p_out);
    panda$collections$Array* $tmp3784 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp3784);
    panda$collections$Array* $tmp3783 = $tmp3784;
    panda$collections$Stack$push$panda$collections$Stack$T(self->extraEffects, ((panda$core$Object*) $tmp3783));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3783));
    panda$core$String* $tmp3789 = panda$core$String$convert$R$panda$core$String(result3746);
    panda$core$String* $tmp3788 = $tmp3789;
    panda$core$String* $tmp3791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3788, &$s3790);
    panda$core$String* $tmp3787 = $tmp3791;
    panda$core$String* $tmp3793 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifTrue, p_out);
    panda$core$String* $tmp3792 = $tmp3793;
    panda$core$String* $tmp3794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3787, $tmp3792);
    panda$core$String* $tmp3786 = $tmp3794;
    panda$core$String* $tmp3796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3786, &$s3795);
    panda$core$String* $tmp3785 = $tmp3796;
    (($fn3797) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3785);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3785));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3786));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3792));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3787));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3788));
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp3801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3800, merge3742);
    panda$core$String* $tmp3799 = $tmp3801;
    panda$core$String* $tmp3803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3799, &$s3802);
    panda$core$String* $tmp3798 = $tmp3803;
    (($fn3804) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3798);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3798));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3799));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel3738, p_out);
    panda$collections$Array* $tmp3806 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp3806);
    panda$collections$Array* $tmp3805 = $tmp3806;
    panda$collections$Stack$push$panda$collections$Stack$T(self->extraEffects, ((panda$core$Object*) $tmp3805));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3805));
    panda$core$String* $tmp3811 = panda$core$String$convert$R$panda$core$String(result3746);
    panda$core$String* $tmp3810 = $tmp3811;
    panda$core$String* $tmp3813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3810, &$s3812);
    panda$core$String* $tmp3809 = $tmp3813;
    panda$core$String* $tmp3815 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifFalse, p_out);
    panda$core$String* $tmp3814 = $tmp3815;
    panda$core$String* $tmp3816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3809, $tmp3814);
    panda$core$String* $tmp3808 = $tmp3816;
    panda$core$String* $tmp3818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3808, &$s3817);
    panda$core$String* $tmp3807 = $tmp3818;
    (($fn3819) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3807);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3807));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3808));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3814));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3809));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3810));
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp3823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3822, merge3742);
    panda$core$String* $tmp3821 = $tmp3823;
    panda$core$String* $tmp3825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3821, &$s3824);
    panda$core$String* $tmp3820 = $tmp3825;
    (($fn3826) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3820);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3820));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3821));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, merge3742, p_out);
    {
        panda$core$String* $tmp3828 = result3746;
        tmp713827 = $tmp3828;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3828));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testRef3730));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3746));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) merge3742));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) falseLabel3738));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) trueLabel3734));
        }
        panda$core$String* $tmp3829 = tmp713827;
        return $tmp3829;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3833 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp3832 = $tmp3833;
    panda$core$String* $tmp3831 = $tmp3832;
    panda$core$String* $tmp3830 = $tmp3831;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3831));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3832));
    return $tmp3830;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3834;
    panda$core$String* tmp723840;
    panda$core$String* $tmp3837 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp3836 = $tmp3837;
    panda$core$String* $tmp3835 = $tmp3836;
    result3834 = $tmp3835;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3835));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3836));
    panda$core$Object* $tmp3839 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->extraEffects);
    panda$core$Object* $tmp3838 = $tmp3839;
    panda$collections$Array$add$panda$collections$Array$T(((panda$collections$Array*) $tmp3838), ((panda$core$Object*) p_stmt));
    panda$core$Panda$unref$panda$core$Object($tmp3838);
    {
        panda$core$String* $tmp3841 = result3834;
        tmp723840 = $tmp3841;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3841));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3834));
        panda$core$String* $tmp3842 = tmp723840;
        return $tmp3842;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1275_93843;
    org$pandalanguage$pandac$IRNode* left3845;
    org$pandalanguage$pandac$parser$Token$Kind op3847;
    org$pandalanguage$pandac$IRNode* right3849;
    org$pandalanguage$pandac$Type* type3856;
    org$pandalanguage$pandac$MethodRef* target3858;
    panda$collections$ImmutableArray* args3860;
    org$pandalanguage$pandac$IRNode* base3867;
    org$pandalanguage$pandac$Type* type3869;
    panda$core$Bit explicit3871;
    panda$core$UInt64 value3878;
    panda$core$UInt64 value3885;
    panda$core$Real64 value3892;
    panda$core$Bit value3899;
    org$pandalanguage$pandac$Type* type3906;
    org$pandalanguage$pandac$IRNode* initCall3908;
    org$pandalanguage$pandac$Variable* variable3915;
    org$pandalanguage$pandac$IRNode* base3922;
    org$pandalanguage$pandac$FieldDecl* field3924;
    panda$core$String* str3931;
    org$pandalanguage$pandac$Type* t3943;
    org$pandalanguage$pandac$IRNode* base3950;
    panda$core$Int64 id3952;
    panda$core$String* result3954;
    panda$core$String* tmp733983;
    panda$core$Int64 id3987;
    panda$core$String* result3989;
    panda$core$String* tmp743995;
    org$pandalanguage$pandac$Position pos3999;
    org$pandalanguage$pandac$Type* type4001;
    org$pandalanguage$pandac$IRNode* value4008;
    org$pandalanguage$pandac$IRNode* value4015;
    org$pandalanguage$pandac$parser$Token$Kind op4022;
    org$pandalanguage$pandac$IRNode* base4024;
    org$pandalanguage$pandac$IRNode* test4031;
    org$pandalanguage$pandac$IRNode* ifTrue4033;
    org$pandalanguage$pandac$IRNode* ifFalse4035;
    org$pandalanguage$pandac$IRNode* base4047;
    org$pandalanguage$pandac$IRNode* stmt4049;
    {
        $match$1275_93843 = p_expr;
        panda$core$Bit $tmp3844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp3844.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3846 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1275_93843->$data + 24));
            left3845 = *$tmp3846;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3848 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1275_93843->$data + 32));
            op3847 = *$tmp3848;
            org$pandalanguage$pandac$IRNode** $tmp3850 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1275_93843->$data + 40));
            right3849 = *$tmp3850;
            panda$core$String* $tmp3854 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, left3845, op3847, right3849, p_out);
            panda$core$String* $tmp3853 = $tmp3854;
            panda$core$String* $tmp3852 = $tmp3853;
            panda$core$String* $tmp3851 = $tmp3852;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3852));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3853));
            return $tmp3851;
        }
        }
        else {
        panda$core$Bit $tmp3855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp3855.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3857 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1275_93843->$data + 16));
            type3856 = *$tmp3857;
            org$pandalanguage$pandac$MethodRef** $tmp3859 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1275_93843->$data + 24));
            target3858 = *$tmp3859;
            panda$collections$ImmutableArray** $tmp3861 = ((panda$collections$ImmutableArray**) ((char*) $match$1275_93843->$data + 32));
            args3860 = *$tmp3861;
            panda$core$String* $tmp3865 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, type3856, target3858, args3860, p_out);
            panda$core$String* $tmp3864 = $tmp3865;
            panda$core$String* $tmp3863 = $tmp3864;
            panda$core$String* $tmp3862 = $tmp3863;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3863));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3864));
            return $tmp3862;
        }
        }
        else {
        panda$core$Bit $tmp3866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp3866.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3868 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1275_93843->$data + 16));
            base3867 = *$tmp3868;
            org$pandalanguage$pandac$Type** $tmp3870 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1275_93843->$data + 24));
            type3869 = *$tmp3870;
            panda$core$Bit* $tmp3872 = ((panda$core$Bit*) ((char*) $match$1275_93843->$data + 32));
            explicit3871 = *$tmp3872;
            panda$core$String* $tmp3876 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base3867, type3869, p_out);
            panda$core$String* $tmp3875 = $tmp3876;
            panda$core$String* $tmp3874 = $tmp3875;
            panda$core$String* $tmp3873 = $tmp3874;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3874));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3875));
            return $tmp3873;
        }
        }
        else {
        panda$core$Bit $tmp3877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp3877.value) {
        {
            panda$core$UInt64* $tmp3879 = ((panda$core$UInt64*) ((char*) $match$1275_93843->$data + 24));
            value3878 = *$tmp3879;
            panda$core$String* $tmp3883 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value3878, p_out);
            panda$core$String* $tmp3882 = $tmp3883;
            panda$core$String* $tmp3881 = $tmp3882;
            panda$core$String* $tmp3880 = $tmp3881;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3881));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3882));
            return $tmp3880;
        }
        }
        else {
        panda$core$Bit $tmp3884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp3884.value) {
        {
            panda$core$UInt64* $tmp3886 = ((panda$core$UInt64*) ((char*) $match$1275_93843->$data + 24));
            value3885 = *$tmp3886;
            panda$core$String* $tmp3890 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value3885, p_out);
            panda$core$String* $tmp3889 = $tmp3890;
            panda$core$String* $tmp3888 = $tmp3889;
            panda$core$String* $tmp3887 = $tmp3888;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3888));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3889));
            return $tmp3887;
        }
        }
        else {
        panda$core$Bit $tmp3891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp3891.value) {
        {
            panda$core$Real64* $tmp3893 = ((panda$core$Real64*) ((char*) $match$1275_93843->$data + 24));
            value3892 = *$tmp3893;
            panda$core$String* $tmp3897 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(self, value3892, ((panda$io$OutputStream*) p_out));
            panda$core$String* $tmp3896 = $tmp3897;
            panda$core$String* $tmp3895 = $tmp3896;
            panda$core$String* $tmp3894 = $tmp3895;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3895));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3896));
            return $tmp3894;
        }
        }
        else {
        panda$core$Bit $tmp3898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp3898.value) {
        {
            panda$core$Bit* $tmp3900 = ((panda$core$Bit*) ((char*) $match$1275_93843->$data + 24));
            value3899 = *$tmp3900;
            panda$core$String* $tmp3904 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, value3899, p_out);
            panda$core$String* $tmp3903 = $tmp3904;
            panda$core$String* $tmp3902 = $tmp3903;
            panda$core$String* $tmp3901 = $tmp3902;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3902));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3903));
            return $tmp3901;
        }
        }
        else {
        panda$core$Bit $tmp3905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp3905.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3907 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1275_93843->$data + 16));
            type3906 = *$tmp3907;
            org$pandalanguage$pandac$IRNode** $tmp3909 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1275_93843->$data + 24));
            initCall3908 = *$tmp3909;
            panda$core$String* $tmp3913 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, type3906, initCall3908, p_out);
            panda$core$String* $tmp3912 = $tmp3913;
            panda$core$String* $tmp3911 = $tmp3912;
            panda$core$String* $tmp3910 = $tmp3911;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3911));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3912));
            return $tmp3910;
        }
        }
        else {
        panda$core$Bit $tmp3914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp3914.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3916 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1275_93843->$data + 16));
            variable3915 = *$tmp3916;
            panda$core$String* $tmp3920 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, variable3915, p_out);
            panda$core$String* $tmp3919 = $tmp3920;
            panda$core$String* $tmp3918 = $tmp3919;
            panda$core$String* $tmp3917 = $tmp3918;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3918));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3919));
            return $tmp3917;
        }
        }
        else {
        panda$core$Bit $tmp3921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp3921.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3923 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1275_93843->$data + 24));
            base3922 = *$tmp3923;
            org$pandalanguage$pandac$FieldDecl** $tmp3925 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1275_93843->$data + 32));
            field3924 = *$tmp3925;
            panda$core$String* $tmp3929 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, base3922, field3924, p_out);
            panda$core$String* $tmp3928 = $tmp3929;
            panda$core$String* $tmp3927 = $tmp3928;
            panda$core$String* $tmp3926 = $tmp3927;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3927));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3928));
            return $tmp3926;
        }
        }
        else {
        panda$core$Bit $tmp3930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp3930.value) {
        {
            panda$core$String** $tmp3932 = ((panda$core$String**) ((char*) $match$1275_93843->$data + 16));
            str3931 = *$tmp3932;
            panda$core$String* $tmp3936 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(self, str3931);
            panda$core$String* $tmp3935 = $tmp3936;
            panda$core$String* $tmp3934 = $tmp3935;
            panda$core$String* $tmp3933 = $tmp3934;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3934));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3935));
            return $tmp3933;
        }
        }
        else {
        panda$core$Bit $tmp3937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp3937.value) {
        {
            panda$core$String* $tmp3941 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(self, p_out);
            panda$core$String* $tmp3940 = $tmp3941;
            panda$core$String* $tmp3939 = $tmp3940;
            panda$core$String* $tmp3938 = $tmp3939;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3939));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3940));
            return $tmp3938;
        }
        }
        else {
        panda$core$Bit $tmp3942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp3942.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3944 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1275_93843->$data + 16));
            t3943 = *$tmp3944;
            panda$core$String* $tmp3948 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, t3943, p_out);
            panda$core$String* $tmp3947 = $tmp3948;
            panda$core$String* $tmp3946 = $tmp3947;
            panda$core$String* $tmp3945 = $tmp3946;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3946));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3947));
            return $tmp3945;
        }
        }
        else {
        panda$core$Bit $tmp3949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3949.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3951 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1275_93843->$data + 0));
            base3950 = *$tmp3951;
            panda$core$Int64* $tmp3953 = ((panda$core$Int64*) ((char*) $match$1275_93843->$data + 8));
            id3952 = *$tmp3953;
            panda$core$String* $tmp3957 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            panda$core$String* $tmp3956 = $tmp3957;
            panda$core$String* $tmp3955 = $tmp3956;
            result3954 = $tmp3955;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3955));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3956));
            org$pandalanguage$pandac$Type* $tmp3967 = (($fn3966) base3950->$class->vtable[2])(base3950);
            org$pandalanguage$pandac$Type* $tmp3965 = $tmp3967;
            panda$core$String* $tmp3968 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3965);
            panda$core$String* $tmp3964 = $tmp3968;
            panda$core$String* $tmp3969 = panda$core$String$convert$R$panda$core$String($tmp3964);
            panda$core$String* $tmp3963 = $tmp3969;
            panda$core$String* $tmp3971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3963, &$s3970);
            panda$core$String* $tmp3962 = $tmp3971;
            panda$core$String* $tmp3972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3962, result3954);
            panda$core$String* $tmp3961 = $tmp3972;
            panda$core$String* $tmp3974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3961, &$s3973);
            panda$core$String* $tmp3960 = $tmp3974;
            panda$core$String* $tmp3976 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3950, p_out);
            panda$core$String* $tmp3975 = $tmp3976;
            panda$core$String* $tmp3977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3960, $tmp3975);
            panda$core$String* $tmp3959 = $tmp3977;
            panda$core$String* $tmp3979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3959, &$s3978);
            panda$core$String* $tmp3958 = $tmp3979;
            (($fn3980) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3958);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3958));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3959));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3975));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3960));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3961));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3962));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3963));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3964));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3965));
            panda$core$Int64$wrapper* $tmp3982;
            $tmp3982 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3982->value = id3952;
            panda$collections$Key* $tmp3981 = ((panda$collections$Key*) $tmp3982);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, $tmp3981, ((panda$core$Object*) result3954));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3981));
            {
                panda$core$String* $tmp3984 = result3954;
                tmp733983 = $tmp3984;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3984));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3954));
                panda$core$String* $tmp3985 = tmp733983;
                return $tmp3985;
            }
        }
        }
        else {
        panda$core$Bit $tmp3986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp3986.value) {
        {
            panda$core$Int64* $tmp3988 = ((panda$core$Int64*) ((char*) $match$1275_93843->$data + 24));
            id3987 = *$tmp3988;
            panda$core$Int64$wrapper* $tmp3993;
            $tmp3993 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3993->value = id3987;
            panda$collections$Key* $tmp3992 = ((panda$collections$Key*) $tmp3993);
            panda$core$Object* $tmp3994 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, $tmp3992);
            panda$core$Object* $tmp3991 = $tmp3994;
            panda$core$String* $tmp3990 = ((panda$core$String*) $tmp3991);
            result3989 = $tmp3990;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3990));
            panda$core$Panda$unref$panda$core$Object($tmp3991);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3992));
            PANDA_ASSERT(((panda$core$Bit) { result3989 != NULL }).value);
            {
                panda$core$String* $tmp3996 = result3989;
                tmp743995 = $tmp3996;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3996));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3989));
                panda$core$String* $tmp3997 = tmp743995;
                return $tmp3997;
            }
        }
        }
        else {
        panda$core$Bit $tmp3998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp3998.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4000 = ((org$pandalanguage$pandac$Position*) ((char*) $match$1275_93843->$data + 0));
            pos3999 = *$tmp4000;
            org$pandalanguage$pandac$Type** $tmp4002 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1275_93843->$data + 16));
            type4001 = *$tmp4002;
            panda$core$String* $tmp4006 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, type4001, p_out);
            panda$core$String* $tmp4005 = $tmp4006;
            panda$core$String* $tmp4004 = $tmp4005;
            panda$core$String* $tmp4003 = $tmp4004;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4004));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4005));
            return $tmp4003;
        }
        }
        else {
        panda$core$Bit $tmp4007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp4007.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp4009 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1275_93843->$data + 16));
            value4008 = *$tmp4009;
            panda$core$String* $tmp4013 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value4008, p_out);
            panda$core$String* $tmp4012 = $tmp4013;
            panda$core$String* $tmp4011 = $tmp4012;
            panda$core$String* $tmp4010 = $tmp4011;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4011));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4012));
            return $tmp4010;
        }
        }
        else {
        panda$core$Bit $tmp4014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp4014.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp4016 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1275_93843->$data + 16));
            value4015 = *$tmp4016;
            panda$core$String* $tmp4020 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value4015, p_out);
            panda$core$String* $tmp4019 = $tmp4020;
            panda$core$String* $tmp4018 = $tmp4019;
            panda$core$String* $tmp4017 = $tmp4018;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4018));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4019));
            return $tmp4017;
        }
        }
        else {
        panda$core$Bit $tmp4021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp4021.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp4023 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1275_93843->$data + 16));
            op4022 = *$tmp4023;
            org$pandalanguage$pandac$IRNode** $tmp4025 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1275_93843->$data + 24));
            base4024 = *$tmp4025;
            panda$core$String* $tmp4029 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, op4022, base4024, p_out);
            panda$core$String* $tmp4028 = $tmp4029;
            panda$core$String* $tmp4027 = $tmp4028;
            panda$core$String* $tmp4026 = $tmp4027;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4027));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4028));
            return $tmp4026;
        }
        }
        else {
        panda$core$Bit $tmp4030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp4030.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp4032 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1275_93843->$data + 16));
            test4031 = *$tmp4032;
            org$pandalanguage$pandac$IRNode** $tmp4034 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1275_93843->$data + 24));
            ifTrue4033 = *$tmp4034;
            org$pandalanguage$pandac$IRNode** $tmp4036 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1275_93843->$data + 32));
            ifFalse4035 = *$tmp4036;
            panda$core$String* $tmp4040 = org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, test4031, ifTrue4033, ifFalse4035, p_out);
            panda$core$String* $tmp4039 = $tmp4040;
            panda$core$String* $tmp4038 = $tmp4039;
            panda$core$String* $tmp4037 = $tmp4038;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4038));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4039));
            return $tmp4037;
        }
        }
        else {
        panda$core$Bit $tmp4041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp4041.value) {
        {
            panda$core$String* $tmp4045 = org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            panda$core$String* $tmp4044 = $tmp4045;
            panda$core$String* $tmp4043 = $tmp4044;
            panda$core$String* $tmp4042 = $tmp4043;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4043));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4044));
            return $tmp4042;
        }
        }
        else {
        panda$core$Bit $tmp4046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1275_93843->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp4046.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp4048 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1275_93843->$data + 0));
            base4047 = *$tmp4048;
            org$pandalanguage$pandac$IRNode** $tmp4050 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1275_93843->$data + 8));
            stmt4049 = *$tmp4050;
            panda$core$String* $tmp4054 = org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base4047, stmt4049, p_out);
            panda$core$String* $tmp4053 = $tmp4054;
            panda$core$String* $tmp4052 = $tmp4053;
            panda$core$String* $tmp4051 = $tmp4052;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4052));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4053));
            return $tmp4051;
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
    panda$core$String* $tmp4058 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4057 = $tmp4058;
    panda$core$String* $tmp4056 = $tmp4057;
    panda$core$String* $tmp4055 = $tmp4056;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4056));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4057));
    return $tmp4055;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* Iter$1337$94062;
    org$pandalanguage$pandac$IRNode* s4077;
    (($fn4060) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4059);
    panda$core$Int64 $tmp4061 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4061;
    {
        ITable* $tmp4065 = ((panda$collections$Iterable*) p_statements)->$class->itable;
        while ($tmp4065->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4065 = $tmp4065->next;
        }
        $fn4067 $tmp4066 = $tmp4065->methods[0];
        panda$collections$Iterator* $tmp4068 = $tmp4066(((panda$collections$Iterable*) p_statements));
        panda$collections$Iterator* $tmp4064 = $tmp4068;
        panda$collections$Iterator* $tmp4063 = $tmp4064;
        Iter$1337$94062 = $tmp4063;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4063));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4064));
        $l4069:;
        ITable* $tmp4072 = Iter$1337$94062->$class->itable;
        while ($tmp4072->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4072 = $tmp4072->next;
        }
        $fn4074 $tmp4073 = $tmp4072->methods[0];
        panda$core$Bit $tmp4075 = $tmp4073(Iter$1337$94062);
        panda$core$Bit $tmp4076 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4075);
        bool $tmp4071 = $tmp4076.value;
        if (!$tmp4071) goto $l4070;
        {
            ITable* $tmp4080 = Iter$1337$94062->$class->itable;
            while ($tmp4080->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4080 = $tmp4080->next;
            }
            $fn4082 $tmp4081 = $tmp4080->methods[1];
            panda$core$Object* $tmp4083 = $tmp4081(Iter$1337$94062);
            panda$core$Object* $tmp4079 = $tmp4083;
            org$pandalanguage$pandac$IRNode* $tmp4078 = ((org$pandalanguage$pandac$IRNode*) $tmp4079);
            s4077 = $tmp4078;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4078));
            panda$core$Panda$unref$panda$core$Object($tmp4079);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s4077, p_out);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s4077));
        }
        goto $l4069;
        $l4070:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1337$94062));
    }
    panda$core$Int64 $tmp4084 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4084;
    (($fn4086) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4085);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$1345_94087;
    panda$core$String* ptr4092;
    panda$core$String* arg4098;
    panda$core$String* base4137;
    panda$core$String* index4143;
    panda$core$String* value4149;
    {
        $match$1345_94087 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp4089 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1345_94087, &$s4088);
        if ($tmp4089.value) {
        {
            panda$core$Int64 $tmp4090 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp4091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4090, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4091.value);
            panda$core$Object* $tmp4096 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4095 = $tmp4096;
            panda$core$String* $tmp4097 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4095), p_out);
            panda$core$String* $tmp4094 = $tmp4097;
            panda$core$String* $tmp4093 = $tmp4094;
            ptr4092 = $tmp4093;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4093));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4094));
            panda$core$Panda$unref$panda$core$Object($tmp4095);
            panda$core$Object* $tmp4104 = (($fn4103) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp4102 = $tmp4104;
            panda$core$Object* $tmp4106 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp4105 = $tmp4106;
            org$pandalanguage$pandac$IRNode* $tmp4107 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(((org$pandalanguage$pandac$Compiler*) $tmp4102), ((org$pandalanguage$pandac$IRNode*) $tmp4105));
            org$pandalanguage$pandac$IRNode* $tmp4101 = $tmp4107;
            panda$core$String* $tmp4108 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4101, p_out);
            panda$core$String* $tmp4100 = $tmp4108;
            panda$core$String* $tmp4099 = $tmp4100;
            arg4098 = $tmp4099;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4099));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4100));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4101));
            panda$core$Panda$unref$panda$core$Object($tmp4105);
            panda$core$Panda$unref$panda$core$Object($tmp4102);
            panda$core$String* $tmp4114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4113, arg4098);
            panda$core$String* $tmp4112 = $tmp4114;
            panda$core$String* $tmp4116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4112, &$s4115);
            panda$core$String* $tmp4111 = $tmp4116;
            panda$core$String* $tmp4117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4111, ptr4092);
            panda$core$String* $tmp4110 = $tmp4117;
            panda$core$String* $tmp4119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4110, &$s4118);
            panda$core$String* $tmp4109 = $tmp4119;
            (($fn4120) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4109);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4109));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4110));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4111));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4112));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ptr4092));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg4098));
            }
        }
        }
        else {
        panda$core$Bit $tmp4122 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1345_94087, &$s4121);
        if ($tmp4122.value) {
        {
            panda$core$Int64 $tmp4123 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp4124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4123, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4124.value);
            panda$core$Object* $tmp4129 = (($fn4128) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp4127 = $tmp4129;
            panda$core$Object* $tmp4131 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4130 = $tmp4131;
            org$pandalanguage$pandac$IRNode* $tmp4132 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(((org$pandalanguage$pandac$Compiler*) $tmp4127), ((org$pandalanguage$pandac$IRNode*) $tmp4130));
            org$pandalanguage$pandac$IRNode* $tmp4126 = $tmp4132;
            org$pandalanguage$pandac$Type* $tmp4134 = (($fn4133) $tmp4126->$class->vtable[2])($tmp4126);
            org$pandalanguage$pandac$Type* $tmp4125 = $tmp4134;
            panda$core$Int64 $tmp4135 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4125->subtypes);
            panda$core$Bit $tmp4136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4135, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4136.value);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4125));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4126));
            panda$core$Panda$unref$panda$core$Object($tmp4130);
            panda$core$Panda$unref$panda$core$Object($tmp4127);
            panda$core$Object* $tmp4141 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4140 = $tmp4141;
            panda$core$String* $tmp4142 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4140), p_out);
            panda$core$String* $tmp4139 = $tmp4142;
            panda$core$String* $tmp4138 = $tmp4139;
            base4137 = $tmp4138;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4138));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4139));
            panda$core$Panda$unref$panda$core$Object($tmp4140);
            panda$core$Object* $tmp4147 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp4146 = $tmp4147;
            panda$core$String* $tmp4148 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4146), p_out);
            panda$core$String* $tmp4145 = $tmp4148;
            panda$core$String* $tmp4144 = $tmp4145;
            index4143 = $tmp4144;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4144));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4145));
            panda$core$Panda$unref$panda$core$Object($tmp4146);
            panda$core$Object* $tmp4155 = (($fn4154) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp4153 = $tmp4155;
            panda$core$Object* $tmp4157 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            panda$core$Object* $tmp4156 = $tmp4157;
            org$pandalanguage$pandac$IRNode* $tmp4158 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(((org$pandalanguage$pandac$Compiler*) $tmp4153), ((org$pandalanguage$pandac$IRNode*) $tmp4156));
            org$pandalanguage$pandac$IRNode* $tmp4152 = $tmp4158;
            panda$core$String* $tmp4159 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4152, p_out);
            panda$core$String* $tmp4151 = $tmp4159;
            panda$core$String* $tmp4150 = $tmp4151;
            value4149 = $tmp4150;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4150));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4151));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4152));
            panda$core$Panda$unref$panda$core$Object($tmp4156);
            panda$core$Panda$unref$panda$core$Object($tmp4153);
            panda$core$String* $tmp4166 = panda$core$String$convert$R$panda$core$String(base4137);
            panda$core$String* $tmp4165 = $tmp4166;
            panda$core$String* $tmp4168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4165, &$s4167);
            panda$core$String* $tmp4164 = $tmp4168;
            panda$core$String* $tmp4169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4164, index4143);
            panda$core$String* $tmp4163 = $tmp4169;
            panda$core$String* $tmp4171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4163, &$s4170);
            panda$core$String* $tmp4162 = $tmp4171;
            panda$core$String* $tmp4172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4162, value4149);
            panda$core$String* $tmp4161 = $tmp4172;
            panda$core$String* $tmp4174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4161, &$s4173);
            panda$core$String* $tmp4160 = $tmp4174;
            (($fn4175) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4160);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4160));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4161));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4162));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4164));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4165));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base4137));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value4149));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index4143));
            }
        }
        }
        else {
        panda$core$Bit $tmp4177 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1345_94087, &$s4176);
        if ($tmp4177.value) {
        {
            panda$core$Int64 $tmp4178 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp4179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4178, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4179.value);
            panda$core$Object* $tmp4185 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4184 = $tmp4185;
            panda$core$String* $tmp4186 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4184), p_out);
            panda$core$String* $tmp4183 = $tmp4186;
            panda$core$String* $tmp4187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4182, $tmp4183);
            panda$core$String* $tmp4181 = $tmp4187;
            panda$core$String* $tmp4189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4181, &$s4188);
            panda$core$String* $tmp4180 = $tmp4189;
            (($fn4190) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4180);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4180));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4181));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4183));
            panda$core$Panda$unref$panda$core$Object($tmp4184);
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
    org$pandalanguage$pandac$MethodDecl* m4191;
    org$pandalanguage$pandac$Type* actualMethodType4196;
    panda$core$String* actualResultType4197;
    panda$core$Bit isSuper4198;
    panda$collections$Array* argRefs4238;
    panda$core$Int64 offset4242;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4247;
    panda$core$String* arg4262;
    panda$core$String* targetRef4299;
    panda$core$String* methodRef4308;
    panda$core$String* separator4312;
    panda$core$String* indirectVar4317;
    panda$core$String* resultType4324;
    panda$collections$Iterator* Iter$1425$94364;
    panda$core$String* a4379;
    org$pandalanguage$pandac$MethodDecl* $tmp4192 = p_mref->value;
    m4191 = $tmp4192;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4192));
    panda$core$Bit $tmp4194 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4191->owner)->name, &$s4193);
    if ($tmp4194.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_mref, p_args, p_out);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m4191));
            return;
        }
    }
    }
    panda$core$Bit $tmp4195 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m4191->owner);
    if ($tmp4195.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4191);
    }
    }
    memset(&actualMethodType4196, 0, sizeof(actualMethodType4196));
    memset(&actualResultType4197, 0, sizeof(actualResultType4197));
    panda$core$Int64 $tmp4200 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp4201 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4200, ((panda$core$Int64) { 1 }));
    bool $tmp4199 = $tmp4201.value;
    if (!$tmp4199) goto $l4202;
    panda$core$Object* $tmp4204 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4203 = $tmp4204;
    panda$core$Bit $tmp4205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4203)->$rawValue, ((panda$core$Int64) { 33 }));
    $tmp4199 = $tmp4205.value;
    panda$core$Panda$unref$panda$core$Object($tmp4203);
    $l4202:;
    panda$core$Bit $tmp4206 = { $tmp4199 };
    isSuper4198 = $tmp4206;
    panda$core$Bit $tmp4208 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4198);
    bool $tmp4207 = $tmp4208.value;
    if (!$tmp4207) goto $l4209;
    panda$core$Bit $tmp4210 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4191);
    $tmp4207 = $tmp4210.value;
    $l4209:;
    panda$core$Bit $tmp4211 = { $tmp4207 };
    if ($tmp4211.value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp4212 = actualMethodType4196;
            panda$core$Object* $tmp4217 = (($fn4216) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp4215 = $tmp4217;
            org$pandalanguage$pandac$Type* $tmp4218 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp4215), m4191);
            org$pandalanguage$pandac$Type* $tmp4214 = $tmp4218;
            org$pandalanguage$pandac$Type* $tmp4213 = $tmp4214;
            actualMethodType4196 = $tmp4213;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4213));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4214));
            panda$core$Panda$unref$panda$core$Object($tmp4215);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4212));
        }
        {
            panda$core$String* $tmp4219 = actualResultType4197;
            panda$core$Int64 $tmp4223 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4196->subtypes);
            panda$core$Int64 $tmp4224 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4223, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp4225 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4196->subtypes, $tmp4224);
            panda$core$Object* $tmp4222 = $tmp4225;
            panda$core$String* $tmp4226 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4222));
            panda$core$String* $tmp4221 = $tmp4226;
            panda$core$String* $tmp4220 = $tmp4221;
            actualResultType4197 = $tmp4220;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4220));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4221));
            panda$core$Panda$unref$panda$core$Object($tmp4222);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4219));
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp4227 = actualMethodType4196;
            panda$core$Object* $tmp4232 = (($fn4231) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp4230 = $tmp4232;
            org$pandalanguage$pandac$Type* $tmp4233 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp4230), m4191);
            org$pandalanguage$pandac$Type* $tmp4229 = $tmp4233;
            org$pandalanguage$pandac$Type* $tmp4228 = $tmp4229;
            actualMethodType4196 = $tmp4228;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4228));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4229));
            panda$core$Panda$unref$panda$core$Object($tmp4230);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4227));
        }
        {
            panda$core$String* $tmp4234 = actualResultType4197;
            panda$core$String* $tmp4237 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp4236 = $tmp4237;
            panda$core$String* $tmp4235 = $tmp4236;
            actualResultType4197 = $tmp4235;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4235));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4236));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4234));
        }
    }
    }
    panda$collections$Array* $tmp4241 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp4241);
    panda$collections$Array* $tmp4240 = $tmp4241;
    panda$collections$Array* $tmp4239 = $tmp4240;
    argRefs4238 = $tmp4239;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4239));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4240));
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(argRefs4238, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4243 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp4244 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4196->subtypes);
    panda$core$Int64 $tmp4245 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4243, $tmp4244);
    panda$core$Int64 $tmp4246 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4245, ((panda$core$Int64) { 1 }));
    offset4242 = $tmp4246;
    panda$core$Int64 $tmp4248 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4247, ((panda$core$Int64) { 0 }), $tmp4248, ((panda$core$Bit) { false }));
    int64_t $tmp4250 = $tmp4247.min.value;
    panda$core$Int64 i4249 = { $tmp4250 };
    int64_t $tmp4252 = $tmp4247.max.value;
    bool $tmp4253 = $tmp4247.inclusive.value;
    if ($tmp4253) goto $l4260; else goto $l4261;
    $l4260:;
    if ($tmp4250 <= $tmp4252) goto $l4254; else goto $l4256;
    $l4261:;
    if ($tmp4250 < $tmp4252) goto $l4254; else goto $l4256;
    $l4254:;
    {
        panda$core$Object* $tmp4266 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i4249);
        panda$core$Object* $tmp4265 = $tmp4266;
        panda$core$String* $tmp4267 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4265), p_out);
        panda$core$String* $tmp4264 = $tmp4267;
        panda$core$String* $tmp4263 = $tmp4264;
        arg4262 = $tmp4263;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4263));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4264));
        panda$core$Panda$unref$panda$core$Object($tmp4265);
        panda$core$Bit $tmp4269 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4249, offset4242);
        bool $tmp4268 = $tmp4269.value;
        if (!$tmp4268) goto $l4270;
        panda$core$Int64 $tmp4272 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4249, offset4242);
        panda$core$Object* $tmp4273 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4196->subtypes, $tmp4272);
        panda$core$Object* $tmp4271 = $tmp4273;
        panda$core$Object* $tmp4276 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i4249);
        panda$core$Object* $tmp4275 = $tmp4276;
        org$pandalanguage$pandac$Type* $tmp4278 = (($fn4277) ((org$pandalanguage$pandac$IRNode*) $tmp4275)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp4275));
        org$pandalanguage$pandac$Type* $tmp4274 = $tmp4278;
        panda$core$Bit $tmp4279 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4271), $tmp4274);
        $tmp4268 = $tmp4279.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4274));
        panda$core$Panda$unref$panda$core$Object($tmp4275);
        panda$core$Panda$unref$panda$core$Object($tmp4271);
        $l4270:;
        panda$core$Bit $tmp4280 = { $tmp4268 };
        if ($tmp4280.value) {
        {
            {
                panda$core$String* $tmp4281 = arg4262;
                panda$core$Object* $tmp4286 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i4249);
                panda$core$Object* $tmp4285 = $tmp4286;
                org$pandalanguage$pandac$Type* $tmp4288 = (($fn4287) ((org$pandalanguage$pandac$IRNode*) $tmp4285)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp4285));
                org$pandalanguage$pandac$Type* $tmp4284 = $tmp4288;
                panda$core$Int64 $tmp4290 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4249, offset4242);
                panda$core$Object* $tmp4291 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4196->subtypes, $tmp4290);
                panda$core$Object* $tmp4289 = $tmp4291;
                panda$core$String* $tmp4292 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg4262, $tmp4284, ((org$pandalanguage$pandac$Type*) $tmp4289), p_out);
                panda$core$String* $tmp4283 = $tmp4292;
                panda$core$String* $tmp4282 = $tmp4283;
                arg4262 = $tmp4282;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4282));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4283));
                panda$core$Panda$unref$panda$core$Object($tmp4289);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4284));
                panda$core$Panda$unref$panda$core$Object($tmp4285);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4281));
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs4238, ((panda$core$Object*) arg4262));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg4262));
    }
    $l4257:;
    int64_t $tmp4294 = $tmp4252 - i4249.value;
    if ($tmp4253) goto $l4295; else goto $l4296;
    $l4295:;
    if ((uint64_t) $tmp4294 >= 1) goto $l4293; else goto $l4256;
    $l4296:;
    if ((uint64_t) $tmp4294 > 1) goto $l4293; else goto $l4256;
    $l4293:;
    i4249.value += 1;
    goto $l4254;
    $l4256:;
    memset(&targetRef4299, 0, sizeof(targetRef4299));
    panda$core$Int64 $tmp4300 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs4238);
    panda$core$Bit $tmp4301 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4300, ((panda$core$Int64) { 0 }));
    if ($tmp4301.value) {
    {
        {
            panda$core$String* $tmp4302 = targetRef4299;
            panda$core$Object* $tmp4305 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs4238, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4304 = $tmp4305;
            panda$core$String* $tmp4303 = ((panda$core$String*) $tmp4304);
            targetRef4299 = $tmp4303;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4303));
            panda$core$Panda$unref$panda$core$Object($tmp4304);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4302));
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp4306 = targetRef4299;
            panda$core$String* $tmp4307 = NULL;
            targetRef4299 = $tmp4307;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4307));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4306));
        }
    }
    }
    panda$core$String* $tmp4311 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, targetRef4299, m4191, isSuper4198, p_out);
    panda$core$String* $tmp4310 = $tmp4311;
    panda$core$String* $tmp4309 = $tmp4310;
    methodRef4308 = $tmp4309;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4309));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4310));
    panda$core$String* $tmp4313 = &$s4314;
    separator4312 = $tmp4313;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4313));
    panda$core$Bit $tmp4315 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4191);
    if ($tmp4315.value) {
    {
        panda$core$Int64 $tmp4316 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp4316;
        panda$core$Int64$wrapper* $tmp4322;
        $tmp4322 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp4322->value = self->varCount;
        panda$core$Object* $tmp4321 = ((panda$core$Object*) $tmp4322);
        panda$core$String* $tmp4323 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4320, $tmp4321);
        panda$core$String* $tmp4319 = $tmp4323;
        panda$core$String* $tmp4318 = $tmp4319;
        indirectVar4317 = $tmp4318;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4318));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4319));
        panda$core$Panda$unref$panda$core$Object($tmp4321);
        panda$core$String* $tmp4327 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp4326 = $tmp4327;
        panda$core$String* $tmp4325 = $tmp4326;
        resultType4324 = $tmp4325;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4325));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4326));
        panda$core$String* $tmp4332 = panda$core$String$convert$R$panda$core$String(resultType4324);
        panda$core$String* $tmp4331 = $tmp4332;
        panda$core$String* $tmp4334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4331, &$s4333);
        panda$core$String* $tmp4330 = $tmp4334;
        panda$core$String* $tmp4335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4330, indirectVar4317);
        panda$core$String* $tmp4329 = $tmp4335;
        panda$core$String* $tmp4337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4329, &$s4336);
        panda$core$String* $tmp4328 = $tmp4337;
        (($fn4338) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4328);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4328));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4329));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4330));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4331));
        panda$core$String* $tmp4345 = panda$core$String$convert$R$panda$core$String(methodRef4308);
        panda$core$String* $tmp4344 = $tmp4345;
        panda$core$String* $tmp4347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4344, &$s4346);
        panda$core$String* $tmp4343 = $tmp4347;
        panda$core$String* $tmp4348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4343, resultType4324);
        panda$core$String* $tmp4342 = $tmp4348;
        panda$core$String* $tmp4350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4342, &$s4349);
        panda$core$String* $tmp4341 = $tmp4350;
        panda$core$String* $tmp4351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4341, indirectVar4317);
        panda$core$String* $tmp4340 = $tmp4351;
        panda$core$String* $tmp4353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4340, &$s4352);
        panda$core$String* $tmp4339 = $tmp4353;
        (($fn4354) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4339);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4339));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4340));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4341));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4342));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4343));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4344));
        {
            panda$core$String* $tmp4355 = separator4312;
            panda$core$String* $tmp4356 = &$s4357;
            separator4312 = $tmp4356;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4356));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4355));
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) resultType4324));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indirectVar4317));
        }
    }
    }
    else {
    {
        panda$core$String* $tmp4360 = panda$core$String$convert$R$panda$core$String(methodRef4308);
        panda$core$String* $tmp4359 = $tmp4360;
        panda$core$String* $tmp4362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4359, &$s4361);
        panda$core$String* $tmp4358 = $tmp4362;
        (($fn4363) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4358);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4358));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4359));
    }
    }
    {
        ITable* $tmp4367 = ((panda$collections$Iterable*) argRefs4238)->$class->itable;
        while ($tmp4367->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4367 = $tmp4367->next;
        }
        $fn4369 $tmp4368 = $tmp4367->methods[0];
        panda$collections$Iterator* $tmp4370 = $tmp4368(((panda$collections$Iterable*) argRefs4238));
        panda$collections$Iterator* $tmp4366 = $tmp4370;
        panda$collections$Iterator* $tmp4365 = $tmp4366;
        Iter$1425$94364 = $tmp4365;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4365));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4366));
        $l4371:;
        ITable* $tmp4374 = Iter$1425$94364->$class->itable;
        while ($tmp4374->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4374 = $tmp4374->next;
        }
        $fn4376 $tmp4375 = $tmp4374->methods[0];
        panda$core$Bit $tmp4377 = $tmp4375(Iter$1425$94364);
        panda$core$Bit $tmp4378 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4377);
        bool $tmp4373 = $tmp4378.value;
        if (!$tmp4373) goto $l4372;
        {
            ITable* $tmp4382 = Iter$1425$94364->$class->itable;
            while ($tmp4382->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4382 = $tmp4382->next;
            }
            $fn4384 $tmp4383 = $tmp4382->methods[1];
            panda$core$Object* $tmp4385 = $tmp4383(Iter$1425$94364);
            panda$core$Object* $tmp4381 = $tmp4385;
            panda$core$String* $tmp4380 = ((panda$core$String*) $tmp4381);
            a4379 = $tmp4380;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4380));
            panda$core$Panda$unref$panda$core$Object($tmp4381);
            (($fn4386) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator4312);
            (($fn4387) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a4379);
            {
                panda$core$String* $tmp4388 = separator4312;
                panda$core$String* $tmp4389 = &$s4390;
                separator4312 = $tmp4389;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4389));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4388));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4379));
        }
        goto $l4371;
        $l4372:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1425$94364));
    }
    (($fn4392) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4391);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator4312));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) argRefs4238));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodRef4308));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualResultType4197));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m4191));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) targetRef4299));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) actualMethodType4196));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$collections$ImmutableArray* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef4395;
    panda$collections$Array* $tmp4394 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp4394);
    panda$collections$Array* $tmp4393 = $tmp4394;
    panda$collections$Stack$push$panda$collections$Stack$T(self->extraEffects, ((panda$core$Object*) $tmp4393));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4393));
    panda$core$String* $tmp4398 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp4397 = $tmp4398;
    panda$core$String* $tmp4396 = $tmp4397;
    testRef4395 = $tmp4396;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4396));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4397));
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp4402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4401, testRef4395);
    panda$core$String* $tmp4400 = $tmp4402;
    panda$core$String* $tmp4404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4400, &$s4403);
    panda$core$String* $tmp4399 = $tmp4404;
    (($fn4405) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4399);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4399));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4400));
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_ifTrue, p_out);
    (($fn4407) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4406);
    if (((panda$core$Bit) { p_ifFalse != NULL }).value) {
    {
        (($fn4409) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4408);
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_ifFalse, p_out);
        (($fn4411) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4410);
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testRef4395));
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range4428;
    org$pandalanguage$pandac$Type* t4432;
    panda$core$String* llt4439;
    panda$core$String* indexType4443;
    org$pandalanguage$pandac$ClassDecl* cl4455;
    org$pandalanguage$pandac$FieldDecl* field4472;
    panda$core$String* numberType4487;
    panda$core$String* index4491;
    org$pandalanguage$pandac$IRNode* $match$1475_94492;
    org$pandalanguage$pandac$Variable* variable4494;
    panda$core$String* start4500;
    panda$core$String* indexValuePtr4520;
    panda$core$String* end4544;
    panda$core$String* inclusive4564;
    panda$core$String* loopStart4580;
    panda$core$String* loopBody4584;
    panda$core$String* loopEnd4588;
    panda$core$String* loopTest4592;
    panda$core$String* forwardEntry4598;
    panda$core$String* backwardEntry4602;
    panda$core$String* signPrefix4606;
    panda$core$String* unsigned4607;
    panda$core$String* forwardEntryInclusive4630;
    panda$core$String* forwardEntryExclusive4634;
    panda$core$String* loopInc4701;
    panda$core$String* forwardDelta4705;
    panda$core$String* forwardInclusiveLabel4730;
    panda$core$String* forwardExclusiveLabel4734;
    panda$core$String* forwardExclusiveTest4781;
    panda$core$String* inc4809;
    org$pandalanguage$pandac$Type* $tmp4414 = (($fn4413) p_list->$class->vtable[2])(p_list);
    org$pandalanguage$pandac$Type* $tmp4412 = $tmp4414;
    panda$core$Bit $tmp4415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4412->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4415.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4412));
    org$pandalanguage$pandac$Type* $tmp4418 = (($fn4417) p_list->$class->vtable[2])(p_list);
    org$pandalanguage$pandac$Type* $tmp4416 = $tmp4418;
    panda$core$Int64 $tmp4419 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4416->subtypes);
    panda$core$Bit $tmp4420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4419, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4420.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4416));
    org$pandalanguage$pandac$Type* $tmp4424 = (($fn4423) p_list->$class->vtable[2])(p_list);
    org$pandalanguage$pandac$Type* $tmp4422 = $tmp4424;
    panda$core$Object* $tmp4425 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4422->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4421 = $tmp4425;
    panda$core$Bit $tmp4427 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4421))->name, &$s4426);
    PANDA_ASSERT($tmp4427.value);
    panda$core$Panda$unref$panda$core$Object($tmp4421);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4422));
    panda$core$String* $tmp4431 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    panda$core$String* $tmp4430 = $tmp4431;
    panda$core$String* $tmp4429 = $tmp4430;
    range4428 = $tmp4429;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4429));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4430));
    org$pandalanguage$pandac$Type* $tmp4437 = (($fn4436) p_list->$class->vtable[2])(p_list);
    org$pandalanguage$pandac$Type* $tmp4435 = $tmp4437;
    panda$core$Object* $tmp4438 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4435->subtypes, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4434 = $tmp4438;
    org$pandalanguage$pandac$Type* $tmp4433 = ((org$pandalanguage$pandac$Type*) $tmp4434);
    t4432 = $tmp4433;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4433));
    panda$core$Panda$unref$panda$core$Object($tmp4434);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4435));
    panda$core$String* $tmp4442 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4432);
    panda$core$String* $tmp4441 = $tmp4442;
    panda$core$String* $tmp4440 = $tmp4441;
    llt4439 = $tmp4440;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4440));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4441));
    memset(&indexType4443, 0, sizeof(indexType4443));
    panda$core$Bit $tmp4444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4432->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4444.value) {
    {
        panda$core$Int64 $tmp4445 = panda$collections$Array$get_count$R$panda$core$Int64(t4432->subtypes);
        panda$core$Bit $tmp4446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4445, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4446.value);
        {
            panda$core$String* $tmp4447 = indexType4443;
            panda$core$Object* $tmp4451 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4432->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4450 = $tmp4451;
            panda$core$String* $tmp4452 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4450));
            panda$core$String* $tmp4449 = $tmp4452;
            panda$core$String* $tmp4448 = $tmp4449;
            indexType4443 = $tmp4448;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4448));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4449));
            panda$core$Panda$unref$panda$core$Object($tmp4450);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4447));
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp4453 = indexType4443;
            panda$core$String* $tmp4454 = llt4439;
            indexType4443 = $tmp4454;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4454));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4453));
        }
    }
    }
    panda$core$Object* $tmp4460 = (($fn4459) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp4458 = $tmp4460;
    org$pandalanguage$pandac$ClassDecl* $tmp4461 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp4458), t4432);
    org$pandalanguage$pandac$ClassDecl* $tmp4457 = $tmp4461;
    org$pandalanguage$pandac$ClassDecl* $tmp4456 = $tmp4457;
    cl4455 = $tmp4456;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4456));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4457));
    panda$core$Panda$unref$panda$core$Object($tmp4458);
    PANDA_ASSERT(((panda$core$Bit) { cl4455 != NULL }).value);
    panda$core$Object* $tmp4465 = (($fn4464) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp4463 = $tmp4465;
    panda$collections$ListView* $tmp4466 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp4463), cl4455);
    panda$collections$ListView* $tmp4462 = $tmp4466;
    ITable* $tmp4467 = ((panda$collections$CollectionView*) $tmp4462)->$class->itable;
    while ($tmp4467->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4467 = $tmp4467->next;
    }
    $fn4469 $tmp4468 = $tmp4467->methods[0];
    panda$core$Int64 $tmp4470 = $tmp4468(((panda$collections$CollectionView*) $tmp4462));
    panda$core$Bit $tmp4471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4470, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4471.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4462));
    panda$core$Panda$unref$panda$core$Object($tmp4463);
    panda$core$Object* $tmp4478 = (($fn4477) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp4476 = $tmp4478;
    panda$collections$ListView* $tmp4479 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp4476), cl4455);
    panda$collections$ListView* $tmp4475 = $tmp4479;
    ITable* $tmp4480 = $tmp4475->$class->itable;
    while ($tmp4480->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4480 = $tmp4480->next;
    }
    $fn4482 $tmp4481 = $tmp4480->methods[0];
    panda$core$Object* $tmp4483 = $tmp4481($tmp4475, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4474 = $tmp4483;
    org$pandalanguage$pandac$FieldDecl* $tmp4473 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4474);
    field4472 = $tmp4473;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4473));
    panda$core$Panda$unref$panda$core$Object($tmp4474);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4475));
    panda$core$Panda$unref$panda$core$Object($tmp4476);
    panda$core$Object* $tmp4486 = (($fn4485) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp4484 = $tmp4486;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp4484), field4472);
    panda$core$Panda$unref$panda$core$Object($tmp4484);
    panda$core$String* $tmp4490 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field4472->type);
    panda$core$String* $tmp4489 = $tmp4490;
    panda$core$String* $tmp4488 = $tmp4489;
    numberType4487 = $tmp4488;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4488));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4489));
    memset(&index4491, 0, sizeof(index4491));
    {
        $match$1475_94492 = p_target;
        panda$core$Bit $tmp4493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1475_94492->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp4493.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp4495 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1475_94492->$data + 16));
            variable4494 = *$tmp4495;
            {
                panda$core$String* $tmp4496 = index4491;
                panda$core$String* $tmp4499 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable4494);
                panda$core$String* $tmp4498 = $tmp4499;
                panda$core$String* $tmp4497 = $tmp4498;
                index4491 = $tmp4497;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4497));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4498));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4496));
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp4503 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp4502 = $tmp4503;
    panda$core$String* $tmp4501 = $tmp4502;
    start4500 = $tmp4501;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4501));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4502));
    panda$core$String* $tmp4510 = panda$core$String$convert$R$panda$core$String(numberType4487);
    panda$core$String* $tmp4509 = $tmp4510;
    panda$core$String* $tmp4512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4509, &$s4511);
    panda$core$String* $tmp4508 = $tmp4512;
    panda$core$String* $tmp4513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4508, start4500);
    panda$core$String* $tmp4507 = $tmp4513;
    panda$core$String* $tmp4515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4507, &$s4514);
    panda$core$String* $tmp4506 = $tmp4515;
    panda$core$String* $tmp4516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4506, range4428);
    panda$core$String* $tmp4505 = $tmp4516;
    panda$core$String* $tmp4518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4505, &$s4517);
    panda$core$String* $tmp4504 = $tmp4518;
    (($fn4519) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4504);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4504));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4505));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4506));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4507));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4508));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4509));
    panda$core$String* $tmp4523 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp4522 = $tmp4523;
    panda$core$String* $tmp4521 = $tmp4522;
    indexValuePtr4520 = $tmp4521;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4521));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4522));
    org$pandalanguage$pandac$Type* $tmp4532 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl4455);
    org$pandalanguage$pandac$Type* $tmp4531 = $tmp4532;
    panda$core$String* $tmp4533 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp4531);
    panda$core$String* $tmp4530 = $tmp4533;
    panda$core$String* $tmp4534 = panda$core$String$convert$R$panda$core$String($tmp4530);
    panda$core$String* $tmp4529 = $tmp4534;
    panda$core$String* $tmp4536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4529, &$s4535);
    panda$core$String* $tmp4528 = $tmp4536;
    panda$core$String* $tmp4537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4528, index4491);
    panda$core$String* $tmp4527 = $tmp4537;
    panda$core$String* $tmp4539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4527, &$s4538);
    panda$core$String* $tmp4526 = $tmp4539;
    panda$core$String* $tmp4540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4526, start4500);
    panda$core$String* $tmp4525 = $tmp4540;
    panda$core$String* $tmp4542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4525, &$s4541);
    panda$core$String* $tmp4524 = $tmp4542;
    (($fn4543) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4524);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4524));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4525));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4526));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4527));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4528));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4529));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4530));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4531));
    panda$core$String* $tmp4547 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp4546 = $tmp4547;
    panda$core$String* $tmp4545 = $tmp4546;
    end4544 = $tmp4545;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4545));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4546));
    panda$core$String* $tmp4554 = panda$core$String$convert$R$panda$core$String(numberType4487);
    panda$core$String* $tmp4553 = $tmp4554;
    panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4553, &$s4555);
    panda$core$String* $tmp4552 = $tmp4556;
    panda$core$String* $tmp4557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4552, end4544);
    panda$core$String* $tmp4551 = $tmp4557;
    panda$core$String* $tmp4559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4551, &$s4558);
    panda$core$String* $tmp4550 = $tmp4559;
    panda$core$String* $tmp4560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4550, range4428);
    panda$core$String* $tmp4549 = $tmp4560;
    panda$core$String* $tmp4562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4549, &$s4561);
    panda$core$String* $tmp4548 = $tmp4562;
    (($fn4563) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4548);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4548));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4549));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4550));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4551));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4552));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4553));
    panda$core$String* $tmp4567 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp4566 = $tmp4567;
    panda$core$String* $tmp4565 = $tmp4566;
    inclusive4564 = $tmp4565;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4565));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4566));
    panda$core$String* $tmp4573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4572, inclusive4564);
    panda$core$String* $tmp4571 = $tmp4573;
    panda$core$String* $tmp4575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4571, &$s4574);
    panda$core$String* $tmp4570 = $tmp4575;
    panda$core$String* $tmp4576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4570, range4428);
    panda$core$String* $tmp4569 = $tmp4576;
    panda$core$String* $tmp4578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4569, &$s4577);
    panda$core$String* $tmp4568 = $tmp4578;
    (($fn4579) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4568);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4568));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4569));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4570));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4571));
    panda$core$String* $tmp4583 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp4582 = $tmp4583;
    panda$core$String* $tmp4581 = $tmp4582;
    loopStart4580 = $tmp4581;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4581));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4582));
    panda$core$String* $tmp4587 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp4586 = $tmp4587;
    panda$core$String* $tmp4585 = $tmp4586;
    loopBody4584 = $tmp4585;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4585));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4586));
    panda$core$String* $tmp4591 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp4590 = $tmp4591;
    panda$core$String* $tmp4589 = $tmp4590;
    loopEnd4588 = $tmp4589;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4589));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4590));
    panda$core$String* $tmp4595 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp4594 = $tmp4595;
    panda$core$String* $tmp4593 = $tmp4594;
    loopTest4592 = $tmp4593;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4593));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4594));
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp4597 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4597, p_label, loopEnd4588, loopTest4592);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp4596 = $tmp4597;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4596));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4596));
    panda$core$String* $tmp4601 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp4600 = $tmp4601;
    panda$core$String* $tmp4599 = $tmp4600;
    forwardEntry4598 = $tmp4599;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4599));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4600));
    panda$core$String* $tmp4605 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp4604 = $tmp4605;
    panda$core$String* $tmp4603 = $tmp4604;
    backwardEntry4602 = $tmp4603;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4603));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4604));
    memset(&signPrefix4606, 0, sizeof(signPrefix4606));
    memset(&unsigned4607, 0, sizeof(unsigned4607));
    panda$core$Bit $tmp4609 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4432)->name, &$s4608);
    if ($tmp4609.value) {
    {
        {
            panda$core$String* $tmp4610 = signPrefix4606;
            panda$core$String* $tmp4611 = &$s4612;
            signPrefix4606 = $tmp4611;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4611));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4610));
        }
        {
            panda$core$String* $tmp4613 = unsigned4607;
            panda$core$String* $tmp4617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4616, numberType4487);
            panda$core$String* $tmp4615 = $tmp4617;
            panda$core$String* $tmp4614 = $tmp4615;
            unsigned4607 = $tmp4614;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4614));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4615));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4613));
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp4620 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4432)->name, &$s4619);
        bool $tmp4618 = $tmp4620.value;
        if ($tmp4618) goto $l4621;
        panda$core$Bit $tmp4623 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4432)->name, &$s4622);
        $tmp4618 = $tmp4623.value;
        $l4621:;
        panda$core$Bit $tmp4624 = { $tmp4618 };
        PANDA_ASSERT($tmp4624.value);
        {
            panda$core$String* $tmp4625 = signPrefix4606;
            panda$core$String* $tmp4626 = &$s4627;
            signPrefix4606 = $tmp4626;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4626));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4625));
        }
        {
            panda$core$String* $tmp4628 = unsigned4607;
            panda$core$String* $tmp4629 = numberType4487;
            unsigned4607 = $tmp4629;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4629));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4628));
        }
    }
    }
    panda$core$String* $tmp4633 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp4632 = $tmp4633;
    panda$core$String* $tmp4631 = $tmp4632;
    forwardEntryInclusive4630 = $tmp4631;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4631));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4632));
    panda$core$String* $tmp4637 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp4636 = $tmp4637;
    panda$core$String* $tmp4635 = $tmp4636;
    forwardEntryExclusive4634 = $tmp4635;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4635));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4636));
    panda$core$String* $tmp4644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4643, inclusive4564);
    panda$core$String* $tmp4642 = $tmp4644;
    panda$core$String* $tmp4646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4642, &$s4645);
    panda$core$String* $tmp4641 = $tmp4646;
    panda$core$String* $tmp4647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4641, forwardEntryInclusive4630);
    panda$core$String* $tmp4640 = $tmp4647;
    panda$core$String* $tmp4649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4640, &$s4648);
    panda$core$String* $tmp4639 = $tmp4649;
    panda$core$String* $tmp4652 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive4634);
    panda$core$String* $tmp4651 = $tmp4652;
    panda$core$String* $tmp4654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4651, &$s4653);
    panda$core$String* $tmp4650 = $tmp4654;
    panda$core$String* $tmp4655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4639, $tmp4650);
    panda$core$String* $tmp4638 = $tmp4655;
    (($fn4656) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4638);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4638));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4650));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4651));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4639));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4640));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4641));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4642));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive4630, p_out);
    panda$core$String* $tmp4666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4665, start4500);
    panda$core$String* $tmp4664 = $tmp4666;
    panda$core$String* $tmp4668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4664, &$s4667);
    panda$core$String* $tmp4663 = $tmp4668;
    panda$core$String* $tmp4669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4663, end4544);
    panda$core$String* $tmp4662 = $tmp4669;
    panda$core$String* $tmp4671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4662, &$s4670);
    panda$core$String* $tmp4661 = $tmp4671;
    panda$core$String* $tmp4672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4661, loopStart4580);
    panda$core$String* $tmp4660 = $tmp4672;
    panda$core$String* $tmp4674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4660, &$s4673);
    panda$core$String* $tmp4659 = $tmp4674;
    panda$core$String* $tmp4675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4659, loopEnd4588);
    panda$core$String* $tmp4658 = $tmp4675;
    panda$core$String* $tmp4677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4658, &$s4676);
    panda$core$String* $tmp4657 = $tmp4677;
    (($fn4678) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4657);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4657));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4658));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4659));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4660));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4661));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4662));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4663));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4664));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive4634, p_out);
    panda$core$String* $tmp4688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4687, start4500);
    panda$core$String* $tmp4686 = $tmp4688;
    panda$core$String* $tmp4690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4686, &$s4689);
    panda$core$String* $tmp4685 = $tmp4690;
    panda$core$String* $tmp4691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4685, end4544);
    panda$core$String* $tmp4684 = $tmp4691;
    panda$core$String* $tmp4693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4684, &$s4692);
    panda$core$String* $tmp4683 = $tmp4693;
    panda$core$String* $tmp4694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4683, loopStart4580);
    panda$core$String* $tmp4682 = $tmp4694;
    panda$core$String* $tmp4696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4682, &$s4695);
    panda$core$String* $tmp4681 = $tmp4696;
    panda$core$String* $tmp4697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4681, loopEnd4588);
    panda$core$String* $tmp4680 = $tmp4697;
    panda$core$String* $tmp4699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4680, &$s4698);
    panda$core$String* $tmp4679 = $tmp4699;
    (($fn4700) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4679);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4679));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4680));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4681));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4682));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4683));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4684));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4685));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4686));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart4580, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest4592, p_out);
    panda$core$String* $tmp4704 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp4703 = $tmp4704;
    panda$core$String* $tmp4702 = $tmp4703;
    loopInc4701 = $tmp4702;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4702));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4703));
    panda$core$String* $tmp4708 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp4707 = $tmp4708;
    panda$core$String* $tmp4706 = $tmp4707;
    forwardDelta4705 = $tmp4706;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4706));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4707));
    panda$core$String* $tmp4717 = panda$core$String$convert$R$panda$core$String(numberType4487);
    panda$core$String* $tmp4716 = $tmp4717;
    panda$core$String* $tmp4719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4716, &$s4718);
    panda$core$String* $tmp4715 = $tmp4719;
    panda$core$String* $tmp4720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4715, forwardDelta4705);
    panda$core$String* $tmp4714 = $tmp4720;
    panda$core$String* $tmp4722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4714, &$s4721);
    panda$core$String* $tmp4713 = $tmp4722;
    panda$core$String* $tmp4723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4713, end4544);
    panda$core$String* $tmp4712 = $tmp4723;
    panda$core$String* $tmp4725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4712, &$s4724);
    panda$core$String* $tmp4711 = $tmp4725;
    panda$core$String* $tmp4726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4711, index4491);
    panda$core$String* $tmp4710 = $tmp4726;
    panda$core$String* $tmp4728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4710, &$s4727);
    panda$core$String* $tmp4709 = $tmp4728;
    (($fn4729) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4709);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4709));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4710));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4711));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4712));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4713));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4714));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4715));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4716));
    panda$core$String* $tmp4733 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp4732 = $tmp4733;
    panda$core$String* $tmp4731 = $tmp4732;
    forwardInclusiveLabel4730 = $tmp4731;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4731));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4732));
    panda$core$String* $tmp4737 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp4736 = $tmp4737;
    panda$core$String* $tmp4735 = $tmp4736;
    forwardExclusiveLabel4734 = $tmp4735;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4735));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4736));
    panda$core$String* $tmp4744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4743, inclusive4564);
    panda$core$String* $tmp4742 = $tmp4744;
    panda$core$String* $tmp4746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4742, &$s4745);
    panda$core$String* $tmp4741 = $tmp4746;
    panda$core$String* $tmp4747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4741, forwardInclusiveLabel4730);
    panda$core$String* $tmp4740 = $tmp4747;
    panda$core$String* $tmp4749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4740, &$s4748);
    panda$core$String* $tmp4739 = $tmp4749;
    panda$core$String* $tmp4752 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel4734);
    panda$core$String* $tmp4751 = $tmp4752;
    panda$core$String* $tmp4754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4751, &$s4753);
    panda$core$String* $tmp4750 = $tmp4754;
    panda$core$String* $tmp4755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4739, $tmp4750);
    panda$core$String* $tmp4738 = $tmp4755;
    (($fn4756) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4738);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4738));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4750));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4751));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4739));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4740));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4741));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4742));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel4730, p_out);
    panda$core$String* $tmp4765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4764, unsigned4607);
    panda$core$String* $tmp4763 = $tmp4765;
    panda$core$String* $tmp4767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4763, &$s4766);
    panda$core$String* $tmp4762 = $tmp4767;
    panda$core$String* $tmp4768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4762, forwardDelta4705);
    panda$core$String* $tmp4761 = $tmp4768;
    panda$core$String* $tmp4770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4761, &$s4769);
    panda$core$String* $tmp4760 = $tmp4770;
    panda$core$String* $tmp4771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4760, loopInc4701);
    panda$core$String* $tmp4759 = $tmp4771;
    panda$core$String* $tmp4773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4759, &$s4772);
    panda$core$String* $tmp4758 = $tmp4773;
    panda$core$String* $tmp4776 = panda$core$String$convert$R$panda$core$String(loopEnd4588);
    panda$core$String* $tmp4775 = $tmp4776;
    panda$core$String* $tmp4778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4775, &$s4777);
    panda$core$String* $tmp4774 = $tmp4778;
    panda$core$String* $tmp4779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4758, $tmp4774);
    panda$core$String* $tmp4757 = $tmp4779;
    (($fn4780) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4757);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4757));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4774));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4775));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4758));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4759));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4760));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4761));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4762));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4763));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel4734, p_out);
    panda$core$String* $tmp4784 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp4783 = $tmp4784;
    panda$core$String* $tmp4782 = $tmp4783;
    forwardExclusiveTest4781 = $tmp4782;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4782));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4783));
    panda$core$String* $tmp4793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4792, unsigned4607);
    panda$core$String* $tmp4791 = $tmp4793;
    panda$core$String* $tmp4795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4791, &$s4794);
    panda$core$String* $tmp4790 = $tmp4795;
    panda$core$String* $tmp4796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4790, forwardDelta4705);
    panda$core$String* $tmp4789 = $tmp4796;
    panda$core$String* $tmp4798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4789, &$s4797);
    panda$core$String* $tmp4788 = $tmp4798;
    panda$core$String* $tmp4799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4788, loopInc4701);
    panda$core$String* $tmp4787 = $tmp4799;
    panda$core$String* $tmp4801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4787, &$s4800);
    panda$core$String* $tmp4786 = $tmp4801;
    panda$core$String* $tmp4804 = panda$core$String$convert$R$panda$core$String(loopEnd4588);
    panda$core$String* $tmp4803 = $tmp4804;
    panda$core$String* $tmp4806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4803, &$s4805);
    panda$core$String* $tmp4802 = $tmp4806;
    panda$core$String* $tmp4807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4786, $tmp4802);
    panda$core$String* $tmp4785 = $tmp4807;
    (($fn4808) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4785);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4785));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4802));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4803));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4786));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4787));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4788));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4789));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4790));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4791));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc4701, p_out);
    panda$core$String* $tmp4812 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp4811 = $tmp4812;
    panda$core$String* $tmp4810 = $tmp4811;
    inc4809 = $tmp4810;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4810));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4811));
    panda$core$String* $tmp4815 = panda$core$String$convert$R$panda$core$String(index4491);
    panda$core$String* $tmp4814 = $tmp4815;
    panda$core$String* $tmp4817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4814, &$s4816);
    panda$core$String* $tmp4813 = $tmp4817;
    (($fn4818) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4813);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4813));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4814));
    panda$core$String* $tmp4822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4821, loopStart4580);
    panda$core$String* $tmp4820 = $tmp4822;
    panda$core$String* $tmp4824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4820, &$s4823);
    panda$core$String* $tmp4819 = $tmp4824;
    (($fn4825) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4819);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4819));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4820));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd4588, p_out);
    panda$core$Object* $tmp4827 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    panda$core$Object* $tmp4826 = $tmp4827;
    panda$core$Panda$unref$panda$core$Object($tmp4826);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$1475_94492));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix4606));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveLabel4734));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inclusive4564));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned4607));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start4500));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopBody4584));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopTest4592));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryInclusive4630));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4432));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardInclusiveLabel4730));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) end4544));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inc4809));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart4580));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntry4602));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexValuePtr4520));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd4588));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopInc4701));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType4443));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llt4439));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveTest4781));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) numberType4487));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntry4598));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index4491));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryExclusive4634));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field4472));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardDelta4705));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl4455));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) range4428));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range4844;
    org$pandalanguage$pandac$Type* t4848;
    org$pandalanguage$pandac$Type* stepType4855;
    panda$core$String* llt4862;
    panda$core$String* indexType4866;
    org$pandalanguage$pandac$ClassDecl* cl4878;
    org$pandalanguage$pandac$FieldDecl* field4895;
    panda$core$String* numberType4910;
    panda$core$String* index4914;
    org$pandalanguage$pandac$IRNode* $match$1587_94915;
    org$pandalanguage$pandac$Variable* variable4917;
    panda$core$String* start4923;
    panda$core$String* indexValuePtr4943;
    panda$core$String* end4967;
    panda$core$String* step4987;
    org$pandalanguage$pandac$ClassDecl* stepCl4991;
    org$pandalanguage$pandac$FieldDecl* stepField5008;
    panda$core$String* inclusive5041;
    panda$core$String* loopStart5057;
    panda$core$String* loopBody5061;
    panda$core$String* loopEnd5065;
    panda$core$String* loopTest5069;
    panda$core$String* forwardEntry5075;
    panda$core$String* backwardEntry5079;
    panda$core$String* unsigned5083;
    panda$core$String* signPrefix5084;
    panda$core$String* direction5109;
    panda$core$String* forwardEntryInclusive5148;
    panda$core$String* forwardEntryExclusive5152;
    panda$core$String* backwardEntryInclusive5219;
    panda$core$String* backwardEntryExclusive5223;
    panda$core$String* backwardEntryExclusiveTest5268;
    panda$core$String* loopInc5294;
    panda$core$String* forwardLabel5298;
    panda$core$String* backwardLabel5302;
    panda$core$String* forwardDelta5323;
    panda$core$String* forwardInclusiveLabel5348;
    panda$core$String* forwardExclusiveLabel5352;
    panda$core$String* forwardExclusiveTest5404;
    panda$core$String* backwardDelta5437;
    panda$core$String* backwardInclusiveLabel5462;
    panda$core$String* backwardExclusiveLabel5466;
    panda$core$String* inc5549;
    org$pandalanguage$pandac$Type* $tmp4830 = (($fn4829) p_list->$class->vtable[2])(p_list);
    org$pandalanguage$pandac$Type* $tmp4828 = $tmp4830;
    panda$core$Bit $tmp4831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4828->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4831.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4828));
    org$pandalanguage$pandac$Type* $tmp4834 = (($fn4833) p_list->$class->vtable[2])(p_list);
    org$pandalanguage$pandac$Type* $tmp4832 = $tmp4834;
    panda$core$Int64 $tmp4835 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4832->subtypes);
    panda$core$Bit $tmp4836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4835, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4836.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4832));
    org$pandalanguage$pandac$Type* $tmp4840 = (($fn4839) p_list->$class->vtable[2])(p_list);
    org$pandalanguage$pandac$Type* $tmp4838 = $tmp4840;
    panda$core$Object* $tmp4841 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4838->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4837 = $tmp4841;
    panda$core$Bit $tmp4843 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4837))->name, &$s4842);
    PANDA_ASSERT($tmp4843.value);
    panda$core$Panda$unref$panda$core$Object($tmp4837);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4838));
    panda$core$String* $tmp4847 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    panda$core$String* $tmp4846 = $tmp4847;
    panda$core$String* $tmp4845 = $tmp4846;
    range4844 = $tmp4845;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4845));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4846));
    org$pandalanguage$pandac$Type* $tmp4853 = (($fn4852) p_list->$class->vtable[2])(p_list);
    org$pandalanguage$pandac$Type* $tmp4851 = $tmp4853;
    panda$core$Object* $tmp4854 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4851->subtypes, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4850 = $tmp4854;
    org$pandalanguage$pandac$Type* $tmp4849 = ((org$pandalanguage$pandac$Type*) $tmp4850);
    t4848 = $tmp4849;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4849));
    panda$core$Panda$unref$panda$core$Object($tmp4850);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4851));
    org$pandalanguage$pandac$Type* $tmp4860 = (($fn4859) p_list->$class->vtable[2])(p_list);
    org$pandalanguage$pandac$Type* $tmp4858 = $tmp4860;
    panda$core$Object* $tmp4861 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4858->subtypes, ((panda$core$Int64) { 2 }));
    panda$core$Object* $tmp4857 = $tmp4861;
    org$pandalanguage$pandac$Type* $tmp4856 = ((org$pandalanguage$pandac$Type*) $tmp4857);
    stepType4855 = $tmp4856;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4856));
    panda$core$Panda$unref$panda$core$Object($tmp4857);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4858));
    panda$core$String* $tmp4865 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4848);
    panda$core$String* $tmp4864 = $tmp4865;
    panda$core$String* $tmp4863 = $tmp4864;
    llt4862 = $tmp4863;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4863));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4864));
    memset(&indexType4866, 0, sizeof(indexType4866));
    panda$core$Bit $tmp4867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4848->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4867.value) {
    {
        panda$core$Int64 $tmp4868 = panda$collections$Array$get_count$R$panda$core$Int64(t4848->subtypes);
        panda$core$Bit $tmp4869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4868, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4869.value);
        {
            panda$core$String* $tmp4870 = indexType4866;
            panda$core$Object* $tmp4874 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4848->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4873 = $tmp4874;
            panda$core$String* $tmp4875 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4873));
            panda$core$String* $tmp4872 = $tmp4875;
            panda$core$String* $tmp4871 = $tmp4872;
            indexType4866 = $tmp4871;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4871));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4872));
            panda$core$Panda$unref$panda$core$Object($tmp4873);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4870));
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp4876 = indexType4866;
            panda$core$String* $tmp4877 = llt4862;
            indexType4866 = $tmp4877;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4877));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4876));
        }
    }
    }
    panda$core$Object* $tmp4883 = (($fn4882) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp4881 = $tmp4883;
    org$pandalanguage$pandac$ClassDecl* $tmp4884 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp4881), t4848);
    org$pandalanguage$pandac$ClassDecl* $tmp4880 = $tmp4884;
    org$pandalanguage$pandac$ClassDecl* $tmp4879 = $tmp4880;
    cl4878 = $tmp4879;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4879));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4880));
    panda$core$Panda$unref$panda$core$Object($tmp4881);
    PANDA_ASSERT(((panda$core$Bit) { cl4878 != NULL }).value);
    panda$core$Object* $tmp4888 = (($fn4887) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp4886 = $tmp4888;
    panda$collections$ListView* $tmp4889 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp4886), cl4878);
    panda$collections$ListView* $tmp4885 = $tmp4889;
    ITable* $tmp4890 = ((panda$collections$CollectionView*) $tmp4885)->$class->itable;
    while ($tmp4890->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4890 = $tmp4890->next;
    }
    $fn4892 $tmp4891 = $tmp4890->methods[0];
    panda$core$Int64 $tmp4893 = $tmp4891(((panda$collections$CollectionView*) $tmp4885));
    panda$core$Bit $tmp4894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4893, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4894.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4885));
    panda$core$Panda$unref$panda$core$Object($tmp4886);
    panda$core$Object* $tmp4901 = (($fn4900) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp4899 = $tmp4901;
    panda$collections$ListView* $tmp4902 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp4899), cl4878);
    panda$collections$ListView* $tmp4898 = $tmp4902;
    ITable* $tmp4903 = $tmp4898->$class->itable;
    while ($tmp4903->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4903 = $tmp4903->next;
    }
    $fn4905 $tmp4904 = $tmp4903->methods[0];
    panda$core$Object* $tmp4906 = $tmp4904($tmp4898, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4897 = $tmp4906;
    org$pandalanguage$pandac$FieldDecl* $tmp4896 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4897);
    field4895 = $tmp4896;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4896));
    panda$core$Panda$unref$panda$core$Object($tmp4897);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4898));
    panda$core$Panda$unref$panda$core$Object($tmp4899);
    panda$core$Object* $tmp4909 = (($fn4908) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp4907 = $tmp4909;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp4907), field4895);
    panda$core$Panda$unref$panda$core$Object($tmp4907);
    panda$core$String* $tmp4913 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field4895->type);
    panda$core$String* $tmp4912 = $tmp4913;
    panda$core$String* $tmp4911 = $tmp4912;
    numberType4910 = $tmp4911;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4911));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4912));
    memset(&index4914, 0, sizeof(index4914));
    {
        $match$1587_94915 = p_target;
        panda$core$Bit $tmp4916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1587_94915->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp4916.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp4918 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1587_94915->$data + 16));
            variable4917 = *$tmp4918;
            {
                panda$core$String* $tmp4919 = index4914;
                panda$core$String* $tmp4922 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable4917);
                panda$core$String* $tmp4921 = $tmp4922;
                panda$core$String* $tmp4920 = $tmp4921;
                index4914 = $tmp4920;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4920));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4921));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4919));
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp4926 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp4925 = $tmp4926;
    panda$core$String* $tmp4924 = $tmp4925;
    start4923 = $tmp4924;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4924));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4925));
    panda$core$String* $tmp4933 = panda$core$String$convert$R$panda$core$String(numberType4910);
    panda$core$String* $tmp4932 = $tmp4933;
    panda$core$String* $tmp4935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4932, &$s4934);
    panda$core$String* $tmp4931 = $tmp4935;
    panda$core$String* $tmp4936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4931, start4923);
    panda$core$String* $tmp4930 = $tmp4936;
    panda$core$String* $tmp4938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4930, &$s4937);
    panda$core$String* $tmp4929 = $tmp4938;
    panda$core$String* $tmp4939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4929, range4844);
    panda$core$String* $tmp4928 = $tmp4939;
    panda$core$String* $tmp4941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4928, &$s4940);
    panda$core$String* $tmp4927 = $tmp4941;
    (($fn4942) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4927);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4927));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4928));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4929));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4930));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4931));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4932));
    panda$core$String* $tmp4946 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp4945 = $tmp4946;
    panda$core$String* $tmp4944 = $tmp4945;
    indexValuePtr4943 = $tmp4944;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4944));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4945));
    org$pandalanguage$pandac$Type* $tmp4955 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl4878);
    org$pandalanguage$pandac$Type* $tmp4954 = $tmp4955;
    panda$core$String* $tmp4956 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp4954);
    panda$core$String* $tmp4953 = $tmp4956;
    panda$core$String* $tmp4957 = panda$core$String$convert$R$panda$core$String($tmp4953);
    panda$core$String* $tmp4952 = $tmp4957;
    panda$core$String* $tmp4959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4952, &$s4958);
    panda$core$String* $tmp4951 = $tmp4959;
    panda$core$String* $tmp4960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4951, index4914);
    panda$core$String* $tmp4950 = $tmp4960;
    panda$core$String* $tmp4962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4950, &$s4961);
    panda$core$String* $tmp4949 = $tmp4962;
    panda$core$String* $tmp4963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4949, start4923);
    panda$core$String* $tmp4948 = $tmp4963;
    panda$core$String* $tmp4965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4948, &$s4964);
    panda$core$String* $tmp4947 = $tmp4965;
    (($fn4966) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4947);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4947));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4948));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4949));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4950));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4951));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4952));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4953));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4954));
    panda$core$String* $tmp4970 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp4969 = $tmp4970;
    panda$core$String* $tmp4968 = $tmp4969;
    end4967 = $tmp4968;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4968));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4969));
    panda$core$String* $tmp4977 = panda$core$String$convert$R$panda$core$String(numberType4910);
    panda$core$String* $tmp4976 = $tmp4977;
    panda$core$String* $tmp4979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4976, &$s4978);
    panda$core$String* $tmp4975 = $tmp4979;
    panda$core$String* $tmp4980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4975, end4967);
    panda$core$String* $tmp4974 = $tmp4980;
    panda$core$String* $tmp4982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4974, &$s4981);
    panda$core$String* $tmp4973 = $tmp4982;
    panda$core$String* $tmp4983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4973, range4844);
    panda$core$String* $tmp4972 = $tmp4983;
    panda$core$String* $tmp4985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4972, &$s4984);
    panda$core$String* $tmp4971 = $tmp4985;
    (($fn4986) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4971);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4971));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4972));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4973));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4974));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4975));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4976));
    panda$core$String* $tmp4990 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp4989 = $tmp4990;
    panda$core$String* $tmp4988 = $tmp4989;
    step4987 = $tmp4988;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4988));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4989));
    panda$core$Object* $tmp4996 = (($fn4995) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp4994 = $tmp4996;
    org$pandalanguage$pandac$ClassDecl* $tmp4997 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp4994), stepType4855);
    org$pandalanguage$pandac$ClassDecl* $tmp4993 = $tmp4997;
    org$pandalanguage$pandac$ClassDecl* $tmp4992 = $tmp4993;
    stepCl4991 = $tmp4992;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4992));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4993));
    panda$core$Panda$unref$panda$core$Object($tmp4994);
    PANDA_ASSERT(((panda$core$Bit) { stepCl4991 != NULL }).value);
    panda$core$Object* $tmp5001 = (($fn5000) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp4999 = $tmp5001;
    panda$collections$ListView* $tmp5002 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp4999), stepCl4991);
    panda$collections$ListView* $tmp4998 = $tmp5002;
    ITable* $tmp5003 = ((panda$collections$CollectionView*) $tmp4998)->$class->itable;
    while ($tmp5003->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp5003 = $tmp5003->next;
    }
    $fn5005 $tmp5004 = $tmp5003->methods[0];
    panda$core$Int64 $tmp5006 = $tmp5004(((panda$collections$CollectionView*) $tmp4998));
    panda$core$Bit $tmp5007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5006, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5007.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4998));
    panda$core$Panda$unref$panda$core$Object($tmp4999);
    panda$core$Object* $tmp5014 = (($fn5013) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp5012 = $tmp5014;
    panda$collections$ListView* $tmp5015 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp5012), stepCl4991);
    panda$collections$ListView* $tmp5011 = $tmp5015;
    ITable* $tmp5016 = $tmp5011->$class->itable;
    while ($tmp5016->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp5016 = $tmp5016->next;
    }
    $fn5018 $tmp5017 = $tmp5016->methods[0];
    panda$core$Object* $tmp5019 = $tmp5017($tmp5011, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp5010 = $tmp5019;
    org$pandalanguage$pandac$FieldDecl* $tmp5009 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5010);
    stepField5008 = $tmp5009;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5009));
    panda$core$Panda$unref$panda$core$Object($tmp5010);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5011));
    panda$core$Panda$unref$panda$core$Object($tmp5012);
    panda$core$Object* $tmp5022 = (($fn5021) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp5020 = $tmp5022;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp5020), stepField5008);
    panda$core$Panda$unref$panda$core$Object($tmp5020);
    panda$core$String* $tmp5030 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, stepField5008->type);
    panda$core$String* $tmp5029 = $tmp5030;
    panda$core$String* $tmp5031 = panda$core$String$convert$R$panda$core$String($tmp5029);
    panda$core$String* $tmp5028 = $tmp5031;
    panda$core$String* $tmp5033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5028, &$s5032);
    panda$core$String* $tmp5027 = $tmp5033;
    panda$core$String* $tmp5034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5027, step4987);
    panda$core$String* $tmp5026 = $tmp5034;
    panda$core$String* $tmp5036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5026, &$s5035);
    panda$core$String* $tmp5025 = $tmp5036;
    panda$core$String* $tmp5037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5025, range4844);
    panda$core$String* $tmp5024 = $tmp5037;
    panda$core$String* $tmp5039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5024, &$s5038);
    panda$core$String* $tmp5023 = $tmp5039;
    (($fn5040) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5023);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5023));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5024));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5025));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5026));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5027));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5028));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5029));
    panda$core$String* $tmp5044 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp5043 = $tmp5044;
    panda$core$String* $tmp5042 = $tmp5043;
    inclusive5041 = $tmp5042;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5042));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5043));
    panda$core$String* $tmp5050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5049, inclusive5041);
    panda$core$String* $tmp5048 = $tmp5050;
    panda$core$String* $tmp5052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5048, &$s5051);
    panda$core$String* $tmp5047 = $tmp5052;
    panda$core$String* $tmp5053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5047, range4844);
    panda$core$String* $tmp5046 = $tmp5053;
    panda$core$String* $tmp5055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5046, &$s5054);
    panda$core$String* $tmp5045 = $tmp5055;
    (($fn5056) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5045);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5045));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5046));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5047));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5048));
    panda$core$String* $tmp5060 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5059 = $tmp5060;
    panda$core$String* $tmp5058 = $tmp5059;
    loopStart5057 = $tmp5058;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5058));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5059));
    panda$core$String* $tmp5064 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5063 = $tmp5064;
    panda$core$String* $tmp5062 = $tmp5063;
    loopBody5061 = $tmp5062;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5062));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5063));
    panda$core$String* $tmp5068 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5067 = $tmp5068;
    panda$core$String* $tmp5066 = $tmp5067;
    loopEnd5065 = $tmp5066;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5066));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5067));
    panda$core$String* $tmp5072 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5071 = $tmp5072;
    panda$core$String* $tmp5070 = $tmp5071;
    loopTest5069 = $tmp5070;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5070));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5071));
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp5074 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5074, p_label, loopEnd5065, loopTest5069);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp5073 = $tmp5074;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5073));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5073));
    panda$core$String* $tmp5078 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5077 = $tmp5078;
    panda$core$String* $tmp5076 = $tmp5077;
    forwardEntry5075 = $tmp5076;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5076));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5077));
    panda$core$String* $tmp5082 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5081 = $tmp5082;
    panda$core$String* $tmp5080 = $tmp5081;
    backwardEntry5079 = $tmp5080;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5080));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5081));
    memset(&unsigned5083, 0, sizeof(unsigned5083));
    memset(&signPrefix5084, 0, sizeof(signPrefix5084));
    panda$core$Bit $tmp5086 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType4855)->name, &$s5085);
    if ($tmp5086.value) {
    {
        {
            panda$core$String* $tmp5087 = signPrefix5084;
            panda$core$String* $tmp5088 = &$s5089;
            signPrefix5084 = $tmp5088;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5088));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5087));
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp5092 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType4855)->name, &$s5091);
        bool $tmp5090 = $tmp5092.value;
        if ($tmp5090) goto $l5093;
        panda$core$Bit $tmp5095 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType4855)->name, &$s5094);
        $tmp5090 = $tmp5095.value;
        $l5093:;
        panda$core$Bit $tmp5096 = { $tmp5090 };
        PANDA_ASSERT($tmp5096.value);
        {
            panda$core$String* $tmp5097 = signPrefix5084;
            panda$core$String* $tmp5098 = &$s5099;
            signPrefix5084 = $tmp5098;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5098));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5097));
        }
    }
    }
    panda$core$Bit $tmp5101 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(numberType4910, &$s5100);
    if ($tmp5101.value) {
    {
        {
            panda$core$String* $tmp5102 = unsigned5083;
            panda$core$String* $tmp5103 = numberType4910;
            unsigned5083 = $tmp5103;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5103));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5102));
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp5104 = unsigned5083;
            panda$core$String* $tmp5108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5107, numberType4910);
            panda$core$String* $tmp5106 = $tmp5108;
            panda$core$String* $tmp5105 = $tmp5106;
            unsigned5083 = $tmp5105;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5105));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5106));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5104));
        }
    }
    }
    memset(&direction5109, 0, sizeof(direction5109));
    panda$core$Bit $tmp5111 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix5084, &$s5110);
    if ($tmp5111.value) {
    {
        {
            panda$core$String* $tmp5112 = direction5109;
            panda$core$String* $tmp5115 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            panda$core$String* $tmp5114 = $tmp5115;
            panda$core$String* $tmp5113 = $tmp5114;
            direction5109 = $tmp5113;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5113));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5114));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5112));
        }
        panda$core$String* $tmp5121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5120, direction5109);
        panda$core$String* $tmp5119 = $tmp5121;
        panda$core$String* $tmp5123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5119, &$s5122);
        panda$core$String* $tmp5118 = $tmp5123;
        panda$core$String* $tmp5124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5118, step4987);
        panda$core$String* $tmp5117 = $tmp5124;
        panda$core$String* $tmp5126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5117, &$s5125);
        panda$core$String* $tmp5116 = $tmp5126;
        (($fn5127) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5116);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5116));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5117));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5118));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5119));
    }
    }
    else {
    {
        {
            panda$core$String* $tmp5128 = direction5109;
            panda$core$String* $tmp5129 = &$s5130;
            direction5109 = $tmp5129;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5129));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5128));
        }
    }
    }
    panda$core$String* $tmp5138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5137, direction5109);
    panda$core$String* $tmp5136 = $tmp5138;
    panda$core$String* $tmp5140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5136, &$s5139);
    panda$core$String* $tmp5135 = $tmp5140;
    panda$core$String* $tmp5141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5135, forwardEntry5075);
    panda$core$String* $tmp5134 = $tmp5141;
    panda$core$String* $tmp5143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5134, &$s5142);
    panda$core$String* $tmp5133 = $tmp5143;
    panda$core$String* $tmp5144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5133, backwardEntry5079);
    panda$core$String* $tmp5132 = $tmp5144;
    panda$core$String* $tmp5146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5132, &$s5145);
    panda$core$String* $tmp5131 = $tmp5146;
    (($fn5147) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5131);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5131));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5132));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5133));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5134));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5135));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5136));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry5075, p_out);
    panda$core$String* $tmp5151 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5150 = $tmp5151;
    panda$core$String* $tmp5149 = $tmp5150;
    forwardEntryInclusive5148 = $tmp5149;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5149));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5150));
    panda$core$String* $tmp5155 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5154 = $tmp5155;
    panda$core$String* $tmp5153 = $tmp5154;
    forwardEntryExclusive5152 = $tmp5153;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5153));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5154));
    panda$core$String* $tmp5162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5161, inclusive5041);
    panda$core$String* $tmp5160 = $tmp5162;
    panda$core$String* $tmp5164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5160, &$s5163);
    panda$core$String* $tmp5159 = $tmp5164;
    panda$core$String* $tmp5165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5159, forwardEntryInclusive5148);
    panda$core$String* $tmp5158 = $tmp5165;
    panda$core$String* $tmp5167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5158, &$s5166);
    panda$core$String* $tmp5157 = $tmp5167;
    panda$core$String* $tmp5170 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive5152);
    panda$core$String* $tmp5169 = $tmp5170;
    panda$core$String* $tmp5172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5169, &$s5171);
    panda$core$String* $tmp5168 = $tmp5172;
    panda$core$String* $tmp5173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5157, $tmp5168);
    panda$core$String* $tmp5156 = $tmp5173;
    (($fn5174) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5156);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5156));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5168));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5169));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5157));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5158));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5159));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5160));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive5148, p_out);
    panda$core$String* $tmp5184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5183, start4923);
    panda$core$String* $tmp5182 = $tmp5184;
    panda$core$String* $tmp5186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5182, &$s5185);
    panda$core$String* $tmp5181 = $tmp5186;
    panda$core$String* $tmp5187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5181, end4967);
    panda$core$String* $tmp5180 = $tmp5187;
    panda$core$String* $tmp5189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5180, &$s5188);
    panda$core$String* $tmp5179 = $tmp5189;
    panda$core$String* $tmp5190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5179, loopStart5057);
    panda$core$String* $tmp5178 = $tmp5190;
    panda$core$String* $tmp5192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5178, &$s5191);
    panda$core$String* $tmp5177 = $tmp5192;
    panda$core$String* $tmp5193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5177, loopEnd5065);
    panda$core$String* $tmp5176 = $tmp5193;
    panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5176, &$s5194);
    panda$core$String* $tmp5175 = $tmp5195;
    (($fn5196) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5175);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5175));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5176));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5177));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5178));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5179));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5180));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5181));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5182));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive5152, p_out);
    panda$core$String* $tmp5206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5205, start4923);
    panda$core$String* $tmp5204 = $tmp5206;
    panda$core$String* $tmp5208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5204, &$s5207);
    panda$core$String* $tmp5203 = $tmp5208;
    panda$core$String* $tmp5209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5203, end4967);
    panda$core$String* $tmp5202 = $tmp5209;
    panda$core$String* $tmp5211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5202, &$s5210);
    panda$core$String* $tmp5201 = $tmp5211;
    panda$core$String* $tmp5212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5201, loopStart5057);
    panda$core$String* $tmp5200 = $tmp5212;
    panda$core$String* $tmp5214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5200, &$s5213);
    panda$core$String* $tmp5199 = $tmp5214;
    panda$core$String* $tmp5215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5199, loopEnd5065);
    panda$core$String* $tmp5198 = $tmp5215;
    panda$core$String* $tmp5217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5198, &$s5216);
    panda$core$String* $tmp5197 = $tmp5217;
    (($fn5218) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5197);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5197));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5198));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5199));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5200));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5201));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5202));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5203));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5204));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry5079, p_out);
    panda$core$String* $tmp5222 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5221 = $tmp5222;
    panda$core$String* $tmp5220 = $tmp5221;
    backwardEntryInclusive5219 = $tmp5220;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5220));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5221));
    panda$core$String* $tmp5226 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5225 = $tmp5226;
    panda$core$String* $tmp5224 = $tmp5225;
    backwardEntryExclusive5223 = $tmp5224;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5224));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5225));
    panda$core$String* $tmp5233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5232, inclusive5041);
    panda$core$String* $tmp5231 = $tmp5233;
    panda$core$String* $tmp5235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5231, &$s5234);
    panda$core$String* $tmp5230 = $tmp5235;
    panda$core$String* $tmp5236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5230, backwardEntryInclusive5219);
    panda$core$String* $tmp5229 = $tmp5236;
    panda$core$String* $tmp5238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5229, &$s5237);
    panda$core$String* $tmp5228 = $tmp5238;
    panda$core$String* $tmp5241 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive5223);
    panda$core$String* $tmp5240 = $tmp5241;
    panda$core$String* $tmp5243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5240, &$s5242);
    panda$core$String* $tmp5239 = $tmp5243;
    panda$core$String* $tmp5244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5228, $tmp5239);
    panda$core$String* $tmp5227 = $tmp5244;
    (($fn5245) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5227);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5227));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5239));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5240));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5228));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5229));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5230));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5231));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive5219, p_out);
    panda$core$String* $tmp5255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5254, start4923);
    panda$core$String* $tmp5253 = $tmp5255;
    panda$core$String* $tmp5257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5253, &$s5256);
    panda$core$String* $tmp5252 = $tmp5257;
    panda$core$String* $tmp5258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5252, end4967);
    panda$core$String* $tmp5251 = $tmp5258;
    panda$core$String* $tmp5260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5251, &$s5259);
    panda$core$String* $tmp5250 = $tmp5260;
    panda$core$String* $tmp5261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5250, loopStart5057);
    panda$core$String* $tmp5249 = $tmp5261;
    panda$core$String* $tmp5263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5249, &$s5262);
    panda$core$String* $tmp5248 = $tmp5263;
    panda$core$String* $tmp5264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5248, loopEnd5065);
    panda$core$String* $tmp5247 = $tmp5264;
    panda$core$String* $tmp5266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5247, &$s5265);
    panda$core$String* $tmp5246 = $tmp5266;
    (($fn5267) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5246);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5246));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5247));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5248));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5249));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5250));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5251));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5252));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5253));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive5223, p_out);
    panda$core$String* $tmp5271 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp5270 = $tmp5271;
    panda$core$String* $tmp5269 = $tmp5270;
    backwardEntryExclusiveTest5268 = $tmp5269;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5269));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5270));
    panda$core$String* $tmp5281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5280, start4923);
    panda$core$String* $tmp5279 = $tmp5281;
    panda$core$String* $tmp5283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5279, &$s5282);
    panda$core$String* $tmp5278 = $tmp5283;
    panda$core$String* $tmp5284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5278, end4967);
    panda$core$String* $tmp5277 = $tmp5284;
    panda$core$String* $tmp5286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5277, &$s5285);
    panda$core$String* $tmp5276 = $tmp5286;
    panda$core$String* $tmp5287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5276, loopStart5057);
    panda$core$String* $tmp5275 = $tmp5287;
    panda$core$String* $tmp5289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5275, &$s5288);
    panda$core$String* $tmp5274 = $tmp5289;
    panda$core$String* $tmp5290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5274, loopEnd5065);
    panda$core$String* $tmp5273 = $tmp5290;
    panda$core$String* $tmp5292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5273, &$s5291);
    panda$core$String* $tmp5272 = $tmp5292;
    (($fn5293) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5272);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5272));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5273));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5274));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5275));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5276));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5277));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5278));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5279));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5057, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest5069, p_out);
    panda$core$String* $tmp5297 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5296 = $tmp5297;
    panda$core$String* $tmp5295 = $tmp5296;
    loopInc5294 = $tmp5295;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5295));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5296));
    panda$core$String* $tmp5301 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5300 = $tmp5301;
    panda$core$String* $tmp5299 = $tmp5300;
    forwardLabel5298 = $tmp5299;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5299));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5300));
    panda$core$String* $tmp5305 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5304 = $tmp5305;
    panda$core$String* $tmp5303 = $tmp5304;
    backwardLabel5302 = $tmp5303;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5303));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5304));
    panda$core$String* $tmp5313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5312, direction5109);
    panda$core$String* $tmp5311 = $tmp5313;
    panda$core$String* $tmp5315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5311, &$s5314);
    panda$core$String* $tmp5310 = $tmp5315;
    panda$core$String* $tmp5316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5310, forwardLabel5298);
    panda$core$String* $tmp5309 = $tmp5316;
    panda$core$String* $tmp5318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5309, &$s5317);
    panda$core$String* $tmp5308 = $tmp5318;
    panda$core$String* $tmp5319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5308, backwardLabel5302);
    panda$core$String* $tmp5307 = $tmp5319;
    panda$core$String* $tmp5321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5307, &$s5320);
    panda$core$String* $tmp5306 = $tmp5321;
    (($fn5322) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5306);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5306));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5307));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5308));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5309));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5310));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5311));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel5298, p_out);
    panda$core$String* $tmp5326 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp5325 = $tmp5326;
    panda$core$String* $tmp5324 = $tmp5325;
    forwardDelta5323 = $tmp5324;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5324));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5325));
    panda$core$String* $tmp5335 = panda$core$String$convert$R$panda$core$String(numberType4910);
    panda$core$String* $tmp5334 = $tmp5335;
    panda$core$String* $tmp5337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5334, &$s5336);
    panda$core$String* $tmp5333 = $tmp5337;
    panda$core$String* $tmp5338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5333, forwardDelta5323);
    panda$core$String* $tmp5332 = $tmp5338;
    panda$core$String* $tmp5340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5332, &$s5339);
    panda$core$String* $tmp5331 = $tmp5340;
    panda$core$String* $tmp5341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5331, end4967);
    panda$core$String* $tmp5330 = $tmp5341;
    panda$core$String* $tmp5343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5330, &$s5342);
    panda$core$String* $tmp5329 = $tmp5343;
    panda$core$String* $tmp5344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5329, index4914);
    panda$core$String* $tmp5328 = $tmp5344;
    panda$core$String* $tmp5346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5328, &$s5345);
    panda$core$String* $tmp5327 = $tmp5346;
    (($fn5347) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5327);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5327));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5328));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5329));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5330));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5331));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5332));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5333));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5334));
    panda$core$String* $tmp5351 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5350 = $tmp5351;
    panda$core$String* $tmp5349 = $tmp5350;
    forwardInclusiveLabel5348 = $tmp5349;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5349));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5350));
    panda$core$String* $tmp5355 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5354 = $tmp5355;
    panda$core$String* $tmp5353 = $tmp5354;
    forwardExclusiveLabel5352 = $tmp5353;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5353));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5354));
    panda$core$String* $tmp5362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5361, inclusive5041);
    panda$core$String* $tmp5360 = $tmp5362;
    panda$core$String* $tmp5364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5360, &$s5363);
    panda$core$String* $tmp5359 = $tmp5364;
    panda$core$String* $tmp5365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5359, forwardInclusiveLabel5348);
    panda$core$String* $tmp5358 = $tmp5365;
    panda$core$String* $tmp5367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5358, &$s5366);
    panda$core$String* $tmp5357 = $tmp5367;
    panda$core$String* $tmp5370 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel5352);
    panda$core$String* $tmp5369 = $tmp5370;
    panda$core$String* $tmp5372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5369, &$s5371);
    panda$core$String* $tmp5368 = $tmp5372;
    panda$core$String* $tmp5373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5357, $tmp5368);
    panda$core$String* $tmp5356 = $tmp5373;
    (($fn5374) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5356);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5356));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5368));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5369));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5357));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5358));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5359));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5360));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel5348, p_out);
    panda$core$String* $tmp5385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5384, unsigned5083);
    panda$core$String* $tmp5383 = $tmp5385;
    panda$core$String* $tmp5387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5383, &$s5386);
    panda$core$String* $tmp5382 = $tmp5387;
    panda$core$String* $tmp5388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5382, forwardDelta5323);
    panda$core$String* $tmp5381 = $tmp5388;
    panda$core$String* $tmp5390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5381, &$s5389);
    panda$core$String* $tmp5380 = $tmp5390;
    panda$core$String* $tmp5391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5380, step4987);
    panda$core$String* $tmp5379 = $tmp5391;
    panda$core$String* $tmp5393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5379, &$s5392);
    panda$core$String* $tmp5378 = $tmp5393;
    panda$core$String* $tmp5394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5378, loopInc5294);
    panda$core$String* $tmp5377 = $tmp5394;
    panda$core$String* $tmp5396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5377, &$s5395);
    panda$core$String* $tmp5376 = $tmp5396;
    panda$core$String* $tmp5399 = panda$core$String$convert$R$panda$core$String(loopEnd5065);
    panda$core$String* $tmp5398 = $tmp5399;
    panda$core$String* $tmp5401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5398, &$s5400);
    panda$core$String* $tmp5397 = $tmp5401;
    panda$core$String* $tmp5402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5376, $tmp5397);
    panda$core$String* $tmp5375 = $tmp5402;
    (($fn5403) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5375);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5375));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5397));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5398));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5376));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5377));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5378));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5379));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5380));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5381));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5382));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5383));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel5352, p_out);
    panda$core$String* $tmp5407 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp5406 = $tmp5407;
    panda$core$String* $tmp5405 = $tmp5406;
    forwardExclusiveTest5404 = $tmp5405;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5405));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5406));
    panda$core$String* $tmp5418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5417, unsigned5083);
    panda$core$String* $tmp5416 = $tmp5418;
    panda$core$String* $tmp5420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5416, &$s5419);
    panda$core$String* $tmp5415 = $tmp5420;
    panda$core$String* $tmp5421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5415, forwardDelta5323);
    panda$core$String* $tmp5414 = $tmp5421;
    panda$core$String* $tmp5423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5414, &$s5422);
    panda$core$String* $tmp5413 = $tmp5423;
    panda$core$String* $tmp5424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5413, step4987);
    panda$core$String* $tmp5412 = $tmp5424;
    panda$core$String* $tmp5426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5412, &$s5425);
    panda$core$String* $tmp5411 = $tmp5426;
    panda$core$String* $tmp5427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5411, loopInc5294);
    panda$core$String* $tmp5410 = $tmp5427;
    panda$core$String* $tmp5429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5410, &$s5428);
    panda$core$String* $tmp5409 = $tmp5429;
    panda$core$String* $tmp5432 = panda$core$String$convert$R$panda$core$String(loopEnd5065);
    panda$core$String* $tmp5431 = $tmp5432;
    panda$core$String* $tmp5434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5431, &$s5433);
    panda$core$String* $tmp5430 = $tmp5434;
    panda$core$String* $tmp5435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5409, $tmp5430);
    panda$core$String* $tmp5408 = $tmp5435;
    (($fn5436) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5408);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5408));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5430));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5431));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5409));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5410));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5411));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5412));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5413));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5414));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5415));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5416));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel5302, p_out);
    panda$core$String* $tmp5440 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp5439 = $tmp5440;
    panda$core$String* $tmp5438 = $tmp5439;
    backwardDelta5437 = $tmp5438;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5438));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5439));
    panda$core$String* $tmp5449 = panda$core$String$convert$R$panda$core$String(numberType4910);
    panda$core$String* $tmp5448 = $tmp5449;
    panda$core$String* $tmp5451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5448, &$s5450);
    panda$core$String* $tmp5447 = $tmp5451;
    panda$core$String* $tmp5452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5447, backwardDelta5437);
    panda$core$String* $tmp5446 = $tmp5452;
    panda$core$String* $tmp5454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5446, &$s5453);
    panda$core$String* $tmp5445 = $tmp5454;
    panda$core$String* $tmp5455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5445, index4914);
    panda$core$String* $tmp5444 = $tmp5455;
    panda$core$String* $tmp5457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5444, &$s5456);
    panda$core$String* $tmp5443 = $tmp5457;
    panda$core$String* $tmp5458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5443, end4967);
    panda$core$String* $tmp5442 = $tmp5458;
    panda$core$String* $tmp5460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5442, &$s5459);
    panda$core$String* $tmp5441 = $tmp5460;
    (($fn5461) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5441);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5441));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5442));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5443));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5444));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5445));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5446));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5447));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5448));
    panda$core$String* $tmp5465 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5464 = $tmp5465;
    panda$core$String* $tmp5463 = $tmp5464;
    backwardInclusiveLabel5462 = $tmp5463;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5463));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5464));
    panda$core$String* $tmp5469 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5468 = $tmp5469;
    panda$core$String* $tmp5467 = $tmp5468;
    backwardExclusiveLabel5466 = $tmp5467;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5467));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5468));
    panda$core$String* $tmp5476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5475, inclusive5041);
    panda$core$String* $tmp5474 = $tmp5476;
    panda$core$String* $tmp5478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5474, &$s5477);
    panda$core$String* $tmp5473 = $tmp5478;
    panda$core$String* $tmp5479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5473, backwardInclusiveLabel5462);
    panda$core$String* $tmp5472 = $tmp5479;
    panda$core$String* $tmp5481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5472, &$s5480);
    panda$core$String* $tmp5471 = $tmp5481;
    panda$core$String* $tmp5484 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel5466);
    panda$core$String* $tmp5483 = $tmp5484;
    panda$core$String* $tmp5486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5483, &$s5485);
    panda$core$String* $tmp5482 = $tmp5486;
    panda$core$String* $tmp5487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5471, $tmp5482);
    panda$core$String* $tmp5470 = $tmp5487;
    (($fn5488) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5470);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5470));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5482));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5483));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5471));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5472));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5473));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5474));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel5462, p_out);
    panda$core$String* $tmp5499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5498, unsigned5083);
    panda$core$String* $tmp5497 = $tmp5499;
    panda$core$String* $tmp5501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5497, &$s5500);
    panda$core$String* $tmp5496 = $tmp5501;
    panda$core$String* $tmp5502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5496, backwardDelta5437);
    panda$core$String* $tmp5495 = $tmp5502;
    panda$core$String* $tmp5504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5495, &$s5503);
    panda$core$String* $tmp5494 = $tmp5504;
    panda$core$String* $tmp5505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5494, step4987);
    panda$core$String* $tmp5493 = $tmp5505;
    panda$core$String* $tmp5507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5493, &$s5506);
    panda$core$String* $tmp5492 = $tmp5507;
    panda$core$String* $tmp5508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5492, loopInc5294);
    panda$core$String* $tmp5491 = $tmp5508;
    panda$core$String* $tmp5510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5491, &$s5509);
    panda$core$String* $tmp5490 = $tmp5510;
    panda$core$String* $tmp5514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5513, loopEnd5065);
    panda$core$String* $tmp5512 = $tmp5514;
    panda$core$String* $tmp5516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5512, &$s5515);
    panda$core$String* $tmp5511 = $tmp5516;
    panda$core$String* $tmp5517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5490, $tmp5511);
    panda$core$String* $tmp5489 = $tmp5517;
    (($fn5518) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5489);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5489));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5511));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5512));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5490));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5491));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5492));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5493));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5494));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5495));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5496));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5497));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel5466, p_out);
    panda$core$String* $tmp5529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5528, unsigned5083);
    panda$core$String* $tmp5527 = $tmp5529;
    panda$core$String* $tmp5531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5527, &$s5530);
    panda$core$String* $tmp5526 = $tmp5531;
    panda$core$String* $tmp5532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5526, backwardDelta5437);
    panda$core$String* $tmp5525 = $tmp5532;
    panda$core$String* $tmp5534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5525, &$s5533);
    panda$core$String* $tmp5524 = $tmp5534;
    panda$core$String* $tmp5535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5524, step4987);
    panda$core$String* $tmp5523 = $tmp5535;
    panda$core$String* $tmp5537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5523, &$s5536);
    panda$core$String* $tmp5522 = $tmp5537;
    panda$core$String* $tmp5538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5522, loopInc5294);
    panda$core$String* $tmp5521 = $tmp5538;
    panda$core$String* $tmp5540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5521, &$s5539);
    panda$core$String* $tmp5520 = $tmp5540;
    panda$core$String* $tmp5544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5543, loopEnd5065);
    panda$core$String* $tmp5542 = $tmp5544;
    panda$core$String* $tmp5546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5542, &$s5545);
    panda$core$String* $tmp5541 = $tmp5546;
    panda$core$String* $tmp5547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5520, $tmp5541);
    panda$core$String* $tmp5519 = $tmp5547;
    (($fn5548) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5519);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5519));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5541));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5542));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5520));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5521));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5522));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5523));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5524));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5525));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5526));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5527));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc5294, p_out);
    panda$core$String* $tmp5552 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp5551 = $tmp5552;
    panda$core$String* $tmp5550 = $tmp5551;
    inc5549 = $tmp5550;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5550));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5551));
    panda$core$String* $tmp5557 = panda$core$String$convert$R$panda$core$String(index4914);
    panda$core$String* $tmp5556 = $tmp5557;
    panda$core$String* $tmp5559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5556, &$s5558);
    panda$core$String* $tmp5555 = $tmp5559;
    panda$core$String* $tmp5560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5555, step4987);
    panda$core$String* $tmp5554 = $tmp5560;
    panda$core$String* $tmp5562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5554, &$s5561);
    panda$core$String* $tmp5553 = $tmp5562;
    (($fn5563) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5553);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5553));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5554));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5555));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5556));
    panda$core$String* $tmp5567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5566, loopStart5057);
    panda$core$String* $tmp5565 = $tmp5567;
    panda$core$String* $tmp5569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5565, &$s5568);
    panda$core$String* $tmp5564 = $tmp5569;
    (($fn5570) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5564);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5564));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5565));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5065, p_out);
    panda$core$Object* $tmp5572 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    panda$core$Object* $tmp5571 = $tmp5572;
    panda$core$Panda$unref$panda$core$Object($tmp5571);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardInclusiveLabel5462));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) signPrefix5084));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveLabel5352));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inclusive5041));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) unsigned5083));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardLabel5302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryExclusiveTest5268));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start4923));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopBody5061));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardLabel5298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopTest5069));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryExclusive5223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryInclusive5148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardExclusiveLabel5466));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4848));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardInclusiveLabel5348));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) end4967));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepCl4991));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inc5549));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step4987));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart5057));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntry5079));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexValuePtr4943));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopInc5294));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepType4855));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd5065));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stepField5008));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indexType4866));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llt4862));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardDelta5437));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardExclusiveTest5404));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) numberType4910));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntry5075));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) index4914));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardEntryExclusive5152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) direction5109));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field4895));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) forwardDelta5323));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl4878));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) backwardEntryInclusive5219));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) range4844));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$1587_94915));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Type* $tmp5575 = (($fn5574) p_list->$class->vtable[2])(p_list);
    org$pandalanguage$pandac$Type* $tmp5573 = $tmp5575;
    panda$core$Bit $tmp5576 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit($tmp5573);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5573));
    if ($tmp5576.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_label, p_target, p_list, p_statements, p_out);
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp5579 = (($fn5578) p_list->$class->vtable[2])(p_list);
    org$pandalanguage$pandac$Type* $tmp5577 = $tmp5579;
    panda$core$Bit $tmp5580 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit($tmp5577);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5577));
    if ($tmp5580.value) {
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
    panda$core$String* loopStart5587;
    panda$core$String* loopEnd5591;
    panda$core$String* testVar5599;
    org$pandalanguage$pandac$Type* $tmp5583 = (($fn5582) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp5581 = $tmp5583;
    org$pandalanguage$pandac$Type* $tmp5585 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp5584 = $tmp5585;
    panda$core$Bit $tmp5586 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp5581, $tmp5584);
    PANDA_ASSERT($tmp5586.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5584));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5581));
    panda$core$String* $tmp5590 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5589 = $tmp5590;
    panda$core$String* $tmp5588 = $tmp5589;
    loopStart5587 = $tmp5588;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5588));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5589));
    panda$core$String* $tmp5594 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5593 = $tmp5594;
    panda$core$String* $tmp5592 = $tmp5593;
    loopEnd5591 = $tmp5592;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5592));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5593));
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp5596 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5596, p_label, loopEnd5591, loopStart5587);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp5595 = $tmp5596;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5595));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5595));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5587, p_out);
    panda$collections$Array* $tmp5598 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp5598);
    panda$collections$Array* $tmp5597 = $tmp5598;
    panda$collections$Stack$push$panda$collections$Stack$T(self->extraEffects, ((panda$core$Object*) $tmp5597));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5597));
    panda$core$String* $tmp5602 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp5601 = $tmp5602;
    panda$core$String* $tmp5600 = $tmp5601;
    testVar5599 = $tmp5600;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5600));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5601));
    panda$core$String* $tmp5608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5607, testVar5599);
    panda$core$String* $tmp5606 = $tmp5608;
    panda$core$String* $tmp5610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5606, &$s5609);
    panda$core$String* $tmp5605 = $tmp5610;
    panda$core$String* $tmp5612 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp5611 = $tmp5612;
    panda$core$String* $tmp5613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5605, $tmp5611);
    panda$core$String* $tmp5604 = $tmp5613;
    panda$core$String* $tmp5615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5604, &$s5614);
    panda$core$String* $tmp5603 = $tmp5615;
    (($fn5616) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5603);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5603));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5604));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5611));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5605));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5606));
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp5622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5621, testVar5599);
    panda$core$String* $tmp5620 = $tmp5622;
    panda$core$String* $tmp5624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5620, &$s5623);
    panda$core$String* $tmp5619 = $tmp5624;
    panda$core$String* $tmp5625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5619, loopEnd5591);
    panda$core$String* $tmp5618 = $tmp5625;
    panda$core$String* $tmp5627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5618, &$s5626);
    panda$core$String* $tmp5617 = $tmp5627;
    (($fn5628) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5617);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5617));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5618));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5619));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5620));
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp5632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5631, loopStart5587);
    panda$core$String* $tmp5630 = $tmp5632;
    panda$core$String* $tmp5634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5630, &$s5633);
    panda$core$String* $tmp5629 = $tmp5634;
    (($fn5635) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5629);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5629));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5630));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5591, p_out);
    panda$core$Object* $tmp5637 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    panda$core$Object* $tmp5636 = $tmp5637;
    panda$core$Panda$unref$panda$core$Object($tmp5636);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd5591));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart5587));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testVar5599));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5644;
    panda$core$String* loopEnd5648;
    panda$core$String* testVar5656;
    org$pandalanguage$pandac$Type* $tmp5640 = (($fn5639) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp5638 = $tmp5640;
    org$pandalanguage$pandac$Type* $tmp5642 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp5641 = $tmp5642;
    panda$core$Bit $tmp5643 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp5638, $tmp5641);
    PANDA_ASSERT($tmp5643.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5641));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5638));
    panda$core$String* $tmp5647 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5646 = $tmp5647;
    panda$core$String* $tmp5645 = $tmp5646;
    loopStart5644 = $tmp5645;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5645));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5646));
    panda$core$String* $tmp5651 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5650 = $tmp5651;
    panda$core$String* $tmp5649 = $tmp5650;
    loopEnd5648 = $tmp5649;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5649));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5650));
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp5653 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5653, p_label, loopEnd5648, loopStart5644);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp5652 = $tmp5653;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5652));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5652));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5644, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$collections$Array* $tmp5655 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp5655);
    panda$collections$Array* $tmp5654 = $tmp5655;
    panda$collections$Stack$push$panda$collections$Stack$T(self->extraEffects, ((panda$core$Object*) $tmp5654));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5654));
    panda$core$String* $tmp5659 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$String* $tmp5658 = $tmp5659;
    panda$core$String* $tmp5657 = $tmp5658;
    testVar5656 = $tmp5657;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5657));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5658));
    panda$core$String* $tmp5665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5664, testVar5656);
    panda$core$String* $tmp5663 = $tmp5665;
    panda$core$String* $tmp5667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5663, &$s5666);
    panda$core$String* $tmp5662 = $tmp5667;
    panda$core$String* $tmp5669 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp5668 = $tmp5669;
    panda$core$String* $tmp5670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5662, $tmp5668);
    panda$core$String* $tmp5661 = $tmp5670;
    panda$core$String* $tmp5672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5661, &$s5671);
    panda$core$String* $tmp5660 = $tmp5672;
    (($fn5673) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5660);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5660));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5661));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5668));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5662));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5663));
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
    panda$core$String* $tmp5679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5678, testVar5656);
    panda$core$String* $tmp5677 = $tmp5679;
    panda$core$String* $tmp5681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5677, &$s5680);
    panda$core$String* $tmp5676 = $tmp5681;
    panda$core$String* $tmp5682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5676, loopStart5644);
    panda$core$String* $tmp5675 = $tmp5682;
    panda$core$String* $tmp5684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5675, &$s5683);
    panda$core$String* $tmp5674 = $tmp5684;
    (($fn5685) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5674);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5674));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5675));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5676));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5677));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5648, p_out);
    panda$core$Object* $tmp5687 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    panda$core$Object* $tmp5686 = $tmp5687;
    panda$core$Panda$unref$panda$core$Object($tmp5686);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd5648));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart5644));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) testVar5656));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5688;
    panda$core$String* loopEnd5692;
    panda$core$String* $tmp5691 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5690 = $tmp5691;
    panda$core$String* $tmp5689 = $tmp5690;
    loopStart5688 = $tmp5689;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5689));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5690));
    panda$core$String* $tmp5695 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$String* $tmp5694 = $tmp5695;
    panda$core$String* $tmp5693 = $tmp5694;
    loopEnd5692 = $tmp5693;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5693));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5694));
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp5697 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5697, p_label, loopEnd5692, loopStart5688);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp5696 = $tmp5697;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5696));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5696));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5688, p_out);
    (($fn5699) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5698);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    (($fn5701) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5700);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5692, p_out);
    panda$core$Object* $tmp5703 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
    panda$core$Object* $tmp5702 = $tmp5703;
    panda$core$Panda$unref$panda$core$Object($tmp5702);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopEnd5692));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) loopStart5688));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1797_95704;
    org$pandalanguage$pandac$Variable* v5706;
    {
        $match$1797_95704 = p_target;
        panda$core$Bit $tmp5705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1797_95704->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp5705.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp5707 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1797_95704->$data + 16));
            v5706 = *$tmp5707;
            panda$core$String* $tmp5713 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5706->type);
            panda$core$String* $tmp5712 = $tmp5713;
            panda$core$String* $tmp5714 = panda$core$String$convert$R$panda$core$String($tmp5712);
            panda$core$String* $tmp5711 = $tmp5714;
            panda$core$String* $tmp5716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5711, &$s5715);
            panda$core$String* $tmp5710 = $tmp5716;
            panda$core$String* $tmp5718 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5706);
            panda$core$String* $tmp5717 = $tmp5718;
            panda$core$String* $tmp5719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5710, $tmp5717);
            panda$core$String* $tmp5709 = $tmp5719;
            panda$core$String* $tmp5721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5709, &$s5720);
            panda$core$String* $tmp5708 = $tmp5721;
            (($fn5722) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5708);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5708));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5709));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5717));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5710));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5711));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5712));
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5728 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5706);
                panda$core$String* $tmp5727 = $tmp5728;
                panda$core$String* $tmp5729 = panda$core$String$convert$R$panda$core$String($tmp5727);
                panda$core$String* $tmp5726 = $tmp5729;
                panda$core$String* $tmp5731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5726, &$s5730);
                panda$core$String* $tmp5725 = $tmp5731;
                panda$core$String* $tmp5733 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp5732 = $tmp5733;
                panda$core$String* $tmp5734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5725, $tmp5732);
                panda$core$String* $tmp5724 = $tmp5734;
                panda$core$String* $tmp5736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5724, &$s5735);
                panda$core$String* $tmp5723 = $tmp5736;
                (($fn5737) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5723);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5723));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5724));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5732));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5725));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5726));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5727));
            }
            }
            else {
            {
                panda$core$String* $tmp5744 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5706);
                panda$core$String* $tmp5743 = $tmp5744;
                panda$core$String* $tmp5745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5742, $tmp5743);
                panda$core$String* $tmp5741 = $tmp5745;
                panda$core$String* $tmp5747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5741, &$s5746);
                panda$core$String* $tmp5740 = $tmp5747;
                panda$core$String* $tmp5749 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5706);
                panda$core$String* $tmp5748 = $tmp5749;
                panda$core$String* $tmp5750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5740, $tmp5748);
                panda$core$String* $tmp5739 = $tmp5750;
                panda$core$String* $tmp5752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5739, &$s5751);
                panda$core$String* $tmp5738 = $tmp5752;
                (($fn5753) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5738);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5738));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5739));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5748));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5740));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5741));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5743));
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
    panda$collections$Iterator* Iter$1812$95754;
    org$pandalanguage$pandac$IRNode* decl5769;
    org$pandalanguage$pandac$IRNode* $match$1813_135776;
    org$pandalanguage$pandac$IRNode* target5778;
    org$pandalanguage$pandac$IRNode* value5780;
    {
        ITable* $tmp5757 = ((panda$collections$Iterable*) p_decls)->$class->itable;
        while ($tmp5757->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5757 = $tmp5757->next;
        }
        $fn5759 $tmp5758 = $tmp5757->methods[0];
        panda$collections$Iterator* $tmp5760 = $tmp5758(((panda$collections$Iterable*) p_decls));
        panda$collections$Iterator* $tmp5756 = $tmp5760;
        panda$collections$Iterator* $tmp5755 = $tmp5756;
        Iter$1812$95754 = $tmp5755;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5755));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5756));
        $l5761:;
        ITable* $tmp5764 = Iter$1812$95754->$class->itable;
        while ($tmp5764->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5764 = $tmp5764->next;
        }
        $fn5766 $tmp5765 = $tmp5764->methods[0];
        panda$core$Bit $tmp5767 = $tmp5765(Iter$1812$95754);
        panda$core$Bit $tmp5768 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5767);
        bool $tmp5763 = $tmp5768.value;
        if (!$tmp5763) goto $l5762;
        {
            ITable* $tmp5772 = Iter$1812$95754->$class->itable;
            while ($tmp5772->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5772 = $tmp5772->next;
            }
            $fn5774 $tmp5773 = $tmp5772->methods[1];
            panda$core$Object* $tmp5775 = $tmp5773(Iter$1812$95754);
            panda$core$Object* $tmp5771 = $tmp5775;
            org$pandalanguage$pandac$IRNode* $tmp5770 = ((org$pandalanguage$pandac$IRNode*) $tmp5771);
            decl5769 = $tmp5770;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5770));
            panda$core$Panda$unref$panda$core$Object($tmp5771);
            {
                $match$1813_135776 = decl5769;
                panda$core$Bit $tmp5777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1813_135776->$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp5777.value) {
                {
                    org$pandalanguage$pandac$IRNode** $tmp5779 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1813_135776->$data + 0));
                    target5778 = *$tmp5779;
                    org$pandalanguage$pandac$IRNode** $tmp5781 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1813_135776->$data + 8));
                    value5780 = *$tmp5781;
                    org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, target5778, value5780, p_out);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5769));
        }
        goto $l5761;
        $l5762:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1812$95754));
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1823_95782;
    org$pandalanguage$pandac$Variable* v5794;
    org$pandalanguage$pandac$IRNode* base5801;
    org$pandalanguage$pandac$FieldDecl* field5803;
    panda$core$String* baseRef5805;
    panda$core$String* tmp755809;
    org$pandalanguage$pandac$IRNode* value5823;
    panda$core$Int64 id5825;
    panda$core$String* result5827;
    panda$core$String* tmp765833;
    org$pandalanguage$pandac$IRNode* value5837;
    org$pandalanguage$pandac$ChoiceEntry* ce5839;
    panda$core$Int64 field5841;
    org$pandalanguage$pandac$FieldDecl* data5843;
    org$pandalanguage$pandac$IRNode* fieldRef5849;
    panda$core$String* base5855;
    panda$core$Int64 size5859;
    panda$core$Int64 offset5861;
    panda$core$String* result5863;
    panda$core$String* tmp775908;
    {
        $match$1823_95782 = p_lvalue;
        panda$core$Bit $tmp5783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1823_95782->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp5783.value) {
        {
            panda$core$Object* $tmp5790 = (($fn5789) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp5788 = $tmp5790;
            org$pandalanguage$pandac$IRNode* $tmp5791 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(((org$pandalanguage$pandac$Compiler*) $tmp5788), p_lvalue);
            org$pandalanguage$pandac$IRNode* $tmp5787 = $tmp5791;
            panda$core$String* $tmp5792 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp5787, p_out);
            panda$core$String* $tmp5786 = $tmp5792;
            panda$core$String* $tmp5785 = $tmp5786;
            panda$core$String* $tmp5784 = $tmp5785;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5785));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5786));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5787));
            panda$core$Panda$unref$panda$core$Object($tmp5788);
            return $tmp5784;
        }
        }
        else {
        panda$core$Bit $tmp5793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1823_95782->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp5793.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp5795 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1823_95782->$data + 16));
            v5794 = *$tmp5795;
            panda$core$String* $tmp5799 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5794);
            panda$core$String* $tmp5798 = $tmp5799;
            panda$core$String* $tmp5797 = $tmp5798;
            panda$core$String* $tmp5796 = $tmp5797;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5797));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5798));
            return $tmp5796;
        }
        }
        else {
        panda$core$Bit $tmp5800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1823_95782->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp5800.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp5802 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1823_95782->$data + 24));
            base5801 = *$tmp5802;
            org$pandalanguage$pandac$FieldDecl** $tmp5804 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1823_95782->$data + 32));
            field5803 = *$tmp5804;
            panda$core$String* $tmp5808 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base5801, p_out);
            panda$core$String* $tmp5807 = $tmp5808;
            panda$core$String* $tmp5806 = $tmp5807;
            baseRef5805 = $tmp5806;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5806));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5807));
            {
                panda$core$String* $tmp5815 = panda$core$String$convert$R$panda$core$String(baseRef5805);
                panda$core$String* $tmp5814 = $tmp5815;
                panda$core$String* $tmp5817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5814, &$s5816);
                panda$core$String* $tmp5813 = $tmp5817;
                panda$core$String* $tmp5818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5813, ((org$pandalanguage$pandac$Symbol*) field5803)->name);
                panda$core$String* $tmp5812 = $tmp5818;
                panda$core$String* $tmp5820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5812, &$s5819);
                panda$core$String* $tmp5811 = $tmp5820;
                panda$core$String* $tmp5810 = $tmp5811;
                tmp755809 = $tmp5810;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5810));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5811));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5812));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5813));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5814));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) baseRef5805));
                panda$core$String* $tmp5821 = tmp755809;
                return $tmp5821;
            }
        }
        }
        else {
        panda$core$Bit $tmp5822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1823_95782->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp5822.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp5824 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1823_95782->$data + 0));
            value5823 = *$tmp5824;
            panda$core$Int64* $tmp5826 = ((panda$core$Int64*) ((char*) $match$1823_95782->$data + 8));
            id5825 = *$tmp5826;
            panda$core$String* $tmp5830 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value5823, p_out);
            panda$core$String* $tmp5829 = $tmp5830;
            panda$core$String* $tmp5828 = $tmp5829;
            result5827 = $tmp5828;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5828));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5829));
            panda$core$Int64$wrapper* $tmp5832;
            $tmp5832 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp5832->value = id5825;
            panda$collections$Key* $tmp5831 = ((panda$collections$Key*) $tmp5832);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, $tmp5831, ((panda$core$Object*) result5827));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5831));
            {
                panda$core$String* $tmp5834 = result5827;
                tmp765833 = $tmp5834;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5834));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result5827));
                panda$core$String* $tmp5835 = tmp765833;
                return $tmp5835;
            }
        }
        }
        else {
        panda$core$Bit $tmp5836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1823_95782->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp5836.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp5838 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1823_95782->$data + 16));
            value5837 = *$tmp5838;
            org$pandalanguage$pandac$ChoiceEntry** $tmp5840 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$1823_95782->$data + 24));
            ce5839 = *$tmp5840;
            panda$core$Int64* $tmp5842 = ((panda$core$Int64*) ((char*) $match$1823_95782->$data + 32));
            field5841 = *$tmp5842;
            panda$core$Object* $tmp5846 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce5839->owner->fields, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp5845 = $tmp5846;
            org$pandalanguage$pandac$FieldDecl* $tmp5844 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5845);
            data5843 = $tmp5844;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5844));
            panda$core$Panda$unref$panda$core$Object($tmp5845);
            panda$core$Bit $tmp5848 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) data5843)->name, &$s5847);
            PANDA_ASSERT($tmp5848.value);
            org$pandalanguage$pandac$IRNode* $tmp5852 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
            org$pandalanguage$pandac$Position $tmp5854 = (($fn5853) p_lvalue->$class->vtable[3])(p_lvalue);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp5852, ((panda$core$Int64) { 15 }), $tmp5854, data5843->type, value5837, data5843);
            org$pandalanguage$pandac$IRNode* $tmp5851 = $tmp5852;
            org$pandalanguage$pandac$IRNode* $tmp5850 = $tmp5851;
            fieldRef5849 = $tmp5850;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5850));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5851));
            panda$core$String* $tmp5858 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, fieldRef5849, p_out);
            panda$core$String* $tmp5857 = $tmp5858;
            panda$core$String* $tmp5856 = $tmp5857;
            base5855 = $tmp5856;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5856));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5857));
            panda$core$Int64 $tmp5860 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce5839->owner);
            size5859 = $tmp5860;
            panda$core$Int64 $tmp5862 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce5839, field5841);
            offset5861 = $tmp5862;
            panda$core$String* $tmp5866 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            panda$core$String* $tmp5865 = $tmp5866;
            panda$core$String* $tmp5864 = $tmp5865;
            result5863 = $tmp5864;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5864));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5865));
            org$pandalanguage$pandac$Type* $tmp5877 = (($fn5876) p_lvalue->$class->vtable[2])(p_lvalue);
            org$pandalanguage$pandac$Type* $tmp5875 = $tmp5877;
            panda$core$String* $tmp5878 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5875);
            panda$core$String* $tmp5874 = $tmp5878;
            panda$core$String* $tmp5879 = panda$core$String$convert$R$panda$core$String($tmp5874);
            panda$core$String* $tmp5873 = $tmp5879;
            panda$core$String* $tmp5881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5873, &$s5880);
            panda$core$String* $tmp5872 = $tmp5881;
            panda$core$String* $tmp5882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5872, result5863);
            panda$core$String* $tmp5871 = $tmp5882;
            panda$core$String* $tmp5884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5871, &$s5883);
            panda$core$String* $tmp5870 = $tmp5884;
            org$pandalanguage$pandac$Type* $tmp5888 = (($fn5887) p_lvalue->$class->vtable[2])(p_lvalue);
            org$pandalanguage$pandac$Type* $tmp5886 = $tmp5888;
            panda$core$String* $tmp5889 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5886);
            panda$core$String* $tmp5885 = $tmp5889;
            panda$core$String* $tmp5890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5870, $tmp5885);
            panda$core$String* $tmp5869 = $tmp5890;
            panda$core$String* $tmp5892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5869, &$s5891);
            panda$core$String* $tmp5868 = $tmp5892;
            panda$core$String* $tmp5898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5897, base5855);
            panda$core$String* $tmp5896 = $tmp5898;
            panda$core$String* $tmp5900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5896, &$s5899);
            panda$core$String* $tmp5895 = $tmp5900;
            panda$core$Int64$wrapper* $tmp5902;
            $tmp5902 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp5902->value = offset5861;
            panda$core$Object* $tmp5901 = ((panda$core$Object*) $tmp5902);
            panda$core$String* $tmp5903 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5895, $tmp5901);
            panda$core$String* $tmp5894 = $tmp5903;
            panda$core$String* $tmp5905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5894, &$s5904);
            panda$core$String* $tmp5893 = $tmp5905;
            panda$core$String* $tmp5906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5868, $tmp5893);
            panda$core$String* $tmp5867 = $tmp5906;
            (($fn5907) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5867);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5867));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5893));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5894));
            panda$core$Panda$unref$panda$core$Object($tmp5901);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5895));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5896));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5868));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5869));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5885));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5886));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5870));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5871));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5872));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5873));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5874));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5875));
            {
                panda$core$String* $tmp5913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5912, result5863);
                panda$core$String* $tmp5911 = $tmp5913;
                panda$core$String* $tmp5915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5911, &$s5914);
                panda$core$String* $tmp5910 = $tmp5915;
                panda$core$String* $tmp5909 = $tmp5910;
                tmp775908 = $tmp5909;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5909));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5910));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5911));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base5855));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fieldRef5849));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result5863));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data5843));
                }
                panda$core$String* $tmp5916 = tmp775908;
                return $tmp5916;
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
    panda$core$String* $tmp5922 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$String* $tmp5921 = $tmp5922;
    panda$core$String* $tmp5923 = panda$core$String$convert$R$panda$core$String($tmp5921);
    panda$core$String* $tmp5920 = $tmp5923;
    panda$core$String* $tmp5925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5920, &$s5924);
    panda$core$String* $tmp5919 = $tmp5925;
    panda$core$String* $tmp5927 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$String* $tmp5926 = $tmp5927;
    panda$core$String* $tmp5928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5919, $tmp5926);
    panda$core$String* $tmp5918 = $tmp5928;
    panda$core$String* $tmp5930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5918, &$s5929);
    panda$core$String* $tmp5917 = $tmp5930;
    (($fn5931) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5917);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5917));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5918));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5926));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5919));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5920));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5921));
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result5934;
    if (((panda$core$Bit) { p_value != NULL }).value) {
    {
        panda$collections$Array* $tmp5933 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5933);
        panda$collections$Array* $tmp5932 = $tmp5933;
        panda$collections$Stack$push$panda$collections$Stack$T(self->extraEffects, ((panda$core$Object*) $tmp5932));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5932));
        panda$core$String* $tmp5937 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        panda$core$String* $tmp5936 = $tmp5937;
        panda$core$String* $tmp5935 = $tmp5936;
        result5934 = $tmp5935;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5935));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5936));
        org$pandalanguage$pandac$Type* $tmp5947 = (($fn5946) p_value->$class->vtable[2])(p_value);
        org$pandalanguage$pandac$Type* $tmp5945 = $tmp5947;
        panda$core$String* $tmp5948 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5945);
        panda$core$String* $tmp5944 = $tmp5948;
        panda$core$String* $tmp5949 = panda$core$String$convert$R$panda$core$String($tmp5944);
        panda$core$String* $tmp5943 = $tmp5949;
        panda$core$String* $tmp5951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5943, &$s5950);
        panda$core$String* $tmp5942 = $tmp5951;
        panda$core$String* $tmp5952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5942, result5934);
        panda$core$String* $tmp5941 = $tmp5952;
        panda$core$String* $tmp5954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5941, &$s5953);
        panda$core$String* $tmp5940 = $tmp5954;
        panda$core$String* $tmp5956 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
        panda$core$String* $tmp5955 = $tmp5956;
        panda$core$String* $tmp5957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5940, $tmp5955);
        panda$core$String* $tmp5939 = $tmp5957;
        panda$core$String* $tmp5959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5939, &$s5958);
        panda$core$String* $tmp5938 = $tmp5959;
        (($fn5960) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5938);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5938));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5939));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5955));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5940));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5941));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5942));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5943));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5944));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5945));
        org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
        panda$core$String* $tmp5964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5963, result5934);
        panda$core$String* $tmp5962 = $tmp5964;
        panda$core$String* $tmp5966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5962, &$s5965);
        panda$core$String* $tmp5961 = $tmp5966;
        (($fn5967) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5961);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5961));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5962));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result5934));
    }
    }
    else {
    {
        (($fn5969) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5968);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5976;
    panda$core$Int64 $tmp5970 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5971 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5970, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5971.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5975 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        panda$core$Object* $tmp5974 = $tmp5975;
        org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp5973 = ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp5974);
        org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp5972 = $tmp5973;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5973));
        panda$core$Panda$unref$panda$core$Object($tmp5974);
        return $tmp5972;
    }
    }
    panda$core$Int64 $tmp5977 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5976, ((panda$core$Int64) { 0 }), $tmp5977, ((panda$core$Bit) { false }));
    int64_t $tmp5979 = $tmp5976.min.value;
    panda$core$Int64 i5978 = { $tmp5979 };
    int64_t $tmp5981 = $tmp5976.max.value;
    bool $tmp5982 = $tmp5976.inclusive.value;
    if ($tmp5982) goto $l5989; else goto $l5990;
    $l5989:;
    if ($tmp5979 <= $tmp5981) goto $l5983; else goto $l5985;
    $l5990:;
    if ($tmp5979 < $tmp5981) goto $l5983; else goto $l5985;
    $l5983:;
    {
        panda$core$Object* $tmp5993 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5978);
        panda$core$Object* $tmp5992 = $tmp5993;
        panda$core$String* $tmp5991 = ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp5992)->loopLabel;
        panda$core$Panda$unref$panda$core$Object($tmp5992);
        panda$core$Bit $tmp5997;
        if (((panda$core$Bit) { $tmp5991 != NULL }).value) goto $l5994; else goto $l5995;
        $l5994:;
        panda$core$Bit $tmp5998 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp5991, p_name);
        $tmp5997 = $tmp5998;
        goto $l5996;
        $l5995:;
        $tmp5997 = ((panda$core$Bit) { false });
        goto $l5996;
        $l5996:;
        if ($tmp5997.value) {
        {
            panda$core$Object* $tmp6002 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5978);
            panda$core$Object* $tmp6001 = $tmp6002;
            org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp6000 = ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp6001);
            org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp5999 = $tmp6000;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6000));
            panda$core$Panda$unref$panda$core$Object($tmp6001);
            return $tmp5999;
        }
        }
    }
    $l5986:;
    int64_t $tmp6004 = $tmp5981 - i5978.value;
    if ($tmp5982) goto $l6005; else goto $l6006;
    $l6005:;
    if ((uint64_t) $tmp6004 >= 1) goto $l6003; else goto $l5985;
    $l6006:;
    if ((uint64_t) $tmp6004 > 1) goto $l6003; else goto $l5985;
    $l6003:;
    i5978.value += 1;
    goto $l5983;
    $l5985:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc6009;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp6012 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp6011 = $tmp6012;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp6010 = $tmp6011;
    desc6009 = $tmp6010;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6010));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6011));
    panda$core$String* $tmp6016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6015, desc6009->breakLabel);
    panda$core$String* $tmp6014 = $tmp6016;
    panda$core$String* $tmp6018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6014, &$s6017);
    panda$core$String* $tmp6013 = $tmp6018;
    (($fn6019) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6013);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6013));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6014));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc6009));
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc6020;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp6023 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp6022 = $tmp6023;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp6021 = $tmp6022;
    desc6020 = $tmp6021;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6021));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6022));
    panda$core$String* $tmp6027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6026, desc6020->continueLabel);
    panda$core$String* $tmp6025 = $tmp6027;
    panda$core$String* $tmp6029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6025, &$s6028);
    panda$core$String* $tmp6024 = $tmp6029;
    (($fn6030) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6024);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6024));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6025));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc6020));
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_message, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Array* $tmp6032 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp6032);
    panda$collections$Array* $tmp6031 = $tmp6032;
    panda$collections$Stack$push$panda$collections$Stack$T(self->extraEffects, ((panda$core$Object*) $tmp6031));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6031));
    panda$core$String* $tmp6037 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp6036 = $tmp6037;
    panda$core$String* $tmp6038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6035, $tmp6036);
    panda$core$String* $tmp6034 = $tmp6038;
    panda$core$String* $tmp6040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6034, &$s6039);
    panda$core$String* $tmp6033 = $tmp6040;
    (($fn6041) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6033);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6033));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6034));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6036));
    org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(self, p_out);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$collections$ImmutableArray* p_whens, panda$collections$ImmutableArray* p_other, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* Iter$1902$96052;
    org$pandalanguage$pandac$IRNode* w6067;
    org$pandalanguage$pandac$IRNode* $match$1903_136074;
    panda$collections$ImmutableArray* tests6076;
    panda$collections$ImmutableArray* statements6078;
    panda$collections$Iterator* Iter$1905$216080;
    org$pandalanguage$pandac$IRNode* test6095;
    panda$core$String* $tmp6046 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    panda$core$String* $tmp6045 = $tmp6046;
    panda$core$String* $tmp6047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6044, $tmp6045);
    panda$core$String* $tmp6043 = $tmp6047;
    panda$core$String* $tmp6049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6043, &$s6048);
    panda$core$String* $tmp6042 = $tmp6049;
    (($fn6050) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6042);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6042));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6043));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6045));
    panda$core$Int64 $tmp6051 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp6051;
    {
        ITable* $tmp6055 = ((panda$collections$Iterable*) p_whens)->$class->itable;
        while ($tmp6055->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6055 = $tmp6055->next;
        }
        $fn6057 $tmp6056 = $tmp6055->methods[0];
        panda$collections$Iterator* $tmp6058 = $tmp6056(((panda$collections$Iterable*) p_whens));
        panda$collections$Iterator* $tmp6054 = $tmp6058;
        panda$collections$Iterator* $tmp6053 = $tmp6054;
        Iter$1902$96052 = $tmp6053;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6053));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6054));
        $l6059:;
        ITable* $tmp6062 = Iter$1902$96052->$class->itable;
        while ($tmp6062->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6062 = $tmp6062->next;
        }
        $fn6064 $tmp6063 = $tmp6062->methods[0];
        panda$core$Bit $tmp6065 = $tmp6063(Iter$1902$96052);
        panda$core$Bit $tmp6066 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6065);
        bool $tmp6061 = $tmp6066.value;
        if (!$tmp6061) goto $l6060;
        {
            ITable* $tmp6070 = Iter$1902$96052->$class->itable;
            while ($tmp6070->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6070 = $tmp6070->next;
            }
            $fn6072 $tmp6071 = $tmp6070->methods[1];
            panda$core$Object* $tmp6073 = $tmp6071(Iter$1902$96052);
            panda$core$Object* $tmp6069 = $tmp6073;
            org$pandalanguage$pandac$IRNode* $tmp6068 = ((org$pandalanguage$pandac$IRNode*) $tmp6069);
            w6067 = $tmp6068;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6068));
            panda$core$Panda$unref$panda$core$Object($tmp6069);
            {
                $match$1903_136074 = w6067;
                panda$core$Bit $tmp6075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1903_136074->$rawValue, ((panda$core$Int64) { 43 }));
                if ($tmp6075.value) {
                {
                    panda$collections$ImmutableArray** $tmp6077 = ((panda$collections$ImmutableArray**) ((char*) $match$1903_136074->$data + 16));
                    tests6076 = *$tmp6077;
                    panda$collections$ImmutableArray** $tmp6079 = ((panda$collections$ImmutableArray**) ((char*) $match$1903_136074->$data + 24));
                    statements6078 = *$tmp6079;
                    {
                        ITable* $tmp6083 = ((panda$collections$Iterable*) tests6076)->$class->itable;
                        while ($tmp6083->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp6083 = $tmp6083->next;
                        }
                        $fn6085 $tmp6084 = $tmp6083->methods[0];
                        panda$collections$Iterator* $tmp6086 = $tmp6084(((panda$collections$Iterable*) tests6076));
                        panda$collections$Iterator* $tmp6082 = $tmp6086;
                        panda$collections$Iterator* $tmp6081 = $tmp6082;
                        Iter$1905$216080 = $tmp6081;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6081));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6082));
                        $l6087:;
                        ITable* $tmp6090 = Iter$1905$216080->$class->itable;
                        while ($tmp6090->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp6090 = $tmp6090->next;
                        }
                        $fn6092 $tmp6091 = $tmp6090->methods[0];
                        panda$core$Bit $tmp6093 = $tmp6091(Iter$1905$216080);
                        panda$core$Bit $tmp6094 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6093);
                        bool $tmp6089 = $tmp6094.value;
                        if (!$tmp6089) goto $l6088;
                        {
                            ITable* $tmp6098 = Iter$1905$216080->$class->itable;
                            while ($tmp6098->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp6098 = $tmp6098->next;
                            }
                            $fn6100 $tmp6099 = $tmp6098->methods[1];
                            panda$core$Object* $tmp6101 = $tmp6099(Iter$1905$216080);
                            panda$core$Object* $tmp6097 = $tmp6101;
                            org$pandalanguage$pandac$IRNode* $tmp6096 = ((org$pandalanguage$pandac$IRNode*) $tmp6097);
                            test6095 = $tmp6096;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6096));
                            panda$core$Panda$unref$panda$core$Object($tmp6097);
                            panda$core$Object* $tmp6108 = (($fn6107) self->compiler->$class->vtable[2])(self->compiler);
                            panda$core$Object* $tmp6106 = $tmp6108;
                            panda$core$UInt64 $tmp6109 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(((org$pandalanguage$pandac$Compiler*) $tmp6106), test6095);
                            panda$core$UInt64$wrapper* $tmp6110;
                            $tmp6110 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
                            $tmp6110->value = $tmp6109;
                            panda$core$Object* $tmp6105 = ((panda$core$Object*) $tmp6110);
                            panda$core$String* $tmp6111 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s6104, $tmp6105);
                            panda$core$String* $tmp6103 = $tmp6111;
                            panda$core$String* $tmp6113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6103, &$s6112);
                            panda$core$String* $tmp6102 = $tmp6113;
                            (($fn6114) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6102);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6102));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6103));
                            panda$core$Panda$unref$panda$core$Object($tmp6105);
                            panda$core$Panda$unref$panda$core$Object($tmp6106);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test6095));
                        }
                        goto $l6087;
                        $l6088:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1905$216080));
                    }
                    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements6078, p_out);
                    (($fn6116) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6115);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w6067));
        }
        goto $l6059;
        $l6060:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1902$96052));
    }
    if (((panda$core$Bit) { p_other != NULL }).value) {
    {
        (($fn6118) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6117);
        org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_other, p_out);
    }
    }
    panda$core$Int64 $tmp6119 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp6119;
    (($fn6121) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6120);
}
void org$pandalanguage$pandac$CCodeGenerator$writeExtraEffects$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Array* finalEffects6122;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp6126;
    panda$core$Object* $tmp6125 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->extraEffects);
    panda$core$Object* $tmp6124 = $tmp6125;
    panda$collections$Array* $tmp6123 = ((panda$collections$Array*) $tmp6124);
    finalEffects6122 = $tmp6123;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6123));
    panda$core$Panda$unref$panda$core$Object($tmp6124);
    panda$core$Int64 $tmp6127 = panda$collections$Array$get_count$R$panda$core$Int64(finalEffects6122);
    panda$core$Int64 $tmp6128 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6127, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6126, $tmp6128, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp6130 = $tmp6126.start.value;
    panda$core$Int64 i6129 = { $tmp6130 };
    int64_t $tmp6132 = $tmp6126.end.value;
    int64_t $tmp6133 = $tmp6126.step.value;
    bool $tmp6134 = $tmp6126.inclusive.value;
    bool $tmp6141 = $tmp6133 > 0;
    if ($tmp6141) goto $l6139; else goto $l6140;
    $l6139:;
    if ($tmp6134) goto $l6142; else goto $l6143;
    $l6142:;
    if ($tmp6130 <= $tmp6132) goto $l6135; else goto $l6137;
    $l6143:;
    if ($tmp6130 < $tmp6132) goto $l6135; else goto $l6137;
    $l6140:;
    if ($tmp6134) goto $l6144; else goto $l6145;
    $l6144:;
    if ($tmp6130 >= $tmp6132) goto $l6135; else goto $l6137;
    $l6145:;
    if ($tmp6130 > $tmp6132) goto $l6135; else goto $l6137;
    $l6135:;
    {
        panda$core$Object* $tmp6148 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(finalEffects6122, i6129);
        panda$core$Object* $tmp6147 = $tmp6148;
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp6147), p_out);
        panda$core$Panda$unref$panda$core$Object($tmp6147);
    }
    $l6138:;
    if ($tmp6141) goto $l6150; else goto $l6151;
    $l6150:;
    int64_t $tmp6152 = $tmp6132 - i6129.value;
    if ($tmp6134) goto $l6153; else goto $l6154;
    $l6153:;
    if ((uint64_t) $tmp6152 >= $tmp6133) goto $l6149; else goto $l6137;
    $l6154:;
    if ((uint64_t) $tmp6152 > $tmp6133) goto $l6149; else goto $l6137;
    $l6151:;
    int64_t $tmp6156 = i6129.value - $tmp6132;
    if ($tmp6134) goto $l6157; else goto $l6158;
    $l6157:;
    if ((uint64_t) $tmp6156 >= -$tmp6133) goto $l6149; else goto $l6137;
    $l6158:;
    if ((uint64_t) $tmp6156 > -$tmp6133) goto $l6149; else goto $l6137;
    $l6149:;
    i6129.value += $tmp6133;
    goto $l6135;
    $l6137:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalEffects6122));
}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1931_96162;
    org$pandalanguage$pandac$IRNode* left6164;
    org$pandalanguage$pandac$parser$Token$Kind op6166;
    org$pandalanguage$pandac$IRNode* right6168;
    panda$collections$ImmutableArray* statements6171;
    org$pandalanguage$pandac$Type* target6174;
    org$pandalanguage$pandac$MethodRef* mref6176;
    panda$collections$ImmutableArray* args6178;
    org$pandalanguage$pandac$IRNode* base6181;
    org$pandalanguage$pandac$IRNode* stmt6183;
    org$pandalanguage$pandac$IRNode* test6188;
    panda$collections$ImmutableArray* ifTrue6190;
    org$pandalanguage$pandac$IRNode* ifFalse6192;
    panda$core$String* label6195;
    org$pandalanguage$pandac$IRNode* target6197;
    org$pandalanguage$pandac$IRNode* list6199;
    panda$collections$ImmutableArray* statements6201;
    panda$core$String* label6204;
    org$pandalanguage$pandac$IRNode* test6206;
    panda$collections$ImmutableArray* statements6208;
    panda$core$String* label6211;
    panda$collections$ImmutableArray* statements6213;
    org$pandalanguage$pandac$IRNode* test6215;
    panda$core$String* label6218;
    panda$collections$ImmutableArray* statements6220;
    org$pandalanguage$pandac$Variable$Kind kind6223;
    panda$collections$ImmutableArray* decls6225;
    org$pandalanguage$pandac$IRNode* value6228;
    panda$core$String* label6231;
    panda$core$String* label6234;
    org$pandalanguage$pandac$IRNode* test6237;
    org$pandalanguage$pandac$IRNode* msg6239;
    org$pandalanguage$pandac$IRNode* value6242;
    panda$collections$ImmutableArray* whens6244;
    panda$collections$ImmutableArray* other6246;
    org$pandalanguage$pandac$IRNode* base6249;
    panda$core$Int64 id6251;
    panda$core$String* result6253;
    panda$collections$Array* $tmp6161 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp6161);
    panda$collections$Array* $tmp6160 = $tmp6161;
    panda$collections$Stack$push$panda$collections$Stack$T(self->extraEffects, ((panda$core$Object*) $tmp6160));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6160));
    {
        $match$1931_96162 = p_stmt;
        panda$core$Bit $tmp6163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp6163.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp6165 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1931_96162->$data + 24));
            left6164 = *$tmp6165;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp6167 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1931_96162->$data + 32));
            op6166 = *$tmp6167;
            org$pandalanguage$pandac$IRNode** $tmp6169 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1931_96162->$data + 40));
            right6168 = *$tmp6169;
            org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, left6164, right6168, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp6170.value) {
        {
            panda$collections$ImmutableArray** $tmp6172 = ((panda$collections$ImmutableArray**) ((char*) $match$1931_96162->$data + 16));
            statements6171 = *$tmp6172;
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements6171, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp6173.value) {
        {
            org$pandalanguage$pandac$Type** $tmp6175 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1931_96162->$data + 16));
            target6174 = *$tmp6175;
            org$pandalanguage$pandac$MethodRef** $tmp6177 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1931_96162->$data + 24));
            mref6176 = *$tmp6177;
            panda$collections$ImmutableArray** $tmp6179 = ((panda$collections$ImmutableArray**) ((char*) $match$1931_96162->$data + 32));
            args6178 = *$tmp6179;
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, target6174, mref6176, args6178, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp6180.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp6182 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1931_96162->$data + 0));
            base6181 = *$tmp6182;
            org$pandalanguage$pandac$IRNode** $tmp6184 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1931_96162->$data + 8));
            stmt6183 = *$tmp6184;
            panda$core$String* $tmp6186 = org$pandalanguage$pandac$CCodeGenerator$getExpressionWithExtraEffectsReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base6181, stmt6183, p_out);
            panda$core$String* $tmp6185 = $tmp6186;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6185));
        }
        }
        else {
        panda$core$Bit $tmp6187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp6187.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp6189 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1931_96162->$data + 16));
            test6188 = *$tmp6189;
            panda$collections$ImmutableArray** $tmp6191 = ((panda$collections$ImmutableArray**) ((char*) $match$1931_96162->$data + 24));
            ifTrue6190 = *$tmp6191;
            org$pandalanguage$pandac$IRNode** $tmp6193 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1931_96162->$data + 32));
            ifFalse6192 = *$tmp6193;
            org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test6188, ifTrue6190, ifFalse6192, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp6194.value) {
        {
            panda$core$String** $tmp6196 = ((panda$core$String**) ((char*) $match$1931_96162->$data + 16));
            label6195 = *$tmp6196;
            org$pandalanguage$pandac$IRNode** $tmp6198 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1931_96162->$data + 24));
            target6197 = *$tmp6198;
            org$pandalanguage$pandac$IRNode** $tmp6200 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1931_96162->$data + 32));
            list6199 = *$tmp6200;
            panda$collections$ImmutableArray** $tmp6202 = ((panda$collections$ImmutableArray**) ((char*) $match$1931_96162->$data + 40));
            statements6201 = *$tmp6202;
            org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label6195, target6197, list6199, statements6201, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp6203.value) {
        {
            panda$core$String** $tmp6205 = ((panda$core$String**) ((char*) $match$1931_96162->$data + 16));
            label6204 = *$tmp6205;
            org$pandalanguage$pandac$IRNode** $tmp6207 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1931_96162->$data + 24));
            test6206 = *$tmp6207;
            panda$collections$ImmutableArray** $tmp6209 = ((panda$collections$ImmutableArray**) ((char*) $match$1931_96162->$data + 32));
            statements6208 = *$tmp6209;
            org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label6204, test6206, statements6208, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp6210.value) {
        {
            panda$core$String** $tmp6212 = ((panda$core$String**) ((char*) $match$1931_96162->$data + 16));
            label6211 = *$tmp6212;
            panda$collections$ImmutableArray** $tmp6214 = ((panda$collections$ImmutableArray**) ((char*) $match$1931_96162->$data + 24));
            statements6213 = *$tmp6214;
            org$pandalanguage$pandac$IRNode** $tmp6216 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1931_96162->$data + 32));
            test6215 = *$tmp6216;
            org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, label6211, statements6213, test6215, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp6217.value) {
        {
            panda$core$String** $tmp6219 = ((panda$core$String**) ((char*) $match$1931_96162->$data + 16));
            label6218 = *$tmp6219;
            panda$collections$ImmutableArray** $tmp6221 = ((panda$collections$ImmutableArray**) ((char*) $match$1931_96162->$data + 24));
            statements6220 = *$tmp6221;
            org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label6218, statements6220, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp6222.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp6224 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$1931_96162->$data + 16));
            kind6223 = *$tmp6224;
            panda$collections$ImmutableArray** $tmp6226 = ((panda$collections$ImmutableArray**) ((char*) $match$1931_96162->$data + 24));
            decls6225 = *$tmp6226;
            org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, kind6223, decls6225, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp6227.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp6229 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1931_96162->$data + 16));
            value6228 = *$tmp6229;
            org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, value6228, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp6230.value) {
        {
            panda$core$String** $tmp6232 = ((panda$core$String**) ((char*) $match$1931_96162->$data + 16));
            label6231 = *$tmp6232;
            org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(self, label6231, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp6233.value) {
        {
            panda$core$String** $tmp6235 = ((panda$core$String**) ((char*) $match$1931_96162->$data + 16));
            label6234 = *$tmp6235;
            org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(self, label6234, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp6236.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp6238 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1931_96162->$data + 16));
            test6237 = *$tmp6238;
            org$pandalanguage$pandac$IRNode** $tmp6240 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1931_96162->$data + 24));
            msg6239 = *$tmp6240;
            org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test6237, msg6239, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp6241.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp6243 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1931_96162->$data + 16));
            value6242 = *$tmp6243;
            panda$collections$ImmutableArray** $tmp6245 = ((panda$collections$ImmutableArray**) ((char*) $match$1931_96162->$data + 24));
            whens6244 = *$tmp6245;
            panda$collections$ImmutableArray** $tmp6247 = ((panda$collections$ImmutableArray**) ((char*) $match$1931_96162->$data + 32));
            other6246 = *$tmp6247;
            org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(self, value6242, whens6244, other6246, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1931_96162->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp6248.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp6250 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1931_96162->$data + 0));
            base6249 = *$tmp6250;
            panda$core$Int64* $tmp6252 = ((panda$core$Int64*) ((char*) $match$1931_96162->$data + 8));
            id6251 = *$tmp6252;
            panda$core$String* $tmp6256 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            panda$core$String* $tmp6255 = $tmp6256;
            panda$core$String* $tmp6254 = $tmp6255;
            result6253 = $tmp6254;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6254));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6255));
            org$pandalanguage$pandac$Type* $tmp6266 = (($fn6265) base6249->$class->vtable[2])(base6249);
            org$pandalanguage$pandac$Type* $tmp6264 = $tmp6266;
            panda$core$String* $tmp6267 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6264);
            panda$core$String* $tmp6263 = $tmp6267;
            panda$core$String* $tmp6268 = panda$core$String$convert$R$panda$core$String($tmp6263);
            panda$core$String* $tmp6262 = $tmp6268;
            panda$core$String* $tmp6270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6262, &$s6269);
            panda$core$String* $tmp6261 = $tmp6270;
            panda$core$String* $tmp6271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6261, result6253);
            panda$core$String* $tmp6260 = $tmp6271;
            panda$core$String* $tmp6273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6260, &$s6272);
            panda$core$String* $tmp6259 = $tmp6273;
            panda$core$String* $tmp6275 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base6249, p_out);
            panda$core$String* $tmp6274 = $tmp6275;
            panda$core$String* $tmp6276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6259, $tmp6274);
            panda$core$String* $tmp6258 = $tmp6276;
            panda$core$String* $tmp6278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6258, &$s6277);
            panda$core$String* $tmp6257 = $tmp6278;
            (($fn6279) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6257);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6257));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6258));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6274));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6259));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6260));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6261));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6262));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6263));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6264));
            panda$core$Int64$wrapper* $tmp6281;
            $tmp6281 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp6281->value = id6251;
            panda$collections$Key* $tmp6280 = ((panda$collections$Key*) $tmp6281);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, $tmp6280, ((panda$core$Object*) result6253));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6280));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result6253));
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
    panda$core$String* result6282;
    panda$core$String* tmp786295;
    panda$core$String* tmp796301;
    org$pandalanguage$pandac$Type* $tmp6286 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp6285 = $tmp6286;
    panda$core$String* $tmp6287 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6285);
    panda$core$String* $tmp6284 = $tmp6287;
    panda$core$String* $tmp6283 = $tmp6284;
    result6282 = $tmp6283;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6283));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6284));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6285));
    panda$core$Bit $tmp6289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp6288 = $tmp6289.value;
    if (!$tmp6288) goto $l6290;
    panda$core$Bit $tmp6292 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6282, &$s6291);
    panda$core$Bit $tmp6293 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6292);
    $tmp6288 = $tmp6293.value;
    $l6290:;
    panda$core$Bit $tmp6294 = { $tmp6288 };
    if ($tmp6294.value) {
    {
        {
            panda$core$String* $tmp6299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6282, &$s6298);
            panda$core$String* $tmp6297 = $tmp6299;
            panda$core$String* $tmp6296 = $tmp6297;
            tmp786295 = $tmp6296;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6296));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6297));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result6282));
            panda$core$String* $tmp6300 = tmp786295;
            return $tmp6300;
        }
    }
    }
    {
        panda$core$String* $tmp6302 = result6282;
        tmp796301 = $tmp6302;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result6282));
        panda$core$String* $tmp6303 = tmp796301;
        return $tmp6303;
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    panda$core$String* separator6329;
    panda$collections$Iterator* Iter$1997$96345;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6360;
    panda$io$MemoryOutputStream* bodyBuffer6393;
    panda$io$IndentedOutputStream* indentedBody6397;
    panda$collections$Iterator* Iter$2006$136402;
    org$pandalanguage$pandac$FieldDecl* f6422;
    panda$collections$Iterator* Iter$2015$96451;
    org$pandalanguage$pandac$IRNode* s6466;
    panda$core$Object* $tmp6307 = (($fn6306) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp6305 = $tmp6307;
    panda$core$Object* $tmp6308 = panda$collections$Stack$peek$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp6305)->currentClass);
    panda$core$Object* $tmp6304 = $tmp6308;
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6304)) == ((panda$core$Object*) p_m->owner) }).value);
    panda$core$Panda$unref$panda$core$Object($tmp6304);
    panda$core$Panda$unref$panda$core$Object($tmp6305);
    {
        org$pandalanguage$pandac$MethodDecl* $tmp6309 = self->currentMethod;
        org$pandalanguage$pandac$MethodDecl* $tmp6310 = p_m;
        self->currentMethod = $tmp6310;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6310));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6309));
    }
    {
        panda$core$String* $tmp6311 = self->currentBlock;
        panda$core$String* $tmp6312 = &$s6313;
        self->currentBlock = $tmp6312;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6312));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6311));
    }
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp6319 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6318 = $tmp6319;
    panda$core$String* $tmp6320 = panda$core$String$convert$R$panda$core$String($tmp6318);
    panda$core$String* $tmp6317 = $tmp6320;
    panda$core$String* $tmp6322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6317, &$s6321);
    panda$core$String* $tmp6316 = $tmp6322;
    panda$core$String* $tmp6324 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6323 = $tmp6324;
    panda$core$String* $tmp6325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6316, $tmp6323);
    panda$core$String* $tmp6315 = $tmp6325;
    panda$core$String* $tmp6327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6315, &$s6326);
    panda$core$String* $tmp6314 = $tmp6327;
    (($fn6328) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6314);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6314));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6315));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6323));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6316));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6317));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6318));
    panda$core$String* $tmp6330 = &$s6331;
    separator6329 = $tmp6330;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6330));
    panda$core$Bit $tmp6332 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6333 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6332);
    if ($tmp6333.value) {
    {
        panda$core$String* $tmp6337 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6336 = $tmp6337;
        panda$core$String* $tmp6338 = panda$core$String$convert$R$panda$core$String($tmp6336);
        panda$core$String* $tmp6335 = $tmp6338;
        panda$core$String* $tmp6340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6335, &$s6339);
        panda$core$String* $tmp6334 = $tmp6340;
        (($fn6341) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6334);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6334));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6335));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6336));
        {
            panda$core$String* $tmp6342 = separator6329;
            panda$core$String* $tmp6343 = &$s6344;
            separator6329 = $tmp6343;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6343));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6342));
        }
    }
    }
    {
        ITable* $tmp6348 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6348->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6348 = $tmp6348->next;
        }
        $fn6350 $tmp6349 = $tmp6348->methods[0];
        panda$collections$Iterator* $tmp6351 = $tmp6349(((panda$collections$Iterable*) p_m->parameters));
        panda$collections$Iterator* $tmp6347 = $tmp6351;
        panda$collections$Iterator* $tmp6346 = $tmp6347;
        Iter$1997$96345 = $tmp6346;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6346));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6347));
        $l6352:;
        ITable* $tmp6355 = Iter$1997$96345->$class->itable;
        while ($tmp6355->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6355 = $tmp6355->next;
        }
        $fn6357 $tmp6356 = $tmp6355->methods[0];
        panda$core$Bit $tmp6358 = $tmp6356(Iter$1997$96345);
        panda$core$Bit $tmp6359 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6358);
        bool $tmp6354 = $tmp6359.value;
        if (!$tmp6354) goto $l6353;
        {
            ITable* $tmp6363 = Iter$1997$96345->$class->itable;
            while ($tmp6363->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6363 = $tmp6363->next;
            }
            $fn6365 $tmp6364 = $tmp6363->methods[1];
            panda$core$Object* $tmp6366 = $tmp6364(Iter$1997$96345);
            panda$core$Object* $tmp6362 = $tmp6366;
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp6361 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6362);
            p6360 = $tmp6361;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6361));
            panda$core$Panda$unref$panda$core$Object($tmp6362);
            panda$core$String* $tmp6373 = panda$core$String$convert$R$panda$core$String(separator6329);
            panda$core$String* $tmp6372 = $tmp6373;
            panda$core$String* $tmp6375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6372, &$s6374);
            panda$core$String* $tmp6371 = $tmp6375;
            panda$core$String* $tmp6377 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6360->type);
            panda$core$String* $tmp6376 = $tmp6377;
            panda$core$String* $tmp6378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6371, $tmp6376);
            panda$core$String* $tmp6370 = $tmp6378;
            panda$core$String* $tmp6380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6370, &$s6379);
            panda$core$String* $tmp6369 = $tmp6380;
            panda$core$String* $tmp6382 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6360->name);
            panda$core$String* $tmp6381 = $tmp6382;
            panda$core$String* $tmp6383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6369, $tmp6381);
            panda$core$String* $tmp6368 = $tmp6383;
            panda$core$String* $tmp6385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6368, &$s6384);
            panda$core$String* $tmp6367 = $tmp6385;
            (($fn6386) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6367);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6367));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6368));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6381));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6369));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6370));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6376));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6371));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6372));
            {
                panda$core$String* $tmp6387 = separator6329;
                panda$core$String* $tmp6388 = &$s6389;
                separator6329 = $tmp6388;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6388));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6387));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p6360));
        }
        goto $l6352;
        $l6353:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$1997$96345));
    }
    (($fn6391) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6390);
    panda$core$Int64 $tmp6392 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6392;
    panda$io$MemoryOutputStream* $tmp6396 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp6396);
    panda$io$MemoryOutputStream* $tmp6395 = $tmp6396;
    panda$io$MemoryOutputStream* $tmp6394 = $tmp6395;
    bodyBuffer6393 = $tmp6394;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6394));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6395));
    panda$io$IndentedOutputStream* $tmp6400 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6400, ((panda$io$OutputStream*) bodyBuffer6393));
    panda$io$IndentedOutputStream* $tmp6399 = $tmp6400;
    panda$io$IndentedOutputStream* $tmp6398 = $tmp6399;
    indentedBody6397 = $tmp6398;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6398));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6399));
    panda$core$Bit $tmp6401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp6401.value) {
    {
        {
            panda$core$Object* $tmp6408 = (($fn6407) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp6406 = $tmp6408;
            panda$collections$ListView* $tmp6409 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp6406), p_m->owner);
            panda$collections$ListView* $tmp6405 = $tmp6409;
            ITable* $tmp6410 = ((panda$collections$Iterable*) $tmp6405)->$class->itable;
            while ($tmp6410->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp6410 = $tmp6410->next;
            }
            $fn6412 $tmp6411 = $tmp6410->methods[0];
            panda$collections$Iterator* $tmp6413 = $tmp6411(((panda$collections$Iterable*) $tmp6405));
            panda$collections$Iterator* $tmp6404 = $tmp6413;
            panda$collections$Iterator* $tmp6403 = $tmp6404;
            Iter$2006$136402 = $tmp6403;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6403));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6404));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6405));
            panda$core$Panda$unref$panda$core$Object($tmp6406);
            $l6414:;
            ITable* $tmp6417 = Iter$2006$136402->$class->itable;
            while ($tmp6417->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6417 = $tmp6417->next;
            }
            $fn6419 $tmp6418 = $tmp6417->methods[0];
            panda$core$Bit $tmp6420 = $tmp6418(Iter$2006$136402);
            panda$core$Bit $tmp6421 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6420);
            bool $tmp6416 = $tmp6421.value;
            if (!$tmp6416) goto $l6415;
            {
                ITable* $tmp6425 = Iter$2006$136402->$class->itable;
                while ($tmp6425->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp6425 = $tmp6425->next;
                }
                $fn6427 $tmp6426 = $tmp6425->methods[1];
                panda$core$Object* $tmp6428 = $tmp6426(Iter$2006$136402);
                panda$core$Object* $tmp6424 = $tmp6428;
                org$pandalanguage$pandac$FieldDecl* $tmp6423 = ((org$pandalanguage$pandac$FieldDecl*) $tmp6424);
                f6422 = $tmp6423;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6423));
                panda$core$Panda$unref$panda$core$Object($tmp6424);
                panda$core$Object* $tmp6431 = (($fn6430) self->compiler->$class->vtable[2])(self->compiler);
                panda$core$Object* $tmp6429 = $tmp6431;
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp6429), f6422);
                panda$core$Panda$unref$panda$core$Object($tmp6429);
                panda$core$Object* $tmp6435 = (($fn6434) self->compiler->$class->vtable[2])(self->compiler);
                panda$core$Object* $tmp6433 = $tmp6435;
                panda$core$Bit $tmp6436 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp6433), f6422->type);
                bool $tmp6432 = $tmp6436.value;
                panda$core$Panda$unref$panda$core$Object($tmp6433);
                if (!$tmp6432) goto $l6437;
                panda$core$Bit $tmp6439 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) f6422)->name, &$s6438);
                $tmp6432 = $tmp6439.value;
                $l6437:;
                panda$core$Bit $tmp6440 = { $tmp6432 };
                if ($tmp6440.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp6442 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                    org$pandalanguage$pandac$IRNode* $tmp6444 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                    org$pandalanguage$pandac$Type* $tmp6446 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
                    org$pandalanguage$pandac$Type* $tmp6445 = $tmp6446;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp6444, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp6445);
                    org$pandalanguage$pandac$IRNode* $tmp6443 = $tmp6444;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp6442, ((panda$core$Int64) { 15 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f6422->type, $tmp6443, f6422);
                    org$pandalanguage$pandac$IRNode* $tmp6441 = $tmp6442;
                    org$pandalanguage$pandac$IRNode* $tmp6448 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                    org$pandalanguage$pandac$Type* $tmp6450 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(f6422->type);
                    org$pandalanguage$pandac$Type* $tmp6449 = $tmp6450;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp6448, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp6449);
                    org$pandalanguage$pandac$IRNode* $tmp6447 = $tmp6448;
                    org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, $tmp6441, $tmp6447, indentedBody6397);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6447));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6449));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6441));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6443));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6445));
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f6422));
            }
            goto $l6414;
            $l6415:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$2006$136402));
        }
    }
    }
    {
        ITable* $tmp6454 = ((panda$collections$Iterable*) p_body)->$class->itable;
        while ($tmp6454->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6454 = $tmp6454->next;
        }
        $fn6456 $tmp6455 = $tmp6454->methods[0];
        panda$collections$Iterator* $tmp6457 = $tmp6455(((panda$collections$Iterable*) p_body));
        panda$collections$Iterator* $tmp6453 = $tmp6457;
        panda$collections$Iterator* $tmp6452 = $tmp6453;
        Iter$2015$96451 = $tmp6452;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6452));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6453));
        $l6458:;
        ITable* $tmp6461 = Iter$2015$96451->$class->itable;
        while ($tmp6461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6461 = $tmp6461->next;
        }
        $fn6463 $tmp6462 = $tmp6461->methods[0];
        panda$core$Bit $tmp6464 = $tmp6462(Iter$2015$96451);
        panda$core$Bit $tmp6465 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6464);
        bool $tmp6460 = $tmp6465.value;
        if (!$tmp6460) goto $l6459;
        {
            ITable* $tmp6469 = Iter$2015$96451->$class->itable;
            while ($tmp6469->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6469 = $tmp6469->next;
            }
            $fn6471 $tmp6470 = $tmp6469->methods[1];
            panda$core$Object* $tmp6472 = $tmp6470(Iter$2015$96451);
            panda$core$Object* $tmp6468 = $tmp6472;
            org$pandalanguage$pandac$IRNode* $tmp6467 = ((org$pandalanguage$pandac$IRNode*) $tmp6468);
            s6466 = $tmp6467;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6467));
            panda$core$Panda$unref$panda$core$Object($tmp6468);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s6466, indentedBody6397);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s6466));
        }
        goto $l6458;
        $l6459:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$2015$96451));
    }
    panda$core$String* $tmp6474 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    panda$core$String* $tmp6473 = $tmp6474;
    (($fn6475) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6473);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6473));
    panda$core$String* $tmp6477 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer6393);
    panda$core$String* $tmp6476 = $tmp6477;
    (($fn6478) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6476);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6476));
    panda$core$Int64 $tmp6479 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6479;
    (($fn6481) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6480);
    {
        org$pandalanguage$pandac$MethodDecl* $tmp6482 = self->currentMethod;
        org$pandalanguage$pandac$MethodDecl* $tmp6483 = NULL;
        self->currentMethod = $tmp6483;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6483));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6482));
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) indentedBody6397));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator6329));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bodyBuffer6393));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path6486;
    PANDA_ASSERT(((panda$core$Bit) { self->currentClass == NULL }).value);
    {
        org$pandalanguage$pandac$ClassDecl* $tmp6484 = self->currentClass;
        org$pandalanguage$pandac$ClassDecl* $tmp6485 = p_cl;
        self->currentClass = $tmp6485;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6485));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6484));
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
    panda$io$File* $tmp6490 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s6489);
    panda$io$File* $tmp6488 = $tmp6490;
    panda$io$File* $tmp6487 = $tmp6488;
    path6486 = $tmp6487;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6487));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6488));
    panda$io$File* $tmp6492 = panda$io$File$parent$R$panda$io$File$Q(path6486);
    panda$io$File* $tmp6491 = $tmp6492;
    panda$io$File$createDirectories($tmp6491);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6491));
    {
        panda$io$IndentedOutputStream* $tmp6493 = self->out;
        panda$io$IndentedOutputStream* $tmp6496 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$OutputStream* $tmp6498 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path6486);
        panda$io$OutputStream* $tmp6497 = $tmp6498;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6496, $tmp6497);
        panda$io$IndentedOutputStream* $tmp6495 = $tmp6496;
        panda$io$IndentedOutputStream* $tmp6494 = $tmp6495;
        self->out = $tmp6494;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6494));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6495));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6493));
    }
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp6500 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp6499 = $tmp6500;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6499));
    panda$core$Object* $tmp6503 = (($fn6502) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp6501 = $tmp6503;
    panda$core$Bit $tmp6504 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp6501), p_cl);
    panda$core$Panda$unref$panda$core$Object($tmp6501);
    if ($tmp6504.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp6506 = org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp6505 = $tmp6506;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6505));
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path6486));
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    {
        org$pandalanguage$pandac$ClassDecl* $tmp6507 = self->currentClass;
        org$pandalanguage$pandac$ClassDecl* $tmp6508 = NULL;
        self->currentClass = $tmp6508;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6508));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6507));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$String* $tmp6510 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    panda$core$String* $tmp6509 = $tmp6510;
    (($fn6511) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp6509);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6509));
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp6513 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    panda$core$String* $tmp6512 = $tmp6513;
    (($fn6514) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp6512);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6512));
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp6516 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    panda$core$String* $tmp6515 = $tmp6516;
    (($fn6517) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp6515);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6515));
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp6519 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    panda$core$String* $tmp6518 = $tmp6519;
    (($fn6520) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp6518);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6518));
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp6522 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    panda$core$String* $tmp6521 = $tmp6522;
    (($fn6523) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp6521);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6521));
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn6524) self->out->out->$class->vtable[1])(self->out->out);
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->extraEffects));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->reusedValues));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->methodShims));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->inlineContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentlyInlining));
}

