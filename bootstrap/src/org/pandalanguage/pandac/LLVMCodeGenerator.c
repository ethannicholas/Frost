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
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/Pair.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/MethodShim.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/InlineContext.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char8.h"
#include "panda/core/Int8.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/LoopDescriptor.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/io/File.h"
#include "panda/core/String/Index.h"
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
typedef panda$collections$Iterator* (*$fn507)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn513)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn519)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn546)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn585)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn596)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn602)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn608)(panda$collections$Iterator*);
typedef void (*$fn623)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn659)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn662)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn670)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn677)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn705)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn713)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn758)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn778)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn804)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn812)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn824)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn826)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn831)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn847)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn850)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn862)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn892)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn900)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn906)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn958)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn984)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1010)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1018)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1023)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1026)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1035)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1041)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1047)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1074)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1113)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1124)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1130)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1136)(panda$collections$Iterator*);
typedef void (*$fn1152)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1261)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1281)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1340)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1351)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1357)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1363)(panda$collections$Iterator*);
typedef void (*$fn1378)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1397)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1420)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1486)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1497)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1515)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1539)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1692)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1698)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1704)(panda$collections$Iterator*);
typedef void (*$fn1738)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1754)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1768)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1774)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1790)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1804)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1820)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1834)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1840)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1856)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1915)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1932)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1942)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1959)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1969)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1996)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2013)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2038)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2048)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2061)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2085)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2095)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2108)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2142)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2161)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2186)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2193)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2223)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2233)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2249)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2265)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2291)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2304)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2318)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2323)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2330)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2347)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2360)(panda$collections$CollectionView*);
typedef void (*$fn2382)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2395)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2411)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2439)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2475)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2490)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2516)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2532)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2558)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2571)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2592)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2608)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2625)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2638)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2656)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2675)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2690)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2714)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2730)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2803)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2809)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2815)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2821)(panda$collections$Iterator*);
typedef void (*$fn2833)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2835)(panda$io$OutputStream*);
typedef void (*$fn2862)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2882)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2984)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2997)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3002)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3016)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3024)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3029)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3035)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3041)(panda$collections$Iterator*);
typedef void (*$fn3050)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3053)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3066)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3090)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3105)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3116)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3138)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3169)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3187)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3202)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3220)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3225)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3243)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3278)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3300)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3317)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3344)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3366)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3384)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3399)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3410)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3439)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3462)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3478)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3494)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3519)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3533)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3611)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3668)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3711)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3726)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3750)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3761)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3775)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3803)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3818)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3853)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3865)(panda$collections$CollectionView*);
typedef void (*$fn3877)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3884)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3890)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3896)(panda$collections$Iterator*);
typedef void (*$fn3906)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3909)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3947)(panda$collections$CollectionView*);
typedef void (*$fn3955)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3973)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3997)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4006)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4015)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4025)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4048)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4057)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4067)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4100)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4112)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4148)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4154)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4160)(panda$collections$Iterator*);
typedef void (*$fn4183)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4211)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4238)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4250)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4267)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4272)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4376)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4393)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4411)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4415)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4421)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4427)(panda$collections$Iterator*);
typedef void (*$fn4429)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4430)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4433)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4457)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4472)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4485)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4496)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4532)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4539)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4552)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4562)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4580)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4594)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4604)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4614)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4657)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4678)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4689)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4710)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4721)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4737)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4744)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4762)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4775)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4788)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4799)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4812)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4823)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4836)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4849)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4857)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4871)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4876)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4912)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4919)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4932)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4942)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4960)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4974)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4984)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4994)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5009)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5019)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5060)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5072)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5089)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5110)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5121)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5142)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5153)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5170)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5191)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5202)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5223)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5234)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5250)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5257)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5274)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5290)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5303)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5319)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5330)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5346)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5357)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5373)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5386)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5399)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5413)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5424)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5449)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5465)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5478)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5486)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5500)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5505)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5528)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5541)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5552)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5561)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5580)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5593)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5604)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5613)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5627)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5636)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5647)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5662)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5679)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5685)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5691)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5716)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5733)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5764)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5787)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5826)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5842)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5849)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5859)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5861)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5899)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5906)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5933)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5955)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5961)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5967)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5973)(panda$collections$Iterator*);
typedef void (*$fn5980)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5982)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5990)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5995)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5997)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5999)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6016)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6029)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6045)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6096)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6110)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6143)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6170)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6174)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6176)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6182)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6190)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6202)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6207)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6213)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6219)(panda$collections$Iterator*);
typedef void (*$fn6233)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6236)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6239)(panda$io$MemoryOutputStream*);
typedef void (*$fn6241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6244)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6258)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6268)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6273)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6279)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6285)(panda$collections$Iterator*);
typedef void (*$fn6299)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6302)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6314)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6320)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6326)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn6328)(panda$io$MemoryOutputStream*);
typedef void (*$fn6330)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6331)(panda$io$MemoryOutputStream*);
typedef void (*$fn6333)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6339)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6341)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6344)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x64\x61\x74\x61\x6C\x61\x79\x6F\x75\x74\x20\x3D\x20\x22\x65\x2D\x70\x3A\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x69\x31\x3A\x38\x3A\x38\x2D\x69\x38\x3A\x38\x3A\x38\x2D\x69\x31\x36\x3A\x31\x36\x3A\x31\x36\x2D\x69\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x69\x36\x34\x3A", 72, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34\x3A\x36\x34\x2D\x66\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x66\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x31\x32\x38\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D\x61\x30\x3A\x30\x3A\x36\x34\x2D\x73\x30\x3A\x36\x34\x3A\x36\x34\x2D\x66\x38\x30\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D", 78, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x38\x3A\x31\x36\x3A\x33\x32\x3A\x36\x34\x2D\x53\x31\x32\x38\x22", 17, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6C\x65\x20\x3D\x20\x22\x78\x38\x36\x5F\x36\x34\x2D\x61\x70\x70\x6C\x65\x2D\x6D\x61\x63\x6F\x73\x78\x31\x30\x2E\x38\x2E\x30\x22", 43, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x29", 24, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x2C\x20\x69\x36\x34\x29", 30, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x29", 23, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 60, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 10, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D", 42, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 18, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 19, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x31\x20\x7D", 6, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69", 1, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x31", 2, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, NULL };
static panda$core$String $s503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x2E", 2, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, NULL };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, NULL };
static panda$core$String $s652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x70", 3, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70", 2, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66", 12, NULL };
static panda$core$String $s882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 16, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x4F\x62\x6A\x65\x63\x74\x2A", 35, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s1021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, NULL };
static panda$core$String $s1056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9, NULL };
static panda$core$String $s1063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, NULL };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, NULL };
static panda$core$String $s1077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, NULL };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6, NULL };
static panda$core$String $s1207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, NULL };
static panda$core$String $s1274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, NULL };
static panda$core$String $s1278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s1293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, NULL };
static panda$core$String $s1298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, NULL };
static panda$core$String $s1306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s1312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s1316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, NULL };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, NULL };
static panda$core$String $s1325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23, NULL };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s1343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, NULL };
static panda$core$String $s1347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s1369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s1371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, NULL };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s1412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, NULL };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s1423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4, NULL };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, NULL };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s1531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3, NULL };
static panda$core$String $s1540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s1544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, NULL };
static panda$core$String $s1546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s1547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, NULL };
static panda$core$String $s1549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s1550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, NULL };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C", 1, NULL };
static panda$core$String $s1556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, NULL };
static panda$core$String $s1585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, NULL };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, NULL };
static panda$core$String $s1619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, NULL };
static panda$core$String $s1622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s1624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, NULL };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, NULL };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, NULL };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, NULL };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, NULL };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s1651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, NULL };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, NULL };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, NULL };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, NULL };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, NULL };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, NULL };
static panda$core$String $s1663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, NULL };
static panda$core$String $s1667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, NULL };
static panda$core$String $s1669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, NULL };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, NULL };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, NULL };
static panda$core$String $s1676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, NULL };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, NULL };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, NULL };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, NULL };
static panda$core$String $s1685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, NULL };
static panda$core$String $s1687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, NULL };
static panda$core$String $s1706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, NULL };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s1772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, NULL };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s1812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, NULL };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, NULL };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, NULL };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, NULL };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, NULL };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, NULL };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, NULL };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s1927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, NULL };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 48, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 30, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, NULL };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, NULL };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, NULL };
static panda$core$String $s2139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, NULL };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, NULL };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, NULL };
static panda$core$String $s2199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, NULL };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, NULL };
static panda$core$String $s2226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, NULL };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, NULL };
static panda$core$String $s2252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, NULL };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, NULL };
static panda$core$String $s2278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, NULL };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, NULL };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, NULL };
static panda$core$String $s2390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, NULL };
static panda$core$String $s2432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, NULL };
static panda$core$String $s2451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, NULL };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, NULL };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, NULL };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, NULL };
static panda$core$String $s2664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, NULL };
static panda$core$String $s2707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, NULL };
static panda$core$String $s2728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, NULL };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, NULL };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, NULL };
static panda$core$String $s2778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, NULL };
static panda$core$String $s2795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s2834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s2841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, NULL };
static panda$core$String $s2843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s2873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s2877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, NULL };
static panda$core$String $s2952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s2986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, NULL };
static panda$core$String $s2992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s3004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s3009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, NULL };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, NULL };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s3132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s3135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s3148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, NULL };
static panda$core$String $s3190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, NULL };
static panda$core$String $s3199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, NULL };
static panda$core$String $s3221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, NULL };
static panda$core$String $s3223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, NULL };
static panda$core$String $s3244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s3408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s3419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, NULL };
static panda$core$String $s3425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, NULL };
static panda$core$String $s3428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s3430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s3433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s3436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s3448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, NULL };
static panda$core$String $s3513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, NULL };
static panda$core$String $s3545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, NULL };
static panda$core$String $s3546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, NULL };
static panda$core$String $s3587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, NULL };
static panda$core$String $s3595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s3600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s3652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s3661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, NULL };
static panda$core$String $s3663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, NULL };
static panda$core$String $s3683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s3695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s3704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, NULL };
static panda$core$String $s3706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, NULL };
static panda$core$String $s3715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s3717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s3724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s3759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s3769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s3793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, NULL };
static panda$core$String $s3801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, NULL };
static panda$core$String $s3806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, NULL };
static panda$core$String $s3808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, NULL };
static panda$core$String $s3815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s3831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, NULL };
static panda$core$String $s3832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, NULL };
static panda$core$String $s3839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, NULL };
static panda$core$String $s3858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s3868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, NULL };
static panda$core$String $s3870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, NULL };
static panda$core$String $s3875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, NULL };
static panda$core$String $s3879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, NULL };
static panda$core$String $s3904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, NULL };
static panda$core$String $s3912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, NULL };
static panda$core$String $s3914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, NULL };
static panda$core$String $s3925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, NULL };
static panda$core$String $s3927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 69, NULL };
static panda$core$String $s3935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, NULL };
static panda$core$String $s3937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, NULL };
static panda$core$String $s3950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s3953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20\x6E\x75\x6C\x6C\x20\x7D", 26, NULL };
static panda$core$String $s3959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s3962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10, NULL };
static panda$core$String $s3987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, NULL };
static panda$core$String $s3990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s3999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, NULL };
static panda$core$String $s4004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, NULL };
static panda$core$String $s4008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s4013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s4018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s4023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, NULL };
static panda$core$String $s4041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s4055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s4060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s4065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s4077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, NULL };
static panda$core$String $s4079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, NULL };
static panda$core$String $s4089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s4095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, NULL };
static panda$core$String $s4098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, NULL };
static panda$core$String $s4107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, NULL };
static panda$core$String $s4110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, NULL };
static panda$core$String $s4176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s4204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s4224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s4232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, NULL };
static panda$core$String $s4260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s4265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, NULL };
static panda$core$String $s4268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, NULL };
static panda$core$String $s4270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s4275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s4336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s4369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s4380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, NULL };
static panda$core$String $s4382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s4387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s4400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s4431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s4450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s4545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, NULL };
static panda$core$String $s4565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s4570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, NULL };
static panda$core$String $s4581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, NULL };
static panda$core$String $s4607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, NULL };
static panda$core$String $s4630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s4632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s4634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s4637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s4640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s4645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s4654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, NULL };
static panda$core$String $s4668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, NULL };
static panda$core$String $s4700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s4729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s4754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s4783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s4807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, NULL };
static panda$core$String $s4831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s4844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s4847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, NULL };
static panda$core$String $s4850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s4852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s4925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, NULL };
static panda$core$String $s4945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s4950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, NULL };
static panda$core$String $s4961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, NULL };
static panda$core$String $s4987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, NULL };
static panda$core$String $s4996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s4999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, NULL };
static panda$core$String $s5004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s5007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, NULL };
static panda$core$String $s5035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s5037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s5039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s5042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s5045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s5047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s5050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, NULL };
static panda$core$String $s5055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, NULL };
static panda$core$String $s5062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s5086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, NULL };
static panda$core$String $s5100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, NULL };
static panda$core$String $s5132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s5167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, NULL };
static panda$core$String $s5181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, NULL };
static panda$core$String $s5213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s5242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s5311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s5338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, NULL };
static panda$core$String $s5384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s5407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s5432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, NULL };
static panda$core$String $s5457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s5473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s5476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, NULL };
static panda$core$String $s5479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s5481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s5645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s5749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, NULL };
static panda$core$String $s5761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s5776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s5847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, NULL };
static panda$core$String $s5895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s5945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s5947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s5954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20", 10, NULL };
static panda$core$String $s5975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, NULL };
static panda$core$String $s5977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, NULL };
static panda$core$String $s5978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, NULL };
static panda$core$String $s5981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, NULL };
static panda$core$String $s5983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, NULL };
static panda$core$String $s5985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, NULL };
static panda$core$String $s5993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s5998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s6009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s6014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s6018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, NULL };
static panda$core$String $s6022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, NULL };
static panda$core$String $s6024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s6043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, NULL };
static panda$core$String $s6086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, NULL };
static panda$core$String $s6088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s6094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, NULL };
static panda$core$String $s6139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s6141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, NULL };
static panda$core$String $s6168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s6177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s6184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s6203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s6231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s6238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, NULL };
static panda$core$String $s6240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s6243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s6245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s6260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s6269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s6297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s6338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, NULL };
static panda$core$String $s6340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s6343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };

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
    panda$core$MutableString* result398;
    panda$core$Range$LTpanda$core$Int64$GT $tmp406;
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
            panda$core$Object* $tmp371 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp372 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp371));
            return $tmp372;
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp373 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp375 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp373))->name, &$s374);
            if ($tmp375.value) {
            {
                panda$core$Object* $tmp376 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
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
            panda$core$Object* $tmp395 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp396 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp395));
            return $tmp396;
        }
        break;
        case 22:
        {
            panda$core$String* $tmp397 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            return $tmp397;
        }
        break;
        case 24:
        case 25:
        {
            panda$core$MutableString* $tmp399 = (panda$core$MutableString*) malloc(40);
            $tmp399->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp399->refCount.value = 1;
            panda$core$Int64 $tmp401 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp402 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp401, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp403 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp402);
            panda$core$String* $tmp404 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp403));
            panda$core$MutableString$init$panda$core$String($tmp399, $tmp404);
            result398 = $tmp399;
            panda$core$MutableString$append$panda$core$String(result398, &$s405);
            panda$core$Int64 $tmp407 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp408 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp407, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp406, ((panda$core$Int64) { 0 }), $tmp408, ((panda$core$Bit) { false }));
            int64_t $tmp410 = $tmp406.min.value;
            panda$core$Int64 i409 = { $tmp410 };
            int64_t $tmp412 = $tmp406.max.value;
            bool $tmp413 = $tmp406.inclusive.value;
            if ($tmp413) goto $l420; else goto $l421;
            $l420:;
            if ($tmp410 <= $tmp412) goto $l414; else goto $l416;
            $l421:;
            if ($tmp410 < $tmp412) goto $l414; else goto $l416;
            $l414:;
            {
                panda$core$Bit $tmp422 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i409, ((panda$core$Int64) { 0 }));
                if ($tmp422.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result398, &$s423);
                }
                }
                panda$core$Object* $tmp424 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i409);
                panda$core$String* $tmp425 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp424));
                panda$core$MutableString$append$panda$core$String(result398, $tmp425);
            }
            $l417:;
            int64_t $tmp427 = $tmp412 - i409.value;
            if ($tmp413) goto $l428; else goto $l429;
            $l428:;
            if ($tmp427 >= 1) goto $l426; else goto $l416;
            $l429:;
            if ($tmp427 > 1) goto $l426; else goto $l416;
            $l426:;
            i409.value += 1;
            goto $l414;
            $l416:;
            panda$core$MutableString$append$panda$core$String(result398, &$s432);
            panda$core$String* $tmp433 = panda$core$MutableString$convert$R$panda$core$String(result398);
            return $tmp433;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp434.value) {
    {
        panda$core$Object* $tmp435 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp436 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp435));
        return $tmp436;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, p_t);
    panda$core$String* $tmp438 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s437, $tmp438);
    panda$core$String* $tmp441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp439, &$s440);
    return $tmp441;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp442 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp442, &$s443);
    return $tmp444;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType445;
    panda$core$MutableString* result447;
    panda$core$Range$LTpanda$core$Int64$GT $tmp464;
    org$pandalanguage$pandac$Type* $tmp446 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType445 = $tmp446;
    panda$core$MutableString* $tmp448 = (panda$core$MutableString*) malloc(40);
    $tmp448->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp448->refCount.value = 1;
    panda$core$MutableString$init($tmp448);
    result447 = $tmp448;
    panda$core$Int64 $tmp450 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType445->subtypes);
    panda$core$Int64 $tmp451 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp450, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp452 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType445->subtypes, $tmp451);
    panda$core$String* $tmp453 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp452));
    panda$core$MutableString$append$panda$core$String(result447, $tmp453);
    panda$core$MutableString$append$panda$core$String(result447, &$s454);
    panda$core$Bit $tmp455 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp455.value);
    panda$core$String* $tmp457 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s456, $tmp457);
    panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp458, &$s459);
    panda$core$MutableString$append$panda$core$String(result447, $tmp460);
    panda$core$Bit $tmp461 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp461.value) {
    {
        panda$core$MutableString$append$panda$core$String(result447, &$s462);
    }
    }
    panda$core$MutableString$append$panda$core$String(result447, &$s463);
    panda$core$Int64 $tmp465 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType445->subtypes);
    panda$core$Int64 $tmp466 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp465, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp464, ((panda$core$Int64) { 0 }), $tmp466, ((panda$core$Bit) { false }));
    int64_t $tmp468 = $tmp464.min.value;
    panda$core$Int64 i467 = { $tmp468 };
    int64_t $tmp470 = $tmp464.max.value;
    bool $tmp471 = $tmp464.inclusive.value;
    if ($tmp471) goto $l478; else goto $l479;
    $l478:;
    if ($tmp468 <= $tmp470) goto $l472; else goto $l474;
    $l479:;
    if ($tmp468 < $tmp470) goto $l472; else goto $l474;
    $l472:;
    {
        panda$core$MutableString$append$panda$core$String(result447, &$s480);
        panda$core$Object* $tmp481 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType445->subtypes, i467);
        panda$core$String* $tmp482 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp481));
        panda$core$MutableString$append$panda$core$String(result447, $tmp482);
    }
    $l475:;
    int64_t $tmp484 = $tmp470 - i467.value;
    if ($tmp471) goto $l485; else goto $l486;
    $l485:;
    if ($tmp484 >= 1) goto $l483; else goto $l474;
    $l486:;
    if ($tmp484 > 1) goto $l483; else goto $l474;
    $l483:;
    i467.value += 1;
    goto $l472;
    $l474:;
    panda$core$MutableString$append$panda$core$String(result447, &$s489);
    panda$core$String* $tmp490 = panda$core$MutableString$convert$R$panda$core$String(result447);
    return $tmp490;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp491.value);
    panda$core$Object* $tmp492 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp492));
    panda$core$Object* $tmp494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp495 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp494));
    panda$core$String* $tmp496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s493, $tmp495);
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
    panda$core$String* separator591;
    panda$collections$Iterator* m$Iter593;
    org$pandalanguage$pandac$MethodDecl* m605;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry613;
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
            panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s554, name527);
            panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp555, &$s556);
            panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp557, t537);
            panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp558, &$s559);
            org$pandalanguage$pandac$Type* $tmp561 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp562 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp561);
            panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, $tmp562);
            panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp563, &$s564);
            panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s566, intfCC523->type);
            panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp567, &$s568);
            panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp569, intfCC523->name);
            panda$core$String* $tmp572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp570, &$s571);
            org$pandalanguage$pandac$Type* $tmp573 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp574 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp573);
            panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp572, $tmp574);
            panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, &$s576);
            panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp565, $tmp577);
            panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s579, previous502);
            panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, &$s581);
            ITable* $tmp583 = ((panda$collections$CollectionView*) methods525)->$class->itable;
            while ($tmp583->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp583 = $tmp583->next;
            }
            $fn585 $tmp584 = $tmp583->methods[0];
            panda$core$Int64 $tmp586 = $tmp584(((panda$collections$CollectionView*) methods525));
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp582, ((panda$core$Object*) wrap_panda$core$Int64($tmp586)));
            panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp587, &$s588);
            panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, $tmp589);
            panda$core$MutableString$init$panda$core$String($tmp552, $tmp590);
            result551 = $tmp552;
            separator591 = &$s592;
            {
                ITable* $tmp594 = ((panda$collections$Iterable*) methods525)->$class->itable;
                while ($tmp594->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp594 = $tmp594->next;
                }
                $fn596 $tmp595 = $tmp594->methods[0];
                panda$collections$Iterator* $tmp597 = $tmp595(((panda$collections$Iterable*) methods525));
                m$Iter593 = $tmp597;
                $l598:;
                ITable* $tmp600 = m$Iter593->$class->itable;
                while ($tmp600->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp600 = $tmp600->next;
                }
                $fn602 $tmp601 = $tmp600->methods[0];
                panda$core$Bit $tmp603 = $tmp601(m$Iter593);
                panda$core$Bit $tmp604 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp603);
                if (!$tmp604.value) goto $l599;
                {
                    ITable* $tmp606 = m$Iter593->$class->itable;
                    while ($tmp606->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp606 = $tmp606->next;
                    }
                    $fn608 $tmp607 = $tmp606->methods[1];
                    panda$core$Object* $tmp609 = $tmp607(m$Iter593);
                    m605 = ((org$pandalanguage$pandac$MethodDecl*) $tmp609);
                    panda$core$MutableString$append$panda$core$String(result551, separator591);
                    separator591 = &$s610;
                    panda$core$Bit $tmp611 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m605->annotations);
                    if ($tmp611.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result551, &$s612);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp614 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m605);
                        entry613 = $tmp614;
                        panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s615, ((panda$core$String*) entry613->second));
                        panda$core$String* $tmp618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp616, &$s617);
                        panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp618, ((panda$core$String*) entry613->first));
                        panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp619, &$s620);
                        panda$core$MutableString$append$panda$core$String(result551, $tmp621);
                    }
                    }
                }
                goto $l598;
                $l599:;
            }
            panda$core$MutableString$append$panda$core$String(result551, &$s622);
            (($fn623) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result551));
            panda$core$String* $tmp625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s624, t537);
            panda$core$String* $tmp627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp625, &$s626);
            panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp627, name527);
            panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp628, &$s629);
            previous502 = $tmp630;
        }
        goto $l509;
        $l510:;
    }
    return previous502;
}
org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer631;
    panda$io$IndentedOutputStream* out634;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* found637;
    panda$core$Int64 oldVarCount645;
    org$pandalanguage$pandac$Type* effectiveReturnType646;
    panda$core$String* resultName650;
    panda$core$MutableString* resultType654;
    panda$core$String* self_t671;
    panda$core$Range$LTpanda$core$Int64$GT $tmp679;
    panda$core$String* pType694;
    panda$collections$Array* casts715;
    panda$core$Range$LTpanda$core$Int64$GT $tmp718;
    panda$core$String* p733;
    panda$core$String* returnValue750;
    panda$core$Range$LTpanda$core$Int64$GT $tmp779;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* result827;
    panda$io$MemoryOutputStream* $tmp632 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp632->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp632->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp632);
    outBuffer631 = $tmp632;
    panda$io$IndentedOutputStream* $tmp635 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp635->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp635->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp635, ((panda$io$OutputStream*) outBuffer631));
    out634 = $tmp635;
    panda$core$Object* $tmp638 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found637 = ((org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) $tmp638);
    if (((panda$core$Bit) { found637 != NULL }).value) {
    {
        return found637;
    }
    }
    panda$core$Bit $tmp639 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp639.value);
    panda$core$Int64 $tmp640 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp641 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp642 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp641, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp640, $tmp642);
    PANDA_ASSERT($tmp643.value);
    panda$core$Bit $tmp644 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp644.value);
    oldVarCount645 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp647 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp648 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp647, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp649 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp648);
    effectiveReturnType646 = ((org$pandalanguage$pandac$Type*) $tmp649);
    panda$core$String* $tmp651 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp651, &$s652);
    resultName650 = $tmp653;
    panda$core$MutableString* $tmp655 = (panda$core$MutableString*) malloc(40);
    $tmp655->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp655->refCount.value = 1;
    panda$core$String* $tmp657 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType646);
    panda$core$MutableString$init$panda$core$String($tmp655, $tmp657);
    resultType654 = $tmp655;
    (($fn659) ((panda$io$OutputStream*) out634)->$class->vtable[16])(((panda$io$OutputStream*) out634), &$s658);
    panda$core$Bit $tmp660 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_raw->owner);
    if ($tmp660.value) {
    {
        (($fn662) ((panda$io$OutputStream*) out634)->$class->vtable[16])(((panda$io$OutputStream*) out634), &$s661);
    }
    }
    panda$core$String* $tmp664 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s663, ((panda$core$Object*) resultType654));
    panda$core$String* $tmp666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp664, &$s665);
    panda$core$String* $tmp667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp666, resultName650);
    panda$core$String* $tmp669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp667, &$s668);
    (($fn670) ((panda$io$OutputStream*) out634)->$class->vtable[16])(((panda$io$OutputStream*) out634), $tmp669);
    panda$core$String* $tmp672 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t671 = $tmp672;
    panda$core$String* $tmp674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s673, self_t671);
    panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp674, &$s675);
    (($fn677) ((panda$io$OutputStream*) out634)->$class->vtable[16])(((panda$io$OutputStream*) out634), $tmp676);
    panda$core$MutableString$append$panda$core$String(resultType654, &$s678);
    panda$core$MutableString$append$panda$core$String(resultType654, self_t671);
    panda$core$Int64 $tmp680 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp679, ((panda$core$Int64) { 0 }), $tmp680, ((panda$core$Bit) { false }));
    int64_t $tmp682 = $tmp679.min.value;
    panda$core$Int64 i681 = { $tmp682 };
    int64_t $tmp684 = $tmp679.max.value;
    bool $tmp685 = $tmp679.inclusive.value;
    if ($tmp685) goto $l692; else goto $l693;
    $l692:;
    if ($tmp682 <= $tmp684) goto $l686; else goto $l688;
    $l693:;
    if ($tmp682 < $tmp684) goto $l686; else goto $l688;
    $l686:;
    {
        panda$core$Object* $tmp695 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i681);
        panda$core$String* $tmp696 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp695));
        pType694 = $tmp696;
        panda$core$MutableString$append$panda$core$String(resultType654, &$s697);
        panda$core$MutableString$append$panda$core$String(resultType654, pType694);
        panda$core$String* $tmp699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s698, pType694);
        panda$core$String* $tmp701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp699, &$s700);
        panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp701, ((panda$core$Object*) wrap_panda$core$Int64(i681)));
        panda$core$String* $tmp704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp702, &$s703);
        (($fn705) ((panda$io$OutputStream*) out634)->$class->vtable[16])(((panda$io$OutputStream*) out634), $tmp704);
    }
    $l689:;
    int64_t $tmp707 = $tmp684 - i681.value;
    if ($tmp685) goto $l708; else goto $l709;
    $l708:;
    if ($tmp707 >= 1) goto $l706; else goto $l688;
    $l709:;
    if ($tmp707 > 1) goto $l706; else goto $l688;
    $l706:;
    i681.value += 1;
    goto $l686;
    $l688:;
    (($fn713) ((panda$io$OutputStream*) out634)->$class->vtable[19])(((panda$io$OutputStream*) out634), &$s712);
    panda$core$MutableString$append$panda$core$String(resultType654, &$s714);
    panda$collections$Array* $tmp716 = (panda$collections$Array*) malloc(40);
    $tmp716->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp716->refCount.value = 1;
    panda$collections$Array$init($tmp716);
    casts715 = $tmp716;
    panda$core$Int64 $tmp719 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp718, ((panda$core$Int64) { 0 }), $tmp719, ((panda$core$Bit) { false }));
    int64_t $tmp721 = $tmp718.min.value;
    panda$core$Int64 i720 = { $tmp721 };
    int64_t $tmp723 = $tmp718.max.value;
    bool $tmp724 = $tmp718.inclusive.value;
    if ($tmp724) goto $l731; else goto $l732;
    $l731:;
    if ($tmp721 <= $tmp723) goto $l725; else goto $l727;
    $l732:;
    if ($tmp721 < $tmp723) goto $l725; else goto $l727;
    $l725:;
    {
        panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s734, ((panda$core$Object*) wrap_panda$core$Int64(i720)));
        panda$core$String* $tmp737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp735, &$s736);
        p733 = $tmp737;
        panda$core$Object* $tmp738 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i720);
        panda$core$Object* $tmp739 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i720);
        panda$core$Bit $tmp740 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp738)->type, ((org$pandalanguage$pandac$Type*) $tmp739));
        if ($tmp740.value) {
        {
            panda$core$Object* $tmp741 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i720);
            panda$core$Object* $tmp742 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i720);
            panda$core$String* $tmp743 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p733, ((org$pandalanguage$pandac$Type*) $tmp741), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp742)->type, out634);
            panda$collections$Array$add$panda$collections$Array$T(casts715, ((panda$core$Object*) $tmp743));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts715, ((panda$core$Object*) p733));
        }
        }
    }
    $l728:;
    int64_t $tmp745 = $tmp723 - i720.value;
    if ($tmp724) goto $l746; else goto $l747;
    $l746:;
    if ($tmp745 >= 1) goto $l744; else goto $l727;
    $l747:;
    if ($tmp745 > 1) goto $l744; else goto $l727;
    $l744:;
    i720.value += 1;
    goto $l725;
    $l727:;
    org$pandalanguage$pandac$Type* $tmp751 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp752 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp751);
    if ($tmp752.value) {
    {
        panda$core$String* $tmp753 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue750 = $tmp753;
        panda$core$String* $tmp755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s754, returnValue750);
        panda$core$String* $tmp757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp755, &$s756);
        (($fn758) ((panda$io$OutputStream*) out634)->$class->vtable[16])(((panda$io$OutputStream*) out634), $tmp757);
    }
    }
    else {
    {
        returnValue750 = &$s759;
    }
    }
    panda$core$String* $tmp761 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s760, $tmp761);
    panda$core$String* $tmp764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp762, &$s763);
    panda$core$String* $tmp765 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
    panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp764, $tmp765);
    panda$core$String* $tmp768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, &$s767);
    panda$core$String* $tmp769 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp768, $tmp769);
    panda$core$String* $tmp772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp770, &$s771);
    panda$core$String* $tmp774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s773, self_t671);
    panda$core$String* $tmp776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp774, &$s775);
    panda$core$String* $tmp777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp772, $tmp776);
    (($fn778) ((panda$io$OutputStream*) out634)->$class->vtable[16])(((panda$io$OutputStream*) out634), $tmp777);
    panda$core$Int64 $tmp780 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp779, ((panda$core$Int64) { 0 }), $tmp780, ((panda$core$Bit) { false }));
    int64_t $tmp782 = $tmp779.min.value;
    panda$core$Int64 i781 = { $tmp782 };
    int64_t $tmp784 = $tmp779.max.value;
    bool $tmp785 = $tmp779.inclusive.value;
    if ($tmp785) goto $l792; else goto $l793;
    $l792:;
    if ($tmp782 <= $tmp784) goto $l786; else goto $l788;
    $l793:;
    if ($tmp782 < $tmp784) goto $l786; else goto $l788;
    $l786:;
    {
        panda$core$Object* $tmp795 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i781);
        panda$core$String* $tmp796 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp795)->type);
        panda$core$String* $tmp797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s794, $tmp796);
        panda$core$String* $tmp799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp797, &$s798);
        panda$core$Object* $tmp800 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts715, i781);
        panda$core$String* $tmp801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp799, ((panda$core$String*) $tmp800));
        panda$core$String* $tmp803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp801, &$s802);
        (($fn804) ((panda$io$OutputStream*) out634)->$class->vtable[16])(((panda$io$OutputStream*) out634), $tmp803);
    }
    $l789:;
    int64_t $tmp806 = $tmp784 - i781.value;
    if ($tmp785) goto $l807; else goto $l808;
    $l807:;
    if ($tmp806 >= 1) goto $l805; else goto $l788;
    $l808:;
    if ($tmp806 > 1) goto $l805; else goto $l788;
    $l805:;
    i781.value += 1;
    goto $l786;
    $l788:;
    (($fn812) ((panda$io$OutputStream*) out634)->$class->vtable[19])(((panda$io$OutputStream*) out634), &$s811);
    org$pandalanguage$pandac$Type* $tmp813 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp814 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp813);
    if ($tmp814.value) {
    {
        panda$core$String* $tmp815 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType646);
        panda$core$String* $tmp817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp815, &$s816);
        panda$core$String* $tmp818 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, returnValue750, p_raw->returnType, effectiveReturnType646, out634);
        panda$core$String* $tmp819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp817, $tmp818);
        returnValue750 = $tmp819;
    }
    }
    panda$core$String* $tmp821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s820, returnValue750);
    panda$core$String* $tmp823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp821, &$s822);
    (($fn824) ((panda$io$OutputStream*) out634)->$class->vtable[19])(((panda$io$OutputStream*) out634), $tmp823);
    (($fn826) ((panda$io$OutputStream*) out634)->$class->vtable[19])(((panda$io$OutputStream*) out634), &$s825);
    self->varCount = oldVarCount645;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp828 = (org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) malloc(32);
    $tmp828->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class;
    $tmp828->refCount.value = 1;
    panda$core$String* $tmp830 = panda$core$MutableString$convert$R$panda$core$String(resultType654);
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp828, resultName650, $tmp830);
    result827 = $tmp828;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result827));
    (($fn831) p_rawOut->$class->vtable[15])(p_rawOut, ((panda$core$Object*) outBuffer631));
    return result827;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 oldVarCount833;
    panda$core$String* result834;
    panda$core$String* selfType840;
    org$pandalanguage$pandac$Type* actualMethodType863;
    org$pandalanguage$pandac$Type* inheritedMethodType865;
    panda$core$Range$LTpanda$core$Int64$GT $tmp867;
    panda$collections$Array* parameters907;
    panda$core$Range$LTpanda$core$Int64$GT $tmp910;
    panda$collections$Array* children937;
    org$pandalanguage$pandac$Position $tmp942;
    panda$core$String* unwrapped944;
    org$pandalanguage$pandac$Position $tmp947;
    panda$core$String* returnValue950;
    panda$core$Range$LTpanda$core$Int64$GT $tmp985;
    panda$core$Bit $tmp832 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp832.value);
    oldVarCount833 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$String* $tmp836 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s835, $tmp836);
    panda$core$String* $tmp839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp837, &$s838);
    result834 = $tmp839;
    panda$core$String* $tmp842 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s841, $tmp842);
    panda$core$String* $tmp845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp843, &$s844);
    selfType840 = $tmp845;
    (($fn847) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s846);
    panda$core$Bit $tmp848 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp848.value) {
    {
        (($fn850) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s849);
    }
    }
    panda$core$String* $tmp852 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s851, $tmp852);
    panda$core$String* $tmp855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp853, &$s854);
    panda$core$String* $tmp856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp855, result834);
    panda$core$String* $tmp858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp856, &$s857);
    panda$core$String* $tmp859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp858, selfType840);
    panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp859, &$s860);
    (($fn862) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp861);
    org$pandalanguage$pandac$Type* $tmp864 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType863 = $tmp864;
    org$pandalanguage$pandac$Type* $tmp866 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType865 = $tmp866;
    panda$core$Int64 $tmp868 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp867, ((panda$core$Int64) { 0 }), $tmp868, ((panda$core$Bit) { false }));
    int64_t $tmp870 = $tmp867.min.value;
    panda$core$Int64 i869 = { $tmp870 };
    int64_t $tmp872 = $tmp867.max.value;
    bool $tmp873 = $tmp867.inclusive.value;
    if ($tmp873) goto $l880; else goto $l881;
    $l880:;
    if ($tmp870 <= $tmp872) goto $l874; else goto $l876;
    $l881:;
    if ($tmp870 < $tmp872) goto $l874; else goto $l876;
    $l874:;
    {
        panda$core$Object* $tmp883 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType865->subtypes, i869);
        panda$core$String* $tmp884 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp883));
        panda$core$String* $tmp885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s882, $tmp884);
        panda$core$String* $tmp887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp885, &$s886);
        panda$core$Object* $tmp888 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i869);
        panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp887, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp888)->name);
        panda$core$String* $tmp891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp889, &$s890);
        (($fn892) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp891);
    }
    $l877:;
    int64_t $tmp894 = $tmp872 - i869.value;
    if ($tmp873) goto $l895; else goto $l896;
    $l895:;
    if ($tmp894 >= 1) goto $l893; else goto $l876;
    $l896:;
    if ($tmp894 > 1) goto $l893; else goto $l876;
    $l893:;
    i869.value += 1;
    goto $l874;
    $l876:;
    (($fn900) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s899);
    panda$core$Int64 $tmp901 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp901;
    panda$core$String* $tmp903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s902, selfType840);
    panda$core$String* $tmp905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp903, &$s904);
    (($fn906) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp905);
    panda$collections$Array* $tmp908 = (panda$collections$Array*) malloc(40);
    $tmp908->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp908->refCount.value = 1;
    panda$collections$Array$init($tmp908);
    parameters907 = $tmp908;
    panda$core$Int64 $tmp911 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp910, ((panda$core$Int64) { 0 }), $tmp911, ((panda$core$Bit) { false }));
    int64_t $tmp913 = $tmp910.min.value;
    panda$core$Int64 i912 = { $tmp913 };
    int64_t $tmp915 = $tmp910.max.value;
    bool $tmp916 = $tmp910.inclusive.value;
    if ($tmp916) goto $l923; else goto $l924;
    $l923:;
    if ($tmp913 <= $tmp915) goto $l917; else goto $l919;
    $l924:;
    if ($tmp913 < $tmp915) goto $l917; else goto $l919;
    $l917:;
    {
        panda$core$Object* $tmp926 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i912);
        panda$core$String* $tmp927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s925, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp926)->name);
        panda$core$Object* $tmp928 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType865->subtypes, i912);
        panda$core$Object* $tmp929 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType863->subtypes, i912);
        panda$core$String* $tmp930 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp927, ((org$pandalanguage$pandac$Type*) $tmp928), ((org$pandalanguage$pandac$Type*) $tmp929), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters907, ((panda$core$Object*) $tmp930));
    }
    $l920:;
    int64_t $tmp932 = $tmp915 - i912.value;
    if ($tmp916) goto $l933; else goto $l934;
    $l933:;
    if ($tmp932 >= 1) goto $l931; else goto $l919;
    $l934:;
    if ($tmp932 > 1) goto $l931; else goto $l919;
    $l931:;
    i912.value += 1;
    goto $l917;
    $l919:;
    panda$collections$Array* $tmp938 = (panda$collections$Array*) malloc(40);
    $tmp938->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp938->refCount.value = 1;
    panda$collections$Array$init($tmp938);
    children937 = $tmp938;
    org$pandalanguage$pandac$IRNode* $tmp940 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp940->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp940->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp942);
    org$pandalanguage$pandac$Type* $tmp943 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp940, ((panda$core$Int64) { 1025 }), $tmp942, $tmp943);
    panda$collections$Array$add$panda$collections$Array$T(children937, ((panda$core$Object*) $tmp940));
    org$pandalanguage$pandac$IRNode* $tmp945 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp945->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp945->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp947);
    org$pandalanguage$pandac$Type* $tmp948 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp945, ((panda$core$Int64) { 1009 }), $tmp947, $tmp948, ((panda$collections$ListView*) children937));
    panda$core$String* $tmp949 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp945, p_out);
    unwrapped944 = $tmp949;
    org$pandalanguage$pandac$Type* $tmp951 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp952 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp951);
    if ($tmp952.value) {
    {
        panda$core$String* $tmp953 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue950 = $tmp953;
        panda$core$String* $tmp955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s954, returnValue950);
        panda$core$String* $tmp957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp955, &$s956);
        (($fn958) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp957);
        panda$core$String* $tmp960 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s959, $tmp960);
        panda$core$String* $tmp963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp961, &$s962);
        panda$core$String* $tmp964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp963, returnValue950);
        panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp964, &$s965);
        returnValue950 = $tmp966;
    }
    }
    else {
    {
        returnValue950 = &$s967;
    }
    }
    panda$core$String* $tmp969 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s968, $tmp969);
    panda$core$String* $tmp972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp970, &$s971);
    panda$core$String* $tmp973 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp972, $tmp973);
    panda$core$String* $tmp976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp974, &$s975);
    panda$core$String* $tmp977 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp976, $tmp977);
    panda$core$String* $tmp980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp978, &$s979);
    panda$core$String* $tmp981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp980, unwrapped944);
    panda$core$String* $tmp983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp981, &$s982);
    (($fn984) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp983);
    panda$core$Int64 $tmp986 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp985, ((panda$core$Int64) { 0 }), $tmp986, ((panda$core$Bit) { false }));
    int64_t $tmp988 = $tmp985.min.value;
    panda$core$Int64 i987 = { $tmp988 };
    int64_t $tmp990 = $tmp985.max.value;
    bool $tmp991 = $tmp985.inclusive.value;
    if ($tmp991) goto $l998; else goto $l999;
    $l998:;
    if ($tmp988 <= $tmp990) goto $l992; else goto $l994;
    $l999:;
    if ($tmp988 < $tmp990) goto $l992; else goto $l994;
    $l992:;
    {
        panda$core$Object* $tmp1001 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType863->subtypes, i987);
        panda$core$String* $tmp1002 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1001));
        panda$core$String* $tmp1003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1000, $tmp1002);
        panda$core$String* $tmp1005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1003, &$s1004);
        panda$core$Object* $tmp1006 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters907, i987);
        panda$core$String* $tmp1007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1005, ((panda$core$String*) $tmp1006));
        panda$core$String* $tmp1009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1007, &$s1008);
        (($fn1010) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1009);
    }
    $l995:;
    int64_t $tmp1012 = $tmp990 - i987.value;
    if ($tmp991) goto $l1013; else goto $l1014;
    $l1013:;
    if ($tmp1012 >= 1) goto $l1011; else goto $l994;
    $l1014:;
    if ($tmp1012 > 1) goto $l1011; else goto $l994;
    $l1011:;
    i987.value += 1;
    goto $l992;
    $l994:;
    (($fn1018) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1017);
    panda$core$String* $tmp1020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1019, returnValue950);
    panda$core$String* $tmp1022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1020, &$s1021);
    (($fn1023) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1022);
    panda$core$Int64 $tmp1024 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1024;
    (($fn1026) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1025);
    self->varCount = oldVarCount833;
    return result834;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces1027;
    panda$core$String* previous1030;
    panda$collections$Iterator* intfType$Iter1032;
    org$pandalanguage$pandac$Type* intfType1044;
    org$pandalanguage$pandac$ClassDecl* intf1049;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC1051;
    panda$collections$ListView* methods1053;
    panda$core$String* name1055;
    panda$core$String* t1065;
    panda$core$MutableString* result1079;
    panda$core$String* separator1119;
    panda$collections$Iterator* m$Iter1121;
    org$pandalanguage$pandac$MethodDecl* m1133;
    panda$core$String* shim1141;
    org$pandalanguage$pandac$Type* $tmp1028 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp1029 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp1028);
    interfaces1027 = $tmp1029;
    previous1030 = &$s1031;
    {
        ITable* $tmp1033 = ((panda$collections$Iterable*) interfaces1027)->$class->itable;
        while ($tmp1033->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1033 = $tmp1033->next;
        }
        $fn1035 $tmp1034 = $tmp1033->methods[0];
        panda$collections$Iterator* $tmp1036 = $tmp1034(((panda$collections$Iterable*) interfaces1027));
        intfType$Iter1032 = $tmp1036;
        $l1037:;
        ITable* $tmp1039 = intfType$Iter1032->$class->itable;
        while ($tmp1039->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1039 = $tmp1039->next;
        }
        $fn1041 $tmp1040 = $tmp1039->methods[0];
        panda$core$Bit $tmp1042 = $tmp1040(intfType$Iter1032);
        panda$core$Bit $tmp1043 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1042);
        if (!$tmp1043.value) goto $l1038;
        {
            ITable* $tmp1045 = intfType$Iter1032->$class->itable;
            while ($tmp1045->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1045 = $tmp1045->next;
            }
            $fn1047 $tmp1046 = $tmp1045->methods[1];
            panda$core$Object* $tmp1048 = $tmp1046(intfType$Iter1032);
            intfType1044 = ((org$pandalanguage$pandac$Type*) $tmp1048);
            org$pandalanguage$pandac$ClassDecl* $tmp1050 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType1044);
            intf1049 = $tmp1050;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1052 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf1049);
            intfCC1051 = $tmp1052;
            panda$collections$ListView* $tmp1054 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType1044);
            methods1053 = $tmp1054;
            panda$core$String* $tmp1057 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1056, $tmp1057);
            panda$core$String* $tmp1060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1058, &$s1059);
            panda$core$String* $tmp1061 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf1049)->name);
            panda$core$String* $tmp1062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1060, $tmp1061);
            panda$core$String* $tmp1064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1062, &$s1063);
            name1055 = $tmp1064;
            org$pandalanguage$pandac$Type* $tmp1067 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1068 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1067);
            panda$core$String* $tmp1069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1066, $tmp1068);
            panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1069, &$s1070);
            ITable* $tmp1072 = ((panda$collections$CollectionView*) methods1053)->$class->itable;
            while ($tmp1072->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1072 = $tmp1072->next;
            }
            $fn1074 $tmp1073 = $tmp1072->methods[0];
            panda$core$Int64 $tmp1075 = $tmp1073(((panda$collections$CollectionView*) methods1053));
            panda$core$String* $tmp1076 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1071, ((panda$core$Object*) wrap_panda$core$Int64($tmp1075)));
            panda$core$String* $tmp1078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1076, &$s1077);
            t1065 = $tmp1078;
            panda$core$MutableString* $tmp1080 = (panda$core$MutableString*) malloc(40);
            $tmp1080->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1080->refCount.value = 1;
            panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1082, name1055);
            panda$core$String* $tmp1085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1083, &$s1084);
            panda$core$String* $tmp1086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1085, t1065);
            panda$core$String* $tmp1088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1086, &$s1087);
            org$pandalanguage$pandac$Type* $tmp1089 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1090 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1089);
            panda$core$String* $tmp1091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1088, $tmp1090);
            panda$core$String* $tmp1093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1091, &$s1092);
            panda$core$String* $tmp1095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1094, intfCC1051->type);
            panda$core$String* $tmp1097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1095, &$s1096);
            panda$core$String* $tmp1098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1097, intfCC1051->name);
            panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1098, &$s1099);
            org$pandalanguage$pandac$Type* $tmp1101 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1102 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1101);
            panda$core$String* $tmp1103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1100, $tmp1102);
            panda$core$String* $tmp1105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1103, &$s1104);
            panda$core$String* $tmp1106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1093, $tmp1105);
            panda$core$String* $tmp1108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1107, previous1030);
            panda$core$String* $tmp1110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1108, &$s1109);
            ITable* $tmp1111 = ((panda$collections$CollectionView*) methods1053)->$class->itable;
            while ($tmp1111->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1111 = $tmp1111->next;
            }
            $fn1113 $tmp1112 = $tmp1111->methods[0];
            panda$core$Int64 $tmp1114 = $tmp1112(((panda$collections$CollectionView*) methods1053));
            panda$core$String* $tmp1115 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1110, ((panda$core$Object*) wrap_panda$core$Int64($tmp1114)));
            panda$core$String* $tmp1117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1115, &$s1116);
            panda$core$String* $tmp1118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1106, $tmp1117);
            panda$core$MutableString$init$panda$core$String($tmp1080, $tmp1118);
            result1079 = $tmp1080;
            separator1119 = &$s1120;
            {
                ITable* $tmp1122 = ((panda$collections$Iterable*) methods1053)->$class->itable;
                while ($tmp1122->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1122 = $tmp1122->next;
                }
                $fn1124 $tmp1123 = $tmp1122->methods[0];
                panda$collections$Iterator* $tmp1125 = $tmp1123(((panda$collections$Iterable*) methods1053));
                m$Iter1121 = $tmp1125;
                $l1126:;
                ITable* $tmp1128 = m$Iter1121->$class->itable;
                while ($tmp1128->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1128 = $tmp1128->next;
                }
                $fn1130 $tmp1129 = $tmp1128->methods[0];
                panda$core$Bit $tmp1131 = $tmp1129(m$Iter1121);
                panda$core$Bit $tmp1132 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1131);
                if (!$tmp1132.value) goto $l1127;
                {
                    ITable* $tmp1134 = m$Iter1121->$class->itable;
                    while ($tmp1134->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1134 = $tmp1134->next;
                    }
                    $fn1136 $tmp1135 = $tmp1134->methods[1];
                    panda$core$Object* $tmp1137 = $tmp1135(m$Iter1121);
                    m1133 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1137);
                    panda$core$MutableString$append$panda$core$String(result1079, separator1119);
                    separator1119 = &$s1138;
                    panda$core$Bit $tmp1139 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1133->annotations);
                    if ($tmp1139.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1079, &$s1140);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp1142 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1133, self->wrapperShims);
                        shim1141 = $tmp1142;
                        panda$core$String* $tmp1144 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1133);
                        panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1143, $tmp1144);
                        panda$core$String* $tmp1147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1145, &$s1146);
                        panda$core$String* $tmp1148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1147, shim1141);
                        panda$core$String* $tmp1150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1148, &$s1149);
                        panda$core$MutableString$append$panda$core$String(result1079, $tmp1150);
                    }
                    }
                }
                goto $l1126;
                $l1127:;
            }
            panda$core$MutableString$append$panda$core$String(result1079, &$s1151);
            (($fn1152) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result1079));
            panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1153, t1065);
            panda$core$String* $tmp1156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1154, &$s1155);
            panda$core$String* $tmp1157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1156, name1055);
            panda$core$String* $tmp1159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1157, &$s1158);
            previous1030 = $tmp1159;
        }
        goto $l1037;
        $l1038:;
    }
    return previous1030;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result1162;
    panda$core$Bit $tmp1160 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp1161 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1160);
    if ($tmp1161.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp1165 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1164 = $tmp1165.value;
    if (!$tmp1164) goto $l1166;
    panda$core$Bit $tmp1167 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp1164 = $tmp1167.value;
    $l1166:;
    panda$core$Bit $tmp1168 = { $tmp1164 };
    bool $tmp1163 = $tmp1168.value;
    if (!$tmp1163) goto $l1169;
    org$pandalanguage$pandac$ClassDecl* $tmp1170 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp1171 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp1170);
    $tmp1163 = $tmp1171.value;
    $l1169:;
    panda$core$Bit $tmp1172 = { $tmp1163 };
    result1162 = $tmp1172;
    panda$core$Bit $tmp1174 = panda$core$Bit$$NOT$R$panda$core$Bit(result1162);
    bool $tmp1173 = $tmp1174.value;
    if ($tmp1173) goto $l1175;
    panda$core$Bit $tmp1177 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp1178 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1177);
    bool $tmp1176 = $tmp1178.value;
    if (!$tmp1176) goto $l1179;
    panda$core$Bit $tmp1181 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1180 = $tmp1181.value;
    if ($tmp1180) goto $l1182;
    panda$core$Bit $tmp1183 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp1180 = $tmp1183.value;
    $l1182:;
    panda$core$Bit $tmp1184 = { $tmp1180 };
    $tmp1176 = $tmp1184.value;
    $l1179:;
    panda$core$Bit $tmp1185 = { $tmp1176 };
    $tmp1173 = $tmp1185.value;
    $l1175:;
    panda$core$Bit $tmp1186 = { $tmp1173 };
    PANDA_ASSERT($tmp1186.value);
    return result1162;
}
org$pandalanguage$pandac$LLVMCodeGenerator$Pair* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* resultName1187;
    org$pandalanguage$pandac$Type* declared1188;
    org$pandalanguage$pandac$Type* inherited1191;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* shim1194;
    panda$core$MutableString* resultType1199;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1208;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    if (p_m->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp1189 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp1190 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp1189);
    declared1188 = $tmp1190;
    org$pandalanguage$pandac$Type* $tmp1192 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited1191 = $tmp1192;
    panda$core$Bit $tmp1193 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared1188, inherited1191);
    if ($tmp1193.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1195 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1196 = org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(self, p_m, $tmp1195, ((panda$io$OutputStream*) self->shims));
        shim1194 = $tmp1196;
        resultName1187 = shim1194->name;
    }
    }
    else {
    {
        panda$core$String* $tmp1197 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        resultName1187 = $tmp1197;
    }
    }
    panda$core$Bit $tmp1198 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp1198.value) {
    {
        panda$core$MutableString* $tmp1200 = (panda$core$MutableString*) malloc(40);
        $tmp1200->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1200->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp1200, &$s1202);
        resultType1199 = $tmp1200;
        panda$core$Int64 $tmp1203 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1191->subtypes);
        panda$core$Int64 $tmp1204 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1203, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1205 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1191->subtypes, $tmp1204);
        panda$core$String* $tmp1206 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1205));
        panda$core$MutableString$append$panda$core$String(resultType1199, $tmp1206);
        panda$core$MutableString$append$panda$core$String(resultType1199, &$s1207);
        panda$core$Int64 $tmp1209 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1191->subtypes);
        panda$core$Int64 $tmp1210 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1209, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1208, ((panda$core$Int64) { 0 }), $tmp1210, ((panda$core$Bit) { false }));
        int64_t $tmp1212 = $tmp1208.min.value;
        panda$core$Int64 i1211 = { $tmp1212 };
        int64_t $tmp1214 = $tmp1208.max.value;
        bool $tmp1215 = $tmp1208.inclusive.value;
        if ($tmp1215) goto $l1222; else goto $l1223;
        $l1222:;
        if ($tmp1212 <= $tmp1214) goto $l1216; else goto $l1218;
        $l1223:;
        if ($tmp1212 < $tmp1214) goto $l1216; else goto $l1218;
        $l1216:;
        {
            panda$core$MutableString$append$panda$core$String(resultType1199, &$s1224);
            panda$core$Object* $tmp1225 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1191->subtypes, i1211);
            panda$core$String* $tmp1226 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1225));
            panda$core$MutableString$append$panda$core$String(resultType1199, $tmp1226);
        }
        $l1219:;
        int64_t $tmp1228 = $tmp1214 - i1211.value;
        if ($tmp1215) goto $l1229; else goto $l1230;
        $l1229:;
        if ($tmp1228 >= 1) goto $l1227; else goto $l1218;
        $l1230:;
        if ($tmp1228 > 1) goto $l1227; else goto $l1218;
        $l1227:;
        i1211.value += 1;
        goto $l1216;
        $l1218:;
        panda$core$MutableString$append$panda$core$String(resultType1199, &$s1233);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1234 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
        $tmp1234->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
        $tmp1234->refCount.value = 1;
        panda$core$String* $tmp1236 = panda$core$MutableString$convert$R$panda$core$String(resultType1199);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1234, ((panda$core$Object*) resultName1187), ((panda$core$Object*) $tmp1236));
        return $tmp1234;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1237 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
    $tmp1237->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
    $tmp1237->refCount.value = 1;
    panda$core$String* $tmp1239 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, inherited1191);
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1237, ((panda$core$Object*) resultName1187), ((panda$core$Object*) $tmp1239));
    return $tmp1237;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1242;
    panda$core$String* type1244;
    panda$collections$ListView* vtable1263;
    panda$core$String* superPtr1287;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1288;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1299;
    panda$core$MutableString* code1303;
    panda$core$String* separator1346;
    panda$collections$Iterator* m$Iter1348;
    org$pandalanguage$pandac$MethodDecl* m1360;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry1367;
    panda$core$Bit $tmp1240 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp1241 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1240);
    PANDA_ASSERT($tmp1241.value);
    panda$core$Object* $tmp1243 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result1242 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1243);
    if (((panda$core$Bit) { result1242 == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1245 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1245->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1245->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1248 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp1249 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1248)->name);
            panda$core$String* $tmp1250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1247, $tmp1249);
            panda$core$String* $tmp1252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1250, &$s1251);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1245, $tmp1252, &$s1253);
            result1242 = $tmp1245;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1242));
            panda$core$String* $tmp1255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1254, result1242->name);
            panda$core$String* $tmp1257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1255, &$s1256);
            panda$core$String* $tmp1258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1257, result1242->type);
            panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1258, &$s1259);
            (($fn1261) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1260);
            panda$core$Object* $tmp1262 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1262);
        }
        }
        panda$collections$ListView* $tmp1264 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable1263 = $tmp1264;
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1265 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
        $tmp1265->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
        $tmp1265->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1268 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp1269 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1268)->name);
        panda$core$String* $tmp1270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1267, $tmp1269);
        panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1270, &$s1271);
        panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1273, &$s1274);
        panda$core$String* $tmp1277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1275, &$s1276);
        ITable* $tmp1279 = ((panda$collections$CollectionView*) vtable1263)->$class->itable;
        while ($tmp1279->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1279 = $tmp1279->next;
        }
        $fn1281 $tmp1280 = $tmp1279->methods[0];
        panda$core$Int64 $tmp1282 = $tmp1280(((panda$collections$CollectionView*) vtable1263));
        panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1278, ((panda$core$Object*) wrap_panda$core$Int64($tmp1282)));
        panda$core$String* $tmp1285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1283, &$s1284);
        panda$core$String* $tmp1286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1277, $tmp1285);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1265, $tmp1272, $tmp1286);
        result1242 = $tmp1265;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1242));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1289 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1290 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1289);
            superCC1288 = $tmp1290;
            panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1291, superCC1288->type);
            panda$core$String* $tmp1294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1292, &$s1293);
            panda$core$String* $tmp1295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1294, superCC1288->name);
            panda$core$String* $tmp1297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1295, &$s1296);
            superPtr1287 = $tmp1297;
        }
        }
        else {
        {
            superPtr1287 = &$s1298;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1300 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1301 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1300);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1302 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1301);
        clConstant1299 = $tmp1302;
        panda$core$MutableString* $tmp1304 = (panda$core$MutableString*) malloc(40);
        $tmp1304->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1304->refCount.value = 1;
        panda$core$String* $tmp1307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1306, result1242->name);
        panda$core$String* $tmp1309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1307, &$s1308);
        panda$core$MutableString$init$panda$core$String($tmp1304, $tmp1309);
        code1303 = $tmp1304;
        panda$core$Bit $tmp1310 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
        if ($tmp1310.value) {
        {
            panda$core$MutableString$append$panda$core$String(code1303, &$s1311);
        }
        }
        panda$core$String* $tmp1313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1312, result1242->type);
        panda$core$String* $tmp1315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1313, &$s1314);
        panda$core$String* $tmp1317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1316, clConstant1299->type);
        panda$core$String* $tmp1319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1317, &$s1318);
        panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1319, clConstant1299->name);
        panda$core$String* $tmp1322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1320, &$s1321);
        panda$core$String* $tmp1323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1315, $tmp1322);
        panda$core$String* $tmp1326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1324, &$s1325);
        panda$core$String* $tmp1328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1326, &$s1327);
        panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1328, superPtr1287);
        panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1329, &$s1330);
        panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1323, $tmp1331);
        panda$core$String* $tmp1334 = org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1333, $tmp1334);
        panda$core$String* $tmp1337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1335, &$s1336);
        ITable* $tmp1338 = ((panda$collections$CollectionView*) vtable1263)->$class->itable;
        while ($tmp1338->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1338 = $tmp1338->next;
        }
        $fn1340 $tmp1339 = $tmp1338->methods[0];
        panda$core$Int64 $tmp1341 = $tmp1339(((panda$collections$CollectionView*) vtable1263));
        panda$core$String* $tmp1342 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1337, ((panda$core$Object*) wrap_panda$core$Int64($tmp1341)));
        panda$core$String* $tmp1344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1342, &$s1343);
        panda$core$String* $tmp1345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1332, $tmp1344);
        panda$core$MutableString$append$panda$core$String(code1303, $tmp1345);
        separator1346 = &$s1347;
        {
            ITable* $tmp1349 = ((panda$collections$Iterable*) vtable1263)->$class->itable;
            while ($tmp1349->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1349 = $tmp1349->next;
            }
            $fn1351 $tmp1350 = $tmp1349->methods[0];
            panda$collections$Iterator* $tmp1352 = $tmp1350(((panda$collections$Iterable*) vtable1263));
            m$Iter1348 = $tmp1352;
            $l1353:;
            ITable* $tmp1355 = m$Iter1348->$class->itable;
            while ($tmp1355->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1355 = $tmp1355->next;
            }
            $fn1357 $tmp1356 = $tmp1355->methods[0];
            panda$core$Bit $tmp1358 = $tmp1356(m$Iter1348);
            panda$core$Bit $tmp1359 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1358);
            if (!$tmp1359.value) goto $l1354;
            {
                ITable* $tmp1361 = m$Iter1348->$class->itable;
                while ($tmp1361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1361 = $tmp1361->next;
                }
                $fn1363 $tmp1362 = $tmp1361->methods[1];
                panda$core$Object* $tmp1364 = $tmp1362(m$Iter1348);
                m1360 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1364);
                panda$core$MutableString$append$panda$core$String(code1303, separator1346);
                panda$core$Bit $tmp1365 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1360->annotations);
                if ($tmp1365.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code1303, &$s1366);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1368 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m1360);
                    entry1367 = $tmp1368;
                    panda$core$String* $tmp1370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1369, ((panda$core$String*) entry1367->second));
                    panda$core$String* $tmp1372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1370, &$s1371);
                    panda$core$String* $tmp1373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1372, ((panda$core$String*) entry1367->first));
                    panda$core$String* $tmp1375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1373, &$s1374);
                    panda$core$MutableString$append$panda$core$String(code1303, $tmp1375);
                }
                }
                separator1346 = &$s1376;
            }
            goto $l1353;
            $l1354:;
        }
        panda$core$MutableString$append$panda$core$String(code1303, &$s1377);
        (($fn1378) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1303));
    }
    }
    return result1242;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1379;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1385;
    panda$core$String* type1388;
    org$pandalanguage$pandac$ClassDecl* value1400;
    panda$collections$ListView* valueVTable1403;
    panda$collections$ListView* vtable1426;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1428;
    panda$core$String* superCast1431;
    panda$core$String* itable1439;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1441;
    panda$core$MutableString* code1445;
    panda$core$String* separator1492;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1494;
    org$pandalanguage$pandac$MethodDecl* m1512;
    panda$core$String* methodName1517;
    PANDA_ASSERT(p_cl->resolved.value);
    panda$core$String* $tmp1381 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1380, $tmp1381);
    panda$core$String* $tmp1384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1382, &$s1383);
    name1379 = $tmp1384;
    panda$core$Object* $tmp1386 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name1379));
    result1385 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1386);
    if (((panda$core$Bit) { result1385 == NULL }).value) {
    {
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1387 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1387);
            type1388 = &$s1389;
            panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1390, name1379);
            panda$core$String* $tmp1393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1391, &$s1392);
            panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1393, type1388);
            panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1394, &$s1395);
            (($fn1397) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1396);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1398 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1398->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1398->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1398, name1379, type1388);
            result1385 = $tmp1398;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1401 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1402 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1401);
            value1400 = $tmp1402;
            panda$collections$ListView* $tmp1404 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1400);
            valueVTable1403 = $tmp1404;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1405 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1405->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1405->refCount.value = 1;
            panda$core$String* $tmp1408 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1407, $tmp1408);
            panda$core$String* $tmp1411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1409, &$s1410);
            panda$core$String* $tmp1414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1412, &$s1413);
            panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1414, &$s1415);
            ITable* $tmp1418 = ((panda$collections$CollectionView*) valueVTable1403)->$class->itable;
            while ($tmp1418->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1418 = $tmp1418->next;
            }
            $fn1420 $tmp1419 = $tmp1418->methods[0];
            panda$core$Int64 $tmp1421 = $tmp1419(((panda$collections$CollectionView*) valueVTable1403));
            panda$core$String* $tmp1422 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1417, ((panda$core$Object*) wrap_panda$core$Int64($tmp1421)));
            panda$core$String* $tmp1424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1422, &$s1423);
            panda$core$String* $tmp1425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1416, $tmp1424);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1405, $tmp1411, $tmp1425);
            result1385 = $tmp1405;
            panda$collections$ListView* $tmp1427 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1426 = $tmp1427;
            org$pandalanguage$pandac$ClassDecl* $tmp1429 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1430 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1429);
            superCC1428 = $tmp1430;
            panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1432, superCC1428->type);
            panda$core$String* $tmp1435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1433, &$s1434);
            panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1435, superCC1428->name);
            panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1436, &$s1437);
            superCast1431 = $tmp1438;
            panda$core$String* $tmp1440 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1439 = $tmp1440;
            org$pandalanguage$pandac$Type* $tmp1442 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1443 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1442);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1444 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1443);
            clConstant1441 = $tmp1444;
            panda$core$MutableString* $tmp1446 = (panda$core$MutableString*) malloc(40);
            $tmp1446->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1446->refCount.value = 1;
            panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1448, result1385->name);
            panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1449, &$s1450);
            panda$core$MutableString$init$panda$core$String($tmp1446, $tmp1451);
            code1445 = $tmp1446;
            panda$core$Bit $tmp1452 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp1452.value) {
            {
                panda$core$MutableString$append$panda$core$String(code1445, &$s1453);
            }
            }
            panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1454, result1385->type);
            panda$core$String* $tmp1457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1455, &$s1456);
            panda$core$String* $tmp1459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1458, clConstant1441->type);
            panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1459, &$s1460);
            panda$core$String* $tmp1462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1461, clConstant1441->name);
            panda$core$String* $tmp1464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1462, &$s1463);
            panda$core$String* $tmp1465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1457, $tmp1464);
            panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1466, &$s1467);
            panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1468, &$s1469);
            org$pandalanguage$pandac$Type* $tmp1471 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1472 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1471);
            panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1470, $tmp1472);
            panda$core$String* $tmp1475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1473, &$s1474);
            panda$core$String* $tmp1476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1475, superCast1431);
            panda$core$String* $tmp1478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1476, &$s1477);
            panda$core$String* $tmp1479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1465, $tmp1478);
            panda$core$String* $tmp1481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1480, itable1439);
            panda$core$String* $tmp1483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1481, &$s1482);
            ITable* $tmp1484 = ((panda$collections$CollectionView*) valueVTable1403)->$class->itable;
            while ($tmp1484->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1484 = $tmp1484->next;
            }
            $fn1486 $tmp1485 = $tmp1484->methods[0];
            panda$core$Int64 $tmp1487 = $tmp1485(((panda$collections$CollectionView*) valueVTable1403));
            panda$core$String* $tmp1488 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1483, ((panda$core$Object*) wrap_panda$core$Int64($tmp1487)));
            panda$core$String* $tmp1490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1488, &$s1489);
            panda$core$String* $tmp1491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1479, $tmp1490);
            panda$core$MutableString$append$panda$core$String(code1445, $tmp1491);
            separator1492 = &$s1493;
            ITable* $tmp1495 = ((panda$collections$CollectionView*) valueVTable1403)->$class->itable;
            while ($tmp1495->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1495 = $tmp1495->next;
            }
            $fn1497 $tmp1496 = $tmp1495->methods[0];
            panda$core$Int64 $tmp1498 = $tmp1496(((panda$collections$CollectionView*) valueVTable1403));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1494, ((panda$core$Int64) { 0 }), $tmp1498, ((panda$core$Bit) { false }));
            int64_t $tmp1500 = $tmp1494.min.value;
            panda$core$Int64 i1499 = { $tmp1500 };
            int64_t $tmp1502 = $tmp1494.max.value;
            bool $tmp1503 = $tmp1494.inclusive.value;
            if ($tmp1503) goto $l1510; else goto $l1511;
            $l1510:;
            if ($tmp1500 <= $tmp1502) goto $l1504; else goto $l1506;
            $l1511:;
            if ($tmp1500 < $tmp1502) goto $l1504; else goto $l1506;
            $l1504:;
            {
                ITable* $tmp1513 = vtable1426->$class->itable;
                while ($tmp1513->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1513 = $tmp1513->next;
                }
                $fn1515 $tmp1514 = $tmp1513->methods[0];
                panda$core$Object* $tmp1516 = $tmp1514(vtable1426, i1499);
                m1512 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1516);
                if (((panda$core$Bit) { ((panda$core$Object*) m1512->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1518 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1512, self->wrapperShims);
                    methodName1517 = $tmp1518;
                }
                }
                else {
                {
                    panda$core$String* $tmp1519 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1512);
                    methodName1517 = $tmp1519;
                    if (m1512->owner->external.value) {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1512);
                    }
                    }
                }
                }
                panda$core$String* $tmp1521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1520, separator1492);
                panda$core$String* $tmp1523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1521, &$s1522);
                panda$core$String* $tmp1524 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1512);
                panda$core$String* $tmp1525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1523, $tmp1524);
                panda$core$String* $tmp1527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1525, &$s1526);
                panda$core$String* $tmp1528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1527, methodName1517);
                panda$core$String* $tmp1530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1528, &$s1529);
                panda$core$MutableString$append$panda$core$String(code1445, $tmp1530);
                separator1492 = &$s1531;
            }
            $l1507:;
            int64_t $tmp1533 = $tmp1502 - i1499.value;
            if ($tmp1503) goto $l1534; else goto $l1535;
            $l1534:;
            if ($tmp1533 >= 1) goto $l1532; else goto $l1506;
            $l1535:;
            if ($tmp1533 > 1) goto $l1532; else goto $l1506;
            $l1532:;
            i1499.value += 1;
            goto $l1504;
            $l1506:;
            panda$core$MutableString$append$panda$core$String(code1445, &$s1538);
            (($fn1539) ((panda$io$OutputStream*) self->types)->$class->vtable[15])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1445));
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name1379), ((panda$core$Object*) result1385));
    }
    }
    return result1385;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp1542 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_s, &$s1540, &$s1541);
    panda$core$String* $tmp1545 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1542, &$s1543, &$s1544);
    panda$core$String* $tmp1548 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1545, &$s1546, &$s1547);
    panda$core$String* $tmp1551 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1548, &$s1549, &$s1550);
    panda$core$String* $tmp1554 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1551, &$s1552, &$s1553);
    panda$core$String* $tmp1557 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1554, &$s1555, &$s1556);
    return $tmp1557;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1561;
    panda$core$String* result1589;
    panda$core$Bit $tmp1558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1558.value) {
    {
        panda$core$Int64 $tmp1559 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp1560 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1559, ((panda$core$Int64) { 0 }));
        if ($tmp1560.value) {
        {
            panda$core$Int64 $tmp1562 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1561, ((panda$core$Int64) { 0 }), $tmp1562, ((panda$core$Bit) { false }));
            int64_t $tmp1564 = $tmp1561.min.value;
            panda$core$Int64 i1563 = { $tmp1564 };
            int64_t $tmp1566 = $tmp1561.max.value;
            bool $tmp1567 = $tmp1561.inclusive.value;
            if ($tmp1567) goto $l1574; else goto $l1575;
            $l1574:;
            if ($tmp1564 <= $tmp1566) goto $l1568; else goto $l1570;
            $l1575:;
            if ($tmp1564 < $tmp1566) goto $l1568; else goto $l1570;
            $l1568:;
            {
                panda$core$Object* $tmp1576 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1563);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1576)->name) }).value) {
                {
                    panda$core$Object* $tmp1577 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
                    panda$core$Object* $tmp1578 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1577)->argRefs, i1563);
                    return ((panda$core$String*) $tmp1578);
                }
                }
            }
            $l1571:;
            int64_t $tmp1580 = $tmp1566 - i1563.value;
            if ($tmp1567) goto $l1581; else goto $l1582;
            $l1581:;
            if ($tmp1580 >= 1) goto $l1579; else goto $l1570;
            $l1582:;
            if ($tmp1580 > 1) goto $l1579; else goto $l1570;
            $l1579:;
            i1563.value += 1;
            goto $l1568;
            $l1570:;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp1586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1585, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1586, &$s1587);
        return $tmp1588;
    }
    }
    panda$core$Object* $tmp1590 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1589 = ((panda$core$String*) $tmp1590);
    if (((panda$core$Bit) { result1589 == NULL }).value) {
    {
        panda$core$Int64 $tmp1591 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1591;
        panda$core$String* $tmp1593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1592, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1593, &$s1594);
        panda$core$String* $tmp1596 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1595, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1596, &$s1597);
        result1589 = $tmp1598;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1589));
    }
    }
    panda$core$Int64 $tmp1599 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp1600 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1599, ((panda$core$Int64) { 0 }));
    if ($tmp1600.value) {
    {
        panda$core$Object* $tmp1601 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        panda$core$String* $tmp1602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1589, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1601)->varSuffix);
        result1589 = $tmp1602;
    }
    }
    return result1589;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1606;
    panda$core$String* $match$846_91612;
    panda$collections$Iterator* p$Iter1689;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1701;
    panda$core$Bit $tmp1604 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1603);
    if ($tmp1604.value) {
    {
        return &$s1605;
    }
    }
    panda$core$MutableString* $tmp1607 = (panda$core$MutableString*) malloc(40);
    $tmp1607->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1607->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1607, &$s1609);
    result1606 = $tmp1607;
    panda$core$String* $tmp1610 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$MutableString$append$panda$core$String(result1606, $tmp1610);
    panda$core$MutableString$append$panda$core$String(result1606, &$s1611);
    {
        $match$846_91612 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1614 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1613);
        if ($tmp1614.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1615);
        }
        }
        else {
        panda$core$Bit $tmp1617 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1616);
        if ($tmp1617.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1618);
        }
        }
        else {
        panda$core$Bit $tmp1620 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1619);
        if ($tmp1620.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1621);
        }
        }
        else {
        panda$core$Bit $tmp1623 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1622);
        if ($tmp1623.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1624);
        }
        }
        else {
        panda$core$Bit $tmp1626 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1625);
        if ($tmp1626.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1627);
        }
        }
        else {
        panda$core$Bit $tmp1629 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1628);
        if ($tmp1629.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1630);
        }
        }
        else {
        panda$core$Bit $tmp1632 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1631);
        if ($tmp1632.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1633);
        }
        }
        else {
        panda$core$Bit $tmp1635 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1634);
        if ($tmp1635.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1636);
        }
        }
        else {
        panda$core$Bit $tmp1638 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1637);
        if ($tmp1638.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1639);
        }
        }
        else {
        panda$core$Bit $tmp1641 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1640);
        if ($tmp1641.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1642);
        }
        }
        else {
        panda$core$Bit $tmp1644 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1643);
        if ($tmp1644.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1645);
        }
        }
        else {
        panda$core$Bit $tmp1647 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1646);
        if ($tmp1647.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1648);
        }
        }
        else {
        panda$core$Bit $tmp1650 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1649);
        if ($tmp1650.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1651);
        }
        }
        else {
        panda$core$Bit $tmp1653 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1652);
        if ($tmp1653.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1654);
        }
        }
        else {
        panda$core$Bit $tmp1656 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1655);
        if ($tmp1656.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1657);
        }
        }
        else {
        panda$core$Bit $tmp1659 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1658);
        if ($tmp1659.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1660);
        }
        }
        else {
        panda$core$Bit $tmp1662 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1661);
        if ($tmp1662.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1663);
        }
        }
        else {
        panda$core$Bit $tmp1665 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1664);
        if ($tmp1665.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1666);
        }
        }
        else {
        panda$core$Bit $tmp1668 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1667);
        if ($tmp1668.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1669);
        }
        }
        else {
        panda$core$Bit $tmp1671 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1670);
        if ($tmp1671.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1672);
        }
        }
        else {
        panda$core$Bit $tmp1674 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1673);
        if ($tmp1674.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1675);
        }
        }
        else {
        panda$core$Bit $tmp1677 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1676);
        if ($tmp1677.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1678);
        }
        }
        else {
        panda$core$Bit $tmp1680 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1679);
        if ($tmp1680.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1681);
        }
        }
        else {
        panda$core$Bit $tmp1683 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1682);
        if ($tmp1683.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1684);
        }
        }
        else {
        panda$core$Bit $tmp1686 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91612, &$s1685);
        if ($tmp1686.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1606, &$s1687);
        }
        }
        else {
        {
            panda$core$String* $tmp1688 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            panda$core$MutableString$append$panda$core$String(result1606, $tmp1688);
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        ITable* $tmp1690 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1690->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1690 = $tmp1690->next;
        }
        $fn1692 $tmp1691 = $tmp1690->methods[0];
        panda$collections$Iterator* $tmp1693 = $tmp1691(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1689 = $tmp1693;
        $l1694:;
        ITable* $tmp1696 = p$Iter1689->$class->itable;
        while ($tmp1696->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1696 = $tmp1696->next;
        }
        $fn1698 $tmp1697 = $tmp1696->methods[0];
        panda$core$Bit $tmp1699 = $tmp1697(p$Iter1689);
        panda$core$Bit $tmp1700 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1699);
        if (!$tmp1700.value) goto $l1695;
        {
            ITable* $tmp1702 = p$Iter1689->$class->itable;
            while ($tmp1702->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1702 = $tmp1702->next;
            }
            $fn1704 $tmp1703 = $tmp1702->methods[1];
            panda$core$Object* $tmp1705 = $tmp1703(p$Iter1689);
            p1701 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1705);
            panda$core$String* $tmp1707 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p1701->type)->name);
            panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1706, $tmp1707);
            panda$core$String* $tmp1710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, &$s1709);
            panda$core$MutableString$append$panda$core$String(result1606, $tmp1710);
        }
        goto $l1694;
        $l1695:;
    }
    org$pandalanguage$pandac$Type* $tmp1711 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1712 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1711);
    if ($tmp1712.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1606, &$s1713);
        panda$core$String* $tmp1714 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        panda$core$MutableString$append$panda$core$String(result1606, $tmp1714);
    }
    }
    panda$core$String* $tmp1715 = panda$core$MutableString$convert$R$panda$core$String(result1606);
    return $tmp1715;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1716 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1716.value);
    panda$core$String* $tmp1718 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1717, $tmp1718);
    panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1719, &$s1720);
    panda$core$String* $tmp1722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1721, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1722, &$s1723);
    return $tmp1724;
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
    panda$core$String* leftRef1725;
    panda$core$String* leftField1729;
    panda$core$String* start1739;
    panda$core$String* ifTrue1740;
    panda$core$String* ifFalse1742;
    panda$core$String* rightRef1755;
    panda$core$String* rightField1759;
    panda$core$String* truePred1769;
    panda$core$String* result1775;
    panda$core$String* $tmp1726 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1725 = $tmp1726;
    org$pandalanguage$pandac$Type* $tmp1727 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1728 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1727);
    if ($tmp1728.value) {
    {
        panda$core$String* $tmp1730 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1729 = $tmp1730;
        panda$core$String* $tmp1732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1731, leftField1729);
        panda$core$String* $tmp1734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1732, &$s1733);
        panda$core$String* $tmp1735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1734, leftRef1725);
        panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1735, &$s1736);
        (($fn1738) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1737);
        leftRef1725 = leftField1729;
    }
    }
    start1739 = self->currentBlock;
    panda$core$String* $tmp1741 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1740 = $tmp1741;
    panda$core$String* $tmp1743 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1742 = $tmp1743;
    panda$core$String* $tmp1745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1744, leftRef1725);
    panda$core$String* $tmp1747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1745, &$s1746);
    panda$core$String* $tmp1748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1747, ifTrue1740);
    panda$core$String* $tmp1750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1748, &$s1749);
    panda$core$String* $tmp1751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1750, ifFalse1742);
    panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1751, &$s1752);
    (($fn1754) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1753);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1740, p_out);
    panda$core$String* $tmp1756 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1755 = $tmp1756;
    org$pandalanguage$pandac$Type* $tmp1757 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1758 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1757);
    if ($tmp1758.value) {
    {
        panda$core$String* $tmp1760 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1759 = $tmp1760;
        panda$core$String* $tmp1762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1761, rightField1759);
        panda$core$String* $tmp1764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1762, &$s1763);
        panda$core$String* $tmp1765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1764, rightRef1755);
        panda$core$String* $tmp1767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1765, &$s1766);
        (($fn1768) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1767);
        rightRef1755 = rightField1759;
    }
    }
    truePred1769 = self->currentBlock;
    panda$core$String* $tmp1771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1770, ifFalse1742);
    panda$core$String* $tmp1773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1771, &$s1772);
    (($fn1774) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1773);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1742, p_out);
    panda$core$String* $tmp1776 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1775 = $tmp1776;
    panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1777, result1775);
    panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1778, &$s1779);
    panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1780, start1739);
    panda$core$String* $tmp1783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1781, &$s1782);
    panda$core$String* $tmp1784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1783, rightRef1755);
    panda$core$String* $tmp1786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1784, &$s1785);
    panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1786, truePred1769);
    panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1787, &$s1788);
    (($fn1790) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1789);
    return result1775;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1791;
    panda$core$String* leftField1795;
    panda$core$String* start1805;
    panda$core$String* ifTrue1806;
    panda$core$String* ifFalse1808;
    panda$core$String* rightRef1821;
    panda$core$String* rightField1825;
    panda$core$String* falsePred1835;
    panda$core$String* result1841;
    panda$core$String* $tmp1792 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1791 = $tmp1792;
    org$pandalanguage$pandac$Type* $tmp1793 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1794 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1793);
    if ($tmp1794.value) {
    {
        panda$core$String* $tmp1796 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1795 = $tmp1796;
        panda$core$String* $tmp1798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1797, leftField1795);
        panda$core$String* $tmp1800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1798, &$s1799);
        panda$core$String* $tmp1801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1800, leftRef1791);
        panda$core$String* $tmp1803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1801, &$s1802);
        (($fn1804) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1803);
        leftRef1791 = leftField1795;
    }
    }
    start1805 = self->currentBlock;
    panda$core$String* $tmp1807 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1806 = $tmp1807;
    panda$core$String* $tmp1809 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1808 = $tmp1809;
    panda$core$String* $tmp1811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1810, leftRef1791);
    panda$core$String* $tmp1813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1811, &$s1812);
    panda$core$String* $tmp1814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1813, ifTrue1806);
    panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1814, &$s1815);
    panda$core$String* $tmp1817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1816, ifFalse1808);
    panda$core$String* $tmp1819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1817, &$s1818);
    (($fn1820) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1819);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1808, p_out);
    panda$core$String* $tmp1822 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1821 = $tmp1822;
    org$pandalanguage$pandac$Type* $tmp1823 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1824 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1823);
    if ($tmp1824.value) {
    {
        panda$core$String* $tmp1826 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1825 = $tmp1826;
        panda$core$String* $tmp1828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1827, rightField1825);
        panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1828, &$s1829);
        panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, rightRef1821);
        panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1831, &$s1832);
        (($fn1834) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1833);
        rightRef1821 = rightField1825;
    }
    }
    falsePred1835 = self->currentBlock;
    panda$core$String* $tmp1837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1836, ifTrue1806);
    panda$core$String* $tmp1839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1837, &$s1838);
    (($fn1840) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1839);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1806, p_out);
    panda$core$String* $tmp1842 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1841 = $tmp1842;
    panda$core$String* $tmp1844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1843, result1841);
    panda$core$String* $tmp1846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1844, &$s1845);
    panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1846, start1805);
    panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1847, &$s1848);
    panda$core$String* $tmp1850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1849, rightRef1821);
    panda$core$String* $tmp1852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1850, &$s1851);
    panda$core$String* $tmp1853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1852, falsePred1835);
    panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1853, &$s1854);
    (($fn1856) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1855);
    return result1841;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* llvmOp1857;
    panda$core$String* result1900;
    switch (p_cl.value) {
        case 10121:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1857 = &$s1858;
                }
                break;
                case 52:
                {
                    llvmOp1857 = &$s1859;
                }
                break;
                case 53:
                {
                    llvmOp1857 = &$s1860;
                }
                break;
                case 55:
                {
                    llvmOp1857 = &$s1861;
                }
                break;
                case 56:
                {
                    llvmOp1857 = &$s1862;
                }
                break;
                case 72:
                {
                    llvmOp1857 = &$s1863;
                }
                break;
                case 1:
                {
                    llvmOp1857 = &$s1864;
                }
                break;
                case 67:
                {
                    llvmOp1857 = &$s1865;
                }
                break;
                case 69:
                {
                    llvmOp1857 = &$s1866;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1857 = &$s1867;
                }
                break;
                case 58:
                {
                    llvmOp1857 = &$s1868;
                }
                break;
                case 59:
                {
                    llvmOp1857 = &$s1869;
                }
                break;
                case 63:
                {
                    llvmOp1857 = &$s1870;
                }
                break;
                case 62:
                {
                    llvmOp1857 = &$s1871;
                }
                break;
                case 65:
                {
                    llvmOp1857 = &$s1872;
                }
                break;
                case 64:
                {
                    llvmOp1857 = &$s1873;
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
                    llvmOp1857 = &$s1874;
                }
                break;
                case 52:
                {
                    llvmOp1857 = &$s1875;
                }
                break;
                case 53:
                {
                    llvmOp1857 = &$s1876;
                }
                break;
                case 55:
                {
                    llvmOp1857 = &$s1877;
                }
                break;
                case 56:
                {
                    llvmOp1857 = &$s1878;
                }
                break;
                case 72:
                {
                    llvmOp1857 = &$s1879;
                }
                break;
                case 1:
                {
                    llvmOp1857 = &$s1880;
                }
                break;
                case 67:
                {
                    llvmOp1857 = &$s1881;
                }
                break;
                case 69:
                {
                    llvmOp1857 = &$s1882;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1857 = &$s1883;
                }
                break;
                case 58:
                {
                    llvmOp1857 = &$s1884;
                }
                break;
                case 59:
                {
                    llvmOp1857 = &$s1885;
                }
                break;
                case 63:
                {
                    llvmOp1857 = &$s1886;
                }
                break;
                case 62:
                {
                    llvmOp1857 = &$s1887;
                }
                break;
                case 65:
                {
                    llvmOp1857 = &$s1888;
                }
                break;
                case 64:
                {
                    llvmOp1857 = &$s1889;
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
                    llvmOp1857 = &$s1890;
                }
                break;
                case 52:
                {
                    llvmOp1857 = &$s1891;
                }
                break;
                case 53:
                {
                    llvmOp1857 = &$s1892;
                }
                break;
                case 55:
                {
                    llvmOp1857 = &$s1893;
                }
                break;
                case 58:
                {
                    llvmOp1857 = &$s1894;
                }
                break;
                case 59:
                {
                    llvmOp1857 = &$s1895;
                }
                break;
                case 63:
                {
                    llvmOp1857 = &$s1896;
                }
                break;
                case 62:
                {
                    llvmOp1857 = &$s1897;
                }
                break;
                case 65:
                {
                    llvmOp1857 = &$s1898;
                }
                break;
                case 64:
                {
                    llvmOp1857 = &$s1899;
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
    panda$core$String* $tmp1901 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1900 = $tmp1901;
    panda$core$String* $tmp1903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1902, result1900);
    panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1903, &$s1904);
    panda$core$String* $tmp1906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1905, llvmOp1857);
    panda$core$String* $tmp1908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1906, &$s1907);
    panda$core$String* $tmp1909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1908, p_leftRef);
    panda$core$String* $tmp1911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1909, &$s1910);
    panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1911, p_rightRef);
    panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1912, &$s1913);
    (($fn1915) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1914);
    return result1900;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1916;
    panda$core$String* rightRef1918;
    panda$core$String* raw1920;
    panda$core$String* result1933;
    panda$core$String* $tmp1917 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1916 = $tmp1917;
    panda$core$String* $tmp1919 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1918 = $tmp1919;
    panda$core$String* $tmp1921 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1920 = $tmp1921;
    panda$core$String* $tmp1923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1922, raw1920);
    panda$core$String* $tmp1925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1923, &$s1924);
    panda$core$String* $tmp1926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1925, leftRef1916);
    panda$core$String* $tmp1928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1926, &$s1927);
    panda$core$String* $tmp1929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1928, rightRef1918);
    panda$core$String* $tmp1931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1929, &$s1930);
    (($fn1932) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1931);
    panda$core$String* $tmp1934 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1933 = $tmp1934;
    panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1935, result1933);
    panda$core$String* $tmp1938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1936, &$s1937);
    panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1938, raw1920);
    panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1939, &$s1940);
    (($fn1942) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1941);
    return result1933;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1943;
    panda$core$String* rightRef1945;
    panda$core$String* raw1947;
    panda$core$String* result1960;
    panda$core$String* $tmp1944 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1943 = $tmp1944;
    panda$core$String* $tmp1946 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1945 = $tmp1946;
    panda$core$String* $tmp1948 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1947 = $tmp1948;
    panda$core$String* $tmp1950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1949, raw1947);
    panda$core$String* $tmp1952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1950, &$s1951);
    panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1952, leftRef1943);
    panda$core$String* $tmp1955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1953, &$s1954);
    panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1955, rightRef1945);
    panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, &$s1957);
    (($fn1959) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1958);
    panda$core$String* $tmp1961 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1960 = $tmp1961;
    panda$core$String* $tmp1963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1962, result1960);
    panda$core$String* $tmp1965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1963, &$s1964);
    panda$core$String* $tmp1966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1965, raw1947);
    panda$core$String* $tmp1968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1966, &$s1967);
    (($fn1969) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1968);
    return result1960;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1975;
    panda$core$String* rightRef1977;
    panda$core$Bit $tmp1970 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1970.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1971 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1971;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1972 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1972;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1973 = org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1973;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1974 = org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1974;
        }
        break;
        default:
        {
            panda$core$String* $tmp1976 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1975 = $tmp1976;
            panda$core$String* $tmp1978 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1977 = $tmp1978;
            panda$core$Int64 $tmp1979 = org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1980 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1979, leftRef1975, p_op, rightRef1977, p_out);
            return $tmp1980;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1981.value);
    panda$core$Int64 $tmp1982 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1982, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1983.value);
    panda$core$Object* $tmp1984 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1985 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1986 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1984), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1985), p_out);
    return $tmp1986;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    return &$s1987;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc1988;
    panda$core$Int64 index1990;
    panda$collections$ListView* vtable1991;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1993;
    panda$core$String* classPtrPtr2022;
    panda$core$String* classPtr2039;
    panda$core$String* cast2049;
    panda$core$String* ptr2062;
    panda$core$String* load2086;
    panda$core$String* result2096;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1989 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc1988 = $tmp1989;
    index1990 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1992 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1991 = $tmp1992;
    ITable* $tmp1994 = ((panda$collections$CollectionView*) vtable1991)->$class->itable;
    while ($tmp1994->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1994 = $tmp1994->next;
    }
    $fn1996 $tmp1995 = $tmp1994->methods[0];
    panda$core$Int64 $tmp1997 = $tmp1995(((panda$collections$CollectionView*) vtable1991));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1993, ((panda$core$Int64) { 0 }), $tmp1997, ((panda$core$Bit) { false }));
    int64_t $tmp1999 = $tmp1993.min.value;
    panda$core$Int64 i1998 = { $tmp1999 };
    int64_t $tmp2001 = $tmp1993.max.value;
    bool $tmp2002 = $tmp1993.inclusive.value;
    if ($tmp2002) goto $l2009; else goto $l2010;
    $l2009:;
    if ($tmp1999 <= $tmp2001) goto $l2003; else goto $l2005;
    $l2010:;
    if ($tmp1999 < $tmp2001) goto $l2003; else goto $l2005;
    $l2003:;
    {
        ITable* $tmp2011 = vtable1991->$class->itable;
        while ($tmp2011->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2011 = $tmp2011->next;
        }
        $fn2013 $tmp2012 = $tmp2011->methods[0];
        panda$core$Object* $tmp2014 = $tmp2012(vtable1991, i1998);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2014)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1990 = i1998;
            goto $l2005;
        }
        }
    }
    $l2006:;
    int64_t $tmp2016 = $tmp2001 - i1998.value;
    if ($tmp2002) goto $l2017; else goto $l2018;
    $l2017:;
    if ($tmp2016 >= 1) goto $l2015; else goto $l2005;
    $l2018:;
    if ($tmp2016 > 1) goto $l2015; else goto $l2005;
    $l2015:;
    i1998.value += 1;
    goto $l2003;
    $l2005:;
    panda$core$Bit $tmp2021 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1990, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2021.value);
    panda$core$String* $tmp2023 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr2022 = $tmp2023;
    panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2024, classPtrPtr2022);
    panda$core$String* $tmp2027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2025, &$s2026);
    org$pandalanguage$pandac$Type* $tmp2028 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2029 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2028);
    panda$core$String* $tmp2030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2027, $tmp2029);
    panda$core$String* $tmp2032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2030, &$s2031);
    panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2033, p_target);
    panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2034, &$s2035);
    panda$core$String* $tmp2037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2032, $tmp2036);
    (($fn2038) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2037);
    panda$core$String* $tmp2040 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2039 = $tmp2040;
    panda$core$String* $tmp2042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2041, classPtr2039);
    panda$core$String* $tmp2044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2042, &$s2043);
    panda$core$String* $tmp2045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2044, classPtrPtr2022);
    panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2045, &$s2046);
    (($fn2048) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2047);
    panda$core$String* $tmp2050 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2049 = $tmp2050;
    panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2051, cast2049);
    panda$core$String* $tmp2054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2052, &$s2053);
    panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2054, classPtr2039);
    panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2055, &$s2056);
    panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2057, cc1988->type);
    panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2058, &$s2059);
    (($fn2061) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2060);
    panda$core$String* $tmp2063 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2062 = $tmp2063;
    panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2064, ptr2062);
    panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, &$s2066);
    panda$core$String* $tmp2068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2067, cc1988->type);
    panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2068, &$s2069);
    panda$core$String* $tmp2071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2070, cc1988->type);
    panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2071, &$s2072);
    panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2073, cast2049);
    panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2074, &$s2075);
    panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2077, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2078, &$s2079);
    panda$core$String* $tmp2081 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2080, ((panda$core$Object*) wrap_panda$core$Int64(index1990)));
    panda$core$String* $tmp2083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2081, &$s2082);
    panda$core$String* $tmp2084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2076, $tmp2083);
    (($fn2085) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2084);
    panda$core$String* $tmp2087 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2086 = $tmp2087;
    panda$core$String* $tmp2089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2088, load2086);
    panda$core$String* $tmp2091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2089, &$s2090);
    panda$core$String* $tmp2092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2091, ptr2062);
    panda$core$String* $tmp2094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2092, &$s2093);
    (($fn2095) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2094);
    panda$core$String* $tmp2097 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2096 = $tmp2097;
    panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2098, result2096);
    panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2099, &$s2100);
    panda$core$String* $tmp2102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2101, load2086);
    panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2102, &$s2103);
    org$pandalanguage$pandac$Type* $tmp2105 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2106 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2105);
    panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2104, $tmp2106);
    (($fn2108) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2107);
    return result2096;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* methodType2109;
    panda$core$String* entry2112;
    panda$core$String* classPointer2119;
    panda$core$String* loadedClass2143;
    panda$core$String* classType2145;
    panda$core$String* itableFirst2162;
    panda$core$String* next2187;
    panda$core$String* leavingEntryLabel2194;
    panda$core$String* itableNext2196;
    panda$core$String* itablePtrPtr2201;
    panda$core$String* fail2203;
    panda$core$String* itablePtr2224;
    panda$core$String* itableClassPtr2234;
    panda$core$String* itableClass2250;
    panda$core$String* test2266;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2268;
    panda$core$String* success2292;
    panda$core$Int64 index2324;
    panda$collections$ListView* vtable2325;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2327;
    panda$core$String* methodPtrPtr2364;
    panda$core$String* cast2383;
    panda$core$String* methodPtr2396;
    org$pandalanguage$pandac$Type* $tmp2110 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2111 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2110);
    methodType2109 = $tmp2111;
    panda$core$String* $tmp2113 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2112 = $tmp2113;
    panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2114, entry2112);
    panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2115, &$s2116);
    (($fn2118) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2117);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, entry2112, p_out);
    panda$core$String* $tmp2120 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2119 = $tmp2120;
    panda$core$String* $tmp2122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2121, classPointer2119);
    panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2123);
    org$pandalanguage$pandac$Type* $tmp2125 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2126 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2125);
    panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2124, $tmp2126);
    panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2127, &$s2128);
    panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2130, p_target);
    panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2131, &$s2132);
    panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2133, &$s2134);
    panda$core$String* $tmp2137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2135, &$s2136);
    panda$core$String* $tmp2138 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2137, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2138, &$s2139);
    panda$core$String* $tmp2141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2129, $tmp2140);
    (($fn2142) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2141);
    panda$core$String* $tmp2144 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2143 = $tmp2144;
    org$pandalanguage$pandac$Type* $tmp2146 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2147 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2146);
    classType2145 = $tmp2147;
    panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2148, loadedClass2143);
    panda$core$String* $tmp2151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2149, &$s2150);
    panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2151, classType2145);
    panda$core$String* $tmp2154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2152, &$s2153);
    panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2154, classType2145);
    panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2155, &$s2156);
    panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2157, classPointer2119);
    panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2158, &$s2159);
    (($fn2161) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2160);
    panda$core$String* $tmp2163 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2162 = $tmp2163;
    panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2164, itableFirst2162);
    panda$core$String* $tmp2167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2165, &$s2166);
    panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2167, classType2145);
    panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2168, &$s2169);
    panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2170, classType2145);
    panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2171, &$s2172);
    panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2174, loadedClass2143);
    panda$core$String* $tmp2177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2175, &$s2176);
    panda$core$String* $tmp2179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2177, &$s2178);
    panda$core$String* $tmp2181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2179, &$s2180);
    panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2181, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2182, &$s2183);
    panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, $tmp2184);
    (($fn2186) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2185);
    panda$core$String* $tmp2188 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2187 = $tmp2188;
    panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2189, next2187);
    panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, &$s2191);
    (($fn2193) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2192);
    leavingEntryLabel2194 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, next2187, p_out);
    panda$core$Int64 $tmp2195 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2195;
    panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2197, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2198, &$s2199);
    itableNext2196 = $tmp2200;
    panda$core$String* $tmp2202 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2201 = $tmp2202;
    panda$core$String* $tmp2204 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2203 = $tmp2204;
    panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2205, itablePtrPtr2201);
    panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2206, &$s2207);
    panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2208, itableFirst2162);
    panda$core$String* $tmp2211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2209, &$s2210);
    panda$core$String* $tmp2212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2211, leavingEntryLabel2194);
    panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2212, &$s2213);
    panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2215, itableNext2196);
    panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, &$s2217);
    panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2218, fail2203);
    panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2219, &$s2220);
    panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2214, $tmp2221);
    (($fn2223) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2222);
    panda$core$String* $tmp2225 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2224 = $tmp2225;
    panda$core$String* $tmp2227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2226, itablePtr2224);
    panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2227, &$s2228);
    panda$core$String* $tmp2230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2229, itablePtrPtr2201);
    panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2230, &$s2231);
    (($fn2233) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2232);
    panda$core$String* $tmp2235 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2234 = $tmp2235;
    panda$core$String* $tmp2237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2236, itableClassPtr2234);
    panda$core$String* $tmp2239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2237, &$s2238);
    panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2240, itablePtr2224);
    panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2241, &$s2242);
    panda$core$String* $tmp2245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2243, &$s2244);
    panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2245, &$s2246);
    panda$core$String* $tmp2248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2239, $tmp2247);
    (($fn2249) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2248);
    panda$core$String* $tmp2251 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2250 = $tmp2251;
    panda$core$String* $tmp2253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2252, itableClass2250);
    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2253, &$s2254);
    panda$core$String* $tmp2256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2255, classType2145);
    panda$core$String* $tmp2258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2256, &$s2257);
    panda$core$String* $tmp2259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2258, classType2145);
    panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2259, &$s2260);
    panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2261, itableClassPtr2234);
    panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2262, &$s2263);
    (($fn2265) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2264);
    panda$core$String* $tmp2267 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2266 = $tmp2267;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2269 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2268 = $tmp2269;
    panda$core$String* $tmp2271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2270, test2266);
    panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2271, &$s2272);
    panda$core$String* $tmp2274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2273, classType2145);
    panda$core$String* $tmp2276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2274, &$s2275);
    panda$core$String* $tmp2277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2276, intfCC2268->type);
    panda$core$String* $tmp2279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2277, &$s2278);
    panda$core$String* $tmp2280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2279, intfCC2268->name);
    panda$core$String* $tmp2282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2280, &$s2281);
    panda$core$String* $tmp2284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2283, classType2145);
    panda$core$String* $tmp2286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2284, &$s2285);
    panda$core$String* $tmp2287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2286, itableClass2250);
    panda$core$String* $tmp2289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2287, &$s2288);
    panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2282, $tmp2289);
    (($fn2291) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2290);
    panda$core$String* $tmp2293 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2292 = $tmp2293;
    panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2294, test2266);
    panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2295, &$s2296);
    panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2297, success2292);
    panda$core$String* $tmp2300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2298, &$s2299);
    panda$core$String* $tmp2301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2300, fail2203);
    panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2301, &$s2302);
    (($fn2304) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2303);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, fail2203, p_out);
    panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2305, itableNext2196);
    panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2306, &$s2307);
    panda$core$String* $tmp2309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2308, itablePtr2224);
    panda$core$String* $tmp2311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2309, &$s2310);
    panda$core$String* $tmp2314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2312, &$s2313);
    panda$core$String* $tmp2316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2314, &$s2315);
    panda$core$String* $tmp2317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2311, $tmp2316);
    (($fn2318) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2317);
    panda$core$String* $tmp2320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2319, next2187);
    panda$core$String* $tmp2322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2320, &$s2321);
    (($fn2323) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2322);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, success2292, p_out);
    index2324 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2326 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2325 = $tmp2326;
    ITable* $tmp2328 = ((panda$collections$CollectionView*) vtable2325)->$class->itable;
    while ($tmp2328->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2328 = $tmp2328->next;
    }
    $fn2330 $tmp2329 = $tmp2328->methods[0];
    panda$core$Int64 $tmp2331 = $tmp2329(((panda$collections$CollectionView*) vtable2325));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2327, ((panda$core$Int64) { 0 }), $tmp2331, ((panda$core$Bit) { false }));
    int64_t $tmp2333 = $tmp2327.min.value;
    panda$core$Int64 i2332 = { $tmp2333 };
    int64_t $tmp2335 = $tmp2327.max.value;
    bool $tmp2336 = $tmp2327.inclusive.value;
    if ($tmp2336) goto $l2343; else goto $l2344;
    $l2343:;
    if ($tmp2333 <= $tmp2335) goto $l2337; else goto $l2339;
    $l2344:;
    if ($tmp2333 < $tmp2335) goto $l2337; else goto $l2339;
    $l2337:;
    {
        ITable* $tmp2345 = vtable2325->$class->itable;
        while ($tmp2345->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2345 = $tmp2345->next;
        }
        $fn2347 $tmp2346 = $tmp2345->methods[0];
        panda$core$Object* $tmp2348 = $tmp2346(vtable2325, i2332);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2348)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2324 = i2332;
            goto $l2339;
        }
        }
    }
    $l2340:;
    int64_t $tmp2350 = $tmp2335 - i2332.value;
    if ($tmp2336) goto $l2351; else goto $l2352;
    $l2351:;
    if ($tmp2350 >= 1) goto $l2349; else goto $l2339;
    $l2352:;
    if ($tmp2350 > 1) goto $l2349; else goto $l2339;
    $l2349:;
    i2332.value += 1;
    goto $l2337;
    $l2339:;
    org$pandalanguage$pandac$Type* $tmp2355 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2356 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2355);
    panda$collections$ListView* $tmp2357 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2356);
    ITable* $tmp2358 = ((panda$collections$CollectionView*) $tmp2357)->$class->itable;
    while ($tmp2358->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2358 = $tmp2358->next;
    }
    $fn2360 $tmp2359 = $tmp2358->methods[0];
    panda$core$Int64 $tmp2361 = $tmp2359(((panda$collections$CollectionView*) $tmp2357));
    panda$core$Int64 $tmp2362 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2324, $tmp2361);
    index2324 = $tmp2362;
    panda$core$Bit $tmp2363 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2324, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2363.value);
    panda$core$String* $tmp2365 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2364 = $tmp2365;
    panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2366, methodPtrPtr2364);
    panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2367, &$s2368);
    panda$core$String* $tmp2371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2370, itablePtr2224);
    panda$core$String* $tmp2373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2371, &$s2372);
    panda$core$String* $tmp2375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2373, &$s2374);
    panda$core$String* $tmp2377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2375, &$s2376);
    panda$core$String* $tmp2378 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2377, ((panda$core$Object*) wrap_panda$core$Int64(index2324)));
    panda$core$String* $tmp2380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2378, &$s2379);
    panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2369, $tmp2380);
    (($fn2382) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2381);
    panda$core$String* $tmp2384 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2383 = $tmp2384;
    panda$core$String* $tmp2386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2385, cast2383);
    panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2386, &$s2387);
    panda$core$String* $tmp2389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2388, methodPtrPtr2364);
    panda$core$String* $tmp2391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2389, &$s2390);
    panda$core$String* $tmp2392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2391, methodType2109);
    panda$core$String* $tmp2394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2392, &$s2393);
    (($fn2395) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2394);
    panda$core$String* $tmp2397 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2396 = $tmp2397;
    panda$core$String* $tmp2399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2398, methodPtr2396);
    panda$core$String* $tmp2401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2399, &$s2400);
    panda$core$String* $tmp2402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2401, methodType2109);
    panda$core$String* $tmp2404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2402, &$s2403);
    panda$core$String* $tmp2405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2404, methodType2109);
    panda$core$String* $tmp2407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2405, &$s2406);
    panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2407, cast2383);
    panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2408, &$s2409);
    (($fn2411) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2410);
    return methodPtr2396;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2413 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2412 = $tmp2413.value;
    if (!$tmp2412) goto $l2414;
    panda$core$Bit $tmp2415 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2412 = $tmp2415.value;
    $l2414:;
    panda$core$Bit $tmp2416 = { $tmp2412 };
    if ($tmp2416.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2417.value) {
        {
            panda$core$String* $tmp2418 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2418;
        }
        }
        else {
        {
            panda$core$String* $tmp2419 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2419;
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
        panda$core$String* $tmp2420 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2420;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2421;
    panda$core$String* $match$1189_92422;
    panda$core$String* countStruct2427;
    panda$core$String* count2430;
    panda$core$String* size2440;
    panda$core$Int64 elementSize2442;
    panda$core$String* malloc2462;
    panda$core$String* result2476;
    panda$core$String* ptr2495;
    panda$core$String* baseType2498;
    panda$core$String* ptrType2501;
    panda$core$String* cast2504;
    panda$core$String* load2517;
    panda$core$String* ptr2537;
    panda$core$String* baseType2540;
    panda$core$String* ptrType2543;
    panda$core$String* cast2546;
    panda$core$String* indexStruct2559;
    panda$core$String* index2562;
    panda$core$String* offsetPtr2572;
    panda$core$String* load2593;
    panda$core$String* ptr2613;
    panda$core$String* ptrCast2616;
    panda$core$String* countStruct2626;
    panda$core$String* count2629;
    panda$core$String* size2639;
    panda$core$String* realloc2657;
    panda$core$String* result2676;
    panda$core$String* ptr2695;
    panda$core$String* baseType2698;
    panda$core$String* offsetStruct2702;
    panda$core$String* offset2705;
    panda$core$String* result2715;
    m2421 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$1189_92422 = ((org$pandalanguage$pandac$Symbol*) m2421->value)->name;
        panda$core$Bit $tmp2424 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1189_92422, &$s2423);
        if ($tmp2424.value) {
        {
            panda$core$Int64 $tmp2425 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2425, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2426.value);
            panda$core$Object* $tmp2428 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2429 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2428), p_out);
            countStruct2427 = $tmp2429;
            panda$core$String* $tmp2431 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2430 = $tmp2431;
            panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2432, count2430);
            panda$core$String* $tmp2435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2433, &$s2434);
            panda$core$String* $tmp2436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2435, countStruct2427);
            panda$core$String* $tmp2438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2436, &$s2437);
            (($fn2439) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2438);
            panda$core$String* $tmp2441 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2440 = $tmp2441;
            org$pandalanguage$pandac$Type* $tmp2443 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2421);
            panda$core$Object* $tmp2444 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2443->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2445 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2444));
            elementSize2442 = $tmp2445;
            panda$core$Bit $tmp2446 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(elementSize2442, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp2446.value);
            panda$core$String* $tmp2448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2447, size2440);
            panda$core$String* $tmp2450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2448, &$s2449);
            panda$core$String* $tmp2452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2450, &$s2451);
            panda$core$String* $tmp2454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2452, &$s2453);
            panda$core$String* $tmp2455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2454, count2430);
            panda$core$String* $tmp2457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2455, &$s2456);
            panda$core$String* $tmp2458 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2457, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2442)));
            panda$core$String* $tmp2460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2458, &$s2459);
            (($fn2461) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2460);
            panda$core$String* $tmp2463 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2462 = $tmp2463;
            panda$core$String* $tmp2465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2464, malloc2462);
            panda$core$String* $tmp2467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2465, &$s2466);
            panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2467, &$s2468);
            panda$core$String* $tmp2471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, &$s2470);
            panda$core$String* $tmp2472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2471, size2440);
            panda$core$String* $tmp2474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2472, &$s2473);
            (($fn2475) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2474);
            panda$core$String* $tmp2477 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2476 = $tmp2477;
            panda$core$String* $tmp2479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2478, result2476);
            panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, &$s2480);
            panda$core$String* $tmp2482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2481, malloc2462);
            panda$core$String* $tmp2484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2482, &$s2483);
            org$pandalanguage$pandac$Type* $tmp2485 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2421);
            panda$core$String* $tmp2486 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2485);
            panda$core$String* $tmp2487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2484, $tmp2486);
            panda$core$String* $tmp2489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2487, &$s2488);
            (($fn2490) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2489);
            return result2476;
        }
        }
        else {
        panda$core$Bit $tmp2492 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1189_92422, &$s2491);
        if ($tmp2492.value) {
        {
            panda$core$Int64 $tmp2493 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2493, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2494.value);
            panda$core$Object* $tmp2496 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2497 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2496), p_out);
            ptr2495 = $tmp2497;
            org$pandalanguage$pandac$Type* $tmp2499 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2421);
            panda$core$String* $tmp2500 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2499);
            baseType2498 = $tmp2500;
            panda$core$String* $tmp2503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2498, &$s2502);
            ptrType2501 = $tmp2503;
            panda$core$String* $tmp2505 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2504 = $tmp2505;
            panda$core$String* $tmp2507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2506, cast2504);
            panda$core$String* $tmp2509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2507, &$s2508);
            panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2509, ptr2495);
            panda$core$String* $tmp2512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2510, &$s2511);
            panda$core$String* $tmp2513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2512, ptrType2501);
            panda$core$String* $tmp2515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2513, &$s2514);
            (($fn2516) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2515);
            panda$core$String* $tmp2518 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2517 = $tmp2518;
            panda$core$String* $tmp2520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2519, load2517);
            panda$core$String* $tmp2522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2520, &$s2521);
            panda$core$String* $tmp2523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2522, baseType2498);
            panda$core$String* $tmp2525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2523, &$s2524);
            panda$core$String* $tmp2526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2525, ptrType2501);
            panda$core$String* $tmp2528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2526, &$s2527);
            panda$core$String* $tmp2529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2528, cast2504);
            panda$core$String* $tmp2531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2529, &$s2530);
            (($fn2532) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2531);
            return load2517;
        }
        }
        else {
        panda$core$Bit $tmp2534 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1189_92422, &$s2533);
        if ($tmp2534.value) {
        {
            panda$core$Int64 $tmp2535 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2535, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2536.value);
            panda$core$Object* $tmp2538 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2539 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2538), p_out);
            ptr2537 = $tmp2539;
            org$pandalanguage$pandac$Type* $tmp2541 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2421);
            panda$core$String* $tmp2542 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2541);
            baseType2540 = $tmp2542;
            panda$core$String* $tmp2545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2540, &$s2544);
            ptrType2543 = $tmp2545;
            panda$core$String* $tmp2547 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2546 = $tmp2547;
            panda$core$String* $tmp2549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2548, cast2546);
            panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2549, &$s2550);
            panda$core$String* $tmp2552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2551, ptr2537);
            panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2552, &$s2553);
            panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2554, ptrType2543);
            panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, &$s2556);
            (($fn2558) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2557);
            panda$core$Object* $tmp2560 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2561 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2560), p_out);
            indexStruct2559 = $tmp2561;
            panda$core$String* $tmp2563 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2562 = $tmp2563;
            panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2564, index2562);
            panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2565, &$s2566);
            panda$core$String* $tmp2568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2567, indexStruct2559);
            panda$core$String* $tmp2570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2568, &$s2569);
            (($fn2571) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2570);
            panda$core$String* $tmp2573 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2572 = $tmp2573;
            panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2574, offsetPtr2572);
            panda$core$String* $tmp2577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2575, &$s2576);
            panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2577, baseType2540);
            panda$core$String* $tmp2580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2578, &$s2579);
            panda$core$String* $tmp2581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2580, ptrType2543);
            panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2581, &$s2582);
            panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2583, cast2546);
            panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, &$s2585);
            panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2587, index2562);
            panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2589);
            panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, $tmp2590);
            (($fn2592) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2591);
            panda$core$String* $tmp2594 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2593 = $tmp2594;
            panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2595, load2593);
            panda$core$String* $tmp2598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, &$s2597);
            panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2598, baseType2540);
            panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, &$s2600);
            panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2601, ptrType2543);
            panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2602, &$s2603);
            panda$core$String* $tmp2605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2604, offsetPtr2572);
            panda$core$String* $tmp2607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2605, &$s2606);
            (($fn2608) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2607);
            return load2593;
        }
        }
        else {
        panda$core$Bit $tmp2610 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1189_92422, &$s2609);
        if ($tmp2610.value) {
        {
            panda$core$Int64 $tmp2611 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2611, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2612.value);
            panda$core$Object* $tmp2614 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2615 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2614), p_out);
            ptr2613 = $tmp2615;
            panda$core$String* $tmp2617 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2616 = $tmp2617;
            panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2618, ptrCast2616);
            panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2619, &$s2620);
            panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2621, ptr2613);
            panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2622, &$s2623);
            (($fn2625) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2624);
            panda$core$Object* $tmp2627 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2628 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2627), p_out);
            countStruct2626 = $tmp2628;
            panda$core$String* $tmp2630 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2629 = $tmp2630;
            panda$core$String* $tmp2632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2631, count2629);
            panda$core$String* $tmp2634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2632, &$s2633);
            panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2634, countStruct2626);
            panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2635, &$s2636);
            (($fn2638) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2637);
            panda$core$String* $tmp2640 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2639 = $tmp2640;
            panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2641, size2639);
            panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, &$s2643);
            panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2644, &$s2645);
            panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2646, &$s2647);
            panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2648, count2629);
            panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2649, &$s2650);
            org$pandalanguage$pandac$Type* $tmp2652 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2421);
            panda$core$Object* $tmp2653 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2652->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2654 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2653));
            panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2651, ((panda$core$Object*) wrap_panda$core$Int64($tmp2654)));
            (($fn2656) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2655);
            panda$core$String* $tmp2658 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2657 = $tmp2658;
            panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2659, realloc2657);
            panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2660, &$s2661);
            panda$core$String* $tmp2663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2662, ptrCast2616);
            panda$core$String* $tmp2665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2663, &$s2664);
            panda$core$String* $tmp2667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2665, &$s2666);
            panda$core$String* $tmp2669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2667, &$s2668);
            panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2670, size2639);
            panda$core$String* $tmp2673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2671, &$s2672);
            panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2669, $tmp2673);
            (($fn2675) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2674);
            panda$core$String* $tmp2677 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2676 = $tmp2677;
            panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2678, result2676);
            panda$core$String* $tmp2681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, &$s2680);
            panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2681, realloc2657);
            panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, &$s2683);
            org$pandalanguage$pandac$Type* $tmp2685 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2421);
            panda$core$String* $tmp2686 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2685);
            panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2684, $tmp2686);
            panda$core$String* $tmp2689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2687, &$s2688);
            (($fn2690) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2689);
            return result2676;
        }
        }
        else {
        panda$core$Bit $tmp2692 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1189_92422, &$s2691);
        if ($tmp2692.value) {
        {
            panda$core$Int64 $tmp2693 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2693, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2694.value);
            panda$core$Object* $tmp2696 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2697 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2696), p_out);
            ptr2695 = $tmp2697;
            panda$core$Object* $tmp2699 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2700 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2699)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2701 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2700));
            baseType2698 = $tmp2701;
            panda$core$Object* $tmp2703 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2704 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2703), p_out);
            offsetStruct2702 = $tmp2704;
            panda$core$String* $tmp2706 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2705 = $tmp2706;
            panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2707, offset2705);
            panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2708, &$s2709);
            panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, offsetStruct2702);
            panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2711, &$s2712);
            (($fn2714) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2713);
            panda$core$String* $tmp2716 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2715 = $tmp2716;
            panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2717, result2715);
            panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, &$s2719);
            panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2720, baseType2698);
            panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, &$s2722);
            panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2723, ptr2695);
            panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2724, &$s2725);
            panda$core$String* $tmp2727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, offset2705);
            panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2727, &$s2728);
            (($fn2730) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2729);
            return result2715;
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
    org$pandalanguage$pandac$MethodDecl* m2731;
    panda$core$String* selfRef2732;
    panda$core$Int64 argStart2734;
    panda$collections$Array* args2738;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2741;
    panda$core$String* end2764;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2773;
    org$pandalanguage$pandac$MethodDecl* old2780;
    panda$core$String* phi2793;
    panda$core$String* separator2804;
    panda$collections$Iterator* ret$Iter2806;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2818;
    m2731 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) m2731->owner));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2731), ((panda$core$Object*) m2731));
    selfRef2732 = &$s2733;
    panda$core$Bit $tmp2735 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2731);
    if ($tmp2735.value) {
    {
        argStart2734 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2736 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2737 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2736), p_out);
        selfRef2732 = $tmp2737;
    }
    }
    else {
    {
        argStart2734 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2739 = (panda$collections$Array*) malloc(40);
    $tmp2739->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2739->refCount.value = 1;
    panda$collections$Array$init($tmp2739);
    args2738 = $tmp2739;
    panda$core$Int64 $tmp2742 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2741, argStart2734, $tmp2742, ((panda$core$Bit) { false }));
    int64_t $tmp2744 = $tmp2741.min.value;
    panda$core$Int64 i2743 = { $tmp2744 };
    int64_t $tmp2746 = $tmp2741.max.value;
    bool $tmp2747 = $tmp2741.inclusive.value;
    if ($tmp2747) goto $l2754; else goto $l2755;
    $l2754:;
    if ($tmp2744 <= $tmp2746) goto $l2748; else goto $l2750;
    $l2755:;
    if ($tmp2744 < $tmp2746) goto $l2748; else goto $l2750;
    $l2748:;
    {
        panda$core$Object* $tmp2756 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2743);
        panda$core$String* $tmp2757 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2756), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2738, ((panda$core$Object*) $tmp2757));
    }
    $l2751:;
    int64_t $tmp2759 = $tmp2746 - i2743.value;
    if ($tmp2747) goto $l2760; else goto $l2761;
    $l2760:;
    if ($tmp2759 >= 1) goto $l2758; else goto $l2750;
    $l2761:;
    if ($tmp2759 > 1) goto $l2758; else goto $l2750;
    $l2758:;
    i2743.value += 1;
    goto $l2748;
    $l2750:;
    panda$core$String* $tmp2765 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2764 = $tmp2765;
    panda$core$Int64 $tmp2766 = panda$collections$Array$get_count$R$panda$core$Int64(args2738);
    panda$core$Int64 $tmp2767 = panda$collections$Array$get_count$R$panda$core$Int64(m2731->parameters);
    panda$core$Bit $tmp2768 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2766, $tmp2767);
    if ($tmp2768.value) {
    {
        panda$core$String* $tmp2770 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2769, ((panda$core$Object*) p_call));
        panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2770, &$s2771);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp2772));
        panda$core$System$crash();
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2774 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2774->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2774->refCount.value = 1;
    panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2776, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, &$s2778);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2774, $tmp2779, selfRef2732, ((panda$collections$ListView*) args2738), end2764);
    inline2773 = $tmp2774;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2773));
    old2780 = self->currentMethod;
    self->currentMethod = m2731;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_body, p_out);
    self->currentMethod = old2780;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2781 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2782 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2781);
    if ($tmp2782.value) {
    {
        (($fn2784) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2783);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end2764, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2731));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    panda$core$Int64 $tmp2785 = panda$collections$Array$get_count$R$panda$core$Int64(inline2773->returns);
    panda$core$Bit $tmp2786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2785, ((panda$core$Int64) { 1 }));
    if ($tmp2786.value) {
    {
        panda$core$Object* $tmp2787 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2773->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2787)->second);
    }
    }
    panda$core$Int64 $tmp2788 = panda$collections$Array$get_count$R$panda$core$Int64(inline2773->returns);
    panda$core$Bit $tmp2789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2788, ((panda$core$Int64) { 0 }));
    if ($tmp2789.value) {
    {
        (($fn2791) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s2790);
        return &$s2792;
    }
    }
    panda$core$String* $tmp2794 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2793 = $tmp2794;
    panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2795, phi2793);
    panda$core$String* $tmp2798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2796, &$s2797);
    panda$core$String* $tmp2799 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2731->returnType);
    panda$core$String* $tmp2800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2798, $tmp2799);
    panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2800, &$s2801);
    (($fn2803) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2802);
    separator2804 = &$s2805;
    {
        ITable* $tmp2807 = ((panda$collections$Iterable*) inline2773->returns)->$class->itable;
        while ($tmp2807->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2807 = $tmp2807->next;
        }
        $fn2809 $tmp2808 = $tmp2807->methods[0];
        panda$collections$Iterator* $tmp2810 = $tmp2808(((panda$collections$Iterable*) inline2773->returns));
        ret$Iter2806 = $tmp2810;
        $l2811:;
        ITable* $tmp2813 = ret$Iter2806->$class->itable;
        while ($tmp2813->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2813 = $tmp2813->next;
        }
        $fn2815 $tmp2814 = $tmp2813->methods[0];
        panda$core$Bit $tmp2816 = $tmp2814(ret$Iter2806);
        panda$core$Bit $tmp2817 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2816);
        if (!$tmp2817.value) goto $l2812;
        {
            ITable* $tmp2819 = ret$Iter2806->$class->itable;
            while ($tmp2819->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2819 = $tmp2819->next;
            }
            $fn2821 $tmp2820 = $tmp2819->methods[1];
            panda$core$Object* $tmp2822 = $tmp2820(ret$Iter2806);
            ret2818 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2822);
            panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2823, separator2804);
            panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, &$s2825);
            panda$core$String* $tmp2827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2826, ((panda$core$String*) ret2818->second));
            panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2827, &$s2828);
            panda$core$String* $tmp2830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2829, ((panda$core$String*) ret2818->first));
            panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2830, &$s2831);
            (($fn2833) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2832);
            separator2804 = &$s2834;
        }
        goto $l2811;
        $l2812:;
    }
    (($fn2835) ((panda$io$OutputStream*) p_out)->$class->vtable[17])(((panda$io$OutputStream*) p_out));
    return phi2793;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2837;
    panda$core$String* bit2847;
    panda$core$String* result2851;
    panda$core$String* bit2867;
    panda$core$String* result2871;
    org$pandalanguage$pandac$IRNode* block2888;
    panda$collections$Array* args2892;
    org$pandalanguage$pandac$Type* actualMethodType2896;
    panda$core$String* actualResultType2897;
    panda$core$Bit isSuper2898;
    panda$core$Int64 offset2918;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2923;
    panda$core$String* arg2938;
    panda$core$String* target2970;
    panda$core$String* methodRef2974;
    panda$core$String* result2976;
    panda$core$Bit indirect2977;
    panda$core$String* separator3003;
    panda$core$String* indirectVar3005;
    panda$collections$Iterator* arg$Iter3026;
    panda$core$String* arg3038;
    panda$core$Bit $tmp2836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2836.value);
    m2837 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2839 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2837->owner)->name, &$s2838);
    if ($tmp2839.value) {
    {
        panda$core$String* $tmp2840 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2840;
    }
    }
    if (m2837->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2837);
    }
    }
    panda$core$Bit $tmp2842 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2837->owner)->name, &$s2841);
    if ($tmp2842.value) {
    {
        panda$core$Bit $tmp2844 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2837)->name, &$s2843);
        if ($tmp2844.value) {
        {
            panda$core$Int64 $tmp2845 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2845, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2846.value);
            panda$core$Object* $tmp2848 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2849 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2850 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2848), ((org$pandalanguage$pandac$IRNode*) $tmp2849), p_out);
            bit2847 = $tmp2850;
            panda$core$String* $tmp2852 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2851 = $tmp2852;
            panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2853, result2851);
            panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2854, &$s2855);
            panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2857, bit2847);
            panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2858, &$s2859);
            panda$core$String* $tmp2861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2856, $tmp2860);
            (($fn2862) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2861);
            return result2851;
        }
        }
        panda$core$Bit $tmp2864 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2837)->name, &$s2863);
        if ($tmp2864.value) {
        {
            panda$core$Int64 $tmp2865 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2865, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2866.value);
            panda$core$Object* $tmp2868 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2869 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2870 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2868), ((org$pandalanguage$pandac$IRNode*) $tmp2869), p_out);
            bit2867 = $tmp2870;
            panda$core$String* $tmp2872 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2871 = $tmp2872;
            panda$core$String* $tmp2874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2873, result2871);
            panda$core$String* $tmp2876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2874, &$s2875);
            panda$core$String* $tmp2878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2877, bit2867);
            panda$core$String* $tmp2880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2878, &$s2879);
            panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2876, $tmp2880);
            (($fn2882) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2881);
            return result2871;
        }
        }
    }
    }
    panda$core$Bit $tmp2884 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2837->annotations);
    bool $tmp2883 = $tmp2884.value;
    if (!$tmp2883) goto $l2885;
    panda$core$Object* $tmp2886 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2837));
    $tmp2883 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp2886) == NULL }).value;
    $l2885:;
    panda$core$Bit $tmp2887 = { $tmp2883 };
    if ($tmp2887.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2889 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2837);
        block2888 = $tmp2889;
        if (((panda$core$Bit) { block2888 != NULL }).value) {
        {
            panda$core$String* $tmp2890 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, block2888, p_out);
            return $tmp2890;
        }
        }
        return &$s2891;
    }
    }
    panda$collections$Array* $tmp2893 = (panda$collections$Array*) malloc(40);
    $tmp2893->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2893->refCount.value = 1;
    panda$core$Int64 $tmp2895 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp2893, $tmp2895);
    args2892 = $tmp2893;
    panda$core$Int64 $tmp2900 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2901 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2900, ((panda$core$Int64) { 1 }));
    bool $tmp2899 = $tmp2901.value;
    if (!$tmp2899) goto $l2902;
    panda$core$Object* $tmp2903 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2903)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2899 = $tmp2904.value;
    $l2902:;
    panda$core$Bit $tmp2905 = { $tmp2899 };
    isSuper2898 = $tmp2905;
    panda$core$Bit $tmp2907 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2898);
    bool $tmp2906 = $tmp2907.value;
    if (!$tmp2906) goto $l2908;
    panda$core$Bit $tmp2909 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2837);
    $tmp2906 = $tmp2909.value;
    $l2908:;
    panda$core$Bit $tmp2910 = { $tmp2906 };
    if ($tmp2910.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2911 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2837);
        actualMethodType2896 = $tmp2911;
        panda$core$Int64 $tmp2912 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2896->subtypes);
        panda$core$Int64 $tmp2913 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2912, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2914 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2896->subtypes, $tmp2913);
        panda$core$String* $tmp2915 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2914));
        actualResultType2897 = $tmp2915;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2916 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2837);
        actualMethodType2896 = $tmp2916;
        panda$core$String* $tmp2917 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2897 = $tmp2917;
    }
    }
    panda$core$Int64 $tmp2919 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2920 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2896->subtypes);
    panda$core$Int64 $tmp2921 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2919, $tmp2920);
    panda$core$Int64 $tmp2922 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2921, ((panda$core$Int64) { 1 }));
    offset2918 = $tmp2922;
    panda$core$Int64 $tmp2924 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2923, ((panda$core$Int64) { 0 }), $tmp2924, ((panda$core$Bit) { false }));
    int64_t $tmp2926 = $tmp2923.min.value;
    panda$core$Int64 i2925 = { $tmp2926 };
    int64_t $tmp2928 = $tmp2923.max.value;
    bool $tmp2929 = $tmp2923.inclusive.value;
    if ($tmp2929) goto $l2936; else goto $l2937;
    $l2936:;
    if ($tmp2926 <= $tmp2928) goto $l2930; else goto $l2932;
    $l2937:;
    if ($tmp2926 < $tmp2928) goto $l2930; else goto $l2932;
    $l2930:;
    {
        panda$core$Object* $tmp2939 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2925);
        panda$core$String* $tmp2940 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2939), p_out);
        arg2938 = $tmp2940;
        panda$core$Bit $tmp2942 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2925, offset2918);
        bool $tmp2941 = $tmp2942.value;
        if (!$tmp2941) goto $l2943;
        panda$core$Int64 $tmp2944 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2925, offset2918);
        panda$core$Object* $tmp2945 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2896->subtypes, $tmp2944);
        panda$core$Object* $tmp2946 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2925);
        panda$core$Bit $tmp2947 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2945), ((org$pandalanguage$pandac$IRNode*) $tmp2946)->type);
        $tmp2941 = $tmp2947.value;
        $l2943:;
        panda$core$Bit $tmp2948 = { $tmp2941 };
        if ($tmp2948.value) {
        {
            panda$core$Int64 $tmp2949 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2925, offset2918);
            panda$core$Object* $tmp2950 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2896->subtypes, $tmp2949);
            panda$core$String* $tmp2951 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2950));
            panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2951, &$s2952);
            panda$core$Object* $tmp2954 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2925);
            panda$core$Int64 $tmp2955 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2925, offset2918);
            panda$core$Object* $tmp2956 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2896->subtypes, $tmp2955);
            panda$core$String* $tmp2957 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2938, ((org$pandalanguage$pandac$IRNode*) $tmp2954)->type, ((org$pandalanguage$pandac$Type*) $tmp2956), p_out);
            panda$core$String* $tmp2958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2953, $tmp2957);
            arg2938 = $tmp2958;
        }
        }
        else {
        {
            panda$core$Object* $tmp2959 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2925);
            panda$core$String* $tmp2960 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2959)->type);
            panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, &$s2961);
            panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, arg2938);
            arg2938 = $tmp2963;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2892, ((panda$core$Object*) arg2938));
    }
    $l2933:;
    int64_t $tmp2965 = $tmp2928 - i2925.value;
    if ($tmp2929) goto $l2966; else goto $l2967;
    $l2966:;
    if ($tmp2965 >= 1) goto $l2964; else goto $l2932;
    $l2967:;
    if ($tmp2965 > 1) goto $l2964; else goto $l2932;
    $l2964:;
    i2925.value += 1;
    goto $l2930;
    $l2932:;
    panda$core$Int64 $tmp2971 = panda$collections$Array$get_count$R$panda$core$Int64(args2892);
    panda$core$Bit $tmp2972 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2971, ((panda$core$Int64) { 0 }));
    if ($tmp2972.value) {
    {
        panda$core$Object* $tmp2973 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2892, ((panda$core$Int64) { 0 }));
        target2970 = ((panda$core$String*) $tmp2973);
    }
    }
    else {
    {
        target2970 = NULL;
    }
    }
    panda$core$String* $tmp2975 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target2970, m2837, isSuper2898, p_out);
    methodRef2974 = $tmp2975;
    panda$core$Bit $tmp2978 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2837);
    indirect2977 = $tmp2978;
    if (indirect2977.value) {
    {
        panda$core$String* $tmp2980 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2837);
        panda$core$String* $tmp2981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2979, $tmp2980);
        panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2981, &$s2982);
        (($fn2984) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2983);
    }
    }
    else {
    {
        panda$core$String* $tmp2985 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2976 = $tmp2985;
        panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2986, result2976);
        panda$core$String* $tmp2989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2987, &$s2988);
        panda$core$String* $tmp2990 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2837);
        panda$core$String* $tmp2991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2989, $tmp2990);
        panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2991, &$s2992);
        panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2993, actualResultType2897);
        panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2994, &$s2995);
        (($fn2997) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2996);
    }
    }
    panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2998, methodRef2974);
    panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2999, &$s3000);
    (($fn3002) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3001);
    separator3003 = &$s3004;
    if (indirect2977.value) {
    {
        panda$core$Int64 $tmp3006 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3006;
        panda$core$String* $tmp3008 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3007, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar3005 = $tmp3008;
        panda$core$String* $tmp3010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3009, indirectVar3005);
        panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3010, &$s3011);
        panda$core$String* $tmp3013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3012, actualResultType2897);
        panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, &$s3014);
        (($fn3016) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3015);
        panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3017, actualResultType2897);
        panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3018, &$s3019);
        panda$core$String* $tmp3021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3020, indirectVar3005);
        panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3021, &$s3022);
        (($fn3024) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3023);
        separator3003 = &$s3025;
    }
    }
    {
        ITable* $tmp3027 = ((panda$collections$Iterable*) args2892)->$class->itable;
        while ($tmp3027->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3027 = $tmp3027->next;
        }
        $fn3029 $tmp3028 = $tmp3027->methods[0];
        panda$collections$Iterator* $tmp3030 = $tmp3028(((panda$collections$Iterable*) args2892));
        arg$Iter3026 = $tmp3030;
        $l3031:;
        ITable* $tmp3033 = arg$Iter3026->$class->itable;
        while ($tmp3033->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3033 = $tmp3033->next;
        }
        $fn3035 $tmp3034 = $tmp3033->methods[0];
        panda$core$Bit $tmp3036 = $tmp3034(arg$Iter3026);
        panda$core$Bit $tmp3037 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3036);
        if (!$tmp3037.value) goto $l3032;
        {
            ITable* $tmp3039 = arg$Iter3026->$class->itable;
            while ($tmp3039->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3039 = $tmp3039->next;
            }
            $fn3041 $tmp3040 = $tmp3039->methods[1];
            panda$core$Object* $tmp3042 = $tmp3040(arg$Iter3026);
            arg3038 = ((panda$core$String*) $tmp3042);
            panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3043, separator3003);
            panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, &$s3045);
            panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3046, arg3038);
            panda$core$String* $tmp3049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3047, &$s3048);
            (($fn3050) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3049);
            separator3003 = &$s3051;
        }
        goto $l3031;
        $l3032:;
    }
    (($fn3053) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3052);
    if (indirect2977.value) {
    {
        panda$core$String* $tmp3054 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2976 = $tmp3054;
        panda$core$String* $tmp3056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3055, result2976);
        panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3056, &$s3057);
        panda$core$String* $tmp3059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, actualResultType2897);
        panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3059, &$s3060);
        panda$core$String* $tmp3062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3061, actualResultType2897);
        panda$core$String* $tmp3064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3062, &$s3063);
        panda$core$String* $tmp3065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3064, indirectVar3005);
        (($fn3066) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3065);
    }
    }
    panda$core$String* $tmp3067 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3068 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3067, actualResultType2897);
    if ($tmp3068.value) {
    {
        panda$core$Int64 $tmp3069 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2896->subtypes);
        panda$core$Int64 $tmp3070 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3069, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3071 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2896->subtypes, $tmp3070);
        panda$core$String* $tmp3072 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result2976, ((org$pandalanguage$pandac$Type*) $tmp3071), p_call->type, p_out);
        return $tmp3072;
    }
    }
    return result2976;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3073;
    panda$core$String* testStart3076;
    panda$core$String* isNonNull3077;
    panda$core$String* nonNullLabel3091;
    panda$core$String* endLabel3093;
    panda$core$String* unwrapped3106;
    panda$core$String* nonNullValue3109;
    panda$core$String* result3117;
    panda$core$String* mallocRef3139;
    panda$core$String* wrapperTypeName3151;
    panda$core$String* wrapperType3154;
    panda$core$String* wrapperCast3157;
    panda$core$String* classPtr3170;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3188;
    panda$core$String* refCount3203;
    panda$core$String* target3226;
    panda$core$String* result3262;
    org$pandalanguage$pandac$ClassDecl* $tmp3074 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3073 = $tmp3074;
    PANDA_ASSERT(((panda$core$Bit) { src3073 != NULL }).value);
    panda$core$Bit $tmp3075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3075.value) {
    {
        testStart3076 = self->currentBlock;
        panda$core$String* $tmp3078 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3077 = $tmp3078;
        panda$core$String* $tmp3080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3079, isNonNull3077);
        panda$core$String* $tmp3082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3080, &$s3081);
        panda$core$String* $tmp3083 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3082, $tmp3083);
        panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3084, &$s3085);
        panda$core$String* $tmp3087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3086, p_value);
        panda$core$String* $tmp3089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3087, &$s3088);
        (($fn3090) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3089);
        panda$core$String* $tmp3092 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3091 = $tmp3092;
        panda$core$String* $tmp3094 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3093 = $tmp3094;
        panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3095, isNonNull3077);
        panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3097);
        panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3098, nonNullLabel3091);
        panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, &$s3100);
        panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3101, endLabel3093);
        panda$core$String* $tmp3104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3102, &$s3103);
        (($fn3105) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3104);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3091, p_out);
        panda$core$Object* $tmp3107 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3108 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3107), p_out);
        unwrapped3106 = $tmp3108;
        panda$core$Object* $tmp3110 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3111 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped3106, ((org$pandalanguage$pandac$Type*) $tmp3110), p_dstType, p_out);
        nonNullValue3109 = $tmp3111;
        panda$core$String* $tmp3113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3112, endLabel3093);
        panda$core$String* $tmp3115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3113, &$s3114);
        (($fn3116) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3115);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3093, p_out);
        panda$core$String* $tmp3118 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3117 = $tmp3118;
        panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3119, result3117);
        panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3120, &$s3121);
        panda$core$String* $tmp3123 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3122, $tmp3123);
        panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3124, &$s3125);
        panda$core$String* $tmp3127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3126, testStart3076);
        panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3127, &$s3128);
        panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3130, nonNullValue3109);
        panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3131, &$s3132);
        panda$core$String* $tmp3134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3133, nonNullLabel3091);
        panda$core$String* $tmp3136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3134, &$s3135);
        panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, $tmp3136);
        (($fn3138) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3137);
        return result3117;
    }
    }
    panda$core$String* $tmp3140 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3139 = $tmp3140;
    panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3141, mallocRef3139);
    panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3142, &$s3143);
    org$pandalanguage$pandac$Type* $tmp3145 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3073);
    panda$core$Int64 $tmp3146 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3145);
    panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3144, ((panda$core$Object*) wrap_panda$core$Int64($tmp3146)));
    panda$core$String* $tmp3149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3147, &$s3148);
    (($fn3150) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3149);
    org$pandalanguage$pandac$Type* $tmp3152 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3073);
    panda$core$String* $tmp3153 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3152);
    wrapperTypeName3151 = $tmp3153;
    org$pandalanguage$pandac$Type* $tmp3155 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3073);
    panda$core$String* $tmp3156 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3155);
    wrapperType3154 = $tmp3156;
    panda$core$String* $tmp3158 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3157 = $tmp3158;
    panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3159, wrapperCast3157);
    panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, &$s3161);
    panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3162, mallocRef3139);
    panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, &$s3164);
    panda$core$String* $tmp3166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3165, wrapperType3154);
    panda$core$String* $tmp3168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3166, &$s3167);
    (($fn3169) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3168);
    panda$core$String* $tmp3171 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3170 = $tmp3171;
    panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3172, classPtr3170);
    panda$core$String* $tmp3175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3173, &$s3174);
    panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3175, wrapperTypeName3151);
    panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, &$s3177);
    panda$core$String* $tmp3180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3179, wrapperType3154);
    panda$core$String* $tmp3182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3180, &$s3181);
    panda$core$String* $tmp3183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3182, wrapperCast3157);
    panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3183, &$s3184);
    panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, $tmp3185);
    (($fn3187) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3186);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3189 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3073);
    cc3188 = $tmp3189;
    panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3190, cc3188->type);
    panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3191, &$s3192);
    panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3193, cc3188->name);
    panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, &$s3195);
    panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3197, classPtr3170);
    panda$core$String* $tmp3200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3198, &$s3199);
    panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3196, $tmp3200);
    (($fn3202) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3201);
    panda$core$String* $tmp3204 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3203 = $tmp3204;
    panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3205, refCount3203);
    panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3206, &$s3207);
    panda$core$String* $tmp3209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, wrapperTypeName3151);
    panda$core$String* $tmp3211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3209, &$s3210);
    panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3212, wrapperType3154);
    panda$core$String* $tmp3215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3213, &$s3214);
    panda$core$String* $tmp3216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3215, wrapperCast3157);
    panda$core$String* $tmp3218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3216, &$s3217);
    panda$core$String* $tmp3219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3211, $tmp3218);
    (($fn3220) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3219);
    panda$core$String* $tmp3222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3221, refCount3203);
    panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3222, &$s3223);
    (($fn3225) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3224);
    panda$core$String* $tmp3227 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3226 = $tmp3227;
    panda$core$String* $tmp3229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3228, target3226);
    panda$core$String* $tmp3231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3229, &$s3230);
    panda$core$String* $tmp3232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3231, wrapperTypeName3151);
    panda$core$String* $tmp3234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3232, &$s3233);
    panda$core$String* $tmp3236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3235, wrapperType3154);
    panda$core$String* $tmp3238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3236, &$s3237);
    panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3238, wrapperCast3157);
    panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3239, &$s3240);
    panda$core$String* $tmp3242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3234, $tmp3241);
    (($fn3243) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3242);
    panda$core$String* $tmp3245 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3244, $tmp3245);
    panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3246, &$s3247);
    panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3248, p_value);
    panda$core$String* $tmp3251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3249, &$s3250);
    panda$core$String* $tmp3252 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3251, $tmp3252);
    panda$core$String* $tmp3255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3253, &$s3254);
    panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3255, target3226);
    panda$core$String* $tmp3258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3256, &$s3257);
    (($fn3259) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3258);
    panda$core$String* $tmp3260 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3261 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3154, $tmp3260);
    if ($tmp3261.value) {
    {
        panda$core$String* $tmp3263 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3262 = $tmp3263;
        panda$core$String* $tmp3265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3264, result3262);
        panda$core$String* $tmp3267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3265, &$s3266);
        panda$core$String* $tmp3268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3267, wrapperType3154);
        panda$core$String* $tmp3270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3268, &$s3269);
        panda$core$String* $tmp3271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3270, wrapperCast3157);
        panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3271, &$s3272);
        panda$core$String* $tmp3274 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3273, $tmp3274);
        panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3275, &$s3276);
        (($fn3278) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3277);
        return result3262;
    }
    }
    return wrapperCast3157;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3282;
    panda$core$String* t3283;
    org$pandalanguage$pandac$ClassDecl* cl3287;
    panda$core$String* base3291;
    panda$collections$ListView* fields3294;
    panda$core$Int64$nullable index3296;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3297;
    panda$core$String* result3325;
    panda$core$String* ptr3345;
    panda$core$String* result3354;
    panda$core$Bit $tmp3279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3279.value);
    panda$core$Int64 $tmp3280 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3280, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3281.value);
    field3282 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3284 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3282->type);
    t3283 = $tmp3284;
    panda$core$Bit $tmp3285 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3282->annotations);
    if ($tmp3285.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3282->value != NULL }).value);
        panda$core$String* $tmp3286 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field3282->value, p_out);
        return $tmp3286;
    }
    }
    panda$core$Object* $tmp3288 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3289 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3288)->type);
    cl3287 = $tmp3289;
    PANDA_ASSERT(((panda$core$Bit) { cl3287 != NULL }).value);
    panda$core$Bit $tmp3290 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3287);
    if ($tmp3290.value) {
    {
        panda$core$Object* $tmp3292 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3293 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3292), p_out);
        base3291 = $tmp3293;
        panda$collections$ListView* $tmp3295 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3287);
        fields3294 = $tmp3295;
        index3296 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3298 = ((panda$collections$CollectionView*) fields3294)->$class->itable;
        while ($tmp3298->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3298 = $tmp3298->next;
        }
        $fn3300 $tmp3299 = $tmp3298->methods[0];
        panda$core$Int64 $tmp3301 = $tmp3299(((panda$collections$CollectionView*) fields3294));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3297, ((panda$core$Int64) { 0 }), $tmp3301, ((panda$core$Bit) { false }));
        int64_t $tmp3303 = $tmp3297.min.value;
        panda$core$Int64 i3302 = { $tmp3303 };
        int64_t $tmp3305 = $tmp3297.max.value;
        bool $tmp3306 = $tmp3297.inclusive.value;
        if ($tmp3306) goto $l3313; else goto $l3314;
        $l3313:;
        if ($tmp3303 <= $tmp3305) goto $l3307; else goto $l3309;
        $l3314:;
        if ($tmp3303 < $tmp3305) goto $l3307; else goto $l3309;
        $l3307:;
        {
            ITable* $tmp3315 = fields3294->$class->itable;
            while ($tmp3315->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3315 = $tmp3315->next;
            }
            $fn3317 $tmp3316 = $tmp3315->methods[0];
            panda$core$Object* $tmp3318 = $tmp3316(fields3294, i3302);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3318)) == ((panda$core$Object*) field3282) }).value) {
            {
                index3296 = ((panda$core$Int64$nullable) { i3302, true });
                goto $l3309;
            }
            }
        }
        $l3310:;
        int64_t $tmp3320 = $tmp3305 - i3302.value;
        if ($tmp3306) goto $l3321; else goto $l3322;
        $l3321:;
        if ($tmp3320 >= 1) goto $l3319; else goto $l3309;
        $l3322:;
        if ($tmp3320 > 1) goto $l3319; else goto $l3309;
        $l3319:;
        i3302.value += 1;
        goto $l3307;
        $l3309:;
        PANDA_ASSERT(((panda$core$Bit) { index3296.nonnull }).value);
        panda$core$String* $tmp3326 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3325 = $tmp3326;
        panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3327, result3325);
        panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3328, &$s3329);
        panda$core$Object* $tmp3331 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3332 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3331)->type);
        panda$core$String* $tmp3333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3330, $tmp3332);
        panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3333, &$s3334);
        panda$core$String* $tmp3336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, base3291);
        panda$core$String* $tmp3338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3336, &$s3337);
        panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3339, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3296.value))));
        panda$core$String* $tmp3342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3340, &$s3341);
        panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3338, $tmp3342);
        (($fn3344) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3343);
        return result3325;
    }
    }
    panda$core$String* $tmp3347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3346, t3283);
    panda$core$String* $tmp3349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3347, &$s3348);
    panda$core$String* $tmp3350 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3349, $tmp3350);
    panda$core$String* $tmp3353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3351, &$s3352);
    ptr3345 = $tmp3353;
    panda$core$String* $tmp3355 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3354 = $tmp3355;
    panda$core$String* $tmp3357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3356, result3354);
    panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3357, &$s3358);
    panda$core$String* $tmp3360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3359, t3283);
    panda$core$String* $tmp3362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3360, &$s3361);
    panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3362, ptr3345);
    panda$core$String* $tmp3365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3363, &$s3364);
    (($fn3366) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3365);
    return result3354;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3367;
    panda$core$String* testStart3370;
    panda$core$String* isNonNull3371;
    panda$core$String* nonNullLabel3385;
    panda$core$String* endLabel3387;
    panda$core$String* wrapped3400;
    panda$core$String* nonNullValue3403;
    panda$core$String* result3411;
    panda$core$String* targetType3440;
    panda$core$String* wrapperTypeName3442;
    panda$core$String* wrapperType3444;
    panda$core$String* srcCast3446;
    panda$core$String* load3463;
    panda$core$String* result3479;
    org$pandalanguage$pandac$ClassDecl* $tmp3368 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3367 = $tmp3368;
    PANDA_ASSERT(((panda$core$Bit) { target3367 != NULL }).value);
    panda$core$Bit $tmp3369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3369.value) {
    {
        testStart3370 = self->currentBlock;
        panda$core$String* $tmp3372 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3371 = $tmp3372;
        panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3373, isNonNull3371);
        panda$core$String* $tmp3376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3374, &$s3375);
        panda$core$String* $tmp3377 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3376, $tmp3377);
        panda$core$String* $tmp3380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3378, &$s3379);
        panda$core$String* $tmp3381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3380, p_value);
        panda$core$String* $tmp3383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3381, &$s3382);
        (($fn3384) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3383);
        panda$core$String* $tmp3386 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3385 = $tmp3386;
        panda$core$String* $tmp3388 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3387 = $tmp3388;
        panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3389, isNonNull3371);
        panda$core$String* $tmp3392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, &$s3391);
        panda$core$String* $tmp3393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3392, nonNullLabel3385);
        panda$core$String* $tmp3395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3393, &$s3394);
        panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3395, endLabel3387);
        panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3396, &$s3397);
        (($fn3399) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3398);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3385, p_out);
        panda$core$Object* $tmp3401 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3402 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3401), p_out);
        wrapped3400 = $tmp3402;
        panda$core$Object* $tmp3404 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3405 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped3400, ((org$pandalanguage$pandac$Type*) $tmp3404), p_dstType, p_out);
        nonNullValue3403 = $tmp3405;
        panda$core$String* $tmp3407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3406, endLabel3387);
        panda$core$String* $tmp3409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3407, &$s3408);
        (($fn3410) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3409);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3387, p_out);
        panda$core$String* $tmp3412 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3411 = $tmp3412;
        panda$core$String* $tmp3414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3413, result3411);
        panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3414, &$s3415);
        panda$core$String* $tmp3417 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3416, $tmp3417);
        panda$core$String* $tmp3420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3418, &$s3419);
        panda$core$Object* $tmp3422 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3423 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3422));
        panda$core$String* $tmp3424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3421, $tmp3423);
        panda$core$String* $tmp3426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3424, &$s3425);
        panda$core$String* $tmp3427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3420, $tmp3426);
        panda$core$String* $tmp3429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3428, testStart3370);
        panda$core$String* $tmp3431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3429, &$s3430);
        panda$core$String* $tmp3432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3431, nonNullValue3403);
        panda$core$String* $tmp3434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3432, &$s3433);
        panda$core$String* $tmp3435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3434, nonNullLabel3385);
        panda$core$String* $tmp3437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3435, &$s3436);
        panda$core$String* $tmp3438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3427, $tmp3437);
        (($fn3439) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3438);
        return result3411;
    }
    }
    panda$core$String* $tmp3441 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3440 = $tmp3441;
    panda$core$String* $tmp3443 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3442 = $tmp3443;
    panda$core$String* $tmp3445 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3444 = $tmp3445;
    panda$core$String* $tmp3447 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3446 = $tmp3447;
    panda$core$String* $tmp3449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3448, srcCast3446);
    panda$core$String* $tmp3451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3449, &$s3450);
    panda$core$String* $tmp3452 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3451, $tmp3452);
    panda$core$String* $tmp3455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3453, &$s3454);
    panda$core$String* $tmp3456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3455, p_value);
    panda$core$String* $tmp3458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3456, &$s3457);
    panda$core$String* $tmp3459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3458, wrapperType3444);
    panda$core$String* $tmp3461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3459, &$s3460);
    (($fn3462) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3461);
    panda$core$String* $tmp3464 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3463 = $tmp3464;
    panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3465, load3463);
    panda$core$String* $tmp3468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3466, &$s3467);
    panda$core$String* $tmp3469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3468, wrapperTypeName3442);
    panda$core$String* $tmp3471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3469, &$s3470);
    panda$core$String* $tmp3472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3471, wrapperType3444);
    panda$core$String* $tmp3474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3472, &$s3473);
    panda$core$String* $tmp3475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3474, srcCast3446);
    panda$core$String* $tmp3477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3475, &$s3476);
    (($fn3478) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3477);
    panda$core$String* $tmp3480 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3479 = $tmp3480;
    panda$core$String* $tmp3482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3481, result3479);
    panda$core$String* $tmp3484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3482, &$s3483);
    panda$core$String* $tmp3485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3484, wrapperTypeName3442);
    panda$core$String* $tmp3487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3485, &$s3486);
    panda$core$String* $tmp3488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3487, load3463);
    panda$core$String* $tmp3490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3488, &$s3489);
    panda$core$String* $tmp3491 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3490, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3491, &$s3492);
    (($fn3494) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3493);
    return result3479;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* nullableType3495;
    panda$core$String* result3497;
    panda$core$String* $tmp3496 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3495 = $tmp3496;
    panda$core$String* $tmp3498 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3497 = $tmp3498;
    panda$core$String* $tmp3500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3499, result3497);
    panda$core$String* $tmp3502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3500, &$s3501);
    panda$core$String* $tmp3503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3502, nullableType3495);
    panda$core$String* $tmp3505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3503, &$s3504);
    panda$core$String* $tmp3507 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3506, $tmp3507);
    panda$core$String* $tmp3510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3508, &$s3509);
    panda$core$String* $tmp3511 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3510, $tmp3511);
    panda$core$String* $tmp3514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3512, &$s3513);
    panda$core$String* $tmp3515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3514, p_value);
    panda$core$String* $tmp3517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3515, &$s3516);
    panda$core$String* $tmp3518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3505, $tmp3517);
    (($fn3519) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3518);
    return result3497;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3520;
    panda$core$String* $tmp3521 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3520 = $tmp3521;
    panda$core$String* $tmp3523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3522, result3520);
    panda$core$String* $tmp3525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3523, &$s3524);
    panda$core$String* $tmp3526 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3525, $tmp3526);
    panda$core$String* $tmp3529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3527, &$s3528);
    panda$core$String* $tmp3530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3529, p_value);
    panda$core$String* $tmp3532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3530, &$s3531);
    (($fn3533) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3532);
    return result3520;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op3534;
    panda$core$Int64 size13537;
    panda$core$Int64 size23539;
    org$pandalanguage$pandac$ClassDecl* srcClass3547;
    org$pandalanguage$pandac$ClassDecl* targetClass3549;
    panda$core$String* srcType3588;
    panda$core$String* dstType3590;
    panda$core$String* result3593;
    panda$core$Bit $tmp3535 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3535.value) {
    {
        panda$core$Bit $tmp3536 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3536.value);
        panda$core$Int64 $tmp3538 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13537 = $tmp3538;
        panda$core$Int64 $tmp3540 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23539 = $tmp3540;
        panda$core$Bit $tmp3541 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13537, size23539);
        if ($tmp3541.value) {
        {
            op3534 = &$s3542;
        }
        }
        else {
        panda$core$Bit $tmp3543 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13537, size23539);
        if ($tmp3543.value) {
        {
            panda$core$Bit $tmp3544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3544.value) {
            {
                op3534 = &$s3545;
            }
            }
            else {
            {
                op3534 = &$s3546;
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
        org$pandalanguage$pandac$ClassDecl* $tmp3548 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3547 = $tmp3548;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3547 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3550 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3549 = $tmp3550;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3549 != NULL }).value);
        panda$core$Bit $tmp3552 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3547);
        bool $tmp3551 = $tmp3552.value;
        if (!$tmp3551) goto $l3553;
        panda$core$Bit $tmp3554 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3549);
        panda$core$Bit $tmp3555 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3554);
        $tmp3551 = $tmp3555.value;
        $l3553:;
        panda$core$Bit $tmp3556 = { $tmp3551 };
        if ($tmp3556.value) {
        {
            panda$core$String* $tmp3557 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3557;
        }
        }
        else {
        panda$core$Bit $tmp3559 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3547);
        panda$core$Bit $tmp3560 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3559);
        bool $tmp3558 = $tmp3560.value;
        if (!$tmp3558) goto $l3561;
        panda$core$Bit $tmp3562 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3549);
        $tmp3558 = $tmp3562.value;
        $l3561:;
        panda$core$Bit $tmp3563 = { $tmp3558 };
        if ($tmp3563.value) {
        {
            panda$core$String* $tmp3564 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3564;
        }
        }
        else {
        panda$core$Bit $tmp3567 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3547);
        bool $tmp3566 = $tmp3567.value;
        if (!$tmp3566) goto $l3568;
        panda$core$Bit $tmp3569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3566 = $tmp3569.value;
        $l3568:;
        panda$core$Bit $tmp3570 = { $tmp3566 };
        bool $tmp3565 = $tmp3570.value;
        if (!$tmp3565) goto $l3571;
        panda$core$Object* $tmp3572 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3573 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3572), p_src);
        $tmp3565 = $tmp3573.value;
        $l3571:;
        panda$core$Bit $tmp3574 = { $tmp3565 };
        if ($tmp3574.value) {
        {
            panda$core$String* $tmp3575 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3575;
        }
        }
        else {
        panda$core$Bit $tmp3578 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3549);
        bool $tmp3577 = $tmp3578.value;
        if (!$tmp3577) goto $l3579;
        panda$core$Bit $tmp3580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3577 = $tmp3580.value;
        $l3579:;
        panda$core$Bit $tmp3581 = { $tmp3577 };
        bool $tmp3576 = $tmp3581.value;
        if (!$tmp3576) goto $l3582;
        panda$core$Object* $tmp3583 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3584 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3583), p_target);
        $tmp3576 = $tmp3584.value;
        $l3582:;
        panda$core$Bit $tmp3585 = { $tmp3576 };
        if ($tmp3585.value) {
        {
            panda$core$String* $tmp3586 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3586;
        }
        }
        }
        }
        }
        op3534 = &$s3587;
    }
    }
    panda$core$String* $tmp3589 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3588 = $tmp3589;
    panda$core$String* $tmp3591 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3590 = $tmp3591;
    panda$core$Bit $tmp3592 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3588, dstType3590);
    if ($tmp3592.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3594 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3593 = $tmp3594;
    panda$core$String* $tmp3596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3595, result3593);
    panda$core$String* $tmp3598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3596, &$s3597);
    panda$core$String* $tmp3599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3598, op3534);
    panda$core$String* $tmp3601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3599, &$s3600);
    panda$core$String* $tmp3602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3601, srcType3588);
    panda$core$String* $tmp3604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3602, &$s3603);
    panda$core$String* $tmp3605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3604, p_value);
    panda$core$String* $tmp3607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3605, &$s3606);
    panda$core$String* $tmp3608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3607, dstType3590);
    panda$core$String* $tmp3610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3608, &$s3609);
    (($fn3611) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3610);
    return result3593;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3615;
    panda$core$Bit $tmp3612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3612.value);
    panda$core$Int64 $tmp3613 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3613, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3614.value);
    panda$core$Object* $tmp3616 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3617 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3616), p_out);
    base3615 = $tmp3617;
    panda$core$Object* $tmp3618 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3619 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base3615, ((org$pandalanguage$pandac$IRNode*) $tmp3618)->type, p_cast->type, p_out);
    return $tmp3619;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3623;
    panda$core$String* t3625;
    panda$core$String* value3633;
    panda$core$String* result3644;
    org$pandalanguage$pandac$FieldDecl* lastField3646;
    panda$core$String* value3676;
    panda$core$String* result3687;
    org$pandalanguage$pandac$FieldDecl* lastField3689;
    panda$core$String* alloca3714;
    panda$core$String* result3735;
    panda$core$String* callRef3751;
    panda$core$String* result3762;
    panda$core$String* classPtr3776;
    panda$core$String* className3778;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3804;
    panda$core$Bit $tmp3620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3620.value);
    panda$core$Int64 $tmp3621 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3622 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3621, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3622.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3624 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3623 = $tmp3624;
    PANDA_ASSERT(((panda$core$Bit) { cl3623 != NULL }).value);
    panda$core$String* $tmp3626 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3625 = $tmp3626;
    panda$core$Bit $tmp3627 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3627.value) {
    {
        panda$core$Int64 $tmp3628 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3628, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3629.value);
        panda$core$Object* $tmp3630 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3631 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3630)->children);
        panda$core$Bit $tmp3632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3631, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3632.value);
        panda$core$Object* $tmp3634 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3635 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3634)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3636 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3635), p_out);
        value3633 = $tmp3636;
        panda$core$Object* $tmp3637 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3638 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3637)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3638)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3639.value) {
        {
            panda$core$String* $tmp3641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3640, value3633);
            panda$core$String* $tmp3643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3641, &$s3642);
            return $tmp3643;
        }
        }
        panda$core$String* $tmp3645 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3644 = $tmp3645;
        panda$core$Int64 $tmp3647 = panda$collections$Array$get_count$R$panda$core$Int64(cl3623->fields);
        panda$core$Int64 $tmp3648 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3647, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3649 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3623->fields, $tmp3648);
        lastField3646 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3649);
        panda$core$Bit $tmp3650 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3646->annotations);
        panda$core$Bit $tmp3651 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3650);
        PANDA_ASSERT($tmp3651.value);
        panda$core$String* $tmp3653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3652, result3644);
        panda$core$String* $tmp3655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3653, &$s3654);
        panda$core$String* $tmp3656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3655, t3625);
        panda$core$String* $tmp3658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3656, &$s3657);
        panda$core$String* $tmp3659 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3646->type);
        panda$core$String* $tmp3660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3658, $tmp3659);
        panda$core$String* $tmp3662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3660, &$s3661);
        panda$core$String* $tmp3664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3663, value3633);
        panda$core$String* $tmp3666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3664, &$s3665);
        panda$core$String* $tmp3667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3662, $tmp3666);
        (($fn3668) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3667);
        return result3644;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3669 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3670 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3669);
    if ($tmp3670.value) {
    {
        panda$core$Int64 $tmp3671 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3671, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3672.value);
        panda$core$Object* $tmp3673 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3674 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3673)->children);
        panda$core$Bit $tmp3675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3674, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3675.value);
        panda$core$Object* $tmp3677 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3678 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3677)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3679 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3678), p_out);
        value3676 = $tmp3679;
        panda$core$Object* $tmp3680 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3681 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3680)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3681)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3682.value) {
        {
            panda$core$String* $tmp3684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3683, value3676);
            panda$core$String* $tmp3686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3684, &$s3685);
            return $tmp3686;
        }
        }
        panda$core$String* $tmp3688 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3687 = $tmp3688;
        panda$core$Int64 $tmp3690 = panda$collections$Array$get_count$R$panda$core$Int64(cl3623->fields);
        panda$core$Int64 $tmp3691 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3690, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3692 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3623->fields, $tmp3691);
        lastField3689 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3692);
        panda$core$Bit $tmp3693 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3689->annotations);
        panda$core$Bit $tmp3694 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3693);
        PANDA_ASSERT($tmp3694.value);
        panda$core$String* $tmp3696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3695, result3687);
        panda$core$String* $tmp3698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3696, &$s3697);
        panda$core$String* $tmp3699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3698, t3625);
        panda$core$String* $tmp3701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3699, &$s3700);
        panda$core$String* $tmp3702 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3689->type);
        panda$core$String* $tmp3703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3701, $tmp3702);
        panda$core$String* $tmp3705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3703, &$s3704);
        panda$core$String* $tmp3707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3706, value3676);
        panda$core$String* $tmp3709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3707, &$s3708);
        panda$core$String* $tmp3710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3705, $tmp3709);
        (($fn3711) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3710);
        return result3687;
    }
    }
    panda$core$Bit $tmp3712 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3623);
    if ($tmp3712.value) {
    {
        panda$core$Int64 $tmp3713 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3713;
        panda$core$String* $tmp3716 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3715, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3716, &$s3717);
        alloca3714 = $tmp3718;
        panda$core$String* $tmp3720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3719, alloca3714);
        panda$core$String* $tmp3722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3720, &$s3721);
        panda$core$String* $tmp3723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3722, t3625);
        panda$core$String* $tmp3725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3723, &$s3724);
        (($fn3726) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3725);
        panda$core$Object* $tmp3727 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3728, t3625);
        panda$core$String* $tmp3731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3729, &$s3730);
        panda$core$String* $tmp3732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3731, alloca3714);
        panda$core$String* $tmp3734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3732, &$s3733);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3727), $tmp3734, p_out);
        panda$core$String* $tmp3736 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3735 = $tmp3736;
        panda$core$String* $tmp3738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3737, result3735);
        panda$core$String* $tmp3740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3738, &$s3739);
        panda$core$String* $tmp3741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3740, t3625);
        panda$core$String* $tmp3743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3741, &$s3742);
        panda$core$String* $tmp3744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3743, t3625);
        panda$core$String* $tmp3746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3744, &$s3745);
        panda$core$String* $tmp3747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3746, alloca3714);
        panda$core$String* $tmp3749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3747, &$s3748);
        (($fn3750) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3749);
        return result3735;
    }
    }
    panda$core$String* $tmp3752 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3751 = $tmp3752;
    panda$core$String* $tmp3754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3753, callRef3751);
    panda$core$String* $tmp3756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3754, &$s3755);
    panda$core$Int64 $tmp3757 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3758 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3756, ((panda$core$Object*) wrap_panda$core$Int64($tmp3757)));
    panda$core$String* $tmp3760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3758, &$s3759);
    (($fn3761) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3760);
    panda$core$String* $tmp3763 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3762 = $tmp3763;
    panda$core$String* $tmp3765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3764, result3762);
    panda$core$String* $tmp3767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3765, &$s3766);
    panda$core$String* $tmp3768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3767, callRef3751);
    panda$core$String* $tmp3770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3768, &$s3769);
    panda$core$String* $tmp3771 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3770, $tmp3771);
    panda$core$String* $tmp3774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3772, &$s3773);
    (($fn3775) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3774);
    panda$core$String* $tmp3777 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3776 = $tmp3777;
    panda$core$Bit $tmp3780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3779 = $tmp3780.value;
    if (!$tmp3779) goto $l3781;
    panda$core$Bit $tmp3782 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3623);
    panda$core$Bit $tmp3783 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3782);
    $tmp3779 = $tmp3783.value;
    $l3781:;
    panda$core$Bit $tmp3784 = { $tmp3779 };
    if ($tmp3784.value) {
    {
        panda$core$Object* $tmp3785 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3786 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3785));
        className3778 = $tmp3786;
    }
    }
    else {
    {
        panda$core$String* $tmp3787 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3778 = $tmp3787;
    }
    }
    panda$core$String* $tmp3789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3788, classPtr3776);
    panda$core$String* $tmp3791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3789, &$s3790);
    panda$core$String* $tmp3792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3791, className3778);
    panda$core$String* $tmp3794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3792, &$s3793);
    panda$core$String* $tmp3795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3794, t3625);
    panda$core$String* $tmp3797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3795, &$s3796);
    panda$core$String* $tmp3798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3797, result3762);
    panda$core$String* $tmp3800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3798, &$s3799);
    panda$core$String* $tmp3802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3800, &$s3801);
    (($fn3803) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3802);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3805 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3623);
    cc3804 = $tmp3805;
    panda$core$String* $tmp3807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3806, cc3804->type);
    panda$core$String* $tmp3809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3807, &$s3808);
    panda$core$String* $tmp3810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3809, cc3804->name);
    panda$core$String* $tmp3812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3810, &$s3811);
    panda$core$String* $tmp3814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3813, classPtr3776);
    panda$core$String* $tmp3816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3814, &$s3815);
    panda$core$String* $tmp3817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3812, $tmp3816);
    (($fn3818) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3817);
    panda$core$Object* $tmp3819 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3820, t3625);
    panda$core$String* $tmp3823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3821, &$s3822);
    panda$core$String* $tmp3824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3823, result3762);
    panda$core$String* $tmp3826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3824, &$s3825);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3819), $tmp3826, p_out);
    return result3762;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3827 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    return $tmp3827;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3829 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3828, $tmp3829);
    return $tmp3830;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3831;
    }
    }
    return &$s3832;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3835;
    panda$core$String* t3837;
    panda$core$Bit $tmp3833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3833.value) {
    {
        panda$core$String* $tmp3834 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3834;
    }
    }
    panda$core$String* $tmp3836 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3835 = $tmp3836;
    panda$core$String* $tmp3838 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3837 = $tmp3838;
    panda$core$String* $tmp3840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3839, result3835);
    panda$core$String* $tmp3842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3840, &$s3841);
    panda$core$String* $tmp3843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3842, t3837);
    panda$core$String* $tmp3845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3843, &$s3844);
    panda$core$String* $tmp3846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3845, t3837);
    panda$core$String* $tmp3848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3846, &$s3847);
    panda$core$String* $tmp3849 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp3850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3848, $tmp3849);
    panda$core$String* $tmp3852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3850, &$s3851);
    (($fn3853) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3852);
    return result3835;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* chars3855;
    panda$core$String* charsType3860;
    panda$core$String* separator3878;
    panda$collections$Iterator* c$Iter3880;
    panda$core$Char8 c3893;
    panda$core$String* result3911;
    org$pandalanguage$pandac$ClassDecl* string3916;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3919;
    panda$core$Int64 $tmp3854 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3854;
    panda$core$String* $tmp3857 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3856, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3857, &$s3858);
    chars3855 = $tmp3859;
    panda$collections$ListView* $tmp3862 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3863 = ((panda$collections$CollectionView*) $tmp3862)->$class->itable;
    while ($tmp3863->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3863 = $tmp3863->next;
    }
    $fn3865 $tmp3864 = $tmp3863->methods[0];
    panda$core$Int64 $tmp3866 = $tmp3864(((panda$collections$CollectionView*) $tmp3862));
    panda$core$String* $tmp3867 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3861, ((panda$core$Object*) wrap_panda$core$Int64($tmp3866)));
    panda$core$String* $tmp3869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3867, &$s3868);
    charsType3860 = $tmp3869;
    panda$core$String* $tmp3871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3870, chars3855);
    panda$core$String* $tmp3873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3871, &$s3872);
    panda$core$String* $tmp3874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3873, charsType3860);
    panda$core$String* $tmp3876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3874, &$s3875);
    (($fn3877) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3876);
    separator3878 = &$s3879;
    {
        panda$collections$ListView* $tmp3881 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp3882 = ((panda$collections$Iterable*) $tmp3881)->$class->itable;
        while ($tmp3882->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3882 = $tmp3882->next;
        }
        $fn3884 $tmp3883 = $tmp3882->methods[0];
        panda$collections$Iterator* $tmp3885 = $tmp3883(((panda$collections$Iterable*) $tmp3881));
        c$Iter3880 = $tmp3885;
        $l3886:;
        ITable* $tmp3888 = c$Iter3880->$class->itable;
        while ($tmp3888->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3888 = $tmp3888->next;
        }
        $fn3890 $tmp3889 = $tmp3888->methods[0];
        panda$core$Bit $tmp3891 = $tmp3889(c$Iter3880);
        panda$core$Bit $tmp3892 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3891);
        if (!$tmp3892.value) goto $l3887;
        {
            ITable* $tmp3894 = c$Iter3880->$class->itable;
            while ($tmp3894->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3894 = $tmp3894->next;
            }
            $fn3896 $tmp3895 = $tmp3894->methods[1];
            panda$core$Object* $tmp3897 = $tmp3895(c$Iter3880);
            c3893 = ((panda$core$Char8$wrapper*) $tmp3897)->value;
            panda$core$String* $tmp3899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3898, separator3878);
            panda$core$String* $tmp3901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3899, &$s3900);
            panda$core$Int8 $tmp3902 = panda$core$Char8$convert$R$panda$core$Int8(c3893);
            panda$core$String* $tmp3903 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3901, ((panda$core$Object*) wrap_panda$core$Int8($tmp3902)));
            panda$core$String* $tmp3905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3903, &$s3904);
            (($fn3906) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3905);
            separator3878 = &$s3907;
        }
        goto $l3886;
        $l3887:;
    }
    (($fn3909) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s3908);
    panda$core$Int64 $tmp3910 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3910;
    panda$core$String* $tmp3913 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3912, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3913, &$s3914);
    result3911 = $tmp3915;
    org$pandalanguage$pandac$Type* $tmp3917 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3918 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp3917);
    string3916 = $tmp3918;
    PANDA_ASSERT(((panda$core$Bit) { string3916 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3920 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string3916);
    cc3919 = $tmp3920;
    panda$core$String* $tmp3922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3921, result3911);
    panda$core$String* $tmp3924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3922, &$s3923);
    panda$core$String* $tmp3926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3925, cc3919->type);
    panda$core$String* $tmp3928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3926, &$s3927);
    panda$core$String* $tmp3929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3928, cc3919->name);
    panda$core$String* $tmp3931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3929, &$s3930);
    panda$core$String* $tmp3932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3924, $tmp3931);
    panda$core$String* $tmp3934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3932, &$s3933);
    panda$core$String* $tmp3936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3935, charsType3860);
    panda$core$String* $tmp3938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3936, &$s3937);
    panda$core$String* $tmp3939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3938, chars3855);
    panda$core$String* $tmp3941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3939, &$s3940);
    panda$core$String* $tmp3942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3934, $tmp3941);
    panda$collections$ListView* $tmp3944 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3945 = ((panda$collections$CollectionView*) $tmp3944)->$class->itable;
    while ($tmp3945->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3945 = $tmp3945->next;
    }
    $fn3947 $tmp3946 = $tmp3945->methods[0];
    panda$core$Int64 $tmp3948 = $tmp3946(((panda$collections$CollectionView*) $tmp3944));
    panda$core$String* $tmp3949 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3943, ((panda$core$Object*) wrap_panda$core$Int64($tmp3948)));
    panda$core$String* $tmp3951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3949, &$s3950);
    panda$core$String* $tmp3952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3942, $tmp3951);
    panda$core$String* $tmp3954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3952, &$s3953);
    (($fn3955) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp3954);
    return result3911;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp3956 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp3957 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3956, ((panda$core$Int64) { 0 }));
    if ($tmp3957.value) {
    {
        panda$core$Object* $tmp3958 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp3958)->selfRef;
    }
    }
    return &$s3959;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3960;
    panda$core$String* $tmp3961 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3960 = $tmp3961;
    panda$core$String* $tmp3963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3962, result3960);
    panda$core$String* $tmp3965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3963, &$s3964);
    org$pandalanguage$pandac$Type* $tmp3966 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
    panda$core$String* $tmp3967 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3966);
    panda$core$String* $tmp3968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3965, $tmp3967);
    panda$core$String* $tmp3970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3968, &$s3969);
    panda$core$String* $tmp3971 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp3972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3970, $tmp3971);
    (($fn3973) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3972);
    return result3960;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value3977;
    org$pandalanguage$pandac$ClassDecl* cl3980;
    panda$core$String* resultValue3983;
    panda$core$String* field3988;
    panda$core$String* result4016;
    panda$core$Bit $tmp3974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp3974.value);
    panda$core$Int64 $tmp3975 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp3976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3975, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3976.value);
    panda$core$Object* $tmp3978 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3979 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3978), p_out);
    value3977 = $tmp3979;
    panda$core$Object* $tmp3981 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3982 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3981)->type);
    cl3980 = $tmp3982;
    panda$core$Bit $tmp3984 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3980);
    if ($tmp3984.value) {
    {
        panda$core$Object* $tmp3985 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3986 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3985)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3986.value) {
        {
            return &$s3987;
        }
        }
        panda$core$String* $tmp3989 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field3988 = $tmp3989;
        panda$core$String* $tmp3991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3990, field3988);
        panda$core$String* $tmp3993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3991, &$s3992);
        panda$core$String* $tmp3994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3993, value3977);
        panda$core$String* $tmp3996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3994, &$s3995);
        (($fn3997) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3996);
        panda$core$String* $tmp3998 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3983 = $tmp3998;
        panda$core$String* $tmp4000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3999, resultValue3983);
        panda$core$String* $tmp4002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4000, &$s4001);
        panda$core$String* $tmp4003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4002, field3988);
        panda$core$String* $tmp4005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4003, &$s4004);
        (($fn4006) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4005);
    }
    }
    else {
    {
        panda$core$String* $tmp4007 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3983 = $tmp4007;
        panda$core$String* $tmp4009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4008, resultValue3983);
        panda$core$String* $tmp4011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4009, &$s4010);
        panda$core$String* $tmp4012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4011, value3977);
        panda$core$String* $tmp4014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4012, &$s4013);
        (($fn4015) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4014);
    }
    }
    panda$core$String* $tmp4017 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4016 = $tmp4017;
    panda$core$String* $tmp4019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4018, result4016);
    panda$core$String* $tmp4021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4019, &$s4020);
    panda$core$String* $tmp4022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4021, resultValue3983);
    panda$core$String* $tmp4024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4022, &$s4023);
    (($fn4025) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4024);
    return result4016;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4029;
    org$pandalanguage$pandac$ClassDecl* cl4032;
    panda$core$String* resultValue4035;
    panda$core$String* result4058;
    panda$core$Bit $tmp4026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp4026.value);
    panda$core$Int64 $tmp4027 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4027, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4028.value);
    panda$core$Object* $tmp4030 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4031 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4030), p_out);
    value4029 = $tmp4031;
    panda$core$Object* $tmp4033 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4034 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4033)->type);
    cl4032 = $tmp4034;
    panda$core$Bit $tmp4036 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4032);
    if ($tmp4036.value) {
    {
        panda$core$Object* $tmp4037 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4038 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4037)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4038.value) {
        {
            return &$s4039;
        }
        }
        panda$core$String* $tmp4040 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4035 = $tmp4040;
        panda$core$String* $tmp4042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4041, resultValue4035);
        panda$core$String* $tmp4044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4042, &$s4043);
        panda$core$String* $tmp4045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4044, value4029);
        panda$core$String* $tmp4047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4045, &$s4046);
        (($fn4048) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4047);
    }
    }
    else {
    {
        panda$core$String* $tmp4049 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4035 = $tmp4049;
        panda$core$String* $tmp4051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4050, resultValue4035);
        panda$core$String* $tmp4053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4051, &$s4052);
        panda$core$String* $tmp4054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4053, value4029);
        panda$core$String* $tmp4056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4054, &$s4055);
        (($fn4057) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4056);
    }
    }
    panda$core$String* $tmp4059 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4058 = $tmp4059;
    panda$core$String* $tmp4061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4060, result4058);
    panda$core$String* $tmp4063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4061, &$s4062);
    panda$core$String* $tmp4064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4063, resultValue4035);
    panda$core$String* $tmp4066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4064, &$s4065);
    (($fn4067) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4066);
    return result4058;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4069;
    panda$core$Bit $tmp4068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp4068.value);
    panda$core$Object* $tmp4070 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4071 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4070));
    cl4069 = $tmp4071;
    PANDA_ASSERT(((panda$core$Bit) { cl4069 != NULL }).value);
    panda$core$Bit $tmp4072 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4069);
    if ($tmp4072.value) {
    {
        panda$core$Object* $tmp4074 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4075 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4074));
        panda$core$String* $tmp4076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4073, $tmp4075);
        panda$core$String* $tmp4078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4076, &$s4077);
        return $tmp4078;
    }
    }
    else {
    {
        return &$s4079;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base4083;
    panda$core$String* result4086;
    panda$core$Bit $tmp4080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp4080.value);
    panda$core$Int64 $tmp4081 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp4082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4081, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4082.value);
    panda$core$Object* $tmp4084 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4085 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4084), p_out);
    base4083 = $tmp4085;
    panda$core$String* $tmp4087 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4086 = $tmp4087;
    panda$core$Int64 $tmp4088 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp4088.value) {
        case 52:
        {
            panda$core$String* $tmp4090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4089, result4086);
            panda$core$String* $tmp4092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4090, &$s4091);
            panda$core$String* $tmp4093 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4092, $tmp4093);
            panda$core$String* $tmp4096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4094, &$s4095);
            panda$core$String* $tmp4097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4096, base4083);
            panda$core$String* $tmp4099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4097, &$s4098);
            (($fn4100) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4099);
            return result4086;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp4102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4101, result4086);
            panda$core$String* $tmp4104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4102, &$s4103);
            panda$core$String* $tmp4105 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4104, $tmp4105);
            panda$core$String* $tmp4108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4106, &$s4107);
            panda$core$String* $tmp4109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4108, base4083);
            panda$core$String* $tmp4111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4109, &$s4110);
            (($fn4112) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4111);
            return result4086;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4125;
    panda$core$String* result4128;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp4113 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4113;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4114 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4114;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4115 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4115;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4116 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4116;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4117 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4117;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4118 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4118;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4119 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4119;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4120 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4120;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4121 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4121;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4122 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4122;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4123 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4123;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4124 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4124;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4126 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4127 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4126), p_out);
            value4125 = $tmp4127;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4125));
            return value4125;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4129 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4128 = ((panda$core$String*) $tmp4129);
            PANDA_ASSERT(((panda$core$Bit) { result4128 != NULL }).value);
            return result4128;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4130 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4130;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4131 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4131;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4132 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4132;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4133 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4133;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4135 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4134, $tmp4135);
    panda$core$String* $tmp4138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4136, &$s4137);
    panda$core$String* $tmp4139 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4138, $tmp4139);
    panda$core$String* $tmp4142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4140, &$s4141);
    return $tmp4142;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter4145;
    org$pandalanguage$pandac$IRNode* s4157;
    panda$core$Bit $tmp4143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4143.value);
    panda$core$Int64 $tmp4144 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4144;
    {
        ITable* $tmp4146 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4146->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4146 = $tmp4146->next;
        }
        $fn4148 $tmp4147 = $tmp4146->methods[0];
        panda$collections$Iterator* $tmp4149 = $tmp4147(((panda$collections$Iterable*) p_block->children));
        s$Iter4145 = $tmp4149;
        $l4150:;
        ITable* $tmp4152 = s$Iter4145->$class->itable;
        while ($tmp4152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4152 = $tmp4152->next;
        }
        $fn4154 $tmp4153 = $tmp4152->methods[0];
        panda$core$Bit $tmp4155 = $tmp4153(s$Iter4145);
        panda$core$Bit $tmp4156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4155);
        if (!$tmp4156.value) goto $l4151;
        {
            ITable* $tmp4158 = s$Iter4145->$class->itable;
            while ($tmp4158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4158 = $tmp4158->next;
            }
            $fn4160 $tmp4159 = $tmp4158->methods[1];
            panda$core$Object* $tmp4161 = $tmp4159(s$Iter4145);
            s4157 = ((org$pandalanguage$pandac$IRNode*) $tmp4161);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s4157, p_out);
        }
        goto $l4150;
        $l4151:;
    }
    panda$core$Int64 $tmp4162 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4162;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4163;
    panda$core$String* $match$1879_94164;
    panda$core$String* ptr4169;
    panda$core$String* arg4172;
    org$pandalanguage$pandac$Type* baseType4192;
    panda$core$String* base4196;
    panda$core$String* indexStruct4199;
    panda$core$String* index4202;
    panda$core$String* value4212;
    panda$core$String* ptr4216;
    panda$core$String* ptr4255;
    panda$core$String* cast4258;
    m4163 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1879_94164 = ((org$pandalanguage$pandac$Symbol*) m4163->value)->name;
        panda$core$Bit $tmp4166 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1879_94164, &$s4165);
        if ($tmp4166.value) {
        {
            panda$core$Int64 $tmp4167 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4167, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4168.value);
            panda$core$Object* $tmp4170 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4171 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4170), p_out);
            ptr4169 = $tmp4171;
            panda$core$Object* $tmp4173 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4174 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4173));
            panda$core$String* $tmp4175 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4174, p_out);
            arg4172 = $tmp4175;
            panda$core$String* $tmp4177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4176, arg4172);
            panda$core$String* $tmp4179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4177, &$s4178);
            panda$core$String* $tmp4180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4179, ptr4169);
            panda$core$String* $tmp4182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4180, &$s4181);
            (($fn4183) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4182);
        }
        }
        else {
        panda$core$Bit $tmp4185 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1879_94164, &$s4184);
        if ($tmp4185.value) {
        {
            panda$core$Int64 $tmp4186 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4186, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4187.value);
            panda$core$Object* $tmp4188 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4189 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4188));
            panda$core$Int64 $tmp4190 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4189->type->subtypes);
            panda$core$Bit $tmp4191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4190, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4191.value);
            panda$core$Object* $tmp4193 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4194 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4193));
            panda$core$Object* $tmp4195 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4194->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4192 = ((org$pandalanguage$pandac$Type*) $tmp4195);
            panda$core$Object* $tmp4197 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4198 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4197), p_out);
            base4196 = $tmp4198;
            panda$core$Object* $tmp4200 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4201 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4200), p_out);
            indexStruct4199 = $tmp4201;
            panda$core$String* $tmp4203 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4202 = $tmp4203;
            panda$core$String* $tmp4205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4204, index4202);
            panda$core$String* $tmp4207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4205, &$s4206);
            panda$core$String* $tmp4208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4207, indexStruct4199);
            panda$core$String* $tmp4210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4208, &$s4209);
            (($fn4211) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4210);
            panda$core$Object* $tmp4213 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4214 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4213));
            panda$core$String* $tmp4215 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4214, p_out);
            value4212 = $tmp4215;
            panda$core$String* $tmp4217 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4216 = $tmp4217;
            panda$core$String* $tmp4219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4218, ptr4216);
            panda$core$String* $tmp4221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4219, &$s4220);
            panda$core$String* $tmp4222 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4192);
            panda$core$String* $tmp4223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4221, $tmp4222);
            panda$core$String* $tmp4225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4223, &$s4224);
            panda$core$String* $tmp4226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4225, base4196);
            panda$core$String* $tmp4228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4226, &$s4227);
            panda$core$String* $tmp4231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4229, &$s4230);
            panda$core$String* $tmp4233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4231, &$s4232);
            panda$core$String* $tmp4234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4233, index4202);
            panda$core$String* $tmp4236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4234, &$s4235);
            panda$core$String* $tmp4237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4228, $tmp4236);
            (($fn4238) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4237);
            panda$core$String* $tmp4240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4239, value4212);
            panda$core$String* $tmp4242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4240, &$s4241);
            panda$core$String* $tmp4243 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4192);
            panda$core$String* $tmp4244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4242, $tmp4243);
            panda$core$String* $tmp4246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4244, &$s4245);
            panda$core$String* $tmp4247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4246, ptr4216);
            panda$core$String* $tmp4249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4247, &$s4248);
            (($fn4250) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4249);
        }
        }
        else {
        panda$core$Bit $tmp4252 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1879_94164, &$s4251);
        if ($tmp4252.value) {
        {
            panda$core$Int64 $tmp4253 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4253, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4254.value);
            panda$core$Object* $tmp4256 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4257 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4256), p_out);
            ptr4255 = $tmp4257;
            panda$core$String* $tmp4259 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4258 = $tmp4259;
            panda$core$String* $tmp4261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4260, cast4258);
            panda$core$String* $tmp4263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4261, &$s4262);
            panda$core$String* $tmp4264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4263, ptr4255);
            panda$core$String* $tmp4266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4264, &$s4265);
            (($fn4267) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4266);
            panda$core$String* $tmp4269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4268, cast4258);
            panda$core$String* $tmp4271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4269, &$s4270);
            (($fn4272) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4271);
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
    org$pandalanguage$pandac$MethodDecl* m4274;
    org$pandalanguage$pandac$Type* actualMethodType4277;
    panda$core$String* actualResultType4278;
    panda$core$Bit isSuper4279;
    panda$collections$Array* args4299;
    panda$core$Int64 offset4302;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4307;
    panda$core$String* arg4322;
    panda$core$String* refTarget4354;
    panda$core$String* methodRef4358;
    panda$core$String* separator4360;
    panda$core$String* indirectVar4364;
    panda$core$String* resultType4367;
    panda$collections$Iterator* a$Iter4412;
    panda$core$String* a4424;
    panda$core$Bit $tmp4273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4273.value);
    m4274 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4276 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4274->owner)->name, &$s4275);
    if ($tmp4276.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4274->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4274);
    }
    }
    panda$core$Int64 $tmp4281 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4282 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4281, ((panda$core$Int64) { 1 }));
    bool $tmp4280 = $tmp4282.value;
    if (!$tmp4280) goto $l4283;
    panda$core$Object* $tmp4284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4284)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4280 = $tmp4285.value;
    $l4283:;
    panda$core$Bit $tmp4286 = { $tmp4280 };
    isSuper4279 = $tmp4286;
    panda$core$Bit $tmp4288 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4279);
    bool $tmp4287 = $tmp4288.value;
    if (!$tmp4287) goto $l4289;
    panda$core$Bit $tmp4290 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4274);
    $tmp4287 = $tmp4290.value;
    $l4289:;
    panda$core$Bit $tmp4291 = { $tmp4287 };
    if ($tmp4291.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4292 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4274);
        actualMethodType4277 = $tmp4292;
        panda$core$Int64 $tmp4293 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4277->subtypes);
        panda$core$Int64 $tmp4294 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4293, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4277->subtypes, $tmp4294);
        panda$core$String* $tmp4296 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4295));
        actualResultType4278 = $tmp4296;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4297 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4274);
        actualMethodType4277 = $tmp4297;
        panda$core$String* $tmp4298 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4278 = $tmp4298;
    }
    }
    panda$collections$Array* $tmp4300 = (panda$collections$Array*) malloc(40);
    $tmp4300->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4300->refCount.value = 1;
    panda$collections$Array$init($tmp4300);
    args4299 = $tmp4300;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4299, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4303 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4304 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4277->subtypes);
    panda$core$Int64 $tmp4305 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4303, $tmp4304);
    panda$core$Int64 $tmp4306 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4305, ((panda$core$Int64) { 1 }));
    offset4302 = $tmp4306;
    panda$core$Int64 $tmp4308 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4307, ((panda$core$Int64) { 0 }), $tmp4308, ((panda$core$Bit) { false }));
    int64_t $tmp4310 = $tmp4307.min.value;
    panda$core$Int64 i4309 = { $tmp4310 };
    int64_t $tmp4312 = $tmp4307.max.value;
    bool $tmp4313 = $tmp4307.inclusive.value;
    if ($tmp4313) goto $l4320; else goto $l4321;
    $l4320:;
    if ($tmp4310 <= $tmp4312) goto $l4314; else goto $l4316;
    $l4321:;
    if ($tmp4310 < $tmp4312) goto $l4314; else goto $l4316;
    $l4314:;
    {
        panda$core$Object* $tmp4323 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4309);
        panda$core$String* $tmp4324 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4323), p_out);
        arg4322 = $tmp4324;
        panda$core$Bit $tmp4326 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4309, offset4302);
        bool $tmp4325 = $tmp4326.value;
        if (!$tmp4325) goto $l4327;
        panda$core$Int64 $tmp4328 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4309, offset4302);
        panda$core$Object* $tmp4329 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4277->subtypes, $tmp4328);
        panda$core$Object* $tmp4330 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4309);
        panda$core$Bit $tmp4331 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4329), ((org$pandalanguage$pandac$IRNode*) $tmp4330)->type);
        $tmp4325 = $tmp4331.value;
        $l4327:;
        panda$core$Bit $tmp4332 = { $tmp4325 };
        if ($tmp4332.value) {
        {
            panda$core$Int64 $tmp4333 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4309, offset4302);
            panda$core$Object* $tmp4334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4277->subtypes, $tmp4333);
            panda$core$String* $tmp4335 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4334));
            panda$core$String* $tmp4337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4335, &$s4336);
            panda$core$Object* $tmp4338 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4309);
            panda$core$Int64 $tmp4339 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4309, offset4302);
            panda$core$Object* $tmp4340 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4277->subtypes, $tmp4339);
            panda$core$String* $tmp4341 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg4322, ((org$pandalanguage$pandac$IRNode*) $tmp4338)->type, ((org$pandalanguage$pandac$Type*) $tmp4340), p_out);
            panda$core$String* $tmp4342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4337, $tmp4341);
            arg4322 = $tmp4342;
        }
        }
        else {
        {
            panda$core$Object* $tmp4343 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4309);
            panda$core$String* $tmp4344 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4343)->type);
            panda$core$String* $tmp4346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4344, &$s4345);
            panda$core$String* $tmp4347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4346, arg4322);
            arg4322 = $tmp4347;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4299, ((panda$core$Object*) arg4322));
    }
    $l4317:;
    int64_t $tmp4349 = $tmp4312 - i4309.value;
    if ($tmp4313) goto $l4350; else goto $l4351;
    $l4350:;
    if ($tmp4349 >= 1) goto $l4348; else goto $l4316;
    $l4351:;
    if ($tmp4349 > 1) goto $l4348; else goto $l4316;
    $l4348:;
    i4309.value += 1;
    goto $l4314;
    $l4316:;
    panda$core$Int64 $tmp4355 = panda$collections$Array$get_count$R$panda$core$Int64(args4299);
    panda$core$Bit $tmp4356 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4355, ((panda$core$Int64) { 0 }));
    if ($tmp4356.value) {
    {
        panda$core$Object* $tmp4357 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4299, ((panda$core$Int64) { 0 }));
        refTarget4354 = ((panda$core$String*) $tmp4357);
    }
    }
    else {
    {
        refTarget4354 = NULL;
    }
    }
    panda$core$String* $tmp4359 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget4354, m4274, isSuper4279, p_out);
    methodRef4358 = $tmp4359;
    separator4360 = &$s4361;
    panda$core$Bit $tmp4362 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4274);
    if ($tmp4362.value) {
    {
        panda$core$Int64 $tmp4363 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4363;
        panda$core$String* $tmp4366 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4365, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4364 = $tmp4366;
        panda$core$String* $tmp4368 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4367 = $tmp4368;
        panda$core$String* $tmp4370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4369, indirectVar4364);
        panda$core$String* $tmp4372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4370, &$s4371);
        panda$core$String* $tmp4373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4372, resultType4367);
        panda$core$String* $tmp4375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4373, &$s4374);
        (($fn4376) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4375);
        panda$core$String* $tmp4378 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4274);
        panda$core$String* $tmp4379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4377, $tmp4378);
        panda$core$String* $tmp4381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4379, &$s4380);
        panda$core$String* $tmp4383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4382, methodRef4358);
        panda$core$String* $tmp4385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4383, &$s4384);
        panda$core$String* $tmp4386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4385, resultType4367);
        panda$core$String* $tmp4388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4386, &$s4387);
        panda$core$String* $tmp4389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4388, indirectVar4364);
        panda$core$String* $tmp4391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4389, &$s4390);
        panda$core$String* $tmp4392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4381, $tmp4391);
        (($fn4393) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4392);
        separator4360 = &$s4394;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4395 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4396 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4395);
        if ($tmp4396.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4398 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4274);
        panda$core$String* $tmp4399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4397, $tmp4398);
        panda$core$String* $tmp4401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4399, &$s4400);
        panda$core$String* $tmp4402 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4401, $tmp4402);
        panda$core$String* $tmp4405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4403, &$s4404);
        panda$core$String* $tmp4407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4406, methodRef4358);
        panda$core$String* $tmp4409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4407, &$s4408);
        panda$core$String* $tmp4410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4405, $tmp4409);
        (($fn4411) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4410);
    }
    }
    {
        ITable* $tmp4413 = ((panda$collections$Iterable*) args4299)->$class->itable;
        while ($tmp4413->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4413 = $tmp4413->next;
        }
        $fn4415 $tmp4414 = $tmp4413->methods[0];
        panda$collections$Iterator* $tmp4416 = $tmp4414(((panda$collections$Iterable*) args4299));
        a$Iter4412 = $tmp4416;
        $l4417:;
        ITable* $tmp4419 = a$Iter4412->$class->itable;
        while ($tmp4419->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4419 = $tmp4419->next;
        }
        $fn4421 $tmp4420 = $tmp4419->methods[0];
        panda$core$Bit $tmp4422 = $tmp4420(a$Iter4412);
        panda$core$Bit $tmp4423 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4422);
        if (!$tmp4423.value) goto $l4418;
        {
            ITable* $tmp4425 = a$Iter4412->$class->itable;
            while ($tmp4425->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4425 = $tmp4425->next;
            }
            $fn4427 $tmp4426 = $tmp4425->methods[1];
            panda$core$Object* $tmp4428 = $tmp4426(a$Iter4412);
            a4424 = ((panda$core$String*) $tmp4428);
            (($fn4429) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator4360);
            (($fn4430) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a4424);
            separator4360 = &$s4431;
        }
        goto $l4417;
        $l4418:;
    }
    (($fn4433) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4432);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test4445;
    panda$core$String* testBit4448;
    panda$core$String* ifTrue4458;
    panda$core$String* ifFalse4460;
    panda$core$String* end4474;
    panda$core$Bit $tmp4434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4434.value);
    panda$core$Int64 $tmp4436 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4436, ((panda$core$Int64) { 2 }));
    bool $tmp4435 = $tmp4437.value;
    if ($tmp4435) goto $l4438;
    panda$core$Int64 $tmp4439 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4439, ((panda$core$Int64) { 3 }));
    $tmp4435 = $tmp4440.value;
    $l4438:;
    panda$core$Bit $tmp4441 = { $tmp4435 };
    PANDA_ASSERT($tmp4441.value);
    panda$core$Object* $tmp4442 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4443 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4444 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4442)->type, $tmp4443);
    PANDA_ASSERT($tmp4444.value);
    panda$core$Object* $tmp4446 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4447 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4446), p_out);
    test4445 = $tmp4447;
    panda$core$String* $tmp4449 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4448 = $tmp4449;
    panda$core$String* $tmp4451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4450, testBit4448);
    panda$core$String* $tmp4453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4451, &$s4452);
    panda$core$String* $tmp4454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4453, test4445);
    panda$core$String* $tmp4456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4454, &$s4455);
    (($fn4457) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4456);
    panda$core$String* $tmp4459 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4458 = $tmp4459;
    panda$core$String* $tmp4461 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4460 = $tmp4461;
    panda$core$String* $tmp4463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4462, testBit4448);
    panda$core$String* $tmp4465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4463, &$s4464);
    panda$core$String* $tmp4466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4465, ifTrue4458);
    panda$core$String* $tmp4468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4466, &$s4467);
    panda$core$String* $tmp4469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4468, ifFalse4460);
    panda$core$String* $tmp4471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4469, &$s4470);
    (($fn4472) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4471);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue4458, p_out);
    panda$core$Object* $tmp4473 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4473), p_out);
    panda$core$Int64 $tmp4475 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4475, ((panda$core$Int64) { 3 }));
    if ($tmp4476.value) {
    {
        panda$core$String* $tmp4477 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4474 = $tmp4477;
    }
    }
    else {
    {
        end4474 = ifFalse4460;
    }
    }
    panda$core$Object* $tmp4478 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4479 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4478));
    panda$core$Bit $tmp4480 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4479);
    if ($tmp4480.value) {
    {
        panda$core$String* $tmp4482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4481, end4474);
        panda$core$String* $tmp4484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4482, &$s4483);
        (($fn4485) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4484);
    }
    }
    panda$core$Int64 $tmp4486 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4486, ((panda$core$Int64) { 3 }));
    if ($tmp4487.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse4460, p_out);
        panda$core$Object* $tmp4488 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4488), p_out);
        panda$core$Object* $tmp4489 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4490 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4489));
        panda$core$Bit $tmp4491 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4490);
        if ($tmp4491.value) {
        {
            panda$core$String* $tmp4493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4492, end4474);
            panda$core$String* $tmp4495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4493, &$s4494);
            (($fn4496) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4495);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end4474, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4500;
    panda$core$String* range4511;
    org$pandalanguage$pandac$IRNode* block4514;
    org$pandalanguage$pandac$Type* t4516;
    panda$core$String* llt4519;
    panda$core$String* indexType4521;
    org$pandalanguage$pandac$ClassDecl* cl4527;
    panda$core$String* numberType4535;
    panda$core$String* index4543;
    panda$core$String* start4553;
    panda$core$String* indexValuePtr4563;
    panda$core$String* end4595;
    panda$core$String* inclusive4605;
    panda$core$String* loopStart4615;
    panda$core$String* loopBody4617;
    panda$core$String* loopEnd4619;
    panda$core$String* loopTest4621;
    panda$core$String* forwardEntry4625;
    panda$core$String* backwardEntry4627;
    panda$core$String* signPrefix4629;
    panda$core$String* forwardEntryInclusive4641;
    panda$core$String* forwardEntryExclusive4643;
    panda$core$String* forwardEntryInclusiveTest4658;
    panda$core$String* forwardEntryExclusiveTest4690;
    panda$core$String* indexValue4722;
    panda$core$String* loopInc4745;
    panda$core$String* forwardDelta4747;
    panda$core$String* forwardInclusiveLabel4763;
    panda$core$String* forwardExclusiveLabel4765;
    panda$core$String* forwardInclusiveTest4776;
    panda$core$String* forwardExclusiveTest4800;
    panda$core$String* inc4824;
    panda$core$String* incStruct4837;
    panda$core$Bit $tmp4497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4497.value);
    panda$core$Int64 $tmp4498 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4498, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4499.value);
    panda$core$Object* $tmp4501 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4500 = ((org$pandalanguage$pandac$IRNode*) $tmp4501);
    panda$core$Object* $tmp4502 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4502)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4503.value);
    panda$core$Object* $tmp4504 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4505 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4504)->type->subtypes);
    panda$core$Bit $tmp4506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4505, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4506.value);
    panda$core$Object* $tmp4507 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4508 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4507)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4510 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4508))->name, &$s4509);
    PANDA_ASSERT($tmp4510.value);
    panda$core$Object* $tmp4512 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4513 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4512), p_out);
    range4511 = $tmp4513;
    panda$core$Object* $tmp4515 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4514 = ((org$pandalanguage$pandac$IRNode*) $tmp4515);
    panda$core$Object* $tmp4517 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4518 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4517)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4516 = ((org$pandalanguage$pandac$Type*) $tmp4518);
    panda$core$String* $tmp4520 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4516);
    llt4519 = $tmp4520;
    panda$core$Bit $tmp4522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4516->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4522.value) {
    {
        panda$core$Int64 $tmp4523 = panda$collections$Array$get_count$R$panda$core$Int64(t4516->subtypes);
        panda$core$Bit $tmp4524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4523, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4524.value);
        panda$core$Object* $tmp4525 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4516->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4526 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4525));
        indexType4521 = $tmp4526;
    }
    }
    else {
    {
        indexType4521 = llt4519;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4528 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4516);
    cl4527 = $tmp4528;
    PANDA_ASSERT(((panda$core$Bit) { cl4527 != NULL }).value);
    panda$collections$ListView* $tmp4529 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4527);
    ITable* $tmp4530 = ((panda$collections$CollectionView*) $tmp4529)->$class->itable;
    while ($tmp4530->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4530 = $tmp4530->next;
    }
    $fn4532 $tmp4531 = $tmp4530->methods[0];
    panda$core$Int64 $tmp4533 = $tmp4531(((panda$collections$CollectionView*) $tmp4529));
    panda$core$Bit $tmp4534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4533, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4534.value);
    panda$collections$ListView* $tmp4536 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4527);
    ITable* $tmp4537 = $tmp4536->$class->itable;
    while ($tmp4537->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4537 = $tmp4537->next;
    }
    $fn4539 $tmp4538 = $tmp4537->methods[0];
    panda$core$Object* $tmp4540 = $tmp4538($tmp4536, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4541 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4540)->type);
    numberType4535 = $tmp4541;
    panda$core$Bit $tmp4542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4500->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4542.value);
    panda$core$String* $tmp4544 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4500->payload));
    index4543 = $tmp4544;
    panda$core$String* $tmp4546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4545, index4543);
    panda$core$String* $tmp4548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4546, &$s4547);
    panda$core$String* $tmp4549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4548, indexType4521);
    panda$core$String* $tmp4551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4549, &$s4550);
    (($fn4552) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4551);
    panda$core$String* $tmp4554 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4553 = $tmp4554;
    panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4555, start4553);
    panda$core$String* $tmp4558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4556, &$s4557);
    panda$core$String* $tmp4559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4558, range4511);
    panda$core$String* $tmp4561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4559, &$s4560);
    (($fn4562) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4561);
    panda$core$String* $tmp4564 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4563 = $tmp4564;
    panda$core$String* $tmp4566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4565, indexValuePtr4563);
    panda$core$String* $tmp4568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4566, &$s4567);
    panda$core$String* $tmp4569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4568, indexType4521);
    panda$core$String* $tmp4571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4569, &$s4570);
    panda$core$String* $tmp4572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4571, indexType4521);
    panda$core$String* $tmp4574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4572, &$s4573);
    panda$core$String* $tmp4575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4574, index4543);
    panda$core$String* $tmp4577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4575, &$s4576);
    panda$core$String* $tmp4579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4577, &$s4578);
    (($fn4580) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4579);
    panda$core$String* $tmp4582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4581, numberType4535);
    panda$core$String* $tmp4584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4582, &$s4583);
    panda$core$String* $tmp4585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4584, start4553);
    panda$core$String* $tmp4587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4585, &$s4586);
    panda$core$String* $tmp4588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4587, numberType4535);
    panda$core$String* $tmp4590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4588, &$s4589);
    panda$core$String* $tmp4591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4590, indexValuePtr4563);
    panda$core$String* $tmp4593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4591, &$s4592);
    (($fn4594) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4593);
    panda$core$String* $tmp4596 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4595 = $tmp4596;
    panda$core$String* $tmp4598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4597, end4595);
    panda$core$String* $tmp4600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4598, &$s4599);
    panda$core$String* $tmp4601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4600, range4511);
    panda$core$String* $tmp4603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4601, &$s4602);
    (($fn4604) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4603);
    panda$core$String* $tmp4606 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4605 = $tmp4606;
    panda$core$String* $tmp4608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4607, inclusive4605);
    panda$core$String* $tmp4610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4608, &$s4609);
    panda$core$String* $tmp4611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4610, range4511);
    panda$core$String* $tmp4613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4611, &$s4612);
    (($fn4614) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4613);
    panda$core$String* $tmp4616 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4615 = $tmp4616;
    panda$core$String* $tmp4618 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4617 = $tmp4618;
    panda$core$String* $tmp4620 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4619 = $tmp4620;
    panda$core$String* $tmp4622 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4621 = $tmp4622;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4623 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4623->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4623->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4623, ((panda$core$String*) p_f->payload), loopEnd4619, loopTest4621);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4623));
    panda$core$String* $tmp4626 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4625 = $tmp4626;
    panda$core$String* $tmp4628 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4627 = $tmp4628;
    panda$core$Bit $tmp4631 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4516)->name, &$s4630);
    if ($tmp4631.value) {
    {
        signPrefix4629 = &$s4632;
    }
    }
    else {
    {
        panda$core$Bit $tmp4635 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4516)->name, &$s4634);
        bool $tmp4633 = $tmp4635.value;
        if ($tmp4633) goto $l4636;
        panda$core$Bit $tmp4638 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4516)->name, &$s4637);
        $tmp4633 = $tmp4638.value;
        $l4636:;
        panda$core$Bit $tmp4639 = { $tmp4633 };
        PANDA_ASSERT($tmp4639.value);
        signPrefix4629 = &$s4640;
    }
    }
    panda$core$String* $tmp4642 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4641 = $tmp4642;
    panda$core$String* $tmp4644 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4643 = $tmp4644;
    panda$core$String* $tmp4646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4645, inclusive4605);
    panda$core$String* $tmp4648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4646, &$s4647);
    panda$core$String* $tmp4649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4648, forwardEntryInclusive4641);
    panda$core$String* $tmp4651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4649, &$s4650);
    panda$core$String* $tmp4653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4652, forwardEntryExclusive4643);
    panda$core$String* $tmp4655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4653, &$s4654);
    panda$core$String* $tmp4656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4651, $tmp4655);
    (($fn4657) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4656);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive4641, p_out);
    panda$core$String* $tmp4659 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4658 = $tmp4659;
    panda$core$String* $tmp4661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4660, forwardEntryInclusiveTest4658);
    panda$core$String* $tmp4663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4661, &$s4662);
    panda$core$String* $tmp4664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4663, signPrefix4629);
    panda$core$String* $tmp4666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4664, &$s4665);
    panda$core$String* $tmp4667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4666, numberType4535);
    panda$core$String* $tmp4669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4667, &$s4668);
    panda$core$String* $tmp4671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4670, start4553);
    panda$core$String* $tmp4673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4671, &$s4672);
    panda$core$String* $tmp4674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4673, end4595);
    panda$core$String* $tmp4676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4674, &$s4675);
    panda$core$String* $tmp4677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4669, $tmp4676);
    (($fn4678) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4677);
    panda$core$String* $tmp4680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4679, forwardEntryInclusiveTest4658);
    panda$core$String* $tmp4682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4680, &$s4681);
    panda$core$String* $tmp4683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4682, loopStart4615);
    panda$core$String* $tmp4685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4683, &$s4684);
    panda$core$String* $tmp4686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4685, loopEnd4619);
    panda$core$String* $tmp4688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4686, &$s4687);
    (($fn4689) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4688);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive4643, p_out);
    panda$core$String* $tmp4691 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4690 = $tmp4691;
    panda$core$String* $tmp4693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4692, forwardEntryExclusiveTest4690);
    panda$core$String* $tmp4695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4693, &$s4694);
    panda$core$String* $tmp4696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4695, signPrefix4629);
    panda$core$String* $tmp4698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4696, &$s4697);
    panda$core$String* $tmp4699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4698, numberType4535);
    panda$core$String* $tmp4701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4699, &$s4700);
    panda$core$String* $tmp4703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4702, start4553);
    panda$core$String* $tmp4705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4703, &$s4704);
    panda$core$String* $tmp4706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4705, end4595);
    panda$core$String* $tmp4708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4706, &$s4707);
    panda$core$String* $tmp4709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4701, $tmp4708);
    (($fn4710) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4709);
    panda$core$String* $tmp4712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4711, forwardEntryExclusiveTest4690);
    panda$core$String* $tmp4714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4712, &$s4713);
    panda$core$String* $tmp4715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4714, loopStart4615);
    panda$core$String* $tmp4717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4715, &$s4716);
    panda$core$String* $tmp4718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4717, loopEnd4619);
    panda$core$String* $tmp4720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4718, &$s4719);
    (($fn4721) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4720);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart4615, p_out);
    panda$core$String* $tmp4723 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue4722 = $tmp4723;
    panda$core$String* $tmp4725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4724, indexValue4722);
    panda$core$String* $tmp4727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4725, &$s4726);
    panda$core$String* $tmp4728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4727, numberType4535);
    panda$core$String* $tmp4730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4728, &$s4729);
    panda$core$String* $tmp4731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4730, numberType4535);
    panda$core$String* $tmp4733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4731, &$s4732);
    panda$core$String* $tmp4734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4733, indexValuePtr4563);
    panda$core$String* $tmp4736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4734, &$s4735);
    (($fn4737) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4736);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4514, p_out);
    panda$core$Bit $tmp4738 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4514);
    panda$core$Bit $tmp4739 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4738);
    if ($tmp4739.value) {
    {
        panda$core$String* $tmp4741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4740, loopTest4621);
        panda$core$String* $tmp4743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4741, &$s4742);
        (($fn4744) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4743);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest4621, p_out);
    panda$core$String* $tmp4746 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc4745 = $tmp4746;
    panda$core$String* $tmp4748 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta4747 = $tmp4748;
    panda$core$String* $tmp4750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4749, forwardDelta4747);
    panda$core$String* $tmp4752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4750, &$s4751);
    panda$core$String* $tmp4753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4752, numberType4535);
    panda$core$String* $tmp4755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4753, &$s4754);
    panda$core$String* $tmp4756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4755, end4595);
    panda$core$String* $tmp4758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4756, &$s4757);
    panda$core$String* $tmp4759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4758, indexValue4722);
    panda$core$String* $tmp4761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4759, &$s4760);
    (($fn4762) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4761);
    panda$core$String* $tmp4764 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel4763 = $tmp4764;
    panda$core$String* $tmp4766 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel4765 = $tmp4766;
    panda$core$String* $tmp4768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4767, inclusive4605);
    panda$core$String* $tmp4770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4768, &$s4769);
    panda$core$String* $tmp4771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4770, forwardInclusiveLabel4763);
    panda$core$String* $tmp4773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4771, &$s4772);
    panda$core$String* $tmp4774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4773, forwardExclusiveLabel4765);
    (($fn4775) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4774);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel4763, p_out);
    panda$core$String* $tmp4777 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest4776 = $tmp4777;
    panda$core$String* $tmp4779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4778, forwardInclusiveTest4776);
    panda$core$String* $tmp4781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4779, &$s4780);
    panda$core$String* $tmp4782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4781, numberType4535);
    panda$core$String* $tmp4784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4782, &$s4783);
    panda$core$String* $tmp4785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4784, forwardDelta4747);
    panda$core$String* $tmp4787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4785, &$s4786);
    (($fn4788) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4787);
    panda$core$String* $tmp4790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4789, forwardInclusiveTest4776);
    panda$core$String* $tmp4792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4790, &$s4791);
    panda$core$String* $tmp4793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4792, loopInc4745);
    panda$core$String* $tmp4795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4793, &$s4794);
    panda$core$String* $tmp4796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4795, loopEnd4619);
    panda$core$String* $tmp4798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4796, &$s4797);
    (($fn4799) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4798);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel4765, p_out);
    panda$core$String* $tmp4801 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest4800 = $tmp4801;
    panda$core$String* $tmp4803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4802, forwardExclusiveTest4800);
    panda$core$String* $tmp4805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4803, &$s4804);
    panda$core$String* $tmp4806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4805, numberType4535);
    panda$core$String* $tmp4808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4806, &$s4807);
    panda$core$String* $tmp4809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4808, forwardDelta4747);
    panda$core$String* $tmp4811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4809, &$s4810);
    (($fn4812) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4811);
    panda$core$String* $tmp4814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4813, forwardExclusiveTest4800);
    panda$core$String* $tmp4816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4814, &$s4815);
    panda$core$String* $tmp4817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4816, loopInc4745);
    panda$core$String* $tmp4819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4817, &$s4818);
    panda$core$String* $tmp4820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4819, loopEnd4619);
    panda$core$String* $tmp4822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4820, &$s4821);
    (($fn4823) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4822);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc4745, p_out);
    panda$core$String* $tmp4825 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc4824 = $tmp4825;
    panda$core$String* $tmp4827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4826, inc4824);
    panda$core$String* $tmp4829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4827, &$s4828);
    panda$core$String* $tmp4830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4829, numberType4535);
    panda$core$String* $tmp4832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4830, &$s4831);
    panda$core$String* $tmp4833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4832, indexValue4722);
    panda$core$String* $tmp4835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4833, &$s4834);
    (($fn4836) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4835);
    panda$core$String* $tmp4838 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct4837 = $tmp4838;
    panda$core$String* $tmp4840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4839, incStruct4837);
    panda$core$String* $tmp4842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4840, &$s4841);
    panda$core$String* $tmp4843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4842, indexType4521);
    panda$core$String* $tmp4845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4843, &$s4844);
    panda$core$String* $tmp4846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4845, numberType4535);
    panda$core$String* $tmp4848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4846, &$s4847);
    (($fn4849) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4848);
    panda$core$String* $tmp4851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4850, numberType4535);
    panda$core$String* $tmp4853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4851, &$s4852);
    panda$core$String* $tmp4854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4853, inc4824);
    panda$core$String* $tmp4856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4854, &$s4855);
    (($fn4857) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4856);
    panda$core$String* $tmp4859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4858, indexType4521);
    panda$core$String* $tmp4861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4859, &$s4860);
    panda$core$String* $tmp4862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4861, incStruct4837);
    panda$core$String* $tmp4864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4862, &$s4863);
    panda$core$String* $tmp4865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4864, indexType4521);
    panda$core$String* $tmp4867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4865, &$s4866);
    panda$core$String* $tmp4868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4867, index4543);
    panda$core$String* $tmp4870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4868, &$s4869);
    (($fn4871) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4870);
    panda$core$String* $tmp4873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4872, loopStart4615);
    panda$core$String* $tmp4875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4873, &$s4874);
    (($fn4876) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4875);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd4619, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4880;
    panda$core$String* range4891;
    org$pandalanguage$pandac$IRNode* block4894;
    org$pandalanguage$pandac$Type* t4896;
    panda$core$String* llt4899;
    panda$core$String* indexType4901;
    org$pandalanguage$pandac$ClassDecl* cl4907;
    panda$core$String* numberType4915;
    panda$core$String* index4923;
    panda$core$String* start4933;
    panda$core$String* indexValuePtr4943;
    panda$core$String* end4975;
    panda$core$String* rawStep4985;
    panda$core$String* step4995;
    panda$core$String* inclusive5010;
    panda$core$String* loopStart5020;
    panda$core$String* loopBody5022;
    panda$core$String* loopEnd5024;
    panda$core$String* loopTest5026;
    panda$core$String* forwardEntry5030;
    panda$core$String* backwardEntry5032;
    panda$core$String* signPrefix5034;
    panda$core$String* direction5046;
    panda$core$String* forwardEntryInclusive5073;
    panda$core$String* forwardEntryExclusive5075;
    panda$core$String* forwardEntryInclusiveTest5090;
    panda$core$String* forwardEntryExclusiveTest5122;
    panda$core$String* backwardEntryInclusive5154;
    panda$core$String* backwardEntryExclusive5156;
    panda$core$String* backwardEntryInclusiveTest5171;
    panda$core$String* backwardEntryExclusiveTest5203;
    panda$core$String* indexValue5235;
    panda$core$String* loopInc5258;
    panda$core$String* forwardLabel5260;
    panda$core$String* backwardLabel5262;
    panda$core$String* forwardDelta5275;
    panda$core$String* forwardInclusiveLabel5291;
    panda$core$String* forwardExclusiveLabel5293;
    panda$core$String* forwardInclusiveTest5304;
    panda$core$String* forwardExclusiveTest5331;
    panda$core$String* backwardDelta5358;
    panda$core$String* negStep5374;
    panda$core$String* backwardInclusiveLabel5387;
    panda$core$String* backwardExclusiveLabel5389;
    panda$core$String* backwardInclusiveTest5400;
    panda$core$String* backwardExclusiveTest5425;
    panda$core$String* inc5450;
    panda$core$String* incStruct5466;
    panda$core$Bit $tmp4877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4877.value);
    panda$core$Int64 $tmp4878 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4878, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4879.value);
    panda$core$Object* $tmp4881 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4880 = ((org$pandalanguage$pandac$IRNode*) $tmp4881);
    panda$core$Object* $tmp4882 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4882)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4883.value);
    panda$core$Object* $tmp4884 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4885 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4884)->type->subtypes);
    panda$core$Bit $tmp4886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4885, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4886.value);
    panda$core$Object* $tmp4887 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4888 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4887)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4890 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4888))->name, &$s4889);
    PANDA_ASSERT($tmp4890.value);
    panda$core$Object* $tmp4892 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4893 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4892), p_out);
    range4891 = $tmp4893;
    panda$core$Object* $tmp4895 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4894 = ((org$pandalanguage$pandac$IRNode*) $tmp4895);
    panda$core$Object* $tmp4897 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4898 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4897)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4896 = ((org$pandalanguage$pandac$Type*) $tmp4898);
    panda$core$String* $tmp4900 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4896);
    llt4899 = $tmp4900;
    panda$core$Bit $tmp4902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4896->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4902.value) {
    {
        panda$core$Int64 $tmp4903 = panda$collections$Array$get_count$R$panda$core$Int64(t4896->subtypes);
        panda$core$Bit $tmp4904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4903, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4904.value);
        panda$core$Object* $tmp4905 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4896->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4906 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4905));
        indexType4901 = $tmp4906;
    }
    }
    else {
    {
        indexType4901 = llt4899;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4908 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4896);
    cl4907 = $tmp4908;
    PANDA_ASSERT(((panda$core$Bit) { cl4907 != NULL }).value);
    panda$collections$ListView* $tmp4909 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4907);
    ITable* $tmp4910 = ((panda$collections$CollectionView*) $tmp4909)->$class->itable;
    while ($tmp4910->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4910 = $tmp4910->next;
    }
    $fn4912 $tmp4911 = $tmp4910->methods[0];
    panda$core$Int64 $tmp4913 = $tmp4911(((panda$collections$CollectionView*) $tmp4909));
    panda$core$Bit $tmp4914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4913, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4914.value);
    panda$collections$ListView* $tmp4916 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4907);
    ITable* $tmp4917 = $tmp4916->$class->itable;
    while ($tmp4917->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4917 = $tmp4917->next;
    }
    $fn4919 $tmp4918 = $tmp4917->methods[0];
    panda$core$Object* $tmp4920 = $tmp4918($tmp4916, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4921 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4920)->type);
    numberType4915 = $tmp4921;
    panda$core$Bit $tmp4922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4880->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4922.value);
    panda$core$String* $tmp4924 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4880->payload));
    index4923 = $tmp4924;
    panda$core$String* $tmp4926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4925, index4923);
    panda$core$String* $tmp4928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4926, &$s4927);
    panda$core$String* $tmp4929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4928, indexType4901);
    panda$core$String* $tmp4931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4929, &$s4930);
    (($fn4932) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4931);
    panda$core$String* $tmp4934 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4933 = $tmp4934;
    panda$core$String* $tmp4936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4935, start4933);
    panda$core$String* $tmp4938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4936, &$s4937);
    panda$core$String* $tmp4939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4938, range4891);
    panda$core$String* $tmp4941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4939, &$s4940);
    (($fn4942) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4941);
    panda$core$String* $tmp4944 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4943 = $tmp4944;
    panda$core$String* $tmp4946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4945, indexValuePtr4943);
    panda$core$String* $tmp4948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4946, &$s4947);
    panda$core$String* $tmp4949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4948, indexType4901);
    panda$core$String* $tmp4951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4949, &$s4950);
    panda$core$String* $tmp4952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4951, indexType4901);
    panda$core$String* $tmp4954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4952, &$s4953);
    panda$core$String* $tmp4955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4954, index4923);
    panda$core$String* $tmp4957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4955, &$s4956);
    panda$core$String* $tmp4959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4957, &$s4958);
    (($fn4960) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4959);
    panda$core$String* $tmp4962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4961, numberType4915);
    panda$core$String* $tmp4964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4962, &$s4963);
    panda$core$String* $tmp4965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4964, start4933);
    panda$core$String* $tmp4967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4965, &$s4966);
    panda$core$String* $tmp4968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4967, numberType4915);
    panda$core$String* $tmp4970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4968, &$s4969);
    panda$core$String* $tmp4971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4970, indexValuePtr4943);
    panda$core$String* $tmp4973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4971, &$s4972);
    (($fn4974) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4973);
    panda$core$String* $tmp4976 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4975 = $tmp4976;
    panda$core$String* $tmp4978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4977, end4975);
    panda$core$String* $tmp4980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4978, &$s4979);
    panda$core$String* $tmp4981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4980, range4891);
    panda$core$String* $tmp4983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4981, &$s4982);
    (($fn4984) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4983);
    panda$core$String* $tmp4986 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep4985 = $tmp4986;
    panda$core$String* $tmp4988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4987, rawStep4985);
    panda$core$String* $tmp4990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4988, &$s4989);
    panda$core$String* $tmp4991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4990, range4891);
    panda$core$String* $tmp4993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4991, &$s4992);
    (($fn4994) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4993);
    panda$core$Bit $tmp4997 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType4915, &$s4996);
    if ($tmp4997.value) {
    {
        panda$core$String* $tmp4998 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step4995 = $tmp4998;
        panda$core$String* $tmp5000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4999, step4995);
        panda$core$String* $tmp5002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5000, &$s5001);
        panda$core$String* $tmp5003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5002, rawStep4985);
        panda$core$String* $tmp5005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5003, &$s5004);
        panda$core$String* $tmp5006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5005, numberType4915);
        panda$core$String* $tmp5008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5006, &$s5007);
        (($fn5009) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5008);
    }
    }
    else {
    {
        step4995 = rawStep4985;
    }
    }
    panda$core$String* $tmp5011 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive5010 = $tmp5011;
    panda$core$String* $tmp5013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5012, inclusive5010);
    panda$core$String* $tmp5015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5013, &$s5014);
    panda$core$String* $tmp5016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5015, range4891);
    panda$core$String* $tmp5018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5016, &$s5017);
    (($fn5019) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5018);
    panda$core$String* $tmp5021 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5020 = $tmp5021;
    panda$core$String* $tmp5023 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5022 = $tmp5023;
    panda$core$String* $tmp5025 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5024 = $tmp5025;
    panda$core$String* $tmp5027 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest5026 = $tmp5027;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5028 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5028->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5028->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5028, ((panda$core$String*) p_f->payload), loopEnd5024, loopTest5026);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5028));
    panda$core$String* $tmp5031 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry5030 = $tmp5031;
    panda$core$String* $tmp5033 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry5032 = $tmp5033;
    panda$core$Bit $tmp5036 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4896)->name, &$s5035);
    if ($tmp5036.value) {
    {
        signPrefix5034 = &$s5037;
    }
    }
    else {
    {
        panda$core$Bit $tmp5040 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4896)->name, &$s5039);
        bool $tmp5038 = $tmp5040.value;
        if ($tmp5038) goto $l5041;
        panda$core$Bit $tmp5043 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4896)->name, &$s5042);
        $tmp5038 = $tmp5043.value;
        $l5041:;
        panda$core$Bit $tmp5044 = { $tmp5038 };
        PANDA_ASSERT($tmp5044.value);
        signPrefix5034 = &$s5045;
    }
    }
    panda$core$Bit $tmp5048 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix5034, &$s5047);
    if ($tmp5048.value) {
    {
        panda$core$String* $tmp5049 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction5046 = $tmp5049;
        panda$core$String* $tmp5051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5050, direction5046);
        panda$core$String* $tmp5053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5051, &$s5052);
        panda$core$String* $tmp5054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5053, numberType4915);
        panda$core$String* $tmp5056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5054, &$s5055);
        panda$core$String* $tmp5057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5056, step4995);
        panda$core$String* $tmp5059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5057, &$s5058);
        (($fn5060) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5059);
    }
    }
    else {
    {
        direction5046 = &$s5061;
    }
    }
    panda$core$String* $tmp5063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5062, direction5046);
    panda$core$String* $tmp5065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5063, &$s5064);
    panda$core$String* $tmp5066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5065, forwardEntry5030);
    panda$core$String* $tmp5068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5066, &$s5067);
    panda$core$String* $tmp5069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5068, backwardEntry5032);
    panda$core$String* $tmp5071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5069, &$s5070);
    (($fn5072) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5071);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry5030, p_out);
    panda$core$String* $tmp5074 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive5073 = $tmp5074;
    panda$core$String* $tmp5076 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive5075 = $tmp5076;
    panda$core$String* $tmp5078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5077, inclusive5010);
    panda$core$String* $tmp5080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5078, &$s5079);
    panda$core$String* $tmp5081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5080, forwardEntryInclusive5073);
    panda$core$String* $tmp5083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5081, &$s5082);
    panda$core$String* $tmp5085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5084, forwardEntryExclusive5075);
    panda$core$String* $tmp5087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5085, &$s5086);
    panda$core$String* $tmp5088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5083, $tmp5087);
    (($fn5089) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5088);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive5073, p_out);
    panda$core$String* $tmp5091 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest5090 = $tmp5091;
    panda$core$String* $tmp5093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5092, forwardEntryInclusiveTest5090);
    panda$core$String* $tmp5095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5093, &$s5094);
    panda$core$String* $tmp5096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5095, signPrefix5034);
    panda$core$String* $tmp5098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5096, &$s5097);
    panda$core$String* $tmp5099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5098, numberType4915);
    panda$core$String* $tmp5101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5099, &$s5100);
    panda$core$String* $tmp5103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5102, start4933);
    panda$core$String* $tmp5105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5103, &$s5104);
    panda$core$String* $tmp5106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5105, end4975);
    panda$core$String* $tmp5108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5106, &$s5107);
    panda$core$String* $tmp5109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5101, $tmp5108);
    (($fn5110) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5109);
    panda$core$String* $tmp5112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5111, forwardEntryInclusiveTest5090);
    panda$core$String* $tmp5114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5112, &$s5113);
    panda$core$String* $tmp5115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5114, loopStart5020);
    panda$core$String* $tmp5117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5115, &$s5116);
    panda$core$String* $tmp5118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5117, loopEnd5024);
    panda$core$String* $tmp5120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5118, &$s5119);
    (($fn5121) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5120);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive5075, p_out);
    panda$core$String* $tmp5123 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest5122 = $tmp5123;
    panda$core$String* $tmp5125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5124, forwardEntryExclusiveTest5122);
    panda$core$String* $tmp5127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5125, &$s5126);
    panda$core$String* $tmp5128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5127, signPrefix5034);
    panda$core$String* $tmp5130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5128, &$s5129);
    panda$core$String* $tmp5131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5130, numberType4915);
    panda$core$String* $tmp5133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5131, &$s5132);
    panda$core$String* $tmp5135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5134, start4933);
    panda$core$String* $tmp5137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5135, &$s5136);
    panda$core$String* $tmp5138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5137, end4975);
    panda$core$String* $tmp5140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5138, &$s5139);
    panda$core$String* $tmp5141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5133, $tmp5140);
    (($fn5142) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5141);
    panda$core$String* $tmp5144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5143, forwardEntryExclusiveTest5122);
    panda$core$String* $tmp5146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5144, &$s5145);
    panda$core$String* $tmp5147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5146, loopStart5020);
    panda$core$String* $tmp5149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5147, &$s5148);
    panda$core$String* $tmp5150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5149, loopEnd5024);
    panda$core$String* $tmp5152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5150, &$s5151);
    (($fn5153) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5152);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry5032, p_out);
    panda$core$String* $tmp5155 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive5154 = $tmp5155;
    panda$core$String* $tmp5157 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive5156 = $tmp5157;
    panda$core$String* $tmp5159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5158, inclusive5010);
    panda$core$String* $tmp5161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5159, &$s5160);
    panda$core$String* $tmp5162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5161, backwardEntryInclusive5154);
    panda$core$String* $tmp5164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5162, &$s5163);
    panda$core$String* $tmp5166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5165, backwardEntryExclusive5156);
    panda$core$String* $tmp5168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5166, &$s5167);
    panda$core$String* $tmp5169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5164, $tmp5168);
    (($fn5170) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5169);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive5154, p_out);
    panda$core$String* $tmp5172 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest5171 = $tmp5172;
    panda$core$String* $tmp5174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5173, backwardEntryInclusiveTest5171);
    panda$core$String* $tmp5176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5174, &$s5175);
    panda$core$String* $tmp5177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5176, signPrefix5034);
    panda$core$String* $tmp5179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5177, &$s5178);
    panda$core$String* $tmp5180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5179, numberType4915);
    panda$core$String* $tmp5182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5180, &$s5181);
    panda$core$String* $tmp5184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5183, start4933);
    panda$core$String* $tmp5186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5184, &$s5185);
    panda$core$String* $tmp5187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5186, end4975);
    panda$core$String* $tmp5189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5187, &$s5188);
    panda$core$String* $tmp5190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5182, $tmp5189);
    (($fn5191) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5190);
    panda$core$String* $tmp5193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5192, backwardEntryInclusiveTest5171);
    panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5193, &$s5194);
    panda$core$String* $tmp5196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5195, loopStart5020);
    panda$core$String* $tmp5198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5196, &$s5197);
    panda$core$String* $tmp5199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5198, loopEnd5024);
    panda$core$String* $tmp5201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5199, &$s5200);
    (($fn5202) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5201);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive5156, p_out);
    panda$core$String* $tmp5204 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest5203 = $tmp5204;
    panda$core$String* $tmp5206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5205, backwardEntryExclusiveTest5203);
    panda$core$String* $tmp5208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5206, &$s5207);
    panda$core$String* $tmp5209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5208, signPrefix5034);
    panda$core$String* $tmp5211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5209, &$s5210);
    panda$core$String* $tmp5212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5211, numberType4915);
    panda$core$String* $tmp5214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5212, &$s5213);
    panda$core$String* $tmp5216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5215, start4933);
    panda$core$String* $tmp5218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5216, &$s5217);
    panda$core$String* $tmp5219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5218, end4975);
    panda$core$String* $tmp5221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5219, &$s5220);
    panda$core$String* $tmp5222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5214, $tmp5221);
    (($fn5223) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5222);
    panda$core$String* $tmp5225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5224, backwardEntryExclusiveTest5203);
    panda$core$String* $tmp5227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5225, &$s5226);
    panda$core$String* $tmp5228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5227, loopStart5020);
    panda$core$String* $tmp5230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5228, &$s5229);
    panda$core$String* $tmp5231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5230, loopEnd5024);
    panda$core$String* $tmp5233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5231, &$s5232);
    (($fn5234) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5233);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5020, p_out);
    panda$core$String* $tmp5236 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5235 = $tmp5236;
    panda$core$String* $tmp5238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5237, indexValue5235);
    panda$core$String* $tmp5240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5238, &$s5239);
    panda$core$String* $tmp5241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5240, numberType4915);
    panda$core$String* $tmp5243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5241, &$s5242);
    panda$core$String* $tmp5244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5243, numberType4915);
    panda$core$String* $tmp5246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5244, &$s5245);
    panda$core$String* $tmp5247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5246, indexValuePtr4943);
    panda$core$String* $tmp5249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5247, &$s5248);
    (($fn5250) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5249);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4894, p_out);
    panda$core$Bit $tmp5251 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4894);
    panda$core$Bit $tmp5252 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5251);
    if ($tmp5252.value) {
    {
        panda$core$String* $tmp5254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5253, loopTest5026);
        panda$core$String* $tmp5256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5254, &$s5255);
        (($fn5257) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5256);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest5026, p_out);
    panda$core$String* $tmp5259 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5258 = $tmp5259;
    panda$core$String* $tmp5261 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5260 = $tmp5261;
    panda$core$String* $tmp5263 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5262 = $tmp5263;
    panda$core$String* $tmp5265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5264, direction5046);
    panda$core$String* $tmp5267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5265, &$s5266);
    panda$core$String* $tmp5268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5267, forwardLabel5260);
    panda$core$String* $tmp5270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5268, &$s5269);
    panda$core$String* $tmp5271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5270, backwardLabel5262);
    panda$core$String* $tmp5273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5271, &$s5272);
    (($fn5274) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5273);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel5260, p_out);
    panda$core$String* $tmp5276 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5275 = $tmp5276;
    panda$core$String* $tmp5278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5277, forwardDelta5275);
    panda$core$String* $tmp5280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5278, &$s5279);
    panda$core$String* $tmp5281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5280, numberType4915);
    panda$core$String* $tmp5283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5281, &$s5282);
    panda$core$String* $tmp5284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5283, end4975);
    panda$core$String* $tmp5286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5284, &$s5285);
    panda$core$String* $tmp5287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5286, indexValue5235);
    panda$core$String* $tmp5289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5287, &$s5288);
    (($fn5290) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5289);
    panda$core$String* $tmp5292 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5291 = $tmp5292;
    panda$core$String* $tmp5294 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5293 = $tmp5294;
    panda$core$String* $tmp5296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5295, inclusive5010);
    panda$core$String* $tmp5298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5296, &$s5297);
    panda$core$String* $tmp5299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5298, forwardInclusiveLabel5291);
    panda$core$String* $tmp5301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5299, &$s5300);
    panda$core$String* $tmp5302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5301, forwardExclusiveLabel5293);
    (($fn5303) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5302);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel5291, p_out);
    panda$core$String* $tmp5305 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5304 = $tmp5305;
    panda$core$String* $tmp5307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5306, forwardInclusiveTest5304);
    panda$core$String* $tmp5309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5307, &$s5308);
    panda$core$String* $tmp5310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5309, numberType4915);
    panda$core$String* $tmp5312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5310, &$s5311);
    panda$core$String* $tmp5313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5312, forwardDelta5275);
    panda$core$String* $tmp5315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5313, &$s5314);
    panda$core$String* $tmp5316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5315, step4995);
    panda$core$String* $tmp5318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5316, &$s5317);
    (($fn5319) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5318);
    panda$core$String* $tmp5321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5320, forwardInclusiveTest5304);
    panda$core$String* $tmp5323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5321, &$s5322);
    panda$core$String* $tmp5324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5323, loopInc5258);
    panda$core$String* $tmp5326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5324, &$s5325);
    panda$core$String* $tmp5327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5326, loopEnd5024);
    panda$core$String* $tmp5329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5327, &$s5328);
    (($fn5330) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5329);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel5293, p_out);
    panda$core$String* $tmp5332 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5331 = $tmp5332;
    panda$core$String* $tmp5334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5333, forwardExclusiveTest5331);
    panda$core$String* $tmp5336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5334, &$s5335);
    panda$core$String* $tmp5337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5336, numberType4915);
    panda$core$String* $tmp5339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5337, &$s5338);
    panda$core$String* $tmp5340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5339, forwardDelta5275);
    panda$core$String* $tmp5342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5340, &$s5341);
    panda$core$String* $tmp5343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5342, step4995);
    panda$core$String* $tmp5345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5343, &$s5344);
    (($fn5346) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5345);
    panda$core$String* $tmp5348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5347, forwardExclusiveTest5331);
    panda$core$String* $tmp5350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5348, &$s5349);
    panda$core$String* $tmp5351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5350, loopInc5258);
    panda$core$String* $tmp5353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5351, &$s5352);
    panda$core$String* $tmp5354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5353, loopEnd5024);
    panda$core$String* $tmp5356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5354, &$s5355);
    (($fn5357) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5356);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel5262, p_out);
    panda$core$String* $tmp5359 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5358 = $tmp5359;
    panda$core$String* $tmp5361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5360, backwardDelta5358);
    panda$core$String* $tmp5363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5361, &$s5362);
    panda$core$String* $tmp5364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5363, numberType4915);
    panda$core$String* $tmp5366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5364, &$s5365);
    panda$core$String* $tmp5367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5366, indexValue5235);
    panda$core$String* $tmp5369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5367, &$s5368);
    panda$core$String* $tmp5370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5369, end4975);
    panda$core$String* $tmp5372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5370, &$s5371);
    (($fn5373) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5372);
    panda$core$String* $tmp5375 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5374 = $tmp5375;
    panda$core$String* $tmp5377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5376, negStep5374);
    panda$core$String* $tmp5379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5377, &$s5378);
    panda$core$String* $tmp5380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5379, numberType4915);
    panda$core$String* $tmp5382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5380, &$s5381);
    panda$core$String* $tmp5383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5382, step4995);
    panda$core$String* $tmp5385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5383, &$s5384);
    (($fn5386) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5385);
    panda$core$String* $tmp5388 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5387 = $tmp5388;
    panda$core$String* $tmp5390 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5389 = $tmp5390;
    panda$core$String* $tmp5392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5391, inclusive5010);
    panda$core$String* $tmp5394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5392, &$s5393);
    panda$core$String* $tmp5395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5394, backwardInclusiveLabel5387);
    panda$core$String* $tmp5397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5395, &$s5396);
    panda$core$String* $tmp5398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5397, backwardExclusiveLabel5389);
    (($fn5399) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5398);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel5387, p_out);
    panda$core$String* $tmp5401 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5400 = $tmp5401;
    panda$core$String* $tmp5403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5402, backwardInclusiveTest5400);
    panda$core$String* $tmp5405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5403, &$s5404);
    panda$core$String* $tmp5406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5405, numberType4915);
    panda$core$String* $tmp5408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5406, &$s5407);
    panda$core$String* $tmp5409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5408, backwardDelta5358);
    panda$core$String* $tmp5411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5409, &$s5410);
    panda$core$String* $tmp5412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5411, negStep5374);
    (($fn5413) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5412);
    panda$core$String* $tmp5415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5414, backwardInclusiveTest5400);
    panda$core$String* $tmp5417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5415, &$s5416);
    panda$core$String* $tmp5418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5417, loopInc5258);
    panda$core$String* $tmp5420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5418, &$s5419);
    panda$core$String* $tmp5421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5420, loopEnd5024);
    panda$core$String* $tmp5423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5421, &$s5422);
    (($fn5424) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5423);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel5389, p_out);
    panda$core$String* $tmp5426 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5425 = $tmp5426;
    panda$core$String* $tmp5428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5427, backwardExclusiveTest5425);
    panda$core$String* $tmp5430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5428, &$s5429);
    panda$core$String* $tmp5431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5430, numberType4915);
    panda$core$String* $tmp5433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5431, &$s5432);
    panda$core$String* $tmp5434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5433, backwardDelta5358);
    panda$core$String* $tmp5436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5434, &$s5435);
    panda$core$String* $tmp5437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5436, negStep5374);
    (($fn5438) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5437);
    panda$core$String* $tmp5440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5439, backwardExclusiveTest5425);
    panda$core$String* $tmp5442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5440, &$s5441);
    panda$core$String* $tmp5443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5442, loopInc5258);
    panda$core$String* $tmp5445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5443, &$s5444);
    panda$core$String* $tmp5446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5445, loopEnd5024);
    panda$core$String* $tmp5448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5446, &$s5447);
    (($fn5449) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5448);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc5258, p_out);
    panda$core$String* $tmp5451 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5450 = $tmp5451;
    panda$core$String* $tmp5453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5452, inc5450);
    panda$core$String* $tmp5455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5453, &$s5454);
    panda$core$String* $tmp5456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5455, numberType4915);
    panda$core$String* $tmp5458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5456, &$s5457);
    panda$core$String* $tmp5459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5458, indexValue5235);
    panda$core$String* $tmp5461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5459, &$s5460);
    panda$core$String* $tmp5462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5461, step4995);
    panda$core$String* $tmp5464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5462, &$s5463);
    (($fn5465) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5464);
    panda$core$String* $tmp5467 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5466 = $tmp5467;
    panda$core$String* $tmp5469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5468, incStruct5466);
    panda$core$String* $tmp5471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5469, &$s5470);
    panda$core$String* $tmp5472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5471, indexType4901);
    panda$core$String* $tmp5474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5472, &$s5473);
    panda$core$String* $tmp5475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5474, numberType4915);
    panda$core$String* $tmp5477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5475, &$s5476);
    (($fn5478) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5477);
    panda$core$String* $tmp5480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5479, numberType4915);
    panda$core$String* $tmp5482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5480, &$s5481);
    panda$core$String* $tmp5483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5482, inc5450);
    panda$core$String* $tmp5485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5483, &$s5484);
    (($fn5486) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5485);
    panda$core$String* $tmp5488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5487, indexType4901);
    panda$core$String* $tmp5490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5488, &$s5489);
    panda$core$String* $tmp5491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5490, incStruct5466);
    panda$core$String* $tmp5493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5491, &$s5492);
    panda$core$String* $tmp5494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5493, indexType4901);
    panda$core$String* $tmp5496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5494, &$s5495);
    panda$core$String* $tmp5497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5496, index4923);
    panda$core$String* $tmp5499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5497, &$s5498);
    (($fn5500) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5499);
    panda$core$String* $tmp5502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5501, loopStart5020);
    panda$core$String* $tmp5504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5502, &$s5503);
    (($fn5505) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5504);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5024, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp5506 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5507 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5506)->type);
    if ($tmp5507.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp5508 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5509 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5508)->type);
    if ($tmp5509.value) {
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
    panda$core$String* loopStart5516;
    panda$core$String* loopBody5518;
    panda$core$String* loopEnd5520;
    panda$core$String* test5529;
    panda$core$String* testBit5532;
    panda$core$Bit $tmp5510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5510.value);
    panda$core$Int64 $tmp5511 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5511, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5512.value);
    panda$core$Object* $tmp5513 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5514 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5515 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5513)->type, $tmp5514);
    PANDA_ASSERT($tmp5515.value);
    panda$core$String* $tmp5517 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5516 = $tmp5517;
    panda$core$String* $tmp5519 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5518 = $tmp5519;
    panda$core$String* $tmp5521 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5520 = $tmp5521;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5522 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5522->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5522->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5522, ((panda$core$String*) p_w->payload), loopEnd5520, loopStart5516);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5522));
    panda$core$String* $tmp5525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5524, loopStart5516);
    panda$core$String* $tmp5527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5525, &$s5526);
    (($fn5528) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5527);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5516, p_out);
    panda$core$Object* $tmp5530 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5531 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5530), p_out);
    test5529 = $tmp5531;
    panda$core$String* $tmp5533 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5532 = $tmp5533;
    panda$core$String* $tmp5535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5534, testBit5532);
    panda$core$String* $tmp5537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5535, &$s5536);
    panda$core$String* $tmp5538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5537, test5529);
    panda$core$String* $tmp5540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5538, &$s5539);
    (($fn5541) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5540);
    panda$core$String* $tmp5543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5542, testBit5532);
    panda$core$String* $tmp5545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5543, &$s5544);
    panda$core$String* $tmp5546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5545, loopBody5518);
    panda$core$String* $tmp5548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5546, &$s5547);
    panda$core$String* $tmp5549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5548, loopEnd5520);
    panda$core$String* $tmp5551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5549, &$s5550);
    (($fn5552) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5551);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5518, p_out);
    panda$core$Object* $tmp5553 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5553), p_out);
    panda$core$Object* $tmp5554 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5555 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5554));
    panda$core$Bit $tmp5556 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5555);
    if ($tmp5556.value) {
    {
        panda$core$String* $tmp5558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5557, loopStart5516);
        panda$core$String* $tmp5560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5558, &$s5559);
        (($fn5561) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5560);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5520, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5568;
    panda$core$String* loopBody5570;
    panda$core$String* loopEnd5572;
    panda$core$String* test5581;
    panda$core$String* testBit5584;
    panda$core$Bit $tmp5562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5562.value);
    panda$core$Int64 $tmp5563 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5563, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5564.value);
    panda$core$Object* $tmp5565 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5566 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5567 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5565)->type, $tmp5566);
    PANDA_ASSERT($tmp5567.value);
    panda$core$String* $tmp5569 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5568 = $tmp5569;
    panda$core$String* $tmp5571 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5570 = $tmp5571;
    panda$core$String* $tmp5573 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5572 = $tmp5573;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5574 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5574->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5574->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5574, ((panda$core$String*) p_d->payload), loopEnd5572, loopStart5568);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5574));
    panda$core$String* $tmp5577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5576, loopBody5570);
    panda$core$String* $tmp5579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5577, &$s5578);
    (($fn5580) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5579);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5568, p_out);
    panda$core$Object* $tmp5582 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5583 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5582), p_out);
    test5581 = $tmp5583;
    panda$core$String* $tmp5585 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5584 = $tmp5585;
    panda$core$String* $tmp5587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5586, testBit5584);
    panda$core$String* $tmp5589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5587, &$s5588);
    panda$core$String* $tmp5590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5589, test5581);
    panda$core$String* $tmp5592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5590, &$s5591);
    (($fn5593) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5592);
    panda$core$String* $tmp5595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5594, testBit5584);
    panda$core$String* $tmp5597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5595, &$s5596);
    panda$core$String* $tmp5598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5597, loopBody5570);
    panda$core$String* $tmp5600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5598, &$s5599);
    panda$core$String* $tmp5601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5600, loopEnd5572);
    panda$core$String* $tmp5603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5601, &$s5602);
    (($fn5604) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5603);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5570, p_out);
    panda$core$Object* $tmp5605 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5605), p_out);
    panda$core$Object* $tmp5606 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5607 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5606));
    panda$core$Bit $tmp5608 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5607);
    if ($tmp5608.value) {
    {
        panda$core$String* $tmp5610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5609, loopStart5568);
        panda$core$String* $tmp5612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5610, &$s5611);
        (($fn5613) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5612);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5572, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5617;
    panda$core$String* loopEnd5619;
    panda$core$Bit $tmp5614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5614.value);
    panda$core$Int64 $tmp5615 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5615, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5616.value);
    panda$core$String* $tmp5618 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5617 = $tmp5618;
    panda$core$String* $tmp5620 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5619 = $tmp5620;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5621 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5621->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5621->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5621, ((panda$core$String*) p_l->payload), loopEnd5619, loopStart5617);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5621));
    panda$core$String* $tmp5624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5623, loopStart5617);
    panda$core$String* $tmp5626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5624, &$s5625);
    (($fn5627) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5626);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5617, p_out);
    panda$core$Object* $tmp5628 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5628), p_out);
    panda$core$Object* $tmp5629 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5630 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5629));
    panda$core$Bit $tmp5631 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5630);
    if ($tmp5631.value) {
    {
        panda$core$String* $tmp5633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5632, loopStart5617);
        panda$core$String* $tmp5635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5633, &$s5634);
        (($fn5636) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5635);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5619, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5637;
    panda$core$String* ref5648;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5637 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5639 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5637);
            panda$core$String* $tmp5640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5638, $tmp5639);
            panda$core$String* $tmp5642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5640, &$s5641);
            panda$core$String* $tmp5643 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5637->type);
            panda$core$String* $tmp5644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5642, $tmp5643);
            panda$core$String* $tmp5646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5644, &$s5645);
            (($fn5647) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5646);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5649 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                ref5648 = $tmp5649;
                panda$core$String* $tmp5651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5650, ref5648);
                panda$core$String* $tmp5653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5651, &$s5652);
                panda$core$String* $tmp5654 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5637->type);
                panda$core$String* $tmp5655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5653, $tmp5654);
                panda$core$String* $tmp5657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5655, &$s5656);
                panda$core$String* $tmp5658 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5637);
                panda$core$String* $tmp5659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5657, $tmp5658);
                panda$core$String* $tmp5661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5659, &$s5660);
                (($fn5662) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5661);
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
    panda$collections$Iterator* decl$Iter5676;
    org$pandalanguage$pandac$IRNode* decl5688;
    panda$core$Bit $tmp5666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5665 = $tmp5666.value;
    if ($tmp5665) goto $l5667;
    panda$core$Bit $tmp5668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5665 = $tmp5668.value;
    $l5667:;
    panda$core$Bit $tmp5669 = { $tmp5665 };
    bool $tmp5664 = $tmp5669.value;
    if ($tmp5664) goto $l5670;
    panda$core$Bit $tmp5671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5664 = $tmp5671.value;
    $l5670:;
    panda$core$Bit $tmp5672 = { $tmp5664 };
    bool $tmp5663 = $tmp5672.value;
    if ($tmp5663) goto $l5673;
    panda$core$Bit $tmp5674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5663 = $tmp5674.value;
    $l5673:;
    panda$core$Bit $tmp5675 = { $tmp5663 };
    PANDA_ASSERT($tmp5675.value);
    {
        ITable* $tmp5677 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5677->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5677 = $tmp5677->next;
        }
        $fn5679 $tmp5678 = $tmp5677->methods[0];
        panda$collections$Iterator* $tmp5680 = $tmp5678(((panda$collections$Iterable*) p_v->children));
        decl$Iter5676 = $tmp5680;
        $l5681:;
        ITable* $tmp5683 = decl$Iter5676->$class->itable;
        while ($tmp5683->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5683 = $tmp5683->next;
        }
        $fn5685 $tmp5684 = $tmp5683->methods[0];
        panda$core$Bit $tmp5686 = $tmp5684(decl$Iter5676);
        panda$core$Bit $tmp5687 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5686);
        if (!$tmp5687.value) goto $l5682;
        {
            ITable* $tmp5689 = decl$Iter5676->$class->itable;
            while ($tmp5689->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5689 = $tmp5689->next;
            }
            $fn5691 $tmp5690 = $tmp5689->methods[1];
            panda$core$Object* $tmp5692 = $tmp5690(decl$Iter5676);
            decl5688 = ((org$pandalanguage$pandac$IRNode*) $tmp5692);
            panda$core$Bit $tmp5693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5688->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5693.value);
            panda$core$Int64 $tmp5694 = panda$collections$Array$get_count$R$panda$core$Int64(decl5688->children);
            panda$core$Bit $tmp5695 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5694, ((panda$core$Int64) { 1 }));
            if ($tmp5695.value) {
            {
                panda$core$Object* $tmp5696 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5688->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5697 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5688->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5696), ((org$pandalanguage$pandac$IRNode*) $tmp5697), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5698 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5688->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5698), NULL, p_out);
            }
            }
        }
        goto $l5681;
        $l5682:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base5702;
    panda$core$String* ptr5705;
    org$pandalanguage$pandac$ClassDecl* cl5707;
    panda$collections$ListView* fields5710;
    panda$core$Int64 index5712;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5713;
    panda$core$String* result5765;
    panda$core$String* reused5768;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5699 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5700 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp5699, p_out);
            return $tmp5700;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5701 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5701;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5703 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5704 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5703), p_out);
            base5702 = $tmp5704;
            panda$core$String* $tmp5706 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr5705 = $tmp5706;
            panda$core$Object* $tmp5708 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5709 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5708)->type);
            cl5707 = $tmp5709;
            PANDA_ASSERT(((panda$core$Bit) { cl5707 != NULL }).value);
            panda$collections$ListView* $tmp5711 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5707);
            fields5710 = $tmp5711;
            index5712 = ((panda$core$Int64) { -1 });
            ITable* $tmp5714 = ((panda$collections$CollectionView*) fields5710)->$class->itable;
            while ($tmp5714->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5714 = $tmp5714->next;
            }
            $fn5716 $tmp5715 = $tmp5714->methods[0];
            panda$core$Int64 $tmp5717 = $tmp5715(((panda$collections$CollectionView*) fields5710));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5713, ((panda$core$Int64) { 0 }), $tmp5717, ((panda$core$Bit) { false }));
            int64_t $tmp5719 = $tmp5713.min.value;
            panda$core$Int64 i5718 = { $tmp5719 };
            int64_t $tmp5721 = $tmp5713.max.value;
            bool $tmp5722 = $tmp5713.inclusive.value;
            if ($tmp5722) goto $l5729; else goto $l5730;
            $l5729:;
            if ($tmp5719 <= $tmp5721) goto $l5723; else goto $l5725;
            $l5730:;
            if ($tmp5719 < $tmp5721) goto $l5723; else goto $l5725;
            $l5723:;
            {
                ITable* $tmp5731 = fields5710->$class->itable;
                while ($tmp5731->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5731 = $tmp5731->next;
                }
                $fn5733 $tmp5732 = $tmp5731->methods[0];
                panda$core$Object* $tmp5734 = $tmp5732(fields5710, i5718);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5734))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name) }).value) {
                {
                    index5712 = i5718;
                    goto $l5725;
                }
                }
            }
            $l5726:;
            int64_t $tmp5736 = $tmp5721 - i5718.value;
            if ($tmp5722) goto $l5737; else goto $l5738;
            $l5737:;
            if ($tmp5736 >= 1) goto $l5735; else goto $l5725;
            $l5738:;
            if ($tmp5736 > 1) goto $l5735; else goto $l5725;
            $l5735:;
            i5718.value += 1;
            goto $l5723;
            $l5725:;
            panda$core$Bit $tmp5741 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5712, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5741.value);
            panda$core$String* $tmp5743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5742, ptr5705);
            panda$core$String* $tmp5745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5743, &$s5744);
            org$pandalanguage$pandac$Type* $tmp5746 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5707);
            panda$core$String* $tmp5747 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5746);
            panda$core$String* $tmp5748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5745, $tmp5747);
            panda$core$String* $tmp5750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5748, &$s5749);
            org$pandalanguage$pandac$Type* $tmp5752 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5707);
            panda$core$String* $tmp5753 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5752);
            panda$core$String* $tmp5754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5751, $tmp5753);
            panda$core$String* $tmp5756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5754, &$s5755);
            panda$core$String* $tmp5757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5756, base5702);
            panda$core$String* $tmp5759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5757, &$s5758);
            panda$core$String* $tmp5760 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5759, ((panda$core$Object*) wrap_panda$core$Int64(index5712)));
            panda$core$String* $tmp5762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5760, &$s5761);
            panda$core$String* $tmp5763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5750, $tmp5762);
            (($fn5764) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5763);
            return ptr5705;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5766 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5767 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5766), p_out);
            result5765 = $tmp5767;
            panda$core$String* $tmp5769 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5768 = $tmp5769;
            panda$core$String* $tmp5771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5770, reused5768);
            panda$core$String* $tmp5773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5771, &$s5772);
            panda$core$String* $tmp5774 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5773, $tmp5774);
            panda$core$String* $tmp5777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5775, &$s5776);
            panda$core$String* $tmp5779 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5778, $tmp5779);
            panda$core$String* $tmp5782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5780, &$s5781);
            panda$core$String* $tmp5783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5782, result5765);
            panda$core$String* $tmp5785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5783, &$s5784);
            panda$core$String* $tmp5786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5777, $tmp5785);
            (($fn5787) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5786);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5768));
            return result5765;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue5791;
    panda$core$String* value5803;
    panda$core$String* t5804;
    panda$core$Int64 op5807;
    panda$core$String* right5809;
    panda$core$Bit $tmp5788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5788.value);
    panda$core$Int64 $tmp5789 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5789, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5790.value);
    panda$core$Object* $tmp5793 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5794 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5793)->type);
    panda$core$String* $tmp5795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5792, $tmp5794);
    panda$core$String* $tmp5797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5795, &$s5796);
    panda$core$Object* $tmp5798 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5799 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5798), p_out);
    panda$core$String* $tmp5800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5797, $tmp5799);
    panda$core$String* $tmp5802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5800, &$s5801);
    lvalue5791 = $tmp5802;
    panda$core$Object* $tmp5805 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5806 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5805)->type);
    t5804 = $tmp5806;
    op5807 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5807, ((panda$core$Int64) { 73 }));
    if ($tmp5808.value) {
    {
        panda$core$Object* $tmp5810 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5811 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5810), p_out);
        right5809 = $tmp5811;
        panda$core$String* $tmp5813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5812, t5804);
        panda$core$String* $tmp5815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5813, &$s5814);
        panda$core$String* $tmp5816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5815, right5809);
        panda$core$String* $tmp5818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5816, &$s5817);
        value5803 = $tmp5818;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5819, value5803);
    panda$core$String* $tmp5822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5820, &$s5821);
    panda$core$String* $tmp5823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5822, lvalue5791);
    panda$core$String* $tmp5825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5823, &$s5824);
    (($fn5826) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5825);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5831;
    panda$core$String* result5833;
    panda$core$Int64 $tmp5827 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5827, ((panda$core$Int64) { 1 }));
    if ($tmp5828.value) {
    {
        panda$core$Int64 $tmp5829 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5830 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5829, ((panda$core$Int64) { 0 }));
        if ($tmp5830.value) {
        {
            panda$core$Object* $tmp5832 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5831 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5832);
            panda$core$Object* $tmp5834 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5835 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5834), p_out);
            result5833 = $tmp5835;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5836 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5836->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5836->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5836, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5833));
            panda$collections$Array$add$panda$collections$Array$T(inline5831->returns, ((panda$core$Object*) $tmp5836));
            panda$core$String* $tmp5839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5838, inline5831->exitLabel);
            panda$core$String* $tmp5841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5839, &$s5840);
            (($fn5842) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5841);
        }
        }
        else {
        {
            panda$core$Object* $tmp5844 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5845 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5844), p_out);
            panda$core$String* $tmp5846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5843, $tmp5845);
            panda$core$String* $tmp5848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5846, &$s5847);
            (($fn5849) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5848);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5850 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5850, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp5851.value);
        panda$core$Int64 $tmp5852 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5853 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5852, ((panda$core$Int64) { 0 }));
        if ($tmp5853.value) {
        {
            panda$core$Object* $tmp5855 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5854, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5855)->exitLabel);
            panda$core$String* $tmp5858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5856, &$s5857);
            (($fn5859) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5858);
        }
        }
        else {
        {
            (($fn5861) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5860);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5865;
    panda$core$Int64 $tmp5862 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5863 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5862, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5863.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5864 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5864);
    }
    }
    panda$core$Int64 $tmp5866 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5865, ((panda$core$Int64) { 0 }), $tmp5866, ((panda$core$Bit) { false }));
    int64_t $tmp5868 = $tmp5865.min.value;
    panda$core$Int64 i5867 = { $tmp5868 };
    int64_t $tmp5870 = $tmp5865.max.value;
    bool $tmp5871 = $tmp5865.inclusive.value;
    if ($tmp5871) goto $l5878; else goto $l5879;
    $l5878:;
    if ($tmp5868 <= $tmp5870) goto $l5872; else goto $l5874;
    $l5879:;
    if ($tmp5868 < $tmp5870) goto $l5872; else goto $l5874;
    $l5872:;
    {
        panda$core$Object* $tmp5881 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5867);
        bool $tmp5880 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5881)->loopLabel != NULL }).value;
        if (!$tmp5880) goto $l5882;
        panda$core$Object* $tmp5883 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5867);
        panda$core$Bit $tmp5884 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5883)->loopLabel, p_name);
        $tmp5880 = $tmp5884.value;
        $l5882:;
        panda$core$Bit $tmp5885 = { $tmp5880 };
        if ($tmp5885.value) {
        {
            panda$core$Object* $tmp5886 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5867);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5886);
        }
        }
    }
    $l5875:;
    int64_t $tmp5888 = $tmp5870 - i5867.value;
    if ($tmp5871) goto $l5889; else goto $l5890;
    $l5889:;
    if ($tmp5888 >= 1) goto $l5887; else goto $l5874;
    $l5890:;
    if ($tmp5888 > 1) goto $l5887; else goto $l5874;
    $l5887:;
    i5867.value += 1;
    goto $l5872;
    $l5874:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5893;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5894 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5893 = $tmp5894;
    panda$core$String* $tmp5896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5895, desc5893->breakLabel);
    panda$core$String* $tmp5898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5896, &$s5897);
    (($fn5899) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5898);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5900;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5901 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc5900 = $tmp5901;
    panda$core$String* $tmp5903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5902, desc5900->continueLabel);
    panda$core$String* $tmp5905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5903, &$s5904);
    (($fn5906) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5905);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test5916;
    panda$core$String* ifTrue5919;
    panda$core$String* ifFalse5921;
    panda$core$String* name5934;
    panda$core$String* path5935;
    panda$core$String$Index$nullable index5937;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp5940;
    panda$core$String* nameRef5942;
    panda$core$String* line5944;
    panda$core$String* msg5949;
    panda$collections$Iterator* m$Iter5956;
    org$pandalanguage$pandac$MethodDecl* m5970;
    panda$core$Bit $tmp5907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp5907.value);
    panda$core$Int64 $tmp5909 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5909, ((panda$core$Int64) { 1 }));
    bool $tmp5908 = $tmp5910.value;
    if ($tmp5908) goto $l5911;
    panda$core$Int64 $tmp5912 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5912, ((panda$core$Int64) { 2 }));
    $tmp5908 = $tmp5913.value;
    $l5911:;
    panda$core$Bit $tmp5914 = { $tmp5908 };
    PANDA_ASSERT($tmp5914.value);
    panda$core$Bit $tmp5915 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp5915.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp5917 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5918 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5917), p_out);
    test5916 = $tmp5918;
    panda$core$String* $tmp5920 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue5919 = $tmp5920;
    panda$core$String* $tmp5922 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse5921 = $tmp5922;
    panda$core$String* $tmp5924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5923, test5916);
    panda$core$String* $tmp5926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5924, &$s5925);
    panda$core$String* $tmp5927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5926, ifTrue5919);
    panda$core$String* $tmp5929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5927, &$s5928);
    panda$core$String* $tmp5930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5929, ifFalse5921);
    panda$core$String* $tmp5932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5930, &$s5931);
    (($fn5933) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5932);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse5921, p_out);
    panda$core$Object* $tmp5936 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    path5935 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5936)->source->path;
    panda$core$String$Index$nullable $tmp5939 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(path5935, &$s5938);
    index5937 = $tmp5939;
    if (((panda$core$Bit) { !index5937.nonnull }).value) {
    {
        name5934 = path5935;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp5940, index5937, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp5941 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(path5935, $tmp5940);
        name5934 = $tmp5941;
    }
    }
    panda$core$String* $tmp5943 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, name5934, p_out);
    nameRef5942 = $tmp5943;
    panda$core$String* $tmp5946 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5945, ((panda$core$Object*) wrap_panda$core$Int64(p_a->position.line)));
    panda$core$String* $tmp5948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5946, &$s5947);
    line5944 = $tmp5948;
    panda$core$Int64 $tmp5950 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5950, ((panda$core$Int64) { 2 }));
    if ($tmp5951.value) {
    {
        panda$core$Object* $tmp5952 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5953 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5952), p_out);
        msg5949 = $tmp5953;
    }
    }
    else {
    {
        msg5949 = NULL;
    }
    }
    (($fn5955) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5954);
    {
        org$pandalanguage$pandac$Type* $tmp5957 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp5958 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp5957);
        ITable* $tmp5959 = ((panda$collections$Iterable*) $tmp5958->methods)->$class->itable;
        while ($tmp5959->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5959 = $tmp5959->next;
        }
        $fn5961 $tmp5960 = $tmp5959->methods[0];
        panda$collections$Iterator* $tmp5962 = $tmp5960(((panda$collections$Iterable*) $tmp5958->methods));
        m$Iter5956 = $tmp5962;
        $l5963:;
        ITable* $tmp5965 = m$Iter5956->$class->itable;
        while ($tmp5965->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5965 = $tmp5965->next;
        }
        $fn5967 $tmp5966 = $tmp5965->methods[0];
        panda$core$Bit $tmp5968 = $tmp5966(m$Iter5956);
        panda$core$Bit $tmp5969 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5968);
        if (!$tmp5969.value) goto $l5964;
        {
            ITable* $tmp5971 = m$Iter5956->$class->itable;
            while ($tmp5971->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5971 = $tmp5971->next;
            }
            $fn5973 $tmp5972 = $tmp5971->methods[1];
            panda$core$Object* $tmp5974 = $tmp5972(m$Iter5956);
            m5970 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5974);
            panda$core$Bit $tmp5976 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5970)->name, &$s5975);
            if ($tmp5976.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m5970);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m5970);
            }
            }
        }
        goto $l5963;
        $l5964:;
    }
    if (((panda$core$Bit) { msg5949 != NULL }).value) {
    {
        panda$core$String* $tmp5979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5977, &$s5978);
        (($fn5980) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5979);
    }
    }
    else {
    {
        (($fn5982) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5981);
    }
    }
    panda$core$String* $tmp5984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5983, nameRef5942);
    panda$core$String* $tmp5986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5984, &$s5985);
    panda$core$String* $tmp5987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5986, line5944);
    panda$core$String* $tmp5989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5987, &$s5988);
    (($fn5990) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5989);
    if (((panda$core$Bit) { msg5949 != NULL }).value) {
    {
        panda$core$String* $tmp5992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5991, msg5949);
        panda$core$String* $tmp5994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5992, &$s5993);
        (($fn5995) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5994);
    }
    }
    (($fn5997) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5996);
    (($fn5999) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5998);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue5919, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* valueStruct6001;
    org$pandalanguage$pandac$ClassDecl* numberClass6004;
    panda$core$String* value6007;
    org$pandalanguage$pandac$FieldDecl* f6017;
    panda$core$String* switchType6020;
    panda$core$String* endLabel6030;
    panda$collections$Array* whenLabels6032;
    panda$core$String* otherwiseLabel6035;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6046;
    org$pandalanguage$pandac$IRNode* w6061;
    panda$core$String* label6065;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6067;
    panda$core$UInt64 number6083;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6111;
    org$pandalanguage$pandac$IRNode* w6126;
    org$pandalanguage$pandac$IRNode* block6128;
    panda$core$Bit $tmp6000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp6000.value);
    panda$core$Object* $tmp6002 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6003 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6002), p_out);
    valueStruct6001 = $tmp6003;
    panda$core$Object* $tmp6005 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp6006 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6005)->type);
    numberClass6004 = $tmp6006;
    panda$core$String* $tmp6008 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value6007 = $tmp6008;
    panda$core$String* $tmp6010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6009, value6007);
    panda$core$String* $tmp6012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6010, &$s6011);
    panda$core$String* $tmp6013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6012, valueStruct6001);
    panda$core$String* $tmp6015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6013, &$s6014);
    (($fn6016) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6015);
    org$pandalanguage$pandac$Symbol* $tmp6019 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass6004->symbolTable, &$s6018);
    f6017 = ((org$pandalanguage$pandac$FieldDecl*) $tmp6019);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f6017);
    panda$core$String* $tmp6021 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f6017->type);
    switchType6020 = $tmp6021;
    panda$core$String* $tmp6023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6022, switchType6020);
    panda$core$String* $tmp6025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6023, &$s6024);
    panda$core$String* $tmp6026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6025, value6007);
    panda$core$String* $tmp6028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6026, &$s6027);
    (($fn6029) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6028);
    panda$core$String* $tmp6031 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel6030 = $tmp6031;
    panda$collections$Array* $tmp6033 = (panda$collections$Array*) malloc(40);
    $tmp6033->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp6033->refCount.value = 1;
    panda$collections$Array$init($tmp6033);
    whenLabels6032 = $tmp6033;
    panda$core$Int64 $tmp6036 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp6037 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6036, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp6038 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, $tmp6037);
    panda$core$Bit $tmp6039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp6038)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp6039.value) {
    {
        panda$core$String* $tmp6040 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel6035 = $tmp6040;
    }
    }
    else {
    {
        otherwiseLabel6035 = endLabel6030;
    }
    }
    panda$core$String* $tmp6042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6041, otherwiseLabel6035);
    panda$core$String* $tmp6044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6042, &$s6043);
    (($fn6045) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6044);
    panda$core$Int64 $tmp6047 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6046, ((panda$core$Int64) { 1 }), $tmp6047, ((panda$core$Bit) { false }));
    int64_t $tmp6049 = $tmp6046.min.value;
    panda$core$Int64 i6048 = { $tmp6049 };
    int64_t $tmp6051 = $tmp6046.max.value;
    bool $tmp6052 = $tmp6046.inclusive.value;
    if ($tmp6052) goto $l6059; else goto $l6060;
    $l6059:;
    if ($tmp6049 <= $tmp6051) goto $l6053; else goto $l6055;
    $l6060:;
    if ($tmp6049 < $tmp6051) goto $l6053; else goto $l6055;
    $l6053:;
    {
        panda$core$Object* $tmp6062 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i6048);
        w6061 = ((org$pandalanguage$pandac$IRNode*) $tmp6062);
        panda$core$Bit $tmp6063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6061->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp6063.value) {
        {
            goto $l6056;
        }
        }
        panda$core$Bit $tmp6064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6061->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp6064.value);
        panda$core$String* $tmp6066 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label6065 = $tmp6066;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels6032, ((panda$core$Object*) label6065));
        panda$core$Int64 $tmp6068 = panda$collections$Array$get_count$R$panda$core$Int64(w6061->children);
        panda$core$Int64 $tmp6069 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6068, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6067, ((panda$core$Int64) { 0 }), $tmp6069, ((panda$core$Bit) { false }));
        int64_t $tmp6071 = $tmp6067.min.value;
        panda$core$Int64 i6070 = { $tmp6071 };
        int64_t $tmp6073 = $tmp6067.max.value;
        bool $tmp6074 = $tmp6067.inclusive.value;
        if ($tmp6074) goto $l6081; else goto $l6082;
        $l6081:;
        if ($tmp6071 <= $tmp6073) goto $l6075; else goto $l6077;
        $l6082:;
        if ($tmp6071 < $tmp6073) goto $l6075; else goto $l6077;
        $l6075:;
        {
            panda$core$Object* $tmp6084 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w6061->children, i6070);
            panda$core$UInt64 $tmp6085 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6084));
            number6083 = $tmp6085;
            panda$core$String* $tmp6087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6086, switchType6020);
            panda$core$String* $tmp6089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6087, &$s6088);
            panda$core$String* $tmp6090 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6089, ((panda$core$Object*) wrap_panda$core$UInt64(number6083)));
            panda$core$String* $tmp6092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6090, &$s6091);
            panda$core$String* $tmp6093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6092, label6065);
            panda$core$String* $tmp6095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6093, &$s6094);
            (($fn6096) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6095);
        }
        $l6078:;
        int64_t $tmp6098 = $tmp6073 - i6070.value;
        if ($tmp6074) goto $l6099; else goto $l6100;
        $l6099:;
        if ($tmp6098 >= 1) goto $l6097; else goto $l6077;
        $l6100:;
        if ($tmp6098 > 1) goto $l6097; else goto $l6077;
        $l6097:;
        i6070.value += 1;
        goto $l6075;
        $l6077:;
    }
    $l6056:;
    int64_t $tmp6104 = $tmp6051 - i6048.value;
    if ($tmp6052) goto $l6105; else goto $l6106;
    $l6105:;
    if ($tmp6104 >= 1) goto $l6103; else goto $l6055;
    $l6106:;
    if ($tmp6104 > 1) goto $l6103; else goto $l6055;
    $l6103:;
    i6048.value += 1;
    goto $l6053;
    $l6055:;
    (($fn6110) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6109);
    panda$core$Int64 $tmp6112 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6111, ((panda$core$Int64) { 1 }), $tmp6112, ((panda$core$Bit) { false }));
    int64_t $tmp6114 = $tmp6111.min.value;
    panda$core$Int64 i6113 = { $tmp6114 };
    int64_t $tmp6116 = $tmp6111.max.value;
    bool $tmp6117 = $tmp6111.inclusive.value;
    if ($tmp6117) goto $l6124; else goto $l6125;
    $l6124:;
    if ($tmp6114 <= $tmp6116) goto $l6118; else goto $l6120;
    $l6125:;
    if ($tmp6114 < $tmp6116) goto $l6118; else goto $l6120;
    $l6118:;
    {
        panda$core$Object* $tmp6127 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i6113);
        w6126 = ((org$pandalanguage$pandac$IRNode*) $tmp6127);
        panda$core$Int64 $tmp6129 = panda$collections$Array$get_count$R$panda$core$Int64(w6126->children);
        panda$core$Int64 $tmp6130 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6129, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp6131 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w6126->children, $tmp6130);
        block6128 = ((org$pandalanguage$pandac$IRNode*) $tmp6131);
        panda$core$Int64 $tmp6132 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6113, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp6133 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels6032);
        panda$core$Bit $tmp6134 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp6132, $tmp6133);
        if ($tmp6134.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, otherwiseLabel6035, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp6135 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6113, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp6136 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels6032, $tmp6135);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ((panda$core$String*) $tmp6136), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block6128, p_out);
        panda$core$Bit $tmp6137 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block6128);
        panda$core$Bit $tmp6138 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6137);
        if ($tmp6138.value) {
        {
            panda$core$String* $tmp6140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6139, endLabel6030);
            panda$core$String* $tmp6142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6140, &$s6141);
            (($fn6143) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6142);
        }
        }
    }
    $l6121:;
    int64_t $tmp6145 = $tmp6116 - i6113.value;
    if ($tmp6117) goto $l6146; else goto $l6147;
    $l6146:;
    if ($tmp6145 >= 1) goto $l6144; else goto $l6120;
    $l6147:;
    if ($tmp6145 > 1) goto $l6144; else goto $l6120;
    $l6144:;
    i6113.value += 1;
    goto $l6118;
    $l6120:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel6030, p_out);
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
    panda$core$String* result6150;
    org$pandalanguage$pandac$Type* $tmp6151 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp6152 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6151);
    result6150 = $tmp6152;
    panda$core$Bit $tmp6154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6153 = $tmp6154.value;
    if (!$tmp6153) goto $l6155;
    panda$core$Bit $tmp6157 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6150, &$s6156);
    panda$core$Bit $tmp6158 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6157);
    $tmp6153 = $tmp6158.value;
    $l6155:;
    panda$core$Bit $tmp6159 = { $tmp6153 };
    if ($tmp6159.value) {
    {
        panda$core$String* $tmp6161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6150, &$s6160);
        return $tmp6161;
    }
    }
    return result6150;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6162;
    panda$core$Bit needsIndirection6171;
    panda$core$String* separator6183;
    panda$collections$Iterator* p$Iter6204;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6216;
    panda$core$String* $tmp6163 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6162 = $tmp6163;
    panda$core$Bit $tmp6164 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6162));
    if ($tmp6164.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6162));
    panda$core$String* $tmp6166 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6165, $tmp6166);
    panda$core$String* $tmp6169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6167, &$s6168);
    (($fn6170) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6169);
    panda$core$Bit $tmp6172 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6171 = $tmp6172;
    if (needsIndirection6171.value) {
    {
        (($fn6174) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6173);
    }
    }
    else {
    {
        panda$core$String* $tmp6175 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6176) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6175);
    }
    }
    panda$core$String* $tmp6178 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6177, $tmp6178);
    panda$core$String* $tmp6181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6179, &$s6180);
    (($fn6182) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6181);
    separator6183 = &$s6184;
    if (needsIndirection6171.value) {
    {
        panda$core$String* $tmp6186 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6185, $tmp6186);
        panda$core$String* $tmp6189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6187, &$s6188);
        (($fn6190) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6189);
        separator6183 = &$s6191;
    }
    }
    panda$core$Bit $tmp6192 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6193 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6192);
    if ($tmp6193.value) {
    {
        panda$core$String* $tmp6195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6194, separator6183);
        panda$core$String* $tmp6197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6195, &$s6196);
        panda$core$String* $tmp6198 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6197, $tmp6198);
        panda$core$String* $tmp6201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6199, &$s6200);
        (($fn6202) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6201);
        separator6183 = &$s6203;
    }
    }
    {
        ITable* $tmp6205 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6205->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6205 = $tmp6205->next;
        }
        $fn6207 $tmp6206 = $tmp6205->methods[0];
        panda$collections$Iterator* $tmp6208 = $tmp6206(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6204 = $tmp6208;
        $l6209:;
        ITable* $tmp6211 = p$Iter6204->$class->itable;
        while ($tmp6211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6211 = $tmp6211->next;
        }
        $fn6213 $tmp6212 = $tmp6211->methods[0];
        panda$core$Bit $tmp6214 = $tmp6212(p$Iter6204);
        panda$core$Bit $tmp6215 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6214);
        if (!$tmp6215.value) goto $l6210;
        {
            ITable* $tmp6217 = p$Iter6204->$class->itable;
            while ($tmp6217->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6217 = $tmp6217->next;
            }
            $fn6219 $tmp6218 = $tmp6217->methods[1];
            panda$core$Object* $tmp6220 = $tmp6218(p$Iter6204);
            p6216 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6220);
            panda$core$String* $tmp6222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6221, separator6183);
            panda$core$String* $tmp6224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6222, &$s6223);
            panda$core$String* $tmp6225 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6216->type);
            panda$core$String* $tmp6226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6224, $tmp6225);
            panda$core$String* $tmp6228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6226, &$s6227);
            panda$core$String* $tmp6229 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6216->name);
            panda$core$String* $tmp6230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6228, $tmp6229);
            panda$core$String* $tmp6232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6230, &$s6231);
            (($fn6233) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6232);
            separator6183 = &$s6234;
        }
        goto $l6209;
        $l6210:;
    }
    (($fn6236) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6235);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6259;
    panda$collections$Iterator* p$Iter6270;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6282;
    panda$io$MemoryOutputStream* bodyBuffer6305;
    panda$io$IndentedOutputStream* indentedBody6308;
    panda$collections$Iterator* s$Iter6311;
    org$pandalanguage$pandac$IRNode* s6323;
    panda$core$Object* $tmp6237 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6237)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6238;
    self->varCount = ((panda$core$Int64) { 0 });
    (($fn6239) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    (($fn6241) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6240);
    panda$core$Bit $tmp6242 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6242.value) {
    {
        (($fn6244) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6243);
    }
    }
    panda$core$String* $tmp6246 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6245, $tmp6246);
    panda$core$String* $tmp6249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6247, &$s6248);
    panda$core$String* $tmp6250 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6249, $tmp6250);
    panda$core$String* $tmp6253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6251, &$s6252);
    panda$core$String* $tmp6254 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6253, $tmp6254);
    panda$core$String* $tmp6257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6255, &$s6256);
    (($fn6258) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6257);
    separator6259 = &$s6260;
    panda$core$Bit $tmp6261 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6262 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6261);
    if ($tmp6262.value) {
    {
        panda$core$String* $tmp6264 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6263, $tmp6264);
        panda$core$String* $tmp6267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6265, &$s6266);
        (($fn6268) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6267);
        separator6259 = &$s6269;
    }
    }
    {
        ITable* $tmp6271 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6271->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6271 = $tmp6271->next;
        }
        $fn6273 $tmp6272 = $tmp6271->methods[0];
        panda$collections$Iterator* $tmp6274 = $tmp6272(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6270 = $tmp6274;
        $l6275:;
        ITable* $tmp6277 = p$Iter6270->$class->itable;
        while ($tmp6277->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6277 = $tmp6277->next;
        }
        $fn6279 $tmp6278 = $tmp6277->methods[0];
        panda$core$Bit $tmp6280 = $tmp6278(p$Iter6270);
        panda$core$Bit $tmp6281 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6280);
        if (!$tmp6281.value) goto $l6276;
        {
            ITable* $tmp6283 = p$Iter6270->$class->itable;
            while ($tmp6283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6283 = $tmp6283->next;
            }
            $fn6285 $tmp6284 = $tmp6283->methods[1];
            panda$core$Object* $tmp6286 = $tmp6284(p$Iter6270);
            p6282 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6286);
            panda$core$String* $tmp6288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6287, separator6259);
            panda$core$String* $tmp6290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6288, &$s6289);
            panda$core$String* $tmp6291 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6282->type);
            panda$core$String* $tmp6292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6290, $tmp6291);
            panda$core$String* $tmp6294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6292, &$s6293);
            panda$core$String* $tmp6295 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6282->name);
            panda$core$String* $tmp6296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6294, $tmp6295);
            panda$core$String* $tmp6298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6296, &$s6297);
            (($fn6299) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6298);
            separator6259 = &$s6300;
        }
        goto $l6275;
        $l6276:;
    }
    (($fn6302) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6301);
    panda$core$Int64 $tmp6303 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6303;
    panda$core$Bit $tmp6304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6304.value);
    panda$io$MemoryOutputStream* $tmp6306 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6306->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6306->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6306);
    bodyBuffer6305 = $tmp6306;
    panda$io$IndentedOutputStream* $tmp6309 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp6309->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp6309->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6309, ((panda$io$OutputStream*) bodyBuffer6305));
    indentedBody6308 = $tmp6309;
    {
        ITable* $tmp6312 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6312->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6312 = $tmp6312->next;
        }
        $fn6314 $tmp6313 = $tmp6312->methods[0];
        panda$collections$Iterator* $tmp6315 = $tmp6313(((panda$collections$Iterable*) p_body->children));
        s$Iter6311 = $tmp6315;
        $l6316:;
        ITable* $tmp6318 = s$Iter6311->$class->itable;
        while ($tmp6318->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6318 = $tmp6318->next;
        }
        $fn6320 $tmp6319 = $tmp6318->methods[0];
        panda$core$Bit $tmp6321 = $tmp6319(s$Iter6311);
        panda$core$Bit $tmp6322 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6321);
        if (!$tmp6322.value) goto $l6317;
        {
            ITable* $tmp6324 = s$Iter6311->$class->itable;
            while ($tmp6324->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6324 = $tmp6324->next;
            }
            $fn6326 $tmp6325 = $tmp6324->methods[1];
            panda$core$Object* $tmp6327 = $tmp6325(s$Iter6311);
            s6323 = ((org$pandalanguage$pandac$IRNode*) $tmp6327);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s6323, indentedBody6308);
        }
        goto $l6316;
        $l6317:;
    }
    panda$core$String* $tmp6329 = (($fn6328) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn6330) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6329);
    panda$core$String* $tmp6332 = (($fn6331) bodyBuffer6305->$class->vtable[0])(bodyBuffer6305);
    (($fn6333) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6332);
    panda$core$Bit $tmp6334 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6335 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6334);
    if ($tmp6335.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6336 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6337 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6336);
        if ($tmp6337.value) {
        {
            (($fn6339) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6338);
        }
        }
        else {
        {
            (($fn6341) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6340);
        }
        }
    }
    }
    panda$core$Int64 $tmp6342 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6342;
    (($fn6344) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6343);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6345 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6345.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6346 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6346);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

