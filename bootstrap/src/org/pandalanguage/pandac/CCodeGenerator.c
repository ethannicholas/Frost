#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
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
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Array.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/collections/ImmutableArray.h"
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
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "org/pandalanguage/pandac/CCodeGenerator/OpClass.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Real64.h"
#include "panda/core/Panda.h"
#include "panda/core/Formattable.h"
#include "org/pandalanguage/pandac/CCodeGenerator/LoopDescriptor.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

typedef void (*$fn65)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn120)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn137)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn172)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn178)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn184)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn218)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn224)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn230)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn319)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn325)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn331)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn360)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn383)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn389)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn395)(panda$collections$Iterator*);
typedef void (*$fn403)(panda$io$OutputStream*, panda$core$String*);
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
typedef void (*$fn603)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn633)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn641)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn681)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn686)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn715)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn718)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn727)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn733)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn739)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn768)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn796)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn802)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn808)(panda$collections$Iterator*);
typedef void (*$fn816)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn896)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn902)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn908)(panda$collections$Iterator*);
typedef void (*$fn916)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn934)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn990)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1008)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1029)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1071)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1081)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1094)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1110)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1120)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1133)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1183)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1196)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1248)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1265)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1298)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1306)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1314)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1317)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1324)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1341)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1354)(panda$collections$CollectionView*);
typedef void (*$fn1376)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1516)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1534)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1621)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1628)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1639)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1643)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1649)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1655)(panda$collections$Iterator*);
typedef void (*$fn1663)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1666)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1696)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1702)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1718)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1728)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1732)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1739)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1743)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1745)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1750)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1753)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1948)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1974)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1989)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1993)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2025)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2030)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2036)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2042)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2050)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn2057)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2062)(panda$collections$CollectionView*);
typedef void (*$fn2073)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2196)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2207)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2216)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2221)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2230)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2235)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2266)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2271)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2277)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2283)(panda$collections$Iterator*);
typedef void (*$fn2287)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2308)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2336)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2347)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2441)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2451)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2456)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2460)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2466)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2472)(panda$collections$Iterator*);
typedef void (*$fn2474)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2475)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2478)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2497)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2500)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2504)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2507)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2543)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2550)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2568)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2582)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2594)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2604)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2649)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2663)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2677)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2694)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2710)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2725)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2742)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2748)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2753)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2792)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2799)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2817)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2831)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2843)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2851)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2858)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2870)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2880)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2921)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2933)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2949)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2963)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2977)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2993)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3007)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3023)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3040)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3055)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3071)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3089)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3109)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3124)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3140)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3159)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3187)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3192)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3218)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3224)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3247)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3258)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3261)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3271)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3280)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3297)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3303)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3309)(panda$collections$Iterator*);
typedef void (*$fn3375)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3401)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3415)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3417)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3455)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3462)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3477)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3484)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3527)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3538)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3543)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3553)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3576)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3585)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3590)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3596)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3602)(panda$collections$Iterator*);
typedef void (*$fn3615)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3618)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3630)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3636)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3642)(panda$collections$Iterator*);
typedef void (*$fn3645)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3647)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3650)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3660)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3662)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3664)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3666)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3668)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3669)(panda$core$Object*);

static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x28", 2, 14382, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 157, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 15204, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 15402, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70", 2, 13545, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6c\x66", 5, 14792042467, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6d", 12, -5595348649711353309, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2a", 9, 1496394141948660748, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6c\x66\x2d\x3e\x76\x61\x6c\x75\x65", 12, 3684417363826496863, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static panda$core$String $s785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x31\x2c\x20", 5, 15122232102, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x31\x2c\x20", 5, 15122232102, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s1076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s1140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s1152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s1177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x3d\x20", 4, 137658487, NULL };
static panda$core$String $s1206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20", 4, 137372859, NULL };
static panda$core$String $s1217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s1285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s1293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s1299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s1301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s1304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s1316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6d\x61\x6c\x6c\x6f\x63\x28", 9, 1541204091645718446, NULL };
static panda$core$String $s1409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2a", 2, 14283, NULL };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d", 7, 157293860332681, NULL };
static panda$core$String $s1442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6c\x6c\x6f\x63\x28", 10, 8088200864683738024, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s1499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, 14279, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3f\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20\x4e\x55\x4c\x4c\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s1705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x61\x6c\x6c\x6f\x63\x28", 7, 223950062312973, NULL };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x63\x6c\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 27, 7283889564528102738, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s1730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x20\x3d\x20\x31\x3b", 15, -7616502316629902533, NULL };
static panda$core$String $s1734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s1737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s1805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s1810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 21448182697504497, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x61\x6c\x6c\x6f\x63\x28", 7, 223950062312973, NULL };
static panda$core$String $s1971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 32, -2435628749655888173, NULL };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x2e\x76\x61\x6c\x75\x65\x20\x3d\x20\x31\x3b", 21, 5666803292027080506, NULL };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20\x32\x2c\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 70, 2026475985823268269, NULL };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s2055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6c\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s2097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s2143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s2202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s2286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d\x20\x3d\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s2334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static panda$core$String $s2341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, 21242756259, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s2560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6d\x69\x6e\x2e\x76\x61\x6c\x75\x65\x3b", 11, -3956212002962864875, NULL };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6d\x61\x78\x2e\x76\x61\x6c\x75\x65\x3b", 11, -4041768404061004273, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s2669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s2692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 12, -550717230962542041, NULL };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s2736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20\x31\x3b", 12, -4476855678279854640, NULL };
static panda$core$String $s2749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s2809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x73\x74\x61\x72\x74\x2e\x76\x61\x6c\x75\x65\x3b", 13, 3588086193908855763, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x65\x6e\x64\x2e\x76\x61\x6c\x75\x65\x3b", 11, 5794120589201096528, NULL };
static panda$core$String $s2862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x73\x74\x65\x70\x2e\x76\x61\x6c\x75\x65\x3b", 12, -1565217378717073995, NULL };
static panda$core$String $s2873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20\x30\x3b", 5, 13904243334, NULL };
static panda$core$String $s2922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s2969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s2999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2d\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s3122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20\x2d", 5, 13904537533, NULL };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20\x2d", 4, 137665772, NULL };
static panda$core$String $s3168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s3185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s3213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7b", 14, 1197661341919403142, NULL };
static panda$core$String $s3260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s3357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s3360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static panda$core$String $s3364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a\x29\x20", 3, 1462916, NULL };
static panda$core$String $s3366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x63\x68\x61\x72\x2a\x29\x20", 9, 1531222690101128410, NULL };
static panda$core$String $s3368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s3451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x41\x4e\x44\x41\x5f\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s3475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s3478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s3482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s3520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s3525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s3537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x3b", 6, 2103477946177, NULL };
static panda$core$String $s3542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6c\x74\x3a", 8, 21658216358330300, NULL };
static panda$core$String $s3552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s3570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s3586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s3613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s3649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

void org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$File* p_outDir) {
    panda$io$MemoryOutputStream* $tmp1 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp1->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp1->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp1);
    self->strings = $tmp1;
    panda$collections$Set* $tmp3 = (panda$collections$Set*) malloc(24);
    $tmp3->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp3->refCount.value = 1;
    panda$collections$Set$init($tmp3);
    self->imports = $tmp3;
    self->currentClass = NULL;
    panda$io$MemoryOutputStream* $tmp5 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp5->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp5->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp5);
    self->declarations = $tmp5;
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp7->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp7->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp7);
    self->types = $tmp7;
    panda$io$MemoryOutputStream* $tmp9 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp9->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp9->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp9);
    self->methodsBuffer = $tmp9;
    panda$io$IndentedOutputStream* $tmp11 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp11->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp11->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp11, ((panda$io$OutputStream*) self->methodsBuffer));
    self->methods = $tmp11;
    panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp13->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp13);
    self->methodHeaderBuffer = $tmp13;
    panda$io$IndentedOutputStream* $tmp15 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp15->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp15->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp15, ((panda$io$OutputStream*) self->methodHeaderBuffer));
    self->methodHeader = $tmp15;
    panda$io$MemoryOutputStream* $tmp17 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp17->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp17->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp17);
    self->wrapperShimsBuffer = $tmp17;
    panda$io$IndentedOutputStream* $tmp19 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp19->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp19->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp19, ((panda$io$OutputStream*) self->wrapperShimsBuffer));
    self->wrapperShims = $tmp19;
    panda$io$MemoryOutputStream* $tmp21 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp21->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp21->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp21);
    self->shimsBuffer = $tmp21;
    panda$io$IndentedOutputStream* $tmp23 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp23->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp23->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp23, ((panda$io$OutputStream*) self->shimsBuffer));
    self->shims = $tmp23;
    panda$collections$Set* $tmp25 = (panda$collections$Set*) malloc(24);
    $tmp25->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp25->refCount.value = 1;
    panda$collections$Set$init($tmp25);
    self->declared = $tmp25;
    panda$collections$Set* $tmp27 = (panda$collections$Set*) malloc(24);
    $tmp27->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp27->refCount.value = 1;
    panda$collections$Set$init($tmp27);
    self->writtenTypes = $tmp27;
    panda$collections$Set* $tmp29 = (panda$collections$Set*) malloc(24);
    $tmp29->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp29->refCount.value = 1;
    panda$collections$Set$init($tmp29);
    self->writtenWrappers = $tmp29;
    panda$collections$HashMap* $tmp31 = (panda$collections$HashMap*) malloc(56);
    $tmp31->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp31->refCount.value = 1;
    panda$collections$HashMap$init($tmp31);
    self->classConstants = $tmp31;
    panda$collections$IdentityMap* $tmp33 = (panda$collections$IdentityMap*) malloc(56);
    $tmp33->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp33->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp33);
    self->variableNames = $tmp33;
    panda$collections$Stack* $tmp35 = (panda$collections$Stack*) malloc(24);
    $tmp35->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp35->refCount.value = 1;
    panda$collections$Stack$init($tmp35);
    self->loopDescriptors = $tmp35;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap* $tmp37 = (panda$collections$HashMap*) malloc(56);
    $tmp37->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp37->refCount.value = 1;
    panda$collections$HashMap$init($tmp37);
    self->reusedValues = $tmp37;
    panda$collections$IdentityMap* $tmp39 = (panda$collections$IdentityMap*) malloc(56);
    $tmp39->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp39->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp39);
    self->methodShims = $tmp39;
    panda$collections$Stack* $tmp41 = (panda$collections$Stack*) malloc(24);
    $tmp41->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp41->refCount.value = 1;
    panda$collections$Stack$init($tmp41);
    self->inlineContext = $tmp41;
    panda$collections$IdentityMap* $tmp43 = (panda$collections$IdentityMap*) malloc(56);
    $tmp43->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp43->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp43);
    self->currentlyInlining = $tmp43;
    self->outDir = p_outDir;
    panda$io$IndentedOutputStream* $tmp45 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp45->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp45->refCount.value = 1;
    panda$io$MemoryOutputStream* $tmp47 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp47->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp47->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp47);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp45, ((panda$io$OutputStream*) $tmp47));
    self->out = $tmp45;
    org$pandalanguage$pandac$HCodeGenerator* $tmp49 = (org$pandalanguage$pandac$HCodeGenerator*) malloc(129);
    $tmp49->$class = (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class;
    $tmp49->refCount.value = 1;
    org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp49, p_outDir);
    self->hCodeGen = $tmp49;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp51 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->hCodeGen, p_s);
    return $tmp51;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* $tmp52 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->hCodeGen, p_m);
    return $tmp52;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp53 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->hCodeGen, p_t);
    return $tmp53;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    return ((panda$core$Bit) { ((panda$core$Object*) p_cl) != ((panda$core$Object*) self->currentClass) });
}
void org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* includePath56;
    panda$core$Bit $tmp55 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s54);
    if ($tmp55.value) {
    {
        return;
    }
    }
    panda$core$String* $tmp58 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self->hCodeGen, p_cl, &$s57);
    includePath56 = $tmp58;
    panda$core$Bit $tmp59 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath56));
    panda$core$Bit $tmp60 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp59);
    if ($tmp60.value) {
    {
        panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s61, includePath56);
        panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, &$s63);
        (($fn65) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp64);
        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath56));
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl67;
    panda$core$String* result75;
    panda$core$MutableString* code81;
    panda$core$String* separator91;
    panda$core$Range$LTpanda$core$Int64$GT $tmp93;
    panda$core$Bit $tmp66 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_t);
    if ($tmp66.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp68 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
        cl67 = $tmp68;
        PANDA_ASSERT(((panda$core$Bit) { cl67 != NULL }).value);
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl67);
    }
    }
    panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp69 = $tmp70.value;
    if ($tmp69) goto $l71;
    panda$core$Bit $tmp72 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 24 }));
    $tmp69 = $tmp72.value;
    $l71:;
    panda$core$Bit $tmp73 = { $tmp69 };
    if ($tmp73.value) {
    {
        panda$core$Int64 $tmp74 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp74;
        panda$core$Int64$wrapper* $tmp77;
        $tmp77 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp77->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp77->refCount = 1;
        $tmp77->value = self->varCount;
        panda$core$String* $tmp78 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s76, ((panda$core$Object*) $tmp77));
        panda$core$String* $tmp80 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp78, &$s79);
        result75 = $tmp80;
        panda$core$MutableString* $tmp82 = (panda$core$MutableString*) malloc(48);
        $tmp82->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp82->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp82, &$s84);
        code81 = $tmp82;
        panda$core$Int64 $tmp85 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp86 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp85, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp87 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp86);
        panda$core$String* $tmp88 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp87));
        panda$core$MutableString$append$panda$core$String(code81, $tmp88);
        panda$core$MutableString$append$panda$core$String(code81, &$s89);
        panda$core$MutableString$append$panda$core$String(code81, result75);
        panda$core$MutableString$append$panda$core$String(code81, &$s90);
        separator91 = &$s92;
        panda$core$Int64 $tmp94 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp95 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp94, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp93, ((panda$core$Int64) { 0 }), $tmp95, ((panda$core$Bit) { false }));
        int64_t $tmp97 = $tmp93.min.value;
        panda$core$Int64 i96 = { $tmp97 };
        int64_t $tmp99 = $tmp93.max.value;
        bool $tmp100 = $tmp93.inclusive.value;
        if ($tmp100) goto $l107; else goto $l108;
        $l107:;
        if ($tmp97 <= $tmp99) goto $l101; else goto $l103;
        $l108:;
        if ($tmp97 < $tmp99) goto $l101; else goto $l103;
        $l101:;
        {
            panda$core$MutableString$append$panda$core$String(code81, separator91);
            panda$core$Object* $tmp109 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i96);
            panda$core$String* $tmp110 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp109));
            panda$core$MutableString$append$panda$core$String(code81, $tmp110);
            separator91 = &$s111;
        }
        $l104:;
        int64_t $tmp113 = $tmp99 - i96.value;
        if ($tmp100) goto $l114; else goto $l115;
        $l114:;
        if ((uint64_t) $tmp113 >= 1) goto $l112; else goto $l103;
        $l115:;
        if ((uint64_t) $tmp113 > 1) goto $l112; else goto $l103;
        $l112:;
        i96.value += 1;
        goto $l101;
        $l103:;
        panda$core$MutableString$append$panda$core$String(code81, &$s118);
        panda$core$String* $tmp119 = panda$core$MutableString$finish$R$panda$core$String(code81);
        (($fn120) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp119);
        return result75;
    }
    }
    panda$core$String* $tmp121 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self->hCodeGen, p_t);
    return $tmp121;
}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
    org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->hCodeGen, p_compiler);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp122 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp122;
    panda$core$Int64$wrapper* $tmp124;
    $tmp124 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp124->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp124->refCount = 1;
    $tmp124->value = self->varCount;
    panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s123, ((panda$core$Object*) $tmp124));
    panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp125, &$s126);
    return $tmp127;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp128 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp128;
    panda$core$Int64$wrapper* $tmp130;
    $tmp130 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp130->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp130->refCount = 1;
    $tmp130->value = self->varCount;
    panda$core$String* $tmp131 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s129, ((panda$core$Object*) $tmp130));
    panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp131, &$s132);
    return $tmp133;
}
void org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp134 = panda$core$String$convert$R$panda$core$String(p_label);
    panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s135);
    (($fn137) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp136);
    self->currentBlock = p_label;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt) {
    switch (p_stmt->kind.value) {
        case 1000:
        {
            bool $tmp138 = ((panda$core$Bit) { p_stmt->children == NULL }).value;
            if ($tmp138) goto $l139;
            panda$core$Int64 $tmp140 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp140, ((panda$core$Int64) { 0 }));
            $tmp138 = $tmp141.value;
            $l139:;
            panda$core$Bit $tmp142 = { $tmp138 };
            if ($tmp142.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp143 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp144 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp143, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp145 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, $tmp144);
            panda$core$Bit $tmp146 = org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp145));
            return $tmp146;
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
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl158;
    panda$core$Int64 result167;
    panda$collections$Iterator* f$Iter168;
    org$pandalanguage$pandac$FieldDecl* f181;
    panda$core$Int64 size191;
    panda$core$Int64 align193;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp147 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp147.value) {
    {
        panda$core$Bit $tmp149 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s148);
        if ($tmp149.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp151 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s150);
        if ($tmp151.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp153 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s152);
        if ($tmp153.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp155 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s154);
        PANDA_ASSERT($tmp155.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp156 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp157 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp156);
    if ($tmp157.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp159 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl158 = $tmp159;
    PANDA_ASSERT(((panda$core$Bit) { cl158 != NULL }).value);
    panda$core$Bit $tmp161 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl158);
    panda$core$Bit $tmp162 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp161);
    bool $tmp160 = $tmp162.value;
    if ($tmp160) goto $l163;
    panda$core$Bit $tmp165 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl158)->name, &$s164);
    $tmp160 = $tmp165.value;
    $l163:;
    panda$core$Bit $tmp166 = { $tmp160 };
    if ($tmp166.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result167 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp169 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl158);
        ITable* $tmp170 = ((panda$collections$Iterable*) $tmp169)->$class->itable;
        while ($tmp170->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp170 = $tmp170->next;
        }
        $fn172 $tmp171 = $tmp170->methods[0];
        panda$collections$Iterator* $tmp173 = $tmp171(((panda$collections$Iterable*) $tmp169));
        f$Iter168 = $tmp173;
        $l174:;
        ITable* $tmp176 = f$Iter168->$class->itable;
        while ($tmp176->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp176 = $tmp176->next;
        }
        $fn178 $tmp177 = $tmp176->methods[0];
        panda$core$Bit $tmp179 = $tmp177(f$Iter168);
        panda$core$Bit $tmp180 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp179);
        if (!$tmp180.value) goto $l175;
        {
            ITable* $tmp182 = f$Iter168->$class->itable;
            while ($tmp182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp182 = $tmp182->next;
            }
            $fn184 $tmp183 = $tmp182->methods[1];
            panda$core$Object* $tmp185 = $tmp183(f$Iter168);
            f181 = ((org$pandalanguage$pandac$FieldDecl*) $tmp185);
            panda$core$Bit $tmp186 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f181->annotations);
            if ($tmp186.value) {
            {
                goto $l174;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f181);
            org$pandalanguage$pandac$Type* $tmp187 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp188 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f181->type, $tmp187);
            if ($tmp188.value) {
            {
                panda$core$Int64 $tmp189 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl158);
                panda$core$Int64 $tmp190 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result167, $tmp189);
                result167 = $tmp190;
            }
            }
            else {
            {
                panda$core$Int64 $tmp192 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f181->type);
                size191 = $tmp192;
                panda$core$Int64 $tmp194 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result167, size191);
                align193 = $tmp194;
                panda$core$Bit $tmp195 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align193, ((panda$core$Int64) { 0 }));
                if ($tmp195.value) {
                {
                    panda$core$Int64 $tmp196 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size191, align193);
                    panda$core$Int64 $tmp197 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result167, $tmp196);
                    result167 = $tmp197;
                }
                }
                panda$core$Int64 $tmp198 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result167, size191);
                panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp198, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp199.value);
                panda$core$Int64 $tmp200 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result167, size191);
                result167 = $tmp200;
            }
            }
        }
        goto $l174;
        $l175:;
    }
    panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp201.value) {
    {
        panda$core$Int64 $tmp202 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result167, ((panda$core$Int64) { 1 }));
        result167 = $tmp202;
    }
    }
    return result167;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp203 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp204 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp203, ((panda$core$Int64) { 8 }));
    return $tmp204;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl205;
    panda$core$Int64 result211;
    panda$collections$Iterator* f$Iter214;
    org$pandalanguage$pandac$FieldDecl* f227;
    panda$core$Int64 size236;
    panda$core$Int64 align238;
    org$pandalanguage$pandac$ClassDecl* $tmp206 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl205 = $tmp206;
    bool $tmp207 = ((panda$core$Bit) { cl205 != NULL }).value;
    if (!$tmp207) goto $l208;
    panda$core$Bit $tmp209 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl205);
    $tmp207 = $tmp209.value;
    $l208:;
    panda$core$Bit $tmp210 = { $tmp207 };
    PANDA_ASSERT($tmp210.value);
    org$pandalanguage$pandac$Type* $tmp212 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp213 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp212);
    result211 = $tmp213;
    {
        panda$collections$ListView* $tmp215 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl205);
        ITable* $tmp216 = ((panda$collections$Iterable*) $tmp215)->$class->itable;
        while ($tmp216->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp216 = $tmp216->next;
        }
        $fn218 $tmp217 = $tmp216->methods[0];
        panda$collections$Iterator* $tmp219 = $tmp217(((panda$collections$Iterable*) $tmp215));
        f$Iter214 = $tmp219;
        $l220:;
        ITable* $tmp222 = f$Iter214->$class->itable;
        while ($tmp222->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp222 = $tmp222->next;
        }
        $fn224 $tmp223 = $tmp222->methods[0];
        panda$core$Bit $tmp225 = $tmp223(f$Iter214);
        panda$core$Bit $tmp226 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp225);
        if (!$tmp226.value) goto $l221;
        {
            ITable* $tmp228 = f$Iter214->$class->itable;
            while ($tmp228->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp228 = $tmp228->next;
            }
            $fn230 $tmp229 = $tmp228->methods[1];
            panda$core$Object* $tmp231 = $tmp229(f$Iter214);
            f227 = ((org$pandalanguage$pandac$FieldDecl*) $tmp231);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f227);
            org$pandalanguage$pandac$Type* $tmp232 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp233 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f227->type, $tmp232);
            if ($tmp233.value) {
            {
                panda$core$Int64 $tmp234 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl205);
                panda$core$Int64 $tmp235 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result211, $tmp234);
                result211 = $tmp235;
            }
            }
            else {
            {
                panda$core$Int64 $tmp237 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f227->type);
                size236 = $tmp237;
                panda$core$Int64 $tmp239 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result211, size236);
                align238 = $tmp239;
                panda$core$Bit $tmp240 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align238, ((panda$core$Int64) { 0 }));
                if ($tmp240.value) {
                {
                    panda$core$Int64 $tmp241 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size236, align238);
                    panda$core$Int64 $tmp242 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result211, $tmp241);
                    result211 = $tmp242;
                }
                }
                panda$core$Int64 $tmp243 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result211, size236);
                panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp243, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp244.value);
                panda$core$Int64 $tmp245 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result211, size236);
                result211 = $tmp245;
            }
            }
        }
        goto $l220;
        $l221:;
    }
    panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp246.value) {
    {
        panda$core$Int64 $tmp247 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result211, ((panda$core$Int64) { 1 }));
        result211 = $tmp247;
    }
    }
    return result211;
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp248 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp248.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp249 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    return $tmp249;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp250.value) {
    {
        panda$core$Object* $tmp251 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp252 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp251));
        return $tmp252;
    }
    }
    panda$core$String* $tmp253 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp254 = panda$core$String$convert$R$panda$core$String($tmp253);
    panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp254, &$s255);
    return $tmp256;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp257 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp257, &$s258);
    return $tmp259;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType260;
    panda$core$MutableString* result262;
    panda$core$Char8 $tmp269;
    panda$core$Char8 $tmp277;
    panda$core$Range$LTpanda$core$Int64$GT $tmp278;
    org$pandalanguage$pandac$Type* $tmp261 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType260 = $tmp261;
    panda$core$MutableString* $tmp263 = (panda$core$MutableString*) malloc(48);
    $tmp263->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp263->refCount.value = 1;
    panda$core$MutableString$init($tmp263);
    result262 = $tmp263;
    panda$core$Int64 $tmp265 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType260->subtypes);
    panda$core$Int64 $tmp266 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp265, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp267 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType260->subtypes, $tmp266);
    panda$core$String* $tmp268 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp267));
    panda$core$MutableString$append$panda$core$String(result262, $tmp268);
    panda$core$Char8$init$panda$core$UInt8(&$tmp269, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(result262, $tmp269);
    panda$core$Bit $tmp270 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp270.value);
    panda$core$String* $tmp271 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp272 = panda$core$String$convert$R$panda$core$String($tmp271);
    panda$core$String* $tmp274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp272, &$s273);
    panda$core$MutableString$append$panda$core$String(result262, $tmp274);
    panda$core$Bit $tmp275 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp275.value) {
    {
        panda$core$MutableString$append$panda$core$String(result262, &$s276);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp277, ((panda$core$UInt8) { 42 }));
    panda$core$MutableString$append$panda$core$Char8(result262, $tmp277);
    panda$core$Int64 $tmp279 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType260->subtypes);
    panda$core$Int64 $tmp280 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp279, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp278, ((panda$core$Int64) { 0 }), $tmp280, ((panda$core$Bit) { false }));
    int64_t $tmp282 = $tmp278.min.value;
    panda$core$Int64 i281 = { $tmp282 };
    int64_t $tmp284 = $tmp278.max.value;
    bool $tmp285 = $tmp278.inclusive.value;
    if ($tmp285) goto $l292; else goto $l293;
    $l292:;
    if ($tmp282 <= $tmp284) goto $l286; else goto $l288;
    $l293:;
    if ($tmp282 < $tmp284) goto $l286; else goto $l288;
    $l286:;
    {
        panda$core$MutableString$append$panda$core$String(result262, &$s294);
        panda$core$Object* $tmp295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType260->subtypes, i281);
        panda$core$String* $tmp296 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp295));
        panda$core$MutableString$append$panda$core$String(result262, $tmp296);
    }
    $l289:;
    int64_t $tmp298 = $tmp284 - i281.value;
    if ($tmp285) goto $l299; else goto $l300;
    $l299:;
    if ((uint64_t) $tmp298 >= 1) goto $l297; else goto $l288;
    $l300:;
    if ((uint64_t) $tmp298 > 1) goto $l297; else goto $l288;
    $l297:;
    i281.value += 1;
    goto $l286;
    $l288:;
    panda$core$MutableString$append$panda$core$String(result262, &$s303);
    panda$core$String* $tmp304 = panda$core$MutableString$finish$R$panda$core$String(result262);
    return $tmp304;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp305.value);
    panda$core$Object* $tmp306 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp307 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp306));
    panda$core$String* $tmp308 = panda$core$String$convert$R$panda$core$String($tmp307);
    panda$core$String* $tmp310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp308, &$s309);
    return $tmp310;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces311;
    panda$core$String* previous314;
    panda$collections$Iterator* intfType$Iter316;
    org$pandalanguage$pandac$Type* intfType328;
    org$pandalanguage$pandac$ClassDecl* intf333;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC335;
    panda$collections$ListView* methods337;
    panda$core$String* name339;
    panda$core$MutableString* result348;
    panda$core$String* separator378;
    panda$collections$Iterator* m$Iter380;
    org$pandalanguage$pandac$MethodDecl* m392;
    org$pandalanguage$pandac$Type* $tmp312 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp313 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp312);
    interfaces311 = $tmp313;
    previous314 = &$s315;
    {
        ITable* $tmp317 = ((panda$collections$Iterable*) interfaces311)->$class->itable;
        while ($tmp317->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp317 = $tmp317->next;
        }
        $fn319 $tmp318 = $tmp317->methods[0];
        panda$collections$Iterator* $tmp320 = $tmp318(((panda$collections$Iterable*) interfaces311));
        intfType$Iter316 = $tmp320;
        $l321:;
        ITable* $tmp323 = intfType$Iter316->$class->itable;
        while ($tmp323->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp323 = $tmp323->next;
        }
        $fn325 $tmp324 = $tmp323->methods[0];
        panda$core$Bit $tmp326 = $tmp324(intfType$Iter316);
        panda$core$Bit $tmp327 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp326);
        if (!$tmp327.value) goto $l322;
        {
            ITable* $tmp329 = intfType$Iter316->$class->itable;
            while ($tmp329->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp329 = $tmp329->next;
            }
            $fn331 $tmp330 = $tmp329->methods[1];
            panda$core$Object* $tmp332 = $tmp330(intfType$Iter316);
            intfType328 = ((org$pandalanguage$pandac$Type*) $tmp332);
            org$pandalanguage$pandac$ClassDecl* $tmp334 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType328);
            intf333 = $tmp334;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp336 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf333);
            intfCC335 = $tmp336;
            panda$collections$ListView* $tmp338 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType328);
            methods337 = $tmp338;
            panda$core$String* $tmp340 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp341 = panda$core$String$convert$R$panda$core$String($tmp340);
            panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp341, &$s342);
            panda$core$String* $tmp344 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf333)->name);
            panda$core$String* $tmp345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, $tmp344);
            panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp345, &$s346);
            name339 = $tmp347;
            panda$core$MutableString* $tmp349 = (panda$core$MutableString*) malloc(48);
            $tmp349->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp349->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp352 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp353 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp352);
            panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s351, $tmp353);
            panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, &$s355);
            ITable* $tmp358 = ((panda$collections$CollectionView*) methods337)->$class->itable;
            while ($tmp358->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp358 = $tmp358->next;
            }
            $fn360 $tmp359 = $tmp358->methods[0];
            panda$core$Int64 $tmp361 = $tmp359(((panda$collections$CollectionView*) methods337));
            panda$core$Int64$wrapper* $tmp362;
            $tmp362 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp362->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp362->refCount = 1;
            $tmp362->value = $tmp361;
            panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s357, ((panda$core$Object*) $tmp362));
            panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp363, &$s364);
            panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp365, name339);
            panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp366, &$s367);
            panda$core$String* $tmp369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp356, $tmp368);
            panda$core$String* $tmp371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s370, intfCC335->name);
            panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp371, &$s372);
            panda$core$String* $tmp374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp373, previous314);
            panda$core$String* $tmp376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp374, &$s375);
            panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp369, $tmp376);
            panda$core$MutableString$init$panda$core$String($tmp349, $tmp377);
            result348 = $tmp349;
            separator378 = &$s379;
            {
                ITable* $tmp381 = ((panda$collections$Iterable*) methods337)->$class->itable;
                while ($tmp381->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp381 = $tmp381->next;
                }
                $fn383 $tmp382 = $tmp381->methods[0];
                panda$collections$Iterator* $tmp384 = $tmp382(((panda$collections$Iterable*) methods337));
                m$Iter380 = $tmp384;
                $l385:;
                ITable* $tmp387 = m$Iter380->$class->itable;
                while ($tmp387->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp387 = $tmp387->next;
                }
                $fn389 $tmp388 = $tmp387->methods[0];
                panda$core$Bit $tmp390 = $tmp388(m$Iter380);
                panda$core$Bit $tmp391 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp390);
                if (!$tmp391.value) goto $l386;
                {
                    ITable* $tmp393 = m$Iter380->$class->itable;
                    while ($tmp393->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp393 = $tmp393->next;
                    }
                    $fn395 $tmp394 = $tmp393->methods[1];
                    panda$core$Object* $tmp396 = $tmp394(m$Iter380);
                    m392 = ((org$pandalanguage$pandac$MethodDecl*) $tmp396);
                    panda$core$MutableString$append$panda$core$String(result348, separator378);
                    separator378 = &$s397;
                    panda$core$Bit $tmp398 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m392->annotations);
                    if ($tmp398.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result348, &$s399);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp400 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m392);
                        panda$core$MutableString$append$panda$core$String(result348, $tmp400);
                    }
                    }
                }
                goto $l385;
                $l386:;
            }
            panda$core$MutableString$append$panda$core$String(result348, &$s401);
            panda$core$String* $tmp402 = panda$core$MutableString$finish$R$panda$core$String(result348);
            (($fn403) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp402);
            panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s404, name339);
            panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, &$s406);
            previous314 = $tmp407;
        }
        goto $l321;
        $l322:;
    }
    return previous314;
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer408;
    panda$io$IndentedOutputStream* out411;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found414;
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
    panda$io$MemoryOutputStream* $tmp409 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp409->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp409->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp409);
    outBuffer408 = $tmp409;
    panda$io$IndentedOutputStream* $tmp412 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp412->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp412->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp412, ((panda$io$OutputStream*) outBuffer408));
    out411 = $tmp412;
    panda$core$Object* $tmp415 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found414 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp415);
    if (((panda$core$Bit) { found414 != NULL }).value) {
    {
        return found414;
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
    panda$core$MutableString* $tmp431 = (panda$core$MutableString*) malloc(48);
    $tmp431->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp431->refCount.value = 1;
    panda$core$String* $tmp433 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType422);
    panda$core$MutableString$init$panda$core$String($tmp431, $tmp433);
    resultType430 = $tmp431;
    panda$core$String* $tmp434 = panda$core$MutableString$convert$R$panda$core$String(resultType430);
    panda$core$String* $tmp436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp434, &$s435);
    panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp436, resultName426);
    panda$core$String* $tmp439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp437, &$s438);
    (($fn440) ((panda$io$OutputStream*) out411)->$class->vtable[16])(((panda$io$OutputStream*) out411), $tmp439);
    panda$core$String* $tmp442 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t441 = $tmp442;
    panda$core$String* $tmp443 = panda$core$String$convert$R$panda$core$String(self_t441);
    panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, &$s444);
    (($fn446) ((panda$io$OutputStream*) out411)->$class->vtable[16])(((panda$io$OutputStream*) out411), $tmp445);
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
        $tmp471 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp471->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp471->refCount = 1;
        $tmp471->value = i450;
        panda$core$String* $tmp472 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp470, ((panda$core$Object*) $tmp471));
        panda$core$String* $tmp474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp472, &$s473);
        (($fn475) ((panda$io$OutputStream*) out411)->$class->vtable[16])(((panda$io$OutputStream*) out411), $tmp474);
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
    (($fn483) ((panda$io$OutputStream*) out411)->$class->vtable[19])(((panda$io$OutputStream*) out411), &$s482);
    panda$core$Int64 $tmp484 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out411->level, ((panda$core$Int64) { 1 }));
    out411->level = $tmp484;
    panda$core$MutableString$append$panda$core$String(resultType430, &$s485);
    panda$collections$Array* $tmp487 = (panda$collections$Array*) malloc(40);
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
        $tmp506 = (panda$core$Int64$wrapper*) malloc(24);
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
            panda$core$String* $tmp515 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p504, ((org$pandalanguage$pandac$Type*) $tmp513), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp514)->type, out411);
            panda$collections$Array$add$panda$collections$Array$T(casts486, ((panda$core$Object*) $tmp515));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts486, ((panda$core$Object*) p504));
        }
        }
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
        (($fn528) ((panda$io$OutputStream*) out411)->$class->vtable[16])(((panda$io$OutputStream*) out411), $tmp527);
    }
    }
    panda$core$String* $tmp529 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp530 = panda$core$String$convert$R$panda$core$String($tmp529);
    panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp530, &$s531);
    (($fn533) ((panda$io$OutputStream*) out411)->$class->vtable[16])(((panda$io$OutputStream*) out411), $tmp532);
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
        (($fn554) ((panda$io$OutputStream*) out411)->$class->vtable[16])(((panda$io$OutputStream*) out411), $tmp553);
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
    (($fn562) ((panda$io$OutputStream*) out411)->$class->vtable[19])(((panda$io$OutputStream*) out411), &$s561);
    org$pandalanguage$pandac$Type* $tmp563 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp564 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp563);
    if ($tmp564.value) {
    {
        panda$core$String* $tmp567 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s566, p_raw->returnType, effectiveReturnType422, out411);
        panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s565, $tmp567);
        panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, &$s569);
        (($fn571) ((panda$io$OutputStream*) out411)->$class->vtable[19])(((panda$io$OutputStream*) out411), $tmp570);
    }
    }
    panda$core$Int64 $tmp572 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out411->level, ((panda$core$Int64) { 1 }));
    out411->level = $tmp572;
    (($fn574) ((panda$io$OutputStream*) out411)->$class->vtable[19])(((panda$io$OutputStream*) out411), &$s573);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp576 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) malloc(32);
    $tmp576->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;
    $tmp576->refCount.value = 1;
    panda$core$String* $tmp578 = panda$core$MutableString$finish$R$panda$core$String(resultType430);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp576, resultName426, $tmp578);
    result575 = $tmp576;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result575));
    panda$core$String* $tmp579 = panda$io$MemoryOutputStream$finish$R$panda$core$String(outBuffer408);
    (($fn580) p_rawOut->$class->vtable[16])(p_rawOut, $tmp579);
    return result575;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod582;
    panda$core$String* result583;
    panda$core$String* selfType588;
    org$pandalanguage$pandac$Type* actualMethodType604;
    org$pandalanguage$pandac$Type* inheritedMethodType606;
    panda$core$Range$LTpanda$core$Int64$GT $tmp608;
    panda$collections$Array* parameters643;
    panda$core$Range$LTpanda$core$Int64$GT $tmp646;
    panda$collections$Array* children671;
    org$pandalanguage$pandac$Position $tmp676;
    panda$core$Range$LTpanda$core$Int64$GT $tmp687;
    panda$core$Bit $tmp581 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp581.value);
    oldMethod582 = self->currentMethod;
    self->currentMethod = p_m;
    panda$core$String* $tmp584 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp585 = panda$core$String$convert$R$panda$core$String($tmp584);
    panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, &$s586);
    result583 = $tmp587;
    panda$core$String* $tmp589 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp590 = panda$core$String$convert$R$panda$core$String($tmp589);
    panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp590, &$s591);
    selfType588 = $tmp592;
    panda$core$String* $tmp593 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp594 = panda$core$String$convert$R$panda$core$String($tmp593);
    panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp594, &$s595);
    panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, result583);
    panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp597, &$s598);
    panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, selfType588);
    panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp600, &$s601);
    (($fn603) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp602);
    org$pandalanguage$pandac$Type* $tmp605 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType604 = $tmp605;
    org$pandalanguage$pandac$Type* $tmp607 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType606 = $tmp607;
    panda$core$Int64 $tmp609 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp608, ((panda$core$Int64) { 0 }), $tmp609, ((panda$core$Bit) { false }));
    int64_t $tmp611 = $tmp608.min.value;
    panda$core$Int64 i610 = { $tmp611 };
    int64_t $tmp613 = $tmp608.max.value;
    bool $tmp614 = $tmp608.inclusive.value;
    if ($tmp614) goto $l621; else goto $l622;
    $l621:;
    if ($tmp611 <= $tmp613) goto $l615; else goto $l617;
    $l622:;
    if ($tmp611 < $tmp613) goto $l615; else goto $l617;
    $l615:;
    {
        panda$core$Object* $tmp624 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType606->subtypes, i610);
        panda$core$String* $tmp625 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp624));
        panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s623, $tmp625);
        panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp626, &$s627);
        panda$core$Object* $tmp629 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i610);
        panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp628, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp629)->name);
        panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp630, &$s631);
        (($fn633) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp632);
    }
    $l618:;
    int64_t $tmp635 = $tmp613 - i610.value;
    if ($tmp614) goto $l636; else goto $l637;
    $l636:;
    if ((uint64_t) $tmp635 >= 1) goto $l634; else goto $l617;
    $l637:;
    if ((uint64_t) $tmp635 > 1) goto $l634; else goto $l617;
    $l634:;
    i610.value += 1;
    goto $l615;
    $l617:;
    (($fn641) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s640);
    panda$core$Int64 $tmp642 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp642;
    panda$collections$Array* $tmp644 = (panda$collections$Array*) malloc(40);
    $tmp644->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp644->refCount.value = 1;
    panda$collections$Array$init($tmp644);
    parameters643 = $tmp644;
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
        panda$core$Object* $tmp662 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType606->subtypes, i648);
        panda$core$Object* $tmp663 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType604->subtypes, i648);
        panda$core$String* $tmp664 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp661)->name, ((org$pandalanguage$pandac$Type*) $tmp662), ((org$pandalanguage$pandac$Type*) $tmp663), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters643, ((panda$core$Object*) $tmp664));
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
    panda$collections$Array* $tmp672 = (panda$collections$Array*) malloc(40);
    $tmp672->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp672->refCount.value = 1;
    panda$collections$Array$init($tmp672);
    children671 = $tmp672;
    org$pandalanguage$pandac$IRNode* $tmp674 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp674->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp674->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp676);
    org$pandalanguage$pandac$Type* $tmp677 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp674, ((panda$core$Int64) { 1025 }), $tmp676, $tmp677);
    panda$collections$Array$add$panda$collections$Array$T(children671, ((panda$core$Object*) $tmp674));
    org$pandalanguage$pandac$Type* $tmp678 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp679 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp678);
    if ($tmp679.value) {
    {
        (($fn681) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s680);
    }
    }
    panda$core$String* $tmp682 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp683 = panda$core$String$convert$R$panda$core$String($tmp682);
    panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp683, &$s684);
    (($fn686) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp685);
    panda$core$Int64 $tmp688 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp687, ((panda$core$Int64) { 0 }), $tmp688, ((panda$core$Bit) { false }));
    int64_t $tmp690 = $tmp687.min.value;
    panda$core$Int64 i689 = { $tmp690 };
    int64_t $tmp692 = $tmp687.max.value;
    bool $tmp693 = $tmp687.inclusive.value;
    if ($tmp693) goto $l700; else goto $l701;
    $l700:;
    if ($tmp690 <= $tmp692) goto $l694; else goto $l696;
    $l701:;
    if ($tmp690 < $tmp692) goto $l694; else goto $l696;
    $l694:;
    {
        panda$core$Object* $tmp703 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters643, i689);
        panda$core$String* $tmp704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s702, ((panda$core$String*) $tmp703));
        panda$core$String* $tmp706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp704, &$s705);
        (($fn707) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp706);
    }
    $l697:;
    int64_t $tmp709 = $tmp692 - i689.value;
    if ($tmp693) goto $l710; else goto $l711;
    $l710:;
    if ((uint64_t) $tmp709 >= 1) goto $l708; else goto $l696;
    $l711:;
    if ((uint64_t) $tmp709 > 1) goto $l708; else goto $l696;
    $l708:;
    i689.value += 1;
    goto $l694;
    $l696:;
    (($fn715) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s714);
    panda$core$Int64 $tmp716 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp716;
    (($fn718) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s717);
    self->currentMethod = oldMethod582;
    return result583;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces719;
    panda$core$String* previous722;
    panda$collections$Iterator* intfType$Iter724;
    org$pandalanguage$pandac$Type* intfType736;
    org$pandalanguage$pandac$ClassDecl* intf741;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC743;
    panda$collections$ListView* methods745;
    panda$core$String* name747;
    panda$core$MutableString* result756;
    panda$core$String* separator791;
    panda$collections$Iterator* m$Iter793;
    org$pandalanguage$pandac$MethodDecl* m805;
    org$pandalanguage$pandac$Type* $tmp720 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp721 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp720);
    interfaces719 = $tmp721;
    previous722 = &$s723;
    {
        ITable* $tmp725 = ((panda$collections$Iterable*) interfaces719)->$class->itable;
        while ($tmp725->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp725 = $tmp725->next;
        }
        $fn727 $tmp726 = $tmp725->methods[0];
        panda$collections$Iterator* $tmp728 = $tmp726(((panda$collections$Iterable*) interfaces719));
        intfType$Iter724 = $tmp728;
        $l729:;
        ITable* $tmp731 = intfType$Iter724->$class->itable;
        while ($tmp731->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp731 = $tmp731->next;
        }
        $fn733 $tmp732 = $tmp731->methods[0];
        panda$core$Bit $tmp734 = $tmp732(intfType$Iter724);
        panda$core$Bit $tmp735 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp734);
        if (!$tmp735.value) goto $l730;
        {
            ITable* $tmp737 = intfType$Iter724->$class->itable;
            while ($tmp737->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp737 = $tmp737->next;
            }
            $fn739 $tmp738 = $tmp737->methods[1];
            panda$core$Object* $tmp740 = $tmp738(intfType$Iter724);
            intfType736 = ((org$pandalanguage$pandac$Type*) $tmp740);
            org$pandalanguage$pandac$ClassDecl* $tmp742 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType736);
            intf741 = $tmp742;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp744 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf741);
            intfCC743 = $tmp744;
            panda$collections$ListView* $tmp746 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType736);
            methods745 = $tmp746;
            panda$core$String* $tmp748 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp749 = panda$core$String$convert$R$panda$core$String($tmp748);
            panda$core$String* $tmp751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp749, &$s750);
            panda$core$String* $tmp752 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf741)->name);
            panda$core$String* $tmp753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp751, $tmp752);
            panda$core$String* $tmp755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp753, &$s754);
            name747 = $tmp755;
            panda$core$MutableString* $tmp757 = (panda$core$MutableString*) malloc(48);
            $tmp757->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp757->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp760 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp761 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp760);
            panda$core$String* $tmp762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s759, $tmp761);
            panda$core$String* $tmp764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp762, &$s763);
            ITable* $tmp766 = ((panda$collections$CollectionView*) methods745)->$class->itable;
            while ($tmp766->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp766 = $tmp766->next;
            }
            $fn768 $tmp767 = $tmp766->methods[0];
            panda$core$Int64 $tmp769 = $tmp767(((panda$collections$CollectionView*) methods745));
            panda$core$Int64$wrapper* $tmp770;
            $tmp770 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp770->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp770->refCount = 1;
            $tmp770->value = $tmp769;
            panda$core$String* $tmp771 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s765, ((panda$core$Object*) $tmp770));
            panda$core$String* $tmp773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp771, &$s772);
            panda$core$String* $tmp774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp773, name747);
            panda$core$String* $tmp776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp774, &$s775);
            panda$core$String* $tmp777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp764, $tmp776);
            org$pandalanguage$pandac$Type* $tmp779 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp780 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp779);
            panda$core$String* $tmp781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s778, $tmp780);
            panda$core$String* $tmp783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp781, &$s782);
            panda$core$String* $tmp784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp783, intfCC743->name);
            panda$core$String* $tmp786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp784, &$s785);
            panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp786, previous722);
            panda$core$String* $tmp789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp787, &$s788);
            panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp777, $tmp789);
            panda$core$MutableString$init$panda$core$String($tmp757, $tmp790);
            result756 = $tmp757;
            separator791 = &$s792;
            {
                ITable* $tmp794 = ((panda$collections$Iterable*) methods745)->$class->itable;
                while ($tmp794->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp794 = $tmp794->next;
                }
                $fn796 $tmp795 = $tmp794->methods[0];
                panda$collections$Iterator* $tmp797 = $tmp795(((panda$collections$Iterable*) methods745));
                m$Iter793 = $tmp797;
                $l798:;
                ITable* $tmp800 = m$Iter793->$class->itable;
                while ($tmp800->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp800 = $tmp800->next;
                }
                $fn802 $tmp801 = $tmp800->methods[0];
                panda$core$Bit $tmp803 = $tmp801(m$Iter793);
                panda$core$Bit $tmp804 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp803);
                if (!$tmp804.value) goto $l799;
                {
                    ITable* $tmp806 = m$Iter793->$class->itable;
                    while ($tmp806->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp806 = $tmp806->next;
                    }
                    $fn808 $tmp807 = $tmp806->methods[1];
                    panda$core$Object* $tmp809 = $tmp807(m$Iter793);
                    m805 = ((org$pandalanguage$pandac$MethodDecl*) $tmp809);
                    panda$core$MutableString$append$panda$core$String(result756, separator791);
                    separator791 = &$s810;
                    panda$core$Bit $tmp811 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m805->annotations);
                    if ($tmp811.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result756, &$s812);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp813 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m805, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result756, $tmp813);
                    }
                    }
                }
                goto $l798;
                $l799:;
            }
            panda$core$MutableString$append$panda$core$String(result756, &$s814);
            panda$core$String* $tmp815 = panda$core$MutableString$finish$R$panda$core$String(result756);
            (($fn816) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp815);
            panda$core$String* $tmp818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s817, name747);
            panda$core$String* $tmp820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp818, &$s819);
            previous722 = $tmp820;
        }
        goto $l729;
        $l730:;
    }
    return previous722;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp821 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp821;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result823;
    org$pandalanguage$pandac$Type* declared824;
    org$pandalanguage$pandac$Type* inherited827;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim830;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    panda$core$Bit $tmp822 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp822.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp825 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp826 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp825);
    declared824 = $tmp826;
    org$pandalanguage$pandac$Type* $tmp828 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited827 = $tmp828;
    panda$core$Bit $tmp829 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared824, inherited827);
    if ($tmp829.value) {
    {
        org$pandalanguage$pandac$Type* $tmp831 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp832 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp831, ((panda$io$OutputStream*) self->shims));
        shim830 = $tmp832;
        result823 = shim830->name;
    }
    }
    else {
    {
        panda$core$String* $tmp833 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        result823 = $tmp833;
    }
    }
    return result823;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result834;
    panda$core$String* type836;
    panda$collections$ListView* vtable847;
    panda$core$String* superPtr857;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC858;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant866;
    panda$core$MutableString* code870;
    panda$core$String* separator891;
    panda$collections$Iterator* m$Iter893;
    org$pandalanguage$pandac$MethodDecl* m905;
    panda$core$Object* $tmp835 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result834 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp835);
    if (((panda$core$Bit) { result834 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        panda$core$Bit $tmp837 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp837.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp838 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp838->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp838->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp840 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp841 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp840)->name);
            panda$core$String* $tmp842 = panda$core$String$convert$R$panda$core$String($tmp841);
            panda$core$String* $tmp844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp842, &$s843);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp838, $tmp844, &$s845);
            result834 = $tmp838;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result834));
            panda$core$Object* $tmp846 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp846);
        }
        }
        panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp848 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable847 = $tmp848;
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp849 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
        $tmp849->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
        $tmp849->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp851 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp852 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp851)->name);
        panda$core$String* $tmp853 = panda$core$String$convert$R$panda$core$String($tmp852);
        panda$core$String* $tmp855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp853, &$s854);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp849, $tmp855, &$s856);
        result834 = $tmp849;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result834));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp859 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp860 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp859);
            superCC858 = $tmp860;
            panda$core$String* $tmp862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s861, superCC858->name);
            panda$core$String* $tmp864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp862, &$s863);
            superPtr857 = $tmp864;
        }
        }
        else {
        {
            superPtr857 = &$s865;
        }
        }
        org$pandalanguage$pandac$Type* $tmp867 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp868 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp867);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp869 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp868);
        clConstant866 = $tmp869;
        panda$core$MutableString* $tmp871 = (panda$core$MutableString*) malloc(48);
        $tmp871->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp871->refCount.value = 1;
        panda$core$String* $tmp873 = panda$core$String$convert$R$panda$core$String(result834->name);
        panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp873, &$s874);
        panda$core$String* $tmp876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp875, result834->name);
        panda$core$String* $tmp878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp876, &$s877);
        panda$core$String* $tmp880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s879, clConstant866->name);
        panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp880, &$s881);
        panda$core$String* $tmp883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp882, superPtr857);
        panda$core$String* $tmp885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp883, &$s884);
        panda$core$String* $tmp886 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp885, $tmp886);
        panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp887, &$s888);
        panda$core$String* $tmp890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp878, $tmp889);
        panda$core$MutableString$init$panda$core$String($tmp871, $tmp890);
        code870 = $tmp871;
        separator891 = &$s892;
        {
            ITable* $tmp894 = ((panda$collections$Iterable*) vtable847)->$class->itable;
            while ($tmp894->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp894 = $tmp894->next;
            }
            $fn896 $tmp895 = $tmp894->methods[0];
            panda$collections$Iterator* $tmp897 = $tmp895(((panda$collections$Iterable*) vtable847));
            m$Iter893 = $tmp897;
            $l898:;
            ITable* $tmp900 = m$Iter893->$class->itable;
            while ($tmp900->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp900 = $tmp900->next;
            }
            $fn902 $tmp901 = $tmp900->methods[0];
            panda$core$Bit $tmp903 = $tmp901(m$Iter893);
            panda$core$Bit $tmp904 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp903);
            if (!$tmp904.value) goto $l899;
            {
                ITable* $tmp906 = m$Iter893->$class->itable;
                while ($tmp906->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp906 = $tmp906->next;
                }
                $fn908 $tmp907 = $tmp906->methods[1];
                panda$core$Object* $tmp909 = $tmp907(m$Iter893);
                m905 = ((org$pandalanguage$pandac$MethodDecl*) $tmp909);
                panda$core$MutableString$append$panda$core$String(code870, separator891);
                panda$core$Bit $tmp910 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m905->annotations);
                if ($tmp910.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code870, &$s911);
                }
                }
                else {
                {
                    panda$core$String* $tmp912 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m905);
                    panda$core$MutableString$append$panda$core$String(code870, $tmp912);
                }
                }
                separator891 = &$s913;
            }
            goto $l898;
            $l899:;
        }
        panda$core$MutableString$append$panda$core$String(code870, &$s914);
        panda$core$String* $tmp915 = panda$core$MutableString$finish$R$panda$core$String(code870);
        (($fn916) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp915);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    }
    }
    return result834;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name917;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result922;
    panda$core$String* type926;
    org$pandalanguage$pandac$ClassDecl* value937;
    panda$collections$ListView* valueVTable940;
    panda$collections$ListView* vtable949;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC951;
    panda$core$String* superCast954;
    panda$core$String* itable959;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant961;
    panda$core$MutableString* code965;
    panda$core$String* separator985;
    panda$core$Range$LTpanda$core$Int64$GT $tmp987;
    org$pandalanguage$pandac$MethodDecl* m1005;
    panda$core$String* methodName1010;
    panda$core$String* $tmp918 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp919 = panda$core$String$convert$R$panda$core$String($tmp918);
    panda$core$String* $tmp921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp919, &$s920);
    name917 = $tmp921;
    panda$core$Object* $tmp923 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name917));
    result922 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp923);
    if (((panda$core$Bit) { result922 == NULL }).value) {
    {
        panda$core$Bit $tmp924 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp924.value) {
        {
            org$pandalanguage$pandac$Type* $tmp925 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp925);
            type926 = &$s927;
            panda$core$String* $tmp928 = panda$core$String$convert$R$panda$core$String(name917);
            panda$core$String* $tmp930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp928, &$s929);
            panda$core$String* $tmp931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp930, type926);
            panda$core$String* $tmp933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp931, &$s932);
            (($fn934) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp933);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp935 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp935->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp935->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp935, name917, type926);
            result922 = $tmp935;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp938 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp939 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp938);
            value937 = $tmp939;
            panda$collections$ListView* $tmp941 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value937);
            valueVTable940 = $tmp941;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp942 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp942->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp942->refCount.value = 1;
            panda$core$String* $tmp944 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp945 = panda$core$String$convert$R$panda$core$String($tmp944);
            panda$core$String* $tmp947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp945, &$s946);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp942, $tmp947, &$s948);
            result922 = $tmp942;
            panda$collections$ListView* $tmp950 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable949 = $tmp950;
            org$pandalanguage$pandac$ClassDecl* $tmp952 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp953 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp952);
            superCC951 = $tmp953;
            panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s955, superCC951->name);
            panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp956, &$s957);
            superCast954 = $tmp958;
            panda$core$String* $tmp960 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable959 = $tmp960;
            org$pandalanguage$pandac$Type* $tmp962 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp963 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp962);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp964 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp963);
            clConstant961 = $tmp964;
            panda$core$MutableString* $tmp966 = (panda$core$MutableString*) malloc(48);
            $tmp966->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp966->refCount.value = 1;
            panda$core$String* $tmp968 = panda$core$String$convert$R$panda$core$String(result922->name);
            panda$core$String* $tmp970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp968, &$s969);
            panda$core$String* $tmp971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp970, result922->name);
            panda$core$String* $tmp973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp971, &$s972);
            panda$core$String* $tmp975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s974, clConstant961->name);
            panda$core$String* $tmp977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp975, &$s976);
            panda$core$String* $tmp978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp977, superCast954);
            panda$core$String* $tmp980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp978, &$s979);
            panda$core$String* $tmp981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp980, itable959);
            panda$core$String* $tmp983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp981, &$s982);
            panda$core$String* $tmp984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp973, $tmp983);
            panda$core$MutableString$init$panda$core$String($tmp966, $tmp984);
            code965 = $tmp966;
            separator985 = &$s986;
            ITable* $tmp988 = ((panda$collections$CollectionView*) valueVTable940)->$class->itable;
            while ($tmp988->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp988 = $tmp988->next;
            }
            $fn990 $tmp989 = $tmp988->methods[0];
            panda$core$Int64 $tmp991 = $tmp989(((panda$collections$CollectionView*) valueVTable940));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp987, ((panda$core$Int64) { 0 }), $tmp991, ((panda$core$Bit) { false }));
            int64_t $tmp993 = $tmp987.min.value;
            panda$core$Int64 i992 = { $tmp993 };
            int64_t $tmp995 = $tmp987.max.value;
            bool $tmp996 = $tmp987.inclusive.value;
            if ($tmp996) goto $l1003; else goto $l1004;
            $l1003:;
            if ($tmp993 <= $tmp995) goto $l997; else goto $l999;
            $l1004:;
            if ($tmp993 < $tmp995) goto $l997; else goto $l999;
            $l997:;
            {
                ITable* $tmp1006 = vtable949->$class->itable;
                while ($tmp1006->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1006 = $tmp1006->next;
                }
                $fn1008 $tmp1007 = $tmp1006->methods[0];
                panda$core$Object* $tmp1009 = $tmp1007(vtable949, i992);
                m1005 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1009);
                if (((panda$core$Bit) { ((panda$core$Object*) m1005->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1011 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1005, self->wrapperShims);
                    methodName1010 = $tmp1011;
                }
                }
                else {
                {
                    panda$core$String* $tmp1012 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1005);
                    methodName1010 = $tmp1012;
                    panda$core$Bit $tmp1013 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1005->owner);
                    if ($tmp1013.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1005);
                    }
                    }
                }
                }
                panda$core$String* $tmp1014 = panda$core$String$convert$R$panda$core$String(separator985);
                panda$core$String* $tmp1016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1014, &$s1015);
                panda$core$String* $tmp1017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1016, methodName1010);
                panda$core$String* $tmp1019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1017, &$s1018);
                panda$core$MutableString$append$panda$core$String(code965, $tmp1019);
                separator985 = &$s1020;
            }
            $l1000:;
            int64_t $tmp1022 = $tmp995 - i992.value;
            if ($tmp996) goto $l1023; else goto $l1024;
            $l1023:;
            if ((uint64_t) $tmp1022 >= 1) goto $l1021; else goto $l999;
            $l1024:;
            if ((uint64_t) $tmp1022 > 1) goto $l1021; else goto $l999;
            $l1021:;
            i992.value += 1;
            goto $l997;
            $l999:;
            panda$core$MutableString$append$panda$core$String(code965, &$s1027);
            panda$core$String* $tmp1028 = panda$core$MutableString$finish$R$panda$core$String(code965);
            (($fn1029) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1028);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name917), ((panda$core$Object*) result922));
    }
    }
    return result922;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1035;
    panda$core$Bit $tmp1030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp1030.value) {
    {
        panda$core$String* $tmp1032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1031, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1032, &$s1033);
        return $tmp1034;
    }
    }
    panda$core$Object* $tmp1036 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1035 = ((panda$core$String*) $tmp1036);
    if (((panda$core$Bit) { result1035 == NULL }).value) {
    {
        panda$core$Int64 $tmp1037 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1037;
        panda$core$String* $tmp1038 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1038, &$s1039);
        panda$core$Int64$wrapper* $tmp1041;
        $tmp1041 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp1041->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp1041->refCount = 1;
        $tmp1041->value = self->varCount;
        panda$core$String* $tmp1042 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1040, ((panda$core$Object*) $tmp1041));
        panda$core$String* $tmp1044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1042, &$s1043);
        result1035 = $tmp1044;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1035));
    }
    }
    return result1035;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1045 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1045.value);
    panda$core$String* $tmp1046 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1047 = panda$core$String$convert$R$panda$core$String($tmp1046);
    panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, &$s1048);
    panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1050, &$s1051);
    return $tmp1052;
}
org$pandalanguage$pandac$CCodeGenerator$OpClass org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1053;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1054;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1055;
    switch (p_t->typeKind.value) {
        case 12:
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1053, ((panda$core$Int64) { 0 }));
            return $tmp1053;
        }
        break;
        case 13:
        case 19:
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1054, ((panda$core$Int64) { 1 }));
            return $tmp1054;
        }
        break;
        case 20:
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1055, ((panda$core$Int64) { 2 }));
            return $tmp1055;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1056;
    panda$core$String* leftRef1058;
    panda$core$String* falseLabel1072;
    panda$core$String* rightRef1082;
    panda$core$String* $tmp1057 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1056 = $tmp1057;
    panda$core$String* $tmp1059 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1058 = $tmp1059;
    org$pandalanguage$pandac$Type* $tmp1060 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1061 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1060);
    if ($tmp1061.value) {
    {
        panda$core$String* $tmp1063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1058, &$s1062);
        leftRef1058 = $tmp1063;
    }
    }
    panda$core$String* $tmp1065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1064, result1056);
    panda$core$String* $tmp1067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1065, &$s1066);
    panda$core$String* $tmp1068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1067, leftRef1058);
    panda$core$String* $tmp1070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1068, &$s1069);
    (($fn1071) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1070);
    panda$core$String* $tmp1073 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1072 = $tmp1073;
    panda$core$String* $tmp1075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1074, result1056);
    panda$core$String* $tmp1077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1075, &$s1076);
    panda$core$String* $tmp1078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1077, falseLabel1072);
    panda$core$String* $tmp1080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1078, &$s1079);
    (($fn1081) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1080);
    panda$core$String* $tmp1083 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1082 = $tmp1083;
    org$pandalanguage$pandac$Type* $tmp1084 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1085 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1084);
    if ($tmp1085.value) {
    {
        panda$core$String* $tmp1087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1082, &$s1086);
        rightRef1082 = $tmp1087;
    }
    }
    panda$core$String* $tmp1088 = panda$core$String$convert$R$panda$core$String(result1056);
    panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1088, &$s1089);
    panda$core$String* $tmp1091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1090, rightRef1082);
    panda$core$String* $tmp1093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1091, &$s1092);
    (($fn1094) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1093);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1072, p_out);
    return result1056;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1095;
    panda$core$String* leftRef1097;
    panda$core$String* trueLabel1111;
    panda$core$String* rightRef1121;
    panda$core$String* $tmp1096 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1095 = $tmp1096;
    panda$core$String* $tmp1098 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1097 = $tmp1098;
    org$pandalanguage$pandac$Type* $tmp1099 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1100 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1099);
    if ($tmp1100.value) {
    {
        panda$core$String* $tmp1102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1097, &$s1101);
        leftRef1097 = $tmp1102;
    }
    }
    panda$core$String* $tmp1104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1103, result1095);
    panda$core$String* $tmp1106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1104, &$s1105);
    panda$core$String* $tmp1107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1106, leftRef1097);
    panda$core$String* $tmp1109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1107, &$s1108);
    (($fn1110) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1109);
    panda$core$String* $tmp1112 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1111 = $tmp1112;
    panda$core$String* $tmp1114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1113, result1095);
    panda$core$String* $tmp1116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1114, &$s1115);
    panda$core$String* $tmp1117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1116, trueLabel1111);
    panda$core$String* $tmp1119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1117, &$s1118);
    (($fn1120) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1119);
    panda$core$String* $tmp1122 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1121 = $tmp1122;
    org$pandalanguage$pandac$Type* $tmp1123 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1124 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1123);
    if ($tmp1124.value) {
    {
        panda$core$String* $tmp1126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1121, &$s1125);
        rightRef1121 = $tmp1126;
    }
    }
    panda$core$String* $tmp1127 = panda$core$String$convert$R$panda$core$String(result1095);
    panda$core$String* $tmp1129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1127, &$s1128);
    panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1129, rightRef1121);
    panda$core$String* $tmp1132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1130, &$s1131);
    (($fn1133) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1132);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1111, p_out);
    return result1095;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, org$pandalanguage$pandac$parser$Token$Kind p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1134;
    panda$core$Bit logical1135;
    org$pandalanguage$pandac$parser$Token$Kind $match$720_91136;
    panda$core$String* result1175;
    logical1135 = ((panda$core$Bit) { false });
    {
        $match$720_91136 = p_op;
        panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp1137.value) {
        {
            cOp1134 = &$s1138;
        }
        }
        else {
        panda$core$Bit $tmp1139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp1139.value) {
        {
            cOp1134 = &$s1140;
        }
        }
        else {
        panda$core$Bit $tmp1141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp1141.value) {
        {
            cOp1134 = &$s1142;
        }
        }
        else {
        panda$core$Bit $tmp1143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp1143.value) {
        {
            cOp1134 = &$s1144;
        }
        }
        else {
        panda$core$Bit $tmp1145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp1145.value) {
        {
            cOp1134 = &$s1146;
        }
        }
        else {
        panda$core$Bit $tmp1147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp1147.value) {
        {
            cOp1134 = &$s1148;
        }
        }
        else {
        panda$core$Bit $tmp1149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp1149.value) {
        {
            cOp1134 = &$s1150;
        }
        }
        else {
        panda$core$Bit $tmp1151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1151.value) {
        {
            cOp1134 = &$s1152;
        }
        }
        else {
        panda$core$Bit $tmp1153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp1153.value) {
        {
            cOp1134 = &$s1154;
        }
        }
        else {
        panda$core$Bit $tmp1155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp1155.value) {
        {
            cOp1134 = &$s1156;
        }
        }
        else {
        panda$core$Bit $tmp1158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 70 }));
        bool $tmp1157 = $tmp1158.value;
        if ($tmp1157) goto $l1159;
        panda$core$Bit $tmp1160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp1157 = $tmp1160.value;
        $l1159:;
        panda$core$Bit $tmp1161 = { $tmp1157 };
        if ($tmp1161.value) {
        {
            cOp1134 = &$s1162;
        }
        }
        else {
        panda$core$Bit $tmp1163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1163.value) {
        {
            cOp1134 = &$s1164;
            logical1135 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp1165.value) {
        {
            cOp1134 = &$s1166;
            logical1135 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp1167.value) {
        {
            cOp1134 = &$s1168;
            logical1135 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1169.value) {
        {
            cOp1134 = &$s1170;
            logical1135 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp1171.value) {
        {
            cOp1134 = &$s1172;
            logical1135 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$720_91136.$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp1173.value) {
        {
            logical1135 = ((panda$core$Bit) { true });
            cOp1134 = &$s1174;
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
    panda$core$String* $tmp1176 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1175 = $tmp1176;
    if (logical1135.value) {
    {
        (($fn1178) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1177);
    }
    }
    else {
    {
        panda$core$String* $tmp1179 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1180 = panda$core$String$convert$R$panda$core$String($tmp1179);
        panda$core$String* $tmp1182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1180, &$s1181);
        (($fn1183) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1182);
    }
    }
    panda$core$String* $tmp1184 = panda$core$String$convert$R$panda$core$String(result1175);
    panda$core$String* $tmp1186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1184, &$s1185);
    panda$core$String* $tmp1187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1186, p_leftRef);
    panda$core$String* $tmp1189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1187, &$s1188);
    panda$core$String* $tmp1190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1189, cOp1134);
    panda$core$String* $tmp1192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1190, &$s1191);
    panda$core$String* $tmp1193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1192, p_rightRef);
    panda$core$String* $tmp1195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1193, &$s1194);
    (($fn1196) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1195);
    return result1175;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1197;
    panda$core$String* rightRef1199;
    panda$core$String* $tmp1198 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1197 = $tmp1198;
    panda$core$String* $tmp1200 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1199 = $tmp1200;
    panda$core$String* $tmp1202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1201, leftRef1197);
    panda$core$String* $tmp1204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1202, &$s1203);
    panda$core$String* $tmp1205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1204, rightRef1199);
    panda$core$String* $tmp1207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1205, &$s1206);
    return $tmp1207;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1208;
    panda$core$String* rightRef1210;
    panda$core$String* $tmp1209 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1208 = $tmp1209;
    panda$core$String* $tmp1211 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1210 = $tmp1211;
    panda$core$String* $tmp1213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1212, leftRef1208);
    panda$core$String* $tmp1215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1213, &$s1214);
    panda$core$String* $tmp1216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1215, rightRef1210);
    panda$core$String* $tmp1218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1216, &$s1217);
    return $tmp1218;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$parser$Token$Kind $match$790_91220;
    panda$core$String* leftRef1229;
    panda$core$String* rightRef1231;
    panda$core$Bit $tmp1219 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1219.value);
    {
        $match$790_91220 = p_op;
        panda$core$Bit $tmp1221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$790_91220.$rawValue, ((panda$core$Int64) { 66 }));
        if ($tmp1221.value) {
        {
            panda$core$String* $tmp1222 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1222;
        }
        }
        else {
        panda$core$Bit $tmp1223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$790_91220.$rawValue, ((panda$core$Int64) { 68 }));
        if ($tmp1223.value) {
        {
            panda$core$String* $tmp1224 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1224;
        }
        }
        else {
        panda$core$Bit $tmp1225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$790_91220.$rawValue, ((panda$core$Int64) { 60 }));
        if ($tmp1225.value) {
        {
            panda$core$String* $tmp1226 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1226;
        }
        }
        else {
        panda$core$Bit $tmp1227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$790_91220.$rawValue, ((panda$core$Int64) { 61 }));
        if ($tmp1227.value) {
        {
            panda$core$String* $tmp1228 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1228;
        }
        }
        else {
        {
            panda$core$String* $tmp1230 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1229 = $tmp1230;
            panda$core$String* $tmp1232 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1231 = $tmp1232;
            panda$core$String* $tmp1233 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left->type, leftRef1229, p_op, rightRef1231, p_out);
            return $tmp1233;
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1234.value);
    panda$core$Int64 $tmp1235 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1235, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1236.value);
    panda$core$Object* $tmp1237 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1238 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1239 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1237), ((org$pandalanguage$pandac$parser$Token$Kind$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1238), p_out);
    return $tmp1239;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1240;
    panda$core$Int64 index1242;
    panda$collections$ListView* vtable1243;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1245;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1241 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1240 = $tmp1241;
    index1242 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1244 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1243 = $tmp1244;
    ITable* $tmp1246 = ((panda$collections$CollectionView*) vtable1243)->$class->itable;
    while ($tmp1246->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1246 = $tmp1246->next;
    }
    $fn1248 $tmp1247 = $tmp1246->methods[0];
    panda$core$Int64 $tmp1249 = $tmp1247(((panda$collections$CollectionView*) vtable1243));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1245, ((panda$core$Int64) { 0 }), $tmp1249, ((panda$core$Bit) { false }));
    int64_t $tmp1251 = $tmp1245.min.value;
    panda$core$Int64 i1250 = { $tmp1251 };
    int64_t $tmp1253 = $tmp1245.max.value;
    bool $tmp1254 = $tmp1245.inclusive.value;
    if ($tmp1254) goto $l1261; else goto $l1262;
    $l1261:;
    if ($tmp1251 <= $tmp1253) goto $l1255; else goto $l1257;
    $l1262:;
    if ($tmp1251 < $tmp1253) goto $l1255; else goto $l1257;
    $l1255:;
    {
        ITable* $tmp1263 = vtable1243->$class->itable;
        while ($tmp1263->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1263 = $tmp1263->next;
        }
        $fn1265 $tmp1264 = $tmp1263->methods[0];
        panda$core$Object* $tmp1266 = $tmp1264(vtable1243, i1250);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1266)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1242 = i1250;
            goto $l1257;
        }
        }
    }
    $l1258:;
    int64_t $tmp1268 = $tmp1253 - i1250.value;
    if ($tmp1254) goto $l1269; else goto $l1270;
    $l1269:;
    if ((uint64_t) $tmp1268 >= 1) goto $l1267; else goto $l1257;
    $l1270:;
    if ((uint64_t) $tmp1268 > 1) goto $l1267; else goto $l1257;
    $l1267:;
    i1250.value += 1;
    goto $l1255;
    $l1257:;
    panda$core$Bit $tmp1273 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1242, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1273.value);
    org$pandalanguage$pandac$Type* $tmp1275 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1276 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1275);
    panda$core$String* $tmp1277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1274, $tmp1276);
    panda$core$String* $tmp1279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1277, &$s1278);
    panda$core$String* $tmp1280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1279, p_target);
    panda$core$String* $tmp1282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1280, &$s1281);
    panda$core$Int64$wrapper* $tmp1283;
    $tmp1283 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1283->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1283->refCount = 1;
    $tmp1283->value = index1242;
    panda$core$String* $tmp1284 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1282, ((panda$core$Object*) $tmp1283));
    panda$core$String* $tmp1286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1284, &$s1285);
    return $tmp1286;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1287;
    panda$core$String* itable1289;
    panda$core$Int64 index1318;
    panda$collections$ListView* vtable1319;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1321;
    panda$core$String* result1358;
    panda$core$String* methodType1360;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1288 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1287 = $tmp1288;
    panda$core$String* $tmp1290 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1289 = $tmp1290;
    panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1291, itable1289);
    panda$core$String* $tmp1294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1292, &$s1293);
    panda$core$String* $tmp1295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1294, p_target);
    panda$core$String* $tmp1297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1295, &$s1296);
    (($fn1298) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1297);
    panda$core$String* $tmp1300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1299, itable1289);
    panda$core$String* $tmp1302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1300, &$s1301);
    panda$core$String* $tmp1303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1302, cc1287->name);
    panda$core$String* $tmp1305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1303, &$s1304);
    (($fn1306) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1305);
    panda$core$Int64 $tmp1307 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1307;
    panda$core$String* $tmp1308 = panda$core$String$convert$R$panda$core$String(itable1289);
    panda$core$String* $tmp1310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1308, &$s1309);
    panda$core$String* $tmp1311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1310, itable1289);
    panda$core$String* $tmp1313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1311, &$s1312);
    (($fn1314) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1313);
    panda$core$Int64 $tmp1315 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1315;
    (($fn1317) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1316);
    index1318 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1320 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1319 = $tmp1320;
    ITable* $tmp1322 = ((panda$collections$CollectionView*) vtable1319)->$class->itable;
    while ($tmp1322->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1322 = $tmp1322->next;
    }
    $fn1324 $tmp1323 = $tmp1322->methods[0];
    panda$core$Int64 $tmp1325 = $tmp1323(((panda$collections$CollectionView*) vtable1319));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1321, ((panda$core$Int64) { 0 }), $tmp1325, ((panda$core$Bit) { false }));
    int64_t $tmp1327 = $tmp1321.min.value;
    panda$core$Int64 i1326 = { $tmp1327 };
    int64_t $tmp1329 = $tmp1321.max.value;
    bool $tmp1330 = $tmp1321.inclusive.value;
    if ($tmp1330) goto $l1337; else goto $l1338;
    $l1337:;
    if ($tmp1327 <= $tmp1329) goto $l1331; else goto $l1333;
    $l1338:;
    if ($tmp1327 < $tmp1329) goto $l1331; else goto $l1333;
    $l1331:;
    {
        ITable* $tmp1339 = vtable1319->$class->itable;
        while ($tmp1339->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1339 = $tmp1339->next;
        }
        $fn1341 $tmp1340 = $tmp1339->methods[0];
        panda$core$Object* $tmp1342 = $tmp1340(vtable1319, i1326);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1342)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1318 = i1326;
            goto $l1333;
        }
        }
    }
    $l1334:;
    int64_t $tmp1344 = $tmp1329 - i1326.value;
    if ($tmp1330) goto $l1345; else goto $l1346;
    $l1345:;
    if ((uint64_t) $tmp1344 >= 1) goto $l1343; else goto $l1333;
    $l1346:;
    if ((uint64_t) $tmp1344 > 1) goto $l1343; else goto $l1333;
    $l1343:;
    i1326.value += 1;
    goto $l1331;
    $l1333:;
    org$pandalanguage$pandac$Type* $tmp1349 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1350 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1349);
    panda$collections$ListView* $tmp1351 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1350);
    ITable* $tmp1352 = ((panda$collections$CollectionView*) $tmp1351)->$class->itable;
    while ($tmp1352->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1352 = $tmp1352->next;
    }
    $fn1354 $tmp1353 = $tmp1352->methods[0];
    panda$core$Int64 $tmp1355 = $tmp1353(((panda$collections$CollectionView*) $tmp1351));
    panda$core$Int64 $tmp1356 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1318, $tmp1355);
    index1318 = $tmp1356;
    panda$core$Bit $tmp1357 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1318, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1357.value);
    panda$core$String* $tmp1359 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1358 = $tmp1359;
    org$pandalanguage$pandac$Type* $tmp1361 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1362 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1361);
    methodType1360 = $tmp1362;
    panda$core$String* $tmp1363 = panda$core$String$convert$R$panda$core$String(methodType1360);
    panda$core$String* $tmp1365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1363, &$s1364);
    panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1365, result1358);
    panda$core$String* $tmp1368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1366, &$s1367);
    panda$core$String* $tmp1369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1368, itable1289);
    panda$core$String* $tmp1371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1369, &$s1370);
    panda$core$Int64$wrapper* $tmp1372;
    $tmp1372 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1372->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1372->refCount = 1;
    $tmp1372->value = index1318;
    panda$core$String* $tmp1373 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1371, ((panda$core$Object*) $tmp1372));
    panda$core$String* $tmp1375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1373, &$s1374);
    (($fn1376) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1375);
    return result1358;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1378 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1377 = $tmp1378.value;
    if (!$tmp1377) goto $l1379;
    panda$core$Bit $tmp1380 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1377 = $tmp1380.value;
    $l1379:;
    panda$core$Bit $tmp1381 = { $tmp1377 };
    if ($tmp1381.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1382.value) {
        {
            panda$core$String* $tmp1383 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1383;
        }
        }
        else {
        {
            panda$core$String* $tmp1384 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1384;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1385 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1385.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1386 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1386;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m1387;
    panda$core$String* $match$869_91388;
    panda$core$String* count1393;
    panda$core$Int64 elementSize1399;
    panda$core$String* ptr1419;
    panda$core$String* ptr1430;
    panda$core$String* index1433;
    panda$core$String* ptr1446;
    panda$core$String* count1449;
    panda$core$Int64 elementSize1455;
    panda$core$String* ptr1478;
    panda$core$String* offset1481;
    m1387 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$869_91388 = ((org$pandalanguage$pandac$Symbol*) m1387->value)->name;
        panda$core$Bit $tmp1390 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$869_91388, &$s1389);
        if ($tmp1390.value) {
        {
            panda$core$Int64 $tmp1391 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1391, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1392.value);
            panda$core$Object* $tmp1394 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1395 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1394), p_out);
            count1393 = $tmp1395;
            org$pandalanguage$pandac$Type* $tmp1396 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1387);
            panda$core$Int64 $tmp1397 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1396->subtypes);
            panda$core$Bit $tmp1398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1397, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1398.value);
            org$pandalanguage$pandac$Type* $tmp1400 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1387);
            panda$core$Object* $tmp1401 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1400->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1402 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1401));
            elementSize1399 = $tmp1402;
            panda$core$String* $tmp1404 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1403, $tmp1404);
            panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1405, &$s1406);
            panda$core$String* $tmp1408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1407, count1393);
            panda$core$String* $tmp1410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1408, &$s1409);
            panda$core$Int64$wrapper* $tmp1411;
            $tmp1411 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp1411->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1411->refCount = 1;
            $tmp1411->value = elementSize1399;
            panda$core$String* $tmp1412 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1410, ((panda$core$Object*) $tmp1411));
            panda$core$String* $tmp1414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1412, &$s1413);
            return $tmp1414;
        }
        }
        else {
        panda$core$Bit $tmp1416 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$869_91388, &$s1415);
        if ($tmp1416.value) {
        {
            panda$core$Int64 $tmp1417 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1417, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1418.value);
            panda$core$Object* $tmp1420 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1421 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1420), p_out);
            ptr1419 = $tmp1421;
            panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1422, ptr1419);
            panda$core$String* $tmp1425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1423, &$s1424);
            return $tmp1425;
        }
        }
        else {
        panda$core$Bit $tmp1427 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$869_91388, &$s1426);
        if ($tmp1427.value) {
        {
            panda$core$Int64 $tmp1428 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1428, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1429.value);
            panda$core$Object* $tmp1431 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1432 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1431), p_out);
            ptr1430 = $tmp1432;
            panda$core$Object* $tmp1434 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1435 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1434), p_out);
            index1433 = $tmp1435;
            panda$core$String* $tmp1436 = panda$core$String$convert$R$panda$core$String(ptr1430);
            panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1436, &$s1437);
            panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1438, index1433);
            panda$core$String* $tmp1441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1439, &$s1440);
            return $tmp1441;
        }
        }
        else {
        panda$core$Bit $tmp1443 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$869_91388, &$s1442);
        if ($tmp1443.value) {
        {
            panda$core$Int64 $tmp1444 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1444, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1445.value);
            panda$core$Object* $tmp1447 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1448 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1447), p_out);
            ptr1446 = $tmp1448;
            panda$core$Object* $tmp1450 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1451 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1450), p_out);
            count1449 = $tmp1451;
            org$pandalanguage$pandac$Type* $tmp1452 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1387);
            panda$core$Int64 $tmp1453 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1452->subtypes);
            panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1453, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1454.value);
            org$pandalanguage$pandac$Type* $tmp1456 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1387);
            panda$core$Object* $tmp1457 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1456->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1458 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1457));
            elementSize1455 = $tmp1458;
            panda$core$String* $tmp1460 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1459, $tmp1460);
            panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1461, &$s1462);
            panda$core$String* $tmp1464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1463, ptr1446);
            panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1464, &$s1465);
            panda$core$String* $tmp1467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1466, count1449);
            panda$core$String* $tmp1469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1467, &$s1468);
            panda$core$Int64$wrapper* $tmp1470;
            $tmp1470 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp1470->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1470->refCount = 1;
            $tmp1470->value = elementSize1455;
            panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1469, ((panda$core$Object*) $tmp1470));
            panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1471, &$s1472);
            return $tmp1473;
        }
        }
        else {
        panda$core$Bit $tmp1475 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$869_91388, &$s1474);
        if ($tmp1475.value) {
        {
            panda$core$Int64 $tmp1476 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1476, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1477.value);
            panda$core$Object* $tmp1479 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1480 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1479), p_out);
            ptr1478 = $tmp1480;
            panda$core$Object* $tmp1482 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1483 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1482), p_out);
            offset1481 = $tmp1483;
            panda$core$String* $tmp1485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1484, ptr1478);
            panda$core$String* $tmp1487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1485, &$s1486);
            panda$core$String* $tmp1488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1487, offset1481);
            panda$core$String* $tmp1490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1488, &$s1489);
            return $tmp1490;
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
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m1492;
    panda$core$String* bit1503;
    panda$core$String* result1507;
    panda$core$String* bit1521;
    panda$core$String* result1525;
    panda$collections$Array* args1535;
    org$pandalanguage$pandac$Type* actualMethodType1539;
    panda$core$String* actualResultType1540;
    panda$core$Bit isSuper1541;
    panda$core$Int64 offset1561;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1566;
    panda$core$String* arg1581;
    panda$core$String* target1602;
    panda$core$String* methodRef1606;
    panda$core$Bit indirect1608;
    panda$core$String* result1610;
    panda$core$String* separator1612;
    panda$core$String* indirectVar1614;
    panda$collections$Iterator* arg$Iter1640;
    panda$core$String* arg1652;
    panda$core$Bit $tmp1491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp1491.value);
    m1492 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp1494 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1492->owner)->name, &$s1493);
    if ($tmp1494.value) {
    {
        panda$core$String* $tmp1495 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp1495;
    }
    }
    panda$core$Bit $tmp1496 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1492->owner);
    if ($tmp1496.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1492);
    }
    }
    panda$core$Bit $tmp1498 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1492->owner)->name, &$s1497);
    if ($tmp1498.value) {
    {
        panda$core$Bit $tmp1500 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1492)->name, &$s1499);
        if ($tmp1500.value) {
        {
            panda$core$Int64 $tmp1501 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1501, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1502.value);
            panda$core$Object* $tmp1504 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1505 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1506 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1504), ((org$pandalanguage$pandac$IRNode*) $tmp1505), p_out);
            bit1503 = $tmp1506;
            panda$core$String* $tmp1508 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1507 = $tmp1508;
            panda$core$String* $tmp1510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1509, result1507);
            panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1510, &$s1511);
            panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1512, bit1503);
            panda$core$String* $tmp1515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1513, &$s1514);
            (($fn1516) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1515);
            return result1507;
        }
        }
        panda$core$Bit $tmp1518 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1492)->name, &$s1517);
        if ($tmp1518.value) {
        {
            panda$core$Int64 $tmp1519 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1519, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1520.value);
            panda$core$Object* $tmp1522 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1523 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1524 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1522), ((org$pandalanguage$pandac$IRNode*) $tmp1523), p_out);
            bit1521 = $tmp1524;
            panda$core$String* $tmp1526 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1525 = $tmp1526;
            panda$core$String* $tmp1528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1527, result1525);
            panda$core$String* $tmp1530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1528, &$s1529);
            panda$core$String* $tmp1531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1530, bit1521);
            panda$core$String* $tmp1533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1531, &$s1532);
            (($fn1534) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1533);
            return result1525;
        }
        }
    }
    }
    panda$collections$Array* $tmp1536 = (panda$collections$Array*) malloc(40);
    $tmp1536->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1536->refCount.value = 1;
    panda$core$Int64 $tmp1538 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp1536, $tmp1538);
    args1535 = $tmp1536;
    panda$core$Int64 $tmp1543 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp1544 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1543, ((panda$core$Int64) { 1 }));
    bool $tmp1542 = $tmp1544.value;
    if (!$tmp1542) goto $l1545;
    panda$core$Object* $tmp1546 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1546)->kind, ((panda$core$Int64) { 1024 }));
    $tmp1542 = $tmp1547.value;
    $l1545:;
    panda$core$Bit $tmp1548 = { $tmp1542 };
    isSuper1541 = $tmp1548;
    panda$core$Bit $tmp1550 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1541);
    bool $tmp1549 = $tmp1550.value;
    if (!$tmp1549) goto $l1551;
    panda$core$Bit $tmp1552 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1492);
    $tmp1549 = $tmp1552.value;
    $l1551:;
    panda$core$Bit $tmp1553 = { $tmp1549 };
    if ($tmp1553.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1554 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1492);
        actualMethodType1539 = $tmp1554;
        panda$core$Int64 $tmp1555 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1539->subtypes);
        panda$core$Int64 $tmp1556 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1555, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1557 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1539->subtypes, $tmp1556);
        panda$core$String* $tmp1558 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1557));
        actualResultType1540 = $tmp1558;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1559 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1492);
        actualMethodType1539 = $tmp1559;
        panda$core$String* $tmp1560 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType1540 = $tmp1560;
    }
    }
    panda$core$Int64 $tmp1562 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp1563 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1539->subtypes);
    panda$core$Int64 $tmp1564 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1562, $tmp1563);
    panda$core$Int64 $tmp1565 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1564, ((panda$core$Int64) { 1 }));
    offset1561 = $tmp1565;
    panda$core$Int64 $tmp1567 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1566, ((panda$core$Int64) { 0 }), $tmp1567, ((panda$core$Bit) { false }));
    int64_t $tmp1569 = $tmp1566.min.value;
    panda$core$Int64 i1568 = { $tmp1569 };
    int64_t $tmp1571 = $tmp1566.max.value;
    bool $tmp1572 = $tmp1566.inclusive.value;
    if ($tmp1572) goto $l1579; else goto $l1580;
    $l1579:;
    if ($tmp1569 <= $tmp1571) goto $l1573; else goto $l1575;
    $l1580:;
    if ($tmp1569 < $tmp1571) goto $l1573; else goto $l1575;
    $l1573:;
    {
        panda$core$Object* $tmp1582 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i1568);
        panda$core$String* $tmp1583 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1582), p_out);
        arg1581 = $tmp1583;
        panda$core$Bit $tmp1585 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1568, offset1561);
        bool $tmp1584 = $tmp1585.value;
        if (!$tmp1584) goto $l1586;
        panda$core$Int64 $tmp1587 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1568, offset1561);
        panda$core$Object* $tmp1588 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1539->subtypes, $tmp1587);
        panda$core$Object* $tmp1589 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i1568);
        panda$core$Bit $tmp1590 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1588), ((org$pandalanguage$pandac$IRNode*) $tmp1589)->type);
        $tmp1584 = $tmp1590.value;
        $l1586:;
        panda$core$Bit $tmp1591 = { $tmp1584 };
        if ($tmp1591.value) {
        {
            panda$core$Object* $tmp1592 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i1568);
            panda$core$Int64 $tmp1593 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1568, offset1561);
            panda$core$Object* $tmp1594 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1539->subtypes, $tmp1593);
            panda$core$String* $tmp1595 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1581, ((org$pandalanguage$pandac$IRNode*) $tmp1592)->type, ((org$pandalanguage$pandac$Type*) $tmp1594), p_out);
            arg1581 = $tmp1595;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1535, ((panda$core$Object*) arg1581));
    }
    $l1576:;
    int64_t $tmp1597 = $tmp1571 - i1568.value;
    if ($tmp1572) goto $l1598; else goto $l1599;
    $l1598:;
    if ((uint64_t) $tmp1597 >= 1) goto $l1596; else goto $l1575;
    $l1599:;
    if ((uint64_t) $tmp1597 > 1) goto $l1596; else goto $l1575;
    $l1596:;
    i1568.value += 1;
    goto $l1573;
    $l1575:;
    panda$core$Int64 $tmp1603 = panda$collections$Array$get_count$R$panda$core$Int64(args1535);
    panda$core$Bit $tmp1604 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1603, ((panda$core$Int64) { 0 }));
    if ($tmp1604.value) {
    {
        panda$core$Object* $tmp1605 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args1535, ((panda$core$Int64) { 0 }));
        target1602 = ((panda$core$String*) $tmp1605);
    }
    }
    else {
    {
        target1602 = NULL;
    }
    }
    panda$core$String* $tmp1607 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1602, m1492, isSuper1541, p_out);
    methodRef1606 = $tmp1607;
    panda$core$Bit $tmp1609 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1492);
    indirect1608 = $tmp1609;
    panda$core$String* $tmp1611 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1610 = $tmp1611;
    separator1612 = &$s1613;
    if (indirect1608.value) {
    {
        panda$core$String* $tmp1615 = panda$core$String$convert$R$panda$core$String(actualResultType1540);
        panda$core$String* $tmp1617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1615, &$s1616);
        panda$core$String* $tmp1618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1617, result1610);
        panda$core$String* $tmp1620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1618, &$s1619);
        (($fn1621) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1620);
        panda$core$String* $tmp1622 = panda$core$String$convert$R$panda$core$String(methodRef1606);
        panda$core$String* $tmp1624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1622, &$s1623);
        panda$core$String* $tmp1625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1624, result1610);
        panda$core$String* $tmp1627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1625, &$s1626);
        (($fn1628) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1627);
        separator1612 = &$s1629;
    }
    }
    else {
    {
        panda$core$String* $tmp1630 = panda$core$String$convert$R$panda$core$String(actualResultType1540);
        panda$core$String* $tmp1632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1630, &$s1631);
        panda$core$String* $tmp1633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1632, result1610);
        panda$core$String* $tmp1635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1633, &$s1634);
        panda$core$String* $tmp1636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1635, methodRef1606);
        panda$core$String* $tmp1638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1636, &$s1637);
        (($fn1639) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1638);
    }
    }
    {
        ITable* $tmp1641 = ((panda$collections$Iterable*) args1535)->$class->itable;
        while ($tmp1641->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1641 = $tmp1641->next;
        }
        $fn1643 $tmp1642 = $tmp1641->methods[0];
        panda$collections$Iterator* $tmp1644 = $tmp1642(((panda$collections$Iterable*) args1535));
        arg$Iter1640 = $tmp1644;
        $l1645:;
        ITable* $tmp1647 = arg$Iter1640->$class->itable;
        while ($tmp1647->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1647 = $tmp1647->next;
        }
        $fn1649 $tmp1648 = $tmp1647->methods[0];
        panda$core$Bit $tmp1650 = $tmp1648(arg$Iter1640);
        panda$core$Bit $tmp1651 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1650);
        if (!$tmp1651.value) goto $l1646;
        {
            ITable* $tmp1653 = arg$Iter1640->$class->itable;
            while ($tmp1653->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1653 = $tmp1653->next;
            }
            $fn1655 $tmp1654 = $tmp1653->methods[1];
            panda$core$Object* $tmp1656 = $tmp1654(arg$Iter1640);
            arg1652 = ((panda$core$String*) $tmp1656);
            panda$core$String* $tmp1657 = panda$core$String$convert$R$panda$core$String(separator1612);
            panda$core$String* $tmp1659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1657, &$s1658);
            panda$core$String* $tmp1660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1659, arg1652);
            panda$core$String* $tmp1662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1660, &$s1661);
            (($fn1663) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1662);
            separator1612 = &$s1664;
        }
        goto $l1645;
        $l1646:;
    }
    (($fn1666) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1665);
    panda$core$String* $tmp1667 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp1668 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1667, actualResultType1540);
    if ($tmp1668.value) {
    {
        panda$core$Int64 $tmp1669 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1539->subtypes);
        panda$core$Int64 $tmp1670 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1669, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1671 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1539->subtypes, $tmp1670);
        panda$core$String* $tmp1672 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1610, ((org$pandalanguage$pandac$Type*) $tmp1671), p_call->type, p_out);
        return $tmp1672;
    }
    }
    return result1610;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1674;
    panda$core$String* nonNullValue1677;
    panda$core$String* wrapped1687;
    panda$core$Bit $tmp1673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1673.value) {
    {
        panda$core$Object* $tmp1675 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1676 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1675), p_out);
        unwrapped1674 = $tmp1676;
        panda$core$Object* $tmp1678 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1679 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1674, ((org$pandalanguage$pandac$Type*) $tmp1678), p_dstType, p_out);
        nonNullValue1677 = $tmp1679;
        panda$core$String* $tmp1681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1680, p_value);
        panda$core$String* $tmp1683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1681, &$s1682);
        panda$core$String* $tmp1684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1683, nonNullValue1677);
        panda$core$String* $tmp1686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1684, &$s1685);
        return $tmp1686;
    }
    }
    panda$core$String* $tmp1688 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    wrapped1687 = $tmp1688;
    panda$core$String* $tmp1689 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1690 = panda$core$String$convert$R$panda$core$String($tmp1689);
    panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1690, &$s1691);
    panda$core$String* $tmp1693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1692, wrapped1687);
    panda$core$String* $tmp1695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1693, &$s1694);
    (($fn1696) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1695);
    panda$core$Bit $tmp1697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1697.value) {
    {
        panda$core$String* $tmp1699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1698, p_value);
        panda$core$String* $tmp1701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1699, &$s1700);
        (($fn1702) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1701);
        panda$core$Int64 $tmp1703 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1703;
    }
    }
    panda$core$String* $tmp1704 = panda$core$String$convert$R$panda$core$String(wrapped1687);
    panda$core$String* $tmp1706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1704, &$s1705);
    panda$core$String* $tmp1707 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, $tmp1707);
    panda$core$String* $tmp1710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, &$s1709);
    panda$core$Int64 $tmp1712 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_srcType);
    panda$core$Int64$wrapper* $tmp1713;
    $tmp1713 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1713->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1713->refCount = 1;
    $tmp1713->value = $tmp1712;
    panda$core$String* $tmp1714 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1711, ((panda$core$Object*) $tmp1713));
    panda$core$String* $tmp1716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1714, &$s1715);
    panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1710, $tmp1716);
    (($fn1718) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1717);
    panda$core$String* $tmp1719 = panda$core$String$convert$R$panda$core$String(wrapped1687);
    panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1719, &$s1720);
    panda$core$String* $tmp1723 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_srcType)->name);
    panda$core$String* $tmp1724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1722, $tmp1723);
    panda$core$String* $tmp1726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1724, &$s1725);
    panda$core$String* $tmp1727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1721, $tmp1726);
    (($fn1728) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1727);
    panda$core$String* $tmp1729 = panda$core$String$convert$R$panda$core$String(wrapped1687);
    panda$core$String* $tmp1731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1729, &$s1730);
    (($fn1732) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1731);
    panda$core$String* $tmp1733 = panda$core$String$convert$R$panda$core$String(wrapped1687);
    panda$core$String* $tmp1735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1733, &$s1734);
    panda$core$String* $tmp1736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1735, p_value);
    panda$core$String* $tmp1738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1736, &$s1737);
    (($fn1739) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1738);
    panda$core$Bit $tmp1740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1740.value) {
    {
        panda$core$Int64 $tmp1741 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1741;
        (($fn1743) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1742);
        (($fn1745) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1744);
        panda$core$Int64 $tmp1746 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1746;
        panda$core$String* $tmp1747 = panda$core$String$convert$R$panda$core$String(wrapped1687);
        panda$core$String* $tmp1749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1747, &$s1748);
        (($fn1750) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1749);
        panda$core$Int64 $tmp1751 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1751;
        (($fn1753) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1752);
    }
    }
    panda$core$String* $tmp1755 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1754, $tmp1755);
    panda$core$String* $tmp1758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1756, &$s1757);
    panda$core$String* $tmp1759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1758, wrapped1687);
    panda$core$String* $tmp1761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1759, &$s1760);
    return $tmp1761;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field1765;
    org$pandalanguage$pandac$ClassDecl* cl1768;
    panda$core$String* base1771;
    panda$core$Bit $tmp1762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp1762.value);
    panda$core$Int64 $tmp1763 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp1764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1763, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1764.value);
    field1765 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$Bit $tmp1766 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field1765->annotations);
    if ($tmp1766.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field1765->value != NULL }).value);
        panda$core$String* $tmp1767 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field1765->value, p_out);
        return $tmp1767;
    }
    }
    panda$core$Object* $tmp1769 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1770 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1769)->type);
    cl1768 = $tmp1770;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1768);
    panda$core$Object* $tmp1772 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1773 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1772), p_out);
    base1771 = $tmp1773;
    PANDA_ASSERT(((panda$core$Bit) { cl1768 != NULL }).value);
    panda$core$Bit $tmp1774 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1768);
    if ($tmp1774.value) {
    {
        panda$core$String* $tmp1775 = panda$core$String$convert$R$panda$core$String(base1771);
        panda$core$String* $tmp1777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1775, &$s1776);
        panda$core$String* $tmp1778 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1765)->name);
        panda$core$String* $tmp1779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1777, $tmp1778);
        panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1779, &$s1780);
        return $tmp1781;
    }
    }
    panda$core$String* $tmp1782 = panda$core$String$convert$R$panda$core$String(base1771);
    panda$core$String* $tmp1784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1782, &$s1783);
    panda$core$String* $tmp1785 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1765)->name);
    panda$core$String* $tmp1786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1784, $tmp1785);
    panda$core$String* $tmp1788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1786, &$s1787);
    return $tmp1788;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1789;
    panda$core$String* wrapped1799;
    panda$core$String* nonNullValue1802;
    panda$core$String* $tmp1791 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1790, $tmp1791);
    panda$core$String* $tmp1794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1792, &$s1793);
    panda$core$String* $tmp1795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1794, p_value);
    panda$core$String* $tmp1797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1795, &$s1796);
    result1789 = $tmp1797;
    panda$core$Bit $tmp1798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1798.value) {
    {
        panda$core$Object* $tmp1800 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1801 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1800), p_out);
        wrapped1799 = $tmp1801;
        panda$core$Object* $tmp1803 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1804 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1799, ((org$pandalanguage$pandac$Type*) $tmp1803), p_dstType, p_out);
        nonNullValue1802 = $tmp1804;
        panda$core$String* $tmp1806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1805, p_value);
        panda$core$String* $tmp1808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1806, &$s1807);
        panda$core$String* $tmp1809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1808, nonNullValue1802);
        panda$core$String* $tmp1811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1809, &$s1810);
        panda$core$String* $tmp1812 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1811, $tmp1812);
        panda$core$String* $tmp1815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1813, &$s1814);
        return $tmp1815;
    }
    }
    return result1789;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1817 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1816, $tmp1817);
    panda$core$String* $tmp1820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, &$s1819);
    panda$core$String* $tmp1821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1820, p_value);
    panda$core$String* $tmp1823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1821, &$s1822);
    return $tmp1823;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1825 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1824, $tmp1825);
    panda$core$String* $tmp1828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1826, &$s1827);
    panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1828, p_value);
    panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1829, &$s1830);
    return $tmp1831;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1832;
    org$pandalanguage$pandac$ClassDecl* srcClass1843;
    org$pandalanguage$pandac$ClassDecl* targetClass1845;
    panda$core$String* srcType1884;
    panda$core$String* dstType1886;
    panda$core$Bit $tmp1833 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1833.value) {
    {
        panda$core$Bit $tmp1834 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1834.value);
        panda$core$String* $tmp1836 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp1837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1835, $tmp1836);
        panda$core$String* $tmp1839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1837, &$s1838);
        panda$core$String* $tmp1840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1839, p_value);
        panda$core$String* $tmp1842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1840, &$s1841);
        return $tmp1842;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1844 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1843 = $tmp1844;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1843 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1846 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1845 = $tmp1846;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1845 != NULL }).value);
        panda$core$Bit $tmp1848 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1843);
        bool $tmp1847 = $tmp1848.value;
        if (!$tmp1847) goto $l1849;
        panda$core$Bit $tmp1850 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1845);
        panda$core$Bit $tmp1851 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1850);
        $tmp1847 = $tmp1851.value;
        $l1849:;
        panda$core$Bit $tmp1852 = { $tmp1847 };
        if ($tmp1852.value) {
        {
            panda$core$String* $tmp1853 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1853;
        }
        }
        else {
        panda$core$Bit $tmp1855 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1843);
        panda$core$Bit $tmp1856 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1855);
        bool $tmp1854 = $tmp1856.value;
        if (!$tmp1854) goto $l1857;
        panda$core$Bit $tmp1858 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1845);
        $tmp1854 = $tmp1858.value;
        $l1857:;
        panda$core$Bit $tmp1859 = { $tmp1854 };
        if ($tmp1859.value) {
        {
            panda$core$String* $tmp1860 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1860;
        }
        }
        else {
        panda$core$Bit $tmp1863 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1843);
        bool $tmp1862 = $tmp1863.value;
        if (!$tmp1862) goto $l1864;
        panda$core$Bit $tmp1865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1862 = $tmp1865.value;
        $l1864:;
        panda$core$Bit $tmp1866 = { $tmp1862 };
        bool $tmp1861 = $tmp1866.value;
        if (!$tmp1861) goto $l1867;
        panda$core$Object* $tmp1868 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1869 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1868), p_src);
        $tmp1861 = $tmp1869.value;
        $l1867:;
        panda$core$Bit $tmp1870 = { $tmp1861 };
        if ($tmp1870.value) {
        {
            panda$core$String* $tmp1871 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1871;
        }
        }
        else {
        panda$core$Bit $tmp1874 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1845);
        bool $tmp1873 = $tmp1874.value;
        if (!$tmp1873) goto $l1875;
        panda$core$Bit $tmp1876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1873 = $tmp1876.value;
        $l1875:;
        panda$core$Bit $tmp1877 = { $tmp1873 };
        bool $tmp1872 = $tmp1877.value;
        if (!$tmp1872) goto $l1878;
        panda$core$Object* $tmp1879 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1880 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1879), p_target);
        $tmp1872 = $tmp1880.value;
        $l1878:;
        panda$core$Bit $tmp1881 = { $tmp1872 };
        if ($tmp1881.value) {
        {
            panda$core$String* $tmp1882 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1882;
        }
        }
        }
        }
        }
        op1832 = &$s1883;
    }
    }
    panda$core$String* $tmp1885 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1884 = $tmp1885;
    panda$core$String* $tmp1887 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1886 = $tmp1887;
    panda$core$Bit $tmp1888 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1884, dstType1886);
    if ($tmp1888.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1889, dstType1886);
    panda$core$String* $tmp1892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1890, &$s1891);
    panda$core$String* $tmp1893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1892, p_value);
    panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1893, &$s1894);
    return $tmp1895;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base1899;
    panda$core$Bit $tmp1896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp1896.value);
    panda$core$Int64 $tmp1897 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp1898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1897, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1898.value);
    panda$core$Object* $tmp1900 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1901 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1900), p_out);
    base1899 = $tmp1901;
    panda$core$Object* $tmp1902 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1903 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base1899, ((org$pandalanguage$pandac$IRNode*) $tmp1902)->type, p_cast->type, p_out);
    return $tmp1903;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1907;
    panda$core$String* t1909;
    panda$core$String* value1922;
    panda$core$String* tmp1936;
    panda$core$String* result1954;
    panda$core$String* classPtr1975;
    panda$core$String* className1977;
    panda$core$Bit $tmp1904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp1904.value);
    panda$core$Int64 $tmp1905 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp1906 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1905, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1906.value);
    org$pandalanguage$pandac$ClassDecl* $tmp1908 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl1907 = $tmp1908;
    PANDA_ASSERT(((panda$core$Bit) { cl1907 != NULL }).value);
    panda$core$String* $tmp1910 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t1909 = $tmp1910;
    panda$core$Bit $tmp1912 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    bool $tmp1911 = $tmp1912.value;
    if ($tmp1911) goto $l1913;
    org$pandalanguage$pandac$Type* $tmp1914 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1915 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp1914);
    $tmp1911 = $tmp1915.value;
    $l1913:;
    panda$core$Bit $tmp1916 = { $tmp1911 };
    if ($tmp1916.value) {
    {
        panda$core$Int64 $tmp1917 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp1918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1917, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1918.value);
        panda$core$Object* $tmp1919 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp1920 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1919)->children);
        panda$core$Bit $tmp1921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1920, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1921.value);
        panda$core$Object* $tmp1923 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp1924 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp1923)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1925 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1924), p_out);
        value1922 = $tmp1925;
        panda$core$String* $tmp1927 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        panda$core$String* $tmp1928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1926, $tmp1927);
        panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1928, &$s1929);
        panda$core$String* $tmp1931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1930, value1922);
        panda$core$String* $tmp1933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1931, &$s1932);
        return $tmp1933;
    }
    }
    panda$core$Bit $tmp1934 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1907);
    if ($tmp1934.value) {
    {
        panda$core$Int64 $tmp1935 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1935;
        panda$core$Int64$wrapper* $tmp1938;
        $tmp1938 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp1938->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp1938->refCount = 1;
        $tmp1938->value = self->varCount;
        panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1937, ((panda$core$Object*) $tmp1938));
        panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1939, &$s1940);
        tmp1936 = $tmp1941;
        panda$core$String* $tmp1942 = panda$core$String$convert$R$panda$core$String(t1909);
        panda$core$String* $tmp1944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1942, &$s1943);
        panda$core$String* $tmp1945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1944, tmp1936);
        panda$core$String* $tmp1947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1945, &$s1946);
        (($fn1948) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1947);
        panda$core$Object* $tmp1949 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1950, tmp1936);
        panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1951, &$s1952);
        org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1949), $tmp1953, p_out);
        return tmp1936;
    }
    }
    panda$core$String* $tmp1955 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1954 = $tmp1955;
    panda$core$String* $tmp1956 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1957 = panda$core$String$convert$R$panda$core$String($tmp1956);
    panda$core$String* $tmp1959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1957, &$s1958);
    panda$core$String* $tmp1960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1959, result1954);
    panda$core$String* $tmp1962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1960, &$s1961);
    panda$core$String* $tmp1963 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1962, $tmp1963);
    panda$core$String* $tmp1966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1964, &$s1965);
    panda$core$Int64 $tmp1968 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$Int64$wrapper* $tmp1969;
    $tmp1969 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1969->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1969->refCount = 1;
    $tmp1969->value = $tmp1968;
    panda$core$String* $tmp1970 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1967, ((panda$core$Object*) $tmp1969));
    panda$core$String* $tmp1972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1970, &$s1971);
    panda$core$String* $tmp1973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1966, $tmp1972);
    (($fn1974) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1973);
    panda$core$String* $tmp1976 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr1975 = $tmp1976;
    panda$core$Bit $tmp1978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp1978.value) {
    {
        panda$core$Object* $tmp1979 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1980 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1979));
        className1977 = $tmp1980;
    }
    }
    else {
    {
        panda$core$String* $tmp1981 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className1977 = $tmp1981;
    }
    }
    panda$core$String* $tmp1982 = panda$core$String$convert$R$panda$core$String(result1954);
    panda$core$String* $tmp1984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1982, &$s1983);
    panda$core$String* $tmp1985 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1907)->name);
    panda$core$String* $tmp1986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1984, $tmp1985);
    panda$core$String* $tmp1988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1986, &$s1987);
    (($fn1989) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1988);
    panda$core$String* $tmp1990 = panda$core$String$convert$R$panda$core$String(result1954);
    panda$core$String* $tmp1992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1990, &$s1991);
    (($fn1993) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1992);
    panda$core$Object* $tmp1994 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1995 = panda$core$String$convert$R$panda$core$String(result1954);
    panda$core$String* $tmp1997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1995, &$s1996);
    org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1994), $tmp1997, p_out);
    return result1954;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1998 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp1998;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2000 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1999, $tmp2000);
    return $tmp2001;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_real, panda$io$OutputStream* p_out) {
    panda$core$String* result2002;
    panda$core$Char8 $tmp2004;
    panda$core$String* $tmp2003 = panda$core$Real64$convert$R$panda$core$String(((panda$core$Real64$wrapper*) p_real->payload)->value);
    result2002 = $tmp2003;
    panda$core$Char8$init$panda$core$UInt8(&$tmp2004, ((panda$core$UInt8) { 46 }));
    panda$core$Bit $tmp2005 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(result2002, $tmp2004);
    if ($tmp2005.value) {
    {
        return result2002;
    }
    }
    panda$core$String* $tmp2007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result2002, &$s2006);
    return $tmp2007;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s2008;
    }
    }
    return &$s2009;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2010 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2010;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2012;
    panda$collections$Iterator* c$Iter2026;
    panda$core$Char8 c2039;
    panda$core$Int64 $tmp2011 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2011;
    panda$core$Int64$wrapper* $tmp2014;
    $tmp2014 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp2014->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2014->refCount = 1;
    $tmp2014->value = self->varCount;
    panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2013, ((panda$core$Object*) $tmp2014));
    panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, &$s2016);
    result2012 = $tmp2017;
    org$pandalanguage$pandac$Type* $tmp2018 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2018);
    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2019, result2012);
    panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2020, &$s2021);
    panda$core$String* $tmp2024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2022, &$s2023);
    (($fn2025) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2024);
    {
        panda$collections$ListView* $tmp2027 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2028 = ((panda$collections$Iterable*) $tmp2027)->$class->itable;
        while ($tmp2028->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2028 = $tmp2028->next;
        }
        $fn2030 $tmp2029 = $tmp2028->methods[0];
        panda$collections$Iterator* $tmp2031 = $tmp2029(((panda$collections$Iterable*) $tmp2027));
        c$Iter2026 = $tmp2031;
        $l2032:;
        ITable* $tmp2034 = c$Iter2026->$class->itable;
        while ($tmp2034->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2034 = $tmp2034->next;
        }
        $fn2036 $tmp2035 = $tmp2034->methods[0];
        panda$core$Bit $tmp2037 = $tmp2035(c$Iter2026);
        panda$core$Bit $tmp2038 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2037);
        if (!$tmp2038.value) goto $l2033;
        {
            ITable* $tmp2040 = c$Iter2026->$class->itable;
            while ($tmp2040->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2040 = $tmp2040->next;
            }
            $fn2042 $tmp2041 = $tmp2040->methods[1];
            panda$core$Object* $tmp2043 = $tmp2041(c$Iter2026);
            c2039 = ((panda$core$Char8$wrapper*) $tmp2043)->value;
            panda$core$UInt8 $tmp2045 = panda$core$Char8$convert$R$panda$core$UInt8(c2039);
            panda$core$UInt8$wrapper* $tmp2046;
            $tmp2046 = (panda$core$UInt8$wrapper*) malloc(13);
            $tmp2046->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
            $tmp2046->refCount = 1;
            $tmp2046->value = $tmp2045;
            ITable* $tmp2048 = ((panda$core$Formattable*) $tmp2046)->$class->itable;
            while ($tmp2048->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2048 = $tmp2048->next;
            }
            $fn2050 $tmp2049 = $tmp2048->methods[0];
            panda$core$String* $tmp2051 = $tmp2049(((panda$core$Formattable*) $tmp2046), &$s2047);
            panda$core$String* $tmp2053 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp2051, &$s2052);
            panda$core$String* $tmp2054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2044, $tmp2053);
            panda$core$String* $tmp2056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2054, &$s2055);
            (($fn2057) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2056);
        }
        goto $l2032;
        $l2033:;
    }
    panda$collections$ListView* $tmp2059 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2060 = ((panda$collections$CollectionView*) $tmp2059)->$class->itable;
    while ($tmp2060->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2060 = $tmp2060->next;
    }
    $fn2062 $tmp2061 = $tmp2060->methods[0];
    panda$core$Int64 $tmp2063 = $tmp2061(((panda$collections$CollectionView*) $tmp2059));
    panda$core$Int64$wrapper* $tmp2064;
    $tmp2064 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp2064->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2064->refCount = 1;
    $tmp2064->value = $tmp2063;
    panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2058, ((panda$core$Object*) $tmp2064));
    panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, &$s2066);
    panda$core$Int64 $tmp2068 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$Int64$wrapper* $tmp2069;
    $tmp2069 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp2069->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2069->refCount = 1;
    $tmp2069->value = $tmp2068;
    panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2067, ((panda$core$Object*) $tmp2069));
    panda$core$String* $tmp2072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2070, &$s2071);
    (($fn2073) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2072);
    panda$core$String* $tmp2075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2074, result2012);
    panda$core$String* $tmp2077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2075, &$s2076);
    return $tmp2077;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s2078;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2080 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp2081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2079, $tmp2080);
    panda$core$String* $tmp2083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2081, &$s2082);
    return $tmp2083;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2087;
    org$pandalanguage$pandac$ClassDecl* cl2090;
    panda$core$String* bit2093;
    panda$core$Bit $tmp2084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp2084.value);
    panda$core$Int64 $tmp2085 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2085, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2086.value);
    panda$core$Object* $tmp2088 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2089 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2088), p_out);
    value2087 = $tmp2089;
    panda$core$Object* $tmp2091 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2092 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2091)->type);
    cl2090 = $tmp2092;
    panda$core$Bit $tmp2094 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2090);
    if ($tmp2094.value) {
    {
        panda$core$Object* $tmp2095 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2096 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2095)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2096.value) {
        {
            bit2093 = &$s2097;
        }
        }
        else {
        {
            panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2098, value2087);
            panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2099, &$s2100);
            bit2093 = $tmp2101;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2102 = panda$core$String$convert$R$panda$core$String(value2087);
        panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2102, &$s2103);
        bit2093 = $tmp2104;
    }
    }
    panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2105, bit2093);
    panda$core$String* $tmp2108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2106, &$s2107);
    return $tmp2108;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2112;
    org$pandalanguage$pandac$ClassDecl* cl2115;
    panda$core$String* bit2118;
    panda$core$Bit $tmp2109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp2109.value);
    panda$core$Int64 $tmp2110 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2110, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2111.value);
    panda$core$Object* $tmp2113 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2114 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2113), p_out);
    value2112 = $tmp2114;
    panda$core$Object* $tmp2116 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2117 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2116)->type);
    cl2115 = $tmp2117;
    panda$core$Bit $tmp2119 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2115);
    if ($tmp2119.value) {
    {
        panda$core$Object* $tmp2120 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2121 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2120)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2121.value) {
        {
            bit2118 = &$s2122;
        }
        }
        else {
        {
            panda$core$String* $tmp2123 = panda$core$String$convert$R$panda$core$String(value2112);
            panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2123, &$s2124);
            bit2118 = $tmp2125;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2126 = panda$core$String$convert$R$panda$core$String(value2112);
        panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2126, &$s2127);
        bit2118 = $tmp2128;
    }
    }
    panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2129, bit2118);
    panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, &$s2131);
    return $tmp2132;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2134;
    panda$core$Bit $tmp2133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2133.value);
    panda$core$Object* $tmp2135 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2136 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2135));
    cl2134 = $tmp2136;
    PANDA_ASSERT(((panda$core$Bit) { cl2134 != NULL }).value);
    panda$core$Bit $tmp2137 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2134);
    if ($tmp2137.value) {
    {
        panda$core$String* $tmp2139 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2138, $tmp2139);
        panda$core$String* $tmp2142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2140, &$s2141);
        return $tmp2142;
    }
    }
    else {
    {
        return &$s2143;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2147;
    panda$core$String* result2150;
    org$pandalanguage$pandac$parser$Token$Kind $match$1238_92152;
    panda$core$Bit $tmp2144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp2144.value);
    panda$core$Int64 $tmp2145 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp2146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2145, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2146.value);
    panda$core$Object* $tmp2148 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2149 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2148), p_out);
    base2147 = $tmp2149;
    panda$core$String* $tmp2151 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2150 = $tmp2151;
    {
        $match$1238_92152 = ((org$pandalanguage$pandac$parser$Token$Kind$wrapper*) p_expr->payload)->value;
        panda$core$Bit $tmp2153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1238_92152.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp2153.value) {
        {
            panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2154, base2147);
            panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2155, &$s2156);
            return $tmp2157;
        }
        }
        else {
        panda$core$Bit $tmp2158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1238_92152.$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp2158.value) {
        {
            panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2159, base2147);
            panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2160, &$s2161);
            return $tmp2162;
        }
        }
        else {
        panda$core$Bit $tmp2163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1238_92152.$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp2163.value) {
        {
            panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2164, base2147);
            panda$core$String* $tmp2167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2165, &$s2166);
            return $tmp2167;
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
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2177;
    panda$core$String* trueLabel2180;
    panda$core$String* falseLabel2182;
    panda$core$String* merge2184;
    panda$core$String* result2186;
    panda$core$Bit $tmp2168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->kind, ((panda$core$Int64) { 1044 }));
    PANDA_ASSERT($tmp2168.value);
    panda$core$Int64 $tmp2169 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
    panda$core$Bit $tmp2170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2169, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2170.value);
    panda$core$Object* $tmp2171 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2172 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2173 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2171)->type, $tmp2172);
    PANDA_ASSERT($tmp2173.value);
    panda$core$Object* $tmp2174 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2175 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2176 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2174)->type, ((org$pandalanguage$pandac$IRNode*) $tmp2175)->type);
    PANDA_ASSERT($tmp2176.value);
    panda$core$Object* $tmp2178 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2179 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2178), p_out);
    test2177 = $tmp2179;
    panda$core$String* $tmp2181 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2180 = $tmp2181;
    panda$core$String* $tmp2183 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2182 = $tmp2183;
    panda$core$String* $tmp2185 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2184 = $tmp2185;
    panda$core$String* $tmp2187 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2186 = $tmp2187;
    panda$core$Object* $tmp2188 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2189 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2188)->type);
    panda$core$String* $tmp2190 = panda$core$String$convert$R$panda$core$String($tmp2189);
    panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, &$s2191);
    panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2192, result2186);
    panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2193, &$s2194);
    (($fn2196) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2195);
    panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2197, test2177);
    panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2198, &$s2199);
    panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2200, trueLabel2180);
    panda$core$String* $tmp2203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2201, &$s2202);
    panda$core$String* $tmp2204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2203, falseLabel2182);
    panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2204, &$s2205);
    (($fn2207) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2206);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel2180, p_out);
    panda$core$String* $tmp2208 = panda$core$String$convert$R$panda$core$String(result2186);
    panda$core$String* $tmp2210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2208, &$s2209);
    panda$core$Object* $tmp2211 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2212 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2211), p_out);
    panda$core$String* $tmp2213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2210, $tmp2212);
    panda$core$String* $tmp2215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2213, &$s2214);
    (($fn2216) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2215);
    panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2217, merge2184);
    panda$core$String* $tmp2220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2218, &$s2219);
    (($fn2221) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2220);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel2182, p_out);
    panda$core$String* $tmp2222 = panda$core$String$convert$R$panda$core$String(result2186);
    panda$core$String* $tmp2224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2222, &$s2223);
    panda$core$Object* $tmp2225 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$String* $tmp2226 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2225), p_out);
    panda$core$String* $tmp2227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2224, $tmp2226);
    panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2227, &$s2228);
    (($fn2230) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2229);
    panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2231, merge2184);
    panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2232, &$s2233);
    (($fn2235) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2234);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, merge2184, p_out);
    return result2186;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2236 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2236;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2250;
    panda$core$String* result2254;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp2237 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2237;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp2238 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2238;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp2239 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2239;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp2240 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2240;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp2241 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2241;
        }
        break;
        case 1045:
        {
            panda$core$String* $tmp2242 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, ((panda$io$OutputStream*) p_out));
            return $tmp2242;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp2243 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2243;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp2244 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2244;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp2245 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2245;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp2246 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2246;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp2247 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2247;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp2248 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2248;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp2249 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2249;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp2251 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2252 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2251), p_out);
            value2250 = $tmp2252;
            panda$core$UInt64$wrapper* $tmp2253;
            $tmp2253 = (panda$core$UInt64$wrapper*) malloc(24);
            $tmp2253->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
            $tmp2253->refCount = 1;
            $tmp2253->value = ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp2253), ((panda$core$Object*) value2250));
            return value2250;
        }
        break;
        case 1028:
        {
            panda$core$UInt64$wrapper* $tmp2255;
            $tmp2255 = (panda$core$UInt64$wrapper*) malloc(24);
            $tmp2255->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
            $tmp2255->refCount = 1;
            $tmp2255->value = ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
            panda$core$Object* $tmp2256 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) $tmp2255));
            result2254 = ((panda$core$String*) $tmp2256);
            PANDA_ASSERT(((panda$core$Bit) { result2254 != NULL }).value);
            return result2254;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp2257 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2257;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp2258 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2258;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp2259 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2259;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp2260 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2260;
        }
        break;
        case 1044:
        {
            panda$core$String* $tmp2261 = org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2261;
        }
        break;
        case 1047:
        {
            panda$core$String* $tmp2262 = org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2262;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2263 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2263;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2268;
    org$pandalanguage$pandac$IRNode* s2280;
    panda$core$Bit $tmp2264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp2264.value);
    (($fn2266) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2265);
    panda$core$Int64 $tmp2267 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2267;
    {
        ITable* $tmp2269 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2269->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2269 = $tmp2269->next;
        }
        $fn2271 $tmp2270 = $tmp2269->methods[0];
        panda$collections$Iterator* $tmp2272 = $tmp2270(((panda$collections$Iterable*) p_block->children));
        s$Iter2268 = $tmp2272;
        $l2273:;
        ITable* $tmp2275 = s$Iter2268->$class->itable;
        while ($tmp2275->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2275 = $tmp2275->next;
        }
        $fn2277 $tmp2276 = $tmp2275->methods[0];
        panda$core$Bit $tmp2278 = $tmp2276(s$Iter2268);
        panda$core$Bit $tmp2279 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2278);
        if (!$tmp2279.value) goto $l2274;
        {
            ITable* $tmp2281 = s$Iter2268->$class->itable;
            while ($tmp2281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2281 = $tmp2281->next;
            }
            $fn2283 $tmp2282 = $tmp2281->methods[1];
            panda$core$Object* $tmp2284 = $tmp2282(s$Iter2268);
            s2280 = ((org$pandalanguage$pandac$IRNode*) $tmp2284);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2280, p_out);
        }
        goto $l2273;
        $l2274:;
    }
    panda$core$Int64 $tmp2285 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2285;
    (($fn2287) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2286);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2288;
    panda$core$String* $match$1346_92289;
    panda$core$String* ptr2294;
    panda$core$String* arg2297;
    panda$core$String* base2317;
    panda$core$String* index2320;
    panda$core$String* value2323;
    m2288 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1346_92289 = ((org$pandalanguage$pandac$Symbol*) m2288->value)->name;
        panda$core$Bit $tmp2291 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1346_92289, &$s2290);
        if ($tmp2291.value) {
        {
            panda$core$Int64 $tmp2292 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2292, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2293.value);
            panda$core$Object* $tmp2295 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2296 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2295), p_out);
            ptr2294 = $tmp2296;
            panda$core$Object* $tmp2298 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2299 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2298));
            panda$core$String* $tmp2300 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2299, p_out);
            arg2297 = $tmp2300;
            panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2301, arg2297);
            panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2302, &$s2303);
            panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2304, ptr2294);
            panda$core$String* $tmp2307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2305, &$s2306);
            (($fn2308) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2307);
        }
        }
        else {
        panda$core$Bit $tmp2310 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1346_92289, &$s2309);
        if ($tmp2310.value) {
        {
            panda$core$Int64 $tmp2311 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2311, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2312.value);
            panda$core$Object* $tmp2313 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2314 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2313));
            panda$core$Int64 $tmp2315 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2314->type->subtypes);
            panda$core$Bit $tmp2316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2315, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2316.value);
            panda$core$Object* $tmp2318 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2319 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2318), p_out);
            base2317 = $tmp2319;
            panda$core$Object* $tmp2321 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2322 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2321), p_out);
            index2320 = $tmp2322;
            panda$core$Object* $tmp2324 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2325 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2324));
            panda$core$String* $tmp2326 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2325, p_out);
            value2323 = $tmp2326;
            panda$core$String* $tmp2327 = panda$core$String$convert$R$panda$core$String(base2317);
            panda$core$String* $tmp2329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2327, &$s2328);
            panda$core$String* $tmp2330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2329, index2320);
            panda$core$String* $tmp2332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2330, &$s2331);
            panda$core$String* $tmp2333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2332, value2323);
            panda$core$String* $tmp2335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2333, &$s2334);
            (($fn2336) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2335);
        }
        }
        else {
        panda$core$Bit $tmp2338 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1346_92289, &$s2337);
        if ($tmp2338.value) {
        {
            panda$core$Int64 $tmp2339 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2339, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2340.value);
            panda$core$Object* $tmp2342 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2343 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2342), p_out);
            panda$core$String* $tmp2344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2341, $tmp2343);
            panda$core$String* $tmp2346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2344, &$s2345);
            (($fn2347) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2346);
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
void org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$core$String* p_target, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2349;
    org$pandalanguage$pandac$Type* actualMethodType2353;
    panda$core$String* actualResultType2354;
    panda$core$Bit isSuper2355;
    panda$collections$Array* args2375;
    panda$core$Int64 offset2378;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2383;
    panda$core$String* arg2398;
    panda$core$String* refTarget2419;
    panda$core$String* methodRef2423;
    panda$core$String* separator2425;
    panda$core$String* indirectVar2429;
    panda$core$String* resultType2433;
    panda$collections$Iterator* a$Iter2457;
    panda$core$String* a2469;
    panda$core$Bit $tmp2348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2348.value);
    m2349 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2351 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2349->owner)->name, &$s2350);
    if ($tmp2351.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2352 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2349->owner);
    if ($tmp2352.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2349);
    }
    }
    panda$core$Int64 $tmp2357 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2358 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2357, ((panda$core$Int64) { 1 }));
    bool $tmp2356 = $tmp2358.value;
    if (!$tmp2356) goto $l2359;
    panda$core$Object* $tmp2360 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2360)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2356 = $tmp2361.value;
    $l2359:;
    panda$core$Bit $tmp2362 = { $tmp2356 };
    isSuper2355 = $tmp2362;
    panda$core$Bit $tmp2364 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2355);
    bool $tmp2363 = $tmp2364.value;
    if (!$tmp2363) goto $l2365;
    panda$core$Bit $tmp2366 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2349);
    $tmp2363 = $tmp2366.value;
    $l2365:;
    panda$core$Bit $tmp2367 = { $tmp2363 };
    if ($tmp2367.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2368 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2349);
        actualMethodType2353 = $tmp2368;
        panda$core$Int64 $tmp2369 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2353->subtypes);
        panda$core$Int64 $tmp2370 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2369, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2371 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2353->subtypes, $tmp2370);
        panda$core$String* $tmp2372 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2371));
        actualResultType2354 = $tmp2372;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2373 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2349);
        actualMethodType2353 = $tmp2373;
        panda$core$String* $tmp2374 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2354 = $tmp2374;
    }
    }
    panda$collections$Array* $tmp2376 = (panda$collections$Array*) malloc(40);
    $tmp2376->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2376->refCount.value = 1;
    panda$collections$Array$init($tmp2376);
    args2375 = $tmp2376;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2375, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2379 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2380 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2353->subtypes);
    panda$core$Int64 $tmp2381 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2379, $tmp2380);
    panda$core$Int64 $tmp2382 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2381, ((panda$core$Int64) { 1 }));
    offset2378 = $tmp2382;
    panda$core$Int64 $tmp2384 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2383, ((panda$core$Int64) { 0 }), $tmp2384, ((panda$core$Bit) { false }));
    int64_t $tmp2386 = $tmp2383.min.value;
    panda$core$Int64 i2385 = { $tmp2386 };
    int64_t $tmp2388 = $tmp2383.max.value;
    bool $tmp2389 = $tmp2383.inclusive.value;
    if ($tmp2389) goto $l2396; else goto $l2397;
    $l2396:;
    if ($tmp2386 <= $tmp2388) goto $l2390; else goto $l2392;
    $l2397:;
    if ($tmp2386 < $tmp2388) goto $l2390; else goto $l2392;
    $l2390:;
    {
        panda$core$Object* $tmp2399 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2385);
        panda$core$String* $tmp2400 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2399), p_out);
        arg2398 = $tmp2400;
        panda$core$Bit $tmp2402 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2385, offset2378);
        bool $tmp2401 = $tmp2402.value;
        if (!$tmp2401) goto $l2403;
        panda$core$Int64 $tmp2404 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2385, offset2378);
        panda$core$Object* $tmp2405 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2353->subtypes, $tmp2404);
        panda$core$Object* $tmp2406 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2385);
        panda$core$Bit $tmp2407 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2405), ((org$pandalanguage$pandac$IRNode*) $tmp2406)->type);
        $tmp2401 = $tmp2407.value;
        $l2403:;
        panda$core$Bit $tmp2408 = { $tmp2401 };
        if ($tmp2408.value) {
        {
            panda$core$Object* $tmp2409 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2385);
            panda$core$Int64 $tmp2410 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2385, offset2378);
            panda$core$Object* $tmp2411 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2353->subtypes, $tmp2410);
            panda$core$String* $tmp2412 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2398, ((org$pandalanguage$pandac$IRNode*) $tmp2409)->type, ((org$pandalanguage$pandac$Type*) $tmp2411), p_out);
            arg2398 = $tmp2412;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2375, ((panda$core$Object*) arg2398));
    }
    $l2393:;
    int64_t $tmp2414 = $tmp2388 - i2385.value;
    if ($tmp2389) goto $l2415; else goto $l2416;
    $l2415:;
    if ((uint64_t) $tmp2414 >= 1) goto $l2413; else goto $l2392;
    $l2416:;
    if ((uint64_t) $tmp2414 > 1) goto $l2413; else goto $l2392;
    $l2413:;
    i2385.value += 1;
    goto $l2390;
    $l2392:;
    panda$core$Int64 $tmp2420 = panda$collections$Array$get_count$R$panda$core$Int64(args2375);
    panda$core$Bit $tmp2421 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2420, ((panda$core$Int64) { 0 }));
    if ($tmp2421.value) {
    {
        panda$core$Object* $tmp2422 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2375, ((panda$core$Int64) { 0 }));
        refTarget2419 = ((panda$core$String*) $tmp2422);
    }
    }
    else {
    {
        refTarget2419 = NULL;
    }
    }
    panda$core$String* $tmp2424 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2419, m2349, isSuper2355, p_out);
    methodRef2423 = $tmp2424;
    separator2425 = &$s2426;
    panda$core$Bit $tmp2427 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2349);
    if ($tmp2427.value) {
    {
        panda$core$Int64 $tmp2428 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2428;
        panda$core$Int64$wrapper* $tmp2431;
        $tmp2431 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp2431->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2431->refCount = 1;
        $tmp2431->value = self->varCount;
        panda$core$String* $tmp2432 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2430, ((panda$core$Object*) $tmp2431));
        indirectVar2429 = $tmp2432;
        panda$core$String* $tmp2434 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2433 = $tmp2434;
        panda$core$String* $tmp2435 = panda$core$String$convert$R$panda$core$String(resultType2433);
        panda$core$String* $tmp2437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2435, &$s2436);
        panda$core$String* $tmp2438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2437, indirectVar2429);
        panda$core$String* $tmp2440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2438, &$s2439);
        (($fn2441) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2440);
        panda$core$String* $tmp2442 = panda$core$String$convert$R$panda$core$String(methodRef2423);
        panda$core$String* $tmp2444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2442, &$s2443);
        panda$core$String* $tmp2445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2444, resultType2433);
        panda$core$String* $tmp2447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2445, &$s2446);
        panda$core$String* $tmp2448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2447, indirectVar2429);
        panda$core$String* $tmp2450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2448, &$s2449);
        (($fn2451) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2450);
        separator2425 = &$s2452;
    }
    }
    else {
    {
        panda$core$String* $tmp2453 = panda$core$String$convert$R$panda$core$String(methodRef2423);
        panda$core$String* $tmp2455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2453, &$s2454);
        (($fn2456) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2455);
    }
    }
    {
        ITable* $tmp2458 = ((panda$collections$Iterable*) args2375)->$class->itable;
        while ($tmp2458->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2458 = $tmp2458->next;
        }
        $fn2460 $tmp2459 = $tmp2458->methods[0];
        panda$collections$Iterator* $tmp2461 = $tmp2459(((panda$collections$Iterable*) args2375));
        a$Iter2457 = $tmp2461;
        $l2462:;
        ITable* $tmp2464 = a$Iter2457->$class->itable;
        while ($tmp2464->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2464 = $tmp2464->next;
        }
        $fn2466 $tmp2465 = $tmp2464->methods[0];
        panda$core$Bit $tmp2467 = $tmp2465(a$Iter2457);
        panda$core$Bit $tmp2468 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2467);
        if (!$tmp2468.value) goto $l2463;
        {
            ITable* $tmp2470 = a$Iter2457->$class->itable;
            while ($tmp2470->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2470 = $tmp2470->next;
            }
            $fn2472 $tmp2471 = $tmp2470->methods[1];
            panda$core$Object* $tmp2473 = $tmp2471(a$Iter2457);
            a2469 = ((panda$core$String*) $tmp2473);
            (($fn2474) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2425);
            (($fn2475) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2469);
            separator2425 = &$s2476;
        }
        goto $l2462;
        $l2463:;
    }
    (($fn2478) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2477);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2490;
    panda$core$Bit $tmp2479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp2479.value);
    panda$core$Int64 $tmp2481 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2481, ((panda$core$Int64) { 2 }));
    bool $tmp2480 = $tmp2482.value;
    if ($tmp2480) goto $l2483;
    panda$core$Int64 $tmp2484 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2484, ((panda$core$Int64) { 3 }));
    $tmp2480 = $tmp2485.value;
    $l2483:;
    panda$core$Bit $tmp2486 = { $tmp2480 };
    PANDA_ASSERT($tmp2486.value);
    panda$core$Object* $tmp2487 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2488 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2489 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2487)->type, $tmp2488);
    PANDA_ASSERT($tmp2489.value);
    panda$core$Object* $tmp2491 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2492 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2491), p_out);
    test2490 = $tmp2492;
    panda$core$String* $tmp2494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2493, test2490);
    panda$core$String* $tmp2496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2494, &$s2495);
    (($fn2497) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2496);
    panda$core$Object* $tmp2498 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2498), p_out);
    (($fn2500) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2499);
    panda$core$Int64 $tmp2501 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2501, ((panda$core$Int64) { 3 }));
    if ($tmp2502.value) {
    {
        (($fn2504) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2503);
        panda$core$Object* $tmp2505 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2505), p_out);
        (($fn2507) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2506);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2511;
    panda$core$String* range2522;
    org$pandalanguage$pandac$IRNode* block2525;
    org$pandalanguage$pandac$Type* t2527;
    panda$core$String* llt2530;
    panda$core$String* indexType2532;
    org$pandalanguage$pandac$ClassDecl* cl2538;
    org$pandalanguage$pandac$FieldDecl* field2546;
    panda$core$String* numberType2552;
    panda$core$String* index2555;
    panda$core$String* start2557;
    panda$core$String* indexValuePtr2569;
    panda$core$String* end2583;
    panda$core$String* inclusive2595;
    panda$core$String* loopStart2605;
    panda$core$String* loopBody2607;
    panda$core$String* loopEnd2609;
    panda$core$String* loopTest2611;
    panda$core$String* forwardEntry2615;
    panda$core$String* backwardEntry2617;
    panda$core$String* signPrefix2619;
    panda$core$String* unsigned2620;
    panda$core$String* forwardEntryInclusive2634;
    panda$core$String* forwardEntryExclusive2636;
    panda$core$String* loopInc2678;
    panda$core$String* forwardDelta2680;
    panda$core$String* forwardInclusiveLabel2695;
    panda$core$String* forwardExclusiveLabel2697;
    panda$core$String* forwardExclusiveTest2726;
    panda$core$String* inc2743;
    panda$core$Bit $tmp2508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2508.value);
    panda$core$Int64 $tmp2509 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2509, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2510.value);
    panda$core$Object* $tmp2512 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2511 = ((org$pandalanguage$pandac$IRNode*) $tmp2512);
    panda$core$Object* $tmp2513 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2513)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2514.value);
    panda$core$Object* $tmp2515 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2516 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2515)->type->subtypes);
    panda$core$Bit $tmp2517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2516, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2517.value);
    panda$core$Object* $tmp2518 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2519 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2518)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2521 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2519))->name, &$s2520);
    PANDA_ASSERT($tmp2521.value);
    panda$core$Object* $tmp2523 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2524 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2523), p_out);
    range2522 = $tmp2524;
    panda$core$Object* $tmp2526 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2525 = ((org$pandalanguage$pandac$IRNode*) $tmp2526);
    panda$core$Object* $tmp2528 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2529 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2528)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2527 = ((org$pandalanguage$pandac$Type*) $tmp2529);
    panda$core$String* $tmp2531 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2527);
    llt2530 = $tmp2531;
    panda$core$Bit $tmp2533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2527->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2533.value) {
    {
        panda$core$Int64 $tmp2534 = panda$collections$Array$get_count$R$panda$core$Int64(t2527->subtypes);
        panda$core$Bit $tmp2535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2534, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2535.value);
        panda$core$Object* $tmp2536 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2527->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2537 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2536));
        indexType2532 = $tmp2537;
    }
    }
    else {
    {
        indexType2532 = llt2530;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2539 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2527);
    cl2538 = $tmp2539;
    PANDA_ASSERT(((panda$core$Bit) { cl2538 != NULL }).value);
    panda$collections$ListView* $tmp2540 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2538);
    ITable* $tmp2541 = ((panda$collections$CollectionView*) $tmp2540)->$class->itable;
    while ($tmp2541->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2541 = $tmp2541->next;
    }
    $fn2543 $tmp2542 = $tmp2541->methods[0];
    panda$core$Int64 $tmp2544 = $tmp2542(((panda$collections$CollectionView*) $tmp2540));
    panda$core$Bit $tmp2545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2544, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2545.value);
    panda$collections$ListView* $tmp2547 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2538);
    ITable* $tmp2548 = $tmp2547->$class->itable;
    while ($tmp2548->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2548 = $tmp2548->next;
    }
    $fn2550 $tmp2549 = $tmp2548->methods[0];
    panda$core$Object* $tmp2551 = $tmp2549($tmp2547, ((panda$core$Int64) { 0 }));
    field2546 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2551);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2546);
    panda$core$String* $tmp2553 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2546->type);
    numberType2552 = $tmp2553;
    panda$core$Bit $tmp2554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2511->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2554.value);
    panda$core$String* $tmp2556 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2511->payload));
    index2555 = $tmp2556;
    panda$core$String* $tmp2558 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2557 = $tmp2558;
    panda$core$String* $tmp2559 = panda$core$String$convert$R$panda$core$String(numberType2552);
    panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2559, &$s2560);
    panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2561, start2557);
    panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2562, &$s2563);
    panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2564, range2522);
    panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2565, &$s2566);
    (($fn2568) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2567);
    panda$core$String* $tmp2570 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2569 = $tmp2570;
    org$pandalanguage$pandac$Type* $tmp2571 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2538);
    panda$core$String* $tmp2572 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2571);
    panda$core$String* $tmp2573 = panda$core$String$convert$R$panda$core$String($tmp2572);
    panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2573, &$s2574);
    panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2575, index2555);
    panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2576, &$s2577);
    panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2578, start2557);
    panda$core$String* $tmp2581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2579, &$s2580);
    (($fn2582) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2581);
    panda$core$String* $tmp2584 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2583 = $tmp2584;
    panda$core$String* $tmp2585 = panda$core$String$convert$R$panda$core$String(numberType2552);
    panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, &$s2586);
    panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, end2583);
    panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2589);
    panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2590, range2522);
    panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, &$s2592);
    (($fn2594) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2593);
    panda$core$String* $tmp2596 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2595 = $tmp2596;
    panda$core$String* $tmp2598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2597, inclusive2595);
    panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2598, &$s2599);
    panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2600, range2522);
    panda$core$String* $tmp2603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2601, &$s2602);
    (($fn2604) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2603);
    panda$core$String* $tmp2606 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2605 = $tmp2606;
    panda$core$String* $tmp2608 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2607 = $tmp2608;
    panda$core$String* $tmp2610 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2609 = $tmp2610;
    panda$core$String* $tmp2612 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2611 = $tmp2612;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2613 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2613->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2613->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2613, ((panda$core$String*) p_f->payload), loopEnd2609, loopTest2611);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2613));
    panda$core$String* $tmp2616 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2615 = $tmp2616;
    panda$core$String* $tmp2618 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2617 = $tmp2618;
    panda$core$Bit $tmp2622 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2527)->name, &$s2621);
    if ($tmp2622.value) {
    {
        signPrefix2619 = &$s2623;
        panda$core$String* $tmp2625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2624, numberType2552);
        unsigned2620 = $tmp2625;
    }
    }
    else {
    {
        panda$core$Bit $tmp2628 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2527)->name, &$s2627);
        bool $tmp2626 = $tmp2628.value;
        if ($tmp2626) goto $l2629;
        panda$core$Bit $tmp2631 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2527)->name, &$s2630);
        $tmp2626 = $tmp2631.value;
        $l2629:;
        panda$core$Bit $tmp2632 = { $tmp2626 };
        PANDA_ASSERT($tmp2632.value);
        signPrefix2619 = &$s2633;
        unsigned2620 = numberType2552;
    }
    }
    panda$core$String* $tmp2635 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2634 = $tmp2635;
    panda$core$String* $tmp2637 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2636 = $tmp2637;
    panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2638, inclusive2595);
    panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, &$s2640);
    panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2641, forwardEntryInclusive2634);
    panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, &$s2643);
    panda$core$String* $tmp2645 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2636);
    panda$core$String* $tmp2647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2645, &$s2646);
    panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2644, $tmp2647);
    (($fn2649) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2648);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2634, p_out);
    panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2650, start2557);
    panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, &$s2652);
    panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2653, end2583);
    panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, &$s2655);
    panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, loopStart2605);
    panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2657, &$s2658);
    panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2659, loopEnd2609);
    panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2660, &$s2661);
    (($fn2663) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2662);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2636, p_out);
    panda$core$String* $tmp2665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2664, start2557);
    panda$core$String* $tmp2667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2665, &$s2666);
    panda$core$String* $tmp2668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2667, end2583);
    panda$core$String* $tmp2670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2668, &$s2669);
    panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2670, loopStart2605);
    panda$core$String* $tmp2673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2671, &$s2672);
    panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2673, loopEnd2609);
    panda$core$String* $tmp2676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2674, &$s2675);
    (($fn2677) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2676);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2605, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2525, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2611, p_out);
    panda$core$String* $tmp2679 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2678 = $tmp2679;
    panda$core$String* $tmp2681 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2680 = $tmp2681;
    panda$core$String* $tmp2682 = panda$core$String$convert$R$panda$core$String(numberType2552);
    panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, &$s2683);
    panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2684, forwardDelta2680);
    panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, &$s2686);
    panda$core$String* $tmp2688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2687, end2583);
    panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2688, &$s2689);
    panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2690, index2555);
    panda$core$String* $tmp2693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2691, &$s2692);
    (($fn2694) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2693);
    panda$core$String* $tmp2696 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2695 = $tmp2696;
    panda$core$String* $tmp2698 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2697 = $tmp2698;
    panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2699, inclusive2595);
    panda$core$String* $tmp2702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, &$s2701);
    panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2702, forwardInclusiveLabel2695);
    panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2703, &$s2704);
    panda$core$String* $tmp2706 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2697);
    panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2706, &$s2707);
    panda$core$String* $tmp2709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2705, $tmp2708);
    (($fn2710) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2709);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2695, p_out);
    panda$core$String* $tmp2712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2711, unsigned2620);
    panda$core$String* $tmp2714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2712, &$s2713);
    panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2714, forwardDelta2680);
    panda$core$String* $tmp2717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, &$s2716);
    panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2717, loopInc2678);
    panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, &$s2719);
    panda$core$String* $tmp2721 = panda$core$String$convert$R$panda$core$String(loopEnd2609);
    panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, &$s2722);
    panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2720, $tmp2723);
    (($fn2725) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2724);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2697, p_out);
    panda$core$String* $tmp2727 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2726 = $tmp2727;
    panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2728, unsigned2620);
    panda$core$String* $tmp2731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2729, &$s2730);
    panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2731, forwardDelta2680);
    panda$core$String* $tmp2734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2732, &$s2733);
    panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2734, loopInc2678);
    panda$core$String* $tmp2737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2735, &$s2736);
    panda$core$String* $tmp2738 = panda$core$String$convert$R$panda$core$String(loopEnd2609);
    panda$core$String* $tmp2740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2738, &$s2739);
    panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2737, $tmp2740);
    (($fn2742) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2741);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2678, p_out);
    panda$core$String* $tmp2744 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2743 = $tmp2744;
    panda$core$String* $tmp2745 = panda$core$String$convert$R$panda$core$String(index2555);
    panda$core$String* $tmp2747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2745, &$s2746);
    (($fn2748) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2747);
    panda$core$String* $tmp2750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2749, loopStart2605);
    panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2750, &$s2751);
    (($fn2753) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2752);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2609, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2757;
    panda$core$String* range2768;
    org$pandalanguage$pandac$IRNode* block2771;
    org$pandalanguage$pandac$Type* t2773;
    org$pandalanguage$pandac$Type* stepType2776;
    panda$core$String* llt2779;
    panda$core$String* indexType2781;
    org$pandalanguage$pandac$ClassDecl* cl2787;
    org$pandalanguage$pandac$FieldDecl* field2795;
    panda$core$String* numberType2801;
    panda$core$String* index2804;
    panda$core$String* start2806;
    panda$core$String* indexValuePtr2818;
    panda$core$String* end2832;
    panda$core$String* step2844;
    org$pandalanguage$pandac$ClassDecl* stepCl2846;
    org$pandalanguage$pandac$FieldDecl* stepField2854;
    panda$core$String* inclusive2871;
    panda$core$String* loopStart2881;
    panda$core$String* loopBody2883;
    panda$core$String* loopEnd2885;
    panda$core$String* loopTest2887;
    panda$core$String* forwardEntry2891;
    panda$core$String* backwardEntry2893;
    panda$core$String* unsigned2895;
    panda$core$String* signPrefix2896;
    panda$core$String* direction2910;
    panda$core$String* forwardEntryInclusive2934;
    panda$core$String* forwardEntryExclusive2936;
    panda$core$String* backwardEntryInclusive2978;
    panda$core$String* backwardEntryExclusive2980;
    panda$core$String* backwardEntryExclusiveTest3008;
    panda$core$String* loopInc3024;
    panda$core$String* forwardLabel3026;
    panda$core$String* backwardLabel3028;
    panda$core$String* forwardDelta3041;
    panda$core$String* forwardInclusiveLabel3056;
    panda$core$String* forwardExclusiveLabel3058;
    panda$core$String* forwardExclusiveTest3090;
    panda$core$String* backwardDelta3110;
    panda$core$String* backwardInclusiveLabel3125;
    panda$core$String* backwardExclusiveLabel3127;
    panda$core$String* inc3179;
    panda$core$Bit $tmp2754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2754.value);
    panda$core$Int64 $tmp2755 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2755, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2756.value);
    panda$core$Object* $tmp2758 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2757 = ((org$pandalanguage$pandac$IRNode*) $tmp2758);
    panda$core$Object* $tmp2759 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2759)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2760.value);
    panda$core$Object* $tmp2761 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2762 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2761)->type->subtypes);
    panda$core$Bit $tmp2763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2762, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2763.value);
    panda$core$Object* $tmp2764 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2765 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2764)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2767 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2765))->name, &$s2766);
    PANDA_ASSERT($tmp2767.value);
    panda$core$Object* $tmp2769 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2770 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2769), p_out);
    range2768 = $tmp2770;
    panda$core$Object* $tmp2772 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2771 = ((org$pandalanguage$pandac$IRNode*) $tmp2772);
    panda$core$Object* $tmp2774 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2775 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2774)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2773 = ((org$pandalanguage$pandac$Type*) $tmp2775);
    panda$core$Object* $tmp2777 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2778 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2777)->type->subtypes, ((panda$core$Int64) { 2 }));
    stepType2776 = ((org$pandalanguage$pandac$Type*) $tmp2778);
    panda$core$String* $tmp2780 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2773);
    llt2779 = $tmp2780;
    panda$core$Bit $tmp2782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2773->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2782.value) {
    {
        panda$core$Int64 $tmp2783 = panda$collections$Array$get_count$R$panda$core$Int64(t2773->subtypes);
        panda$core$Bit $tmp2784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2783, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2784.value);
        panda$core$Object* $tmp2785 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2773->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2786 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2785));
        indexType2781 = $tmp2786;
    }
    }
    else {
    {
        indexType2781 = llt2779;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2788 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2773);
    cl2787 = $tmp2788;
    PANDA_ASSERT(((panda$core$Bit) { cl2787 != NULL }).value);
    panda$collections$ListView* $tmp2789 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2787);
    ITable* $tmp2790 = ((panda$collections$CollectionView*) $tmp2789)->$class->itable;
    while ($tmp2790->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2790 = $tmp2790->next;
    }
    $fn2792 $tmp2791 = $tmp2790->methods[0];
    panda$core$Int64 $tmp2793 = $tmp2791(((panda$collections$CollectionView*) $tmp2789));
    panda$core$Bit $tmp2794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2793, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2794.value);
    panda$collections$ListView* $tmp2796 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2787);
    ITable* $tmp2797 = $tmp2796->$class->itable;
    while ($tmp2797->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2797 = $tmp2797->next;
    }
    $fn2799 $tmp2798 = $tmp2797->methods[0];
    panda$core$Object* $tmp2800 = $tmp2798($tmp2796, ((panda$core$Int64) { 0 }));
    field2795 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2800);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2795);
    panda$core$String* $tmp2802 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2795->type);
    numberType2801 = $tmp2802;
    panda$core$Bit $tmp2803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2757->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2803.value);
    panda$core$String* $tmp2805 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2757->payload));
    index2804 = $tmp2805;
    panda$core$String* $tmp2807 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2806 = $tmp2807;
    panda$core$String* $tmp2808 = panda$core$String$convert$R$panda$core$String(numberType2801);
    panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, &$s2809);
    panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2810, start2806);
    panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2811, &$s2812);
    panda$core$String* $tmp2814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2813, range2768);
    panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2814, &$s2815);
    (($fn2817) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2816);
    panda$core$String* $tmp2819 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2818 = $tmp2819;
    org$pandalanguage$pandac$Type* $tmp2820 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2787);
    panda$core$String* $tmp2821 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2820);
    panda$core$String* $tmp2822 = panda$core$String$convert$R$panda$core$String($tmp2821);
    panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2822, &$s2823);
    panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, index2804);
    panda$core$String* $tmp2827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2825, &$s2826);
    panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2827, start2806);
    panda$core$String* $tmp2830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2828, &$s2829);
    (($fn2831) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2830);
    panda$core$String* $tmp2833 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2832 = $tmp2833;
    panda$core$String* $tmp2834 = panda$core$String$convert$R$panda$core$String(numberType2801);
    panda$core$String* $tmp2836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, &$s2835);
    panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, end2832);
    panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, &$s2838);
    panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, range2768);
    panda$core$String* $tmp2842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2840, &$s2841);
    (($fn2843) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2842);
    panda$core$String* $tmp2845 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2844 = $tmp2845;
    org$pandalanguage$pandac$ClassDecl* $tmp2847 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, stepType2776);
    stepCl2846 = $tmp2847;
    PANDA_ASSERT(((panda$core$Bit) { stepCl2846 != NULL }).value);
    panda$collections$ListView* $tmp2848 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2846);
    ITable* $tmp2849 = ((panda$collections$CollectionView*) $tmp2848)->$class->itable;
    while ($tmp2849->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2849 = $tmp2849->next;
    }
    $fn2851 $tmp2850 = $tmp2849->methods[0];
    panda$core$Int64 $tmp2852 = $tmp2850(((panda$collections$CollectionView*) $tmp2848));
    panda$core$Bit $tmp2853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2852, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2853.value);
    panda$collections$ListView* $tmp2855 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2846);
    ITable* $tmp2856 = $tmp2855->$class->itable;
    while ($tmp2856->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2856 = $tmp2856->next;
    }
    $fn2858 $tmp2857 = $tmp2856->methods[0];
    panda$core$Object* $tmp2859 = $tmp2857($tmp2855, ((panda$core$Int64) { 0 }));
    stepField2854 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2859);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, stepField2854);
    panda$core$String* $tmp2860 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, stepField2854->type);
    panda$core$String* $tmp2861 = panda$core$String$convert$R$panda$core$String($tmp2860);
    panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2861, &$s2862);
    panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2863, step2844);
    panda$core$String* $tmp2866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2864, &$s2865);
    panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2866, range2768);
    panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, &$s2868);
    (($fn2870) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2869);
    panda$core$String* $tmp2872 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2871 = $tmp2872;
    panda$core$String* $tmp2874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2873, inclusive2871);
    panda$core$String* $tmp2876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2874, &$s2875);
    panda$core$String* $tmp2877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2876, range2768);
    panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2877, &$s2878);
    (($fn2880) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2879);
    panda$core$String* $tmp2882 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2881 = $tmp2882;
    panda$core$String* $tmp2884 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2883 = $tmp2884;
    panda$core$String* $tmp2886 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2885 = $tmp2886;
    panda$core$String* $tmp2888 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2887 = $tmp2888;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2889 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2889->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2889->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2889, ((panda$core$String*) p_f->payload), loopEnd2885, loopTest2887);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2889));
    panda$core$String* $tmp2892 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2891 = $tmp2892;
    panda$core$String* $tmp2894 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2893 = $tmp2894;
    panda$core$Bit $tmp2898 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2776)->name, &$s2897);
    if ($tmp2898.value) {
    {
        signPrefix2896 = &$s2899;
        panda$core$String* $tmp2901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2900, numberType2801);
        unsigned2895 = $tmp2901;
    }
    }
    else {
    {
        panda$core$Bit $tmp2904 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2776)->name, &$s2903);
        bool $tmp2902 = $tmp2904.value;
        if ($tmp2902) goto $l2905;
        panda$core$Bit $tmp2907 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2776)->name, &$s2906);
        $tmp2902 = $tmp2907.value;
        $l2905:;
        panda$core$Bit $tmp2908 = { $tmp2902 };
        PANDA_ASSERT($tmp2908.value);
        signPrefix2896 = &$s2909;
        unsigned2895 = numberType2801;
    }
    }
    panda$core$Bit $tmp2912 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2896, &$s2911);
    if ($tmp2912.value) {
    {
        panda$core$String* $tmp2913 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2910 = $tmp2913;
        panda$core$String* $tmp2915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2914, direction2910);
        panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2915, &$s2916);
        panda$core$String* $tmp2918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2917, step2844);
        panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2918, &$s2919);
        (($fn2921) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2920);
    }
    }
    else {
    {
        direction2910 = &$s2922;
    }
    }
    panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2923, direction2910);
    panda$core$String* $tmp2926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2924, &$s2925);
    panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2926, forwardEntry2891);
    panda$core$String* $tmp2929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2927, &$s2928);
    panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2929, backwardEntry2893);
    panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2930, &$s2931);
    (($fn2933) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2932);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2891, p_out);
    panda$core$String* $tmp2935 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2934 = $tmp2935;
    panda$core$String* $tmp2937 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2936 = $tmp2937;
    panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2938, inclusive2871);
    panda$core$String* $tmp2941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2939, &$s2940);
    panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2941, forwardEntryInclusive2934);
    panda$core$String* $tmp2944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2942, &$s2943);
    panda$core$String* $tmp2945 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2936);
    panda$core$String* $tmp2947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2945, &$s2946);
    panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2944, $tmp2947);
    (($fn2949) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2948);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2934, p_out);
    panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2950, start2806);
    panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2951, &$s2952);
    panda$core$String* $tmp2954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2953, end2832);
    panda$core$String* $tmp2956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2954, &$s2955);
    panda$core$String* $tmp2957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2956, loopStart2881);
    panda$core$String* $tmp2959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2957, &$s2958);
    panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2959, loopEnd2885);
    panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, &$s2961);
    (($fn2963) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2962);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2936, p_out);
    panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2964, start2806);
    panda$core$String* $tmp2967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2965, &$s2966);
    panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2967, end2832);
    panda$core$String* $tmp2970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2968, &$s2969);
    panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2970, loopStart2881);
    panda$core$String* $tmp2973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2971, &$s2972);
    panda$core$String* $tmp2974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2973, loopEnd2885);
    panda$core$String* $tmp2976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2974, &$s2975);
    (($fn2977) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2976);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2893, p_out);
    panda$core$String* $tmp2979 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2978 = $tmp2979;
    panda$core$String* $tmp2981 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2980 = $tmp2981;
    panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2982, inclusive2871);
    panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, &$s2984);
    panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2985, backwardEntryInclusive2978);
    panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2986, &$s2987);
    panda$core$String* $tmp2989 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive2980);
    panda$core$String* $tmp2991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2989, &$s2990);
    panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2988, $tmp2991);
    (($fn2993) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2992);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2978, p_out);
    panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2994, start2806);
    panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, &$s2996);
    panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2997, end2832);
    panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2998, &$s2999);
    panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3000, loopStart2881);
    panda$core$String* $tmp3003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, &$s3002);
    panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3003, loopEnd2885);
    panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3004, &$s3005);
    (($fn3007) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3006);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2980, p_out);
    panda$core$String* $tmp3009 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest3008 = $tmp3009;
    panda$core$String* $tmp3011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3010, start2806);
    panda$core$String* $tmp3013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3011, &$s3012);
    panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, end2832);
    panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3014, &$s3015);
    panda$core$String* $tmp3017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, loopStart2881);
    panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3017, &$s3018);
    panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, loopEnd2885);
    panda$core$String* $tmp3022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3020, &$s3021);
    (($fn3023) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3022);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2881, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2771, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2887, p_out);
    panda$core$String* $tmp3025 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc3024 = $tmp3025;
    panda$core$String* $tmp3027 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel3026 = $tmp3027;
    panda$core$String* $tmp3029 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel3028 = $tmp3029;
    panda$core$String* $tmp3031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3030, direction2910);
    panda$core$String* $tmp3033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3031, &$s3032);
    panda$core$String* $tmp3034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3033, forwardLabel3026);
    panda$core$String* $tmp3036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3034, &$s3035);
    panda$core$String* $tmp3037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3036, backwardLabel3028);
    panda$core$String* $tmp3039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3037, &$s3038);
    (($fn3040) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3039);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel3026, p_out);
    panda$core$String* $tmp3042 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta3041 = $tmp3042;
    panda$core$String* $tmp3043 = panda$core$String$convert$R$panda$core$String(numberType2801);
    panda$core$String* $tmp3045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3043, &$s3044);
    panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3045, forwardDelta3041);
    panda$core$String* $tmp3048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3046, &$s3047);
    panda$core$String* $tmp3049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3048, end2832);
    panda$core$String* $tmp3051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3049, &$s3050);
    panda$core$String* $tmp3052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3051, index2804);
    panda$core$String* $tmp3054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3052, &$s3053);
    (($fn3055) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3054);
    panda$core$String* $tmp3057 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel3056 = $tmp3057;
    panda$core$String* $tmp3059 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel3058 = $tmp3059;
    panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3060, inclusive2871);
    panda$core$String* $tmp3063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3061, &$s3062);
    panda$core$String* $tmp3064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3063, forwardInclusiveLabel3056);
    panda$core$String* $tmp3066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3064, &$s3065);
    panda$core$String* $tmp3067 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel3058);
    panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3067, &$s3068);
    panda$core$String* $tmp3070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3066, $tmp3069);
    (($fn3071) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3070);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel3056, p_out);
    panda$core$String* $tmp3073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3072, unsigned2895);
    panda$core$String* $tmp3075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3073, &$s3074);
    panda$core$String* $tmp3076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3075, forwardDelta3041);
    panda$core$String* $tmp3078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3076, &$s3077);
    panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3078, step2844);
    panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3079, &$s3080);
    panda$core$String* $tmp3082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3081, loopInc3024);
    panda$core$String* $tmp3084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3082, &$s3083);
    panda$core$String* $tmp3085 = panda$core$String$convert$R$panda$core$String(loopEnd2885);
    panda$core$String* $tmp3087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3085, &$s3086);
    panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3084, $tmp3087);
    (($fn3089) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3088);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel3058, p_out);
    panda$core$String* $tmp3091 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest3090 = $tmp3091;
    panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3092, unsigned2895);
    panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, &$s3094);
    panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, forwardDelta3041);
    panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3097);
    panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3098, step2844);
    panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, &$s3100);
    panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3101, loopInc3024);
    panda$core$String* $tmp3104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3102, &$s3103);
    panda$core$String* $tmp3105 = panda$core$String$convert$R$panda$core$String(loopEnd2885);
    panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3105, &$s3106);
    panda$core$String* $tmp3108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3104, $tmp3107);
    (($fn3109) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3108);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel3028, p_out);
    panda$core$String* $tmp3111 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta3110 = $tmp3111;
    panda$core$String* $tmp3112 = panda$core$String$convert$R$panda$core$String(numberType2801);
    panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3112, &$s3113);
    panda$core$String* $tmp3115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3114, backwardDelta3110);
    panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3115, &$s3116);
    panda$core$String* $tmp3118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3117, index2804);
    panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3118, &$s3119);
    panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3120, end2832);
    panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3121, &$s3122);
    (($fn3124) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3123);
    panda$core$String* $tmp3126 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel3125 = $tmp3126;
    panda$core$String* $tmp3128 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel3127 = $tmp3128;
    panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3129, inclusive2871);
    panda$core$String* $tmp3132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3130, &$s3131);
    panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3132, backwardInclusiveLabel3125);
    panda$core$String* $tmp3135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3133, &$s3134);
    panda$core$String* $tmp3136 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel3127);
    panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3136, &$s3137);
    panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3135, $tmp3138);
    (($fn3140) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3139);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel3125, p_out);
    panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3141, unsigned2895);
    panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3142, &$s3143);
    panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3144, backwardDelta3110);
    panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3145, &$s3146);
    panda$core$String* $tmp3148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3147, step2844);
    panda$core$String* $tmp3150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3148, &$s3149);
    panda$core$String* $tmp3151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3150, loopInc3024);
    panda$core$String* $tmp3153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3151, &$s3152);
    panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3154, loopEnd2885);
    panda$core$String* $tmp3157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, &$s3156);
    panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3153, $tmp3157);
    (($fn3159) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3158);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel3127, p_out);
    panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3160, unsigned2895);
    panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, &$s3162);
    panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, backwardDelta3110);
    panda$core$String* $tmp3166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3164, &$s3165);
    panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3166, step2844);
    panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3167, &$s3168);
    panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3169, loopInc3024);
    panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, &$s3171);
    panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3173, loopEnd2885);
    panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, &$s3175);
    panda$core$String* $tmp3177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3172, $tmp3176);
    (($fn3178) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3177);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc3024, p_out);
    panda$core$String* $tmp3180 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3179 = $tmp3180;
    panda$core$String* $tmp3181 = panda$core$String$convert$R$panda$core$String(index2804);
    panda$core$String* $tmp3183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3181, &$s3182);
    panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3183, step2844);
    panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3184, &$s3185);
    (($fn3187) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3186);
    panda$core$String* $tmp3189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3188, loopStart2881);
    panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3189, &$s3190);
    (($fn3192) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3191);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2885, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp3193 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3194 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3193)->type);
    if ($tmp3194.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp3195 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3196 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3195)->type);
    if ($tmp3196.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3203;
    panda$core$String* loopEnd3205;
    panda$core$Bit $tmp3197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp3197.value);
    panda$core$Int64 $tmp3198 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3198, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3199.value);
    panda$core$Object* $tmp3200 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3201 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3202 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3200)->type, $tmp3201);
    PANDA_ASSERT($tmp3202.value);
    panda$core$String* $tmp3204 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3203 = $tmp3204;
    panda$core$String* $tmp3206 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3205 = $tmp3206;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3207 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3207->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3207->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3207, ((panda$core$String*) p_w->payload), loopEnd3205, loopStart3203);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3207));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3203, p_out);
    panda$core$Object* $tmp3210 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3211 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3210), p_out);
    panda$core$String* $tmp3212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3209, $tmp3211);
    panda$core$String* $tmp3214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3212, &$s3213);
    panda$core$String* $tmp3215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3214, loopEnd3205);
    panda$core$String* $tmp3217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3215, &$s3216);
    (($fn3218) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3217);
    panda$core$Object* $tmp3219 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3219), p_out);
    panda$core$String* $tmp3221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3220, loopStart3203);
    panda$core$String* $tmp3223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3221, &$s3222);
    (($fn3224) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3223);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3205, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3231;
    panda$core$String* loopEnd3233;
    panda$core$Bit $tmp3225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp3225.value);
    panda$core$Int64 $tmp3226 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3226, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3227.value);
    panda$core$Object* $tmp3228 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3229 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3230 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3228)->type, $tmp3229);
    PANDA_ASSERT($tmp3230.value);
    panda$core$String* $tmp3232 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3231 = $tmp3232;
    panda$core$String* $tmp3234 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3233 = $tmp3234;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3235 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3235->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3235->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3235, ((panda$core$String*) p_d->payload), loopEnd3233, loopStart3231);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3235));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3231, p_out);
    panda$core$Object* $tmp3237 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3237), p_out);
    panda$core$Object* $tmp3239 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3240 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3239), p_out);
    panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3238, $tmp3240);
    panda$core$String* $tmp3243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, &$s3242);
    panda$core$String* $tmp3244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3243, loopStart3231);
    panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3244, &$s3245);
    (($fn3247) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3246);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3233, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3251;
    panda$core$String* loopEnd3253;
    panda$core$Bit $tmp3248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp3248.value);
    panda$core$Int64 $tmp3249 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3249, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3250.value);
    panda$core$String* $tmp3252 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3251 = $tmp3252;
    panda$core$String* $tmp3254 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3253 = $tmp3254;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3255 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3255->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3255->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3255, ((panda$core$String*) p_l->payload), loopEnd3253, loopStart3251);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3255));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3251, p_out);
    (($fn3258) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3257);
    panda$core$Object* $tmp3259 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3259), p_out);
    (($fn3261) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3260);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3253, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v3262;
    switch (p_target->kind.value) {
        case 1016:
        {
            v3262 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp3263 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3262->type);
            panda$core$String* $tmp3264 = panda$core$String$convert$R$panda$core$String($tmp3263);
            panda$core$String* $tmp3266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3264, &$s3265);
            panda$core$String* $tmp3267 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3262);
            panda$core$String* $tmp3268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3266, $tmp3267);
            panda$core$String* $tmp3270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3268, &$s3269);
            (($fn3271) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3270);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3272 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3262);
                panda$core$String* $tmp3273 = panda$core$String$convert$R$panda$core$String($tmp3272);
                panda$core$String* $tmp3275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3273, &$s3274);
                panda$core$String* $tmp3276 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3275, $tmp3276);
                panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3277, &$s3278);
                (($fn3280) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3279);
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
void org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* decl$Iter3294;
    org$pandalanguage$pandac$IRNode* decl3306;
    panda$core$Bit $tmp3284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp3283 = $tmp3284.value;
    if ($tmp3283) goto $l3285;
    panda$core$Bit $tmp3286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp3283 = $tmp3286.value;
    $l3285:;
    panda$core$Bit $tmp3287 = { $tmp3283 };
    bool $tmp3282 = $tmp3287.value;
    if ($tmp3282) goto $l3288;
    panda$core$Bit $tmp3289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp3282 = $tmp3289.value;
    $l3288:;
    panda$core$Bit $tmp3290 = { $tmp3282 };
    bool $tmp3281 = $tmp3290.value;
    if ($tmp3281) goto $l3291;
    panda$core$Bit $tmp3292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp3281 = $tmp3292.value;
    $l3291:;
    panda$core$Bit $tmp3293 = { $tmp3281 };
    PANDA_ASSERT($tmp3293.value);
    {
        ITable* $tmp3295 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3295->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3295 = $tmp3295->next;
        }
        $fn3297 $tmp3296 = $tmp3295->methods[0];
        panda$collections$Iterator* $tmp3298 = $tmp3296(((panda$collections$Iterable*) p_v->children));
        decl$Iter3294 = $tmp3298;
        $l3299:;
        ITable* $tmp3301 = decl$Iter3294->$class->itable;
        while ($tmp3301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3301 = $tmp3301->next;
        }
        $fn3303 $tmp3302 = $tmp3301->methods[0];
        panda$core$Bit $tmp3304 = $tmp3302(decl$Iter3294);
        panda$core$Bit $tmp3305 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3304);
        if (!$tmp3305.value) goto $l3300;
        {
            ITable* $tmp3307 = decl$Iter3294->$class->itable;
            while ($tmp3307->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3307 = $tmp3307->next;
            }
            $fn3309 $tmp3308 = $tmp3307->methods[1];
            panda$core$Object* $tmp3310 = $tmp3308(decl$Iter3294);
            decl3306 = ((org$pandalanguage$pandac$IRNode*) $tmp3310);
            panda$core$Bit $tmp3311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl3306->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp3311.value);
            panda$core$Int64 $tmp3312 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl3306->children);
            panda$core$Bit $tmp3313 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3312, ((panda$core$Int64) { 1 }));
            if ($tmp3313.value) {
            {
                panda$core$Object* $tmp3314 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3306->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3315 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3306->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3314), ((org$pandalanguage$pandac$IRNode*) $tmp3315), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3316 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3306->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3316), NULL, p_out);
            }
            }
        }
        goto $l3299;
        $l3300:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3320;
    panda$core$String* result3329;
    org$pandalanguage$pandac$Pair* f3338;
    org$pandalanguage$pandac$ChoiceEntry* c3339;
    org$pandalanguage$pandac$FieldDecl* data3340;
    org$pandalanguage$pandac$IRNode* fieldRef3344;
    panda$core$String* base3347;
    panda$core$Int64 size3349;
    panda$core$Int64 offset3351;
    panda$core$String* result3353;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp3317 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3318 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3317, p_out);
            return $tmp3318;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp3319 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3319;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp3321 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3322 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3321), p_out);
            base3320 = $tmp3322;
            panda$core$String* $tmp3323 = panda$core$String$convert$R$panda$core$String(base3320);
            panda$core$String* $tmp3325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3323, &$s3324);
            panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3325, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3326, &$s3327);
            return $tmp3328;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp3330 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3331 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3330), p_out);
            result3329 = $tmp3331;
            panda$core$UInt64$wrapper* $tmp3332;
            $tmp3332 = (panda$core$UInt64$wrapper*) malloc(24);
            $tmp3332->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
            $tmp3332->refCount = 1;
            $tmp3332->value = ((panda$core$UInt64$wrapper*) p_lvalue->payload)->value;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp3332), ((panda$core$Object*) result3329));
            return result3329;
        }
        break;
        case 1047:
        {
            bool $tmp3333 = ((panda$core$Bit) { p_lvalue->children != NULL }).value;
            if (!$tmp3333) goto $l3334;
            panda$core$Int64 $tmp3335 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_lvalue->children);
            panda$core$Bit $tmp3336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3335, ((panda$core$Int64) { 1 }));
            $tmp3333 = $tmp3336.value;
            $l3334:;
            panda$core$Bit $tmp3337 = { $tmp3333 };
            PANDA_ASSERT($tmp3337.value);
            f3338 = ((org$pandalanguage$pandac$Pair*) p_lvalue->payload);
            c3339 = ((org$pandalanguage$pandac$ChoiceEntry*) f3338->first);
            panda$core$Object* $tmp3341 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(c3339->owner->fields, ((panda$core$Int64) { 1 }));
            data3340 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3341);
            panda$core$Bit $tmp3343 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) data3340)->name, &$s3342);
            PANDA_ASSERT($tmp3343.value);
            org$pandalanguage$pandac$IRNode* $tmp3345 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3345->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3345->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3345, ((panda$core$Int64) { 1026 }), p_lvalue->position, data3340->type, ((panda$core$Object*) data3340), ((panda$collections$ListView*) p_lvalue->children));
            fieldRef3344 = $tmp3345;
            panda$core$String* $tmp3348 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, fieldRef3344, p_out);
            base3347 = $tmp3348;
            panda$core$Int64 $tmp3350 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, c3339->owner);
            size3349 = $tmp3350;
            panda$core$Int64 $tmp3352 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, c3339, ((panda$core$Int64$wrapper*) f3338->second)->value);
            offset3351 = $tmp3352;
            panda$core$String* $tmp3354 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result3353 = $tmp3354;
            panda$core$String* $tmp3355 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp3356 = panda$core$String$convert$R$panda$core$String($tmp3355);
            panda$core$String* $tmp3358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3356, &$s3357);
            panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3358, result3353);
            panda$core$String* $tmp3361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3359, &$s3360);
            panda$core$String* $tmp3362 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3361, $tmp3362);
            panda$core$String* $tmp3365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3363, &$s3364);
            panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3366, base3347);
            panda$core$String* $tmp3369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3367, &$s3368);
            panda$core$Int64$wrapper* $tmp3370;
            $tmp3370 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp3370->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3370->refCount = 1;
            $tmp3370->value = offset3351;
            panda$core$String* $tmp3371 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3369, ((panda$core$Object*) $tmp3370));
            panda$core$String* $tmp3373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3371, &$s3372);
            panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3365, $tmp3373);
            (($fn3375) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3374);
            panda$core$String* $tmp3377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3376, result3353);
            panda$core$String* $tmp3379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3377, &$s3378);
            return $tmp3379;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue3383;
    panda$core$String* value3386;
    panda$core$String* t3387;
    org$pandalanguage$pandac$parser$Token$Kind op3390;
    panda$core$String* right3392;
    panda$core$Bit $tmp3380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp3380.value);
    panda$core$Int64 $tmp3381 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3381, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3382.value);
    panda$core$Object* $tmp3384 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3385 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3384), p_out);
    lvalue3383 = $tmp3385;
    panda$core$Object* $tmp3388 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3389 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3388)->type);
    t3387 = $tmp3389;
    op3390 = ((org$pandalanguage$pandac$parser$Token$Kind$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp3391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3390.$rawValue, ((panda$core$Int64) { 73 }));
    if ($tmp3391.value) {
    {
        panda$core$Object* $tmp3393 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3394 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3393), p_out);
        right3392 = $tmp3394;
        value3386 = right3392;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp3395 = panda$core$String$convert$R$panda$core$String(lvalue3383);
    panda$core$String* $tmp3397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3395, &$s3396);
    panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3397, value3386);
    panda$core$String* $tmp3400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3398, &$s3399);
    (($fn3401) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3400);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    bool $tmp3402 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3402) goto $l3403;
    panda$core$Int64 $tmp3404 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3405 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3404, ((panda$core$Int64) { 0 }));
    $tmp3402 = $tmp3405.value;
    $l3403:;
    panda$core$Bit $tmp3406 = { $tmp3402 };
    if ($tmp3406.value) {
    {
        panda$core$Int64 $tmp3407 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3407, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3408.value);
        panda$core$Object* $tmp3410 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3411 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3410), p_out);
        panda$core$String* $tmp3412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3409, $tmp3411);
        panda$core$String* $tmp3414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3412, &$s3413);
        (($fn3415) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3414);
    }
    }
    else {
    {
        (($fn3417) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3416);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3421;
    panda$core$Int64 $tmp3418 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3419 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3418, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3419.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3420 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3420);
    }
    }
    panda$core$Int64 $tmp3422 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3421, ((panda$core$Int64) { 0 }), $tmp3422, ((panda$core$Bit) { false }));
    int64_t $tmp3424 = $tmp3421.min.value;
    panda$core$Int64 i3423 = { $tmp3424 };
    int64_t $tmp3426 = $tmp3421.max.value;
    bool $tmp3427 = $tmp3421.inclusive.value;
    if ($tmp3427) goto $l3434; else goto $l3435;
    $l3434:;
    if ($tmp3424 <= $tmp3426) goto $l3428; else goto $l3430;
    $l3435:;
    if ($tmp3424 < $tmp3426) goto $l3428; else goto $l3430;
    $l3428:;
    {
        panda$core$Object* $tmp3436 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3423);
        panda$core$Bit $tmp3440;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3436)->loopLabel != NULL }).value) goto $l3437; else goto $l3438;
        $l3437:;
        panda$core$Bit $tmp3441 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3436)->loopLabel, p_name);
        $tmp3440 = $tmp3441;
        goto $l3439;
        $l3438:;
        $tmp3440 = ((panda$core$Bit) { false });
        goto $l3439;
        $l3439:;
        if ($tmp3440.value) {
        {
            panda$core$Object* $tmp3442 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3423);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3442);
        }
        }
    }
    $l3431:;
    int64_t $tmp3444 = $tmp3426 - i3423.value;
    if ($tmp3427) goto $l3445; else goto $l3446;
    $l3445:;
    if ((uint64_t) $tmp3444 >= 1) goto $l3443; else goto $l3430;
    $l3446:;
    if ((uint64_t) $tmp3444 > 1) goto $l3443; else goto $l3430;
    $l3443:;
    i3423.value += 1;
    goto $l3428;
    $l3430:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3449;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3450 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3449 = $tmp3450;
    panda$core$String* $tmp3452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3451, desc3449->breakLabel);
    panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3452, &$s3453);
    (($fn3455) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3454);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3456;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3457 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3456 = $tmp3457;
    panda$core$String* $tmp3459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3458, desc3456->continueLabel);
    panda$core$String* $tmp3461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3459, &$s3460);
    (($fn3462) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3461);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp3463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp3463.value);
    panda$core$Int64 $tmp3465 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3465, ((panda$core$Int64) { 1 }));
    bool $tmp3464 = $tmp3466.value;
    if ($tmp3464) goto $l3467;
    panda$core$Int64 $tmp3468 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3468, ((panda$core$Int64) { 2 }));
    $tmp3464 = $tmp3469.value;
    $l3467:;
    panda$core$Bit $tmp3470 = { $tmp3464 };
    PANDA_ASSERT($tmp3470.value);
    panda$core$Object* $tmp3472 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3473 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3472), p_out);
    panda$core$String* $tmp3474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3471, $tmp3473);
    panda$core$String* $tmp3476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3474, &$s3475);
    (($fn3477) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3476);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3486;
    org$pandalanguage$pandac$IRNode* w3501;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3504;
    panda$core$Object* $tmp3479 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3480 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3479), p_out);
    panda$core$String* $tmp3481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3478, $tmp3480);
    panda$core$String* $tmp3483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3481, &$s3482);
    (($fn3484) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3483);
    panda$core$Int64 $tmp3485 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3485;
    panda$core$Int64 $tmp3487 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3486, ((panda$core$Int64) { 1 }), $tmp3487, ((panda$core$Bit) { false }));
    int64_t $tmp3489 = $tmp3486.min.value;
    panda$core$Int64 i3488 = { $tmp3489 };
    int64_t $tmp3491 = $tmp3486.max.value;
    bool $tmp3492 = $tmp3486.inclusive.value;
    if ($tmp3492) goto $l3499; else goto $l3500;
    $l3499:;
    if ($tmp3489 <= $tmp3491) goto $l3493; else goto $l3495;
    $l3500:;
    if ($tmp3489 < $tmp3491) goto $l3493; else goto $l3495;
    $l3493:;
    {
        panda$core$Object* $tmp3502 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3488);
        w3501 = ((org$pandalanguage$pandac$IRNode*) $tmp3502);
        panda$core$Bit $tmp3503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3501->kind, ((panda$core$Int64) { 1042 }));
        if ($tmp3503.value) {
        {
            panda$core$Int64 $tmp3505 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3501->children);
            panda$core$Int64 $tmp3506 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3505, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3504, ((panda$core$Int64) { 0 }), $tmp3506, ((panda$core$Bit) { false }));
            int64_t $tmp3508 = $tmp3504.min.value;
            panda$core$Int64 j3507 = { $tmp3508 };
            int64_t $tmp3510 = $tmp3504.max.value;
            bool $tmp3511 = $tmp3504.inclusive.value;
            if ($tmp3511) goto $l3518; else goto $l3519;
            $l3518:;
            if ($tmp3508 <= $tmp3510) goto $l3512; else goto $l3514;
            $l3519:;
            if ($tmp3508 < $tmp3510) goto $l3512; else goto $l3514;
            $l3512:;
            {
                panda$core$Object* $tmp3521 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3501->children, j3507);
                panda$core$UInt64 $tmp3522 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3521));
                panda$core$UInt64$wrapper* $tmp3523;
                $tmp3523 = (panda$core$UInt64$wrapper*) malloc(24);
                $tmp3523->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
                $tmp3523->refCount = 1;
                $tmp3523->value = $tmp3522;
                panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3520, ((panda$core$Object*) $tmp3523));
                panda$core$String* $tmp3526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3524, &$s3525);
                (($fn3527) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3526);
            }
            $l3515:;
            int64_t $tmp3529 = $tmp3510 - j3507.value;
            if ($tmp3511) goto $l3530; else goto $l3531;
            $l3530:;
            if ((uint64_t) $tmp3529 >= 1) goto $l3528; else goto $l3514;
            $l3531:;
            if ((uint64_t) $tmp3529 > 1) goto $l3528; else goto $l3514;
            $l3528:;
            j3507.value += 1;
            goto $l3512;
            $l3514:;
            panda$core$Int64 $tmp3534 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3501->children);
            panda$core$Int64 $tmp3535 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3534, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp3536 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3501->children, $tmp3535);
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3536), p_out);
            (($fn3538) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3537);
        }
        }
        else {
        {
            panda$core$Bit $tmp3539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3501->kind, ((panda$core$Int64) { 1043 }));
            PANDA_ASSERT($tmp3539.value);
            panda$core$Int64 $tmp3540 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3501->children);
            panda$core$Bit $tmp3541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3540, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp3541.value);
            (($fn3543) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3542);
            panda$core$Object* $tmp3544 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3501->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3544), p_out);
        }
        }
    }
    $l3496:;
    int64_t $tmp3546 = $tmp3491 - i3488.value;
    if ($tmp3492) goto $l3547; else goto $l3548;
    $l3547:;
    if ((uint64_t) $tmp3546 >= 1) goto $l3545; else goto $l3495;
    $l3548:;
    if ((uint64_t) $tmp3546 > 1) goto $l3545; else goto $l3495;
    $l3545:;
    i3488.value += 1;
    goto $l3493;
    $l3495:;
    panda$core$Int64 $tmp3551 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3551;
    (($fn3553) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3552);
}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    switch (p_stmt->kind.value) {
        case 1023:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1000:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1005:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, p_stmt, NULL, p_out);
        }
        break;
        case 1012:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1029:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1013:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1014:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1015:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1017:
        case 1018:
        case 1019:
        case 1020:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1008:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1006:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1007:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1034:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1042:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result3554;
    org$pandalanguage$pandac$Type* $tmp3555 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3556 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3555);
    result3554 = $tmp3556;
    panda$core$Bit $tmp3558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp3557 = $tmp3558.value;
    if (!$tmp3557) goto $l3559;
    panda$core$Bit $tmp3561 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3554, &$s3560);
    panda$core$Bit $tmp3562 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3561);
    $tmp3557 = $tmp3562.value;
    $l3559:;
    panda$core$Bit $tmp3563 = { $tmp3557 };
    if ($tmp3563.value) {
    {
        panda$core$String* $tmp3565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3554, &$s3564);
        return $tmp3565;
    }
    }
    return result3554;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3577;
    panda$collections$Iterator* p$Iter3587;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3599;
    panda$io$MemoryOutputStream* bodyBuffer3621;
    panda$io$IndentedOutputStream* indentedBody3624;
    panda$collections$Iterator* s$Iter3627;
    org$pandalanguage$pandac$IRNode* s3639;
    panda$core$Object* $tmp3566 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3566)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s3567;
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp3568 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3569 = panda$core$String$convert$R$panda$core$String($tmp3568);
    panda$core$String* $tmp3571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3569, &$s3570);
    panda$core$String* $tmp3572 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3571, $tmp3572);
    panda$core$String* $tmp3575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3573, &$s3574);
    (($fn3576) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3575);
    separator3577 = &$s3578;
    panda$core$Bit $tmp3579 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3580 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3579);
    if ($tmp3580.value) {
    {
        panda$core$String* $tmp3581 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3582 = panda$core$String$convert$R$panda$core$String($tmp3581);
        panda$core$String* $tmp3584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3582, &$s3583);
        (($fn3585) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3584);
        separator3577 = &$s3586;
    }
    }
    {
        ITable* $tmp3588 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3588->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3588 = $tmp3588->next;
        }
        $fn3590 $tmp3589 = $tmp3588->methods[0];
        panda$collections$Iterator* $tmp3591 = $tmp3589(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3587 = $tmp3591;
        $l3592:;
        ITable* $tmp3594 = p$Iter3587->$class->itable;
        while ($tmp3594->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3594 = $tmp3594->next;
        }
        $fn3596 $tmp3595 = $tmp3594->methods[0];
        panda$core$Bit $tmp3597 = $tmp3595(p$Iter3587);
        panda$core$Bit $tmp3598 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3597);
        if (!$tmp3598.value) goto $l3593;
        {
            ITable* $tmp3600 = p$Iter3587->$class->itable;
            while ($tmp3600->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3600 = $tmp3600->next;
            }
            $fn3602 $tmp3601 = $tmp3600->methods[1];
            panda$core$Object* $tmp3603 = $tmp3601(p$Iter3587);
            p3599 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3603);
            panda$core$String* $tmp3604 = panda$core$String$convert$R$panda$core$String(separator3577);
            panda$core$String* $tmp3606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3604, &$s3605);
            panda$core$String* $tmp3607 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3599->type);
            panda$core$String* $tmp3608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3606, $tmp3607);
            panda$core$String* $tmp3610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3608, &$s3609);
            panda$core$String* $tmp3611 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3599->name);
            panda$core$String* $tmp3612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3610, $tmp3611);
            panda$core$String* $tmp3614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3612, &$s3613);
            (($fn3615) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3614);
            separator3577 = &$s3616;
        }
        goto $l3592;
        $l3593:;
    }
    (($fn3618) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3617);
    panda$core$Int64 $tmp3619 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3619;
    panda$core$Bit $tmp3620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp3620.value);
    panda$io$MemoryOutputStream* $tmp3622 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3622->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3622->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3622);
    bodyBuffer3621 = $tmp3622;
    panda$io$IndentedOutputStream* $tmp3625 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3625->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3625->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3625, ((panda$io$OutputStream*) bodyBuffer3621));
    indentedBody3624 = $tmp3625;
    {
        ITable* $tmp3628 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3628->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3628 = $tmp3628->next;
        }
        $fn3630 $tmp3629 = $tmp3628->methods[0];
        panda$collections$Iterator* $tmp3631 = $tmp3629(((panda$collections$Iterable*) p_body->children));
        s$Iter3627 = $tmp3631;
        $l3632:;
        ITable* $tmp3634 = s$Iter3627->$class->itable;
        while ($tmp3634->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3634 = $tmp3634->next;
        }
        $fn3636 $tmp3635 = $tmp3634->methods[0];
        panda$core$Bit $tmp3637 = $tmp3635(s$Iter3627);
        panda$core$Bit $tmp3638 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3637);
        if (!$tmp3638.value) goto $l3633;
        {
            ITable* $tmp3640 = s$Iter3627->$class->itable;
            while ($tmp3640->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3640 = $tmp3640->next;
            }
            $fn3642 $tmp3641 = $tmp3640->methods[1];
            panda$core$Object* $tmp3643 = $tmp3641(s$Iter3627);
            s3639 = ((org$pandalanguage$pandac$IRNode*) $tmp3643);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3639, indentedBody3624);
        }
        goto $l3632;
        $l3633:;
    }
    panda$core$String* $tmp3644 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn3645) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3644);
    panda$core$String* $tmp3646 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer3621);
    (($fn3647) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3646);
    panda$core$Int64 $tmp3648 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3648;
    (($fn3650) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3649);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3651;
    PANDA_ASSERT(((panda$core$Bit) { self->currentClass == NULL }).value);
    self->currentClass = p_cl;
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
    panda$io$File* $tmp3653 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3652);
    path3651 = $tmp3653;
    panda$io$File* $tmp3654 = panda$io$File$parent$R$panda$io$File$Q(path3651);
    panda$io$File$createDirectories($tmp3654);
    panda$io$IndentedOutputStream* $tmp3655 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3655->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3655->refCount.value = 1;
    panda$io$OutputStream* $tmp3657 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3651);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3655, $tmp3657);
    self->out = $tmp3655;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3658 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3658.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    self->currentClass = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$String* $tmp3659 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn3660) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3659);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp3661 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn3662) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3661);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp3663 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn3664) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3663);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp3665 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn3666) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3665);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp3667 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn3668) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3667);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn3669) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

