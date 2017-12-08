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
#include "panda/core/MutableString.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/ClassConstant.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/Pair.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/MethodShim.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/InlineContext.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/io/File.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"
#include "panda/core/Char8.h"
#include "panda/core/Int8.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/LoopDescriptor.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "org/pandalanguage/pandac/SymbolTable.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$finish} };

org$pandalanguage$pandac$LLVMCodeGenerator$class_type org$pandalanguage$pandac$LLVMCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$finish, org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim, org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT, org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl} };

typedef void (*$fn50)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn52)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn54)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn56)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn58)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn60)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn62)(panda$io$MemoryOutputStream*);
typedef void (*$fn64)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn65)(panda$io$MemoryOutputStream*);
typedef void (*$fn67)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn68)(panda$io$MemoryOutputStream*);
typedef void (*$fn70)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn71)(panda$io$MemoryOutputStream*);
typedef void (*$fn73)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn74)(panda$io$MemoryOutputStream*);
typedef void (*$fn76)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn77)(panda$io$MemoryOutputStream*);
typedef void (*$fn79)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn80)(panda$core$Object*);
typedef void (*$fn95)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn127)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn133)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn139)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn168)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn174)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn180)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn211)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn217)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn223)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn256)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn262)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn268)(panda$collections$Iterator*);
typedef void (*$fn284)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn304)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn310)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn316)(panda$collections$Iterator*);
typedef void (*$fn333)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn343)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn528)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn534)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn540)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn567)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn606)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn617)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn623)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn629)(panda$collections$Iterator*);
typedef void (*$fn644)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn680)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn683)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn691)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn698)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn731)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn744)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn799)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn819)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn850)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn863)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn875)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn877)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn882)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn898)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn901)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn913)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn948)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn961)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn967)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1027)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1053)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1084)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1097)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1102)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1105)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1114)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1120)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1126)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1153)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1192)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1203)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1209)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1215)(panda$collections$Iterator*);
typedef void (*$fn1231)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1350)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1370)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1429)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1440)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1446)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1452)(panda$collections$Iterator*);
typedef void (*$fn1467)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1486)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1509)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1575)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1586)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1609)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1638)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1801)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1807)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1813)(panda$collections$Iterator*);
typedef void (*$fn1847)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1863)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1877)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1883)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1899)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1913)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1929)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1943)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1949)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1965)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2024)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2041)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2051)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2068)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2078)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2105)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2127)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2157)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2167)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2180)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2204)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2214)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2227)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2237)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2261)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2280)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2305)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2312)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2342)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2352)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2368)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2384)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2410)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2423)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2437)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2442)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2449)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2471)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2489)(panda$collections$CollectionView*);
typedef void (*$fn2511)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2524)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2540)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2568)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2590)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2604)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2619)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2645)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2661)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2687)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2700)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2721)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2737)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2754)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2767)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2785)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2804)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2819)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2843)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2859)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2923)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2930)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2942)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2948)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2954)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2960)(panda$collections$Iterator*);
typedef void (*$fn2972)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2974)(panda$io$OutputStream*);
typedef void (*$fn3001)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3021)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3133)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3146)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3151)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3173)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3178)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3184)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3190)(panda$collections$Iterator*);
typedef void (*$fn3199)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3202)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3215)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3239)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3254)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3265)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3287)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3299)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3318)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3336)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3351)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3369)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3374)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3392)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3408)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3427)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3449)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3471)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3503)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3525)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3543)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3558)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3569)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3598)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3621)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3637)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3653)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3678)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3692)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3770)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3870)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3885)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3909)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3920)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3934)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3962)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3977)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4012)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4024)(panda$collections$CollectionView*);
typedef void (*$fn4036)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4043)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4049)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4055)(panda$collections$Iterator*);
typedef void (*$fn4065)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4068)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4106)(panda$collections$CollectionView*);
typedef void (*$fn4114)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4132)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4156)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4174)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4184)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4207)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4216)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4226)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4271)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4307)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4313)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4319)(panda$collections$Iterator*);
typedef void (*$fn4342)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4397)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4409)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4426)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4431)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4545)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4562)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4580)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4584)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4590)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4596)(panda$collections$Iterator*);
typedef void (*$fn4598)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4599)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4602)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4626)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4641)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4654)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4665)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4701)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4708)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4721)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4731)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4749)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4763)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4773)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4783)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4798)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4808)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4849)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4861)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4878)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4899)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4910)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4931)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4942)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4959)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4980)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4991)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5012)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5023)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5039)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5046)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5063)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5079)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5092)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5108)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5119)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5135)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5146)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5162)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5175)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5188)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5202)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5213)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5227)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5238)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5254)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5267)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5275)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5289)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5294)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5313)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5326)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5337)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5346)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5365)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5378)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5389)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5398)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5412)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5421)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5432)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5447)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5464)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5470)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5476)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5501)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5523)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5559)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5582)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5621)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5641)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5648)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5658)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5660)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5708)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5715)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5742)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5764)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5770)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5776)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5782)(panda$collections$Iterator*);
typedef void (*$fn5789)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5799)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5804)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5806)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5808)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5825)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5838)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5854)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5915)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5939)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5977)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6009)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6013)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6015)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6021)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6029)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6041)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6046)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6052)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6058)(panda$collections$Iterator*);
typedef void (*$fn6072)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6075)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6078)(panda$io$MemoryOutputStream*);
typedef void (*$fn6080)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6083)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6097)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6107)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6112)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6118)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6124)(panda$collections$Iterator*);
typedef void (*$fn6138)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6141)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6153)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6159)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6165)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn6167)(panda$io$MemoryOutputStream*);
typedef void (*$fn6169)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6170)(panda$io$MemoryOutputStream*);
typedef void (*$fn6172)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6180)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6183)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x64\x61\x74\x61\x6C\x61\x79\x6F\x75\x74\x20\x3D\x20\x22\x65\x2D\x70\x3A\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x69\x31\x3A\x38\x3A\x38\x2D\x69\x38\x3A\x38\x3A\x38\x2D\x69\x31\x36\x3A\x31\x36\x3A\x31\x36\x2D\x69\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x69\x36\x34\x3A", 72, 1 };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34\x3A\x36\x34\x2D\x66\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x66\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x31\x32\x38\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D\x61\x30\x3A\x30\x3A\x36\x34\x2D\x73\x30\x3A\x36\x34\x3A\x36\x34\x2D\x66\x38\x30\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D", 78, 1 };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x38\x3A\x31\x36\x3A\x33\x32\x3A\x36\x34\x2D\x53\x31\x32\x38\x22", 17, 1 };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6C\x65\x20\x3D\x20\x22\x78\x38\x36\x5F\x36\x34\x2D\x61\x70\x70\x6C\x65\x2D\x6D\x61\x63\x6F\x73\x78\x31\x30\x2E\x38\x2E\x30\x22", 43, 1 };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x29", 24, 1 };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x2C\x20\x69\x36\x34\x29", 30, 1 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x29", 23, 1 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 60, 1 };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 1 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 1 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 1 };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 1 };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 10, 1 };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D", 42, 1 };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 18, 1 };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 19, 1 };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x31\x20\x7D", 6, 1 };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69", 1, 1 };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x31", 2, 1 };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 1 };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1 };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, 1 };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x2E", 2, 1 };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, 1 };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 1 };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1 };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 1 };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 1 };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, 1 };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, 1 };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 1 };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x70", 3, 1 };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70", 2, 1 };
static panda$core$String $s772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, 1 };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, 1 };
static panda$core$String $s897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 1 };
static panda$core$String $s900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66", 12, 1 };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 16, 1 };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x4F\x62\x6A\x65\x63\x74\x2A", 35, 1 };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, 1 };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9, 1 };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, 1 };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 1 };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1 };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 1 };
static panda$core$String $s1199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s1222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 1 };
static panda$core$String $s1234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, 1 };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6, 1 };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s1336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, 1 };
static panda$core$String $s1363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, 1 };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 1 };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 1 };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 1 };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23, 1 };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1 };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, 1 };
static panda$core$String $s1502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, 1 };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 1 };
static panda$core$String $s1537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 1 };
static panda$core$String $s1545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s1549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 1 };
static panda$core$String $s1556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4, 1 };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1 };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3, 1 };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, 1 };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1 };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1 };
static panda$core$String $s1651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C", 1, 1 };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, 1 };
static panda$core$String $s1694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, 1 };
static panda$core$String $s1714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, 1 };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, 1 };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s1727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, 1 };
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, 1 };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, 1 };
static panda$core$String $s1734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, 1 };
static panda$core$String $s1737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, 1 };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s1742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, 1 };
static panda$core$String $s1743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, 1 };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, 1 };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, 1 };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, 1 };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1 };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1 };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, 1 };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, 1 };
static panda$core$String $s1767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, 1 };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s1772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, 1 };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, 1 };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, 1 };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, 1 };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, 1 };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s1787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, 1 };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, 1 };
static panda$core$String $s1791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, 1 };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, 1 };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, 1 };
static panda$core$String $s1826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, 1 };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, 1 };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s1960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s1963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 1 };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 1 };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 1 };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, 1 };
static panda$core$String $s1971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, 1 };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 1 };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, 1 };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 1 };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 1 };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 1 };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 1 };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 1 };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, 1 };
static panda$core$String $s1980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, 1 };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, 1 };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, 1 };
static panda$core$String $s1983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 1 };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 1 };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 1 };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, 1 };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, 1 };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 1 };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, 1 };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 1 };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 1 };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 1 };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 1 };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 1 };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, 1 };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, 1 };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, 1 };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, 1 };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, 1 };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, 1 };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, 1 };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, 1 };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, 1 };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, 1 };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, 1 };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, 1 };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, 1 };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, 1 };
static panda$core$String $s2011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s2049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, 1 };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 48, 1 };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 30, 1 };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1 };
static panda$core$String $s2196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, 1 };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1 };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 1 };
static panda$core$String $s2212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 1 };
static panda$core$String $s2258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1 };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1 };
static panda$core$String $s2278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 1 };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, 1 };
static panda$core$String $s2318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, 1 };
static panda$core$String $s2329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, 1 };
static panda$core$String $s2334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1 };
static panda$core$String $s2336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 1 };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, 1 };
static panda$core$String $s2350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, 1 };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1 };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1 };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s2394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, 1 };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, 1 };
static panda$core$String $s2407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, 1 };
static panda$core$String $s2438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, 1 };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, 1 };
static panda$core$String $s2519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 1 };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 1 };
static panda$core$String $s2580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, 1 };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 1 };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s2682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s2708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, 1 };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 1 };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 1 };
static panda$core$String $s2760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 1 };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, 1 };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s2812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 1 };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1 };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, 1 };
static panda$core$String $s2908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, 1 };
static panda$core$String $s2910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, 1 };
static panda$core$String $s2917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, 1 };
static panda$core$String $s2934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s2940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s2973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s2996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s3016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s3131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s3135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, 1 };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s3158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s3163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s3244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s3246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s3263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s3274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, 1 };
static panda$core$String $s3277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1 };
static panda$core$String $s3279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s3281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s3290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s3313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, 1 };
static panda$core$String $s3339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, 1 };
static panda$core$String $s3341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, 1 };
static panda$core$String $s3348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, 1 };
static panda$core$String $s3370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, 1 };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, 1 };
static panda$core$String $s3393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s3396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s3538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s3548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s3550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s3567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s3578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, 1 };
static panda$core$String $s3584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, 1 };
static panda$core$String $s3587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s3589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s3592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s3595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s3607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s3663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s3668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, 1 };
static panda$core$String $s3672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, 1 };
static panda$core$String $s3704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, 1 };
static panda$core$String $s3705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, 1 };
static panda$core$String $s3746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, 1 };
static panda$core$String $s3754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s3759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s3801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s3811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s3816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s3820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, 1 };
static panda$core$String $s3822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 1 };
static panda$core$String $s3842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s3844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s3854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s3859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s3863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, 1 };
static panda$core$String $s3865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 1 };
static panda$core$String $s3874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s3876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s3883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s3918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s3928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s3952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1 };
static panda$core$String $s3960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, 1 };
static panda$core$String $s3965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, 1 };
static panda$core$String $s3967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, 1 };
static panda$core$String $s3974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s3990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s3991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s3998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s4003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, 1 };
static panda$core$String $s4017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s4027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, 1 };
static panda$core$String $s4029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, 1 };
static panda$core$String $s4034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1 };
static panda$core$String $s4038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, 1 };
static panda$core$String $s4063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 1 };
static panda$core$String $s4071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, 1 };
static panda$core$String $s4073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, 1 };
static panda$core$String $s4084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s4086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 69, 1 };
static panda$core$String $s4094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, 1 };
static panda$core$String $s4096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, 1 };
static panda$core$String $s4109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 1 };
static panda$core$String $s4112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x31\x20\x7D\x20\x7D", 26, 1 };
static panda$core$String $s4118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s4121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s4128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10, 1 };
static panda$core$String $s4146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, 1 };
static panda$core$String $s4149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s4158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, 1 };
static panda$core$String $s4163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, 1 };
static panda$core$String $s4167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s4172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s4177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s4182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, 1 };
static panda$core$String $s4200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s4209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s4214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s4219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s4224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s4236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, 1 };
static panda$core$String $s4238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s4248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s4254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 1 };
static panda$core$String $s4257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, 1 };
static panda$core$String $s4266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, 1 };
static panda$core$String $s4269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 1 };
static panda$core$String $s4335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s4337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s4363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s4383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s4391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s4400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 1 };
static panda$core$String $s4419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s4424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 1 };
static panda$core$String $s4427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, 1 };
static panda$core$String $s4429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s4434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s4500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s4538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s4543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s4549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 1 };
static panda$core$String $s4551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s4556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s4569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s4600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s4619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s4652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s4663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s4714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s4719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1 };
static panda$core$String $s4734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s4739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 1 };
static panda$core$String $s4750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s4752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1 };
static panda$core$String $s4776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1 };
static panda$core$String $s4785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s4788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, 1 };
static panda$core$String $s4793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, 1 };
static panda$core$String $s4824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s4826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s4828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1 };
static panda$core$String $s4831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1 };
static panda$core$String $s4834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 1 };
static panda$core$String $s4836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s4839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, 1 };
static panda$core$String $s4844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, 1 };
static panda$core$String $s4851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 1 };
static panda$core$String $s4875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s4886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 1 };
static panda$core$String $s4889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s4918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 1 };
static panda$core$String $s4921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 1 };
static panda$core$String $s4956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s4967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, 1 };
static panda$core$String $s4970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s4999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, 1 };
static panda$core$String $s5002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s5031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 1 };
static panda$core$String $s5100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 1 };
static panda$core$String $s5127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 1 };
static panda$core$String $s5173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 1 };
static panda$core$String $s5196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 1 };
static panda$core$String $s5221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 1 };
static panda$core$String $s5246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s5262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s5265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1 };
static panda$core$String $s5268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 1 };
static panda$core$String $s5270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s5430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s5544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 1 };
static panda$core$String $s5556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s5571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3B\x20\x69\x6E\x6C\x69\x6E\x65\x20\x72\x65\x74\x75\x72\x6E\x20\x28", 18, 1 };
static panda$core$String $s5639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s5642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s5646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 1 };
static panda$core$String $s5704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s5754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s5756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s5763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20", 10, 1 };
static panda$core$String $s5784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, 1 };
static panda$core$String $s5786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, 1 };
static panda$core$String $s5787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, 1 };
static panda$core$String $s5790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, 1 };
static panda$core$String $s5792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, 1 };
static panda$core$String $s5794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, 1 };
static panda$core$String $s5802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s5807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s5818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 1 };
static panda$core$String $s5831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, 1 };
static panda$core$String $s5833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 1 };
static panda$core$String $s5852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, 1 };
static panda$core$String $s5905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, 1 };
static panda$core$String $s5907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, 1 };
static panda$core$String $s5973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s5999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s6004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, 1 };
static panda$core$String $s6007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s6016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s6023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s6030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s6042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s6070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s6077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 1 };
static panda$core$String $s6079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 1 };
static panda$core$String $s6082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s6084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s6099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s6108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s6136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s6177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 1 };
static panda$core$String $s6179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s6182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

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
    panda$io$IndentedOutputStream* $tmp7 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp7->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp7->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp7, ((panda$io$OutputStream*) self->methodsBuffer));
    self->methods = $tmp7;
    panda$io$MemoryOutputStream* $tmp9 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp9->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp9->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp9);
    self->methodHeaderBuffer = $tmp9;
    panda$io$IndentedOutputStream* $tmp11 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp11->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp11->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp11, ((panda$io$OutputStream*) self->methodHeaderBuffer));
    self->methodHeader = $tmp11;
    panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp13->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp13);
    self->wrapperShimsBuffer = $tmp13;
    panda$io$IndentedOutputStream* $tmp15 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp15->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp15->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp15, ((panda$io$OutputStream*) self->wrapperShimsBuffer));
    self->wrapperShims = $tmp15;
    panda$io$MemoryOutputStream* $tmp17 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp17->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp17->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp17);
    self->shimsBuffer = $tmp17;
    panda$io$IndentedOutputStream* $tmp19 = (panda$io$IndentedOutputStream*) malloc(48);
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
    panda$io$IndentedOutputStream* $tmp43 = (panda$io$IndentedOutputStream*) malloc(48);
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
    panda$core$String* $tmp63 = (($fn62) self->types->$class->vtable[0])(self->types);
    (($fn64) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp63);
    panda$core$String* $tmp66 = (($fn65) self->strings->$class->vtable[0])(self->strings);
    (($fn67) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp66);
    panda$core$String* $tmp69 = (($fn68) self->declarations->$class->vtable[0])(self->declarations);
    (($fn70) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp69);
    panda$core$String* $tmp72 = (($fn71) self->wrapperShimsBuffer->$class->vtable[0])(self->wrapperShimsBuffer);
    (($fn73) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp72);
    panda$core$String* $tmp75 = (($fn74) self->shimsBuffer->$class->vtable[0])(self->shimsBuffer);
    (($fn76) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp75);
    panda$core$String* $tmp78 = (($fn77) self->methodsBuffer->$class->vtable[0])(self->methodsBuffer);
    (($fn79) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp78);
    (($fn80) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self) {
    panda$core$Int64 $tmp81 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp81;
    panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s82, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp85 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp83, &$s84);
    return $tmp85;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self) {
    panda$core$Int64 $tmp86 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp86;
    panda$core$String* $tmp88 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s87, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp90 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp88, &$s89);
    return $tmp90;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp92 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s91, p_label);
    panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp92, &$s93);
    (($fn95) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp94);
    self->currentBlock = p_label;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt) {
    switch (p_stmt->kind.value) {
        case 1000:
        {
            panda$core$Int64 $tmp96 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp96, ((panda$core$Int64) { 0 }));
            if ($tmp97.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp98 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp99 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp98, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp100 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, $tmp99);
            panda$core$Bit $tmp101 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp100));
            return $tmp101;
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
    org$pandalanguage$pandac$ClassDecl* cl113;
    panda$core$Int64 result122;
    panda$collections$Iterator* f$Iter123;
    org$pandalanguage$pandac$FieldDecl* f136;
    panda$core$Int64 size142;
    panda$core$Int64 align144;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp102 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp102.value) {
    {
        panda$core$Bit $tmp104 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s103);
        if ($tmp104.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp106 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s105);
        if ($tmp106.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp108 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s107);
        if ($tmp108.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp110 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s109);
        PANDA_ASSERT($tmp110.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp111 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp112 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp111);
    if ($tmp112.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp114 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl113 = $tmp114;
    PANDA_ASSERT(((panda$core$Bit) { cl113 != NULL }).value);
    panda$core$Bit $tmp116 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl113);
    panda$core$Bit $tmp117 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp116);
    bool $tmp115 = $tmp117.value;
    if ($tmp115) goto $l118;
    panda$core$Bit $tmp120 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl113)->name, &$s119);
    $tmp115 = $tmp120.value;
    $l118:;
    panda$core$Bit $tmp121 = { $tmp115 };
    if ($tmp121.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result122 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp124 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl113);
        ITable* $tmp125 = ((panda$collections$Iterable*) $tmp124)->$class->itable;
        while ($tmp125->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp125 = $tmp125->next;
        }
        $fn127 $tmp126 = $tmp125->methods[0];
        panda$collections$Iterator* $tmp128 = $tmp126(((panda$collections$Iterable*) $tmp124));
        f$Iter123 = $tmp128;
        $l129:;
        ITable* $tmp131 = f$Iter123->$class->itable;
        while ($tmp131->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp131 = $tmp131->next;
        }
        $fn133 $tmp132 = $tmp131->methods[0];
        panda$core$Bit $tmp134 = $tmp132(f$Iter123);
        panda$core$Bit $tmp135 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp134);
        if (!$tmp135.value) goto $l130;
        {
            ITable* $tmp137 = f$Iter123->$class->itable;
            while ($tmp137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp137 = $tmp137->next;
            }
            $fn139 $tmp138 = $tmp137->methods[1];
            panda$core$Object* $tmp140 = $tmp138(f$Iter123);
            f136 = ((org$pandalanguage$pandac$FieldDecl*) $tmp140);
            panda$core$Bit $tmp141 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f136->annotations);
            if ($tmp141.value) {
            {
                goto $l129;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f136);
            panda$core$Int64 $tmp143 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f136->type);
            size142 = $tmp143;
            panda$core$Int64 $tmp145 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result122, size142);
            align144 = $tmp145;
            panda$core$Bit $tmp146 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align144, ((panda$core$Int64) { 0 }));
            if ($tmp146.value) {
            {
                panda$core$Int64 $tmp147 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size142, align144);
                panda$core$Int64 $tmp148 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result122, $tmp147);
                result122 = $tmp148;
            }
            }
            panda$core$Int64 $tmp149 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result122, size142);
            panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp149, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp150.value);
            panda$core$Int64 $tmp151 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result122, size142);
            result122 = $tmp151;
        }
        goto $l129;
        $l130:;
    }
    panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp152.value) {
    {
        panda$core$Int64 $tmp153 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result122, ((panda$core$Int64) { 1 }));
        result122 = $tmp153;
    }
    }
    return result122;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp154 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp155 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp154, ((panda$core$Int64) { 8 }));
    return $tmp155;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl159;
    panda$core$Int64 result163;
    panda$collections$Iterator* f$Iter164;
    org$pandalanguage$pandac$FieldDecl* f177;
    panda$core$Int64 size182;
    panda$core$Int64 align184;
    panda$core$Bit $tmp156 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_t);
    panda$core$Bit $tmp157 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp156);
    if ($tmp157.value) {
    {
        panda$core$Int64 $tmp158 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
        return $tmp158;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp160 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl159 = $tmp160;
    PANDA_ASSERT(((panda$core$Bit) { cl159 != NULL }).value);
    panda$core$Bit $tmp162 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl159)->name, &$s161);
    if ($tmp162.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result163 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp165 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl159);
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
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f177);
            panda$core$Int64 $tmp183 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f177->type);
            size182 = $tmp183;
            panda$core$Int64 $tmp185 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result163, size182);
            align184 = $tmp185;
            panda$core$Bit $tmp186 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align184, ((panda$core$Int64) { 0 }));
            if ($tmp186.value) {
            {
                panda$core$Int64 $tmp187 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size182, align184);
                panda$core$Int64 $tmp188 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result163, $tmp187);
                result163 = $tmp188;
            }
            }
            panda$core$Int64 $tmp189 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result163, size182);
            panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp189, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp190.value);
            panda$core$Int64 $tmp191 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result163, size182);
            result163 = $tmp191;
        }
        goto $l170;
        $l171:;
    }
    panda$core$Bit $tmp193 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl159);
    bool $tmp192 = $tmp193.value;
    if (!$tmp192) goto $l194;
    panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    $tmp192 = $tmp195.value;
    $l194:;
    panda$core$Bit $tmp196 = { $tmp192 };
    if ($tmp196.value) {
    {
        panda$core$Int64 $tmp197 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result163, ((panda$core$Int64) { 1 }));
        result163 = $tmp197;
    }
    }
    return result163;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl198;
    panda$core$Int64 result204;
    panda$collections$Iterator* f$Iter207;
    org$pandalanguage$pandac$FieldDecl* f220;
    panda$core$Int64 size225;
    panda$core$Int64 align227;
    org$pandalanguage$pandac$ClassDecl* $tmp199 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl198 = $tmp199;
    bool $tmp200 = ((panda$core$Bit) { cl198 != NULL }).value;
    if (!$tmp200) goto $l201;
    panda$core$Bit $tmp202 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl198);
    $tmp200 = $tmp202.value;
    $l201:;
    panda$core$Bit $tmp203 = { $tmp200 };
    PANDA_ASSERT($tmp203.value);
    org$pandalanguage$pandac$Type* $tmp205 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp206 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp205);
    result204 = $tmp206;
    {
        panda$collections$ListView* $tmp208 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl198);
        ITable* $tmp209 = ((panda$collections$Iterable*) $tmp208)->$class->itable;
        while ($tmp209->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp209 = $tmp209->next;
        }
        $fn211 $tmp210 = $tmp209->methods[0];
        panda$collections$Iterator* $tmp212 = $tmp210(((panda$collections$Iterable*) $tmp208));
        f$Iter207 = $tmp212;
        $l213:;
        ITable* $tmp215 = f$Iter207->$class->itable;
        while ($tmp215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp215 = $tmp215->next;
        }
        $fn217 $tmp216 = $tmp215->methods[0];
        panda$core$Bit $tmp218 = $tmp216(f$Iter207);
        panda$core$Bit $tmp219 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp218);
        if (!$tmp219.value) goto $l214;
        {
            ITable* $tmp221 = f$Iter207->$class->itable;
            while ($tmp221->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp221 = $tmp221->next;
            }
            $fn223 $tmp222 = $tmp221->methods[1];
            panda$core$Object* $tmp224 = $tmp222(f$Iter207);
            f220 = ((org$pandalanguage$pandac$FieldDecl*) $tmp224);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f220);
            panda$core$Int64 $tmp226 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f220->type);
            size225 = $tmp226;
            panda$core$Int64 $tmp228 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result204, size225);
            align227 = $tmp228;
            panda$core$Bit $tmp229 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align227, ((panda$core$Int64) { 0 }));
            if ($tmp229.value) {
            {
                panda$core$Int64 $tmp230 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size225, align227);
                panda$core$Int64 $tmp231 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result204, $tmp230);
                result204 = $tmp231;
            }
            }
            panda$core$Int64 $tmp232 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result204, size225);
            panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp232, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp233.value);
            panda$core$Int64 $tmp234 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result204, size225);
            result204 = $tmp234;
        }
        goto $l213;
        $l214:;
    }
    panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp235.value) {
    {
        panda$core$Int64 $tmp236 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result204, ((panda$core$Int64) { 1 }));
        result204 = $tmp236;
    }
    }
    return result204;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl238;
    panda$core$MutableString* code242;
    panda$core$String* separator250;
    panda$collections$Iterator* f$Iter252;
    org$pandalanguage$pandac$FieldDecl* f265;
    panda$core$Bit $tmp237 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp237.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    org$pandalanguage$pandac$ClassDecl* $tmp239 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl238 = $tmp239;
    panda$core$Bit $tmp240 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(cl238->annotations);
    panda$core$Bit $tmp241 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp240);
    PANDA_ASSERT($tmp241.value);
    panda$core$MutableString* $tmp243 = (panda$core$MutableString*) malloc(40);
    $tmp243->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp243->refCount.value = 1;
    panda$core$String* $tmp246 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s245, $tmp246);
    panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, &$s248);
    panda$core$MutableString$init$panda$core$String($tmp243, $tmp249);
    code242 = $tmp243;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) cl238));
    PANDA_ASSERT(((panda$core$Bit) { cl238 != NULL }).value);
    separator250 = &$s251;
    {
        panda$collections$ListView* $tmp253 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl238);
        ITable* $tmp254 = ((panda$collections$Iterable*) $tmp253)->$class->itable;
        while ($tmp254->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp254 = $tmp254->next;
        }
        $fn256 $tmp255 = $tmp254->methods[0];
        panda$collections$Iterator* $tmp257 = $tmp255(((panda$collections$Iterable*) $tmp253));
        f$Iter252 = $tmp257;
        $l258:;
        ITable* $tmp260 = f$Iter252->$class->itable;
        while ($tmp260->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp260 = $tmp260->next;
        }
        $fn262 $tmp261 = $tmp260->methods[0];
        panda$core$Bit $tmp263 = $tmp261(f$Iter252);
        panda$core$Bit $tmp264 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp263);
        if (!$tmp264.value) goto $l259;
        {
            ITable* $tmp266 = f$Iter252->$class->itable;
            while ($tmp266->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp266 = $tmp266->next;
            }
            $fn268 $tmp267 = $tmp266->methods[1];
            panda$core$Object* $tmp269 = $tmp267(f$Iter252);
            f265 = ((org$pandalanguage$pandac$FieldDecl*) $tmp269);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f265);
            panda$core$Bit $tmp270 = panda$core$Bit$$NOT$R$panda$core$Bit(f265->type->resolved);
            if ($tmp270.value) {
            {
                return;
            }
            }
            panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s271, separator250);
            panda$core$String* $tmp274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp272, &$s273);
            panda$core$String* $tmp275 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f265->type);
            panda$core$String* $tmp276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp274, $tmp275);
            panda$core$String* $tmp278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp276, &$s277);
            panda$core$MutableString$append$panda$core$String(code242, $tmp278);
            separator250 = &$s279;
        }
        goto $l258;
        $l259:;
    }
    org$pandalanguage$pandac$Type* $tmp280 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp281 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp280);
    if ($tmp281.value) {
    {
        panda$core$MutableString$append$panda$core$String(code242, &$s282);
    }
    }
    panda$core$MutableString$append$panda$core$String(code242, &$s283);
    (($fn284) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code242));
    panda$core$Bit $tmp285 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl238);
    if ($tmp285.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl238);
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$MutableString* code287;
    org$pandalanguage$pandac$ClassDecl* object295;
    panda$core$String* separator298;
    panda$collections$Iterator* f$Iter300;
    org$pandalanguage$pandac$FieldDecl* f313;
    panda$core$Bit $tmp286 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenWrappers, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp286.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->writtenWrappers, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    panda$core$MutableString* $tmp288 = (panda$core$MutableString*) malloc(40);
    $tmp288->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp288->refCount.value = 1;
    panda$core$String* $tmp291 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s290, $tmp291);
    panda$core$String* $tmp294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp292, &$s293);
    panda$core$MutableString$init$panda$core$String($tmp288, $tmp294);
    code287 = $tmp288;
    org$pandalanguage$pandac$Type* $tmp296 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp297 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp296);
    object295 = $tmp297;
    PANDA_ASSERT(((panda$core$Bit) { object295 != NULL }).value);
    separator298 = &$s299;
    {
        panda$collections$ListView* $tmp301 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, object295);
        ITable* $tmp302 = ((panda$collections$Iterable*) $tmp301)->$class->itable;
        while ($tmp302->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp302 = $tmp302->next;
        }
        $fn304 $tmp303 = $tmp302->methods[0];
        panda$collections$Iterator* $tmp305 = $tmp303(((panda$collections$Iterable*) $tmp301));
        f$Iter300 = $tmp305;
        $l306:;
        ITable* $tmp308 = f$Iter300->$class->itable;
        while ($tmp308->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp308 = $tmp308->next;
        }
        $fn310 $tmp309 = $tmp308->methods[0];
        panda$core$Bit $tmp311 = $tmp309(f$Iter300);
        panda$core$Bit $tmp312 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp311);
        if (!$tmp312.value) goto $l307;
        {
            ITable* $tmp314 = f$Iter300->$class->itable;
            while ($tmp314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp314 = $tmp314->next;
            }
            $fn316 $tmp315 = $tmp314->methods[1];
            panda$core$Object* $tmp317 = $tmp315(f$Iter300);
            f313 = ((org$pandalanguage$pandac$FieldDecl*) $tmp317);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f313);
            panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s318, separator298);
            panda$core$String* $tmp321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp319, &$s320);
            panda$core$String* $tmp322 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f313->type);
            panda$core$String* $tmp323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp321, $tmp322);
            panda$core$String* $tmp325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp323, &$s324);
            panda$core$MutableString$append$panda$core$String(code287, $tmp325);
            separator298 = &$s326;
        }
        goto $l306;
        $l307:;
    }
    panda$core$String* $tmp328 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s327, $tmp328);
    panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp329, &$s330);
    panda$core$MutableString$append$panda$core$String(code287, $tmp331);
    panda$core$MutableString$append$panda$core$String(code287, &$s332);
    (($fn333) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code287));
    panda$core$String* $tmp335 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s334, $tmp335);
    panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp336, &$s337);
    panda$core$String* $tmp339 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp338, $tmp339);
    panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, &$s341);
    (($fn343) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp342);
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp345 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s344, $tmp345);
    return $tmp346;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* name355;
    org$pandalanguage$pandac$ClassDecl* cl361;
    org$pandalanguage$pandac$ClassDecl* cl367;
    org$pandalanguage$pandac$ClassDecl* cl380;
    panda$core$String* name383;
    org$pandalanguage$pandac$ClassDecl* cl389;
    panda$core$MutableString* result399;
    panda$core$Range$LTpanda$core$Int64$GT $tmp407;
    switch (p_t->typeKind.value) {
        case 14:
        {
            return &$s347;
        }
        break;
        case 12:
        case 13:
        {
            panda$core$Int64 $tmp349 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp350 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp349, ((panda$core$Int64) { 8 }));
            panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s348, ((panda$core$Object*) wrap_panda$core$Int64($tmp350)));
            panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp351, &$s352);
            return $tmp353;
        }
        break;
        case 19:
        {
            return &$s354;
        }
        break;
        case 10:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, p_t);
            panda$core$String* $tmp357 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s356, $tmp357);
            panda$core$String* $tmp360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp358, &$s359);
            name355 = $tmp360;
            org$pandalanguage$pandac$ClassDecl* $tmp362 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl361 = $tmp362;
            PANDA_ASSERT(((panda$core$Bit) { cl361 != NULL }).value);
            panda$core$Bit $tmp363 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl361);
            panda$core$Bit $tmp364 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp363);
            if ($tmp364.value) {
            {
                panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name355, &$s365);
                return $tmp366;
            }
            }
            return name355;
        }
        break;
        case 11:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp368 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl367 = $tmp368;
            PANDA_ASSERT(((panda$core$Bit) { cl367 != NULL }).value);
            panda$core$Bit $tmp369 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl367);
            if ($tmp369.value) {
            {
                panda$core$String* $tmp370 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
                return $tmp370;
            }
            }
            panda$core$Object* $tmp371 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp372 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp371));
            return $tmp372;
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp373 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp375 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp373))->name, &$s374);
            if ($tmp375.value) {
            {
                panda$core$Object* $tmp376 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp377 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp376));
                panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp377, &$s378);
                return $tmp379;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp381 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl380 = $tmp381;
            panda$core$Bit $tmp382 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl380);
            if ($tmp382.value) {
            {
                panda$core$String* $tmp385 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s384, $tmp385);
                panda$core$String* $tmp388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp386, &$s387);
                name383 = $tmp388;
                org$pandalanguage$pandac$ClassDecl* $tmp390 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
                cl389 = $tmp390;
                PANDA_ASSERT(((panda$core$Bit) { cl389 != NULL }).value);
                panda$core$Bit $tmp391 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl389);
                panda$core$Bit $tmp392 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp391);
                if ($tmp392.value) {
                {
                    panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name383, &$s393);
                    return $tmp394;
                }
                }
                return name383;
            }
            }
            panda$core$Object* $tmp395 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp396 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp395));
            return $tmp396;
        }
        break;
        case 22:
        {
            panda$core$Object* $tmp397 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp398 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp397));
            return $tmp398;
        }
        break;
        case 24:
        case 25:
        {
            panda$core$MutableString* $tmp400 = (panda$core$MutableString*) malloc(40);
            $tmp400->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp400->refCount.value = 1;
            panda$core$Int64 $tmp402 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp403 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp402, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp404 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, $tmp403);
            panda$core$String* $tmp405 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp404));
            panda$core$MutableString$init$panda$core$String($tmp400, $tmp405);
            result399 = $tmp400;
            panda$core$MutableString$append$panda$core$String(result399, &$s406);
            panda$core$Int64 $tmp408 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp409 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp408, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp407, ((panda$core$Int64) { 0 }), $tmp409, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp411 = $tmp407.start.value;
            panda$core$Int64 i410 = { $tmp411 };
            int64_t $tmp413 = $tmp407.end.value;
            int64_t $tmp414 = $tmp407.step.value;
            bool $tmp415 = $tmp407.inclusive.value;
            bool $tmp422 = $tmp414 > 0;
            if ($tmp422) goto $l420; else goto $l421;
            $l420:;
            if ($tmp415) goto $l423; else goto $l424;
            $l423:;
            if ($tmp411 <= $tmp413) goto $l416; else goto $l418;
            $l424:;
            if ($tmp411 < $tmp413) goto $l416; else goto $l418;
            $l421:;
            if ($tmp415) goto $l425; else goto $l426;
            $l425:;
            if ($tmp411 >= $tmp413) goto $l416; else goto $l418;
            $l426:;
            if ($tmp411 > $tmp413) goto $l416; else goto $l418;
            $l416:;
            {
                panda$core$Bit $tmp428 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i410, ((panda$core$Int64) { 0 }));
                if ($tmp428.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result399, &$s429);
                }
                }
                panda$core$Object* $tmp430 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, i410);
                panda$core$String* $tmp431 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp430));
                panda$core$MutableString$append$panda$core$String(result399, $tmp431);
            }
            $l419:;
            if ($tmp422) goto $l433; else goto $l434;
            $l433:;
            int64_t $tmp435 = $tmp413 - i410.value;
            if ($tmp415) goto $l436; else goto $l437;
            $l436:;
            if ($tmp435 >= $tmp414) goto $l432; else goto $l418;
            $l437:;
            if ($tmp435 > $tmp414) goto $l432; else goto $l418;
            $l434:;
            int64_t $tmp439 = i410.value - $tmp413;
            if ($tmp415) goto $l440; else goto $l441;
            $l440:;
            if ($tmp439 >= -$tmp414) goto $l432; else goto $l418;
            $l441:;
            if ($tmp439 > -$tmp414) goto $l432; else goto $l418;
            $l432:;
            i410.value += $tmp414;
            goto $l416;
            $l418:;
            panda$core$MutableString$append$panda$core$String(result399, &$s443);
            panda$core$String* $tmp444 = panda$core$MutableString$convert$R$panda$core$String(result399);
            return $tmp444;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp445.value) {
    {
        panda$core$Object* $tmp446 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp447 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp446));
        return $tmp447;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, p_t);
    panda$core$String* $tmp449 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s448, $tmp449);
    panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp450, &$s451);
    return $tmp452;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp453 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp453, &$s454);
    return $tmp455;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType456;
    panda$core$MutableString* result458;
    panda$core$Range$LTpanda$core$Int64$GT $tmp475;
    org$pandalanguage$pandac$Type* $tmp457 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType456 = $tmp457;
    panda$core$MutableString* $tmp459 = (panda$core$MutableString*) malloc(40);
    $tmp459->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp459->refCount.value = 1;
    panda$core$MutableString$init($tmp459);
    result458 = $tmp459;
    panda$core$Int64 $tmp461 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inheritedType456->subtypes);
    panda$core$Int64 $tmp462 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp461, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp463 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedType456->subtypes, $tmp462);
    panda$core$String* $tmp464 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp463));
    panda$core$MutableString$append$panda$core$String(result458, $tmp464);
    panda$core$MutableString$append$panda$core$String(result458, &$s465);
    panda$core$Bit $tmp466 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp466.value);
    panda$core$String* $tmp468 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s467, $tmp468);
    panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp469, &$s470);
    panda$core$MutableString$append$panda$core$String(result458, $tmp471);
    panda$core$Bit $tmp472 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp472.value) {
    {
        panda$core$MutableString$append$panda$core$String(result458, &$s473);
    }
    }
    panda$core$MutableString$append$panda$core$String(result458, &$s474);
    panda$core$Int64 $tmp476 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inheritedType456->subtypes);
    panda$core$Int64 $tmp477 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp476, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp475, ((panda$core$Int64) { 0 }), $tmp477, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp479 = $tmp475.start.value;
    panda$core$Int64 i478 = { $tmp479 };
    int64_t $tmp481 = $tmp475.end.value;
    int64_t $tmp482 = $tmp475.step.value;
    bool $tmp483 = $tmp475.inclusive.value;
    bool $tmp490 = $tmp482 > 0;
    if ($tmp490) goto $l488; else goto $l489;
    $l488:;
    if ($tmp483) goto $l491; else goto $l492;
    $l491:;
    if ($tmp479 <= $tmp481) goto $l484; else goto $l486;
    $l492:;
    if ($tmp479 < $tmp481) goto $l484; else goto $l486;
    $l489:;
    if ($tmp483) goto $l493; else goto $l494;
    $l493:;
    if ($tmp479 >= $tmp481) goto $l484; else goto $l486;
    $l494:;
    if ($tmp479 > $tmp481) goto $l484; else goto $l486;
    $l484:;
    {
        panda$core$MutableString$append$panda$core$String(result458, &$s496);
        panda$core$Object* $tmp497 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedType456->subtypes, i478);
        panda$core$String* $tmp498 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp497));
        panda$core$MutableString$append$panda$core$String(result458, $tmp498);
    }
    $l487:;
    if ($tmp490) goto $l500; else goto $l501;
    $l500:;
    int64_t $tmp502 = $tmp481 - i478.value;
    if ($tmp483) goto $l503; else goto $l504;
    $l503:;
    if ($tmp502 >= $tmp482) goto $l499; else goto $l486;
    $l504:;
    if ($tmp502 > $tmp482) goto $l499; else goto $l486;
    $l501:;
    int64_t $tmp506 = i478.value - $tmp481;
    if ($tmp483) goto $l507; else goto $l508;
    $l507:;
    if ($tmp506 >= -$tmp482) goto $l499; else goto $l486;
    $l508:;
    if ($tmp506 > -$tmp482) goto $l499; else goto $l486;
    $l499:;
    i478.value += $tmp482;
    goto $l484;
    $l486:;
    panda$core$MutableString$append$panda$core$String(result458, &$s510);
    panda$core$String* $tmp511 = panda$core$MutableString$convert$R$panda$core$String(result458);
    return $tmp511;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp512.value);
    panda$core$Object* $tmp513 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp513));
    panda$core$Object* $tmp515 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp516 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp515));
    panda$core$String* $tmp517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s514, $tmp516);
    panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp517, &$s518);
    return $tmp519;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces520;
    panda$core$String* previous523;
    panda$collections$Iterator* intfType$Iter525;
    org$pandalanguage$pandac$Type* intfType537;
    org$pandalanguage$pandac$ClassDecl* intf542;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC544;
    panda$collections$ListView* methods546;
    panda$core$String* name548;
    panda$core$String* t558;
    panda$core$MutableString* result572;
    panda$core$String* separator612;
    panda$collections$Iterator* m$Iter614;
    org$pandalanguage$pandac$MethodDecl* m626;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry634;
    org$pandalanguage$pandac$Type* $tmp521 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp522 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp521);
    interfaces520 = $tmp522;
    previous523 = &$s524;
    {
        ITable* $tmp526 = ((panda$collections$Iterable*) interfaces520)->$class->itable;
        while ($tmp526->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp526 = $tmp526->next;
        }
        $fn528 $tmp527 = $tmp526->methods[0];
        panda$collections$Iterator* $tmp529 = $tmp527(((panda$collections$Iterable*) interfaces520));
        intfType$Iter525 = $tmp529;
        $l530:;
        ITable* $tmp532 = intfType$Iter525->$class->itable;
        while ($tmp532->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp532 = $tmp532->next;
        }
        $fn534 $tmp533 = $tmp532->methods[0];
        panda$core$Bit $tmp535 = $tmp533(intfType$Iter525);
        panda$core$Bit $tmp536 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp535);
        if (!$tmp536.value) goto $l531;
        {
            ITable* $tmp538 = intfType$Iter525->$class->itable;
            while ($tmp538->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp538 = $tmp538->next;
            }
            $fn540 $tmp539 = $tmp538->methods[1];
            panda$core$Object* $tmp541 = $tmp539(intfType$Iter525);
            intfType537 = ((org$pandalanguage$pandac$Type*) $tmp541);
            org$pandalanguage$pandac$ClassDecl* $tmp543 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType537);
            intf542 = $tmp543;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp545 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf542);
            intfCC544 = $tmp545;
            panda$collections$ListView* $tmp547 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType537);
            methods546 = $tmp547;
            panda$core$String* $tmp550 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s549, $tmp550);
            panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp551, &$s552);
            panda$core$String* $tmp554 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf542)->name);
            panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp553, $tmp554);
            panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp555, &$s556);
            name548 = $tmp557;
            org$pandalanguage$pandac$Type* $tmp560 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp561 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp560);
            panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s559, $tmp561);
            panda$core$String* $tmp564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp562, &$s563);
            ITable* $tmp565 = ((panda$collections$CollectionView*) methods546)->$class->itable;
            while ($tmp565->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp565 = $tmp565->next;
            }
            $fn567 $tmp566 = $tmp565->methods[0];
            panda$core$Int64 $tmp568 = $tmp566(((panda$collections$CollectionView*) methods546));
            panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp564, ((panda$core$Object*) wrap_panda$core$Int64($tmp568)));
            panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp569, &$s570);
            t558 = $tmp571;
            panda$core$MutableString* $tmp573 = (panda$core$MutableString*) malloc(40);
            $tmp573->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp573->refCount.value = 1;
            panda$core$String* $tmp576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s575, name548);
            panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp576, &$s577);
            panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, t558);
            panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, &$s580);
            org$pandalanguage$pandac$Type* $tmp582 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp583 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp582);
            panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp581, $tmp583);
            panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp584, &$s585);
            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s587, intfCC544->type);
            panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp588, &$s589);
            panda$core$String* $tmp591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp590, intfCC544->name);
            panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp591, &$s592);
            org$pandalanguage$pandac$Type* $tmp594 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp595 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp594);
            panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp593, $tmp595);
            panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, &$s597);
            panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp586, $tmp598);
            panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s600, previous523);
            panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp601, &$s602);
            ITable* $tmp604 = ((panda$collections$CollectionView*) methods546)->$class->itable;
            while ($tmp604->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp604 = $tmp604->next;
            }
            $fn606 $tmp605 = $tmp604->methods[0];
            panda$core$Int64 $tmp607 = $tmp605(((panda$collections$CollectionView*) methods546));
            panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp603, ((panda$core$Object*) wrap_panda$core$Int64($tmp607)));
            panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp608, &$s609);
            panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, $tmp610);
            panda$core$MutableString$init$panda$core$String($tmp573, $tmp611);
            result572 = $tmp573;
            separator612 = &$s613;
            {
                ITable* $tmp615 = ((panda$collections$Iterable*) methods546)->$class->itable;
                while ($tmp615->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp615 = $tmp615->next;
                }
                $fn617 $tmp616 = $tmp615->methods[0];
                panda$collections$Iterator* $tmp618 = $tmp616(((panda$collections$Iterable*) methods546));
                m$Iter614 = $tmp618;
                $l619:;
                ITable* $tmp621 = m$Iter614->$class->itable;
                while ($tmp621->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp621 = $tmp621->next;
                }
                $fn623 $tmp622 = $tmp621->methods[0];
                panda$core$Bit $tmp624 = $tmp622(m$Iter614);
                panda$core$Bit $tmp625 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp624);
                if (!$tmp625.value) goto $l620;
                {
                    ITable* $tmp627 = m$Iter614->$class->itable;
                    while ($tmp627->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp627 = $tmp627->next;
                    }
                    $fn629 $tmp628 = $tmp627->methods[1];
                    panda$core$Object* $tmp630 = $tmp628(m$Iter614);
                    m626 = ((org$pandalanguage$pandac$MethodDecl*) $tmp630);
                    panda$core$MutableString$append$panda$core$String(result572, separator612);
                    separator612 = &$s631;
                    panda$core$Bit $tmp632 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m626->annotations);
                    if ($tmp632.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result572, &$s633);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp635 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m626);
                        entry634 = $tmp635;
                        panda$core$String* $tmp637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s636, ((panda$core$String*) entry634->second));
                        panda$core$String* $tmp639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp637, &$s638);
                        panda$core$String* $tmp640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp639, ((panda$core$String*) entry634->first));
                        panda$core$String* $tmp642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp640, &$s641);
                        panda$core$MutableString$append$panda$core$String(result572, $tmp642);
                    }
                    }
                }
                goto $l619;
                $l620:;
            }
            panda$core$MutableString$append$panda$core$String(result572, &$s643);
            (($fn644) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result572));
            panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s645, t558);
            panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp646, &$s647);
            panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp648, name548);
            panda$core$String* $tmp651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp649, &$s650);
            previous523 = $tmp651;
        }
        goto $l530;
        $l531:;
    }
    return previous523;
}
org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer652;
    panda$io$IndentedOutputStream* out655;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* found658;
    panda$core$Int64 oldVarCount666;
    org$pandalanguage$pandac$Type* effectiveReturnType667;
    panda$core$String* resultName671;
    panda$core$MutableString* resultType675;
    panda$core$String* self_t692;
    panda$core$Range$LTpanda$core$Int64$GT $tmp700;
    panda$core$String* pType720;
    panda$collections$Array* casts746;
    panda$core$Range$LTpanda$core$Int64$GT $tmp749;
    panda$core$String* p769;
    panda$core$String* returnValue791;
    panda$core$Range$LTpanda$core$Int64$GT $tmp820;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* result878;
    panda$io$MemoryOutputStream* $tmp653 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp653->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp653->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp653);
    outBuffer652 = $tmp653;
    panda$io$IndentedOutputStream* $tmp656 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp656->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp656->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp656, ((panda$io$OutputStream*) outBuffer652));
    out655 = $tmp656;
    panda$core$Object* $tmp659 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found658 = ((org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) $tmp659);
    if (((panda$core$Bit) { found658 != NULL }).value) {
    {
        return found658;
    }
    }
    panda$core$Bit $tmp660 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp660.value);
    panda$core$Int64 $tmp661 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp662 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp663 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp662, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp661, $tmp663);
    PANDA_ASSERT($tmp664.value);
    panda$core$Bit $tmp665 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp665.value);
    oldVarCount666 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp668 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp669 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp668, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp670 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, $tmp669);
    effectiveReturnType667 = ((org$pandalanguage$pandac$Type*) $tmp670);
    panda$core$String* $tmp672 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp672, &$s673);
    resultName671 = $tmp674;
    panda$core$MutableString* $tmp676 = (panda$core$MutableString*) malloc(40);
    $tmp676->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp676->refCount.value = 1;
    panda$core$String* $tmp678 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType667);
    panda$core$MutableString$init$panda$core$String($tmp676, $tmp678);
    resultType675 = $tmp676;
    (($fn680) ((panda$io$OutputStream*) out655)->$class->vtable[16])(((panda$io$OutputStream*) out655), &$s679);
    panda$core$Bit $tmp681 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_raw->owner);
    if ($tmp681.value) {
    {
        (($fn683) ((panda$io$OutputStream*) out655)->$class->vtable[16])(((panda$io$OutputStream*) out655), &$s682);
    }
    }
    panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s684, ((panda$core$Object*) resultType675));
    panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp685, &$s686);
    panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp687, resultName671);
    panda$core$String* $tmp690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp688, &$s689);
    (($fn691) ((panda$io$OutputStream*) out655)->$class->vtable[16])(((panda$io$OutputStream*) out655), $tmp690);
    panda$core$String* $tmp693 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t692 = $tmp693;
    panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s694, self_t692);
    panda$core$String* $tmp697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp695, &$s696);
    (($fn698) ((panda$io$OutputStream*) out655)->$class->vtable[16])(((panda$io$OutputStream*) out655), $tmp697);
    panda$core$MutableString$append$panda$core$String(resultType675, &$s699);
    panda$core$MutableString$append$panda$core$String(resultType675, self_t692);
    panda$core$Int64 $tmp701 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp700, ((panda$core$Int64) { 0 }), $tmp701, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp703 = $tmp700.start.value;
    panda$core$Int64 i702 = { $tmp703 };
    int64_t $tmp705 = $tmp700.end.value;
    int64_t $tmp706 = $tmp700.step.value;
    bool $tmp707 = $tmp700.inclusive.value;
    bool $tmp714 = $tmp706 > 0;
    if ($tmp714) goto $l712; else goto $l713;
    $l712:;
    if ($tmp707) goto $l715; else goto $l716;
    $l715:;
    if ($tmp703 <= $tmp705) goto $l708; else goto $l710;
    $l716:;
    if ($tmp703 < $tmp705) goto $l708; else goto $l710;
    $l713:;
    if ($tmp707) goto $l717; else goto $l718;
    $l717:;
    if ($tmp703 >= $tmp705) goto $l708; else goto $l710;
    $l718:;
    if ($tmp703 > $tmp705) goto $l708; else goto $l710;
    $l708:;
    {
        panda$core$Object* $tmp721 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, i702);
        panda$core$String* $tmp722 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp721));
        pType720 = $tmp722;
        panda$core$MutableString$append$panda$core$String(resultType675, &$s723);
        panda$core$MutableString$append$panda$core$String(resultType675, pType720);
        panda$core$String* $tmp725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s724, pType720);
        panda$core$String* $tmp727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp725, &$s726);
        panda$core$String* $tmp728 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp727, ((panda$core$Object*) wrap_panda$core$Int64(i702)));
        panda$core$String* $tmp730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp728, &$s729);
        (($fn731) ((panda$io$OutputStream*) out655)->$class->vtable[16])(((panda$io$OutputStream*) out655), $tmp730);
    }
    $l711:;
    if ($tmp714) goto $l733; else goto $l734;
    $l733:;
    int64_t $tmp735 = $tmp705 - i702.value;
    if ($tmp707) goto $l736; else goto $l737;
    $l736:;
    if ($tmp735 >= $tmp706) goto $l732; else goto $l710;
    $l737:;
    if ($tmp735 > $tmp706) goto $l732; else goto $l710;
    $l734:;
    int64_t $tmp739 = i702.value - $tmp705;
    if ($tmp707) goto $l740; else goto $l741;
    $l740:;
    if ($tmp739 >= -$tmp706) goto $l732; else goto $l710;
    $l741:;
    if ($tmp739 > -$tmp706) goto $l732; else goto $l710;
    $l732:;
    i702.value += $tmp706;
    goto $l708;
    $l710:;
    (($fn744) ((panda$io$OutputStream*) out655)->$class->vtable[19])(((panda$io$OutputStream*) out655), &$s743);
    panda$core$MutableString$append$panda$core$String(resultType675, &$s745);
    panda$collections$Array* $tmp747 = (panda$collections$Array*) malloc(40);
    $tmp747->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp747->refCount.value = 1;
    panda$collections$Array$init($tmp747);
    casts746 = $tmp747;
    panda$core$Int64 $tmp750 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp749, ((panda$core$Int64) { 0 }), $tmp750, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp752 = $tmp749.start.value;
    panda$core$Int64 i751 = { $tmp752 };
    int64_t $tmp754 = $tmp749.end.value;
    int64_t $tmp755 = $tmp749.step.value;
    bool $tmp756 = $tmp749.inclusive.value;
    bool $tmp763 = $tmp755 > 0;
    if ($tmp763) goto $l761; else goto $l762;
    $l761:;
    if ($tmp756) goto $l764; else goto $l765;
    $l764:;
    if ($tmp752 <= $tmp754) goto $l757; else goto $l759;
    $l765:;
    if ($tmp752 < $tmp754) goto $l757; else goto $l759;
    $l762:;
    if ($tmp756) goto $l766; else goto $l767;
    $l766:;
    if ($tmp752 >= $tmp754) goto $l757; else goto $l759;
    $l767:;
    if ($tmp752 > $tmp754) goto $l757; else goto $l759;
    $l757:;
    {
        panda$core$String* $tmp771 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s770, ((panda$core$Object*) wrap_panda$core$Int64(i751)));
        panda$core$String* $tmp773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp771, &$s772);
        p769 = $tmp773;
        panda$core$Object* $tmp774 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i751);
        panda$core$Object* $tmp775 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, i751);
        panda$core$Bit $tmp776 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp774)->type, ((org$pandalanguage$pandac$Type*) $tmp775));
        if ($tmp776.value) {
        {
            panda$core$Object* $tmp777 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, i751);
            panda$core$Object* $tmp778 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i751);
            panda$core$String* $tmp779 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p769, ((org$pandalanguage$pandac$Type*) $tmp777), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp778)->type, out655);
            panda$collections$Array$add$panda$collections$Array$T(casts746, ((panda$core$Object*) $tmp779));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts746, ((panda$core$Object*) p769));
        }
        }
    }
    $l760:;
    if ($tmp763) goto $l781; else goto $l782;
    $l781:;
    int64_t $tmp783 = $tmp754 - i751.value;
    if ($tmp756) goto $l784; else goto $l785;
    $l784:;
    if ($tmp783 >= $tmp755) goto $l780; else goto $l759;
    $l785:;
    if ($tmp783 > $tmp755) goto $l780; else goto $l759;
    $l782:;
    int64_t $tmp787 = i751.value - $tmp754;
    if ($tmp756) goto $l788; else goto $l789;
    $l788:;
    if ($tmp787 >= -$tmp755) goto $l780; else goto $l759;
    $l789:;
    if ($tmp787 > -$tmp755) goto $l780; else goto $l759;
    $l780:;
    i751.value += $tmp755;
    goto $l757;
    $l759:;
    org$pandalanguage$pandac$Type* $tmp792 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp793 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp792);
    if ($tmp793.value) {
    {
        panda$core$String* $tmp794 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue791 = $tmp794;
        panda$core$String* $tmp796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s795, returnValue791);
        panda$core$String* $tmp798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp796, &$s797);
        (($fn799) ((panda$io$OutputStream*) out655)->$class->vtable[16])(((panda$io$OutputStream*) out655), $tmp798);
    }
    }
    else {
    {
        returnValue791 = &$s800;
    }
    }
    panda$core$String* $tmp802 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s801, $tmp802);
    panda$core$String* $tmp805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp803, &$s804);
    panda$core$String* $tmp806 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
    panda$core$String* $tmp807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp805, $tmp806);
    panda$core$String* $tmp809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp807, &$s808);
    panda$core$String* $tmp810 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp809, $tmp810);
    panda$core$String* $tmp813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp811, &$s812);
    panda$core$String* $tmp815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s814, self_t692);
    panda$core$String* $tmp817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp815, &$s816);
    panda$core$String* $tmp818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp813, $tmp817);
    (($fn819) ((panda$io$OutputStream*) out655)->$class->vtable[16])(((panda$io$OutputStream*) out655), $tmp818);
    panda$core$Int64 $tmp821 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp820, ((panda$core$Int64) { 0 }), $tmp821, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp823 = $tmp820.start.value;
    panda$core$Int64 i822 = { $tmp823 };
    int64_t $tmp825 = $tmp820.end.value;
    int64_t $tmp826 = $tmp820.step.value;
    bool $tmp827 = $tmp820.inclusive.value;
    bool $tmp834 = $tmp826 > 0;
    if ($tmp834) goto $l832; else goto $l833;
    $l832:;
    if ($tmp827) goto $l835; else goto $l836;
    $l835:;
    if ($tmp823 <= $tmp825) goto $l828; else goto $l830;
    $l836:;
    if ($tmp823 < $tmp825) goto $l828; else goto $l830;
    $l833:;
    if ($tmp827) goto $l837; else goto $l838;
    $l837:;
    if ($tmp823 >= $tmp825) goto $l828; else goto $l830;
    $l838:;
    if ($tmp823 > $tmp825) goto $l828; else goto $l830;
    $l828:;
    {
        panda$core$Object* $tmp841 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i822);
        panda$core$String* $tmp842 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp841)->type);
        panda$core$String* $tmp843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s840, $tmp842);
        panda$core$String* $tmp845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp843, &$s844);
        panda$core$Object* $tmp846 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts746, i822);
        panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp845, ((panda$core$String*) $tmp846));
        panda$core$String* $tmp849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp847, &$s848);
        (($fn850) ((panda$io$OutputStream*) out655)->$class->vtable[16])(((panda$io$OutputStream*) out655), $tmp849);
    }
    $l831:;
    if ($tmp834) goto $l852; else goto $l853;
    $l852:;
    int64_t $tmp854 = $tmp825 - i822.value;
    if ($tmp827) goto $l855; else goto $l856;
    $l855:;
    if ($tmp854 >= $tmp826) goto $l851; else goto $l830;
    $l856:;
    if ($tmp854 > $tmp826) goto $l851; else goto $l830;
    $l853:;
    int64_t $tmp858 = i822.value - $tmp825;
    if ($tmp827) goto $l859; else goto $l860;
    $l859:;
    if ($tmp858 >= -$tmp826) goto $l851; else goto $l830;
    $l860:;
    if ($tmp858 > -$tmp826) goto $l851; else goto $l830;
    $l851:;
    i822.value += $tmp826;
    goto $l828;
    $l830:;
    (($fn863) ((panda$io$OutputStream*) out655)->$class->vtable[19])(((panda$io$OutputStream*) out655), &$s862);
    org$pandalanguage$pandac$Type* $tmp864 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp865 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp864);
    if ($tmp865.value) {
    {
        panda$core$String* $tmp866 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType667);
        panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp866, &$s867);
        panda$core$String* $tmp869 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, returnValue791, p_raw->returnType, effectiveReturnType667, out655);
        panda$core$String* $tmp870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp868, $tmp869);
        returnValue791 = $tmp870;
    }
    }
    panda$core$String* $tmp872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s871, returnValue791);
    panda$core$String* $tmp874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp872, &$s873);
    (($fn875) ((panda$io$OutputStream*) out655)->$class->vtable[19])(((panda$io$OutputStream*) out655), $tmp874);
    (($fn877) ((panda$io$OutputStream*) out655)->$class->vtable[19])(((panda$io$OutputStream*) out655), &$s876);
    self->varCount = oldVarCount666;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp879 = (org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) malloc(32);
    $tmp879->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class;
    $tmp879->refCount.value = 1;
    panda$core$String* $tmp881 = panda$core$MutableString$convert$R$panda$core$String(resultType675);
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp879, resultName671, $tmp881);
    result878 = $tmp879;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result878));
    (($fn882) p_rawOut->$class->vtable[15])(p_rawOut, ((panda$core$Object*) outBuffer652));
    return result878;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 oldVarCount884;
    panda$core$String* result885;
    panda$core$String* selfType891;
    org$pandalanguage$pandac$Type* actualMethodType914;
    org$pandalanguage$pandac$Type* inheritedMethodType916;
    panda$core$Range$LTpanda$core$Int64$GT $tmp918;
    panda$collections$Array* parameters968;
    panda$core$Range$LTpanda$core$Int64$GT $tmp971;
    panda$collections$Array* children1008;
    panda$core$String* unwrapped1014;
    panda$core$String* returnValue1019;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1054;
    panda$core$Bit $tmp883 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp883.value);
    oldVarCount884 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$String* $tmp887 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s886, $tmp887);
    panda$core$String* $tmp890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp888, &$s889);
    result885 = $tmp890;
    panda$core$String* $tmp893 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s892, $tmp893);
    panda$core$String* $tmp896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp894, &$s895);
    selfType891 = $tmp896;
    (($fn898) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s897);
    panda$core$Bit $tmp899 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp899.value) {
    {
        (($fn901) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s900);
    }
    }
    panda$core$String* $tmp903 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s902, $tmp903);
    panda$core$String* $tmp906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp904, &$s905);
    panda$core$String* $tmp907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp906, result885);
    panda$core$String* $tmp909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp907, &$s908);
    panda$core$String* $tmp910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp909, selfType891);
    panda$core$String* $tmp912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp910, &$s911);
    (($fn913) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp912);
    org$pandalanguage$pandac$Type* $tmp915 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType914 = $tmp915;
    org$pandalanguage$pandac$Type* $tmp917 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType916 = $tmp917;
    panda$core$Int64 $tmp919 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp918, ((panda$core$Int64) { 0 }), $tmp919, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp921 = $tmp918.start.value;
    panda$core$Int64 i920 = { $tmp921 };
    int64_t $tmp923 = $tmp918.end.value;
    int64_t $tmp924 = $tmp918.step.value;
    bool $tmp925 = $tmp918.inclusive.value;
    bool $tmp932 = $tmp924 > 0;
    if ($tmp932) goto $l930; else goto $l931;
    $l930:;
    if ($tmp925) goto $l933; else goto $l934;
    $l933:;
    if ($tmp921 <= $tmp923) goto $l926; else goto $l928;
    $l934:;
    if ($tmp921 < $tmp923) goto $l926; else goto $l928;
    $l931:;
    if ($tmp925) goto $l935; else goto $l936;
    $l935:;
    if ($tmp921 >= $tmp923) goto $l926; else goto $l928;
    $l936:;
    if ($tmp921 > $tmp923) goto $l926; else goto $l928;
    $l926:;
    {
        panda$core$Object* $tmp939 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedMethodType916->subtypes, i920);
        panda$core$String* $tmp940 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp939));
        panda$core$String* $tmp941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s938, $tmp940);
        panda$core$String* $tmp943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp941, &$s942);
        panda$core$Object* $tmp944 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i920);
        panda$core$String* $tmp945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp943, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp944)->name);
        panda$core$String* $tmp947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp945, &$s946);
        (($fn948) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp947);
    }
    $l929:;
    if ($tmp932) goto $l950; else goto $l951;
    $l950:;
    int64_t $tmp952 = $tmp923 - i920.value;
    if ($tmp925) goto $l953; else goto $l954;
    $l953:;
    if ($tmp952 >= $tmp924) goto $l949; else goto $l928;
    $l954:;
    if ($tmp952 > $tmp924) goto $l949; else goto $l928;
    $l951:;
    int64_t $tmp956 = i920.value - $tmp923;
    if ($tmp925) goto $l957; else goto $l958;
    $l957:;
    if ($tmp956 >= -$tmp924) goto $l949; else goto $l928;
    $l958:;
    if ($tmp956 > -$tmp924) goto $l949; else goto $l928;
    $l949:;
    i920.value += $tmp924;
    goto $l926;
    $l928:;
    (($fn961) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s960);
    panda$core$Int64 $tmp962 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp962;
    panda$core$String* $tmp964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s963, selfType891);
    panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp964, &$s965);
    (($fn967) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp966);
    panda$collections$Array* $tmp969 = (panda$collections$Array*) malloc(40);
    $tmp969->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp969->refCount.value = 1;
    panda$collections$Array$init($tmp969);
    parameters968 = $tmp969;
    panda$core$Int64 $tmp972 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp971, ((panda$core$Int64) { 0 }), $tmp972, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp974 = $tmp971.start.value;
    panda$core$Int64 i973 = { $tmp974 };
    int64_t $tmp976 = $tmp971.end.value;
    int64_t $tmp977 = $tmp971.step.value;
    bool $tmp978 = $tmp971.inclusive.value;
    bool $tmp985 = $tmp977 > 0;
    if ($tmp985) goto $l983; else goto $l984;
    $l983:;
    if ($tmp978) goto $l986; else goto $l987;
    $l986:;
    if ($tmp974 <= $tmp976) goto $l979; else goto $l981;
    $l987:;
    if ($tmp974 < $tmp976) goto $l979; else goto $l981;
    $l984:;
    if ($tmp978) goto $l988; else goto $l989;
    $l988:;
    if ($tmp974 >= $tmp976) goto $l979; else goto $l981;
    $l989:;
    if ($tmp974 > $tmp976) goto $l979; else goto $l981;
    $l979:;
    {
        panda$core$Object* $tmp992 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i973);
        panda$core$String* $tmp993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s991, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp992)->name);
        panda$core$Object* $tmp994 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedMethodType916->subtypes, i973);
        panda$core$Object* $tmp995 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType914->subtypes, i973);
        panda$core$String* $tmp996 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp993, ((org$pandalanguage$pandac$Type*) $tmp994), ((org$pandalanguage$pandac$Type*) $tmp995), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters968, ((panda$core$Object*) $tmp996));
    }
    $l982:;
    if ($tmp985) goto $l998; else goto $l999;
    $l998:;
    int64_t $tmp1000 = $tmp976 - i973.value;
    if ($tmp978) goto $l1001; else goto $l1002;
    $l1001:;
    if ($tmp1000 >= $tmp977) goto $l997; else goto $l981;
    $l1002:;
    if ($tmp1000 > $tmp977) goto $l997; else goto $l981;
    $l999:;
    int64_t $tmp1004 = i973.value - $tmp976;
    if ($tmp978) goto $l1005; else goto $l1006;
    $l1005:;
    if ($tmp1004 >= -$tmp977) goto $l997; else goto $l981;
    $l1006:;
    if ($tmp1004 > -$tmp977) goto $l997; else goto $l981;
    $l997:;
    i973.value += $tmp977;
    goto $l979;
    $l981:;
    panda$collections$Array* $tmp1009 = (panda$collections$Array*) malloc(40);
    $tmp1009->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1009->refCount.value = 1;
    panda$collections$Array$init($tmp1009);
    children1008 = $tmp1009;
    org$pandalanguage$pandac$IRNode* $tmp1011 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1011->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1011->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp1013 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1011, ((panda$core$Int64) { 1025 }), ((panda$core$Int64) { -1 }), $tmp1013);
    panda$collections$Array$add$panda$collections$Array$T(children1008, ((panda$core$Object*) $tmp1011));
    org$pandalanguage$pandac$IRNode* $tmp1015 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1015->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1015->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp1017 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1015, ((panda$core$Int64) { 1009 }), ((panda$core$Int64) { -1 }), $tmp1017, ((panda$collections$ListView*) children1008));
    panda$core$String* $tmp1018 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1015, p_out);
    unwrapped1014 = $tmp1018;
    org$pandalanguage$pandac$Type* $tmp1020 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1021 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1020);
    if ($tmp1021.value) {
    {
        panda$core$String* $tmp1022 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue1019 = $tmp1022;
        panda$core$String* $tmp1024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1023, returnValue1019);
        panda$core$String* $tmp1026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1024, &$s1025);
        (($fn1027) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1026);
        panda$core$String* $tmp1029 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp1030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1028, $tmp1029);
        panda$core$String* $tmp1032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1030, &$s1031);
        panda$core$String* $tmp1033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1032, returnValue1019);
        panda$core$String* $tmp1035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1033, &$s1034);
        returnValue1019 = $tmp1035;
    }
    }
    else {
    {
        returnValue1019 = &$s1036;
    }
    }
    panda$core$String* $tmp1038 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp1039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1037, $tmp1038);
    panda$core$String* $tmp1041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1039, &$s1040);
    panda$core$String* $tmp1042 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp1043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1041, $tmp1042);
    panda$core$String* $tmp1045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1043, &$s1044);
    panda$core$String* $tmp1046 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp1047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1045, $tmp1046);
    panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, &$s1048);
    panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, unwrapped1014);
    panda$core$String* $tmp1052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1050, &$s1051);
    (($fn1053) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1052);
    panda$core$Int64 $tmp1055 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1054, ((panda$core$Int64) { 0 }), $tmp1055, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1057 = $tmp1054.start.value;
    panda$core$Int64 i1056 = { $tmp1057 };
    int64_t $tmp1059 = $tmp1054.end.value;
    int64_t $tmp1060 = $tmp1054.step.value;
    bool $tmp1061 = $tmp1054.inclusive.value;
    bool $tmp1068 = $tmp1060 > 0;
    if ($tmp1068) goto $l1066; else goto $l1067;
    $l1066:;
    if ($tmp1061) goto $l1069; else goto $l1070;
    $l1069:;
    if ($tmp1057 <= $tmp1059) goto $l1062; else goto $l1064;
    $l1070:;
    if ($tmp1057 < $tmp1059) goto $l1062; else goto $l1064;
    $l1067:;
    if ($tmp1061) goto $l1071; else goto $l1072;
    $l1071:;
    if ($tmp1057 >= $tmp1059) goto $l1062; else goto $l1064;
    $l1072:;
    if ($tmp1057 > $tmp1059) goto $l1062; else goto $l1064;
    $l1062:;
    {
        panda$core$Object* $tmp1075 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType914->subtypes, i1056);
        panda$core$String* $tmp1076 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1075));
        panda$core$String* $tmp1077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1074, $tmp1076);
        panda$core$String* $tmp1079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1077, &$s1078);
        panda$core$Object* $tmp1080 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters968, i1056);
        panda$core$String* $tmp1081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1079, ((panda$core$String*) $tmp1080));
        panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1081, &$s1082);
        (($fn1084) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1083);
    }
    $l1065:;
    if ($tmp1068) goto $l1086; else goto $l1087;
    $l1086:;
    int64_t $tmp1088 = $tmp1059 - i1056.value;
    if ($tmp1061) goto $l1089; else goto $l1090;
    $l1089:;
    if ($tmp1088 >= $tmp1060) goto $l1085; else goto $l1064;
    $l1090:;
    if ($tmp1088 > $tmp1060) goto $l1085; else goto $l1064;
    $l1087:;
    int64_t $tmp1092 = i1056.value - $tmp1059;
    if ($tmp1061) goto $l1093; else goto $l1094;
    $l1093:;
    if ($tmp1092 >= -$tmp1060) goto $l1085; else goto $l1064;
    $l1094:;
    if ($tmp1092 > -$tmp1060) goto $l1085; else goto $l1064;
    $l1085:;
    i1056.value += $tmp1060;
    goto $l1062;
    $l1064:;
    (($fn1097) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1096);
    panda$core$String* $tmp1099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1098, returnValue1019);
    panda$core$String* $tmp1101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1099, &$s1100);
    (($fn1102) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1101);
    panda$core$Int64 $tmp1103 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1103;
    (($fn1105) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1104);
    self->varCount = oldVarCount884;
    return result885;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces1106;
    panda$core$String* previous1109;
    panda$collections$Iterator* intfType$Iter1111;
    org$pandalanguage$pandac$Type* intfType1123;
    org$pandalanguage$pandac$ClassDecl* intf1128;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC1130;
    panda$collections$ListView* methods1132;
    panda$core$String* name1134;
    panda$core$String* t1144;
    panda$core$MutableString* result1158;
    panda$core$String* separator1198;
    panda$collections$Iterator* m$Iter1200;
    org$pandalanguage$pandac$MethodDecl* m1212;
    panda$core$String* shim1220;
    org$pandalanguage$pandac$Type* $tmp1107 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp1108 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp1107);
    interfaces1106 = $tmp1108;
    previous1109 = &$s1110;
    {
        ITable* $tmp1112 = ((panda$collections$Iterable*) interfaces1106)->$class->itable;
        while ($tmp1112->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1112 = $tmp1112->next;
        }
        $fn1114 $tmp1113 = $tmp1112->methods[0];
        panda$collections$Iterator* $tmp1115 = $tmp1113(((panda$collections$Iterable*) interfaces1106));
        intfType$Iter1111 = $tmp1115;
        $l1116:;
        ITable* $tmp1118 = intfType$Iter1111->$class->itable;
        while ($tmp1118->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1118 = $tmp1118->next;
        }
        $fn1120 $tmp1119 = $tmp1118->methods[0];
        panda$core$Bit $tmp1121 = $tmp1119(intfType$Iter1111);
        panda$core$Bit $tmp1122 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1121);
        if (!$tmp1122.value) goto $l1117;
        {
            ITable* $tmp1124 = intfType$Iter1111->$class->itable;
            while ($tmp1124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1124 = $tmp1124->next;
            }
            $fn1126 $tmp1125 = $tmp1124->methods[1];
            panda$core$Object* $tmp1127 = $tmp1125(intfType$Iter1111);
            intfType1123 = ((org$pandalanguage$pandac$Type*) $tmp1127);
            org$pandalanguage$pandac$ClassDecl* $tmp1129 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType1123);
            intf1128 = $tmp1129;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1131 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf1128);
            intfCC1130 = $tmp1131;
            panda$collections$ListView* $tmp1133 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType1123);
            methods1132 = $tmp1133;
            panda$core$String* $tmp1136 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1135, $tmp1136);
            panda$core$String* $tmp1139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1137, &$s1138);
            panda$core$String* $tmp1140 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf1128)->name);
            panda$core$String* $tmp1141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1139, $tmp1140);
            panda$core$String* $tmp1143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1141, &$s1142);
            name1134 = $tmp1143;
            org$pandalanguage$pandac$Type* $tmp1146 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1147 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1146);
            panda$core$String* $tmp1148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1145, $tmp1147);
            panda$core$String* $tmp1150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1148, &$s1149);
            ITable* $tmp1151 = ((panda$collections$CollectionView*) methods1132)->$class->itable;
            while ($tmp1151->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1151 = $tmp1151->next;
            }
            $fn1153 $tmp1152 = $tmp1151->methods[0];
            panda$core$Int64 $tmp1154 = $tmp1152(((panda$collections$CollectionView*) methods1132));
            panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1150, ((panda$core$Object*) wrap_panda$core$Int64($tmp1154)));
            panda$core$String* $tmp1157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1155, &$s1156);
            t1144 = $tmp1157;
            panda$core$MutableString* $tmp1159 = (panda$core$MutableString*) malloc(40);
            $tmp1159->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1159->refCount.value = 1;
            panda$core$String* $tmp1162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1161, name1134);
            panda$core$String* $tmp1164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1162, &$s1163);
            panda$core$String* $tmp1165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1164, t1144);
            panda$core$String* $tmp1167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1165, &$s1166);
            org$pandalanguage$pandac$Type* $tmp1168 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1169 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1168);
            panda$core$String* $tmp1170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1167, $tmp1169);
            panda$core$String* $tmp1172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1170, &$s1171);
            panda$core$String* $tmp1174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1173, intfCC1130->type);
            panda$core$String* $tmp1176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1174, &$s1175);
            panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1176, intfCC1130->name);
            panda$core$String* $tmp1179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1177, &$s1178);
            org$pandalanguage$pandac$Type* $tmp1180 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1181 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1180);
            panda$core$String* $tmp1182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1179, $tmp1181);
            panda$core$String* $tmp1184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1182, &$s1183);
            panda$core$String* $tmp1185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1172, $tmp1184);
            panda$core$String* $tmp1187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1186, previous1109);
            panda$core$String* $tmp1189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1187, &$s1188);
            ITable* $tmp1190 = ((panda$collections$CollectionView*) methods1132)->$class->itable;
            while ($tmp1190->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1190 = $tmp1190->next;
            }
            $fn1192 $tmp1191 = $tmp1190->methods[0];
            panda$core$Int64 $tmp1193 = $tmp1191(((panda$collections$CollectionView*) methods1132));
            panda$core$String* $tmp1194 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1189, ((panda$core$Object*) wrap_panda$core$Int64($tmp1193)));
            panda$core$String* $tmp1196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1194, &$s1195);
            panda$core$String* $tmp1197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1185, $tmp1196);
            panda$core$MutableString$init$panda$core$String($tmp1159, $tmp1197);
            result1158 = $tmp1159;
            separator1198 = &$s1199;
            {
                ITable* $tmp1201 = ((panda$collections$Iterable*) methods1132)->$class->itable;
                while ($tmp1201->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1201 = $tmp1201->next;
                }
                $fn1203 $tmp1202 = $tmp1201->methods[0];
                panda$collections$Iterator* $tmp1204 = $tmp1202(((panda$collections$Iterable*) methods1132));
                m$Iter1200 = $tmp1204;
                $l1205:;
                ITable* $tmp1207 = m$Iter1200->$class->itable;
                while ($tmp1207->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1207 = $tmp1207->next;
                }
                $fn1209 $tmp1208 = $tmp1207->methods[0];
                panda$core$Bit $tmp1210 = $tmp1208(m$Iter1200);
                panda$core$Bit $tmp1211 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1210);
                if (!$tmp1211.value) goto $l1206;
                {
                    ITable* $tmp1213 = m$Iter1200->$class->itable;
                    while ($tmp1213->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1213 = $tmp1213->next;
                    }
                    $fn1215 $tmp1214 = $tmp1213->methods[1];
                    panda$core$Object* $tmp1216 = $tmp1214(m$Iter1200);
                    m1212 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1216);
                    panda$core$MutableString$append$panda$core$String(result1158, separator1198);
                    separator1198 = &$s1217;
                    panda$core$Bit $tmp1218 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1212->annotations);
                    if ($tmp1218.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1158, &$s1219);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp1221 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1212, self->wrapperShims);
                        shim1220 = $tmp1221;
                        panda$core$String* $tmp1223 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1212);
                        panda$core$String* $tmp1224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1222, $tmp1223);
                        panda$core$String* $tmp1226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1224, &$s1225);
                        panda$core$String* $tmp1227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1226, shim1220);
                        panda$core$String* $tmp1229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1227, &$s1228);
                        panda$core$MutableString$append$panda$core$String(result1158, $tmp1229);
                    }
                    }
                }
                goto $l1205;
                $l1206:;
            }
            panda$core$MutableString$append$panda$core$String(result1158, &$s1230);
            (($fn1231) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result1158));
            panda$core$String* $tmp1233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1232, t1144);
            panda$core$String* $tmp1235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1233, &$s1234);
            panda$core$String* $tmp1236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1235, name1134);
            panda$core$String* $tmp1238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1236, &$s1237);
            previous1109 = $tmp1238;
        }
        goto $l1116;
        $l1117:;
    }
    return previous1109;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result1241;
    panda$core$Bit $tmp1239 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp1240 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1239);
    if ($tmp1240.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp1244 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1243 = $tmp1244.value;
    if (!$tmp1243) goto $l1245;
    panda$core$Bit $tmp1246 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp1243 = $tmp1246.value;
    $l1245:;
    panda$core$Bit $tmp1247 = { $tmp1243 };
    bool $tmp1242 = $tmp1247.value;
    if (!$tmp1242) goto $l1248;
    org$pandalanguage$pandac$ClassDecl* $tmp1249 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp1250 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp1249);
    $tmp1242 = $tmp1250.value;
    $l1248:;
    panda$core$Bit $tmp1251 = { $tmp1242 };
    result1241 = $tmp1251;
    panda$core$Bit $tmp1253 = panda$core$Bit$$NOT$R$panda$core$Bit(result1241);
    bool $tmp1252 = $tmp1253.value;
    if ($tmp1252) goto $l1254;
    panda$core$Bit $tmp1256 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp1257 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1256);
    bool $tmp1255 = $tmp1257.value;
    if (!$tmp1255) goto $l1258;
    panda$core$Bit $tmp1260 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1259 = $tmp1260.value;
    if ($tmp1259) goto $l1261;
    panda$core$Bit $tmp1262 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp1259 = $tmp1262.value;
    $l1261:;
    panda$core$Bit $tmp1263 = { $tmp1259 };
    $tmp1255 = $tmp1263.value;
    $l1258:;
    panda$core$Bit $tmp1264 = { $tmp1255 };
    $tmp1252 = $tmp1264.value;
    $l1254:;
    panda$core$Bit $tmp1265 = { $tmp1252 };
    PANDA_ASSERT($tmp1265.value);
    return result1241;
}
org$pandalanguage$pandac$LLVMCodeGenerator$Pair* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* resultName1266;
    org$pandalanguage$pandac$Type* declared1267;
    org$pandalanguage$pandac$Type* inherited1270;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* shim1273;
    panda$core$MutableString* resultType1278;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1287;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    if (p_m->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp1268 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp1269 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp1268);
    declared1267 = $tmp1269;
    org$pandalanguage$pandac$Type* $tmp1271 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited1270 = $tmp1271;
    panda$core$Bit $tmp1272 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared1267, inherited1270);
    if ($tmp1272.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1274 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1275 = org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(self, p_m, $tmp1274, ((panda$io$OutputStream*) self->shims));
        shim1273 = $tmp1275;
        resultName1266 = shim1273->name;
    }
    }
    else {
    {
        panda$core$String* $tmp1276 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        resultName1266 = $tmp1276;
    }
    }
    panda$core$Bit $tmp1277 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp1277.value) {
    {
        panda$core$MutableString* $tmp1279 = (panda$core$MutableString*) malloc(40);
        $tmp1279->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1279->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp1279, &$s1281);
        resultType1278 = $tmp1279;
        panda$core$Int64 $tmp1282 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inherited1270->subtypes);
        panda$core$Int64 $tmp1283 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1282, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1284 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inherited1270->subtypes, $tmp1283);
        panda$core$String* $tmp1285 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1284));
        panda$core$MutableString$append$panda$core$String(resultType1278, $tmp1285);
        panda$core$MutableString$append$panda$core$String(resultType1278, &$s1286);
        panda$core$Int64 $tmp1288 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inherited1270->subtypes);
        panda$core$Int64 $tmp1289 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1288, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1287, ((panda$core$Int64) { 0 }), $tmp1289, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp1291 = $tmp1287.start.value;
        panda$core$Int64 i1290 = { $tmp1291 };
        int64_t $tmp1293 = $tmp1287.end.value;
        int64_t $tmp1294 = $tmp1287.step.value;
        bool $tmp1295 = $tmp1287.inclusive.value;
        bool $tmp1302 = $tmp1294 > 0;
        if ($tmp1302) goto $l1300; else goto $l1301;
        $l1300:;
        if ($tmp1295) goto $l1303; else goto $l1304;
        $l1303:;
        if ($tmp1291 <= $tmp1293) goto $l1296; else goto $l1298;
        $l1304:;
        if ($tmp1291 < $tmp1293) goto $l1296; else goto $l1298;
        $l1301:;
        if ($tmp1295) goto $l1305; else goto $l1306;
        $l1305:;
        if ($tmp1291 >= $tmp1293) goto $l1296; else goto $l1298;
        $l1306:;
        if ($tmp1291 > $tmp1293) goto $l1296; else goto $l1298;
        $l1296:;
        {
            panda$core$MutableString$append$panda$core$String(resultType1278, &$s1308);
            panda$core$Object* $tmp1309 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inherited1270->subtypes, i1290);
            panda$core$String* $tmp1310 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1309));
            panda$core$MutableString$append$panda$core$String(resultType1278, $tmp1310);
        }
        $l1299:;
        if ($tmp1302) goto $l1312; else goto $l1313;
        $l1312:;
        int64_t $tmp1314 = $tmp1293 - i1290.value;
        if ($tmp1295) goto $l1315; else goto $l1316;
        $l1315:;
        if ($tmp1314 >= $tmp1294) goto $l1311; else goto $l1298;
        $l1316:;
        if ($tmp1314 > $tmp1294) goto $l1311; else goto $l1298;
        $l1313:;
        int64_t $tmp1318 = i1290.value - $tmp1293;
        if ($tmp1295) goto $l1319; else goto $l1320;
        $l1319:;
        if ($tmp1318 >= -$tmp1294) goto $l1311; else goto $l1298;
        $l1320:;
        if ($tmp1318 > -$tmp1294) goto $l1311; else goto $l1298;
        $l1311:;
        i1290.value += $tmp1294;
        goto $l1296;
        $l1298:;
        panda$core$MutableString$append$panda$core$String(resultType1278, &$s1322);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1323 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
        $tmp1323->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
        $tmp1323->refCount.value = 1;
        panda$core$String* $tmp1325 = panda$core$MutableString$convert$R$panda$core$String(resultType1278);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1323, ((panda$core$Object*) resultName1266), ((panda$core$Object*) $tmp1325));
        return $tmp1323;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1326 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
    $tmp1326->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
    $tmp1326->refCount.value = 1;
    panda$core$String* $tmp1328 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, inherited1270);
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1326, ((panda$core$Object*) resultName1266), ((panda$core$Object*) $tmp1328));
    return $tmp1326;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1331;
    panda$core$String* type1333;
    panda$collections$ListView* vtable1352;
    panda$core$String* superPtr1376;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1377;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1388;
    panda$core$MutableString* code1392;
    panda$core$String* separator1435;
    panda$collections$Iterator* m$Iter1437;
    org$pandalanguage$pandac$MethodDecl* m1449;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry1456;
    panda$core$Bit $tmp1329 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp1330 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1329);
    PANDA_ASSERT($tmp1330.value);
    panda$core$Object* $tmp1332 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result1331 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1332);
    if (((panda$core$Bit) { result1331 == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1334 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1334->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1334->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1337 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp1338 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1337)->name);
            panda$core$String* $tmp1339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1336, $tmp1338);
            panda$core$String* $tmp1341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1339, &$s1340);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1334, $tmp1341, &$s1342);
            result1331 = $tmp1334;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1331));
            panda$core$String* $tmp1344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1343, result1331->name);
            panda$core$String* $tmp1346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1344, &$s1345);
            panda$core$String* $tmp1347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1346, result1331->type);
            panda$core$String* $tmp1349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1347, &$s1348);
            (($fn1350) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1349);
            panda$core$Object* $tmp1351 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1351);
        }
        }
        panda$collections$ListView* $tmp1353 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable1352 = $tmp1353;
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1354 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
        $tmp1354->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
        $tmp1354->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1357 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp1358 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1357)->name);
        panda$core$String* $tmp1359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1356, $tmp1358);
        panda$core$String* $tmp1361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1359, &$s1360);
        panda$core$String* $tmp1364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1362, &$s1363);
        panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1364, &$s1365);
        ITable* $tmp1368 = ((panda$collections$CollectionView*) vtable1352)->$class->itable;
        while ($tmp1368->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1368 = $tmp1368->next;
        }
        $fn1370 $tmp1369 = $tmp1368->methods[0];
        panda$core$Int64 $tmp1371 = $tmp1369(((panda$collections$CollectionView*) vtable1352));
        panda$core$String* $tmp1372 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1367, ((panda$core$Object*) wrap_panda$core$Int64($tmp1371)));
        panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1372, &$s1373);
        panda$core$String* $tmp1375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1366, $tmp1374);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1354, $tmp1361, $tmp1375);
        result1331 = $tmp1354;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1331));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1378 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1379 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1378);
            superCC1377 = $tmp1379;
            panda$core$String* $tmp1381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1380, superCC1377->type);
            panda$core$String* $tmp1383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1381, &$s1382);
            panda$core$String* $tmp1384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1383, superCC1377->name);
            panda$core$String* $tmp1386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1384, &$s1385);
            superPtr1376 = $tmp1386;
        }
        }
        else {
        {
            superPtr1376 = &$s1387;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1389 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1390 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1389);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1391 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1390);
        clConstant1388 = $tmp1391;
        panda$core$MutableString* $tmp1393 = (panda$core$MutableString*) malloc(40);
        $tmp1393->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1393->refCount.value = 1;
        panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1395, result1331->name);
        panda$core$String* $tmp1398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1396, &$s1397);
        panda$core$MutableString$init$panda$core$String($tmp1393, $tmp1398);
        code1392 = $tmp1393;
        panda$core$Bit $tmp1399 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
        if ($tmp1399.value) {
        {
            panda$core$MutableString$append$panda$core$String(code1392, &$s1400);
        }
        }
        panda$core$String* $tmp1402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1401, result1331->type);
        panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1402, &$s1403);
        panda$core$String* $tmp1406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1405, clConstant1388->type);
        panda$core$String* $tmp1408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1406, &$s1407);
        panda$core$String* $tmp1409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1408, clConstant1388->name);
        panda$core$String* $tmp1411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1409, &$s1410);
        panda$core$String* $tmp1412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1404, $tmp1411);
        panda$core$String* $tmp1415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1413, &$s1414);
        panda$core$String* $tmp1417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1415, &$s1416);
        panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1417, superPtr1376);
        panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1418, &$s1419);
        panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1412, $tmp1420);
        panda$core$String* $tmp1423 = org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp1424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1422, $tmp1423);
        panda$core$String* $tmp1426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1424, &$s1425);
        ITable* $tmp1427 = ((panda$collections$CollectionView*) vtable1352)->$class->itable;
        while ($tmp1427->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1427 = $tmp1427->next;
        }
        $fn1429 $tmp1428 = $tmp1427->methods[0];
        panda$core$Int64 $tmp1430 = $tmp1428(((panda$collections$CollectionView*) vtable1352));
        panda$core$String* $tmp1431 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1426, ((panda$core$Object*) wrap_panda$core$Int64($tmp1430)));
        panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1431, &$s1432);
        panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, $tmp1433);
        panda$core$MutableString$append$panda$core$String(code1392, $tmp1434);
        separator1435 = &$s1436;
        {
            ITable* $tmp1438 = ((panda$collections$Iterable*) vtable1352)->$class->itable;
            while ($tmp1438->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1438 = $tmp1438->next;
            }
            $fn1440 $tmp1439 = $tmp1438->methods[0];
            panda$collections$Iterator* $tmp1441 = $tmp1439(((panda$collections$Iterable*) vtable1352));
            m$Iter1437 = $tmp1441;
            $l1442:;
            ITable* $tmp1444 = m$Iter1437->$class->itable;
            while ($tmp1444->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1444 = $tmp1444->next;
            }
            $fn1446 $tmp1445 = $tmp1444->methods[0];
            panda$core$Bit $tmp1447 = $tmp1445(m$Iter1437);
            panda$core$Bit $tmp1448 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1447);
            if (!$tmp1448.value) goto $l1443;
            {
                ITable* $tmp1450 = m$Iter1437->$class->itable;
                while ($tmp1450->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1450 = $tmp1450->next;
                }
                $fn1452 $tmp1451 = $tmp1450->methods[1];
                panda$core$Object* $tmp1453 = $tmp1451(m$Iter1437);
                m1449 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1453);
                panda$core$MutableString$append$panda$core$String(code1392, separator1435);
                panda$core$Bit $tmp1454 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1449->annotations);
                if ($tmp1454.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code1392, &$s1455);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1457 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m1449);
                    entry1456 = $tmp1457;
                    panda$core$String* $tmp1459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1458, ((panda$core$String*) entry1456->second));
                    panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1459, &$s1460);
                    panda$core$String* $tmp1462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1461, ((panda$core$String*) entry1456->first));
                    panda$core$String* $tmp1464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1462, &$s1463);
                    panda$core$MutableString$append$panda$core$String(code1392, $tmp1464);
                }
                }
                separator1435 = &$s1465;
            }
            goto $l1442;
            $l1443:;
        }
        panda$core$MutableString$append$panda$core$String(code1392, &$s1466);
        (($fn1467) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1392));
    }
    }
    return result1331;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1468;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1474;
    panda$core$String* type1477;
    org$pandalanguage$pandac$ClassDecl* value1489;
    panda$collections$ListView* valueVTable1492;
    panda$collections$ListView* vtable1515;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1517;
    panda$core$String* superCast1520;
    panda$core$String* itable1528;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1530;
    panda$core$MutableString* code1534;
    panda$core$String* separator1581;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1583;
    org$pandalanguage$pandac$MethodDecl* m1606;
    panda$core$String* methodName1611;
    panda$core$String* $tmp1470 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1469, $tmp1470);
    panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1471, &$s1472);
    name1468 = $tmp1473;
    panda$core$Object* $tmp1475 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name1468));
    result1474 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1475);
    if (((panda$core$Bit) { result1474 == NULL }).value) {
    {
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1476 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1476);
            type1477 = &$s1478;
            panda$core$String* $tmp1480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1479, name1468);
            panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1480, &$s1481);
            panda$core$String* $tmp1483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1482, type1477);
            panda$core$String* $tmp1485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1483, &$s1484);
            (($fn1486) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1485);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1487 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1487->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1487->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1487, name1468, type1477);
            result1474 = $tmp1487;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1490 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1491 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1490);
            value1489 = $tmp1491;
            panda$collections$ListView* $tmp1493 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1489);
            valueVTable1492 = $tmp1493;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1494 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1494->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1494->refCount.value = 1;
            panda$core$String* $tmp1497 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1496, $tmp1497);
            panda$core$String* $tmp1500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1498, &$s1499);
            panda$core$String* $tmp1503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1501, &$s1502);
            panda$core$String* $tmp1505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1503, &$s1504);
            ITable* $tmp1507 = ((panda$collections$CollectionView*) valueVTable1492)->$class->itable;
            while ($tmp1507->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1507 = $tmp1507->next;
            }
            $fn1509 $tmp1508 = $tmp1507->methods[0];
            panda$core$Int64 $tmp1510 = $tmp1508(((panda$collections$CollectionView*) valueVTable1492));
            panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1506, ((panda$core$Object*) wrap_panda$core$Int64($tmp1510)));
            panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1511, &$s1512);
            panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1505, $tmp1513);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1494, $tmp1500, $tmp1514);
            result1474 = $tmp1494;
            panda$collections$ListView* $tmp1516 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1515 = $tmp1516;
            org$pandalanguage$pandac$ClassDecl* $tmp1518 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1519 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1518);
            superCC1517 = $tmp1519;
            panda$core$String* $tmp1522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1521, superCC1517->type);
            panda$core$String* $tmp1524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1522, &$s1523);
            panda$core$String* $tmp1525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1524, superCC1517->name);
            panda$core$String* $tmp1527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1525, &$s1526);
            superCast1520 = $tmp1527;
            panda$core$String* $tmp1529 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1528 = $tmp1529;
            org$pandalanguage$pandac$Type* $tmp1531 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1532 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1531);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1533 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1532);
            clConstant1530 = $tmp1533;
            panda$core$MutableString* $tmp1535 = (panda$core$MutableString*) malloc(40);
            $tmp1535->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1535->refCount.value = 1;
            panda$core$String* $tmp1538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1537, result1474->name);
            panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1538, &$s1539);
            panda$core$MutableString$init$panda$core$String($tmp1535, $tmp1540);
            code1534 = $tmp1535;
            panda$core$Bit $tmp1541 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp1541.value) {
            {
                panda$core$MutableString$append$panda$core$String(code1534, &$s1542);
            }
            }
            panda$core$String* $tmp1544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1543, result1474->type);
            panda$core$String* $tmp1546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1544, &$s1545);
            panda$core$String* $tmp1548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1547, clConstant1530->type);
            panda$core$String* $tmp1550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1548, &$s1549);
            panda$core$String* $tmp1551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1550, clConstant1530->name);
            panda$core$String* $tmp1553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1551, &$s1552);
            panda$core$String* $tmp1554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1546, $tmp1553);
            panda$core$String* $tmp1557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1555, &$s1556);
            panda$core$String* $tmp1559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1557, &$s1558);
            org$pandalanguage$pandac$Type* $tmp1560 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1561 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1560);
            panda$core$String* $tmp1562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1559, $tmp1561);
            panda$core$String* $tmp1564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1562, &$s1563);
            panda$core$String* $tmp1565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1564, superCast1520);
            panda$core$String* $tmp1567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1565, &$s1566);
            panda$core$String* $tmp1568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1554, $tmp1567);
            panda$core$String* $tmp1570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1569, itable1528);
            panda$core$String* $tmp1572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1570, &$s1571);
            ITable* $tmp1573 = ((panda$collections$CollectionView*) valueVTable1492)->$class->itable;
            while ($tmp1573->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1573 = $tmp1573->next;
            }
            $fn1575 $tmp1574 = $tmp1573->methods[0];
            panda$core$Int64 $tmp1576 = $tmp1574(((panda$collections$CollectionView*) valueVTable1492));
            panda$core$String* $tmp1577 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1572, ((panda$core$Object*) wrap_panda$core$Int64($tmp1576)));
            panda$core$String* $tmp1579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1577, &$s1578);
            panda$core$String* $tmp1580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1568, $tmp1579);
            panda$core$MutableString$append$panda$core$String(code1534, $tmp1580);
            separator1581 = &$s1582;
            ITable* $tmp1584 = ((panda$collections$CollectionView*) valueVTable1492)->$class->itable;
            while ($tmp1584->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1584 = $tmp1584->next;
            }
            $fn1586 $tmp1585 = $tmp1584->methods[0];
            panda$core$Int64 $tmp1587 = $tmp1585(((panda$collections$CollectionView*) valueVTable1492));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1583, ((panda$core$Int64) { 0 }), $tmp1587, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1589 = $tmp1583.start.value;
            panda$core$Int64 i1588 = { $tmp1589 };
            int64_t $tmp1591 = $tmp1583.end.value;
            int64_t $tmp1592 = $tmp1583.step.value;
            bool $tmp1593 = $tmp1583.inclusive.value;
            bool $tmp1600 = $tmp1592 > 0;
            if ($tmp1600) goto $l1598; else goto $l1599;
            $l1598:;
            if ($tmp1593) goto $l1601; else goto $l1602;
            $l1601:;
            if ($tmp1589 <= $tmp1591) goto $l1594; else goto $l1596;
            $l1602:;
            if ($tmp1589 < $tmp1591) goto $l1594; else goto $l1596;
            $l1599:;
            if ($tmp1593) goto $l1603; else goto $l1604;
            $l1603:;
            if ($tmp1589 >= $tmp1591) goto $l1594; else goto $l1596;
            $l1604:;
            if ($tmp1589 > $tmp1591) goto $l1594; else goto $l1596;
            $l1594:;
            {
                ITable* $tmp1607 = vtable1515->$class->itable;
                while ($tmp1607->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1607 = $tmp1607->next;
                }
                $fn1609 $tmp1608 = $tmp1607->methods[0];
                panda$core$Object* $tmp1610 = $tmp1608(vtable1515, i1588);
                m1606 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1610);
                if (((panda$core$Bit) { ((panda$core$Object*) m1606->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1612 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1606, self->wrapperShims);
                    methodName1611 = $tmp1612;
                }
                }
                else {
                {
                    panda$core$String* $tmp1613 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1606);
                    methodName1611 = $tmp1613;
                    if (m1606->owner->external.value) {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1606);
                    }
                    }
                }
                }
                panda$core$String* $tmp1615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1614, separator1581);
                panda$core$String* $tmp1617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1615, &$s1616);
                panda$core$String* $tmp1618 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1606);
                panda$core$String* $tmp1619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1617, $tmp1618);
                panda$core$String* $tmp1621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1619, &$s1620);
                panda$core$String* $tmp1622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1621, methodName1611);
                panda$core$String* $tmp1624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1622, &$s1623);
                panda$core$MutableString$append$panda$core$String(code1534, $tmp1624);
                separator1581 = &$s1625;
            }
            $l1597:;
            if ($tmp1600) goto $l1627; else goto $l1628;
            $l1627:;
            int64_t $tmp1629 = $tmp1591 - i1588.value;
            if ($tmp1593) goto $l1630; else goto $l1631;
            $l1630:;
            if ($tmp1629 >= $tmp1592) goto $l1626; else goto $l1596;
            $l1631:;
            if ($tmp1629 > $tmp1592) goto $l1626; else goto $l1596;
            $l1628:;
            int64_t $tmp1633 = i1588.value - $tmp1591;
            if ($tmp1593) goto $l1634; else goto $l1635;
            $l1634:;
            if ($tmp1633 >= -$tmp1592) goto $l1626; else goto $l1596;
            $l1635:;
            if ($tmp1633 > -$tmp1592) goto $l1626; else goto $l1596;
            $l1626:;
            i1588.value += $tmp1592;
            goto $l1594;
            $l1596:;
            panda$core$MutableString$append$panda$core$String(code1534, &$s1637);
            (($fn1638) ((panda$io$OutputStream*) self->types)->$class->vtable[15])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1534));
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name1468), ((panda$core$Object*) result1474));
    }
    }
    return result1474;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp1641 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_s, &$s1639, &$s1640);
    panda$core$String* $tmp1644 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1641, &$s1642, &$s1643);
    panda$core$String* $tmp1647 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1644, &$s1645, &$s1646);
    panda$core$String* $tmp1650 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1647, &$s1648, &$s1649);
    panda$core$String* $tmp1653 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1650, &$s1651, &$s1652);
    panda$core$String* $tmp1656 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1653, &$s1654, &$s1655);
    return $tmp1656;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1660;
    panda$core$String* result1698;
    panda$core$Bit $tmp1657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1657.value) {
    {
        panda$core$Int64 $tmp1658 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp1659 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1658, ((panda$core$Int64) { 0 }));
        if ($tmp1659.value) {
        {
            panda$core$Int64 $tmp1661 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1660, ((panda$core$Int64) { 0 }), $tmp1661, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1663 = $tmp1660.start.value;
            panda$core$Int64 i1662 = { $tmp1663 };
            int64_t $tmp1665 = $tmp1660.end.value;
            int64_t $tmp1666 = $tmp1660.step.value;
            bool $tmp1667 = $tmp1660.inclusive.value;
            bool $tmp1674 = $tmp1666 > 0;
            if ($tmp1674) goto $l1672; else goto $l1673;
            $l1672:;
            if ($tmp1667) goto $l1675; else goto $l1676;
            $l1675:;
            if ($tmp1663 <= $tmp1665) goto $l1668; else goto $l1670;
            $l1676:;
            if ($tmp1663 < $tmp1665) goto $l1668; else goto $l1670;
            $l1673:;
            if ($tmp1667) goto $l1677; else goto $l1678;
            $l1677:;
            if ($tmp1663 >= $tmp1665) goto $l1668; else goto $l1670;
            $l1678:;
            if ($tmp1663 > $tmp1665) goto $l1668; else goto $l1670;
            $l1668:;
            {
                panda$core$Object* $tmp1680 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1662);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1680)->name) }).value) {
                {
                    panda$core$Object* $tmp1681 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
                    panda$core$Object* $tmp1682 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1681)->argRefs, i1662);
                    return ((panda$core$String*) $tmp1682);
                }
                }
            }
            $l1671:;
            if ($tmp1674) goto $l1684; else goto $l1685;
            $l1684:;
            int64_t $tmp1686 = $tmp1665 - i1662.value;
            if ($tmp1667) goto $l1687; else goto $l1688;
            $l1687:;
            if ($tmp1686 >= $tmp1666) goto $l1683; else goto $l1670;
            $l1688:;
            if ($tmp1686 > $tmp1666) goto $l1683; else goto $l1670;
            $l1685:;
            int64_t $tmp1690 = i1662.value - $tmp1665;
            if ($tmp1667) goto $l1691; else goto $l1692;
            $l1691:;
            if ($tmp1690 >= -$tmp1666) goto $l1683; else goto $l1670;
            $l1692:;
            if ($tmp1690 > -$tmp1666) goto $l1683; else goto $l1670;
            $l1683:;
            i1662.value += $tmp1666;
            goto $l1668;
            $l1670:;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp1695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1694, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1695, &$s1696);
        return $tmp1697;
    }
    }
    panda$core$Object* $tmp1699 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1698 = ((panda$core$String*) $tmp1699);
    if (((panda$core$Bit) { result1698 == NULL }).value) {
    {
        panda$core$Int64 $tmp1700 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1700;
        panda$core$String* $tmp1702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1701, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1702, &$s1703);
        panda$core$String* $tmp1705 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1704, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1705, &$s1706);
        result1698 = $tmp1707;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1698));
    }
    }
    panda$core$Int64 $tmp1708 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp1709 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1708, ((panda$core$Int64) { 0 }));
    if ($tmp1709.value) {
    {
        panda$core$Object* $tmp1710 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1698, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1710)->varSuffix);
        result1698 = $tmp1711;
    }
    }
    return result1698;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1715;
    panda$core$String* $match$316221721;
    panda$collections$Iterator* p$Iter1798;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1810;
    panda$core$Bit $tmp1713 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1712);
    if ($tmp1713.value) {
    {
        return &$s1714;
    }
    }
    panda$core$MutableString* $tmp1716 = (panda$core$MutableString*) malloc(40);
    $tmp1716->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1716->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1716, &$s1718);
    result1715 = $tmp1716;
    panda$core$String* $tmp1719 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$MutableString$append$panda$core$String(result1715, $tmp1719);
    panda$core$MutableString$append$panda$core$String(result1715, &$s1720);
    {
        $match$316221721 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1723 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1722);
        if ($tmp1723.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1724);
        }
        }
        else {
        panda$core$Bit $tmp1726 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1725);
        if ($tmp1726.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1727);
        }
        }
        else {
        panda$core$Bit $tmp1729 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1728);
        if ($tmp1729.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1730);
        }
        }
        else {
        panda$core$Bit $tmp1732 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1731);
        if ($tmp1732.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1733);
        }
        }
        else {
        panda$core$Bit $tmp1735 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1734);
        if ($tmp1735.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1736);
        }
        }
        else {
        panda$core$Bit $tmp1738 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1737);
        if ($tmp1738.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1739);
        }
        }
        else {
        panda$core$Bit $tmp1741 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1740);
        if ($tmp1741.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1742);
        }
        }
        else {
        panda$core$Bit $tmp1744 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1743);
        if ($tmp1744.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1745);
        }
        }
        else {
        panda$core$Bit $tmp1747 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1746);
        if ($tmp1747.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1748);
        }
        }
        else {
        panda$core$Bit $tmp1750 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1749);
        if ($tmp1750.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1751);
        }
        }
        else {
        panda$core$Bit $tmp1753 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1752);
        if ($tmp1753.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1754);
        }
        }
        else {
        panda$core$Bit $tmp1756 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1755);
        if ($tmp1756.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1757);
        }
        }
        else {
        panda$core$Bit $tmp1759 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1758);
        if ($tmp1759.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1760);
        }
        }
        else {
        panda$core$Bit $tmp1762 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1761);
        if ($tmp1762.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1763);
        }
        }
        else {
        panda$core$Bit $tmp1765 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1764);
        if ($tmp1765.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1766);
        }
        }
        else {
        panda$core$Bit $tmp1768 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1767);
        if ($tmp1768.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1769);
        }
        }
        else {
        panda$core$Bit $tmp1771 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1770);
        if ($tmp1771.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1772);
        }
        }
        else {
        panda$core$Bit $tmp1774 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1773);
        if ($tmp1774.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1775);
        }
        }
        else {
        panda$core$Bit $tmp1777 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1776);
        if ($tmp1777.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1778);
        }
        }
        else {
        panda$core$Bit $tmp1780 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1779);
        if ($tmp1780.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1781);
        }
        }
        else {
        panda$core$Bit $tmp1783 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1782);
        if ($tmp1783.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1784);
        }
        }
        else {
        panda$core$Bit $tmp1786 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1785);
        if ($tmp1786.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1787);
        }
        }
        else {
        panda$core$Bit $tmp1789 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1788);
        if ($tmp1789.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1790);
        }
        }
        else {
        panda$core$Bit $tmp1792 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1791);
        if ($tmp1792.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1793);
        }
        }
        else {
        panda$core$Bit $tmp1795 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316221721, &$s1794);
        if ($tmp1795.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1715, &$s1796);
        }
        }
        else {
        {
            panda$core$String* $tmp1797 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            panda$core$MutableString$append$panda$core$String(result1715, $tmp1797);
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        ITable* $tmp1799 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1799->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1799 = $tmp1799->next;
        }
        $fn1801 $tmp1800 = $tmp1799->methods[0];
        panda$collections$Iterator* $tmp1802 = $tmp1800(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1798 = $tmp1802;
        $l1803:;
        ITable* $tmp1805 = p$Iter1798->$class->itable;
        while ($tmp1805->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1805 = $tmp1805->next;
        }
        $fn1807 $tmp1806 = $tmp1805->methods[0];
        panda$core$Bit $tmp1808 = $tmp1806(p$Iter1798);
        panda$core$Bit $tmp1809 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1808);
        if (!$tmp1809.value) goto $l1804;
        {
            ITable* $tmp1811 = p$Iter1798->$class->itable;
            while ($tmp1811->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1811 = $tmp1811->next;
            }
            $fn1813 $tmp1812 = $tmp1811->methods[1];
            panda$core$Object* $tmp1814 = $tmp1812(p$Iter1798);
            p1810 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1814);
            panda$core$String* $tmp1816 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p1810->type)->name);
            panda$core$String* $tmp1817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1815, $tmp1816);
            panda$core$String* $tmp1819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1817, &$s1818);
            panda$core$MutableString$append$panda$core$String(result1715, $tmp1819);
        }
        goto $l1803;
        $l1804:;
    }
    org$pandalanguage$pandac$Type* $tmp1820 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1821 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1820);
    if ($tmp1821.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1715, &$s1822);
        panda$core$String* $tmp1823 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        panda$core$MutableString$append$panda$core$String(result1715, $tmp1823);
    }
    }
    panda$core$String* $tmp1824 = panda$core$MutableString$convert$R$panda$core$String(result1715);
    return $tmp1824;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1825 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1825.value);
    panda$core$String* $tmp1827 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1826, $tmp1827);
    panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1828, &$s1829);
    panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1831, &$s1832);
    return $tmp1833;
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
    panda$core$String* leftRef1834;
    panda$core$String* leftField1838;
    panda$core$String* start1848;
    panda$core$String* ifTrue1849;
    panda$core$String* ifFalse1851;
    panda$core$String* rightRef1864;
    panda$core$String* rightField1868;
    panda$core$String* truePred1878;
    panda$core$String* result1884;
    panda$core$String* $tmp1835 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1834 = $tmp1835;
    org$pandalanguage$pandac$Type* $tmp1836 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1837 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1836);
    if ($tmp1837.value) {
    {
        panda$core$String* $tmp1839 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1838 = $tmp1839;
        panda$core$String* $tmp1841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1840, leftField1838);
        panda$core$String* $tmp1843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1841, &$s1842);
        panda$core$String* $tmp1844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1843, leftRef1834);
        panda$core$String* $tmp1846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1844, &$s1845);
        (($fn1847) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1846);
        leftRef1834 = leftField1838;
    }
    }
    start1848 = self->currentBlock;
    panda$core$String* $tmp1850 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1849 = $tmp1850;
    panda$core$String* $tmp1852 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1851 = $tmp1852;
    panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1853, leftRef1834);
    panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1854, &$s1855);
    panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, ifTrue1849);
    panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1857, &$s1858);
    panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, ifFalse1851);
    panda$core$String* $tmp1862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, &$s1861);
    (($fn1863) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1862);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1849, p_out);
    panda$core$String* $tmp1865 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1864 = $tmp1865;
    org$pandalanguage$pandac$Type* $tmp1866 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1867 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1866);
    if ($tmp1867.value) {
    {
        panda$core$String* $tmp1869 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1868 = $tmp1869;
        panda$core$String* $tmp1871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1870, rightField1868);
        panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1871, &$s1872);
        panda$core$String* $tmp1874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1873, rightRef1864);
        panda$core$String* $tmp1876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1874, &$s1875);
        (($fn1877) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1876);
        rightRef1864 = rightField1868;
    }
    }
    truePred1878 = self->currentBlock;
    panda$core$String* $tmp1880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1879, ifFalse1851);
    panda$core$String* $tmp1882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1880, &$s1881);
    (($fn1883) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1882);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1851, p_out);
    panda$core$String* $tmp1885 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1884 = $tmp1885;
    panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1886, result1884);
    panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1887, &$s1888);
    panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1889, start1848);
    panda$core$String* $tmp1892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1890, &$s1891);
    panda$core$String* $tmp1893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1892, rightRef1864);
    panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1893, &$s1894);
    panda$core$String* $tmp1896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1895, truePred1878);
    panda$core$String* $tmp1898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1896, &$s1897);
    (($fn1899) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1898);
    return result1884;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1900;
    panda$core$String* leftField1904;
    panda$core$String* start1914;
    panda$core$String* ifTrue1915;
    panda$core$String* ifFalse1917;
    panda$core$String* rightRef1930;
    panda$core$String* rightField1934;
    panda$core$String* falsePred1944;
    panda$core$String* result1950;
    panda$core$String* $tmp1901 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1900 = $tmp1901;
    org$pandalanguage$pandac$Type* $tmp1902 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1903 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1902);
    if ($tmp1903.value) {
    {
        panda$core$String* $tmp1905 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1904 = $tmp1905;
        panda$core$String* $tmp1907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1906, leftField1904);
        panda$core$String* $tmp1909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1907, &$s1908);
        panda$core$String* $tmp1910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1909, leftRef1900);
        panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1910, &$s1911);
        (($fn1913) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1912);
        leftRef1900 = leftField1904;
    }
    }
    start1914 = self->currentBlock;
    panda$core$String* $tmp1916 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1915 = $tmp1916;
    panda$core$String* $tmp1918 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1917 = $tmp1918;
    panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1919, leftRef1900);
    panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1920, &$s1921);
    panda$core$String* $tmp1923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1922, ifTrue1915);
    panda$core$String* $tmp1925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1923, &$s1924);
    panda$core$String* $tmp1926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1925, ifFalse1917);
    panda$core$String* $tmp1928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1926, &$s1927);
    (($fn1929) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1928);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1917, p_out);
    panda$core$String* $tmp1931 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1930 = $tmp1931;
    org$pandalanguage$pandac$Type* $tmp1932 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1933 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1932);
    if ($tmp1933.value) {
    {
        panda$core$String* $tmp1935 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1934 = $tmp1935;
        panda$core$String* $tmp1937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1936, rightField1934);
        panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1937, &$s1938);
        panda$core$String* $tmp1940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1939, rightRef1930);
        panda$core$String* $tmp1942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1940, &$s1941);
        (($fn1943) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1942);
        rightRef1930 = rightField1934;
    }
    }
    falsePred1944 = self->currentBlock;
    panda$core$String* $tmp1946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1945, ifTrue1915);
    panda$core$String* $tmp1948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1946, &$s1947);
    (($fn1949) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1948);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1915, p_out);
    panda$core$String* $tmp1951 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1950 = $tmp1951;
    panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1952, result1950);
    panda$core$String* $tmp1955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1953, &$s1954);
    panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1955, start1914);
    panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, &$s1957);
    panda$core$String* $tmp1959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1958, rightRef1930);
    panda$core$String* $tmp1961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1959, &$s1960);
    panda$core$String* $tmp1962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1961, falsePred1944);
    panda$core$String* $tmp1964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1962, &$s1963);
    (($fn1965) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1964);
    return result1950;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* llvmOp1966;
    panda$core$String* result2009;
    switch (p_cl.value) {
        case 10121:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1966 = &$s1967;
                }
                break;
                case 52:
                {
                    llvmOp1966 = &$s1968;
                }
                break;
                case 53:
                {
                    llvmOp1966 = &$s1969;
                }
                break;
                case 55:
                {
                    llvmOp1966 = &$s1970;
                }
                break;
                case 56:
                {
                    llvmOp1966 = &$s1971;
                }
                break;
                case 72:
                {
                    llvmOp1966 = &$s1972;
                }
                break;
                case 1:
                {
                    llvmOp1966 = &$s1973;
                }
                break;
                case 67:
                {
                    llvmOp1966 = &$s1974;
                }
                break;
                case 69:
                {
                    llvmOp1966 = &$s1975;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1966 = &$s1976;
                }
                break;
                case 58:
                {
                    llvmOp1966 = &$s1977;
                }
                break;
                case 59:
                {
                    llvmOp1966 = &$s1978;
                }
                break;
                case 63:
                {
                    llvmOp1966 = &$s1979;
                }
                break;
                case 62:
                {
                    llvmOp1966 = &$s1980;
                }
                break;
                case 65:
                {
                    llvmOp1966 = &$s1981;
                }
                break;
                case 64:
                {
                    llvmOp1966 = &$s1982;
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
                    llvmOp1966 = &$s1983;
                }
                break;
                case 52:
                {
                    llvmOp1966 = &$s1984;
                }
                break;
                case 53:
                {
                    llvmOp1966 = &$s1985;
                }
                break;
                case 55:
                {
                    llvmOp1966 = &$s1986;
                }
                break;
                case 56:
                {
                    llvmOp1966 = &$s1987;
                }
                break;
                case 72:
                {
                    llvmOp1966 = &$s1988;
                }
                break;
                case 1:
                {
                    llvmOp1966 = &$s1989;
                }
                break;
                case 67:
                {
                    llvmOp1966 = &$s1990;
                }
                break;
                case 69:
                {
                    llvmOp1966 = &$s1991;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1966 = &$s1992;
                }
                break;
                case 58:
                {
                    llvmOp1966 = &$s1993;
                }
                break;
                case 59:
                {
                    llvmOp1966 = &$s1994;
                }
                break;
                case 63:
                {
                    llvmOp1966 = &$s1995;
                }
                break;
                case 62:
                {
                    llvmOp1966 = &$s1996;
                }
                break;
                case 65:
                {
                    llvmOp1966 = &$s1997;
                }
                break;
                case 64:
                {
                    llvmOp1966 = &$s1998;
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
                    llvmOp1966 = &$s1999;
                }
                break;
                case 52:
                {
                    llvmOp1966 = &$s2000;
                }
                break;
                case 53:
                {
                    llvmOp1966 = &$s2001;
                }
                break;
                case 55:
                {
                    llvmOp1966 = &$s2002;
                }
                break;
                case 58:
                {
                    llvmOp1966 = &$s2003;
                }
                break;
                case 59:
                {
                    llvmOp1966 = &$s2004;
                }
                break;
                case 63:
                {
                    llvmOp1966 = &$s2005;
                }
                break;
                case 62:
                {
                    llvmOp1966 = &$s2006;
                }
                break;
                case 65:
                {
                    llvmOp1966 = &$s2007;
                }
                break;
                case 64:
                {
                    llvmOp1966 = &$s2008;
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
    panda$core$String* $tmp2010 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2009 = $tmp2010;
    panda$core$String* $tmp2012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2011, result2009);
    panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2012, &$s2013);
    panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, llvmOp1966);
    panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, &$s2016);
    panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2017, p_leftRef);
    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2018, &$s2019);
    panda$core$String* $tmp2021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2020, p_rightRef);
    panda$core$String* $tmp2023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2021, &$s2022);
    (($fn2024) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2023);
    return result2009;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2025;
    panda$core$String* rightRef2027;
    panda$core$String* raw2029;
    panda$core$String* result2042;
    panda$core$String* $tmp2026 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef2025 = $tmp2026;
    panda$core$String* $tmp2028 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef2027 = $tmp2028;
    panda$core$String* $tmp2030 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw2029 = $tmp2030;
    panda$core$String* $tmp2032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2031, raw2029);
    panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2032, &$s2033);
    panda$core$String* $tmp2035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2034, leftRef2025);
    panda$core$String* $tmp2037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2035, &$s2036);
    panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2037, rightRef2027);
    panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2038, &$s2039);
    (($fn2041) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2040);
    panda$core$String* $tmp2043 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2042 = $tmp2043;
    panda$core$String* $tmp2045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2044, result2042);
    panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2045, &$s2046);
    panda$core$String* $tmp2048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2047, raw2029);
    panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2048, &$s2049);
    (($fn2051) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2050);
    return result2042;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2052;
    panda$core$String* rightRef2054;
    panda$core$String* raw2056;
    panda$core$String* result2069;
    panda$core$String* $tmp2053 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef2052 = $tmp2053;
    panda$core$String* $tmp2055 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef2054 = $tmp2055;
    panda$core$String* $tmp2057 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw2056 = $tmp2057;
    panda$core$String* $tmp2059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2058, raw2056);
    panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2059, &$s2060);
    panda$core$String* $tmp2062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2061, leftRef2052);
    panda$core$String* $tmp2064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2062, &$s2063);
    panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2064, rightRef2054);
    panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, &$s2066);
    (($fn2068) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2067);
    panda$core$String* $tmp2070 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2069 = $tmp2070;
    panda$core$String* $tmp2072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2071, result2069);
    panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2072, &$s2073);
    panda$core$String* $tmp2075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2074, raw2056);
    panda$core$String* $tmp2077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2075, &$s2076);
    (($fn2078) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2077);
    return result2069;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2084;
    panda$core$String* rightRef2086;
    panda$core$Bit $tmp2079 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp2079.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp2080 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2080;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp2081 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2081;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp2082 = org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2082;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp2083 = org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2083;
        }
        break;
        default:
        {
            panda$core$String* $tmp2085 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef2084 = $tmp2085;
            panda$core$String* $tmp2087 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef2086 = $tmp2087;
            panda$core$Int64 $tmp2088 = org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp2089 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2088, leftRef2084, p_op, rightRef2086, p_out);
            return $tmp2089;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp2090.value);
    panda$core$Int64 $tmp2091 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp2092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2091, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2092.value);
    panda$core$Object* $tmp2093 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2094 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2095 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2093), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp2094), p_out);
    return $tmp2095;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    return &$s2096;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc2097;
    panda$core$Int64 index2099;
    panda$collections$ListView* vtable2100;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2102;
    panda$core$String* classPtrPtr2141;
    panda$core$String* classPtr2158;
    panda$core$String* cast2168;
    panda$core$String* ptr2181;
    panda$core$String* load2205;
    panda$core$String* result2215;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2098 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc2097 = $tmp2098;
    index2099 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2101 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2100 = $tmp2101;
    ITable* $tmp2103 = ((panda$collections$CollectionView*) vtable2100)->$class->itable;
    while ($tmp2103->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2103 = $tmp2103->next;
    }
    $fn2105 $tmp2104 = $tmp2103->methods[0];
    panda$core$Int64 $tmp2106 = $tmp2104(((panda$collections$CollectionView*) vtable2100));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2102, ((panda$core$Int64) { 0 }), $tmp2106, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2108 = $tmp2102.start.value;
    panda$core$Int64 i2107 = { $tmp2108 };
    int64_t $tmp2110 = $tmp2102.end.value;
    int64_t $tmp2111 = $tmp2102.step.value;
    bool $tmp2112 = $tmp2102.inclusive.value;
    bool $tmp2119 = $tmp2111 > 0;
    if ($tmp2119) goto $l2117; else goto $l2118;
    $l2117:;
    if ($tmp2112) goto $l2120; else goto $l2121;
    $l2120:;
    if ($tmp2108 <= $tmp2110) goto $l2113; else goto $l2115;
    $l2121:;
    if ($tmp2108 < $tmp2110) goto $l2113; else goto $l2115;
    $l2118:;
    if ($tmp2112) goto $l2122; else goto $l2123;
    $l2122:;
    if ($tmp2108 >= $tmp2110) goto $l2113; else goto $l2115;
    $l2123:;
    if ($tmp2108 > $tmp2110) goto $l2113; else goto $l2115;
    $l2113:;
    {
        ITable* $tmp2125 = vtable2100->$class->itable;
        while ($tmp2125->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2125 = $tmp2125->next;
        }
        $fn2127 $tmp2126 = $tmp2125->methods[0];
        panda$core$Object* $tmp2128 = $tmp2126(vtable2100, i2107);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2128)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2099 = i2107;
            goto $l2115;
        }
        }
    }
    $l2116:;
    if ($tmp2119) goto $l2130; else goto $l2131;
    $l2130:;
    int64_t $tmp2132 = $tmp2110 - i2107.value;
    if ($tmp2112) goto $l2133; else goto $l2134;
    $l2133:;
    if ($tmp2132 >= $tmp2111) goto $l2129; else goto $l2115;
    $l2134:;
    if ($tmp2132 > $tmp2111) goto $l2129; else goto $l2115;
    $l2131:;
    int64_t $tmp2136 = i2107.value - $tmp2110;
    if ($tmp2112) goto $l2137; else goto $l2138;
    $l2137:;
    if ($tmp2136 >= -$tmp2111) goto $l2129; else goto $l2115;
    $l2138:;
    if ($tmp2136 > -$tmp2111) goto $l2129; else goto $l2115;
    $l2129:;
    i2107.value += $tmp2111;
    goto $l2113;
    $l2115:;
    panda$core$Bit $tmp2140 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2099, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2140.value);
    panda$core$String* $tmp2142 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr2141 = $tmp2142;
    panda$core$String* $tmp2144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2143, classPtrPtr2141);
    panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2144, &$s2145);
    org$pandalanguage$pandac$Type* $tmp2147 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2148 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2147);
    panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2146, $tmp2148);
    panda$core$String* $tmp2151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2149, &$s2150);
    panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2152, p_target);
    panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2153, &$s2154);
    panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2151, $tmp2155);
    (($fn2157) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2156);
    panda$core$String* $tmp2159 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2158 = $tmp2159;
    panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2160, classPtr2158);
    panda$core$String* $tmp2163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2161, &$s2162);
    panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2163, classPtrPtr2141);
    panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2164, &$s2165);
    (($fn2167) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2166);
    panda$core$String* $tmp2169 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2168 = $tmp2169;
    panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2170, cast2168);
    panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2171, &$s2172);
    panda$core$String* $tmp2174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, classPtr2158);
    panda$core$String* $tmp2176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2174, &$s2175);
    panda$core$String* $tmp2177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2176, cc2097->type);
    panda$core$String* $tmp2179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2177, &$s2178);
    (($fn2180) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2179);
    panda$core$String* $tmp2182 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2181 = $tmp2182;
    panda$core$String* $tmp2184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2183, ptr2181);
    panda$core$String* $tmp2186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2184, &$s2185);
    panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2186, cc2097->type);
    panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2187, &$s2188);
    panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, cc2097->type);
    panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, &$s2191);
    panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2192, cast2168);
    panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2193, &$s2194);
    panda$core$String* $tmp2197 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2196, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2197, &$s2198);
    panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2199, ((panda$core$Object*) wrap_panda$core$Int64(index2099)));
    panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2200, &$s2201);
    panda$core$String* $tmp2203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2195, $tmp2202);
    (($fn2204) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2203);
    panda$core$String* $tmp2206 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2205 = $tmp2206;
    panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2207, load2205);
    panda$core$String* $tmp2210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2208, &$s2209);
    panda$core$String* $tmp2211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2210, ptr2181);
    panda$core$String* $tmp2213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2211, &$s2212);
    (($fn2214) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2213);
    panda$core$String* $tmp2216 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2215 = $tmp2216;
    panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2217, result2215);
    panda$core$String* $tmp2220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2218, &$s2219);
    panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2220, load2205);
    panda$core$String* $tmp2223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2221, &$s2222);
    org$pandalanguage$pandac$Type* $tmp2224 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2225 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2224);
    panda$core$String* $tmp2226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2223, $tmp2225);
    (($fn2227) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2226);
    return result2215;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* methodType2228;
    panda$core$String* entry2231;
    panda$core$String* classPointer2238;
    panda$core$String* loadedClass2262;
    panda$core$String* classType2264;
    panda$core$String* itableFirst2281;
    panda$core$String* next2306;
    panda$core$String* leavingEntryLabel2313;
    panda$core$String* itableNext2315;
    panda$core$String* itablePtrPtr2320;
    panda$core$String* fail2322;
    panda$core$String* itablePtr2343;
    panda$core$String* itableClassPtr2353;
    panda$core$String* itableClass2369;
    panda$core$String* test2385;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2387;
    panda$core$String* success2411;
    panda$core$Int64 index2443;
    panda$collections$ListView* vtable2444;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2446;
    panda$core$String* methodPtrPtr2493;
    panda$core$String* cast2512;
    panda$core$String* methodPtr2525;
    org$pandalanguage$pandac$Type* $tmp2229 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2230 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2229);
    methodType2228 = $tmp2230;
    panda$core$String* $tmp2232 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2231 = $tmp2232;
    panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2233, entry2231);
    panda$core$String* $tmp2236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2234, &$s2235);
    (($fn2237) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2236);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, entry2231, p_out);
    panda$core$String* $tmp2239 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2238 = $tmp2239;
    panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2240, classPointer2238);
    panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2241, &$s2242);
    org$pandalanguage$pandac$Type* $tmp2244 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2245 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2244);
    panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2243, $tmp2245);
    panda$core$String* $tmp2248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2246, &$s2247);
    panda$core$String* $tmp2250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2249, p_target);
    panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2250, &$s2251);
    panda$core$String* $tmp2254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2252, &$s2253);
    panda$core$String* $tmp2256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2254, &$s2255);
    panda$core$String* $tmp2257 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2256, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2257, &$s2258);
    panda$core$String* $tmp2260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2248, $tmp2259);
    (($fn2261) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2260);
    panda$core$String* $tmp2263 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2262 = $tmp2263;
    org$pandalanguage$pandac$Type* $tmp2265 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2266 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2265);
    classType2264 = $tmp2266;
    panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2267, loadedClass2262);
    panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2268, &$s2269);
    panda$core$String* $tmp2271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2270, classType2264);
    panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2271, &$s2272);
    panda$core$String* $tmp2274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2273, classType2264);
    panda$core$String* $tmp2276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2274, &$s2275);
    panda$core$String* $tmp2277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2276, classPointer2238);
    panda$core$String* $tmp2279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2277, &$s2278);
    (($fn2280) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2279);
    panda$core$String* $tmp2282 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2281 = $tmp2282;
    panda$core$String* $tmp2284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2283, itableFirst2281);
    panda$core$String* $tmp2286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2284, &$s2285);
    panda$core$String* $tmp2287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2286, classType2264);
    panda$core$String* $tmp2289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2287, &$s2288);
    panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2289, classType2264);
    panda$core$String* $tmp2292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, &$s2291);
    panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2293, loadedClass2262);
    panda$core$String* $tmp2296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2294, &$s2295);
    panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2296, &$s2297);
    panda$core$String* $tmp2300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2298, &$s2299);
    panda$core$String* $tmp2301 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2300, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2301, &$s2302);
    panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2292, $tmp2303);
    (($fn2305) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2304);
    panda$core$String* $tmp2307 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2306 = $tmp2307;
    panda$core$String* $tmp2309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2308, next2306);
    panda$core$String* $tmp2311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2309, &$s2310);
    (($fn2312) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2311);
    leavingEntryLabel2313 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, next2306, p_out);
    panda$core$Int64 $tmp2314 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2314;
    panda$core$String* $tmp2317 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2316, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2317, &$s2318);
    itableNext2315 = $tmp2319;
    panda$core$String* $tmp2321 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2320 = $tmp2321;
    panda$core$String* $tmp2323 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2322 = $tmp2323;
    panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2324, itablePtrPtr2320);
    panda$core$String* $tmp2327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2325, &$s2326);
    panda$core$String* $tmp2328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2327, itableFirst2281);
    panda$core$String* $tmp2330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2328, &$s2329);
    panda$core$String* $tmp2331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2330, leavingEntryLabel2313);
    panda$core$String* $tmp2333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2331, &$s2332);
    panda$core$String* $tmp2335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2334, itableNext2315);
    panda$core$String* $tmp2337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2335, &$s2336);
    panda$core$String* $tmp2338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2337, fail2322);
    panda$core$String* $tmp2340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2338, &$s2339);
    panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2333, $tmp2340);
    (($fn2342) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2341);
    panda$core$String* $tmp2344 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2343 = $tmp2344;
    panda$core$String* $tmp2346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2345, itablePtr2343);
    panda$core$String* $tmp2348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2346, &$s2347);
    panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2348, itablePtrPtr2320);
    panda$core$String* $tmp2351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2349, &$s2350);
    (($fn2352) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2351);
    panda$core$String* $tmp2354 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2353 = $tmp2354;
    panda$core$String* $tmp2356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2355, itableClassPtr2353);
    panda$core$String* $tmp2358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2356, &$s2357);
    panda$core$String* $tmp2360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2359, itablePtr2343);
    panda$core$String* $tmp2362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2360, &$s2361);
    panda$core$String* $tmp2364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2362, &$s2363);
    panda$core$String* $tmp2366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2364, &$s2365);
    panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2358, $tmp2366);
    (($fn2368) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2367);
    panda$core$String* $tmp2370 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2369 = $tmp2370;
    panda$core$String* $tmp2372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2371, itableClass2369);
    panda$core$String* $tmp2374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2372, &$s2373);
    panda$core$String* $tmp2375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2374, classType2264);
    panda$core$String* $tmp2377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2375, &$s2376);
    panda$core$String* $tmp2378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2377, classType2264);
    panda$core$String* $tmp2380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2378, &$s2379);
    panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2380, itableClassPtr2353);
    panda$core$String* $tmp2383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2381, &$s2382);
    (($fn2384) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2383);
    panda$core$String* $tmp2386 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2385 = $tmp2386;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2388 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2387 = $tmp2388;
    panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2389, test2385);
    panda$core$String* $tmp2392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2390, &$s2391);
    panda$core$String* $tmp2393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2392, classType2264);
    panda$core$String* $tmp2395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2393, &$s2394);
    panda$core$String* $tmp2396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2395, intfCC2387->type);
    panda$core$String* $tmp2398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2396, &$s2397);
    panda$core$String* $tmp2399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2398, intfCC2387->name);
    panda$core$String* $tmp2401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2399, &$s2400);
    panda$core$String* $tmp2403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2402, classType2264);
    panda$core$String* $tmp2405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2403, &$s2404);
    panda$core$String* $tmp2406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2405, itableClass2369);
    panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2406, &$s2407);
    panda$core$String* $tmp2409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2401, $tmp2408);
    (($fn2410) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2409);
    panda$core$String* $tmp2412 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2411 = $tmp2412;
    panda$core$String* $tmp2414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2413, test2385);
    panda$core$String* $tmp2416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2414, &$s2415);
    panda$core$String* $tmp2417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2416, success2411);
    panda$core$String* $tmp2419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2417, &$s2418);
    panda$core$String* $tmp2420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2419, fail2322);
    panda$core$String* $tmp2422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2420, &$s2421);
    (($fn2423) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2422);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, fail2322, p_out);
    panda$core$String* $tmp2425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2424, itableNext2315);
    panda$core$String* $tmp2427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2425, &$s2426);
    panda$core$String* $tmp2428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2427, itablePtr2343);
    panda$core$String* $tmp2430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, &$s2429);
    panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2431, &$s2432);
    panda$core$String* $tmp2435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2433, &$s2434);
    panda$core$String* $tmp2436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2430, $tmp2435);
    (($fn2437) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2436);
    panda$core$String* $tmp2439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2438, next2306);
    panda$core$String* $tmp2441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2439, &$s2440);
    (($fn2442) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2441);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, success2411, p_out);
    index2443 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2445 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2444 = $tmp2445;
    ITable* $tmp2447 = ((panda$collections$CollectionView*) vtable2444)->$class->itable;
    while ($tmp2447->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2447 = $tmp2447->next;
    }
    $fn2449 $tmp2448 = $tmp2447->methods[0];
    panda$core$Int64 $tmp2450 = $tmp2448(((panda$collections$CollectionView*) vtable2444));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2446, ((panda$core$Int64) { 0 }), $tmp2450, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2452 = $tmp2446.start.value;
    panda$core$Int64 i2451 = { $tmp2452 };
    int64_t $tmp2454 = $tmp2446.end.value;
    int64_t $tmp2455 = $tmp2446.step.value;
    bool $tmp2456 = $tmp2446.inclusive.value;
    bool $tmp2463 = $tmp2455 > 0;
    if ($tmp2463) goto $l2461; else goto $l2462;
    $l2461:;
    if ($tmp2456) goto $l2464; else goto $l2465;
    $l2464:;
    if ($tmp2452 <= $tmp2454) goto $l2457; else goto $l2459;
    $l2465:;
    if ($tmp2452 < $tmp2454) goto $l2457; else goto $l2459;
    $l2462:;
    if ($tmp2456) goto $l2466; else goto $l2467;
    $l2466:;
    if ($tmp2452 >= $tmp2454) goto $l2457; else goto $l2459;
    $l2467:;
    if ($tmp2452 > $tmp2454) goto $l2457; else goto $l2459;
    $l2457:;
    {
        ITable* $tmp2469 = vtable2444->$class->itable;
        while ($tmp2469->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2469 = $tmp2469->next;
        }
        $fn2471 $tmp2470 = $tmp2469->methods[0];
        panda$core$Object* $tmp2472 = $tmp2470(vtable2444, i2451);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2472)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2443 = i2451;
            goto $l2459;
        }
        }
    }
    $l2460:;
    if ($tmp2463) goto $l2474; else goto $l2475;
    $l2474:;
    int64_t $tmp2476 = $tmp2454 - i2451.value;
    if ($tmp2456) goto $l2477; else goto $l2478;
    $l2477:;
    if ($tmp2476 >= $tmp2455) goto $l2473; else goto $l2459;
    $l2478:;
    if ($tmp2476 > $tmp2455) goto $l2473; else goto $l2459;
    $l2475:;
    int64_t $tmp2480 = i2451.value - $tmp2454;
    if ($tmp2456) goto $l2481; else goto $l2482;
    $l2481:;
    if ($tmp2480 >= -$tmp2455) goto $l2473; else goto $l2459;
    $l2482:;
    if ($tmp2480 > -$tmp2455) goto $l2473; else goto $l2459;
    $l2473:;
    i2451.value += $tmp2455;
    goto $l2457;
    $l2459:;
    org$pandalanguage$pandac$Type* $tmp2484 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2485 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2484);
    panda$collections$ListView* $tmp2486 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2485);
    ITable* $tmp2487 = ((panda$collections$CollectionView*) $tmp2486)->$class->itable;
    while ($tmp2487->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2487 = $tmp2487->next;
    }
    $fn2489 $tmp2488 = $tmp2487->methods[0];
    panda$core$Int64 $tmp2490 = $tmp2488(((panda$collections$CollectionView*) $tmp2486));
    panda$core$Int64 $tmp2491 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2443, $tmp2490);
    index2443 = $tmp2491;
    panda$core$Bit $tmp2492 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2443, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2492.value);
    panda$core$String* $tmp2494 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2493 = $tmp2494;
    panda$core$String* $tmp2496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2495, methodPtrPtr2493);
    panda$core$String* $tmp2498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2496, &$s2497);
    panda$core$String* $tmp2500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2499, itablePtr2343);
    panda$core$String* $tmp2502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2500, &$s2501);
    panda$core$String* $tmp2504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2502, &$s2503);
    panda$core$String* $tmp2506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2504, &$s2505);
    panda$core$String* $tmp2507 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2506, ((panda$core$Object*) wrap_panda$core$Int64(index2443)));
    panda$core$String* $tmp2509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2507, &$s2508);
    panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2498, $tmp2509);
    (($fn2511) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2510);
    panda$core$String* $tmp2513 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2512 = $tmp2513;
    panda$core$String* $tmp2515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2514, cast2512);
    panda$core$String* $tmp2517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2515, &$s2516);
    panda$core$String* $tmp2518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2517, methodPtrPtr2493);
    panda$core$String* $tmp2520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2518, &$s2519);
    panda$core$String* $tmp2521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2520, methodType2228);
    panda$core$String* $tmp2523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2521, &$s2522);
    (($fn2524) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2523);
    panda$core$String* $tmp2526 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2525 = $tmp2526;
    panda$core$String* $tmp2528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2527, methodPtr2525);
    panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2528, &$s2529);
    panda$core$String* $tmp2531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, methodType2228);
    panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2531, &$s2532);
    panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2533, methodType2228);
    panda$core$String* $tmp2536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, &$s2535);
    panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2536, cast2512);
    panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, &$s2538);
    (($fn2540) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2539);
    return methodPtr2525;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2542 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2541 = $tmp2542.value;
    if (!$tmp2541) goto $l2543;
    panda$core$Bit $tmp2544 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2541 = $tmp2544.value;
    $l2543:;
    panda$core$Bit $tmp2545 = { $tmp2541 };
    if ($tmp2545.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2546.value) {
        {
            panda$core$String* $tmp2547 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2547;
        }
        }
        else {
        {
            panda$core$String* $tmp2548 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2548;
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
        panda$core$String* $tmp2549 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2549;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2550;
    panda$core$String* $match$469052551;
    panda$core$String* countStruct2556;
    panda$core$String* count2559;
    panda$core$String* size2569;
    panda$core$Int64 elementSize2571;
    panda$core$String* malloc2591;
    panda$core$String* result2605;
    panda$core$String* ptr2624;
    panda$core$String* baseType2627;
    panda$core$String* ptrType2630;
    panda$core$String* cast2633;
    panda$core$String* load2646;
    panda$core$String* ptr2666;
    panda$core$String* baseType2669;
    panda$core$String* ptrType2672;
    panda$core$String* cast2675;
    panda$core$String* indexStruct2688;
    panda$core$String* index2691;
    panda$core$String* offsetPtr2701;
    panda$core$String* load2722;
    panda$core$String* ptr2742;
    panda$core$String* ptrCast2745;
    panda$core$String* countStruct2755;
    panda$core$String* count2758;
    panda$core$String* size2768;
    panda$core$String* realloc2786;
    panda$core$String* result2805;
    panda$core$String* ptr2824;
    panda$core$String* baseType2827;
    panda$core$String* offsetStruct2831;
    panda$core$String* offset2834;
    panda$core$String* result2844;
    m2550 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$469052551 = ((org$pandalanguage$pandac$Symbol*) m2550->value)->name;
        panda$core$Bit $tmp2553 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$469052551, &$s2552);
        if ($tmp2553.value) {
        {
            panda$core$Int64 $tmp2554 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2554, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2555.value);
            panda$core$Object* $tmp2557 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2558 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2557), p_out);
            countStruct2556 = $tmp2558;
            panda$core$String* $tmp2560 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2559 = $tmp2560;
            panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2561, count2559);
            panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2562, &$s2563);
            panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2564, countStruct2556);
            panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2565, &$s2566);
            (($fn2568) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2567);
            panda$core$String* $tmp2570 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2569 = $tmp2570;
            org$pandalanguage$pandac$Type* $tmp2572 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2550);
            panda$core$Object* $tmp2573 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp2572->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2574 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2573));
            elementSize2571 = $tmp2574;
            panda$core$Bit $tmp2575 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(elementSize2571, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp2575.value);
            panda$core$String* $tmp2577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2576, size2569);
            panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2577, &$s2578);
            panda$core$String* $tmp2581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2579, &$s2580);
            panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2581, &$s2582);
            panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2583, count2559);
            panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, &$s2585);
            panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2586, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2571)));
            panda$core$String* $tmp2589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, &$s2588);
            (($fn2590) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2589);
            panda$core$String* $tmp2592 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2591 = $tmp2592;
            panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2593, malloc2591);
            panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2594, &$s2595);
            panda$core$String* $tmp2598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, &$s2597);
            panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2598, &$s2599);
            panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2600, size2569);
            panda$core$String* $tmp2603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2601, &$s2602);
            (($fn2604) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2603);
            panda$core$String* $tmp2606 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2605 = $tmp2606;
            panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2607, result2605);
            panda$core$String* $tmp2610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2608, &$s2609);
            panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2610, malloc2591);
            panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, &$s2612);
            org$pandalanguage$pandac$Type* $tmp2614 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2550);
            panda$core$String* $tmp2615 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2614);
            panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, $tmp2615);
            panda$core$String* $tmp2618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2616, &$s2617);
            (($fn2619) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2618);
            return result2605;
        }
        }
        else {
        panda$core$Bit $tmp2621 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$469052551, &$s2620);
        if ($tmp2621.value) {
        {
            panda$core$Int64 $tmp2622 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2622, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2623.value);
            panda$core$Object* $tmp2625 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2626 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2625), p_out);
            ptr2624 = $tmp2626;
            org$pandalanguage$pandac$Type* $tmp2628 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2550);
            panda$core$String* $tmp2629 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2628);
            baseType2627 = $tmp2629;
            panda$core$String* $tmp2632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2627, &$s2631);
            ptrType2630 = $tmp2632;
            panda$core$String* $tmp2634 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2633 = $tmp2634;
            panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2635, cast2633);
            panda$core$String* $tmp2638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2636, &$s2637);
            panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2638, ptr2624);
            panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, &$s2640);
            panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2641, ptrType2630);
            panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, &$s2643);
            (($fn2645) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2644);
            panda$core$String* $tmp2647 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2646 = $tmp2647;
            panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2648, load2646);
            panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2649, &$s2650);
            panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, baseType2627);
            panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2652, &$s2653);
            panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, ptrType2630);
            panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2655, &$s2656);
            panda$core$String* $tmp2658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2657, cast2633);
            panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2658, &$s2659);
            (($fn2661) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2660);
            return load2646;
        }
        }
        else {
        panda$core$Bit $tmp2663 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$469052551, &$s2662);
        if ($tmp2663.value) {
        {
            panda$core$Int64 $tmp2664 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2664, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2665.value);
            panda$core$Object* $tmp2667 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2668 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2667), p_out);
            ptr2666 = $tmp2668;
            org$pandalanguage$pandac$Type* $tmp2670 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2550);
            panda$core$String* $tmp2671 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2670);
            baseType2669 = $tmp2671;
            panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2669, &$s2673);
            ptrType2672 = $tmp2674;
            panda$core$String* $tmp2676 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2675 = $tmp2676;
            panda$core$String* $tmp2678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2677, cast2675);
            panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2678, &$s2679);
            panda$core$String* $tmp2681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2680, ptr2666);
            panda$core$String* $tmp2683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2681, &$s2682);
            panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2683, ptrType2672);
            panda$core$String* $tmp2686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2684, &$s2685);
            (($fn2687) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2686);
            panda$core$Object* $tmp2689 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2690 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2689), p_out);
            indexStruct2688 = $tmp2690;
            panda$core$String* $tmp2692 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2691 = $tmp2692;
            panda$core$String* $tmp2694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2693, index2691);
            panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2694, &$s2695);
            panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2696, indexStruct2688);
            panda$core$String* $tmp2699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, &$s2698);
            (($fn2700) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2699);
            panda$core$String* $tmp2702 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2701 = $tmp2702;
            panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2703, offsetPtr2701);
            panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2704, &$s2705);
            panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2706, baseType2669);
            panda$core$String* $tmp2709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2707, &$s2708);
            panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2709, ptrType2672);
            panda$core$String* $tmp2712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, &$s2711);
            panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2712, cast2675);
            panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, &$s2714);
            panda$core$String* $tmp2717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2716, index2691);
            panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2717, &$s2718);
            panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, $tmp2719);
            (($fn2721) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2720);
            panda$core$String* $tmp2723 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2722 = $tmp2723;
            panda$core$String* $tmp2725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2724, load2722);
            panda$core$String* $tmp2727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2725, &$s2726);
            panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2727, baseType2669);
            panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2728, &$s2729);
            panda$core$String* $tmp2731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2730, ptrType2672);
            panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2731, &$s2732);
            panda$core$String* $tmp2734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, offsetPtr2701);
            panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2734, &$s2735);
            (($fn2737) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2736);
            return load2722;
        }
        }
        else {
        panda$core$Bit $tmp2739 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$469052551, &$s2738);
        if ($tmp2739.value) {
        {
            panda$core$Int64 $tmp2740 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2740, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2741.value);
            panda$core$Object* $tmp2743 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2744 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2743), p_out);
            ptr2742 = $tmp2744;
            panda$core$String* $tmp2746 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2745 = $tmp2746;
            panda$core$String* $tmp2748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2747, ptrCast2745);
            panda$core$String* $tmp2750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2748, &$s2749);
            panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2750, ptr2742);
            panda$core$String* $tmp2753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2751, &$s2752);
            (($fn2754) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2753);
            panda$core$Object* $tmp2756 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2757 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2756), p_out);
            countStruct2755 = $tmp2757;
            panda$core$String* $tmp2759 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2758 = $tmp2759;
            panda$core$String* $tmp2761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2760, count2758);
            panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2761, &$s2762);
            panda$core$String* $tmp2764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2763, countStruct2755);
            panda$core$String* $tmp2766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2764, &$s2765);
            (($fn2767) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2766);
            panda$core$String* $tmp2769 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2768 = $tmp2769;
            panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2770, size2768);
            panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2771, &$s2772);
            panda$core$String* $tmp2775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2773, &$s2774);
            panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2775, &$s2776);
            panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, count2758);
            panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, &$s2779);
            org$pandalanguage$pandac$Type* $tmp2781 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2550);
            panda$core$Object* $tmp2782 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp2781->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2783 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2782));
            panda$core$String* $tmp2784 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2780, ((panda$core$Object*) wrap_panda$core$Int64($tmp2783)));
            (($fn2785) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2784);
            panda$core$String* $tmp2787 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2786 = $tmp2787;
            panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2788, realloc2786);
            panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, &$s2790);
            panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, ptrCast2745);
            panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, &$s2793);
            panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2794, &$s2795);
            panda$core$String* $tmp2798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2796, &$s2797);
            panda$core$String* $tmp2800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2799, size2768);
            panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2800, &$s2801);
            panda$core$String* $tmp2803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2798, $tmp2802);
            (($fn2804) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2803);
            panda$core$String* $tmp2806 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2805 = $tmp2806;
            panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2807, result2805);
            panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, &$s2809);
            panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2810, realloc2786);
            panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2811, &$s2812);
            org$pandalanguage$pandac$Type* $tmp2814 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2550);
            panda$core$String* $tmp2815 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2814);
            panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2813, $tmp2815);
            panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, &$s2817);
            (($fn2819) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2818);
            return result2805;
        }
        }
        else {
        panda$core$Bit $tmp2821 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$469052551, &$s2820);
        if ($tmp2821.value) {
        {
            panda$core$Int64 $tmp2822 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2822, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2823.value);
            panda$core$Object* $tmp2825 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2826 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2825), p_out);
            ptr2824 = $tmp2826;
            panda$core$Object* $tmp2828 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2829 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp2828)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2830 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2829));
            baseType2827 = $tmp2830;
            panda$core$Object* $tmp2832 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2833 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2832), p_out);
            offsetStruct2831 = $tmp2833;
            panda$core$String* $tmp2835 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2834 = $tmp2835;
            panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2836, offset2834);
            panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, &$s2838);
            panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, offsetStruct2831);
            panda$core$String* $tmp2842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2840, &$s2841);
            (($fn2843) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2842);
            panda$core$String* $tmp2845 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2844 = $tmp2845;
            panda$core$String* $tmp2847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2846, result2844);
            panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2847, &$s2848);
            panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2849, baseType2827);
            panda$core$String* $tmp2852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2850, &$s2851);
            panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2852, ptr2824);
            panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2853, &$s2854);
            panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2855, offset2834);
            panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2856, &$s2857);
            (($fn2859) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2858);
            return result2844;
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
    org$pandalanguage$pandac$MethodDecl* m2860;
    panda$core$String* selfRef2861;
    panda$core$Int64 argStart2863;
    panda$collections$Array* args2867;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2870;
    panda$core$String* end2903;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2912;
    org$pandalanguage$pandac$MethodDecl* old2919;
    panda$core$String* phi2932;
    panda$core$String* separator2943;
    panda$collections$Iterator* ret$Iter2945;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2957;
    m2860 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentFile, ((panda$core$Object*) m2860->owner->source));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2860), ((panda$core$Object*) m2860));
    selfRef2861 = &$s2862;
    panda$core$Bit $tmp2864 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2860);
    if ($tmp2864.value) {
    {
        argStart2863 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2865 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2866 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2865), p_out);
        selfRef2861 = $tmp2866;
    }
    }
    else {
    {
        argStart2863 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2868 = (panda$collections$Array*) malloc(40);
    $tmp2868->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2868->refCount.value = 1;
    panda$collections$Array$init($tmp2868);
    args2867 = $tmp2868;
    panda$core$Int64 $tmp2871 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2870, argStart2863, $tmp2871, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2873 = $tmp2870.start.value;
    panda$core$Int64 i2872 = { $tmp2873 };
    int64_t $tmp2875 = $tmp2870.end.value;
    int64_t $tmp2876 = $tmp2870.step.value;
    bool $tmp2877 = $tmp2870.inclusive.value;
    bool $tmp2884 = $tmp2876 > 0;
    if ($tmp2884) goto $l2882; else goto $l2883;
    $l2882:;
    if ($tmp2877) goto $l2885; else goto $l2886;
    $l2885:;
    if ($tmp2873 <= $tmp2875) goto $l2878; else goto $l2880;
    $l2886:;
    if ($tmp2873 < $tmp2875) goto $l2878; else goto $l2880;
    $l2883:;
    if ($tmp2877) goto $l2887; else goto $l2888;
    $l2887:;
    if ($tmp2873 >= $tmp2875) goto $l2878; else goto $l2880;
    $l2888:;
    if ($tmp2873 > $tmp2875) goto $l2878; else goto $l2880;
    $l2878:;
    {
        panda$core$Object* $tmp2890 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2872);
        panda$core$String* $tmp2891 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2890), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2867, ((panda$core$Object*) $tmp2891));
    }
    $l2881:;
    if ($tmp2884) goto $l2893; else goto $l2894;
    $l2893:;
    int64_t $tmp2895 = $tmp2875 - i2872.value;
    if ($tmp2877) goto $l2896; else goto $l2897;
    $l2896:;
    if ($tmp2895 >= $tmp2876) goto $l2892; else goto $l2880;
    $l2897:;
    if ($tmp2895 > $tmp2876) goto $l2892; else goto $l2880;
    $l2894:;
    int64_t $tmp2899 = i2872.value - $tmp2875;
    if ($tmp2877) goto $l2900; else goto $l2901;
    $l2900:;
    if ($tmp2899 >= -$tmp2876) goto $l2892; else goto $l2880;
    $l2901:;
    if ($tmp2899 > -$tmp2876) goto $l2892; else goto $l2880;
    $l2892:;
    i2872.value += $tmp2876;
    goto $l2878;
    $l2880:;
    panda$core$String* $tmp2904 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2903 = $tmp2904;
    panda$core$Int64 $tmp2905 = panda$collections$Array$get_count$R$panda$core$Int64(args2867);
    panda$core$Int64 $tmp2906 = panda$collections$Array$get_count$R$panda$core$Int64(m2860->parameters);
    panda$core$Bit $tmp2907 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2905, $tmp2906);
    if ($tmp2907.value) {
    {
        panda$core$String* $tmp2909 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2908, ((panda$core$Object*) p_call));
        panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2909, &$s2910);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp2911));
        panda$core$System$crash();
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2913 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2913->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2913->refCount.value = 1;
    panda$core$String* $tmp2916 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2915, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2916, &$s2917);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2913, $tmp2918, selfRef2861, ((panda$collections$ListView*) args2867), end2903);
    inline2912 = $tmp2913;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2912));
    old2919 = self->currentMethod;
    self->currentMethod = m2860;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_body, p_out);
    self->currentMethod = old2919;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2920 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2921 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2920);
    if ($tmp2921.value) {
    {
        (($fn2923) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2922);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end2903, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2860));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentFile);
    panda$core$Int64 $tmp2924 = panda$collections$Array$get_count$R$panda$core$Int64(inline2912->returns);
    panda$core$Bit $tmp2925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2924, ((panda$core$Int64) { 1 }));
    if ($tmp2925.value) {
    {
        panda$core$Object* $tmp2926 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2912->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2926)->second);
    }
    }
    panda$core$Int64 $tmp2927 = panda$collections$Array$get_count$R$panda$core$Int64(inline2912->returns);
    panda$core$Bit $tmp2928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2927, ((panda$core$Int64) { 0 }));
    if ($tmp2928.value) {
    {
        (($fn2930) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s2929);
        return &$s2931;
    }
    }
    panda$core$String* $tmp2933 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2932 = $tmp2933;
    panda$core$String* $tmp2935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2934, phi2932);
    panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, &$s2936);
    panda$core$String* $tmp2938 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2860->returnType);
    panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2937, $tmp2938);
    panda$core$String* $tmp2941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2939, &$s2940);
    (($fn2942) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2941);
    separator2943 = &$s2944;
    {
        ITable* $tmp2946 = ((panda$collections$Iterable*) inline2912->returns)->$class->itable;
        while ($tmp2946->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2946 = $tmp2946->next;
        }
        $fn2948 $tmp2947 = $tmp2946->methods[0];
        panda$collections$Iterator* $tmp2949 = $tmp2947(((panda$collections$Iterable*) inline2912->returns));
        ret$Iter2945 = $tmp2949;
        $l2950:;
        ITable* $tmp2952 = ret$Iter2945->$class->itable;
        while ($tmp2952->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2952 = $tmp2952->next;
        }
        $fn2954 $tmp2953 = $tmp2952->methods[0];
        panda$core$Bit $tmp2955 = $tmp2953(ret$Iter2945);
        panda$core$Bit $tmp2956 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2955);
        if (!$tmp2956.value) goto $l2951;
        {
            ITable* $tmp2958 = ret$Iter2945->$class->itable;
            while ($tmp2958->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2958 = $tmp2958->next;
            }
            $fn2960 $tmp2959 = $tmp2958->methods[1];
            panda$core$Object* $tmp2961 = $tmp2959(ret$Iter2945);
            ret2957 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2961);
            panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2962, separator2943);
            panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2963, &$s2964);
            panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2965, ((panda$core$String*) ret2957->second));
            panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2966, &$s2967);
            panda$core$String* $tmp2969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2968, ((panda$core$String*) ret2957->first));
            panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2969, &$s2970);
            (($fn2972) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2971);
            separator2943 = &$s2973;
        }
        goto $l2950;
        $l2951:;
    }
    (($fn2974) ((panda$io$OutputStream*) p_out)->$class->vtable[17])(((panda$io$OutputStream*) p_out));
    return phi2932;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2976;
    panda$core$String* bit2986;
    panda$core$String* result2990;
    panda$core$String* bit3006;
    panda$core$String* result3010;
    org$pandalanguage$pandac$IRNode* block3027;
    panda$collections$Array* args3031;
    org$pandalanguage$pandac$Type* actualMethodType3035;
    panda$core$String* actualResultType3036;
    panda$core$Bit isSuper3037;
    panda$core$Int64 offset3057;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3062;
    panda$core$String* arg3082;
    panda$core$String* target3119;
    panda$core$String* methodRef3123;
    panda$core$String* result3125;
    panda$core$Bit indirect3126;
    panda$core$String* separator3152;
    panda$core$String* indirectVar3154;
    panda$collections$Iterator* arg$Iter3175;
    panda$core$String* arg3187;
    panda$core$Bit $tmp2975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2975.value);
    m2976 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2978 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2976->owner)->name, &$s2977);
    if ($tmp2978.value) {
    {
        panda$core$String* $tmp2979 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2979;
    }
    }
    if (m2976->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2976);
    }
    }
    panda$core$Bit $tmp2981 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2976->owner)->name, &$s2980);
    if ($tmp2981.value) {
    {
        panda$core$Bit $tmp2983 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2976)->name, &$s2982);
        if ($tmp2983.value) {
        {
            panda$core$Int64 $tmp2984 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2984, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2985.value);
            panda$core$Object* $tmp2987 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2988 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2989 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2987), ((org$pandalanguage$pandac$IRNode*) $tmp2988), p_out);
            bit2986 = $tmp2989;
            panda$core$String* $tmp2991 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2990 = $tmp2991;
            panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2992, result2990);
            panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2993, &$s2994);
            panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2996, bit2986);
            panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2997, &$s2998);
            panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, $tmp2999);
            (($fn3001) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3000);
            return result2990;
        }
        }
        panda$core$Bit $tmp3003 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2976)->name, &$s3002);
        if ($tmp3003.value) {
        {
            panda$core$Int64 $tmp3004 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp3005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3004, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp3005.value);
            panda$core$Object* $tmp3007 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3008 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3009 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3007), ((org$pandalanguage$pandac$IRNode*) $tmp3008), p_out);
            bit3006 = $tmp3009;
            panda$core$String* $tmp3011 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result3010 = $tmp3011;
            panda$core$String* $tmp3013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3012, result3010);
            panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, &$s3014);
            panda$core$String* $tmp3017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3016, bit3006);
            panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3017, &$s3018);
            panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3015, $tmp3019);
            (($fn3021) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3020);
            return result3010;
        }
        }
    }
    }
    panda$core$Bit $tmp3023 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2976->annotations);
    bool $tmp3022 = $tmp3023.value;
    if (!$tmp3022) goto $l3024;
    panda$core$Object* $tmp3025 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2976));
    $tmp3022 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp3025) == NULL }).value;
    $l3024:;
    panda$core$Bit $tmp3026 = { $tmp3022 };
    if ($tmp3026.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3028 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2976);
        block3027 = $tmp3028;
        if (((panda$core$Bit) { block3027 != NULL }).value) {
        {
            panda$core$String* $tmp3029 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, block3027, p_out);
            return $tmp3029;
        }
        }
        return &$s3030;
    }
    }
    panda$collections$Array* $tmp3032 = (panda$collections$Array*) malloc(40);
    $tmp3032->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3032->refCount.value = 1;
    panda$core$Int64 $tmp3034 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp3032, $tmp3034);
    args3031 = $tmp3032;
    panda$core$Int64 $tmp3039 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp3040 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3039, ((panda$core$Int64) { 1 }));
    bool $tmp3038 = $tmp3040.value;
    if (!$tmp3038) goto $l3041;
    panda$core$Object* $tmp3042 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3042)->kind, ((panda$core$Int64) { 1024 }));
    $tmp3038 = $tmp3043.value;
    $l3041:;
    panda$core$Bit $tmp3044 = { $tmp3038 };
    isSuper3037 = $tmp3044;
    panda$core$Bit $tmp3046 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper3037);
    bool $tmp3045 = $tmp3046.value;
    if (!$tmp3045) goto $l3047;
    panda$core$Bit $tmp3048 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2976);
    $tmp3045 = $tmp3048.value;
    $l3047:;
    panda$core$Bit $tmp3049 = { $tmp3045 };
    if ($tmp3049.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3050 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2976);
        actualMethodType3035 = $tmp3050;
        panda$core$Int64 $tmp3051 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType3035->subtypes);
        panda$core$Int64 $tmp3052 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3051, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3053 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3035->subtypes, $tmp3052);
        panda$core$String* $tmp3054 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3053));
        actualResultType3036 = $tmp3054;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3055 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2976);
        actualMethodType3035 = $tmp3055;
        panda$core$String* $tmp3056 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType3036 = $tmp3056;
    }
    }
    panda$core$Int64 $tmp3058 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp3059 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType3035->subtypes);
    panda$core$Int64 $tmp3060 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3058, $tmp3059);
    panda$core$Int64 $tmp3061 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp3060, ((panda$core$Int64) { 1 }));
    offset3057 = $tmp3061;
    panda$core$Int64 $tmp3063 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3062, ((panda$core$Int64) { 0 }), $tmp3063, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3065 = $tmp3062.start.value;
    panda$core$Int64 i3064 = { $tmp3065 };
    int64_t $tmp3067 = $tmp3062.end.value;
    int64_t $tmp3068 = $tmp3062.step.value;
    bool $tmp3069 = $tmp3062.inclusive.value;
    bool $tmp3076 = $tmp3068 > 0;
    if ($tmp3076) goto $l3074; else goto $l3075;
    $l3074:;
    if ($tmp3069) goto $l3077; else goto $l3078;
    $l3077:;
    if ($tmp3065 <= $tmp3067) goto $l3070; else goto $l3072;
    $l3078:;
    if ($tmp3065 < $tmp3067) goto $l3070; else goto $l3072;
    $l3075:;
    if ($tmp3069) goto $l3079; else goto $l3080;
    $l3079:;
    if ($tmp3065 >= $tmp3067) goto $l3070; else goto $l3072;
    $l3080:;
    if ($tmp3065 > $tmp3067) goto $l3070; else goto $l3072;
    $l3070:;
    {
        panda$core$Object* $tmp3083 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3064);
        panda$core$String* $tmp3084 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3083), p_out);
        arg3082 = $tmp3084;
        panda$core$Bit $tmp3086 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i3064, offset3057);
        bool $tmp3085 = $tmp3086.value;
        if (!$tmp3085) goto $l3087;
        panda$core$Int64 $tmp3088 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3064, offset3057);
        panda$core$Object* $tmp3089 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3035->subtypes, $tmp3088);
        panda$core$Object* $tmp3090 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3064);
        panda$core$Bit $tmp3091 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3089), ((org$pandalanguage$pandac$IRNode*) $tmp3090)->type);
        $tmp3085 = $tmp3091.value;
        $l3087:;
        panda$core$Bit $tmp3092 = { $tmp3085 };
        if ($tmp3092.value) {
        {
            panda$core$Int64 $tmp3093 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3064, offset3057);
            panda$core$Object* $tmp3094 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3035->subtypes, $tmp3093);
            panda$core$String* $tmp3095 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3094));
            panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, &$s3096);
            panda$core$Object* $tmp3098 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3064);
            panda$core$Int64 $tmp3099 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3064, offset3057);
            panda$core$Object* $tmp3100 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3035->subtypes, $tmp3099);
            panda$core$String* $tmp3101 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg3082, ((org$pandalanguage$pandac$IRNode*) $tmp3098)->type, ((org$pandalanguage$pandac$Type*) $tmp3100), p_out);
            panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3097, $tmp3101);
            arg3082 = $tmp3102;
        }
        }
        else {
        {
            panda$core$Object* $tmp3103 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3064);
            panda$core$String* $tmp3104 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3103)->type);
            panda$core$String* $tmp3106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3104, &$s3105);
            panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3106, arg3082);
            arg3082 = $tmp3107;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args3031, ((panda$core$Object*) arg3082));
    }
    $l3073:;
    if ($tmp3076) goto $l3109; else goto $l3110;
    $l3109:;
    int64_t $tmp3111 = $tmp3067 - i3064.value;
    if ($tmp3069) goto $l3112; else goto $l3113;
    $l3112:;
    if ($tmp3111 >= $tmp3068) goto $l3108; else goto $l3072;
    $l3113:;
    if ($tmp3111 > $tmp3068) goto $l3108; else goto $l3072;
    $l3110:;
    int64_t $tmp3115 = i3064.value - $tmp3067;
    if ($tmp3069) goto $l3116; else goto $l3117;
    $l3116:;
    if ($tmp3115 >= -$tmp3068) goto $l3108; else goto $l3072;
    $l3117:;
    if ($tmp3115 > -$tmp3068) goto $l3108; else goto $l3072;
    $l3108:;
    i3064.value += $tmp3068;
    goto $l3070;
    $l3072:;
    panda$core$Int64 $tmp3120 = panda$collections$Array$get_count$R$panda$core$Int64(args3031);
    panda$core$Bit $tmp3121 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3120, ((panda$core$Int64) { 0 }));
    if ($tmp3121.value) {
    {
        panda$core$Object* $tmp3122 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args3031, ((panda$core$Int64) { 0 }));
        target3119 = ((panda$core$String*) $tmp3122);
    }
    }
    else {
    {
        target3119 = NULL;
    }
    }
    panda$core$String* $tmp3124 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target3119, m2976, isSuper3037, p_out);
    methodRef3123 = $tmp3124;
    panda$core$Bit $tmp3127 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2976);
    indirect3126 = $tmp3127;
    if (indirect3126.value) {
    {
        panda$core$String* $tmp3129 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2976);
        panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3128, $tmp3129);
        panda$core$String* $tmp3132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3130, &$s3131);
        (($fn3133) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3132);
    }
    }
    else {
    {
        panda$core$String* $tmp3134 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3125 = $tmp3134;
        panda$core$String* $tmp3136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3135, result3125);
        panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3136, &$s3137);
        panda$core$String* $tmp3139 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2976);
        panda$core$String* $tmp3140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3138, $tmp3139);
        panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3140, &$s3141);
        panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3142, actualResultType3036);
        panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, &$s3144);
        (($fn3146) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3145);
    }
    }
    panda$core$String* $tmp3148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3147, methodRef3123);
    panda$core$String* $tmp3150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3148, &$s3149);
    (($fn3151) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3150);
    separator3152 = &$s3153;
    if (indirect3126.value) {
    {
        panda$core$Int64 $tmp3155 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3155;
        panda$core$String* $tmp3157 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3156, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar3154 = $tmp3157;
        panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3158, indirectVar3154);
        panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3159, &$s3160);
        panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, actualResultType3036);
        panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3162, &$s3163);
        (($fn3165) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3164);
        panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3166, actualResultType3036);
        panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3167, &$s3168);
        panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3169, indirectVar3154);
        panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, &$s3171);
        (($fn3173) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3172);
        separator3152 = &$s3174;
    }
    }
    {
        ITable* $tmp3176 = ((panda$collections$Iterable*) args3031)->$class->itable;
        while ($tmp3176->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3176 = $tmp3176->next;
        }
        $fn3178 $tmp3177 = $tmp3176->methods[0];
        panda$collections$Iterator* $tmp3179 = $tmp3177(((panda$collections$Iterable*) args3031));
        arg$Iter3175 = $tmp3179;
        $l3180:;
        ITable* $tmp3182 = arg$Iter3175->$class->itable;
        while ($tmp3182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3182 = $tmp3182->next;
        }
        $fn3184 $tmp3183 = $tmp3182->methods[0];
        panda$core$Bit $tmp3185 = $tmp3183(arg$Iter3175);
        panda$core$Bit $tmp3186 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3185);
        if (!$tmp3186.value) goto $l3181;
        {
            ITable* $tmp3188 = arg$Iter3175->$class->itable;
            while ($tmp3188->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3188 = $tmp3188->next;
            }
            $fn3190 $tmp3189 = $tmp3188->methods[1];
            panda$core$Object* $tmp3191 = $tmp3189(arg$Iter3175);
            arg3187 = ((panda$core$String*) $tmp3191);
            panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3192, separator3152);
            panda$core$String* $tmp3195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3193, &$s3194);
            panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3195, arg3187);
            panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3196, &$s3197);
            (($fn3199) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3198);
            separator3152 = &$s3200;
        }
        goto $l3180;
        $l3181:;
    }
    (($fn3202) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3201);
    if (indirect3126.value) {
    {
        panda$core$String* $tmp3203 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3125 = $tmp3203;
        panda$core$String* $tmp3205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3204, result3125);
        panda$core$String* $tmp3207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3205, &$s3206);
        panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3207, actualResultType3036);
        panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, &$s3209);
        panda$core$String* $tmp3211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3210, actualResultType3036);
        panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3211, &$s3212);
        panda$core$String* $tmp3214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3213, indirectVar3154);
        (($fn3215) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3214);
    }
    }
    panda$core$String* $tmp3216 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3217 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3216, actualResultType3036);
    if ($tmp3217.value) {
    {
        panda$core$Int64 $tmp3218 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType3035->subtypes);
        panda$core$Int64 $tmp3219 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3218, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3220 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3035->subtypes, $tmp3219);
        panda$core$String* $tmp3221 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result3125, ((org$pandalanguage$pandac$Type*) $tmp3220), p_call->type, p_out);
        return $tmp3221;
    }
    }
    return result3125;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3222;
    panda$core$String* testStart3225;
    panda$core$String* isNonNull3226;
    panda$core$String* nonNullLabel3240;
    panda$core$String* endLabel3242;
    panda$core$String* unwrapped3255;
    panda$core$String* nonNullValue3258;
    panda$core$String* result3266;
    panda$core$String* mallocRef3288;
    panda$core$String* wrapperTypeName3300;
    panda$core$String* wrapperType3303;
    panda$core$String* wrapperCast3306;
    panda$core$String* classPtr3319;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3337;
    panda$core$String* refCount3352;
    panda$core$String* target3375;
    panda$core$String* result3411;
    org$pandalanguage$pandac$ClassDecl* $tmp3223 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3222 = $tmp3223;
    PANDA_ASSERT(((panda$core$Bit) { src3222 != NULL }).value);
    panda$core$Bit $tmp3224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3224.value) {
    {
        testStart3225 = self->currentBlock;
        panda$core$String* $tmp3227 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3226 = $tmp3227;
        panda$core$String* $tmp3229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3228, isNonNull3226);
        panda$core$String* $tmp3231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3229, &$s3230);
        panda$core$String* $tmp3232 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3231, $tmp3232);
        panda$core$String* $tmp3235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3233, &$s3234);
        panda$core$String* $tmp3236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3235, p_value);
        panda$core$String* $tmp3238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3236, &$s3237);
        (($fn3239) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3238);
        panda$core$String* $tmp3241 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3240 = $tmp3241;
        panda$core$String* $tmp3243 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3242 = $tmp3243;
        panda$core$String* $tmp3245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3244, isNonNull3226);
        panda$core$String* $tmp3247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3245, &$s3246);
        panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3247, nonNullLabel3240);
        panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3248, &$s3249);
        panda$core$String* $tmp3251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3250, endLabel3242);
        panda$core$String* $tmp3253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3251, &$s3252);
        (($fn3254) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3253);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3240, p_out);
        panda$core$Object* $tmp3256 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3257 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3256), p_out);
        unwrapped3255 = $tmp3257;
        panda$core$Object* $tmp3259 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3260 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped3255, ((org$pandalanguage$pandac$Type*) $tmp3259), p_dstType, p_out);
        nonNullValue3258 = $tmp3260;
        panda$core$String* $tmp3262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3261, endLabel3242);
        panda$core$String* $tmp3264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3262, &$s3263);
        (($fn3265) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3264);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3242, p_out);
        panda$core$String* $tmp3267 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3266 = $tmp3267;
        panda$core$String* $tmp3269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3268, result3266);
        panda$core$String* $tmp3271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3269, &$s3270);
        panda$core$String* $tmp3272 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3271, $tmp3272);
        panda$core$String* $tmp3275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3273, &$s3274);
        panda$core$String* $tmp3276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3275, testStart3225);
        panda$core$String* $tmp3278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3276, &$s3277);
        panda$core$String* $tmp3280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3279, nonNullValue3258);
        panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3280, &$s3281);
        panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3282, nonNullLabel3240);
        panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, &$s3284);
        panda$core$String* $tmp3286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3278, $tmp3285);
        (($fn3287) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3286);
        return result3266;
    }
    }
    panda$core$String* $tmp3289 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3288 = $tmp3289;
    panda$core$String* $tmp3291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3290, mallocRef3288);
    panda$core$String* $tmp3293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3291, &$s3292);
    org$pandalanguage$pandac$Type* $tmp3294 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3222);
    panda$core$Int64 $tmp3295 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3294);
    panda$core$String* $tmp3296 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3293, ((panda$core$Object*) wrap_panda$core$Int64($tmp3295)));
    panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3296, &$s3297);
    (($fn3299) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3298);
    org$pandalanguage$pandac$Type* $tmp3301 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3222);
    panda$core$String* $tmp3302 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3301);
    wrapperTypeName3300 = $tmp3302;
    org$pandalanguage$pandac$Type* $tmp3304 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3222);
    panda$core$String* $tmp3305 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3304);
    wrapperType3303 = $tmp3305;
    panda$core$String* $tmp3307 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3306 = $tmp3307;
    panda$core$String* $tmp3309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3308, wrapperCast3306);
    panda$core$String* $tmp3311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3309, &$s3310);
    panda$core$String* $tmp3312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3311, mallocRef3288);
    panda$core$String* $tmp3314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3312, &$s3313);
    panda$core$String* $tmp3315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3314, wrapperType3303);
    panda$core$String* $tmp3317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3315, &$s3316);
    (($fn3318) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3317);
    panda$core$String* $tmp3320 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3319 = $tmp3320;
    panda$core$String* $tmp3322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3321, classPtr3319);
    panda$core$String* $tmp3324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3322, &$s3323);
    panda$core$String* $tmp3325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3324, wrapperTypeName3300);
    panda$core$String* $tmp3327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3325, &$s3326);
    panda$core$String* $tmp3329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3328, wrapperType3303);
    panda$core$String* $tmp3331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3329, &$s3330);
    panda$core$String* $tmp3332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3331, wrapperCast3306);
    panda$core$String* $tmp3334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3332, &$s3333);
    panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3327, $tmp3334);
    (($fn3336) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3335);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3338 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3222);
    cc3337 = $tmp3338;
    panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3339, cc3337->type);
    panda$core$String* $tmp3342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3340, &$s3341);
    panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3342, cc3337->name);
    panda$core$String* $tmp3345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3343, &$s3344);
    panda$core$String* $tmp3347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3346, classPtr3319);
    panda$core$String* $tmp3349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3347, &$s3348);
    panda$core$String* $tmp3350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3345, $tmp3349);
    (($fn3351) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3350);
    panda$core$String* $tmp3353 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3352 = $tmp3353;
    panda$core$String* $tmp3355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3354, refCount3352);
    panda$core$String* $tmp3357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3355, &$s3356);
    panda$core$String* $tmp3358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3357, wrapperTypeName3300);
    panda$core$String* $tmp3360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3358, &$s3359);
    panda$core$String* $tmp3362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3361, wrapperType3303);
    panda$core$String* $tmp3364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3362, &$s3363);
    panda$core$String* $tmp3365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3364, wrapperCast3306);
    panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3365, &$s3366);
    panda$core$String* $tmp3368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3360, $tmp3367);
    (($fn3369) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3368);
    panda$core$String* $tmp3371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3370, refCount3352);
    panda$core$String* $tmp3373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3371, &$s3372);
    (($fn3374) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3373);
    panda$core$String* $tmp3376 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3375 = $tmp3376;
    panda$core$String* $tmp3378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3377, target3375);
    panda$core$String* $tmp3380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3378, &$s3379);
    panda$core$String* $tmp3381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3380, wrapperTypeName3300);
    panda$core$String* $tmp3383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3381, &$s3382);
    panda$core$String* $tmp3385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3384, wrapperType3303);
    panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3385, &$s3386);
    panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3387, wrapperCast3306);
    panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, &$s3389);
    panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3383, $tmp3390);
    (($fn3392) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3391);
    panda$core$String* $tmp3394 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3393, $tmp3394);
    panda$core$String* $tmp3397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3395, &$s3396);
    panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3397, p_value);
    panda$core$String* $tmp3400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3398, &$s3399);
    panda$core$String* $tmp3401 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3400, $tmp3401);
    panda$core$String* $tmp3404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3402, &$s3403);
    panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3404, target3375);
    panda$core$String* $tmp3407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3405, &$s3406);
    (($fn3408) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3407);
    panda$core$String* $tmp3409 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3410 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3303, $tmp3409);
    if ($tmp3410.value) {
    {
        panda$core$String* $tmp3412 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3411 = $tmp3412;
        panda$core$String* $tmp3414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3413, result3411);
        panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3414, &$s3415);
        panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3416, wrapperType3303);
        panda$core$String* $tmp3419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3417, &$s3418);
        panda$core$String* $tmp3420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3419, wrapperCast3306);
        panda$core$String* $tmp3422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3420, &$s3421);
        panda$core$String* $tmp3423 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3422, $tmp3423);
        panda$core$String* $tmp3426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3424, &$s3425);
        (($fn3427) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3426);
        return result3411;
    }
    }
    return wrapperCast3306;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3431;
    panda$core$String* t3432;
    org$pandalanguage$pandac$ClassDecl* cl3436;
    panda$core$String* base3440;
    panda$collections$ListView* fields3443;
    panda$core$Int64$nullable index3445;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3446;
    panda$core$String* result3484;
    panda$core$String* ptr3504;
    panda$core$String* result3513;
    panda$core$Bit $tmp3428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3428.value);
    panda$core$Int64 $tmp3429 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3429, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3430.value);
    field3431 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3433 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3431->type);
    t3432 = $tmp3433;
    panda$core$Bit $tmp3434 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3431->annotations);
    if ($tmp3434.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3431->value != NULL }).value);
        panda$core$String* $tmp3435 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field3431->value, p_out);
        return $tmp3435;
    }
    }
    panda$core$Object* $tmp3437 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3438 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3437)->type);
    cl3436 = $tmp3438;
    PANDA_ASSERT(((panda$core$Bit) { cl3436 != NULL }).value);
    panda$core$Bit $tmp3439 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3436);
    if ($tmp3439.value) {
    {
        panda$core$Object* $tmp3441 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3442 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3441), p_out);
        base3440 = $tmp3442;
        panda$collections$ListView* $tmp3444 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3436);
        fields3443 = $tmp3444;
        index3445 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3447 = ((panda$collections$CollectionView*) fields3443)->$class->itable;
        while ($tmp3447->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3447 = $tmp3447->next;
        }
        $fn3449 $tmp3448 = $tmp3447->methods[0];
        panda$core$Int64 $tmp3450 = $tmp3448(((panda$collections$CollectionView*) fields3443));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3446, ((panda$core$Int64) { 0 }), $tmp3450, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp3452 = $tmp3446.start.value;
        panda$core$Int64 i3451 = { $tmp3452 };
        int64_t $tmp3454 = $tmp3446.end.value;
        int64_t $tmp3455 = $tmp3446.step.value;
        bool $tmp3456 = $tmp3446.inclusive.value;
        bool $tmp3463 = $tmp3455 > 0;
        if ($tmp3463) goto $l3461; else goto $l3462;
        $l3461:;
        if ($tmp3456) goto $l3464; else goto $l3465;
        $l3464:;
        if ($tmp3452 <= $tmp3454) goto $l3457; else goto $l3459;
        $l3465:;
        if ($tmp3452 < $tmp3454) goto $l3457; else goto $l3459;
        $l3462:;
        if ($tmp3456) goto $l3466; else goto $l3467;
        $l3466:;
        if ($tmp3452 >= $tmp3454) goto $l3457; else goto $l3459;
        $l3467:;
        if ($tmp3452 > $tmp3454) goto $l3457; else goto $l3459;
        $l3457:;
        {
            ITable* $tmp3469 = fields3443->$class->itable;
            while ($tmp3469->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3469 = $tmp3469->next;
            }
            $fn3471 $tmp3470 = $tmp3469->methods[0];
            panda$core$Object* $tmp3472 = $tmp3470(fields3443, i3451);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3472)) == ((panda$core$Object*) field3431) }).value) {
            {
                index3445 = ((panda$core$Int64$nullable) { i3451, true });
                goto $l3459;
            }
            }
        }
        $l3460:;
        if ($tmp3463) goto $l3474; else goto $l3475;
        $l3474:;
        int64_t $tmp3476 = $tmp3454 - i3451.value;
        if ($tmp3456) goto $l3477; else goto $l3478;
        $l3477:;
        if ($tmp3476 >= $tmp3455) goto $l3473; else goto $l3459;
        $l3478:;
        if ($tmp3476 > $tmp3455) goto $l3473; else goto $l3459;
        $l3475:;
        int64_t $tmp3480 = i3451.value - $tmp3454;
        if ($tmp3456) goto $l3481; else goto $l3482;
        $l3481:;
        if ($tmp3480 >= -$tmp3455) goto $l3473; else goto $l3459;
        $l3482:;
        if ($tmp3480 > -$tmp3455) goto $l3473; else goto $l3459;
        $l3473:;
        i3451.value += $tmp3455;
        goto $l3457;
        $l3459:;
        PANDA_ASSERT(((panda$core$Bit) { index3445.nonnull }).value);
        panda$core$String* $tmp3485 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3484 = $tmp3485;
        panda$core$String* $tmp3487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3486, result3484);
        panda$core$String* $tmp3489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3487, &$s3488);
        panda$core$Object* $tmp3490 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3491 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3490)->type);
        panda$core$String* $tmp3492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3489, $tmp3491);
        panda$core$String* $tmp3494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3492, &$s3493);
        panda$core$String* $tmp3495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3494, base3440);
        panda$core$String* $tmp3497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3495, &$s3496);
        panda$core$String* $tmp3499 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3498, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3445.value))));
        panda$core$String* $tmp3501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3499, &$s3500);
        panda$core$String* $tmp3502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3497, $tmp3501);
        (($fn3503) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3502);
        return result3484;
    }
    }
    panda$core$String* $tmp3506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3505, t3432);
    panda$core$String* $tmp3508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3506, &$s3507);
    panda$core$String* $tmp3509 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3508, $tmp3509);
    panda$core$String* $tmp3512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3510, &$s3511);
    ptr3504 = $tmp3512;
    panda$core$String* $tmp3514 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3513 = $tmp3514;
    panda$core$String* $tmp3516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3515, result3513);
    panda$core$String* $tmp3518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3516, &$s3517);
    panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3518, t3432);
    panda$core$String* $tmp3521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, &$s3520);
    panda$core$String* $tmp3522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3521, ptr3504);
    panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3522, &$s3523);
    (($fn3525) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3524);
    return result3513;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3526;
    panda$core$String* testStart3529;
    panda$core$String* isNonNull3530;
    panda$core$String* nonNullLabel3544;
    panda$core$String* endLabel3546;
    panda$core$String* wrapped3559;
    panda$core$String* nonNullValue3562;
    panda$core$String* result3570;
    panda$core$String* targetType3599;
    panda$core$String* wrapperTypeName3601;
    panda$core$String* wrapperType3603;
    panda$core$String* srcCast3605;
    panda$core$String* load3622;
    panda$core$String* result3638;
    org$pandalanguage$pandac$ClassDecl* $tmp3527 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3526 = $tmp3527;
    PANDA_ASSERT(((panda$core$Bit) { target3526 != NULL }).value);
    panda$core$Bit $tmp3528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3528.value) {
    {
        testStart3529 = self->currentBlock;
        panda$core$String* $tmp3531 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3530 = $tmp3531;
        panda$core$String* $tmp3533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3532, isNonNull3530);
        panda$core$String* $tmp3535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3533, &$s3534);
        panda$core$String* $tmp3536 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3535, $tmp3536);
        panda$core$String* $tmp3539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3537, &$s3538);
        panda$core$String* $tmp3540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3539, p_value);
        panda$core$String* $tmp3542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3540, &$s3541);
        (($fn3543) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3542);
        panda$core$String* $tmp3545 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3544 = $tmp3545;
        panda$core$String* $tmp3547 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3546 = $tmp3547;
        panda$core$String* $tmp3549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3548, isNonNull3530);
        panda$core$String* $tmp3551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3549, &$s3550);
        panda$core$String* $tmp3552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3551, nonNullLabel3544);
        panda$core$String* $tmp3554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3552, &$s3553);
        panda$core$String* $tmp3555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3554, endLabel3546);
        panda$core$String* $tmp3557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3555, &$s3556);
        (($fn3558) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3557);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3544, p_out);
        panda$core$Object* $tmp3560 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3561 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3560), p_out);
        wrapped3559 = $tmp3561;
        panda$core$Object* $tmp3563 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3564 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped3559, ((org$pandalanguage$pandac$Type*) $tmp3563), p_dstType, p_out);
        nonNullValue3562 = $tmp3564;
        panda$core$String* $tmp3566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3565, endLabel3546);
        panda$core$String* $tmp3568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3566, &$s3567);
        (($fn3569) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3568);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3546, p_out);
        panda$core$String* $tmp3571 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3570 = $tmp3571;
        panda$core$String* $tmp3573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3572, result3570);
        panda$core$String* $tmp3575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3573, &$s3574);
        panda$core$String* $tmp3576 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3575, $tmp3576);
        panda$core$String* $tmp3579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3577, &$s3578);
        panda$core$Object* $tmp3581 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3582 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3581));
        panda$core$String* $tmp3583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3580, $tmp3582);
        panda$core$String* $tmp3585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3583, &$s3584);
        panda$core$String* $tmp3586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3579, $tmp3585);
        panda$core$String* $tmp3588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3587, testStart3529);
        panda$core$String* $tmp3590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3588, &$s3589);
        panda$core$String* $tmp3591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3590, nonNullValue3562);
        panda$core$String* $tmp3593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3591, &$s3592);
        panda$core$String* $tmp3594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3593, nonNullLabel3544);
        panda$core$String* $tmp3596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3594, &$s3595);
        panda$core$String* $tmp3597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3586, $tmp3596);
        (($fn3598) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3597);
        return result3570;
    }
    }
    panda$core$String* $tmp3600 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3599 = $tmp3600;
    panda$core$String* $tmp3602 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3601 = $tmp3602;
    panda$core$String* $tmp3604 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3603 = $tmp3604;
    panda$core$String* $tmp3606 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3605 = $tmp3606;
    panda$core$String* $tmp3608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3607, srcCast3605);
    panda$core$String* $tmp3610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3608, &$s3609);
    panda$core$String* $tmp3611 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3610, $tmp3611);
    panda$core$String* $tmp3614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3612, &$s3613);
    panda$core$String* $tmp3615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3614, p_value);
    panda$core$String* $tmp3617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3615, &$s3616);
    panda$core$String* $tmp3618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3617, wrapperType3603);
    panda$core$String* $tmp3620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3618, &$s3619);
    (($fn3621) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3620);
    panda$core$String* $tmp3623 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3622 = $tmp3623;
    panda$core$String* $tmp3625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3624, load3622);
    panda$core$String* $tmp3627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3625, &$s3626);
    panda$core$String* $tmp3628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3627, wrapperTypeName3601);
    panda$core$String* $tmp3630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3628, &$s3629);
    panda$core$String* $tmp3631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3630, wrapperType3603);
    panda$core$String* $tmp3633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3631, &$s3632);
    panda$core$String* $tmp3634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3633, srcCast3605);
    panda$core$String* $tmp3636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3634, &$s3635);
    (($fn3637) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3636);
    panda$core$String* $tmp3639 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3638 = $tmp3639;
    panda$core$String* $tmp3641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3640, result3638);
    panda$core$String* $tmp3643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3641, &$s3642);
    panda$core$String* $tmp3644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3643, wrapperTypeName3601);
    panda$core$String* $tmp3646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3644, &$s3645);
    panda$core$String* $tmp3647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3646, load3622);
    panda$core$String* $tmp3649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3647, &$s3648);
    panda$core$String* $tmp3650 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3649, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3650, &$s3651);
    (($fn3653) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3652);
    return result3638;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* nullableType3654;
    panda$core$String* result3656;
    panda$core$String* $tmp3655 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3654 = $tmp3655;
    panda$core$String* $tmp3657 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3656 = $tmp3657;
    panda$core$String* $tmp3659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3658, result3656);
    panda$core$String* $tmp3661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3659, &$s3660);
    panda$core$String* $tmp3662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3661, nullableType3654);
    panda$core$String* $tmp3664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3662, &$s3663);
    panda$core$String* $tmp3666 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3665, $tmp3666);
    panda$core$String* $tmp3669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3667, &$s3668);
    panda$core$String* $tmp3670 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3669, $tmp3670);
    panda$core$String* $tmp3673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3671, &$s3672);
    panda$core$String* $tmp3674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3673, p_value);
    panda$core$String* $tmp3676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3674, &$s3675);
    panda$core$String* $tmp3677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3664, $tmp3676);
    (($fn3678) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3677);
    return result3656;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3679;
    panda$core$String* $tmp3680 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3679 = $tmp3680;
    panda$core$String* $tmp3682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3681, result3679);
    panda$core$String* $tmp3684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3682, &$s3683);
    panda$core$String* $tmp3685 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3684, $tmp3685);
    panda$core$String* $tmp3688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3686, &$s3687);
    panda$core$String* $tmp3689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3688, p_value);
    panda$core$String* $tmp3691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3689, &$s3690);
    (($fn3692) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3691);
    return result3679;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op3693;
    panda$core$Int64 size13696;
    panda$core$Int64 size23698;
    org$pandalanguage$pandac$ClassDecl* srcClass3706;
    org$pandalanguage$pandac$ClassDecl* targetClass3708;
    panda$core$String* srcType3747;
    panda$core$String* dstType3749;
    panda$core$String* result3752;
    panda$core$Bit $tmp3694 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3694.value) {
    {
        panda$core$Bit $tmp3695 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3695.value);
        panda$core$Int64 $tmp3697 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13696 = $tmp3697;
        panda$core$Int64 $tmp3699 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23698 = $tmp3699;
        panda$core$Bit $tmp3700 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13696, size23698);
        if ($tmp3700.value) {
        {
            op3693 = &$s3701;
        }
        }
        else {
        panda$core$Bit $tmp3702 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13696, size23698);
        if ($tmp3702.value) {
        {
            panda$core$Bit $tmp3703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3703.value) {
            {
                op3693 = &$s3704;
            }
            }
            else {
            {
                op3693 = &$s3705;
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
        org$pandalanguage$pandac$ClassDecl* $tmp3707 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3706 = $tmp3707;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3706 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3709 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3708 = $tmp3709;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3708 != NULL }).value);
        panda$core$Bit $tmp3711 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3706);
        bool $tmp3710 = $tmp3711.value;
        if (!$tmp3710) goto $l3712;
        panda$core$Bit $tmp3713 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3708);
        panda$core$Bit $tmp3714 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3713);
        $tmp3710 = $tmp3714.value;
        $l3712:;
        panda$core$Bit $tmp3715 = { $tmp3710 };
        if ($tmp3715.value) {
        {
            panda$core$String* $tmp3716 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3716;
        }
        }
        else {
        panda$core$Bit $tmp3718 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3706);
        panda$core$Bit $tmp3719 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3718);
        bool $tmp3717 = $tmp3719.value;
        if (!$tmp3717) goto $l3720;
        panda$core$Bit $tmp3721 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3708);
        $tmp3717 = $tmp3721.value;
        $l3720:;
        panda$core$Bit $tmp3722 = { $tmp3717 };
        if ($tmp3722.value) {
        {
            panda$core$String* $tmp3723 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3723;
        }
        }
        else {
        panda$core$Bit $tmp3726 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3706);
        bool $tmp3725 = $tmp3726.value;
        if (!$tmp3725) goto $l3727;
        panda$core$Bit $tmp3728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3725 = $tmp3728.value;
        $l3727:;
        panda$core$Bit $tmp3729 = { $tmp3725 };
        bool $tmp3724 = $tmp3729.value;
        if (!$tmp3724) goto $l3730;
        panda$core$Object* $tmp3731 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3732 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3731), p_src);
        $tmp3724 = $tmp3732.value;
        $l3730:;
        panda$core$Bit $tmp3733 = { $tmp3724 };
        if ($tmp3733.value) {
        {
            panda$core$String* $tmp3734 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3734;
        }
        }
        else {
        panda$core$Bit $tmp3737 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3708);
        bool $tmp3736 = $tmp3737.value;
        if (!$tmp3736) goto $l3738;
        panda$core$Bit $tmp3739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3736 = $tmp3739.value;
        $l3738:;
        panda$core$Bit $tmp3740 = { $tmp3736 };
        bool $tmp3735 = $tmp3740.value;
        if (!$tmp3735) goto $l3741;
        panda$core$Object* $tmp3742 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3743 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3742), p_target);
        $tmp3735 = $tmp3743.value;
        $l3741:;
        panda$core$Bit $tmp3744 = { $tmp3735 };
        if ($tmp3744.value) {
        {
            panda$core$String* $tmp3745 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3745;
        }
        }
        }
        }
        }
        op3693 = &$s3746;
    }
    }
    panda$core$String* $tmp3748 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3747 = $tmp3748;
    panda$core$String* $tmp3750 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3749 = $tmp3750;
    panda$core$Bit $tmp3751 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3747, dstType3749);
    if ($tmp3751.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3753 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3752 = $tmp3753;
    panda$core$String* $tmp3755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3754, result3752);
    panda$core$String* $tmp3757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3755, &$s3756);
    panda$core$String* $tmp3758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3757, op3693);
    panda$core$String* $tmp3760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3758, &$s3759);
    panda$core$String* $tmp3761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3760, srcType3747);
    panda$core$String* $tmp3763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3761, &$s3762);
    panda$core$String* $tmp3764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3763, p_value);
    panda$core$String* $tmp3766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3764, &$s3765);
    panda$core$String* $tmp3767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3766, dstType3749);
    panda$core$String* $tmp3769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3767, &$s3768);
    (($fn3770) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3769);
    return result3752;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3774;
    panda$core$Bit $tmp3771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3771.value);
    panda$core$Int64 $tmp3772 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3772, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3773.value);
    panda$core$Object* $tmp3775 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3776 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3775), p_out);
    base3774 = $tmp3776;
    panda$core$Object* $tmp3777 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3778 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base3774, ((org$pandalanguage$pandac$IRNode*) $tmp3777)->type, p_cast->type, p_out);
    return $tmp3778;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3782;
    panda$core$String* t3784;
    panda$core$String* value3792;
    panda$core$String* result3803;
    org$pandalanguage$pandac$FieldDecl* lastField3805;
    panda$core$String* value3835;
    panda$core$String* result3846;
    org$pandalanguage$pandac$FieldDecl* lastField3848;
    panda$core$String* alloca3873;
    panda$core$String* result3894;
    panda$core$String* callRef3910;
    panda$core$String* result3921;
    panda$core$String* classPtr3935;
    panda$core$String* className3937;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3963;
    panda$core$Bit $tmp3779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3779.value);
    panda$core$Int64 $tmp3780 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3781 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3780, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3781.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3783 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3782 = $tmp3783;
    PANDA_ASSERT(((panda$core$Bit) { cl3782 != NULL }).value);
    panda$core$String* $tmp3785 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3784 = $tmp3785;
    panda$core$Bit $tmp3786 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3786.value) {
    {
        panda$core$Int64 $tmp3787 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3787, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3788.value);
        panda$core$Object* $tmp3789 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3790 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3789)->children);
        panda$core$Bit $tmp3791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3790, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3791.value);
        panda$core$Object* $tmp3793 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3794 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3793)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3795 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3794), p_out);
        value3792 = $tmp3795;
        panda$core$Object* $tmp3796 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3797 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3796)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3797)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3798.value) {
        {
            panda$core$String* $tmp3800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3799, value3792);
            panda$core$String* $tmp3802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3800, &$s3801);
            return $tmp3802;
        }
        }
        panda$core$String* $tmp3804 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3803 = $tmp3804;
        panda$core$Int64 $tmp3806 = panda$collections$Array$get_count$R$panda$core$Int64(cl3782->fields);
        panda$core$Int64 $tmp3807 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3806, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3808 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3782->fields, $tmp3807);
        lastField3805 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3808);
        panda$core$Bit $tmp3809 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3805->annotations);
        panda$core$Bit $tmp3810 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3809);
        PANDA_ASSERT($tmp3810.value);
        panda$core$String* $tmp3812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3811, result3803);
        panda$core$String* $tmp3814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3812, &$s3813);
        panda$core$String* $tmp3815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3814, t3784);
        panda$core$String* $tmp3817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3815, &$s3816);
        panda$core$String* $tmp3818 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3805->type);
        panda$core$String* $tmp3819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3817, $tmp3818);
        panda$core$String* $tmp3821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3819, &$s3820);
        panda$core$String* $tmp3823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3822, value3792);
        panda$core$String* $tmp3825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3823, &$s3824);
        panda$core$String* $tmp3826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3821, $tmp3825);
        (($fn3827) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3826);
        return result3803;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3828 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3829 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3828);
    if ($tmp3829.value) {
    {
        panda$core$Int64 $tmp3830 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3830, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3831.value);
        panda$core$Object* $tmp3832 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3833 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3832)->children);
        panda$core$Bit $tmp3834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3833, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3834.value);
        panda$core$Object* $tmp3836 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3837 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3836)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3838 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3837), p_out);
        value3835 = $tmp3838;
        panda$core$Object* $tmp3839 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3840 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3839)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3840)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3841.value) {
        {
            panda$core$String* $tmp3843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3842, value3835);
            panda$core$String* $tmp3845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3843, &$s3844);
            return $tmp3845;
        }
        }
        panda$core$String* $tmp3847 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3846 = $tmp3847;
        panda$core$Int64 $tmp3849 = panda$collections$Array$get_count$R$panda$core$Int64(cl3782->fields);
        panda$core$Int64 $tmp3850 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3849, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3851 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3782->fields, $tmp3850);
        lastField3848 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3851);
        panda$core$Bit $tmp3852 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3848->annotations);
        panda$core$Bit $tmp3853 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3852);
        PANDA_ASSERT($tmp3853.value);
        panda$core$String* $tmp3855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3854, result3846);
        panda$core$String* $tmp3857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3855, &$s3856);
        panda$core$String* $tmp3858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3857, t3784);
        panda$core$String* $tmp3860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3858, &$s3859);
        panda$core$String* $tmp3861 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3848->type);
        panda$core$String* $tmp3862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3860, $tmp3861);
        panda$core$String* $tmp3864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3862, &$s3863);
        panda$core$String* $tmp3866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3865, value3835);
        panda$core$String* $tmp3868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3866, &$s3867);
        panda$core$String* $tmp3869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3864, $tmp3868);
        (($fn3870) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3869);
        return result3846;
    }
    }
    panda$core$Bit $tmp3871 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3782);
    if ($tmp3871.value) {
    {
        panda$core$Int64 $tmp3872 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3872;
        panda$core$String* $tmp3875 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3874, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3875, &$s3876);
        alloca3873 = $tmp3877;
        panda$core$String* $tmp3879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3878, alloca3873);
        panda$core$String* $tmp3881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3879, &$s3880);
        panda$core$String* $tmp3882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3881, t3784);
        panda$core$String* $tmp3884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3882, &$s3883);
        (($fn3885) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3884);
        panda$core$Object* $tmp3886 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3887, t3784);
        panda$core$String* $tmp3890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3888, &$s3889);
        panda$core$String* $tmp3891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3890, alloca3873);
        panda$core$String* $tmp3893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3891, &$s3892);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3886), $tmp3893, p_out);
        panda$core$String* $tmp3895 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3894 = $tmp3895;
        panda$core$String* $tmp3897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3896, result3894);
        panda$core$String* $tmp3899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3897, &$s3898);
        panda$core$String* $tmp3900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3899, t3784);
        panda$core$String* $tmp3902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3900, &$s3901);
        panda$core$String* $tmp3903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3902, t3784);
        panda$core$String* $tmp3905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3903, &$s3904);
        panda$core$String* $tmp3906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3905, alloca3873);
        panda$core$String* $tmp3908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3906, &$s3907);
        (($fn3909) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3908);
        return result3894;
    }
    }
    panda$core$String* $tmp3911 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3910 = $tmp3911;
    panda$core$String* $tmp3913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3912, callRef3910);
    panda$core$String* $tmp3915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3913, &$s3914);
    panda$core$Int64 $tmp3916 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3917 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3915, ((panda$core$Object*) wrap_panda$core$Int64($tmp3916)));
    panda$core$String* $tmp3919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3917, &$s3918);
    (($fn3920) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3919);
    panda$core$String* $tmp3922 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3921 = $tmp3922;
    panda$core$String* $tmp3924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3923, result3921);
    panda$core$String* $tmp3926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3924, &$s3925);
    panda$core$String* $tmp3927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3926, callRef3910);
    panda$core$String* $tmp3929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3927, &$s3928);
    panda$core$String* $tmp3930 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3929, $tmp3930);
    panda$core$String* $tmp3933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3931, &$s3932);
    (($fn3934) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3933);
    panda$core$String* $tmp3936 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3935 = $tmp3936;
    panda$core$Bit $tmp3939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3938 = $tmp3939.value;
    if (!$tmp3938) goto $l3940;
    panda$core$Bit $tmp3941 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3782);
    panda$core$Bit $tmp3942 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3941);
    $tmp3938 = $tmp3942.value;
    $l3940:;
    panda$core$Bit $tmp3943 = { $tmp3938 };
    if ($tmp3943.value) {
    {
        panda$core$Object* $tmp3944 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3945 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3944));
        className3937 = $tmp3945;
    }
    }
    else {
    {
        panda$core$String* $tmp3946 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3937 = $tmp3946;
    }
    }
    panda$core$String* $tmp3948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3947, classPtr3935);
    panda$core$String* $tmp3950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3948, &$s3949);
    panda$core$String* $tmp3951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3950, className3937);
    panda$core$String* $tmp3953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3951, &$s3952);
    panda$core$String* $tmp3954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3953, t3784);
    panda$core$String* $tmp3956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3954, &$s3955);
    panda$core$String* $tmp3957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3956, result3921);
    panda$core$String* $tmp3959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3957, &$s3958);
    panda$core$String* $tmp3961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3959, &$s3960);
    (($fn3962) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3961);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3964 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3782);
    cc3963 = $tmp3964;
    panda$core$String* $tmp3966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3965, cc3963->type);
    panda$core$String* $tmp3968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3966, &$s3967);
    panda$core$String* $tmp3969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3968, cc3963->name);
    panda$core$String* $tmp3971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3969, &$s3970);
    panda$core$String* $tmp3973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3972, classPtr3935);
    panda$core$String* $tmp3975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3973, &$s3974);
    panda$core$String* $tmp3976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3971, $tmp3975);
    (($fn3977) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3976);
    panda$core$Object* $tmp3978 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3979, t3784);
    panda$core$String* $tmp3982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3980, &$s3981);
    panda$core$String* $tmp3983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3982, result3921);
    panda$core$String* $tmp3985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3983, &$s3984);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3978), $tmp3985, p_out);
    return result3921;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3986 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp3986;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3988 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3987, $tmp3988);
    return $tmp3989;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3990;
    }
    }
    return &$s3991;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3994;
    panda$core$String* t3996;
    panda$core$Bit $tmp3992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3992.value) {
    {
        panda$core$String* $tmp3993 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3993;
    }
    }
    panda$core$String* $tmp3995 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3994 = $tmp3995;
    panda$core$String* $tmp3997 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3996 = $tmp3997;
    panda$core$String* $tmp3999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3998, result3994);
    panda$core$String* $tmp4001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3999, &$s4000);
    panda$core$String* $tmp4002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4001, t3996);
    panda$core$String* $tmp4004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4002, &$s4003);
    panda$core$String* $tmp4005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4004, t3996);
    panda$core$String* $tmp4007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4005, &$s4006);
    panda$core$String* $tmp4008 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp4009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4007, $tmp4008);
    panda$core$String* $tmp4011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4009, &$s4010);
    (($fn4012) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4011);
    return result3994;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* chars4014;
    panda$core$String* charsType4019;
    panda$core$String* separator4037;
    panda$collections$Iterator* c$Iter4039;
    panda$core$Char8 c4052;
    panda$core$String* result4070;
    org$pandalanguage$pandac$ClassDecl* string4075;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc4078;
    panda$core$Int64 $tmp4013 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4013;
    panda$core$String* $tmp4016 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4015, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4016, &$s4017);
    chars4014 = $tmp4018;
    panda$collections$ListView* $tmp4021 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4022 = ((panda$collections$CollectionView*) $tmp4021)->$class->itable;
    while ($tmp4022->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4022 = $tmp4022->next;
    }
    $fn4024 $tmp4023 = $tmp4022->methods[0];
    panda$core$Int64 $tmp4025 = $tmp4023(((panda$collections$CollectionView*) $tmp4021));
    panda$core$String* $tmp4026 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4020, ((panda$core$Object*) wrap_panda$core$Int64($tmp4025)));
    panda$core$String* $tmp4028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4026, &$s4027);
    charsType4019 = $tmp4028;
    panda$core$String* $tmp4030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4029, chars4014);
    panda$core$String* $tmp4032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4030, &$s4031);
    panda$core$String* $tmp4033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4032, charsType4019);
    panda$core$String* $tmp4035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4033, &$s4034);
    (($fn4036) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4035);
    separator4037 = &$s4038;
    {
        panda$collections$ListView* $tmp4040 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp4041 = ((panda$collections$Iterable*) $tmp4040)->$class->itable;
        while ($tmp4041->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4041 = $tmp4041->next;
        }
        $fn4043 $tmp4042 = $tmp4041->methods[0];
        panda$collections$Iterator* $tmp4044 = $tmp4042(((panda$collections$Iterable*) $tmp4040));
        c$Iter4039 = $tmp4044;
        $l4045:;
        ITable* $tmp4047 = c$Iter4039->$class->itable;
        while ($tmp4047->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4047 = $tmp4047->next;
        }
        $fn4049 $tmp4048 = $tmp4047->methods[0];
        panda$core$Bit $tmp4050 = $tmp4048(c$Iter4039);
        panda$core$Bit $tmp4051 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4050);
        if (!$tmp4051.value) goto $l4046;
        {
            ITable* $tmp4053 = c$Iter4039->$class->itable;
            while ($tmp4053->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4053 = $tmp4053->next;
            }
            $fn4055 $tmp4054 = $tmp4053->methods[1];
            panda$core$Object* $tmp4056 = $tmp4054(c$Iter4039);
            c4052 = ((panda$core$Char8$wrapper*) $tmp4056)->value;
            panda$core$String* $tmp4058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4057, separator4037);
            panda$core$String* $tmp4060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4058, &$s4059);
            panda$core$Int8 $tmp4061 = panda$core$Char8$convert$R$panda$core$Int8(c4052);
            panda$core$String* $tmp4062 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4060, ((panda$core$Object*) wrap_panda$core$Int8($tmp4061)));
            panda$core$String* $tmp4064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4062, &$s4063);
            (($fn4065) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4064);
            separator4037 = &$s4066;
        }
        goto $l4045;
        $l4046:;
    }
    (($fn4068) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s4067);
    panda$core$Int64 $tmp4069 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4069;
    panda$core$String* $tmp4072 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4071, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4072, &$s4073);
    result4070 = $tmp4074;
    org$pandalanguage$pandac$Type* $tmp4076 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4077 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp4076);
    string4075 = $tmp4077;
    PANDA_ASSERT(((panda$core$Bit) { string4075 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp4079 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string4075);
    cc4078 = $tmp4079;
    panda$core$String* $tmp4081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4080, result4070);
    panda$core$String* $tmp4083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4081, &$s4082);
    panda$core$String* $tmp4085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4084, cc4078->type);
    panda$core$String* $tmp4087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4085, &$s4086);
    panda$core$String* $tmp4088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4087, cc4078->name);
    panda$core$String* $tmp4090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4088, &$s4089);
    panda$core$String* $tmp4091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4083, $tmp4090);
    panda$core$String* $tmp4093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4091, &$s4092);
    panda$core$String* $tmp4095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4094, charsType4019);
    panda$core$String* $tmp4097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4095, &$s4096);
    panda$core$String* $tmp4098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4097, chars4014);
    panda$core$String* $tmp4100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4098, &$s4099);
    panda$core$String* $tmp4101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4093, $tmp4100);
    panda$collections$ListView* $tmp4103 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4104 = ((panda$collections$CollectionView*) $tmp4103)->$class->itable;
    while ($tmp4104->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4104 = $tmp4104->next;
    }
    $fn4106 $tmp4105 = $tmp4104->methods[0];
    panda$core$Int64 $tmp4107 = $tmp4105(((panda$collections$CollectionView*) $tmp4103));
    panda$core$String* $tmp4108 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4102, ((panda$core$Object*) wrap_panda$core$Int64($tmp4107)));
    panda$core$String* $tmp4110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4108, &$s4109);
    panda$core$String* $tmp4111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4101, $tmp4110);
    panda$core$String* $tmp4113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4111, &$s4112);
    (($fn4114) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp4113);
    return result4070;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp4115 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp4116 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4115, ((panda$core$Int64) { 0 }));
    if ($tmp4116.value) {
    {
        panda$core$Object* $tmp4117 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp4117)->selfRef;
    }
    }
    return &$s4118;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result4119;
    panda$core$String* $tmp4120 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4119 = $tmp4120;
    panda$core$String* $tmp4122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4121, result4119);
    panda$core$String* $tmp4124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4122, &$s4123);
    org$pandalanguage$pandac$Type* $tmp4125 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
    panda$core$String* $tmp4126 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp4125);
    panda$core$String* $tmp4127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4124, $tmp4126);
    panda$core$String* $tmp4129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4127, &$s4128);
    panda$core$String* $tmp4130 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp4131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4129, $tmp4130);
    (($fn4132) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4131);
    return result4119;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4136;
    org$pandalanguage$pandac$ClassDecl* cl4139;
    panda$core$String* resultValue4142;
    panda$core$String* field4147;
    panda$core$String* result4175;
    panda$core$Bit $tmp4133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp4133.value);
    panda$core$Int64 $tmp4134 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4134, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4135.value);
    panda$core$Object* $tmp4137 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4138 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4137), p_out);
    value4136 = $tmp4138;
    panda$core$Object* $tmp4140 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4141 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4140)->type);
    cl4139 = $tmp4141;
    panda$core$Bit $tmp4143 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4139);
    if ($tmp4143.value) {
    {
        panda$core$Object* $tmp4144 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4145 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4144)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4145.value) {
        {
            return &$s4146;
        }
        }
        panda$core$String* $tmp4148 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field4147 = $tmp4148;
        panda$core$String* $tmp4150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4149, field4147);
        panda$core$String* $tmp4152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4150, &$s4151);
        panda$core$String* $tmp4153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4152, value4136);
        panda$core$String* $tmp4155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4153, &$s4154);
        (($fn4156) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4155);
        panda$core$String* $tmp4157 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4142 = $tmp4157;
        panda$core$String* $tmp4159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4158, resultValue4142);
        panda$core$String* $tmp4161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4159, &$s4160);
        panda$core$String* $tmp4162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4161, field4147);
        panda$core$String* $tmp4164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4162, &$s4163);
        (($fn4165) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4164);
    }
    }
    else {
    {
        panda$core$String* $tmp4166 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4142 = $tmp4166;
        panda$core$String* $tmp4168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4167, resultValue4142);
        panda$core$String* $tmp4170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4168, &$s4169);
        panda$core$String* $tmp4171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4170, value4136);
        panda$core$String* $tmp4173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4171, &$s4172);
        (($fn4174) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4173);
    }
    }
    panda$core$String* $tmp4176 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4175 = $tmp4176;
    panda$core$String* $tmp4178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4177, result4175);
    panda$core$String* $tmp4180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4178, &$s4179);
    panda$core$String* $tmp4181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4180, resultValue4142);
    panda$core$String* $tmp4183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4181, &$s4182);
    (($fn4184) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4183);
    return result4175;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4188;
    org$pandalanguage$pandac$ClassDecl* cl4191;
    panda$core$String* resultValue4194;
    panda$core$String* result4217;
    panda$core$Bit $tmp4185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp4185.value);
    panda$core$Int64 $tmp4186 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4186, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4187.value);
    panda$core$Object* $tmp4189 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4190 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4189), p_out);
    value4188 = $tmp4190;
    panda$core$Object* $tmp4192 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4193 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4192)->type);
    cl4191 = $tmp4193;
    panda$core$Bit $tmp4195 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4191);
    if ($tmp4195.value) {
    {
        panda$core$Object* $tmp4196 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4197 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4196)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4197.value) {
        {
            return &$s4198;
        }
        }
        panda$core$String* $tmp4199 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4194 = $tmp4199;
        panda$core$String* $tmp4201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4200, resultValue4194);
        panda$core$String* $tmp4203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4201, &$s4202);
        panda$core$String* $tmp4204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4203, value4188);
        panda$core$String* $tmp4206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4204, &$s4205);
        (($fn4207) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4206);
    }
    }
    else {
    {
        panda$core$String* $tmp4208 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4194 = $tmp4208;
        panda$core$String* $tmp4210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4209, resultValue4194);
        panda$core$String* $tmp4212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4210, &$s4211);
        panda$core$String* $tmp4213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4212, value4188);
        panda$core$String* $tmp4215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4213, &$s4214);
        (($fn4216) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4215);
    }
    }
    panda$core$String* $tmp4218 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4217 = $tmp4218;
    panda$core$String* $tmp4220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4219, result4217);
    panda$core$String* $tmp4222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4220, &$s4221);
    panda$core$String* $tmp4223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4222, resultValue4194);
    panda$core$String* $tmp4225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4223, &$s4224);
    (($fn4226) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4225);
    return result4217;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4228;
    panda$core$Bit $tmp4227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp4227.value);
    panda$core$Object* $tmp4229 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4230 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4229));
    cl4228 = $tmp4230;
    PANDA_ASSERT(((panda$core$Bit) { cl4228 != NULL }).value);
    panda$core$Bit $tmp4231 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4228);
    if ($tmp4231.value) {
    {
        panda$core$Object* $tmp4233 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4234 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4233));
        panda$core$String* $tmp4235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4232, $tmp4234);
        panda$core$String* $tmp4237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4235, &$s4236);
        return $tmp4237;
    }
    }
    else {
    {
        return &$s4238;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base4242;
    panda$core$String* result4245;
    panda$core$Bit $tmp4239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp4239.value);
    panda$core$Int64 $tmp4240 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp4241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4240, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4241.value);
    panda$core$Object* $tmp4243 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4244 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4243), p_out);
    base4242 = $tmp4244;
    panda$core$String* $tmp4246 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4245 = $tmp4246;
    panda$core$Int64 $tmp4247 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp4247.value) {
        case 52:
        {
            panda$core$String* $tmp4249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4248, result4245);
            panda$core$String* $tmp4251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4249, &$s4250);
            panda$core$String* $tmp4252 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4251, $tmp4252);
            panda$core$String* $tmp4255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4253, &$s4254);
            panda$core$String* $tmp4256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4255, base4242);
            panda$core$String* $tmp4258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4256, &$s4257);
            (($fn4259) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4258);
            return result4245;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp4261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4260, result4245);
            panda$core$String* $tmp4263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4261, &$s4262);
            panda$core$String* $tmp4264 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4263, $tmp4264);
            panda$core$String* $tmp4267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4265, &$s4266);
            panda$core$String* $tmp4268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4267, base4242);
            panda$core$String* $tmp4270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4268, &$s4269);
            (($fn4271) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4270);
            return result4245;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4284;
    panda$core$String* result4287;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp4272 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4272;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4273 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4273;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4274 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4274;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4275 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4275;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4276 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4276;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4277 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4277;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4278 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4278;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4279 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4279;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4280 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4280;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4281 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4281;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4282 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4282;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4283 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4283;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4285 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4286 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4285), p_out);
            value4284 = $tmp4286;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4284));
            return value4284;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4288 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4287 = ((panda$core$String*) $tmp4288);
            PANDA_ASSERT(((panda$core$Bit) { result4287 != NULL }).value);
            return result4287;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4289 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4289;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4290 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4290;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4291 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4291;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4292 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4292;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4294 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4293, $tmp4294);
    panda$core$String* $tmp4297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4295, &$s4296);
    panda$core$String* $tmp4298 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4297, $tmp4298);
    panda$core$String* $tmp4301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4299, &$s4300);
    return $tmp4301;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter4304;
    org$pandalanguage$pandac$IRNode* s4316;
    panda$core$Bit $tmp4302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4302.value);
    panda$core$Int64 $tmp4303 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4303;
    {
        ITable* $tmp4305 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4305->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4305 = $tmp4305->next;
        }
        $fn4307 $tmp4306 = $tmp4305->methods[0];
        panda$collections$Iterator* $tmp4308 = $tmp4306(((panda$collections$Iterable*) p_block->children));
        s$Iter4304 = $tmp4308;
        $l4309:;
        ITable* $tmp4311 = s$Iter4304->$class->itable;
        while ($tmp4311->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4311 = $tmp4311->next;
        }
        $fn4313 $tmp4312 = $tmp4311->methods[0];
        panda$core$Bit $tmp4314 = $tmp4312(s$Iter4304);
        panda$core$Bit $tmp4315 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4314);
        if (!$tmp4315.value) goto $l4310;
        {
            ITable* $tmp4317 = s$Iter4304->$class->itable;
            while ($tmp4317->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4317 = $tmp4317->next;
            }
            $fn4319 $tmp4318 = $tmp4317->methods[1];
            panda$core$Object* $tmp4320 = $tmp4318(s$Iter4304);
            s4316 = ((org$pandalanguage$pandac$IRNode*) $tmp4320);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s4316, p_out);
        }
        goto $l4309;
        $l4310:;
    }
    panda$core$Int64 $tmp4321 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4321;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4322;
    panda$core$String* $match$767064323;
    panda$core$String* ptr4328;
    panda$core$String* arg4331;
    org$pandalanguage$pandac$Type* baseType4351;
    panda$core$String* base4355;
    panda$core$String* indexStruct4358;
    panda$core$String* index4361;
    panda$core$String* value4371;
    panda$core$String* ptr4375;
    panda$core$String* ptr4414;
    panda$core$String* cast4417;
    m4322 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$767064323 = ((org$pandalanguage$pandac$Symbol*) m4322->value)->name;
        panda$core$Bit $tmp4325 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$767064323, &$s4324);
        if ($tmp4325.value) {
        {
            panda$core$Int64 $tmp4326 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4326, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4327.value);
            panda$core$Object* $tmp4329 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4330 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4329), p_out);
            ptr4328 = $tmp4330;
            panda$core$Object* $tmp4332 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4333 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4332));
            panda$core$String* $tmp4334 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4333, p_out);
            arg4331 = $tmp4334;
            panda$core$String* $tmp4336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4335, arg4331);
            panda$core$String* $tmp4338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4336, &$s4337);
            panda$core$String* $tmp4339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4338, ptr4328);
            panda$core$String* $tmp4341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4339, &$s4340);
            (($fn4342) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4341);
        }
        }
        else {
        panda$core$Bit $tmp4344 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$767064323, &$s4343);
        if ($tmp4344.value) {
        {
            panda$core$Int64 $tmp4345 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4345, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4346.value);
            panda$core$Object* $tmp4347 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4348 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4347));
            panda$core$Int64 $tmp4349 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64($tmp4348->type->subtypes);
            panda$core$Bit $tmp4350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4349, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4350.value);
            panda$core$Object* $tmp4352 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4353 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4352));
            panda$core$Object* $tmp4354 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp4353->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4351 = ((org$pandalanguage$pandac$Type*) $tmp4354);
            panda$core$Object* $tmp4356 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4357 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4356), p_out);
            base4355 = $tmp4357;
            panda$core$Object* $tmp4359 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4360 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4359), p_out);
            indexStruct4358 = $tmp4360;
            panda$core$String* $tmp4362 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4361 = $tmp4362;
            panda$core$String* $tmp4364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4363, index4361);
            panda$core$String* $tmp4366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4364, &$s4365);
            panda$core$String* $tmp4367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4366, indexStruct4358);
            panda$core$String* $tmp4369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4367, &$s4368);
            (($fn4370) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4369);
            panda$core$Object* $tmp4372 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4373 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4372));
            panda$core$String* $tmp4374 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4373, p_out);
            value4371 = $tmp4374;
            panda$core$String* $tmp4376 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4375 = $tmp4376;
            panda$core$String* $tmp4378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4377, ptr4375);
            panda$core$String* $tmp4380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4378, &$s4379);
            panda$core$String* $tmp4381 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4351);
            panda$core$String* $tmp4382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4380, $tmp4381);
            panda$core$String* $tmp4384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4382, &$s4383);
            panda$core$String* $tmp4385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4384, base4355);
            panda$core$String* $tmp4387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4385, &$s4386);
            panda$core$String* $tmp4390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4388, &$s4389);
            panda$core$String* $tmp4392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4390, &$s4391);
            panda$core$String* $tmp4393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4392, index4361);
            panda$core$String* $tmp4395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4393, &$s4394);
            panda$core$String* $tmp4396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4387, $tmp4395);
            (($fn4397) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4396);
            panda$core$String* $tmp4399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4398, value4371);
            panda$core$String* $tmp4401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4399, &$s4400);
            panda$core$String* $tmp4402 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4351);
            panda$core$String* $tmp4403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4401, $tmp4402);
            panda$core$String* $tmp4405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4403, &$s4404);
            panda$core$String* $tmp4406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4405, ptr4375);
            panda$core$String* $tmp4408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4406, &$s4407);
            (($fn4409) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4408);
        }
        }
        else {
        panda$core$Bit $tmp4411 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$767064323, &$s4410);
        if ($tmp4411.value) {
        {
            panda$core$Int64 $tmp4412 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4412, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4413.value);
            panda$core$Object* $tmp4415 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4416 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4415), p_out);
            ptr4414 = $tmp4416;
            panda$core$String* $tmp4418 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4417 = $tmp4418;
            panda$core$String* $tmp4420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4419, cast4417);
            panda$core$String* $tmp4422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4420, &$s4421);
            panda$core$String* $tmp4423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4422, ptr4414);
            panda$core$String* $tmp4425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4423, &$s4424);
            (($fn4426) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4425);
            panda$core$String* $tmp4428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4427, cast4417);
            panda$core$String* $tmp4430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4428, &$s4429);
            (($fn4431) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4430);
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
    org$pandalanguage$pandac$MethodDecl* m4433;
    org$pandalanguage$pandac$Type* actualMethodType4436;
    panda$core$String* actualResultType4437;
    panda$core$Bit isSuper4438;
    panda$collections$Array* args4458;
    panda$core$Int64 offset4461;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4466;
    panda$core$String* arg4486;
    panda$core$String* refTarget4523;
    panda$core$String* methodRef4527;
    panda$core$String* separator4529;
    panda$core$String* indirectVar4533;
    panda$core$String* resultType4536;
    panda$collections$Iterator* a$Iter4581;
    panda$core$String* a4593;
    panda$core$Bit $tmp4432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4432.value);
    m4433 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4435 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4433->owner)->name, &$s4434);
    if ($tmp4435.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4433->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4433);
    }
    }
    panda$core$Int64 $tmp4440 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4441 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4440, ((panda$core$Int64) { 1 }));
    bool $tmp4439 = $tmp4441.value;
    if (!$tmp4439) goto $l4442;
    panda$core$Object* $tmp4443 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4443)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4439 = $tmp4444.value;
    $l4442:;
    panda$core$Bit $tmp4445 = { $tmp4439 };
    isSuper4438 = $tmp4445;
    panda$core$Bit $tmp4447 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4438);
    bool $tmp4446 = $tmp4447.value;
    if (!$tmp4446) goto $l4448;
    panda$core$Bit $tmp4449 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4433);
    $tmp4446 = $tmp4449.value;
    $l4448:;
    panda$core$Bit $tmp4450 = { $tmp4446 };
    if ($tmp4450.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4451 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4433);
        actualMethodType4436 = $tmp4451;
        panda$core$Int64 $tmp4452 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType4436->subtypes);
        panda$core$Int64 $tmp4453 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4452, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4454 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4436->subtypes, $tmp4453);
        panda$core$String* $tmp4455 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4454));
        actualResultType4437 = $tmp4455;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4456 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4433);
        actualMethodType4436 = $tmp4456;
        panda$core$String* $tmp4457 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4437 = $tmp4457;
    }
    }
    panda$collections$Array* $tmp4459 = (panda$collections$Array*) malloc(40);
    $tmp4459->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4459->refCount.value = 1;
    panda$collections$Array$init($tmp4459);
    args4458 = $tmp4459;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4458, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4462 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4463 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType4436->subtypes);
    panda$core$Int64 $tmp4464 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4462, $tmp4463);
    panda$core$Int64 $tmp4465 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4464, ((panda$core$Int64) { 1 }));
    offset4461 = $tmp4465;
    panda$core$Int64 $tmp4467 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4466, ((panda$core$Int64) { 0 }), $tmp4467, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4469 = $tmp4466.start.value;
    panda$core$Int64 i4468 = { $tmp4469 };
    int64_t $tmp4471 = $tmp4466.end.value;
    int64_t $tmp4472 = $tmp4466.step.value;
    bool $tmp4473 = $tmp4466.inclusive.value;
    bool $tmp4480 = $tmp4472 > 0;
    if ($tmp4480) goto $l4478; else goto $l4479;
    $l4478:;
    if ($tmp4473) goto $l4481; else goto $l4482;
    $l4481:;
    if ($tmp4469 <= $tmp4471) goto $l4474; else goto $l4476;
    $l4482:;
    if ($tmp4469 < $tmp4471) goto $l4474; else goto $l4476;
    $l4479:;
    if ($tmp4473) goto $l4483; else goto $l4484;
    $l4483:;
    if ($tmp4469 >= $tmp4471) goto $l4474; else goto $l4476;
    $l4484:;
    if ($tmp4469 > $tmp4471) goto $l4474; else goto $l4476;
    $l4474:;
    {
        panda$core$Object* $tmp4487 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4468);
        panda$core$String* $tmp4488 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4487), p_out);
        arg4486 = $tmp4488;
        panda$core$Bit $tmp4490 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4468, offset4461);
        bool $tmp4489 = $tmp4490.value;
        if (!$tmp4489) goto $l4491;
        panda$core$Int64 $tmp4492 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4468, offset4461);
        panda$core$Object* $tmp4493 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4436->subtypes, $tmp4492);
        panda$core$Object* $tmp4494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4468);
        panda$core$Bit $tmp4495 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4493), ((org$pandalanguage$pandac$IRNode*) $tmp4494)->type);
        $tmp4489 = $tmp4495.value;
        $l4491:;
        panda$core$Bit $tmp4496 = { $tmp4489 };
        if ($tmp4496.value) {
        {
            panda$core$Int64 $tmp4497 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4468, offset4461);
            panda$core$Object* $tmp4498 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4436->subtypes, $tmp4497);
            panda$core$String* $tmp4499 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4498));
            panda$core$String* $tmp4501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4499, &$s4500);
            panda$core$Object* $tmp4502 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4468);
            panda$core$Int64 $tmp4503 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4468, offset4461);
            panda$core$Object* $tmp4504 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4436->subtypes, $tmp4503);
            panda$core$String* $tmp4505 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg4486, ((org$pandalanguage$pandac$IRNode*) $tmp4502)->type, ((org$pandalanguage$pandac$Type*) $tmp4504), p_out);
            panda$core$String* $tmp4506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4501, $tmp4505);
            arg4486 = $tmp4506;
        }
        }
        else {
        {
            panda$core$Object* $tmp4507 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4468);
            panda$core$String* $tmp4508 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4507)->type);
            panda$core$String* $tmp4510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4508, &$s4509);
            panda$core$String* $tmp4511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4510, arg4486);
            arg4486 = $tmp4511;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4458, ((panda$core$Object*) arg4486));
    }
    $l4477:;
    if ($tmp4480) goto $l4513; else goto $l4514;
    $l4513:;
    int64_t $tmp4515 = $tmp4471 - i4468.value;
    if ($tmp4473) goto $l4516; else goto $l4517;
    $l4516:;
    if ($tmp4515 >= $tmp4472) goto $l4512; else goto $l4476;
    $l4517:;
    if ($tmp4515 > $tmp4472) goto $l4512; else goto $l4476;
    $l4514:;
    int64_t $tmp4519 = i4468.value - $tmp4471;
    if ($tmp4473) goto $l4520; else goto $l4521;
    $l4520:;
    if ($tmp4519 >= -$tmp4472) goto $l4512; else goto $l4476;
    $l4521:;
    if ($tmp4519 > -$tmp4472) goto $l4512; else goto $l4476;
    $l4512:;
    i4468.value += $tmp4472;
    goto $l4474;
    $l4476:;
    panda$core$Int64 $tmp4524 = panda$collections$Array$get_count$R$panda$core$Int64(args4458);
    panda$core$Bit $tmp4525 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4524, ((panda$core$Int64) { 0 }));
    if ($tmp4525.value) {
    {
        panda$core$Object* $tmp4526 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4458, ((panda$core$Int64) { 0 }));
        refTarget4523 = ((panda$core$String*) $tmp4526);
    }
    }
    else {
    {
        refTarget4523 = NULL;
    }
    }
    panda$core$String* $tmp4528 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget4523, m4433, isSuper4438, p_out);
    methodRef4527 = $tmp4528;
    separator4529 = &$s4530;
    panda$core$Bit $tmp4531 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4433);
    if ($tmp4531.value) {
    {
        panda$core$Int64 $tmp4532 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4532;
        panda$core$String* $tmp4535 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4534, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4533 = $tmp4535;
        panda$core$String* $tmp4537 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4536 = $tmp4537;
        panda$core$String* $tmp4539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4538, indirectVar4533);
        panda$core$String* $tmp4541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4539, &$s4540);
        panda$core$String* $tmp4542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4541, resultType4536);
        panda$core$String* $tmp4544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4542, &$s4543);
        (($fn4545) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4544);
        panda$core$String* $tmp4547 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4433);
        panda$core$String* $tmp4548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4546, $tmp4547);
        panda$core$String* $tmp4550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4548, &$s4549);
        panda$core$String* $tmp4552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4551, methodRef4527);
        panda$core$String* $tmp4554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4552, &$s4553);
        panda$core$String* $tmp4555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4554, resultType4536);
        panda$core$String* $tmp4557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4555, &$s4556);
        panda$core$String* $tmp4558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4557, indirectVar4533);
        panda$core$String* $tmp4560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4558, &$s4559);
        panda$core$String* $tmp4561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4550, $tmp4560);
        (($fn4562) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4561);
        separator4529 = &$s4563;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4564 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4565 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4564);
        if ($tmp4565.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4567 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4433);
        panda$core$String* $tmp4568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4566, $tmp4567);
        panda$core$String* $tmp4570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4568, &$s4569);
        panda$core$String* $tmp4571 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4570, $tmp4571);
        panda$core$String* $tmp4574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4572, &$s4573);
        panda$core$String* $tmp4576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4575, methodRef4527);
        panda$core$String* $tmp4578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4576, &$s4577);
        panda$core$String* $tmp4579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4574, $tmp4578);
        (($fn4580) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4579);
    }
    }
    {
        ITable* $tmp4582 = ((panda$collections$Iterable*) args4458)->$class->itable;
        while ($tmp4582->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4582 = $tmp4582->next;
        }
        $fn4584 $tmp4583 = $tmp4582->methods[0];
        panda$collections$Iterator* $tmp4585 = $tmp4583(((panda$collections$Iterable*) args4458));
        a$Iter4581 = $tmp4585;
        $l4586:;
        ITable* $tmp4588 = a$Iter4581->$class->itable;
        while ($tmp4588->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4588 = $tmp4588->next;
        }
        $fn4590 $tmp4589 = $tmp4588->methods[0];
        panda$core$Bit $tmp4591 = $tmp4589(a$Iter4581);
        panda$core$Bit $tmp4592 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4591);
        if (!$tmp4592.value) goto $l4587;
        {
            ITable* $tmp4594 = a$Iter4581->$class->itable;
            while ($tmp4594->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4594 = $tmp4594->next;
            }
            $fn4596 $tmp4595 = $tmp4594->methods[1];
            panda$core$Object* $tmp4597 = $tmp4595(a$Iter4581);
            a4593 = ((panda$core$String*) $tmp4597);
            (($fn4598) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator4529);
            (($fn4599) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a4593);
            separator4529 = &$s4600;
        }
        goto $l4586;
        $l4587:;
    }
    (($fn4602) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4601);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test4614;
    panda$core$String* testBit4617;
    panda$core$String* ifTrue4627;
    panda$core$String* ifFalse4629;
    panda$core$String* end4643;
    panda$core$Bit $tmp4603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4603.value);
    panda$core$Int64 $tmp4605 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4605, ((panda$core$Int64) { 2 }));
    bool $tmp4604 = $tmp4606.value;
    if ($tmp4604) goto $l4607;
    panda$core$Int64 $tmp4608 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4608, ((panda$core$Int64) { 3 }));
    $tmp4604 = $tmp4609.value;
    $l4607:;
    panda$core$Bit $tmp4610 = { $tmp4604 };
    PANDA_ASSERT($tmp4610.value);
    panda$core$Object* $tmp4611 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4612 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4613 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4611)->type, $tmp4612);
    PANDA_ASSERT($tmp4613.value);
    panda$core$Object* $tmp4615 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4616 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4615), p_out);
    test4614 = $tmp4616;
    panda$core$String* $tmp4618 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4617 = $tmp4618;
    panda$core$String* $tmp4620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4619, testBit4617);
    panda$core$String* $tmp4622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4620, &$s4621);
    panda$core$String* $tmp4623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4622, test4614);
    panda$core$String* $tmp4625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4623, &$s4624);
    (($fn4626) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4625);
    panda$core$String* $tmp4628 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4627 = $tmp4628;
    panda$core$String* $tmp4630 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4629 = $tmp4630;
    panda$core$String* $tmp4632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4631, testBit4617);
    panda$core$String* $tmp4634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4632, &$s4633);
    panda$core$String* $tmp4635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4634, ifTrue4627);
    panda$core$String* $tmp4637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4635, &$s4636);
    panda$core$String* $tmp4638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4637, ifFalse4629);
    panda$core$String* $tmp4640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4638, &$s4639);
    (($fn4641) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4640);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue4627, p_out);
    panda$core$Object* $tmp4642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4642), p_out);
    panda$core$Int64 $tmp4644 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4644, ((panda$core$Int64) { 3 }));
    if ($tmp4645.value) {
    {
        panda$core$String* $tmp4646 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4643 = $tmp4646;
    }
    }
    else {
    {
        end4643 = ifFalse4629;
    }
    }
    panda$core$Object* $tmp4647 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4648 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4647));
    panda$core$Bit $tmp4649 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4648);
    if ($tmp4649.value) {
    {
        panda$core$String* $tmp4651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4650, end4643);
        panda$core$String* $tmp4653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4651, &$s4652);
        (($fn4654) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4653);
    }
    }
    panda$core$Int64 $tmp4655 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4655, ((panda$core$Int64) { 3 }));
    if ($tmp4656.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse4629, p_out);
        panda$core$Object* $tmp4657 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4657), p_out);
        panda$core$Object* $tmp4658 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4659 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4658));
        panda$core$Bit $tmp4660 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4659);
        if ($tmp4660.value) {
        {
            panda$core$String* $tmp4662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4661, end4643);
            panda$core$String* $tmp4664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4662, &$s4663);
            (($fn4665) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4664);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end4643, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4669;
    panda$core$String* range4680;
    org$pandalanguage$pandac$IRNode* block4683;
    org$pandalanguage$pandac$Type* t4685;
    panda$core$String* llt4688;
    panda$core$String* indexType4690;
    org$pandalanguage$pandac$ClassDecl* cl4696;
    panda$core$String* numberType4704;
    panda$core$String* index4712;
    panda$core$String* start4722;
    panda$core$String* indexValuePtr4732;
    panda$core$String* end4764;
    panda$core$String* rawStep4774;
    panda$core$String* step4784;
    panda$core$String* inclusive4799;
    panda$core$String* loopStart4809;
    panda$core$String* loopBody4811;
    panda$core$String* loopEnd4813;
    panda$core$String* loopTest4815;
    panda$core$String* forwardEntry4819;
    panda$core$String* backwardEntry4821;
    panda$core$String* signPrefix4823;
    panda$core$String* direction4835;
    panda$core$String* forwardEntryInclusive4862;
    panda$core$String* forwardEntryExclusive4864;
    panda$core$String* forwardEntryInclusiveTest4879;
    panda$core$String* forwardEntryExclusiveTest4911;
    panda$core$String* backwardEntryInclusive4943;
    panda$core$String* backwardEntryExclusive4945;
    panda$core$String* backwardEntryInclusiveTest4960;
    panda$core$String* backwardEntryExclusiveTest4992;
    panda$core$String* indexValue5024;
    panda$core$String* loopInc5047;
    panda$core$String* forwardLabel5049;
    panda$core$String* backwardLabel5051;
    panda$core$String* forwardDelta5064;
    panda$core$String* forwardInclusiveLabel5080;
    panda$core$String* forwardExclusiveLabel5082;
    panda$core$String* forwardInclusiveTest5093;
    panda$core$String* forwardExclusiveTest5120;
    panda$core$String* backwardDelta5147;
    panda$core$String* negStep5163;
    panda$core$String* backwardInclusiveLabel5176;
    panda$core$String* backwardExclusiveLabel5178;
    panda$core$String* backwardInclusiveTest5189;
    panda$core$String* backwardExclusiveTest5214;
    panda$core$String* inc5239;
    panda$core$String* incStruct5255;
    panda$core$Bit $tmp4666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4666.value);
    panda$core$Int64 $tmp4667 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4667, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4668.value);
    panda$core$Object* $tmp4670 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4669 = ((org$pandalanguage$pandac$IRNode*) $tmp4670);
    panda$core$Object* $tmp4671 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4671)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4672.value);
    panda$core$Object* $tmp4673 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4674 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4673)->type->subtypes);
    panda$core$Bit $tmp4675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4674, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4675.value);
    panda$core$Object* $tmp4676 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4677 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4676)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4679 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4677))->name, &$s4678);
    PANDA_ASSERT($tmp4679.value);
    panda$core$Object* $tmp4681 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4682 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4681), p_out);
    range4680 = $tmp4682;
    panda$core$Object* $tmp4684 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4683 = ((org$pandalanguage$pandac$IRNode*) $tmp4684);
    panda$core$Object* $tmp4686 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4687 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4686)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4685 = ((org$pandalanguage$pandac$Type*) $tmp4687);
    panda$core$String* $tmp4689 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4685);
    llt4688 = $tmp4689;
    panda$core$Bit $tmp4691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4685->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4691.value) {
    {
        panda$core$Int64 $tmp4692 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(t4685->subtypes);
        panda$core$Bit $tmp4693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4692, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4693.value);
        panda$core$Object* $tmp4694 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(t4685->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4695 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4694));
        indexType4690 = $tmp4695;
    }
    }
    else {
    {
        indexType4690 = llt4688;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4697 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4685);
    cl4696 = $tmp4697;
    PANDA_ASSERT(((panda$core$Bit) { cl4696 != NULL }).value);
    panda$collections$ListView* $tmp4698 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4696);
    ITable* $tmp4699 = ((panda$collections$CollectionView*) $tmp4698)->$class->itable;
    while ($tmp4699->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4699 = $tmp4699->next;
    }
    $fn4701 $tmp4700 = $tmp4699->methods[0];
    panda$core$Int64 $tmp4702 = $tmp4700(((panda$collections$CollectionView*) $tmp4698));
    panda$core$Bit $tmp4703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4702, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4703.value);
    panda$collections$ListView* $tmp4705 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4696);
    ITable* $tmp4706 = $tmp4705->$class->itable;
    while ($tmp4706->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4706 = $tmp4706->next;
    }
    $fn4708 $tmp4707 = $tmp4706->methods[0];
    panda$core$Object* $tmp4709 = $tmp4707($tmp4705, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4710 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4709)->type);
    numberType4704 = $tmp4710;
    panda$core$Bit $tmp4711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4669->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4711.value);
    panda$core$String* $tmp4713 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4669->payload));
    index4712 = $tmp4713;
    panda$core$String* $tmp4715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4714, index4712);
    panda$core$String* $tmp4717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4715, &$s4716);
    panda$core$String* $tmp4718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4717, indexType4690);
    panda$core$String* $tmp4720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4718, &$s4719);
    (($fn4721) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4720);
    panda$core$String* $tmp4723 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4722 = $tmp4723;
    panda$core$String* $tmp4725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4724, start4722);
    panda$core$String* $tmp4727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4725, &$s4726);
    panda$core$String* $tmp4728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4727, range4680);
    panda$core$String* $tmp4730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4728, &$s4729);
    (($fn4731) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4730);
    panda$core$String* $tmp4733 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4732 = $tmp4733;
    panda$core$String* $tmp4735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4734, indexValuePtr4732);
    panda$core$String* $tmp4737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4735, &$s4736);
    panda$core$String* $tmp4738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4737, indexType4690);
    panda$core$String* $tmp4740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4738, &$s4739);
    panda$core$String* $tmp4741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4740, indexType4690);
    panda$core$String* $tmp4743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4741, &$s4742);
    panda$core$String* $tmp4744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4743, index4712);
    panda$core$String* $tmp4746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4744, &$s4745);
    panda$core$String* $tmp4748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4746, &$s4747);
    (($fn4749) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4748);
    panda$core$String* $tmp4751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4750, numberType4704);
    panda$core$String* $tmp4753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4751, &$s4752);
    panda$core$String* $tmp4754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4753, start4722);
    panda$core$String* $tmp4756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4754, &$s4755);
    panda$core$String* $tmp4757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4756, numberType4704);
    panda$core$String* $tmp4759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4757, &$s4758);
    panda$core$String* $tmp4760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4759, indexValuePtr4732);
    panda$core$String* $tmp4762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4760, &$s4761);
    (($fn4763) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4762);
    panda$core$String* $tmp4765 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4764 = $tmp4765;
    panda$core$String* $tmp4767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4766, end4764);
    panda$core$String* $tmp4769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4767, &$s4768);
    panda$core$String* $tmp4770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4769, range4680);
    panda$core$String* $tmp4772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4770, &$s4771);
    (($fn4773) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4772);
    panda$core$String* $tmp4775 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep4774 = $tmp4775;
    panda$core$String* $tmp4777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4776, rawStep4774);
    panda$core$String* $tmp4779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4777, &$s4778);
    panda$core$String* $tmp4780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4779, range4680);
    panda$core$String* $tmp4782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4780, &$s4781);
    (($fn4783) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4782);
    panda$core$Bit $tmp4786 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType4704, &$s4785);
    if ($tmp4786.value) {
    {
        panda$core$String* $tmp4787 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step4784 = $tmp4787;
        panda$core$String* $tmp4789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4788, step4784);
        panda$core$String* $tmp4791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4789, &$s4790);
        panda$core$String* $tmp4792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4791, rawStep4774);
        panda$core$String* $tmp4794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4792, &$s4793);
        panda$core$String* $tmp4795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4794, numberType4704);
        panda$core$String* $tmp4797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4795, &$s4796);
        (($fn4798) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4797);
    }
    }
    else {
    {
        step4784 = rawStep4774;
    }
    }
    panda$core$String* $tmp4800 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4799 = $tmp4800;
    panda$core$String* $tmp4802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4801, inclusive4799);
    panda$core$String* $tmp4804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4802, &$s4803);
    panda$core$String* $tmp4805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4804, range4680);
    panda$core$String* $tmp4807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4805, &$s4806);
    (($fn4808) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4807);
    panda$core$String* $tmp4810 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4809 = $tmp4810;
    panda$core$String* $tmp4812 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4811 = $tmp4812;
    panda$core$String* $tmp4814 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4813 = $tmp4814;
    panda$core$String* $tmp4816 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4815 = $tmp4816;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4817 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4817->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4817->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4817, ((panda$core$String*) p_f->payload), loopEnd4813, loopTest4815);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4817));
    panda$core$String* $tmp4820 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4819 = $tmp4820;
    panda$core$String* $tmp4822 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4821 = $tmp4822;
    panda$core$Bit $tmp4825 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4685)->name, &$s4824);
    if ($tmp4825.value) {
    {
        signPrefix4823 = &$s4826;
    }
    }
    else {
    {
        panda$core$Bit $tmp4829 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4685)->name, &$s4828);
        bool $tmp4827 = $tmp4829.value;
        if ($tmp4827) goto $l4830;
        panda$core$Bit $tmp4832 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4685)->name, &$s4831);
        $tmp4827 = $tmp4832.value;
        $l4830:;
        panda$core$Bit $tmp4833 = { $tmp4827 };
        PANDA_ASSERT($tmp4833.value);
        signPrefix4823 = &$s4834;
    }
    }
    panda$core$Bit $tmp4837 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix4823, &$s4836);
    if ($tmp4837.value) {
    {
        panda$core$String* $tmp4838 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction4835 = $tmp4838;
        panda$core$String* $tmp4840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4839, direction4835);
        panda$core$String* $tmp4842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4840, &$s4841);
        panda$core$String* $tmp4843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4842, numberType4704);
        panda$core$String* $tmp4845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4843, &$s4844);
        panda$core$String* $tmp4846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4845, step4784);
        panda$core$String* $tmp4848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4846, &$s4847);
        (($fn4849) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4848);
    }
    }
    else {
    {
        direction4835 = &$s4850;
    }
    }
    panda$core$String* $tmp4852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4851, direction4835);
    panda$core$String* $tmp4854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4852, &$s4853);
    panda$core$String* $tmp4855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4854, forwardEntry4819);
    panda$core$String* $tmp4857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4855, &$s4856);
    panda$core$String* $tmp4858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4857, backwardEntry4821);
    panda$core$String* $tmp4860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4858, &$s4859);
    (($fn4861) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4860);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry4819, p_out);
    panda$core$String* $tmp4863 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4862 = $tmp4863;
    panda$core$String* $tmp4865 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4864 = $tmp4865;
    panda$core$String* $tmp4867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4866, inclusive4799);
    panda$core$String* $tmp4869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4867, &$s4868);
    panda$core$String* $tmp4870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4869, forwardEntryInclusive4862);
    panda$core$String* $tmp4872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4870, &$s4871);
    panda$core$String* $tmp4874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4873, forwardEntryExclusive4864);
    panda$core$String* $tmp4876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4874, &$s4875);
    panda$core$String* $tmp4877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4872, $tmp4876);
    (($fn4878) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4877);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive4862, p_out);
    panda$core$String* $tmp4880 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4879 = $tmp4880;
    panda$core$String* $tmp4882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4881, forwardEntryInclusiveTest4879);
    panda$core$String* $tmp4884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4882, &$s4883);
    panda$core$String* $tmp4885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4884, signPrefix4823);
    panda$core$String* $tmp4887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4885, &$s4886);
    panda$core$String* $tmp4888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4887, numberType4704);
    panda$core$String* $tmp4890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4888, &$s4889);
    panda$core$String* $tmp4892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4891, start4722);
    panda$core$String* $tmp4894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4892, &$s4893);
    panda$core$String* $tmp4895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4894, end4764);
    panda$core$String* $tmp4897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4895, &$s4896);
    panda$core$String* $tmp4898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4890, $tmp4897);
    (($fn4899) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4898);
    panda$core$String* $tmp4901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4900, forwardEntryInclusiveTest4879);
    panda$core$String* $tmp4903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4901, &$s4902);
    panda$core$String* $tmp4904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4903, loopStart4809);
    panda$core$String* $tmp4906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4904, &$s4905);
    panda$core$String* $tmp4907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4906, loopEnd4813);
    panda$core$String* $tmp4909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4907, &$s4908);
    (($fn4910) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4909);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive4864, p_out);
    panda$core$String* $tmp4912 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4911 = $tmp4912;
    panda$core$String* $tmp4914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4913, forwardEntryExclusiveTest4911);
    panda$core$String* $tmp4916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4914, &$s4915);
    panda$core$String* $tmp4917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4916, signPrefix4823);
    panda$core$String* $tmp4919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4917, &$s4918);
    panda$core$String* $tmp4920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4919, numberType4704);
    panda$core$String* $tmp4922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4920, &$s4921);
    panda$core$String* $tmp4924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4923, start4722);
    panda$core$String* $tmp4926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4924, &$s4925);
    panda$core$String* $tmp4927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4926, end4764);
    panda$core$String* $tmp4929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4927, &$s4928);
    panda$core$String* $tmp4930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4922, $tmp4929);
    (($fn4931) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4930);
    panda$core$String* $tmp4933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4932, forwardEntryExclusiveTest4911);
    panda$core$String* $tmp4935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4933, &$s4934);
    panda$core$String* $tmp4936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4935, loopStart4809);
    panda$core$String* $tmp4938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4936, &$s4937);
    panda$core$String* $tmp4939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4938, loopEnd4813);
    panda$core$String* $tmp4941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4939, &$s4940);
    (($fn4942) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4941);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry4821, p_out);
    panda$core$String* $tmp4944 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive4943 = $tmp4944;
    panda$core$String* $tmp4946 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive4945 = $tmp4946;
    panda$core$String* $tmp4948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4947, inclusive4799);
    panda$core$String* $tmp4950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4948, &$s4949);
    panda$core$String* $tmp4951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4950, backwardEntryInclusive4943);
    panda$core$String* $tmp4953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4951, &$s4952);
    panda$core$String* $tmp4955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4954, backwardEntryExclusive4945);
    panda$core$String* $tmp4957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4955, &$s4956);
    panda$core$String* $tmp4958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4953, $tmp4957);
    (($fn4959) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4958);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive4943, p_out);
    panda$core$String* $tmp4961 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest4960 = $tmp4961;
    panda$core$String* $tmp4963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4962, backwardEntryInclusiveTest4960);
    panda$core$String* $tmp4965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4963, &$s4964);
    panda$core$String* $tmp4966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4965, signPrefix4823);
    panda$core$String* $tmp4968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4966, &$s4967);
    panda$core$String* $tmp4969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4968, numberType4704);
    panda$core$String* $tmp4971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4969, &$s4970);
    panda$core$String* $tmp4973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4972, start4722);
    panda$core$String* $tmp4975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4973, &$s4974);
    panda$core$String* $tmp4976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4975, end4764);
    panda$core$String* $tmp4978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4976, &$s4977);
    panda$core$String* $tmp4979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4971, $tmp4978);
    (($fn4980) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4979);
    panda$core$String* $tmp4982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4981, backwardEntryInclusiveTest4960);
    panda$core$String* $tmp4984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4982, &$s4983);
    panda$core$String* $tmp4985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4984, loopStart4809);
    panda$core$String* $tmp4987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4985, &$s4986);
    panda$core$String* $tmp4988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4987, loopEnd4813);
    panda$core$String* $tmp4990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4988, &$s4989);
    (($fn4991) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4990);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive4945, p_out);
    panda$core$String* $tmp4993 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest4992 = $tmp4993;
    panda$core$String* $tmp4995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4994, backwardEntryExclusiveTest4992);
    panda$core$String* $tmp4997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4995, &$s4996);
    panda$core$String* $tmp4998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4997, signPrefix4823);
    panda$core$String* $tmp5000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4998, &$s4999);
    panda$core$String* $tmp5001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5000, numberType4704);
    panda$core$String* $tmp5003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5001, &$s5002);
    panda$core$String* $tmp5005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5004, start4722);
    panda$core$String* $tmp5007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5005, &$s5006);
    panda$core$String* $tmp5008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5007, end4764);
    panda$core$String* $tmp5010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5008, &$s5009);
    panda$core$String* $tmp5011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5003, $tmp5010);
    (($fn5012) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5011);
    panda$core$String* $tmp5014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5013, backwardEntryExclusiveTest4992);
    panda$core$String* $tmp5016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5014, &$s5015);
    panda$core$String* $tmp5017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5016, loopStart4809);
    panda$core$String* $tmp5019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5017, &$s5018);
    panda$core$String* $tmp5020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5019, loopEnd4813);
    panda$core$String* $tmp5022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5020, &$s5021);
    (($fn5023) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5022);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart4809, p_out);
    panda$core$String* $tmp5025 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5024 = $tmp5025;
    panda$core$String* $tmp5027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5026, indexValue5024);
    panda$core$String* $tmp5029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5027, &$s5028);
    panda$core$String* $tmp5030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5029, numberType4704);
    panda$core$String* $tmp5032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5030, &$s5031);
    panda$core$String* $tmp5033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5032, numberType4704);
    panda$core$String* $tmp5035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5033, &$s5034);
    panda$core$String* $tmp5036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5035, indexValuePtr4732);
    panda$core$String* $tmp5038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5036, &$s5037);
    (($fn5039) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5038);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4683, p_out);
    panda$core$Bit $tmp5040 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4683);
    panda$core$Bit $tmp5041 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5040);
    if ($tmp5041.value) {
    {
        panda$core$String* $tmp5043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5042, loopTest4815);
        panda$core$String* $tmp5045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5043, &$s5044);
        (($fn5046) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5045);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest4815, p_out);
    panda$core$String* $tmp5048 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5047 = $tmp5048;
    panda$core$String* $tmp5050 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5049 = $tmp5050;
    panda$core$String* $tmp5052 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5051 = $tmp5052;
    panda$core$String* $tmp5054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5053, direction4835);
    panda$core$String* $tmp5056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5054, &$s5055);
    panda$core$String* $tmp5057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5056, forwardLabel5049);
    panda$core$String* $tmp5059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5057, &$s5058);
    panda$core$String* $tmp5060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5059, backwardLabel5051);
    panda$core$String* $tmp5062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5060, &$s5061);
    (($fn5063) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5062);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel5049, p_out);
    panda$core$String* $tmp5065 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5064 = $tmp5065;
    panda$core$String* $tmp5067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5066, forwardDelta5064);
    panda$core$String* $tmp5069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5067, &$s5068);
    panda$core$String* $tmp5070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5069, numberType4704);
    panda$core$String* $tmp5072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5070, &$s5071);
    panda$core$String* $tmp5073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5072, end4764);
    panda$core$String* $tmp5075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5073, &$s5074);
    panda$core$String* $tmp5076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5075, indexValue5024);
    panda$core$String* $tmp5078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5076, &$s5077);
    (($fn5079) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5078);
    panda$core$String* $tmp5081 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5080 = $tmp5081;
    panda$core$String* $tmp5083 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5082 = $tmp5083;
    panda$core$String* $tmp5085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5084, inclusive4799);
    panda$core$String* $tmp5087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5085, &$s5086);
    panda$core$String* $tmp5088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5087, forwardInclusiveLabel5080);
    panda$core$String* $tmp5090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5088, &$s5089);
    panda$core$String* $tmp5091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5090, forwardExclusiveLabel5082);
    (($fn5092) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5091);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel5080, p_out);
    panda$core$String* $tmp5094 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5093 = $tmp5094;
    panda$core$String* $tmp5096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5095, forwardInclusiveTest5093);
    panda$core$String* $tmp5098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5096, &$s5097);
    panda$core$String* $tmp5099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5098, numberType4704);
    panda$core$String* $tmp5101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5099, &$s5100);
    panda$core$String* $tmp5102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5101, forwardDelta5064);
    panda$core$String* $tmp5104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5102, &$s5103);
    panda$core$String* $tmp5105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5104, step4784);
    panda$core$String* $tmp5107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5105, &$s5106);
    (($fn5108) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5107);
    panda$core$String* $tmp5110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5109, forwardInclusiveTest5093);
    panda$core$String* $tmp5112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5110, &$s5111);
    panda$core$String* $tmp5113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5112, loopInc5047);
    panda$core$String* $tmp5115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5113, &$s5114);
    panda$core$String* $tmp5116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5115, loopEnd4813);
    panda$core$String* $tmp5118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5116, &$s5117);
    (($fn5119) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5118);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel5082, p_out);
    panda$core$String* $tmp5121 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5120 = $tmp5121;
    panda$core$String* $tmp5123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5122, forwardExclusiveTest5120);
    panda$core$String* $tmp5125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5123, &$s5124);
    panda$core$String* $tmp5126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5125, numberType4704);
    panda$core$String* $tmp5128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5126, &$s5127);
    panda$core$String* $tmp5129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5128, forwardDelta5064);
    panda$core$String* $tmp5131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5129, &$s5130);
    panda$core$String* $tmp5132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5131, step4784);
    panda$core$String* $tmp5134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5132, &$s5133);
    (($fn5135) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5134);
    panda$core$String* $tmp5137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5136, forwardExclusiveTest5120);
    panda$core$String* $tmp5139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5137, &$s5138);
    panda$core$String* $tmp5140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5139, loopInc5047);
    panda$core$String* $tmp5142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5140, &$s5141);
    panda$core$String* $tmp5143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5142, loopEnd4813);
    panda$core$String* $tmp5145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5143, &$s5144);
    (($fn5146) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5145);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel5051, p_out);
    panda$core$String* $tmp5148 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5147 = $tmp5148;
    panda$core$String* $tmp5150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5149, backwardDelta5147);
    panda$core$String* $tmp5152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5150, &$s5151);
    panda$core$String* $tmp5153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5152, numberType4704);
    panda$core$String* $tmp5155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5153, &$s5154);
    panda$core$String* $tmp5156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5155, indexValue5024);
    panda$core$String* $tmp5158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5156, &$s5157);
    panda$core$String* $tmp5159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5158, end4764);
    panda$core$String* $tmp5161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5159, &$s5160);
    (($fn5162) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5161);
    panda$core$String* $tmp5164 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5163 = $tmp5164;
    panda$core$String* $tmp5166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5165, negStep5163);
    panda$core$String* $tmp5168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5166, &$s5167);
    panda$core$String* $tmp5169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5168, numberType4704);
    panda$core$String* $tmp5171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5169, &$s5170);
    panda$core$String* $tmp5172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5171, step4784);
    panda$core$String* $tmp5174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5172, &$s5173);
    (($fn5175) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5174);
    panda$core$String* $tmp5177 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5176 = $tmp5177;
    panda$core$String* $tmp5179 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5178 = $tmp5179;
    panda$core$String* $tmp5181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5180, inclusive4799);
    panda$core$String* $tmp5183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5181, &$s5182);
    panda$core$String* $tmp5184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5183, backwardInclusiveLabel5176);
    panda$core$String* $tmp5186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5184, &$s5185);
    panda$core$String* $tmp5187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5186, backwardExclusiveLabel5178);
    (($fn5188) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5187);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel5176, p_out);
    panda$core$String* $tmp5190 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5189 = $tmp5190;
    panda$core$String* $tmp5192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5191, backwardInclusiveTest5189);
    panda$core$String* $tmp5194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5192, &$s5193);
    panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5194, numberType4704);
    panda$core$String* $tmp5197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5195, &$s5196);
    panda$core$String* $tmp5198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5197, backwardDelta5147);
    panda$core$String* $tmp5200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5198, &$s5199);
    panda$core$String* $tmp5201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5200, negStep5163);
    (($fn5202) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5201);
    panda$core$String* $tmp5204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5203, backwardInclusiveTest5189);
    panda$core$String* $tmp5206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5204, &$s5205);
    panda$core$String* $tmp5207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5206, loopInc5047);
    panda$core$String* $tmp5209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5207, &$s5208);
    panda$core$String* $tmp5210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5209, loopEnd4813);
    panda$core$String* $tmp5212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5210, &$s5211);
    (($fn5213) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5212);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel5178, p_out);
    panda$core$String* $tmp5215 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5214 = $tmp5215;
    panda$core$String* $tmp5217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5216, backwardExclusiveTest5214);
    panda$core$String* $tmp5219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5217, &$s5218);
    panda$core$String* $tmp5220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5219, numberType4704);
    panda$core$String* $tmp5222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5220, &$s5221);
    panda$core$String* $tmp5223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5222, backwardDelta5147);
    panda$core$String* $tmp5225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5223, &$s5224);
    panda$core$String* $tmp5226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5225, negStep5163);
    (($fn5227) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5226);
    panda$core$String* $tmp5229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5228, backwardExclusiveTest5214);
    panda$core$String* $tmp5231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5229, &$s5230);
    panda$core$String* $tmp5232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5231, loopInc5047);
    panda$core$String* $tmp5234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5232, &$s5233);
    panda$core$String* $tmp5235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5234, loopEnd4813);
    panda$core$String* $tmp5237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5235, &$s5236);
    (($fn5238) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5237);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc5047, p_out);
    panda$core$String* $tmp5240 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5239 = $tmp5240;
    panda$core$String* $tmp5242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5241, inc5239);
    panda$core$String* $tmp5244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5242, &$s5243);
    panda$core$String* $tmp5245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5244, numberType4704);
    panda$core$String* $tmp5247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5245, &$s5246);
    panda$core$String* $tmp5248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5247, indexValue5024);
    panda$core$String* $tmp5250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5248, &$s5249);
    panda$core$String* $tmp5251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5250, step4784);
    panda$core$String* $tmp5253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5251, &$s5252);
    (($fn5254) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5253);
    panda$core$String* $tmp5256 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5255 = $tmp5256;
    panda$core$String* $tmp5258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5257, incStruct5255);
    panda$core$String* $tmp5260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5258, &$s5259);
    panda$core$String* $tmp5261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5260, indexType4690);
    panda$core$String* $tmp5263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5261, &$s5262);
    panda$core$String* $tmp5264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5263, numberType4704);
    panda$core$String* $tmp5266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5264, &$s5265);
    (($fn5267) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5266);
    panda$core$String* $tmp5269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5268, numberType4704);
    panda$core$String* $tmp5271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5269, &$s5270);
    panda$core$String* $tmp5272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5271, inc5239);
    panda$core$String* $tmp5274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5272, &$s5273);
    (($fn5275) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5274);
    panda$core$String* $tmp5277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5276, indexType4690);
    panda$core$String* $tmp5279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5277, &$s5278);
    panda$core$String* $tmp5280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5279, incStruct5255);
    panda$core$String* $tmp5282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5280, &$s5281);
    panda$core$String* $tmp5283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5282, indexType4690);
    panda$core$String* $tmp5285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5283, &$s5284);
    panda$core$String* $tmp5286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5285, index4712);
    panda$core$String* $tmp5288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5286, &$s5287);
    (($fn5289) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5288);
    panda$core$String* $tmp5291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5290, loopStart4809);
    panda$core$String* $tmp5293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5291, &$s5292);
    (($fn5294) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5293);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd4813, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5301;
    panda$core$String* loopBody5303;
    panda$core$String* loopEnd5305;
    panda$core$String* test5314;
    panda$core$String* testBit5317;
    panda$core$Bit $tmp5295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5295.value);
    panda$core$Int64 $tmp5296 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5296, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5297.value);
    panda$core$Object* $tmp5298 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5299 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5300 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5298)->type, $tmp5299);
    PANDA_ASSERT($tmp5300.value);
    panda$core$String* $tmp5302 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5301 = $tmp5302;
    panda$core$String* $tmp5304 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5303 = $tmp5304;
    panda$core$String* $tmp5306 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5305 = $tmp5306;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5307 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5307->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5307->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5307, ((panda$core$String*) p_w->payload), loopEnd5305, loopStart5301);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5307));
    panda$core$String* $tmp5310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5309, loopStart5301);
    panda$core$String* $tmp5312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5310, &$s5311);
    (($fn5313) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5312);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5301, p_out);
    panda$core$Object* $tmp5315 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5316 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5315), p_out);
    test5314 = $tmp5316;
    panda$core$String* $tmp5318 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5317 = $tmp5318;
    panda$core$String* $tmp5320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5319, testBit5317);
    panda$core$String* $tmp5322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5320, &$s5321);
    panda$core$String* $tmp5323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5322, test5314);
    panda$core$String* $tmp5325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5323, &$s5324);
    (($fn5326) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5325);
    panda$core$String* $tmp5328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5327, testBit5317);
    panda$core$String* $tmp5330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5328, &$s5329);
    panda$core$String* $tmp5331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5330, loopBody5303);
    panda$core$String* $tmp5333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5331, &$s5332);
    panda$core$String* $tmp5334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5333, loopEnd5305);
    panda$core$String* $tmp5336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5334, &$s5335);
    (($fn5337) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5336);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5303, p_out);
    panda$core$Object* $tmp5338 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5338), p_out);
    panda$core$Object* $tmp5339 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5340 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5339));
    panda$core$Bit $tmp5341 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5340);
    if ($tmp5341.value) {
    {
        panda$core$String* $tmp5343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5342, loopStart5301);
        panda$core$String* $tmp5345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5343, &$s5344);
        (($fn5346) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5345);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5305, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5353;
    panda$core$String* loopBody5355;
    panda$core$String* loopEnd5357;
    panda$core$String* test5366;
    panda$core$String* testBit5369;
    panda$core$Bit $tmp5347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5347.value);
    panda$core$Int64 $tmp5348 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5348, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5349.value);
    panda$core$Object* $tmp5350 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5351 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5352 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5350)->type, $tmp5351);
    PANDA_ASSERT($tmp5352.value);
    panda$core$String* $tmp5354 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5353 = $tmp5354;
    panda$core$String* $tmp5356 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5355 = $tmp5356;
    panda$core$String* $tmp5358 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5357 = $tmp5358;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5359 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5359->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5359->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5359, ((panda$core$String*) p_d->payload), loopEnd5357, loopStart5353);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5359));
    panda$core$String* $tmp5362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5361, loopBody5355);
    panda$core$String* $tmp5364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5362, &$s5363);
    (($fn5365) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5364);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5353, p_out);
    panda$core$Object* $tmp5367 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5368 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5367), p_out);
    test5366 = $tmp5368;
    panda$core$String* $tmp5370 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5369 = $tmp5370;
    panda$core$String* $tmp5372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5371, testBit5369);
    panda$core$String* $tmp5374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5372, &$s5373);
    panda$core$String* $tmp5375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5374, test5366);
    panda$core$String* $tmp5377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5375, &$s5376);
    (($fn5378) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5377);
    panda$core$String* $tmp5380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5379, testBit5369);
    panda$core$String* $tmp5382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5380, &$s5381);
    panda$core$String* $tmp5383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5382, loopBody5355);
    panda$core$String* $tmp5385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5383, &$s5384);
    panda$core$String* $tmp5386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5385, loopEnd5357);
    panda$core$String* $tmp5388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5386, &$s5387);
    (($fn5389) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5388);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5355, p_out);
    panda$core$Object* $tmp5390 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5390), p_out);
    panda$core$Object* $tmp5391 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5392 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5391));
    panda$core$Bit $tmp5393 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5392);
    if ($tmp5393.value) {
    {
        panda$core$String* $tmp5395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5394, loopStart5353);
        panda$core$String* $tmp5397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5395, &$s5396);
        (($fn5398) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5397);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5357, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5402;
    panda$core$String* loopEnd5404;
    panda$core$Bit $tmp5399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5399.value);
    panda$core$Int64 $tmp5400 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5400, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5401.value);
    panda$core$String* $tmp5403 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5402 = $tmp5403;
    panda$core$String* $tmp5405 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5404 = $tmp5405;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5406 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5406->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5406->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5406, ((panda$core$String*) p_l->payload), loopEnd5404, loopStart5402);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5406));
    panda$core$String* $tmp5409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5408, loopStart5402);
    panda$core$String* $tmp5411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5409, &$s5410);
    (($fn5412) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5411);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5402, p_out);
    panda$core$Object* $tmp5413 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5413), p_out);
    panda$core$Object* $tmp5414 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5415 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5414));
    panda$core$Bit $tmp5416 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5415);
    if ($tmp5416.value) {
    {
        panda$core$String* $tmp5418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5417, loopStart5402);
        panda$core$String* $tmp5420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5418, &$s5419);
        (($fn5421) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5420);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5404, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5422;
    panda$core$String* ref5433;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5422 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5424 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5422);
            panda$core$String* $tmp5425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5423, $tmp5424);
            panda$core$String* $tmp5427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5425, &$s5426);
            panda$core$String* $tmp5428 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5422->type);
            panda$core$String* $tmp5429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5427, $tmp5428);
            panda$core$String* $tmp5431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5429, &$s5430);
            (($fn5432) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5431);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5434 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                ref5433 = $tmp5434;
                panda$core$String* $tmp5436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5435, ref5433);
                panda$core$String* $tmp5438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5436, &$s5437);
                panda$core$String* $tmp5439 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5422->type);
                panda$core$String* $tmp5440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5438, $tmp5439);
                panda$core$String* $tmp5442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5440, &$s5441);
                panda$core$String* $tmp5443 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5422);
                panda$core$String* $tmp5444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5442, $tmp5443);
                panda$core$String* $tmp5446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5444, &$s5445);
                (($fn5447) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5446);
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
    panda$collections$Iterator* decl$Iter5461;
    org$pandalanguage$pandac$IRNode* decl5473;
    panda$core$Bit $tmp5451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5450 = $tmp5451.value;
    if ($tmp5450) goto $l5452;
    panda$core$Bit $tmp5453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5450 = $tmp5453.value;
    $l5452:;
    panda$core$Bit $tmp5454 = { $tmp5450 };
    bool $tmp5449 = $tmp5454.value;
    if ($tmp5449) goto $l5455;
    panda$core$Bit $tmp5456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5449 = $tmp5456.value;
    $l5455:;
    panda$core$Bit $tmp5457 = { $tmp5449 };
    bool $tmp5448 = $tmp5457.value;
    if ($tmp5448) goto $l5458;
    panda$core$Bit $tmp5459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5448 = $tmp5459.value;
    $l5458:;
    panda$core$Bit $tmp5460 = { $tmp5448 };
    PANDA_ASSERT($tmp5460.value);
    {
        ITable* $tmp5462 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5462->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5462 = $tmp5462->next;
        }
        $fn5464 $tmp5463 = $tmp5462->methods[0];
        panda$collections$Iterator* $tmp5465 = $tmp5463(((panda$collections$Iterable*) p_v->children));
        decl$Iter5461 = $tmp5465;
        $l5466:;
        ITable* $tmp5468 = decl$Iter5461->$class->itable;
        while ($tmp5468->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5468 = $tmp5468->next;
        }
        $fn5470 $tmp5469 = $tmp5468->methods[0];
        panda$core$Bit $tmp5471 = $tmp5469(decl$Iter5461);
        panda$core$Bit $tmp5472 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5471);
        if (!$tmp5472.value) goto $l5467;
        {
            ITable* $tmp5474 = decl$Iter5461->$class->itable;
            while ($tmp5474->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5474 = $tmp5474->next;
            }
            $fn5476 $tmp5475 = $tmp5474->methods[1];
            panda$core$Object* $tmp5477 = $tmp5475(decl$Iter5461);
            decl5473 = ((org$pandalanguage$pandac$IRNode*) $tmp5477);
            panda$core$Bit $tmp5478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5473->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5478.value);
            panda$core$Int64 $tmp5479 = panda$collections$Array$get_count$R$panda$core$Int64(decl5473->children);
            panda$core$Bit $tmp5480 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5479, ((panda$core$Int64) { 1 }));
            if ($tmp5480.value) {
            {
                panda$core$Object* $tmp5481 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5473->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5482 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5473->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5481), ((org$pandalanguage$pandac$IRNode*) $tmp5482), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5483 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5473->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5483), NULL, p_out);
            }
            }
        }
        goto $l5466;
        $l5467:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base5487;
    panda$core$String* ptr5490;
    org$pandalanguage$pandac$ClassDecl* cl5492;
    panda$collections$ListView* fields5495;
    panda$core$Int64 index5497;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5498;
    panda$core$String* result5560;
    panda$core$String* reused5563;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5484 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5485 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp5484, p_out);
            return $tmp5485;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5486 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5486;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5488 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5489 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5488), p_out);
            base5487 = $tmp5489;
            panda$core$String* $tmp5491 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr5490 = $tmp5491;
            panda$core$Object* $tmp5493 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5494 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5493)->type);
            cl5492 = $tmp5494;
            PANDA_ASSERT(((panda$core$Bit) { cl5492 != NULL }).value);
            panda$collections$ListView* $tmp5496 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5492);
            fields5495 = $tmp5496;
            index5497 = ((panda$core$Int64) { -1 });
            ITable* $tmp5499 = ((panda$collections$CollectionView*) fields5495)->$class->itable;
            while ($tmp5499->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5499 = $tmp5499->next;
            }
            $fn5501 $tmp5500 = $tmp5499->methods[0];
            panda$core$Int64 $tmp5502 = $tmp5500(((panda$collections$CollectionView*) fields5495));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5498, ((panda$core$Int64) { 0 }), $tmp5502, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp5504 = $tmp5498.start.value;
            panda$core$Int64 i5503 = { $tmp5504 };
            int64_t $tmp5506 = $tmp5498.end.value;
            int64_t $tmp5507 = $tmp5498.step.value;
            bool $tmp5508 = $tmp5498.inclusive.value;
            bool $tmp5515 = $tmp5507 > 0;
            if ($tmp5515) goto $l5513; else goto $l5514;
            $l5513:;
            if ($tmp5508) goto $l5516; else goto $l5517;
            $l5516:;
            if ($tmp5504 <= $tmp5506) goto $l5509; else goto $l5511;
            $l5517:;
            if ($tmp5504 < $tmp5506) goto $l5509; else goto $l5511;
            $l5514:;
            if ($tmp5508) goto $l5518; else goto $l5519;
            $l5518:;
            if ($tmp5504 >= $tmp5506) goto $l5509; else goto $l5511;
            $l5519:;
            if ($tmp5504 > $tmp5506) goto $l5509; else goto $l5511;
            $l5509:;
            {
                ITable* $tmp5521 = fields5495->$class->itable;
                while ($tmp5521->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5521 = $tmp5521->next;
                }
                $fn5523 $tmp5522 = $tmp5521->methods[0];
                panda$core$Object* $tmp5524 = $tmp5522(fields5495, i5503);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5524))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name) }).value) {
                {
                    index5497 = i5503;
                    goto $l5511;
                }
                }
            }
            $l5512:;
            if ($tmp5515) goto $l5526; else goto $l5527;
            $l5526:;
            int64_t $tmp5528 = $tmp5506 - i5503.value;
            if ($tmp5508) goto $l5529; else goto $l5530;
            $l5529:;
            if ($tmp5528 >= $tmp5507) goto $l5525; else goto $l5511;
            $l5530:;
            if ($tmp5528 > $tmp5507) goto $l5525; else goto $l5511;
            $l5527:;
            int64_t $tmp5532 = i5503.value - $tmp5506;
            if ($tmp5508) goto $l5533; else goto $l5534;
            $l5533:;
            if ($tmp5532 >= -$tmp5507) goto $l5525; else goto $l5511;
            $l5534:;
            if ($tmp5532 > -$tmp5507) goto $l5525; else goto $l5511;
            $l5525:;
            i5503.value += $tmp5507;
            goto $l5509;
            $l5511:;
            panda$core$Bit $tmp5536 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5497, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5536.value);
            panda$core$String* $tmp5538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5537, ptr5490);
            panda$core$String* $tmp5540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5538, &$s5539);
            org$pandalanguage$pandac$Type* $tmp5541 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5492);
            panda$core$String* $tmp5542 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5541);
            panda$core$String* $tmp5543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5540, $tmp5542);
            panda$core$String* $tmp5545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5543, &$s5544);
            org$pandalanguage$pandac$Type* $tmp5547 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5492);
            panda$core$String* $tmp5548 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5547);
            panda$core$String* $tmp5549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5546, $tmp5548);
            panda$core$String* $tmp5551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5549, &$s5550);
            panda$core$String* $tmp5552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5551, base5487);
            panda$core$String* $tmp5554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5552, &$s5553);
            panda$core$String* $tmp5555 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5554, ((panda$core$Object*) wrap_panda$core$Int64(index5497)));
            panda$core$String* $tmp5557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5555, &$s5556);
            panda$core$String* $tmp5558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5545, $tmp5557);
            (($fn5559) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5558);
            return ptr5490;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5561 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5562 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5561), p_out);
            result5560 = $tmp5562;
            panda$core$String* $tmp5564 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5563 = $tmp5564;
            panda$core$String* $tmp5566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5565, reused5563);
            panda$core$String* $tmp5568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5566, &$s5567);
            panda$core$String* $tmp5569 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5568, $tmp5569);
            panda$core$String* $tmp5572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5570, &$s5571);
            panda$core$String* $tmp5574 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5573, $tmp5574);
            panda$core$String* $tmp5577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5575, &$s5576);
            panda$core$String* $tmp5578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5577, result5560);
            panda$core$String* $tmp5580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5578, &$s5579);
            panda$core$String* $tmp5581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5572, $tmp5580);
            (($fn5582) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5581);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5563));
            return result5560;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue5586;
    panda$core$String* value5598;
    panda$core$String* t5599;
    panda$core$Int64 op5602;
    panda$core$String* right5604;
    panda$core$Bit $tmp5583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5583.value);
    panda$core$Int64 $tmp5584 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5584, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5585.value);
    panda$core$Object* $tmp5588 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5589 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5588)->type);
    panda$core$String* $tmp5590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5587, $tmp5589);
    panda$core$String* $tmp5592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5590, &$s5591);
    panda$core$Object* $tmp5593 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5594 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5593), p_out);
    panda$core$String* $tmp5595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5592, $tmp5594);
    panda$core$String* $tmp5597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5595, &$s5596);
    lvalue5586 = $tmp5597;
    panda$core$Object* $tmp5600 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5601 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5600)->type);
    t5599 = $tmp5601;
    op5602 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5602, ((panda$core$Int64) { 73 }));
    if ($tmp5603.value) {
    {
        panda$core$Object* $tmp5605 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5606 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5605), p_out);
        right5604 = $tmp5606;
        panda$core$String* $tmp5608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5607, t5599);
        panda$core$String* $tmp5610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5608, &$s5609);
        panda$core$String* $tmp5611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5610, right5604);
        panda$core$String* $tmp5613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5611, &$s5612);
        value5598 = $tmp5613;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5614, value5598);
    panda$core$String* $tmp5617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5615, &$s5616);
    panda$core$String* $tmp5618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5617, lvalue5586);
    panda$core$String* $tmp5620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5618, &$s5619);
    (($fn5621) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5620);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5626;
    panda$core$String* result5628;
    panda$core$Int64 $tmp5622 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5622, ((panda$core$Int64) { 1 }));
    if ($tmp5623.value) {
    {
        panda$core$Int64 $tmp5624 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5625 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5624, ((panda$core$Int64) { 0 }));
        if ($tmp5625.value) {
        {
            panda$core$Object* $tmp5627 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5626 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5627);
            panda$core$Object* $tmp5629 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5630 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5629), p_out);
            result5628 = $tmp5630;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5631 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5631->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5631->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5631, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5628));
            panda$collections$Array$add$panda$collections$Array$T(inline5626->returns, ((panda$core$Object*) $tmp5631));
            panda$core$String* $tmp5634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5633, inline5626->exitLabel);
            panda$core$String* $tmp5636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5634, &$s5635);
            org$pandalanguage$pandac$Position* $tmp5637 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self->compiler, p_r->offset);
            panda$core$String* $tmp5638 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5636, ((panda$core$Object*) $tmp5637));
            panda$core$String* $tmp5640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5638, &$s5639);
            (($fn5641) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5640);
        }
        }
        else {
        {
            panda$core$Object* $tmp5643 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5644 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5643), p_out);
            panda$core$String* $tmp5645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5642, $tmp5644);
            panda$core$String* $tmp5647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5645, &$s5646);
            (($fn5648) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5647);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5649 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5649, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp5650.value);
        panda$core$Int64 $tmp5651 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5652 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5651, ((panda$core$Int64) { 0 }));
        if ($tmp5652.value) {
        {
            panda$core$Object* $tmp5654 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5653, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5654)->exitLabel);
            panda$core$String* $tmp5657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5655, &$s5656);
            (($fn5658) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5657);
        }
        }
        else {
        {
            (($fn5660) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5659);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5664;
    panda$core$Int64 $tmp5661 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5662 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5661, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5662.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5663 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5663);
    }
    }
    panda$core$Int64 $tmp5665 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5664, ((panda$core$Int64) { 0 }), $tmp5665, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp5667 = $tmp5664.start.value;
    panda$core$Int64 i5666 = { $tmp5667 };
    int64_t $tmp5669 = $tmp5664.end.value;
    int64_t $tmp5670 = $tmp5664.step.value;
    bool $tmp5671 = $tmp5664.inclusive.value;
    bool $tmp5678 = $tmp5670 > 0;
    if ($tmp5678) goto $l5676; else goto $l5677;
    $l5676:;
    if ($tmp5671) goto $l5679; else goto $l5680;
    $l5679:;
    if ($tmp5667 <= $tmp5669) goto $l5672; else goto $l5674;
    $l5680:;
    if ($tmp5667 < $tmp5669) goto $l5672; else goto $l5674;
    $l5677:;
    if ($tmp5671) goto $l5681; else goto $l5682;
    $l5681:;
    if ($tmp5667 >= $tmp5669) goto $l5672; else goto $l5674;
    $l5682:;
    if ($tmp5667 > $tmp5669) goto $l5672; else goto $l5674;
    $l5672:;
    {
        panda$core$Object* $tmp5685 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5666);
        bool $tmp5684 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5685)->loopLabel != NULL }).value;
        if (!$tmp5684) goto $l5686;
        panda$core$Object* $tmp5687 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5666);
        panda$core$Bit $tmp5688 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5687)->loopLabel, p_name);
        $tmp5684 = $tmp5688.value;
        $l5686:;
        panda$core$Bit $tmp5689 = { $tmp5684 };
        if ($tmp5689.value) {
        {
            panda$core$Object* $tmp5690 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5666);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5690);
        }
        }
    }
    $l5675:;
    if ($tmp5678) goto $l5692; else goto $l5693;
    $l5692:;
    int64_t $tmp5694 = $tmp5669 - i5666.value;
    if ($tmp5671) goto $l5695; else goto $l5696;
    $l5695:;
    if ($tmp5694 >= $tmp5670) goto $l5691; else goto $l5674;
    $l5696:;
    if ($tmp5694 > $tmp5670) goto $l5691; else goto $l5674;
    $l5693:;
    int64_t $tmp5698 = i5666.value - $tmp5669;
    if ($tmp5671) goto $l5699; else goto $l5700;
    $l5699:;
    if ($tmp5698 >= -$tmp5670) goto $l5691; else goto $l5674;
    $l5700:;
    if ($tmp5698 > -$tmp5670) goto $l5691; else goto $l5674;
    $l5691:;
    i5666.value += $tmp5670;
    goto $l5672;
    $l5674:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5702;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5703 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5702 = $tmp5703;
    panda$core$String* $tmp5705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5704, desc5702->breakLabel);
    panda$core$String* $tmp5707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5705, &$s5706);
    (($fn5708) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5707);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5709;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5710 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc5709 = $tmp5710;
    panda$core$String* $tmp5712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5711, desc5709->continueLabel);
    panda$core$String* $tmp5714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5712, &$s5713);
    (($fn5715) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5714);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test5725;
    panda$core$String* ifTrue5728;
    panda$core$String* ifFalse5730;
    org$pandalanguage$pandac$Position* p5743;
    panda$core$String* name5745;
    panda$core$String$Index$nullable index5746;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp5749;
    panda$core$String* nameRef5751;
    panda$core$String* line5753;
    panda$core$String* msg5758;
    panda$collections$Iterator* m$Iter5765;
    org$pandalanguage$pandac$MethodDecl* m5779;
    panda$core$Bit $tmp5716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp5716.value);
    panda$core$Int64 $tmp5718 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5718, ((panda$core$Int64) { 1 }));
    bool $tmp5717 = $tmp5719.value;
    if ($tmp5717) goto $l5720;
    panda$core$Int64 $tmp5721 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5721, ((panda$core$Int64) { 2 }));
    $tmp5717 = $tmp5722.value;
    $l5720:;
    panda$core$Bit $tmp5723 = { $tmp5717 };
    PANDA_ASSERT($tmp5723.value);
    panda$core$Bit $tmp5724 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp5724.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp5726 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5727 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5726), p_out);
    test5725 = $tmp5727;
    panda$core$String* $tmp5729 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue5728 = $tmp5729;
    panda$core$String* $tmp5731 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse5730 = $tmp5731;
    panda$core$String* $tmp5733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5732, test5725);
    panda$core$String* $tmp5735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5733, &$s5734);
    panda$core$String* $tmp5736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5735, ifTrue5728);
    panda$core$String* $tmp5738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5736, &$s5737);
    panda$core$String* $tmp5739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5738, ifFalse5730);
    panda$core$String* $tmp5741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5739, &$s5740);
    (($fn5742) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5741);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse5730, p_out);
    org$pandalanguage$pandac$Position* $tmp5744 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self->compiler, p_a->offset);
    p5743 = $tmp5744;
    panda$core$String$Index$nullable $tmp5748 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p5743->file, &$s5747);
    index5746 = $tmp5748;
    if (((panda$core$Bit) { !index5746.nonnull }).value) {
    {
        name5745 = p5743->file;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp5749, index5746, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp5750 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p5743->file, $tmp5749);
        name5745 = $tmp5750;
    }
    }
    panda$core$String* $tmp5752 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, name5745, p_out);
    nameRef5751 = $tmp5752;
    panda$core$String* $tmp5755 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5754, ((panda$core$Object*) wrap_panda$core$Int64(p5743->line)));
    panda$core$String* $tmp5757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5755, &$s5756);
    line5753 = $tmp5757;
    panda$core$Int64 $tmp5759 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5759, ((panda$core$Int64) { 2 }));
    if ($tmp5760.value) {
    {
        panda$core$Object* $tmp5761 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5762 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5761), p_out);
        msg5758 = $tmp5762;
    }
    }
    else {
    {
        msg5758 = NULL;
    }
    }
    (($fn5764) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5763);
    {
        org$pandalanguage$pandac$Type* $tmp5766 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp5767 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp5766);
        ITable* $tmp5768 = ((panda$collections$Iterable*) $tmp5767->methods)->$class->itable;
        while ($tmp5768->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5768 = $tmp5768->next;
        }
        $fn5770 $tmp5769 = $tmp5768->methods[0];
        panda$collections$Iterator* $tmp5771 = $tmp5769(((panda$collections$Iterable*) $tmp5767->methods));
        m$Iter5765 = $tmp5771;
        $l5772:;
        ITable* $tmp5774 = m$Iter5765->$class->itable;
        while ($tmp5774->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5774 = $tmp5774->next;
        }
        $fn5776 $tmp5775 = $tmp5774->methods[0];
        panda$core$Bit $tmp5777 = $tmp5775(m$Iter5765);
        panda$core$Bit $tmp5778 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5777);
        if (!$tmp5778.value) goto $l5773;
        {
            ITable* $tmp5780 = m$Iter5765->$class->itable;
            while ($tmp5780->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5780 = $tmp5780->next;
            }
            $fn5782 $tmp5781 = $tmp5780->methods[1];
            panda$core$Object* $tmp5783 = $tmp5781(m$Iter5765);
            m5779 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5783);
            panda$core$Bit $tmp5785 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5779)->name, &$s5784);
            if ($tmp5785.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m5779);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m5779);
            }
            }
        }
        goto $l5772;
        $l5773:;
    }
    if (((panda$core$Bit) { msg5758 != NULL }).value) {
    {
        panda$core$String* $tmp5788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5786, &$s5787);
        (($fn5789) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5788);
    }
    }
    else {
    {
        (($fn5791) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5790);
    }
    }
    panda$core$String* $tmp5793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5792, nameRef5751);
    panda$core$String* $tmp5795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5793, &$s5794);
    panda$core$String* $tmp5796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5795, line5753);
    panda$core$String* $tmp5798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5796, &$s5797);
    (($fn5799) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5798);
    if (((panda$core$Bit) { msg5758 != NULL }).value) {
    {
        panda$core$String* $tmp5801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5800, msg5758);
        panda$core$String* $tmp5803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5801, &$s5802);
        (($fn5804) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5803);
    }
    }
    (($fn5806) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5805);
    (($fn5808) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5807);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue5728, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* valueStruct5810;
    org$pandalanguage$pandac$ClassDecl* numberClass5813;
    panda$core$String* value5816;
    org$pandalanguage$pandac$FieldDecl* f5826;
    panda$core$String* switchType5829;
    panda$core$String* endLabel5839;
    panda$collections$Array* whenLabels5841;
    panda$core$String* otherwiseLabel5844;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5855;
    org$pandalanguage$pandac$IRNode* w5875;
    panda$core$String* label5879;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5881;
    panda$core$UInt64 number5902;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5940;
    org$pandalanguage$pandac$IRNode* w5960;
    org$pandalanguage$pandac$IRNode* block5962;
    panda$core$Bit $tmp5809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp5809.value);
    panda$core$Object* $tmp5811 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5812 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5811), p_out);
    valueStruct5810 = $tmp5812;
    panda$core$Object* $tmp5814 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp5815 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5814)->type);
    numberClass5813 = $tmp5815;
    panda$core$String* $tmp5817 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value5816 = $tmp5817;
    panda$core$String* $tmp5819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5818, value5816);
    panda$core$String* $tmp5821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5819, &$s5820);
    panda$core$String* $tmp5822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5821, valueStruct5810);
    panda$core$String* $tmp5824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5822, &$s5823);
    (($fn5825) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5824);
    org$pandalanguage$pandac$Symbol* $tmp5828 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass5813->symbolTable, &$s5827);
    f5826 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5828);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f5826);
    panda$core$String* $tmp5830 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f5826->type);
    switchType5829 = $tmp5830;
    panda$core$String* $tmp5832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5831, switchType5829);
    panda$core$String* $tmp5834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5832, &$s5833);
    panda$core$String* $tmp5835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5834, value5816);
    panda$core$String* $tmp5837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5835, &$s5836);
    (($fn5838) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5837);
    panda$core$String* $tmp5840 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel5839 = $tmp5840;
    panda$collections$Array* $tmp5842 = (panda$collections$Array*) malloc(40);
    $tmp5842->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5842->refCount.value = 1;
    panda$collections$Array$init($tmp5842);
    whenLabels5841 = $tmp5842;
    panda$core$Int64 $tmp5845 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp5846 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5845, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5847 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, $tmp5846);
    panda$core$Bit $tmp5848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5847)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp5848.value) {
    {
        panda$core$String* $tmp5849 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel5844 = $tmp5849;
    }
    }
    else {
    {
        otherwiseLabel5844 = endLabel5839;
    }
    }
    panda$core$String* $tmp5851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5850, otherwiseLabel5844);
    panda$core$String* $tmp5853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5851, &$s5852);
    (($fn5854) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5853);
    panda$core$Int64 $tmp5856 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5855, ((panda$core$Int64) { 1 }), $tmp5856, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp5858 = $tmp5855.start.value;
    panda$core$Int64 i5857 = { $tmp5858 };
    int64_t $tmp5860 = $tmp5855.end.value;
    int64_t $tmp5861 = $tmp5855.step.value;
    bool $tmp5862 = $tmp5855.inclusive.value;
    bool $tmp5869 = $tmp5861 > 0;
    if ($tmp5869) goto $l5867; else goto $l5868;
    $l5867:;
    if ($tmp5862) goto $l5870; else goto $l5871;
    $l5870:;
    if ($tmp5858 <= $tmp5860) goto $l5863; else goto $l5865;
    $l5871:;
    if ($tmp5858 < $tmp5860) goto $l5863; else goto $l5865;
    $l5868:;
    if ($tmp5862) goto $l5872; else goto $l5873;
    $l5872:;
    if ($tmp5858 >= $tmp5860) goto $l5863; else goto $l5865;
    $l5873:;
    if ($tmp5858 > $tmp5860) goto $l5863; else goto $l5865;
    $l5863:;
    {
        panda$core$Object* $tmp5876 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5857);
        w5875 = ((org$pandalanguage$pandac$IRNode*) $tmp5876);
        panda$core$Bit $tmp5877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5875->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp5877.value) {
        {
            goto $l5866;
        }
        }
        panda$core$Bit $tmp5878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5875->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp5878.value);
        panda$core$String* $tmp5880 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label5879 = $tmp5880;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels5841, ((panda$core$Object*) label5879));
        panda$core$Int64 $tmp5882 = panda$collections$Array$get_count$R$panda$core$Int64(w5875->children);
        panda$core$Int64 $tmp5883 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5882, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5881, ((panda$core$Int64) { 0 }), $tmp5883, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp5885 = $tmp5881.start.value;
        panda$core$Int64 i5884 = { $tmp5885 };
        int64_t $tmp5887 = $tmp5881.end.value;
        int64_t $tmp5888 = $tmp5881.step.value;
        bool $tmp5889 = $tmp5881.inclusive.value;
        bool $tmp5896 = $tmp5888 > 0;
        if ($tmp5896) goto $l5894; else goto $l5895;
        $l5894:;
        if ($tmp5889) goto $l5897; else goto $l5898;
        $l5897:;
        if ($tmp5885 <= $tmp5887) goto $l5890; else goto $l5892;
        $l5898:;
        if ($tmp5885 < $tmp5887) goto $l5890; else goto $l5892;
        $l5895:;
        if ($tmp5889) goto $l5899; else goto $l5900;
        $l5899:;
        if ($tmp5885 >= $tmp5887) goto $l5890; else goto $l5892;
        $l5900:;
        if ($tmp5885 > $tmp5887) goto $l5890; else goto $l5892;
        $l5890:;
        {
            panda$core$Object* $tmp5903 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w5875->children, i5884);
            panda$core$UInt64 $tmp5904 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5903));
            number5902 = $tmp5904;
            panda$core$String* $tmp5906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5905, switchType5829);
            panda$core$String* $tmp5908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5906, &$s5907);
            panda$core$String* $tmp5909 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5908, ((panda$core$Object*) wrap_panda$core$UInt64(number5902)));
            panda$core$String* $tmp5911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5909, &$s5910);
            panda$core$String* $tmp5912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5911, label5879);
            panda$core$String* $tmp5914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5912, &$s5913);
            (($fn5915) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5914);
        }
        $l5893:;
        if ($tmp5896) goto $l5917; else goto $l5918;
        $l5917:;
        int64_t $tmp5919 = $tmp5887 - i5884.value;
        if ($tmp5889) goto $l5920; else goto $l5921;
        $l5920:;
        if ($tmp5919 >= $tmp5888) goto $l5916; else goto $l5892;
        $l5921:;
        if ($tmp5919 > $tmp5888) goto $l5916; else goto $l5892;
        $l5918:;
        int64_t $tmp5923 = i5884.value - $tmp5887;
        if ($tmp5889) goto $l5924; else goto $l5925;
        $l5924:;
        if ($tmp5923 >= -$tmp5888) goto $l5916; else goto $l5892;
        $l5925:;
        if ($tmp5923 > -$tmp5888) goto $l5916; else goto $l5892;
        $l5916:;
        i5884.value += $tmp5888;
        goto $l5890;
        $l5892:;
    }
    $l5866:;
    if ($tmp5869) goto $l5928; else goto $l5929;
    $l5928:;
    int64_t $tmp5930 = $tmp5860 - i5857.value;
    if ($tmp5862) goto $l5931; else goto $l5932;
    $l5931:;
    if ($tmp5930 >= $tmp5861) goto $l5927; else goto $l5865;
    $l5932:;
    if ($tmp5930 > $tmp5861) goto $l5927; else goto $l5865;
    $l5929:;
    int64_t $tmp5934 = i5857.value - $tmp5860;
    if ($tmp5862) goto $l5935; else goto $l5936;
    $l5935:;
    if ($tmp5934 >= -$tmp5861) goto $l5927; else goto $l5865;
    $l5936:;
    if ($tmp5934 > -$tmp5861) goto $l5927; else goto $l5865;
    $l5927:;
    i5857.value += $tmp5861;
    goto $l5863;
    $l5865:;
    (($fn5939) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5938);
    panda$core$Int64 $tmp5941 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5940, ((panda$core$Int64) { 1 }), $tmp5941, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp5943 = $tmp5940.start.value;
    panda$core$Int64 i5942 = { $tmp5943 };
    int64_t $tmp5945 = $tmp5940.end.value;
    int64_t $tmp5946 = $tmp5940.step.value;
    bool $tmp5947 = $tmp5940.inclusive.value;
    bool $tmp5954 = $tmp5946 > 0;
    if ($tmp5954) goto $l5952; else goto $l5953;
    $l5952:;
    if ($tmp5947) goto $l5955; else goto $l5956;
    $l5955:;
    if ($tmp5943 <= $tmp5945) goto $l5948; else goto $l5950;
    $l5956:;
    if ($tmp5943 < $tmp5945) goto $l5948; else goto $l5950;
    $l5953:;
    if ($tmp5947) goto $l5957; else goto $l5958;
    $l5957:;
    if ($tmp5943 >= $tmp5945) goto $l5948; else goto $l5950;
    $l5958:;
    if ($tmp5943 > $tmp5945) goto $l5948; else goto $l5950;
    $l5948:;
    {
        panda$core$Object* $tmp5961 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5942);
        w5960 = ((org$pandalanguage$pandac$IRNode*) $tmp5961);
        panda$core$Int64 $tmp5963 = panda$collections$Array$get_count$R$panda$core$Int64(w5960->children);
        panda$core$Int64 $tmp5964 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5963, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp5965 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w5960->children, $tmp5964);
        block5962 = ((org$pandalanguage$pandac$IRNode*) $tmp5965);
        panda$core$Int64 $tmp5966 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5942, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp5967 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels5841);
        panda$core$Bit $tmp5968 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp5966, $tmp5967);
        if ($tmp5968.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, otherwiseLabel5844, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp5969 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5942, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp5970 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels5841, $tmp5969);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ((panda$core$String*) $tmp5970), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block5962, p_out);
        panda$core$Bit $tmp5971 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block5962);
        panda$core$Bit $tmp5972 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5971);
        if ($tmp5972.value) {
        {
            panda$core$String* $tmp5974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5973, endLabel5839);
            panda$core$String* $tmp5976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5974, &$s5975);
            (($fn5977) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5976);
        }
        }
    }
    $l5951:;
    if ($tmp5954) goto $l5979; else goto $l5980;
    $l5979:;
    int64_t $tmp5981 = $tmp5945 - i5942.value;
    if ($tmp5947) goto $l5982; else goto $l5983;
    $l5982:;
    if ($tmp5981 >= $tmp5946) goto $l5978; else goto $l5950;
    $l5983:;
    if ($tmp5981 > $tmp5946) goto $l5978; else goto $l5950;
    $l5980:;
    int64_t $tmp5985 = i5942.value - $tmp5945;
    if ($tmp5947) goto $l5986; else goto $l5987;
    $l5986:;
    if ($tmp5985 >= -$tmp5946) goto $l5978; else goto $l5950;
    $l5987:;
    if ($tmp5985 > -$tmp5946) goto $l5978; else goto $l5950;
    $l5978:;
    i5942.value += $tmp5946;
    goto $l5948;
    $l5950:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel5839, p_out);
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
    panda$core$String* result5989;
    org$pandalanguage$pandac$Type* $tmp5990 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp5991 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5990);
    result5989 = $tmp5991;
    panda$core$Bit $tmp5993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp5992 = $tmp5993.value;
    if (!$tmp5992) goto $l5994;
    panda$core$Bit $tmp5996 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result5989, &$s5995);
    panda$core$Bit $tmp5997 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5996);
    $tmp5992 = $tmp5997.value;
    $l5994:;
    panda$core$Bit $tmp5998 = { $tmp5992 };
    if ($tmp5998.value) {
    {
        panda$core$String* $tmp6000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result5989, &$s5999);
        return $tmp6000;
    }
    }
    return result5989;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6001;
    panda$core$Bit needsIndirection6010;
    panda$core$String* separator6022;
    panda$collections$Iterator* p$Iter6043;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6055;
    panda$core$String* $tmp6002 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6001 = $tmp6002;
    panda$core$Bit $tmp6003 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6001));
    if ($tmp6003.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6001));
    panda$core$String* $tmp6005 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6004, $tmp6005);
    panda$core$String* $tmp6008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6006, &$s6007);
    (($fn6009) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6008);
    panda$core$Bit $tmp6011 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6010 = $tmp6011;
    if (needsIndirection6010.value) {
    {
        (($fn6013) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6012);
    }
    }
    else {
    {
        panda$core$String* $tmp6014 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6015) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6014);
    }
    }
    panda$core$String* $tmp6017 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6016, $tmp6017);
    panda$core$String* $tmp6020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6018, &$s6019);
    (($fn6021) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6020);
    separator6022 = &$s6023;
    if (needsIndirection6010.value) {
    {
        panda$core$String* $tmp6025 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6024, $tmp6025);
        panda$core$String* $tmp6028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6026, &$s6027);
        (($fn6029) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6028);
        separator6022 = &$s6030;
    }
    }
    panda$core$Bit $tmp6031 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6032 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6031);
    if ($tmp6032.value) {
    {
        panda$core$String* $tmp6034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6033, separator6022);
        panda$core$String* $tmp6036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6034, &$s6035);
        panda$core$String* $tmp6037 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6036, $tmp6037);
        panda$core$String* $tmp6040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6038, &$s6039);
        (($fn6041) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6040);
        separator6022 = &$s6042;
    }
    }
    {
        ITable* $tmp6044 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6044->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6044 = $tmp6044->next;
        }
        $fn6046 $tmp6045 = $tmp6044->methods[0];
        panda$collections$Iterator* $tmp6047 = $tmp6045(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6043 = $tmp6047;
        $l6048:;
        ITable* $tmp6050 = p$Iter6043->$class->itable;
        while ($tmp6050->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6050 = $tmp6050->next;
        }
        $fn6052 $tmp6051 = $tmp6050->methods[0];
        panda$core$Bit $tmp6053 = $tmp6051(p$Iter6043);
        panda$core$Bit $tmp6054 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6053);
        if (!$tmp6054.value) goto $l6049;
        {
            ITable* $tmp6056 = p$Iter6043->$class->itable;
            while ($tmp6056->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6056 = $tmp6056->next;
            }
            $fn6058 $tmp6057 = $tmp6056->methods[1];
            panda$core$Object* $tmp6059 = $tmp6057(p$Iter6043);
            p6055 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6059);
            panda$core$String* $tmp6061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6060, separator6022);
            panda$core$String* $tmp6063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6061, &$s6062);
            panda$core$String* $tmp6064 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6055->type);
            panda$core$String* $tmp6065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6063, $tmp6064);
            panda$core$String* $tmp6067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6065, &$s6066);
            panda$core$String* $tmp6068 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6055->name);
            panda$core$String* $tmp6069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6067, $tmp6068);
            panda$core$String* $tmp6071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6069, &$s6070);
            (($fn6072) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6071);
            separator6022 = &$s6073;
        }
        goto $l6048;
        $l6049:;
    }
    (($fn6075) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6074);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6098;
    panda$collections$Iterator* p$Iter6109;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6121;
    panda$io$MemoryOutputStream* bodyBuffer6144;
    panda$io$IndentedOutputStream* indentedBody6147;
    panda$collections$Iterator* s$Iter6150;
    org$pandalanguage$pandac$IRNode* s6162;
    panda$core$Object* $tmp6076 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6076)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6077;
    self->varCount = ((panda$core$Int64) { 0 });
    (($fn6078) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    (($fn6080) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6079);
    panda$core$Bit $tmp6081 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6081.value) {
    {
        (($fn6083) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6082);
    }
    }
    panda$core$String* $tmp6085 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6084, $tmp6085);
    panda$core$String* $tmp6088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6086, &$s6087);
    panda$core$String* $tmp6089 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6088, $tmp6089);
    panda$core$String* $tmp6092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6090, &$s6091);
    panda$core$String* $tmp6093 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6092, $tmp6093);
    panda$core$String* $tmp6096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6094, &$s6095);
    (($fn6097) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6096);
    separator6098 = &$s6099;
    panda$core$Bit $tmp6100 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6101 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6100);
    if ($tmp6101.value) {
    {
        panda$core$String* $tmp6103 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6102, $tmp6103);
        panda$core$String* $tmp6106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6104, &$s6105);
        (($fn6107) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6106);
        separator6098 = &$s6108;
    }
    }
    {
        ITable* $tmp6110 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6110->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6110 = $tmp6110->next;
        }
        $fn6112 $tmp6111 = $tmp6110->methods[0];
        panda$collections$Iterator* $tmp6113 = $tmp6111(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6109 = $tmp6113;
        $l6114:;
        ITable* $tmp6116 = p$Iter6109->$class->itable;
        while ($tmp6116->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6116 = $tmp6116->next;
        }
        $fn6118 $tmp6117 = $tmp6116->methods[0];
        panda$core$Bit $tmp6119 = $tmp6117(p$Iter6109);
        panda$core$Bit $tmp6120 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6119);
        if (!$tmp6120.value) goto $l6115;
        {
            ITable* $tmp6122 = p$Iter6109->$class->itable;
            while ($tmp6122->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6122 = $tmp6122->next;
            }
            $fn6124 $tmp6123 = $tmp6122->methods[1];
            panda$core$Object* $tmp6125 = $tmp6123(p$Iter6109);
            p6121 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6125);
            panda$core$String* $tmp6127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6126, separator6098);
            panda$core$String* $tmp6129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6127, &$s6128);
            panda$core$String* $tmp6130 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6121->type);
            panda$core$String* $tmp6131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6129, $tmp6130);
            panda$core$String* $tmp6133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6131, &$s6132);
            panda$core$String* $tmp6134 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6121->name);
            panda$core$String* $tmp6135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6133, $tmp6134);
            panda$core$String* $tmp6137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6135, &$s6136);
            (($fn6138) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6137);
            separator6098 = &$s6139;
        }
        goto $l6114;
        $l6115:;
    }
    (($fn6141) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6140);
    panda$core$Int64 $tmp6142 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6142;
    panda$core$Bit $tmp6143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6143.value);
    panda$io$MemoryOutputStream* $tmp6145 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6145->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6145->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6145);
    bodyBuffer6144 = $tmp6145;
    panda$io$IndentedOutputStream* $tmp6148 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp6148->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp6148->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6148, ((panda$io$OutputStream*) bodyBuffer6144));
    indentedBody6147 = $tmp6148;
    {
        ITable* $tmp6151 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6151->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6151 = $tmp6151->next;
        }
        $fn6153 $tmp6152 = $tmp6151->methods[0];
        panda$collections$Iterator* $tmp6154 = $tmp6152(((panda$collections$Iterable*) p_body->children));
        s$Iter6150 = $tmp6154;
        $l6155:;
        ITable* $tmp6157 = s$Iter6150->$class->itable;
        while ($tmp6157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6157 = $tmp6157->next;
        }
        $fn6159 $tmp6158 = $tmp6157->methods[0];
        panda$core$Bit $tmp6160 = $tmp6158(s$Iter6150);
        panda$core$Bit $tmp6161 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6160);
        if (!$tmp6161.value) goto $l6156;
        {
            ITable* $tmp6163 = s$Iter6150->$class->itable;
            while ($tmp6163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6163 = $tmp6163->next;
            }
            $fn6165 $tmp6164 = $tmp6163->methods[1];
            panda$core$Object* $tmp6166 = $tmp6164(s$Iter6150);
            s6162 = ((org$pandalanguage$pandac$IRNode*) $tmp6166);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s6162, indentedBody6147);
        }
        goto $l6155;
        $l6156:;
    }
    panda$core$String* $tmp6168 = (($fn6167) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn6169) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6168);
    panda$core$String* $tmp6171 = (($fn6170) bodyBuffer6144->$class->vtable[0])(bodyBuffer6144);
    (($fn6172) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6171);
    panda$core$Bit $tmp6173 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6174 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6173);
    if ($tmp6174.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6175 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6176 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6175);
        if ($tmp6176.value) {
        {
            (($fn6178) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6177);
        }
        }
        else {
        {
            (($fn6180) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6179);
        }
        }
    }
    }
    panda$core$Int64 $tmp6181 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6181;
    (($fn6183) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6182);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6184 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6184.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6185 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6185);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

