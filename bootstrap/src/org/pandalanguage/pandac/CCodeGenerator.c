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
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/MutableString.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/collections/Array.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/CCodeGenerator/ClassConstant.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/CCodeGenerator/MethodShim.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/CCodeGenerator/LoopDescriptor.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

typedef panda$core$Bit (*$fn59)(panda$collections$Set*, panda$collections$Key*);
typedef void (*$fn66)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn67)(panda$collections$Set*, panda$core$Object*);
typedef panda$core$Bit (*$fn68)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn71)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn88)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn91)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn94)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn96)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn97)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn99)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn103)(panda$collections$ImmutableArray*);
typedef void (*$fn124)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn125)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn128)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn142)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn143)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn159)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn177)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn186)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn189)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn192)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$ListView* (*$fn201)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn205)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn211)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn217)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn219)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn221)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn235)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn241)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn245)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn251)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn257)(panda$collections$Iterator*);
typedef void (*$fn259)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$Bit (*$fn270)(panda$collections$Set*, panda$collections$Key*);
typedef panda$core$Object* (*$fn274)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn286)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn291)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn294)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn297)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn299)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn305)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn306)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn309)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn311)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn313)(panda$collections$ImmutableArray*);
typedef void (*$fn335)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn336)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn339)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn352)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn353)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn356)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn363)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Set* (*$fn365)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn372)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn378)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn384)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn387)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn392)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn416)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn438)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn444)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn450)(panda$collections$Iterator*);
typedef void (*$fn452)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn454)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn457)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn459)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn461)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn462)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn474)(panda$collections$IdentityMap*, panda$core$Object*);
typedef panda$core$Int64 (*$fn477)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn480)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn497)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn504)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn506)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn507)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn529)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn533)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn534)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn542)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn555)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn558)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn588)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn590)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn592)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn608)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn615)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn621)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn647)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn660)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn662)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn670)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn673)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn677)(panda$core$MutableString*);
typedef void (*$fn679)(panda$collections$IdentityMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn680)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn705)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn707)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn710)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Object* (*$fn733)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn743)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn756)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn782)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn784)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn805)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn808)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn814)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn840)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn853)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn856)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn858)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Set* (*$fn860)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn867)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn873)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn879)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn882)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn887)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn911)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn938)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn944)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn950)(panda$collections$Iterator*);
typedef void (*$fn952)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn954)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn957)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn959)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn961)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn962)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn968)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn972)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn974)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn977)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn979)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn982)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Object* (*$fn987)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn989)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn995)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1002)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn1003)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn1005)(panda$collections$Stack*, panda$core$Object*);
typedef panda$collections$ListView* (*$fn1007)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1012)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1019)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1022)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1032)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1062)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1068)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1074)(panda$collections$Iterator*);
typedef void (*$fn1076)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn1077)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn1080)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1082)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1085)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1086)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn1087)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn1095)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn1108)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1113)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn1116)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$ListView* (*$fn1127)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1130)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1142)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1171)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1194)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1207)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1221)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1222)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1223)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn1230)(panda$collections$IdentityMap*, panda$core$Object*);
typedef void (*$fn1240)(panda$collections$IdentityMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn1262)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn1273)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1283)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1287)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn1298)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1304)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn1315)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1325)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1329)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn1340)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1385)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1391)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1405)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$ListView* (*$fn1450)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn1455)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1477)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn1491)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1514)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1522)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1531)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1534)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$ListView* (*$fn1537)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn1542)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1564)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1578)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn1580)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn1584)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn1590)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1606)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1610)(org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1626)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Object* (*$fn1628)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn1675)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Object* (*$fn1677)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn1731)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1747)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1765)(org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1768)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn1770)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn1773)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn1776)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn1781)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn1812)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn1815)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1820)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn1854)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1862)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1874)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1878)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1884)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1890)(panda$collections$Iterator*);
typedef void (*$fn1899)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1902)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1905)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn1908)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn1913)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn1917)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1933)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1953)(org$pandalanguage$pandac$Annotations*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1958)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1963)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn1992)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn1996)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn2027)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2038)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2041)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2044)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2047)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2053)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2057)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2063)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn2069)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn2071)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn2077)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn2083)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn2085)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2108)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2113)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2117)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn2132)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2173)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2178)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn2190)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2195)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2221)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2226)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2232)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2238)(panda$collections$Iterator*);
typedef void (*$fn2243)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2250)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2252)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn2259)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2261)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Int64 (*$fn2266)(panda$collections$CollectionView*);
typedef void (*$fn2271)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2287)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2290)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2312)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2315)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn2333)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2335)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2337)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2396)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn2399)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn2411)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2416)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2422)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2428)(panda$collections$Iterator*);
typedef void (*$fn2432)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2442)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2452)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2463)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2476)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2485)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn2503)(org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2506)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn2508)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn2511)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn2514)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn2522)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn2553)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn2556)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn2561)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn2597)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2608)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2614)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2618)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2624)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2630)(panda$collections$Iterator*);
typedef void (*$fn2632)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2633)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2636)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2644)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2647)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2651)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2654)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2664)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn2670)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2674)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn2677)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn2681)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2683)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn2700)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2704)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2716)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2729)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2742)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2752)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2763)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn2784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2796)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2813)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2841)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2858)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2872)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2888)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2905)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2921)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2938)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2952)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2968)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2984)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3001)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3015)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3029)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3039)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3044)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3045)(panda$collections$Stack*);
typedef void (*$fn3052)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn3062)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3068)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3069)(panda$collections$Stack*);
typedef void (*$fn3076)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn3087)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3088)(panda$collections$Stack*);
typedef void (*$fn3095)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn3097)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3100)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3101)(panda$collections$Stack*);
typedef void (*$fn3114)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3124)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3129)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3135)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3141)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3150)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3170)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn3190)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3199)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3201)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn3202)(panda$collections$Stack*);
typedef panda$core$Int64 (*$fn3205)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3226)(panda$collections$Stack*, panda$core$Int64);
typedef panda$core$Object* (*$fn3229)(panda$collections$Stack*, panda$core$Int64);
typedef panda$core$Object* (*$fn3233)(panda$collections$Stack*, panda$core$Int64);
typedef void (*$fn3252)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3259)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3287)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3300)(panda$io$MemoryOutputStream*);
typedef void (*$fn3310)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3313)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn3321)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3326)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3332)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3338)(panda$collections$Iterator*);
typedef void (*$fn3352)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3355)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3366)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3372)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3378)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3380)(panda$io$MemoryOutputStream*);
typedef void (*$fn3382)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3383)(panda$io$MemoryOutputStream*);
typedef void (*$fn3385)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3388)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3389)(panda$collections$Set*);
typedef void (*$fn3390)(panda$io$MemoryOutputStream*);
typedef void (*$fn3391)(panda$io$MemoryOutputStream*);
typedef void (*$fn3392)(panda$io$MemoryOutputStream*);
typedef void (*$fn3393)(panda$io$MemoryOutputStream*);
typedef void (*$fn3394)(panda$io$MemoryOutputStream*);
typedef void (*$fn3395)(panda$io$MemoryOutputStream*);
typedef void (*$fn3396)(panda$collections$Set*);
typedef void (*$fn3397)(panda$collections$Set*);
typedef void (*$fn3398)(panda$collections$Set*);
typedef void (*$fn3399)(panda$collections$HashMap*);
typedef void (*$fn3400)(panda$collections$IdentityMap*);
typedef void (*$fn3401)(panda$collections$HashMap*);
typedef void (*$fn3402)(panda$collections$IdentityMap*);
typedef panda$core$Bit (*$fn3410)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3427)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3438)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3445)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3453)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3455)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3457)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3459)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3460)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3461)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3462)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3463)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3464)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3465)(panda$core$Object*);

static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 1 };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22", 10, 1 };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x66\x6E", 3, 1 };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 1 };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28\x2A", 3, 1 };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x28", 2, 1 };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2, 1 };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3B", 2, 1 };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 1 };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 1 };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 1 };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1 };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x5F", 2, 1 };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, 1 };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x6E\x65\x78\x74\x3B\x20", 19, 1 };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, 1 };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, 1 };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, 1 };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70", 2, 1 };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70", 1, 1 };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 10, 1 };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x73\x75\x6C\x74", 6, 1 };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, 1 };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, 1 };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66\x2D\x3E\x76\x61\x6C\x75\x65", 12, 1 };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5F", 9, 1 };
static panda$core$String $s897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, 1 };
static panda$core$String $s906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 21, 1 };
static panda$core$String $s908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, 1 };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x26", 3, 1 };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, 1 };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s1018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, 1 };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, 1 };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s1058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, 1 };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, 1 };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s1167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B", 4, 1 };
static panda$core$String $s1225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x5F", 2, 1 };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 1 };
static panda$core$String $s1278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s1320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s1323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s1347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s1371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s1412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20", 4, 1 };
static panda$core$String $s1415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s1423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20", 4, 1 };
static panda$core$String $s1426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x76\x74\x61\x62\x6C\x65\x5B", 17, 1 };
static panda$core$String $s1501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x29", 2, 1 };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20", 8, 1 };
static panda$core$String $s1509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x69\x74\x61\x62\x6C\x65\x3B", 17, 1 };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28", 7, 1 };
static panda$core$String $s1517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x21\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 33, 1 };
static panda$core$String $s1520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6E\x65\x78\x74\x3B", 7, 1 };
static panda$core$String $s1533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6D\x65\x74\x68\x6F\x64\x73\x5B", 10, 1 };
static panda$core$String $s1604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B", 2, 1 };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 1 };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 9, 1 };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1 };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 1 };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2A", 2, 1 };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D", 7, 1 };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 1 };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6C\x6C\x6F\x63\x28", 10, 1 };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1 };
static panda$core$String $s1692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 1 };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2B\x20", 3, 1 };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 1 };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s1714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 1 };
static panda$core$String $s1726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 1 };
static panda$core$String $s1742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, 1 };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s1920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 1 };
static panda$core$String $s1928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x77\x72\x61\x70\x5F", 7, 1 };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 1 };
static panda$core$String $s1965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2D\x3E\x76\x61\x6C\x75\x65", 8, 1 };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C\x20\x3F\x20", 11, 1 };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x28", 4, 1 };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x30\x20\x7D\x29", 19, 1 };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 1 };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x74\x72\x75\x65\x20\x7D\x29", 9, 1 };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 1 };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 1 };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 1 };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s2136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28", 4, 1 };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x6C\x6C\x6F\x63\x28", 7, 1 };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 32, 1 };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7, 1 };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x72\x65\x66\x43\x6F\x75\x6E\x74\x2E\x76\x61\x6C\x75\x65\x20\x3D\x20\x31\x3B", 21, 1 };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, 1 };
static panda$core$String $s2212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20", 25, 1 };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x63\x6C\x61\x73\x73\x2C\x20\x32\x2C\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x20\x22", 70, 1 };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C\x78", 2, 1 };
static panda$core$String $s2244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 1 };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 1 };
static panda$core$String $s2262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2C\x20", 3, 1 };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x20\x7D\x3B", 6, 1 };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 1 };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6C\x66\x29", 7, 1 };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20\x4E\x55\x4C\x4C", 8, 1 };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C", 8, 1 };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s2330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x66\x61\x6C\x73\x65\x20\x7D\x29", 23, 1 };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s2353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 1 };
static panda$core$String $s2445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x32\x20", 7, 1 };
static panda$core$String $s2447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D\x20\x3D\x20", 10, 1 };
static panda$core$String $s2474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 1 };
static panda$core$String $s2479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, 1 };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, 1 };
static panda$core$String $s2646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6C\x73\x65\x20\x7B", 6, 1 };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x61\x72\x74\x2E\x76\x61\x6C\x75\x65\x3B", 13, 1 };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x65\x6E\x64\x2E\x76\x61\x6C\x75\x65\x3B", 11, 1 };
static panda$core$String $s2732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x65\x70\x2E\x76\x61\x6C\x75\x65\x3B", 12, 1 };
static panda$core$String $s2745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, 1 };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 1 };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x30\x3B", 5, 1 };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, 1 };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, 1 };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 1 };
static panda$core$String $s2864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1 };
static panda$core$String $s2880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, 1 };
static panda$core$String $s2919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, 1 };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 1 };
static panda$core$String $s2944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1 };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2D\x20", 9, 1 };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x2D", 5, 1 };
static panda$core$String $s3007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x2D", 4, 1 };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20", 10, 1 };
static panda$core$String $s3037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 1 };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 1 };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 1 };
static panda$core$String $s3085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7B", 14, 1 };
static panda$core$String $s3099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s3105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s3122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s3188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s3197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x3B", 7, 1 };
static panda$core$String $s3248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 1 };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s3322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, 1 };
static panda$core$String $s3350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x63", 2, 1 };
static panda$core$String $s3412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, 1 };
static panda$core$String $s3419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x20\x7B", 8, 1 };
static panda$core$String $s3428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20", 4, 1 };
static panda$core$String $s3431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 19, 1 };
static panda$core$String $s3433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 18, 1 };
static panda$core$String $s3442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s3446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x63\x6C\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20", 37, 1 };
static panda$core$String $s3447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s3450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, 1 };
static panda$core$String $s3454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x76\x61\x6C\x75\x65\x20\x3D\x20\x73\x65\x6C\x66\x3B", 25, 1 };
static panda$core$String $s3456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6E\x20\x72\x65\x73\x75\x6C\x74\x3B", 18, 1 };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

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
    panda$io$IndentedOutputStream* $tmp11 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp11->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp11->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp11, ((panda$io$OutputStream*) self->methodsBuffer));
    self->methods = $tmp11;
    panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp13->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp13);
    self->methodHeaderBuffer = $tmp13;
    panda$io$IndentedOutputStream* $tmp15 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp15->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp15->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp15, ((panda$io$OutputStream*) self->methodHeaderBuffer));
    self->methodHeader = $tmp15;
    panda$io$MemoryOutputStream* $tmp17 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp17->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp17->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp17);
    self->wrapperShimsBuffer = $tmp17;
    panda$io$IndentedOutputStream* $tmp19 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp19->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp19->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp19, ((panda$io$OutputStream*) self->wrapperShimsBuffer));
    self->wrapperShims = $tmp19;
    panda$io$MemoryOutputStream* $tmp21 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp21->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp21->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp21);
    self->shimsBuffer = $tmp21;
    panda$io$IndentedOutputStream* $tmp23 = (panda$io$IndentedOutputStream*) malloc(48);
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
    panda$io$IndentedOutputStream* $tmp45 = (panda$io$IndentedOutputStream*) malloc(48);
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
    panda$core$Bit $tmp60 = (($fn59) self->imports->$class->vtable[7])(self->imports, ((panda$collections$Key*) includePath56));
    panda$core$Bit $tmp61 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp60);
    if ($tmp61.value) {
    {
        panda$core$String* $tmp63 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s62, includePath56);
        panda$core$String* $tmp65 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp63, &$s64);
        (($fn66) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp65);
        (($fn67) self->imports->$class->vtable[2])(self->imports, ((panda$core$Object*) ((panda$collections$Key*) includePath56)));
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl70;
    panda$core$String* result79;
    panda$core$MutableString* code84;
    panda$core$String* separator100;
    panda$core$Range$LTpanda$core$Int64$GT $tmp102;
    panda$core$Bit $tmp69 = (($fn68) p_t->$class->vtable[8])(p_t);
    if ($tmp69.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp72 = (($fn71) self->compiler->$class->vtable[14])(self->compiler, p_t);
        cl70 = $tmp72;
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl70);
    }
    }
    panda$core$Bit $tmp74 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp73 = $tmp74.value;
    if ($tmp73) goto $l75;
    panda$core$Bit $tmp76 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 24 }));
    $tmp73 = $tmp76.value;
    $l75:;
    panda$core$Bit $tmp77 = { $tmp73 };
    if ($tmp77.value) {
    {
        panda$core$Int64 $tmp78 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp78;
        panda$core$String* $tmp81 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s80, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp81, &$s82);
        result79 = $tmp83;
        panda$core$MutableString* $tmp85 = (panda$core$MutableString*) malloc(40);
        $tmp85->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp85->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp85, &$s87);
        code84 = $tmp85;
        panda$core$Int64 $tmp89 = (($fn88) p_t->subtypes->$class->vtable[3])(p_t->subtypes);
        panda$core$Int64 $tmp90 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp89, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp92 = (($fn91) p_t->subtypes->$class->vtable[2])(p_t->subtypes, $tmp90);
        panda$core$String* $tmp93 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp92));
        (($fn94) code84->$class->vtable[3])(code84, $tmp93);
        (($fn96) code84->$class->vtable[3])(code84, &$s95);
        (($fn97) code84->$class->vtable[3])(code84, result79);
        (($fn99) code84->$class->vtable[3])(code84, &$s98);
        separator100 = &$s101;
        panda$core$Int64 $tmp104 = (($fn103) p_t->subtypes->$class->vtable[3])(p_t->subtypes);
        panda$core$Int64 $tmp105 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp104, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp102, ((panda$core$Int64) { 0 }), $tmp105, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp107 = $tmp102.start.value;
        panda$core$Int64 i106 = { $tmp107 };
        int64_t $tmp109 = $tmp102.end.value;
        int64_t $tmp110 = $tmp102.step.value;
        bool $tmp111 = $tmp102.inclusive.value;
        bool $tmp118 = $tmp110 > 0;
        if ($tmp118) goto $l116; else goto $l117;
        $l116:;
        if ($tmp111) goto $l119; else goto $l120;
        $l119:;
        if ($tmp107 <= $tmp109) goto $l112; else goto $l114;
        $l120:;
        if ($tmp107 < $tmp109) goto $l112; else goto $l114;
        $l117:;
        if ($tmp111) goto $l121; else goto $l122;
        $l121:;
        if ($tmp107 >= $tmp109) goto $l112; else goto $l114;
        $l122:;
        if ($tmp107 > $tmp109) goto $l112; else goto $l114;
        $l112:;
        {
            (($fn124) code84->$class->vtable[3])(code84, separator100);
            panda$core$Object* $tmp126 = (($fn125) p_t->subtypes->$class->vtable[2])(p_t->subtypes, i106);
            panda$core$String* $tmp127 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp126));
            (($fn128) code84->$class->vtable[3])(code84, $tmp127);
            separator100 = &$s129;
        }
        $l115:;
        if ($tmp118) goto $l131; else goto $l132;
        $l131:;
        int64_t $tmp133 = $tmp109 - i106.value;
        if ($tmp111) goto $l134; else goto $l135;
        $l134:;
        if ($tmp133 >= $tmp110) goto $l130; else goto $l114;
        $l135:;
        if ($tmp133 > $tmp110) goto $l130; else goto $l114;
        $l132:;
        int64_t $tmp137 = i106.value - $tmp109;
        if ($tmp111) goto $l138; else goto $l139;
        $l138:;
        if ($tmp137 >= -$tmp110) goto $l130; else goto $l114;
        $l139:;
        if ($tmp137 > -$tmp110) goto $l130; else goto $l114;
        $l130:;
        i106.value += $tmp110;
        goto $l112;
        $l114:;
        (($fn142) code84->$class->vtable[3])(code84, &$s141);
        (($fn143) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code84));
        return result79;
    }
    }
    panda$core$String* $tmp144 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self->hCodeGen, p_t);
    return $tmp144;
}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
    org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->hCodeGen, p_compiler);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp145 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp145;
    panda$core$String* $tmp147 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s146, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp147, &$s148);
    return $tmp149;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp150 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp150;
    panda$core$String* $tmp152 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s151, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp152, &$s153);
    return $tmp154;
}
void org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s155, p_label);
    panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp156, &$s157);
    (($fn159) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp158);
    self->currentBlock = p_label;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt) {
    panda$core$Int64 $match$7210160;
    {
        $match$7210160 = p_stmt->kind;
        panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7210160, ((panda$core$Int64) { 1000 }));
        if ($tmp161.value) {
        {
            panda$core$Int64 $tmp162 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp162, ((panda$core$Int64) { 0 }));
            if ($tmp163.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp164 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp165 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp164, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp166 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, $tmp165);
            panda$core$Bit $tmp167 = org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp166));
            return $tmp167;
        }
        }
        else {
        panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7210160, ((panda$core$Int64) { 1006 }));
        bool $tmp169 = $tmp170.value;
        if ($tmp169) goto $l171;
        panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7210160, ((panda$core$Int64) { 1007 }));
        $tmp169 = $tmp172.value;
        $l171:;
        panda$core$Bit $tmp173 = { $tmp169 };
        bool $tmp168 = $tmp173.value;
        if ($tmp168) goto $l174;
        panda$core$Bit $tmp175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7210160, ((panda$core$Int64) { 1008 }));
        $tmp168 = $tmp175.value;
        $l174:;
        panda$core$Bit $tmp176 = { $tmp168 };
        if ($tmp176.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        {
            return ((panda$core$Bit) { false });
        }
        }
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl188;
    panda$core$Int64 result199;
    panda$collections$Iterator* f$Iter200;
    org$pandalanguage$pandac$FieldDecl* f214;
    panda$core$Int64 size222;
    panda$core$Int64 align224;
    panda$core$Bit $tmp178 = (($fn177) p_t->$class->vtable[7])(p_t);
    if ($tmp178.value) {
    {
        panda$core$Bit $tmp180 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s179);
        if ($tmp180.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp182 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s181);
        if ($tmp182.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp184 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s183);
        if ($tmp184.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp185 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp187 = (($fn186) p_t->$class->vtable[4])(p_t, ((panda$core$Object*) $tmp185));
    if ($tmp187.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp190 = (($fn189) self->compiler->$class->vtable[14])(self->compiler, p_t);
    cl188 = $tmp190;
    panda$core$Bit $tmp193 = (($fn192) self->compiler->$class->vtable[9])(self->compiler, cl188);
    panda$core$Bit $tmp194 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp193);
    bool $tmp191 = $tmp194.value;
    if ($tmp191) goto $l195;
    panda$core$Bit $tmp197 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl188)->name, &$s196);
    $tmp191 = $tmp197.value;
    $l195:;
    panda$core$Bit $tmp198 = { $tmp191 };
    if ($tmp198.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result199 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp202 = (($fn201) self->compiler->$class->vtable[10])(self->compiler, cl188);
        ITable* $tmp203 = ((panda$collections$Iterable*) $tmp202)->$class->itable;
        while ($tmp203->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp203 = $tmp203->next;
        }
        $fn205 $tmp204 = $tmp203->methods[0];
        panda$collections$Iterator* $tmp206 = $tmp204(((panda$collections$Iterable*) $tmp202));
        f$Iter200 = $tmp206;
        $l207:;
        ITable* $tmp209 = f$Iter200->$class->itable;
        while ($tmp209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp209 = $tmp209->next;
        }
        $fn211 $tmp210 = $tmp209->methods[0];
        panda$core$Bit $tmp212 = $tmp210(f$Iter200);
        panda$core$Bit $tmp213 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp212);
        if (!$tmp213.value) goto $l208;
        {
            ITable* $tmp215 = f$Iter200->$class->itable;
            while ($tmp215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp215 = $tmp215->next;
            }
            $fn217 $tmp216 = $tmp215->methods[1];
            panda$core$Object* $tmp218 = $tmp216(f$Iter200);
            f214 = ((org$pandalanguage$pandac$FieldDecl*) $tmp218);
            panda$core$Bit $tmp220 = (($fn219) f214->annotations->$class->vtable[5])(f214->annotations);
            if ($tmp220.value) {
            {
                goto $l207;
            }
            }
            (($fn221) self->compiler->$class->vtable[7])(self->compiler, f214);
            panda$core$Int64 $tmp223 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f214->type);
            size222 = $tmp223;
            panda$core$Int64 $tmp225 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result199, size222);
            align224 = $tmp225;
            panda$core$Bit $tmp226 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align224, ((panda$core$Int64) { 0 }));
            if ($tmp226.value) {
            {
                panda$core$Int64 $tmp227 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size222, align224);
                panda$core$Int64 $tmp228 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result199, $tmp227);
                result199 = $tmp228;
            }
            }
            panda$core$Int64 $tmp229 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result199, size222);
            result199 = $tmp229;
        }
        goto $l207;
        $l208:;
    }
    panda$core$Bit $tmp230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp230.value) {
    {
        panda$core$Int64 $tmp231 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result199, ((panda$core$Int64) { 1 }));
        result199 = $tmp231;
    }
    }
    return result199;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp232 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp233 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp232, ((panda$core$Int64) { 8 }));
    return $tmp233;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl234;
    panda$core$Int64 result237;
    panda$collections$Iterator* f$Iter240;
    org$pandalanguage$pandac$FieldDecl* f254;
    panda$core$Int64 size260;
    panda$core$Int64 align262;
    org$pandalanguage$pandac$ClassDecl* $tmp236 = (($fn235) self->compiler->$class->vtable[14])(self->compiler, p_t);
    cl234 = $tmp236;
    org$pandalanguage$pandac$Type* $tmp238 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp239 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp238);
    result237 = $tmp239;
    {
        panda$collections$ListView* $tmp242 = (($fn241) self->compiler->$class->vtable[10])(self->compiler, cl234);
        ITable* $tmp243 = ((panda$collections$Iterable*) $tmp242)->$class->itable;
        while ($tmp243->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp243 = $tmp243->next;
        }
        $fn245 $tmp244 = $tmp243->methods[0];
        panda$collections$Iterator* $tmp246 = $tmp244(((panda$collections$Iterable*) $tmp242));
        f$Iter240 = $tmp246;
        $l247:;
        ITable* $tmp249 = f$Iter240->$class->itable;
        while ($tmp249->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp249 = $tmp249->next;
        }
        $fn251 $tmp250 = $tmp249->methods[0];
        panda$core$Bit $tmp252 = $tmp250(f$Iter240);
        panda$core$Bit $tmp253 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp252);
        if (!$tmp253.value) goto $l248;
        {
            ITable* $tmp255 = f$Iter240->$class->itable;
            while ($tmp255->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp255 = $tmp255->next;
            }
            $fn257 $tmp256 = $tmp255->methods[1];
            panda$core$Object* $tmp258 = $tmp256(f$Iter240);
            f254 = ((org$pandalanguage$pandac$FieldDecl*) $tmp258);
            (($fn259) self->compiler->$class->vtable[7])(self->compiler, f254);
            panda$core$Int64 $tmp261 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f254->type);
            size260 = $tmp261;
            panda$core$Int64 $tmp263 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result237, size260);
            align262 = $tmp263;
            panda$core$Bit $tmp264 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align262, ((panda$core$Int64) { 0 }));
            if ($tmp264.value) {
            {
                panda$core$Int64 $tmp265 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size260, align262);
                panda$core$Int64 $tmp266 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result237, $tmp265);
                result237 = $tmp266;
            }
            }
            panda$core$Int64 $tmp267 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result237, size260);
            result237 = $tmp267;
        }
        goto $l247;
        $l248:;
    }
    panda$core$Bit $tmp268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp268.value) {
    {
        panda$core$Int64 $tmp269 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result237, ((panda$core$Int64) { 1 }));
        result237 = $tmp269;
    }
    }
    return result237;
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp271 = (($fn270) self->writtenTypes->$class->vtable[7])(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp271.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp272 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    return $tmp272;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp273.value) {
    {
        panda$core$Object* $tmp275 = (($fn274) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp276 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp275));
        return $tmp276;
    }
    }
    panda$core$String* $tmp278 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s277, $tmp278);
    panda$core$String* $tmp281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp279, &$s280);
    return $tmp281;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp282 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp282, &$s283);
    return $tmp284;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType285;
    panda$core$MutableString* result288;
    panda$core$Range$LTpanda$core$Int64$GT $tmp312;
    org$pandalanguage$pandac$Type* $tmp287 = (($fn286) self->compiler->$class->vtable[46])(self->compiler, p_m);
    inheritedType285 = $tmp287;
    panda$core$MutableString* $tmp289 = (panda$core$MutableString*) malloc(40);
    $tmp289->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp289->refCount.value = 1;
    panda$core$MutableString$init($tmp289);
    result288 = $tmp289;
    panda$core$Int64 $tmp292 = (($fn291) inheritedType285->subtypes->$class->vtable[3])(inheritedType285->subtypes);
    panda$core$Int64 $tmp293 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp292, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp295 = (($fn294) inheritedType285->subtypes->$class->vtable[2])(inheritedType285->subtypes, $tmp293);
    panda$core$String* $tmp296 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp295));
    (($fn297) result288->$class->vtable[3])(result288, $tmp296);
    (($fn299) result288->$class->vtable[3])(result288, &$s298);
    panda$core$String* $tmp301 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s300, $tmp301);
    panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp302, &$s303);
    (($fn305) result288->$class->vtable[3])(result288, $tmp304);
    panda$core$Bit $tmp307 = (($fn306) self->compiler->$class->vtable[9])(self->compiler, p_m->owner);
    if ($tmp307.value) {
    {
        (($fn309) result288->$class->vtable[3])(result288, &$s308);
    }
    }
    (($fn311) result288->$class->vtable[3])(result288, &$s310);
    panda$core$Int64 $tmp314 = (($fn313) inheritedType285->subtypes->$class->vtable[3])(inheritedType285->subtypes);
    panda$core$Int64 $tmp315 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp314, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp312, ((panda$core$Int64) { 0 }), $tmp315, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp317 = $tmp312.start.value;
    panda$core$Int64 i316 = { $tmp317 };
    int64_t $tmp319 = $tmp312.end.value;
    int64_t $tmp320 = $tmp312.step.value;
    bool $tmp321 = $tmp312.inclusive.value;
    bool $tmp328 = $tmp320 > 0;
    if ($tmp328) goto $l326; else goto $l327;
    $l326:;
    if ($tmp321) goto $l329; else goto $l330;
    $l329:;
    if ($tmp317 <= $tmp319) goto $l322; else goto $l324;
    $l330:;
    if ($tmp317 < $tmp319) goto $l322; else goto $l324;
    $l327:;
    if ($tmp321) goto $l331; else goto $l332;
    $l331:;
    if ($tmp317 >= $tmp319) goto $l322; else goto $l324;
    $l332:;
    if ($tmp317 > $tmp319) goto $l322; else goto $l324;
    $l322:;
    {
        (($fn335) result288->$class->vtable[3])(result288, &$s334);
        panda$core$Object* $tmp337 = (($fn336) inheritedType285->subtypes->$class->vtable[2])(inheritedType285->subtypes, i316);
        panda$core$String* $tmp338 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp337));
        (($fn339) result288->$class->vtable[3])(result288, $tmp338);
    }
    $l325:;
    if ($tmp328) goto $l341; else goto $l342;
    $l341:;
    int64_t $tmp343 = $tmp319 - i316.value;
    if ($tmp321) goto $l344; else goto $l345;
    $l344:;
    if ($tmp343 >= $tmp320) goto $l340; else goto $l324;
    $l345:;
    if ($tmp343 > $tmp320) goto $l340; else goto $l324;
    $l342:;
    int64_t $tmp347 = i316.value - $tmp319;
    if ($tmp321) goto $l348; else goto $l349;
    $l348:;
    if ($tmp347 >= -$tmp320) goto $l340; else goto $l324;
    $l349:;
    if ($tmp347 > -$tmp320) goto $l340; else goto $l324;
    $l340:;
    i316.value += $tmp320;
    goto $l322;
    $l324:;
    (($fn352) result288->$class->vtable[3])(result288, &$s351);
    panda$core$String* $tmp354 = (($fn353) result288->$class->vtable[0])(result288);
    return $tmp354;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Object* $tmp357 = (($fn356) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp358 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp357));
    panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s355, $tmp358);
    panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp359, &$s360);
    return $tmp361;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces362;
    panda$core$String* previous367;
    panda$collections$Iterator* intfType$Iter369;
    org$pandalanguage$pandac$Type* intfType381;
    org$pandalanguage$pandac$ClassDecl* intf386;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC389;
    panda$collections$ListView* methods391;
    panda$core$String* name394;
    panda$core$MutableString* result404;
    panda$core$String* separator433;
    panda$collections$Iterator* m$Iter435;
    org$pandalanguage$pandac$MethodDecl* m447;
    org$pandalanguage$pandac$Type* $tmp364 = (($fn363) p_cl->$class->vtable[3])(p_cl);
    panda$collections$Set* $tmp366 = (($fn365) self->compiler->$class->vtable[15])(self->compiler, $tmp364);
    interfaces362 = $tmp366;
    previous367 = &$s368;
    {
        ITable* $tmp370 = ((panda$collections$Iterable*) interfaces362)->$class->itable;
        while ($tmp370->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp370 = $tmp370->next;
        }
        $fn372 $tmp371 = $tmp370->methods[0];
        panda$collections$Iterator* $tmp373 = $tmp371(((panda$collections$Iterable*) interfaces362));
        intfType$Iter369 = $tmp373;
        $l374:;
        ITable* $tmp376 = intfType$Iter369->$class->itable;
        while ($tmp376->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp376 = $tmp376->next;
        }
        $fn378 $tmp377 = $tmp376->methods[0];
        panda$core$Bit $tmp379 = $tmp377(intfType$Iter369);
        panda$core$Bit $tmp380 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp379);
        if (!$tmp380.value) goto $l375;
        {
            ITable* $tmp382 = intfType$Iter369->$class->itable;
            while ($tmp382->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp382 = $tmp382->next;
            }
            $fn384 $tmp383 = $tmp382->methods[1];
            panda$core$Object* $tmp385 = $tmp383(intfType$Iter369);
            intfType381 = ((org$pandalanguage$pandac$Type*) $tmp385);
            org$pandalanguage$pandac$ClassDecl* $tmp388 = (($fn387) self->compiler->$class->vtable[14])(self->compiler, intfType381);
            intf386 = $tmp388;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp390 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf386);
            intfCC389 = $tmp390;
            panda$collections$ListView* $tmp393 = (($fn392) self->compiler->$class->vtable[19])(self->compiler, p_cl, intfType381);
            methods391 = $tmp393;
            panda$core$String* $tmp396 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s395, $tmp396);
            panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp397, &$s398);
            panda$core$String* $tmp400 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf386)->name);
            panda$core$String* $tmp401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp399, $tmp400);
            panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp401, &$s402);
            name394 = $tmp403;
            panda$core$MutableString* $tmp405 = (panda$core$MutableString*) malloc(40);
            $tmp405->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp405->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp408 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp409 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp408);
            panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s407, $tmp409);
            panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp410, &$s411);
            ITable* $tmp414 = ((panda$collections$CollectionView*) methods391)->$class->itable;
            while ($tmp414->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp414 = $tmp414->next;
            }
            $fn416 $tmp415 = $tmp414->methods[0];
            panda$core$Int64 $tmp417 = $tmp415(((panda$collections$CollectionView*) methods391));
            panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s413, ((panda$core$Object*) wrap_panda$core$Int64($tmp417)));
            panda$core$String* $tmp420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp418, &$s419);
            panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp420, name394);
            panda$core$String* $tmp423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp421, &$s422);
            panda$core$String* $tmp424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp412, $tmp423);
            panda$core$String* $tmp426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s425, intfCC389->name);
            panda$core$String* $tmp428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp426, &$s427);
            panda$core$String* $tmp429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp428, previous367);
            panda$core$String* $tmp431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp429, &$s430);
            panda$core$String* $tmp432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp424, $tmp431);
            panda$core$MutableString$init$panda$core$String($tmp405, $tmp432);
            result404 = $tmp405;
            separator433 = &$s434;
            {
                ITable* $tmp436 = ((panda$collections$Iterable*) methods391)->$class->itable;
                while ($tmp436->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp436 = $tmp436->next;
                }
                $fn438 $tmp437 = $tmp436->methods[0];
                panda$collections$Iterator* $tmp439 = $tmp437(((panda$collections$Iterable*) methods391));
                m$Iter435 = $tmp439;
                $l440:;
                ITable* $tmp442 = m$Iter435->$class->itable;
                while ($tmp442->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp442 = $tmp442->next;
                }
                $fn444 $tmp443 = $tmp442->methods[0];
                panda$core$Bit $tmp445 = $tmp443(m$Iter435);
                panda$core$Bit $tmp446 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp445);
                if (!$tmp446.value) goto $l441;
                {
                    ITable* $tmp448 = m$Iter435->$class->itable;
                    while ($tmp448->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp448 = $tmp448->next;
                    }
                    $fn450 $tmp449 = $tmp448->methods[1];
                    panda$core$Object* $tmp451 = $tmp449(m$Iter435);
                    m447 = ((org$pandalanguage$pandac$MethodDecl*) $tmp451);
                    (($fn452) result404->$class->vtable[3])(result404, separator433);
                    separator433 = &$s453;
                    panda$core$Bit $tmp455 = (($fn454) m447->annotations->$class->vtable[10])(m447->annotations);
                    if ($tmp455.value) {
                    {
                        (($fn457) result404->$class->vtable[3])(result404, &$s456);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp458 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m447);
                        (($fn459) result404->$class->vtable[3])(result404, $tmp458);
                    }
                    }
                }
                goto $l440;
                $l441:;
            }
            (($fn461) result404->$class->vtable[3])(result404, &$s460);
            (($fn462) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result404));
            panda$core$String* $tmp464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s463, name394);
            panda$core$String* $tmp466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp464, &$s465);
            previous367 = $tmp466;
        }
        goto $l374;
        $l375:;
    }
    return previous367;
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer467;
    panda$io$IndentedOutputStream* out470;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found473;
    org$pandalanguage$pandac$Type* effectiveReturnType476;
    panda$core$String* resultName482;
    panda$core$MutableString* resultType486;
    panda$core$String* self_t498;
    panda$core$Range$LTpanda$core$Int64$GT $tmp508;
    panda$core$String* pType528;
    panda$collections$Array* casts559;
    panda$core$Range$LTpanda$core$Int64$GT $tmp562;
    panda$core$String* p582;
    panda$core$Range$LTpanda$core$Int64$GT $tmp622;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result674;
    panda$io$MemoryOutputStream* $tmp468 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp468->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp468->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp468);
    outBuffer467 = $tmp468;
    panda$io$IndentedOutputStream* $tmp471 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp471->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp471->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp471, ((panda$io$OutputStream*) outBuffer467));
    out470 = $tmp471;
    panda$core$Object* $tmp475 = (($fn474) self->methodShims->$class->vtable[3])(self->methodShims, ((panda$core$Object*) p_raw));
    found473 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp475);
    if (((panda$core$Bit) { found473 != NULL }).value) {
    {
        return found473;
    }
    }
    panda$core$Int64 $tmp478 = (($fn477) p_effective->subtypes->$class->vtable[3])(p_effective->subtypes);
    panda$core$Int64 $tmp479 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp478, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp481 = (($fn480) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, $tmp479);
    effectiveReturnType476 = ((org$pandalanguage$pandac$Type*) $tmp481);
    panda$core$String* $tmp483 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp483, &$s484);
    resultName482 = $tmp485;
    panda$core$MutableString* $tmp487 = (panda$core$MutableString*) malloc(40);
    $tmp487->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp487->refCount.value = 1;
    panda$core$String* $tmp489 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType476);
    panda$core$MutableString$init$panda$core$String($tmp487, $tmp489);
    resultType486 = $tmp487;
    panda$core$String* $tmp491 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s490, ((panda$core$Object*) resultType486));
    panda$core$String* $tmp493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp491, &$s492);
    panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp493, resultName482);
    panda$core$String* $tmp496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp494, &$s495);
    (($fn497) ((panda$io$OutputStream*) out470)->$class->vtable[16])(((panda$io$OutputStream*) out470), $tmp496);
    panda$core$String* $tmp499 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t498 = $tmp499;
    panda$core$String* $tmp501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s500, self_t498);
    panda$core$String* $tmp503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp501, &$s502);
    (($fn504) ((panda$io$OutputStream*) out470)->$class->vtable[16])(((panda$io$OutputStream*) out470), $tmp503);
    (($fn506) resultType486->$class->vtable[3])(resultType486, &$s505);
    (($fn507) resultType486->$class->vtable[3])(resultType486, self_t498);
    panda$core$Int64 $tmp509 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp508, ((panda$core$Int64) { 0 }), $tmp509, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp511 = $tmp508.start.value;
    panda$core$Int64 i510 = { $tmp511 };
    int64_t $tmp513 = $tmp508.end.value;
    int64_t $tmp514 = $tmp508.step.value;
    bool $tmp515 = $tmp508.inclusive.value;
    bool $tmp522 = $tmp514 > 0;
    if ($tmp522) goto $l520; else goto $l521;
    $l520:;
    if ($tmp515) goto $l523; else goto $l524;
    $l523:;
    if ($tmp511 <= $tmp513) goto $l516; else goto $l518;
    $l524:;
    if ($tmp511 < $tmp513) goto $l516; else goto $l518;
    $l521:;
    if ($tmp515) goto $l525; else goto $l526;
    $l525:;
    if ($tmp511 >= $tmp513) goto $l516; else goto $l518;
    $l526:;
    if ($tmp511 > $tmp513) goto $l516; else goto $l518;
    $l516:;
    {
        panda$core$Object* $tmp530 = (($fn529) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, i510);
        panda$core$String* $tmp531 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp530));
        pType528 = $tmp531;
        (($fn533) resultType486->$class->vtable[3])(resultType486, &$s532);
        (($fn534) resultType486->$class->vtable[3])(resultType486, pType528);
        panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s535, pType528);
        panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp536, &$s537);
        panda$core$String* $tmp539 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp538, ((panda$core$Object*) wrap_panda$core$Int64(i510)));
        panda$core$String* $tmp541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp539, &$s540);
        (($fn542) ((panda$io$OutputStream*) out470)->$class->vtable[16])(((panda$io$OutputStream*) out470), $tmp541);
    }
    $l519:;
    if ($tmp522) goto $l544; else goto $l545;
    $l544:;
    int64_t $tmp546 = $tmp513 - i510.value;
    if ($tmp515) goto $l547; else goto $l548;
    $l547:;
    if ($tmp546 >= $tmp514) goto $l543; else goto $l518;
    $l548:;
    if ($tmp546 > $tmp514) goto $l543; else goto $l518;
    $l545:;
    int64_t $tmp550 = i510.value - $tmp513;
    if ($tmp515) goto $l551; else goto $l552;
    $l551:;
    if ($tmp550 >= -$tmp514) goto $l543; else goto $l518;
    $l552:;
    if ($tmp550 > -$tmp514) goto $l543; else goto $l518;
    $l543:;
    i510.value += $tmp514;
    goto $l516;
    $l518:;
    (($fn555) ((panda$io$OutputStream*) out470)->$class->vtable[19])(((panda$io$OutputStream*) out470), &$s554);
    panda$core$Int64 $tmp556 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out470->level, ((panda$core$Int64) { 1 }));
    out470->level = $tmp556;
    (($fn558) resultType486->$class->vtable[3])(resultType486, &$s557);
    panda$collections$Array* $tmp560 = (panda$collections$Array*) malloc(40);
    $tmp560->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp560->refCount.value = 1;
    panda$collections$Array$init($tmp560);
    casts559 = $tmp560;
    panda$core$Int64 $tmp563 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp562, ((panda$core$Int64) { 0 }), $tmp563, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp565 = $tmp562.start.value;
    panda$core$Int64 i564 = { $tmp565 };
    int64_t $tmp567 = $tmp562.end.value;
    int64_t $tmp568 = $tmp562.step.value;
    bool $tmp569 = $tmp562.inclusive.value;
    bool $tmp576 = $tmp568 > 0;
    if ($tmp576) goto $l574; else goto $l575;
    $l574:;
    if ($tmp569) goto $l577; else goto $l578;
    $l577:;
    if ($tmp565 <= $tmp567) goto $l570; else goto $l572;
    $l578:;
    if ($tmp565 < $tmp567) goto $l570; else goto $l572;
    $l575:;
    if ($tmp569) goto $l579; else goto $l580;
    $l579:;
    if ($tmp565 >= $tmp567) goto $l570; else goto $l572;
    $l580:;
    if ($tmp565 > $tmp567) goto $l570; else goto $l572;
    $l570:;
    {
        panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s583, ((panda$core$Object*) wrap_panda$core$Int64(i564)));
        panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp584, &$s585);
        p582 = $tmp586;
        panda$core$Object* $tmp587 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i564);
        panda$core$Object* $tmp589 = (($fn588) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, i564);
        panda$core$Bit $tmp591 = (($fn590) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp587)->type->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp587)->type, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp589)));
        if ($tmp591.value) {
        {
            panda$core$Object* $tmp593 = (($fn592) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, i564);
            panda$core$Object* $tmp594 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i564);
            panda$core$String* $tmp595 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p582, ((org$pandalanguage$pandac$Type*) $tmp593), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp594)->type, out470);
            panda$collections$Array$add$panda$collections$Array$T(casts559, ((panda$core$Object*) $tmp595));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts559, ((panda$core$Object*) p582));
        }
        }
    }
    $l573:;
    if ($tmp576) goto $l597; else goto $l598;
    $l597:;
    int64_t $tmp599 = $tmp567 - i564.value;
    if ($tmp569) goto $l600; else goto $l601;
    $l600:;
    if ($tmp599 >= $tmp568) goto $l596; else goto $l572;
    $l601:;
    if ($tmp599 > $tmp568) goto $l596; else goto $l572;
    $l598:;
    int64_t $tmp603 = i564.value - $tmp567;
    if ($tmp569) goto $l604; else goto $l605;
    $l604:;
    if ($tmp603 >= -$tmp568) goto $l596; else goto $l572;
    $l605:;
    if ($tmp603 > -$tmp568) goto $l596; else goto $l572;
    $l596:;
    i564.value += $tmp568;
    goto $l570;
    $l572:;
    org$pandalanguage$pandac$Type* $tmp607 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp609 = (($fn608) p_raw->returnType->$class->vtable[5])(p_raw->returnType, ((panda$core$Object*) $tmp607));
    if ($tmp609.value) {
    {
        panda$core$String* $tmp611 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s610, $tmp611);
        panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp612, &$s613);
        (($fn615) ((panda$io$OutputStream*) out470)->$class->vtable[16])(((panda$io$OutputStream*) out470), $tmp614);
    }
    }
    panda$core$String* $tmp617 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s616, $tmp617);
    panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp618, &$s619);
    (($fn621) ((panda$io$OutputStream*) out470)->$class->vtable[16])(((panda$io$OutputStream*) out470), $tmp620);
    panda$core$Int64 $tmp623 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp622, ((panda$core$Int64) { 0 }), $tmp623, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp625 = $tmp622.start.value;
    panda$core$Int64 i624 = { $tmp625 };
    int64_t $tmp627 = $tmp622.end.value;
    int64_t $tmp628 = $tmp622.step.value;
    bool $tmp629 = $tmp622.inclusive.value;
    bool $tmp636 = $tmp628 > 0;
    if ($tmp636) goto $l634; else goto $l635;
    $l634:;
    if ($tmp629) goto $l637; else goto $l638;
    $l637:;
    if ($tmp625 <= $tmp627) goto $l630; else goto $l632;
    $l638:;
    if ($tmp625 < $tmp627) goto $l630; else goto $l632;
    $l635:;
    if ($tmp629) goto $l639; else goto $l640;
    $l639:;
    if ($tmp625 >= $tmp627) goto $l630; else goto $l632;
    $l640:;
    if ($tmp625 > $tmp627) goto $l630; else goto $l632;
    $l630:;
    {
        panda$core$Object* $tmp643 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts559, i624);
        panda$core$String* $tmp644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s642, ((panda$core$String*) $tmp643));
        panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp644, &$s645);
        (($fn647) ((panda$io$OutputStream*) out470)->$class->vtable[16])(((panda$io$OutputStream*) out470), $tmp646);
    }
    $l633:;
    if ($tmp636) goto $l649; else goto $l650;
    $l649:;
    int64_t $tmp651 = $tmp627 - i624.value;
    if ($tmp629) goto $l652; else goto $l653;
    $l652:;
    if ($tmp651 >= $tmp628) goto $l648; else goto $l632;
    $l653:;
    if ($tmp651 > $tmp628) goto $l648; else goto $l632;
    $l650:;
    int64_t $tmp655 = i624.value - $tmp627;
    if ($tmp629) goto $l656; else goto $l657;
    $l656:;
    if ($tmp655 >= -$tmp628) goto $l648; else goto $l632;
    $l657:;
    if ($tmp655 > -$tmp628) goto $l648; else goto $l632;
    $l648:;
    i624.value += $tmp628;
    goto $l630;
    $l632:;
    (($fn660) ((panda$io$OutputStream*) out470)->$class->vtable[19])(((panda$io$OutputStream*) out470), &$s659);
    org$pandalanguage$pandac$Type* $tmp661 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp663 = (($fn662) p_raw->returnType->$class->vtable[5])(p_raw->returnType, ((panda$core$Object*) $tmp661));
    if ($tmp663.value) {
    {
        panda$core$String* $tmp666 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s665, p_raw->returnType, effectiveReturnType476, out470);
        panda$core$String* $tmp667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s664, $tmp666);
        panda$core$String* $tmp669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp667, &$s668);
        (($fn670) ((panda$io$OutputStream*) out470)->$class->vtable[19])(((panda$io$OutputStream*) out470), $tmp669);
    }
    }
    panda$core$Int64 $tmp671 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out470->level, ((panda$core$Int64) { 1 }));
    out470->level = $tmp671;
    (($fn673) ((panda$io$OutputStream*) out470)->$class->vtable[19])(((panda$io$OutputStream*) out470), &$s672);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp675 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) malloc(32);
    $tmp675->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;
    $tmp675->refCount.value = 1;
    panda$core$String* $tmp678 = (($fn677) resultType486->$class->vtable[0])(resultType486);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp675, resultName482, $tmp678);
    result674 = $tmp675;
    (($fn679) self->methodShims->$class->vtable[5])(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result674));
    (($fn680) p_rawOut->$class->vtable[15])(p_rawOut, ((panda$core$Object*) outBuffer467));
    return result674;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod681;
    panda$core$String* result682;
    panda$core$String* selfType688;
    org$pandalanguage$pandac$Type* actualMethodType706;
    org$pandalanguage$pandac$Type* inheritedMethodType709;
    panda$core$Range$LTpanda$core$Int64$GT $tmp712;
    panda$collections$Array* parameters758;
    panda$core$Range$LTpanda$core$Int64$GT $tmp761;
    panda$collections$Array* children798;
    panda$core$Range$LTpanda$core$Int64$GT $tmp815;
    oldMethod681 = self->currentMethod;
    self->currentMethod = p_m;
    panda$core$String* $tmp684 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s683, $tmp684);
    panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp685, &$s686);
    result682 = $tmp687;
    panda$core$String* $tmp690 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s689, $tmp690);
    panda$core$String* $tmp693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp691, &$s692);
    selfType688 = $tmp693;
    panda$core$String* $tmp695 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s694, $tmp695);
    panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp696, &$s697);
    panda$core$String* $tmp699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp698, result682);
    panda$core$String* $tmp701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp699, &$s700);
    panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp701, selfType688);
    panda$core$String* $tmp704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp702, &$s703);
    (($fn705) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp704);
    org$pandalanguage$pandac$Type* $tmp708 = (($fn707) self->compiler->$class->vtable[44])(self->compiler, p_m);
    actualMethodType706 = $tmp708;
    org$pandalanguage$pandac$Type* $tmp711 = (($fn710) self->compiler->$class->vtable[46])(self->compiler, p_m);
    inheritedMethodType709 = $tmp711;
    panda$core$Int64 $tmp713 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp712, ((panda$core$Int64) { 0 }), $tmp713, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp715 = $tmp712.start.value;
    panda$core$Int64 i714 = { $tmp715 };
    int64_t $tmp717 = $tmp712.end.value;
    int64_t $tmp718 = $tmp712.step.value;
    bool $tmp719 = $tmp712.inclusive.value;
    bool $tmp726 = $tmp718 > 0;
    if ($tmp726) goto $l724; else goto $l725;
    $l724:;
    if ($tmp719) goto $l727; else goto $l728;
    $l727:;
    if ($tmp715 <= $tmp717) goto $l720; else goto $l722;
    $l728:;
    if ($tmp715 < $tmp717) goto $l720; else goto $l722;
    $l725:;
    if ($tmp719) goto $l729; else goto $l730;
    $l729:;
    if ($tmp715 >= $tmp717) goto $l720; else goto $l722;
    $l730:;
    if ($tmp715 > $tmp717) goto $l720; else goto $l722;
    $l720:;
    {
        panda$core$Object* $tmp734 = (($fn733) inheritedMethodType709->subtypes->$class->vtable[2])(inheritedMethodType709->subtypes, i714);
        panda$core$String* $tmp735 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp734));
        panda$core$String* $tmp736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s732, $tmp735);
        panda$core$String* $tmp738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp736, &$s737);
        panda$core$Object* $tmp739 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i714);
        panda$core$String* $tmp740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp738, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp739)->name);
        panda$core$String* $tmp742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp740, &$s741);
        (($fn743) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp742);
    }
    $l723:;
    if ($tmp726) goto $l745; else goto $l746;
    $l745:;
    int64_t $tmp747 = $tmp717 - i714.value;
    if ($tmp719) goto $l748; else goto $l749;
    $l748:;
    if ($tmp747 >= $tmp718) goto $l744; else goto $l722;
    $l749:;
    if ($tmp747 > $tmp718) goto $l744; else goto $l722;
    $l746:;
    int64_t $tmp751 = i714.value - $tmp717;
    if ($tmp719) goto $l752; else goto $l753;
    $l752:;
    if ($tmp751 >= -$tmp718) goto $l744; else goto $l722;
    $l753:;
    if ($tmp751 > -$tmp718) goto $l744; else goto $l722;
    $l744:;
    i714.value += $tmp718;
    goto $l720;
    $l722:;
    (($fn756) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s755);
    panda$core$Int64 $tmp757 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp757;
    panda$collections$Array* $tmp759 = (panda$collections$Array*) malloc(40);
    $tmp759->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp759->refCount.value = 1;
    panda$collections$Array$init($tmp759);
    parameters758 = $tmp759;
    panda$core$Int64 $tmp762 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp761, ((panda$core$Int64) { 0 }), $tmp762, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp764 = $tmp761.start.value;
    panda$core$Int64 i763 = { $tmp764 };
    int64_t $tmp766 = $tmp761.end.value;
    int64_t $tmp767 = $tmp761.step.value;
    bool $tmp768 = $tmp761.inclusive.value;
    bool $tmp775 = $tmp767 > 0;
    if ($tmp775) goto $l773; else goto $l774;
    $l773:;
    if ($tmp768) goto $l776; else goto $l777;
    $l776:;
    if ($tmp764 <= $tmp766) goto $l769; else goto $l771;
    $l777:;
    if ($tmp764 < $tmp766) goto $l769; else goto $l771;
    $l774:;
    if ($tmp768) goto $l778; else goto $l779;
    $l778:;
    if ($tmp764 >= $tmp766) goto $l769; else goto $l771;
    $l779:;
    if ($tmp764 > $tmp766) goto $l769; else goto $l771;
    $l769:;
    {
        panda$core$Object* $tmp781 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i763);
        panda$core$Object* $tmp783 = (($fn782) inheritedMethodType709->subtypes->$class->vtable[2])(inheritedMethodType709->subtypes, i763);
        panda$core$Object* $tmp785 = (($fn784) actualMethodType706->subtypes->$class->vtable[2])(actualMethodType706->subtypes, i763);
        panda$core$String* $tmp786 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp781)->name, ((org$pandalanguage$pandac$Type*) $tmp783), ((org$pandalanguage$pandac$Type*) $tmp785), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters758, ((panda$core$Object*) $tmp786));
    }
    $l772:;
    if ($tmp775) goto $l788; else goto $l789;
    $l788:;
    int64_t $tmp790 = $tmp766 - i763.value;
    if ($tmp768) goto $l791; else goto $l792;
    $l791:;
    if ($tmp790 >= $tmp767) goto $l787; else goto $l771;
    $l792:;
    if ($tmp790 > $tmp767) goto $l787; else goto $l771;
    $l789:;
    int64_t $tmp794 = i763.value - $tmp766;
    if ($tmp768) goto $l795; else goto $l796;
    $l795:;
    if ($tmp794 >= -$tmp767) goto $l787; else goto $l771;
    $l796:;
    if ($tmp794 > -$tmp767) goto $l787; else goto $l771;
    $l787:;
    i763.value += $tmp767;
    goto $l769;
    $l771:;
    panda$collections$Array* $tmp799 = (panda$collections$Array*) malloc(40);
    $tmp799->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp799->refCount.value = 1;
    panda$collections$Array$init($tmp799);
    children798 = $tmp799;
    org$pandalanguage$pandac$IRNode* $tmp801 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp801->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp801->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp803 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp801, ((panda$core$Int64) { 1025 }), ((panda$core$Int64) { -1 }), $tmp803);
    panda$collections$Array$add$panda$collections$Array$T(children798, ((panda$core$Object*) $tmp801));
    org$pandalanguage$pandac$Type* $tmp804 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp806 = (($fn805) p_m->returnType->$class->vtable[5])(p_m->returnType, ((panda$core$Object*) $tmp804));
    if ($tmp806.value) {
    {
        (($fn808) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s807);
    }
    }
    panda$core$String* $tmp810 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s809, $tmp810);
    panda$core$String* $tmp813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp811, &$s812);
    (($fn814) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp813);
    panda$core$Int64 $tmp816 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp815, ((panda$core$Int64) { 0 }), $tmp816, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp818 = $tmp815.start.value;
    panda$core$Int64 i817 = { $tmp818 };
    int64_t $tmp820 = $tmp815.end.value;
    int64_t $tmp821 = $tmp815.step.value;
    bool $tmp822 = $tmp815.inclusive.value;
    bool $tmp829 = $tmp821 > 0;
    if ($tmp829) goto $l827; else goto $l828;
    $l827:;
    if ($tmp822) goto $l830; else goto $l831;
    $l830:;
    if ($tmp818 <= $tmp820) goto $l823; else goto $l825;
    $l831:;
    if ($tmp818 < $tmp820) goto $l823; else goto $l825;
    $l828:;
    if ($tmp822) goto $l832; else goto $l833;
    $l832:;
    if ($tmp818 >= $tmp820) goto $l823; else goto $l825;
    $l833:;
    if ($tmp818 > $tmp820) goto $l823; else goto $l825;
    $l823:;
    {
        panda$core$Object* $tmp836 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters758, i817);
        panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s835, ((panda$core$String*) $tmp836));
        panda$core$String* $tmp839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp837, &$s838);
        (($fn840) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp839);
    }
    $l826:;
    if ($tmp829) goto $l842; else goto $l843;
    $l842:;
    int64_t $tmp844 = $tmp820 - i817.value;
    if ($tmp822) goto $l845; else goto $l846;
    $l845:;
    if ($tmp844 >= $tmp821) goto $l841; else goto $l825;
    $l846:;
    if ($tmp844 > $tmp821) goto $l841; else goto $l825;
    $l843:;
    int64_t $tmp848 = i817.value - $tmp820;
    if ($tmp822) goto $l849; else goto $l850;
    $l849:;
    if ($tmp848 >= -$tmp821) goto $l841; else goto $l825;
    $l850:;
    if ($tmp848 > -$tmp821) goto $l841; else goto $l825;
    $l841:;
    i817.value += $tmp821;
    goto $l823;
    $l825:;
    (($fn853) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s852);
    panda$core$Int64 $tmp854 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp854;
    (($fn856) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s855);
    self->currentMethod = oldMethod681;
    return result682;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces857;
    panda$core$String* previous862;
    panda$collections$Iterator* intfType$Iter864;
    org$pandalanguage$pandac$Type* intfType876;
    org$pandalanguage$pandac$ClassDecl* intf881;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC884;
    panda$collections$ListView* methods886;
    panda$core$String* name889;
    panda$core$MutableString* result899;
    panda$core$String* separator933;
    panda$collections$Iterator* m$Iter935;
    org$pandalanguage$pandac$MethodDecl* m947;
    org$pandalanguage$pandac$Type* $tmp859 = (($fn858) p_cl->$class->vtable[3])(p_cl);
    panda$collections$Set* $tmp861 = (($fn860) self->compiler->$class->vtable[15])(self->compiler, $tmp859);
    interfaces857 = $tmp861;
    previous862 = &$s863;
    {
        ITable* $tmp865 = ((panda$collections$Iterable*) interfaces857)->$class->itable;
        while ($tmp865->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp865 = $tmp865->next;
        }
        $fn867 $tmp866 = $tmp865->methods[0];
        panda$collections$Iterator* $tmp868 = $tmp866(((panda$collections$Iterable*) interfaces857));
        intfType$Iter864 = $tmp868;
        $l869:;
        ITable* $tmp871 = intfType$Iter864->$class->itable;
        while ($tmp871->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp871 = $tmp871->next;
        }
        $fn873 $tmp872 = $tmp871->methods[0];
        panda$core$Bit $tmp874 = $tmp872(intfType$Iter864);
        panda$core$Bit $tmp875 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp874);
        if (!$tmp875.value) goto $l870;
        {
            ITable* $tmp877 = intfType$Iter864->$class->itable;
            while ($tmp877->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp877 = $tmp877->next;
            }
            $fn879 $tmp878 = $tmp877->methods[1];
            panda$core$Object* $tmp880 = $tmp878(intfType$Iter864);
            intfType876 = ((org$pandalanguage$pandac$Type*) $tmp880);
            org$pandalanguage$pandac$ClassDecl* $tmp883 = (($fn882) self->compiler->$class->vtable[14])(self->compiler, intfType876);
            intf881 = $tmp883;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp885 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf881);
            intfCC884 = $tmp885;
            panda$collections$ListView* $tmp888 = (($fn887) self->compiler->$class->vtable[19])(self->compiler, p_cl, intfType876);
            methods886 = $tmp888;
            panda$core$String* $tmp891 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s890, $tmp891);
            panda$core$String* $tmp894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp892, &$s893);
            panda$core$String* $tmp895 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf881)->name);
            panda$core$String* $tmp896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp894, $tmp895);
            panda$core$String* $tmp898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp896, &$s897);
            name889 = $tmp898;
            panda$core$MutableString* $tmp900 = (panda$core$MutableString*) malloc(40);
            $tmp900->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp900->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp903 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp904 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp903);
            panda$core$String* $tmp905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s902, $tmp904);
            panda$core$String* $tmp907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp905, &$s906);
            ITable* $tmp909 = ((panda$collections$CollectionView*) methods886)->$class->itable;
            while ($tmp909->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp909 = $tmp909->next;
            }
            $fn911 $tmp910 = $tmp909->methods[0];
            panda$core$Int64 $tmp912 = $tmp910(((panda$collections$CollectionView*) methods886));
            panda$core$String* $tmp913 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s908, ((panda$core$Object*) wrap_panda$core$Int64($tmp912)));
            panda$core$String* $tmp915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp913, &$s914);
            panda$core$String* $tmp916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp915, name889);
            panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp916, &$s917);
            panda$core$String* $tmp919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp907, $tmp918);
            org$pandalanguage$pandac$Type* $tmp921 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp922 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp921);
            panda$core$String* $tmp923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s920, $tmp922);
            panda$core$String* $tmp925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp923, &$s924);
            panda$core$String* $tmp926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp925, intfCC884->name);
            panda$core$String* $tmp928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp926, &$s927);
            panda$core$String* $tmp929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp928, previous862);
            panda$core$String* $tmp931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp929, &$s930);
            panda$core$String* $tmp932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp919, $tmp931);
            panda$core$MutableString$init$panda$core$String($tmp900, $tmp932);
            result899 = $tmp900;
            separator933 = &$s934;
            {
                ITable* $tmp936 = ((panda$collections$Iterable*) methods886)->$class->itable;
                while ($tmp936->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp936 = $tmp936->next;
                }
                $fn938 $tmp937 = $tmp936->methods[0];
                panda$collections$Iterator* $tmp939 = $tmp937(((panda$collections$Iterable*) methods886));
                m$Iter935 = $tmp939;
                $l940:;
                ITable* $tmp942 = m$Iter935->$class->itable;
                while ($tmp942->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp942 = $tmp942->next;
                }
                $fn944 $tmp943 = $tmp942->methods[0];
                panda$core$Bit $tmp945 = $tmp943(m$Iter935);
                panda$core$Bit $tmp946 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp945);
                if (!$tmp946.value) goto $l941;
                {
                    ITable* $tmp948 = m$Iter935->$class->itable;
                    while ($tmp948->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp948 = $tmp948->next;
                    }
                    $fn950 $tmp949 = $tmp948->methods[1];
                    panda$core$Object* $tmp951 = $tmp949(m$Iter935);
                    m947 = ((org$pandalanguage$pandac$MethodDecl*) $tmp951);
                    (($fn952) result899->$class->vtable[3])(result899, separator933);
                    separator933 = &$s953;
                    panda$core$Bit $tmp955 = (($fn954) m947->annotations->$class->vtable[10])(m947->annotations);
                    if ($tmp955.value) {
                    {
                        (($fn957) result899->$class->vtable[3])(result899, &$s956);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp958 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m947, self->wrapperShims);
                        (($fn959) result899->$class->vtable[3])(result899, $tmp958);
                    }
                    }
                }
                goto $l940;
                $l941:;
            }
            (($fn961) result899->$class->vtable[3])(result899, &$s960);
            (($fn962) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result899));
            panda$core$String* $tmp964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s963, name889);
            panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp964, &$s965);
            previous862 = $tmp966;
        }
        goto $l869;
        $l870:;
    }
    return previous862;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp967 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp967;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result970;
    org$pandalanguage$pandac$Type* declared971;
    org$pandalanguage$pandac$Type* inherited976;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim981;
    (($fn968) self->compiler->$class->vtable[6])(self->compiler, p_m);
    panda$core$Bit $tmp969 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp969.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp973 = (($fn972) p_m->owner->$class->vtable[3])(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp975 = (($fn974) self->compiler->$class->vtable[45])(self->compiler, p_m, $tmp973);
    declared971 = $tmp975;
    org$pandalanguage$pandac$Type* $tmp978 = (($fn977) self->compiler->$class->vtable[47])(self->compiler, p_m);
    inherited976 = $tmp978;
    panda$core$Bit $tmp980 = (($fn979) declared971->$class->vtable[5])(declared971, ((panda$core$Object*) inherited976));
    if ($tmp980.value) {
    {
        org$pandalanguage$pandac$Type* $tmp983 = (($fn982) self->compiler->$class->vtable[46])(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp984 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp983, ((panda$io$OutputStream*) self->shims));
        shim981 = $tmp984;
        result970 = shim981->name;
    }
    }
    else {
    {
        panda$core$String* $tmp985 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        result970 = $tmp985;
    }
    }
    return result970;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result986;
    panda$core$String* type990;
    panda$collections$ListView* vtable1006;
    panda$core$String* superPtr1020;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC1021;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant1030;
    panda$core$MutableString* code1035;
    panda$core$String* separator1057;
    panda$collections$Iterator* m$Iter1059;
    org$pandalanguage$pandac$MethodDecl* m1071;
    panda$core$Object* $tmp988 = (($fn987) self->classConstants->$class->vtable[3])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)));
    result986 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp988);
    if (((panda$core$Bit) { result986 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        (($fn989) self->compiler->$class->vtable[5])(self->compiler, p_cl);
        panda$core$Bit $tmp991 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp991.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp992 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp992->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp992->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp996 = (($fn995) p_cl->$class->vtable[3])(p_cl);
            panda$core$String* $tmp997 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp996)->name);
            panda$core$String* $tmp998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s994, $tmp997);
            panda$core$String* $tmp1000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp998, &$s999);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp992, $tmp1000, &$s1001);
            result986 = $tmp992;
            (($fn1002) self->classConstants->$class->vtable[5])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)), ((panda$core$Object*) result986));
            panda$core$Object* $tmp1004 = (($fn1003) self->classConstants->$class->vtable[3])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)));
            return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1004);
        }
        }
        (($fn1005) self->compiler->currentClass->$class->vtable[2])(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp1008 = (($fn1007) self->compiler->$class->vtable[21])(self->compiler, p_cl);
        vtable1006 = $tmp1008;
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1009 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
        $tmp1009->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
        $tmp1009->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1013 = (($fn1012) p_cl->$class->vtable[3])(p_cl);
        panda$core$String* $tmp1014 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1013)->name);
        panda$core$String* $tmp1015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1011, $tmp1014);
        panda$core$String* $tmp1017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1015, &$s1016);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1009, $tmp1017, &$s1018);
        result986 = $tmp1009;
        (($fn1019) self->classConstants->$class->vtable[5])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)), ((panda$core$Object*) result986));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1023 = (($fn1022) self->compiler->$class->vtable[14])(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1024 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1023);
            superCC1021 = $tmp1024;
            panda$core$String* $tmp1026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1025, superCC1021->name);
            panda$core$String* $tmp1028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1026, &$s1027);
            superPtr1020 = $tmp1028;
        }
        }
        else {
        {
            superPtr1020 = &$s1029;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1031 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1033 = (($fn1032) self->compiler->$class->vtable[14])(self->compiler, $tmp1031);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1034 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1033);
        clConstant1030 = $tmp1034;
        panda$core$MutableString* $tmp1036 = (panda$core$MutableString*) malloc(40);
        $tmp1036->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1036->refCount.value = 1;
        panda$core$String* $tmp1039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1038, result986->name);
        panda$core$String* $tmp1041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1039, &$s1040);
        panda$core$String* $tmp1042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1041, result986->name);
        panda$core$String* $tmp1044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1042, &$s1043);
        panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1045, clConstant1030->name);
        panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1046, &$s1047);
        panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, superPtr1020);
        panda$core$String* $tmp1051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, &$s1050);
        panda$core$String* $tmp1052 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1051, $tmp1052);
        panda$core$String* $tmp1055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1053, &$s1054);
        panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1044, $tmp1055);
        panda$core$MutableString$init$panda$core$String($tmp1036, $tmp1056);
        code1035 = $tmp1036;
        separator1057 = &$s1058;
        {
            ITable* $tmp1060 = ((panda$collections$Iterable*) vtable1006)->$class->itable;
            while ($tmp1060->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1060 = $tmp1060->next;
            }
            $fn1062 $tmp1061 = $tmp1060->methods[0];
            panda$collections$Iterator* $tmp1063 = $tmp1061(((panda$collections$Iterable*) vtable1006));
            m$Iter1059 = $tmp1063;
            $l1064:;
            ITable* $tmp1066 = m$Iter1059->$class->itable;
            while ($tmp1066->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1066 = $tmp1066->next;
            }
            $fn1068 $tmp1067 = $tmp1066->methods[0];
            panda$core$Bit $tmp1069 = $tmp1067(m$Iter1059);
            panda$core$Bit $tmp1070 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1069);
            if (!$tmp1070.value) goto $l1065;
            {
                ITable* $tmp1072 = m$Iter1059->$class->itable;
                while ($tmp1072->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1072 = $tmp1072->next;
                }
                $fn1074 $tmp1073 = $tmp1072->methods[1];
                panda$core$Object* $tmp1075 = $tmp1073(m$Iter1059);
                m1071 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1075);
                (($fn1076) code1035->$class->vtable[3])(code1035, separator1057);
                panda$core$Bit $tmp1078 = (($fn1077) m1071->annotations->$class->vtable[10])(m1071->annotations);
                if ($tmp1078.value) {
                {
                    (($fn1080) code1035->$class->vtable[3])(code1035, &$s1079);
                }
                }
                else {
                {
                    panda$core$String* $tmp1081 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1071);
                    (($fn1082) code1035->$class->vtable[3])(code1035, $tmp1081);
                }
                }
                separator1057 = &$s1083;
            }
            goto $l1064;
            $l1065:;
        }
        (($fn1085) code1035->$class->vtable[3])(code1035, &$s1084);
        (($fn1086) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1035));
        (($fn1087) self->compiler->currentClass->$class->vtable[3])(self->compiler->currentClass);
    }
    }
    return result986;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1088;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result1094;
    panda$core$String* type1099;
    org$pandalanguage$pandac$ClassDecl* value1111;
    panda$collections$ListView* valueVTable1115;
    panda$collections$ListView* vtable1126;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC1129;
    panda$core$String* superCast1133;
    panda$core$String* itable1138;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant1140;
    panda$core$MutableString* code1145;
    panda$core$String* separator1166;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1168;
    org$pandalanguage$pandac$MethodDecl* m1191;
    panda$core$String* methodName1196;
    panda$core$String* $tmp1090 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1089, $tmp1090);
    panda$core$String* $tmp1093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1091, &$s1092);
    name1088 = $tmp1093;
    panda$core$Object* $tmp1096 = (($fn1095) self->classConstants->$class->vtable[3])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) name1088)));
    result1094 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1096);
    if (((panda$core$Bit) { result1094 == NULL }).value) {
    {
        panda$core$Bit $tmp1097 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp1097.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1098 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1098);
            type1099 = &$s1100;
            panda$core$String* $tmp1102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1101, name1088);
            panda$core$String* $tmp1104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1102, &$s1103);
            panda$core$String* $tmp1105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1104, type1099);
            panda$core$String* $tmp1107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1105, &$s1106);
            (($fn1108) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1107);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1109 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp1109->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp1109->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1109, name1088, type1099);
            result1094 = $tmp1109;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1112 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1114 = (($fn1113) self->compiler->$class->vtable[14])(self->compiler, $tmp1112);
            value1111 = $tmp1114;
            panda$collections$ListView* $tmp1117 = (($fn1116) self->compiler->$class->vtable[21])(self->compiler, value1111);
            valueVTable1115 = $tmp1117;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1118 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp1118->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp1118->refCount.value = 1;
            panda$core$String* $tmp1121 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1120, $tmp1121);
            panda$core$String* $tmp1124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1122, &$s1123);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1118, $tmp1124, &$s1125);
            result1094 = $tmp1118;
            panda$collections$ListView* $tmp1128 = (($fn1127) self->compiler->$class->vtable[21])(self->compiler, p_cl);
            vtable1126 = $tmp1128;
            org$pandalanguage$pandac$ClassDecl* $tmp1131 = (($fn1130) self->compiler->$class->vtable[14])(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1132 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1131);
            superCC1129 = $tmp1132;
            panda$core$String* $tmp1135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1134, superCC1129->name);
            panda$core$String* $tmp1137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1135, &$s1136);
            superCast1133 = $tmp1137;
            panda$core$String* $tmp1139 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1138 = $tmp1139;
            org$pandalanguage$pandac$Type* $tmp1141 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1143 = (($fn1142) self->compiler->$class->vtable[14])(self->compiler, $tmp1141);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1144 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1143);
            clConstant1140 = $tmp1144;
            panda$core$MutableString* $tmp1146 = (panda$core$MutableString*) malloc(40);
            $tmp1146->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1146->refCount.value = 1;
            panda$core$String* $tmp1149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1148, result1094->name);
            panda$core$String* $tmp1151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1149, &$s1150);
            panda$core$String* $tmp1152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1151, result1094->name);
            panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1152, &$s1153);
            panda$core$String* $tmp1156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1155, clConstant1140->name);
            panda$core$String* $tmp1158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1156, &$s1157);
            panda$core$String* $tmp1159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1158, superCast1133);
            panda$core$String* $tmp1161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1159, &$s1160);
            panda$core$String* $tmp1162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1161, itable1138);
            panda$core$String* $tmp1164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1162, &$s1163);
            panda$core$String* $tmp1165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1154, $tmp1164);
            panda$core$MutableString$init$panda$core$String($tmp1146, $tmp1165);
            code1145 = $tmp1146;
            separator1166 = &$s1167;
            ITable* $tmp1169 = ((panda$collections$CollectionView*) valueVTable1115)->$class->itable;
            while ($tmp1169->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1169 = $tmp1169->next;
            }
            $fn1171 $tmp1170 = $tmp1169->methods[0];
            panda$core$Int64 $tmp1172 = $tmp1170(((panda$collections$CollectionView*) valueVTable1115));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1168, ((panda$core$Int64) { 0 }), $tmp1172, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1174 = $tmp1168.start.value;
            panda$core$Int64 i1173 = { $tmp1174 };
            int64_t $tmp1176 = $tmp1168.end.value;
            int64_t $tmp1177 = $tmp1168.step.value;
            bool $tmp1178 = $tmp1168.inclusive.value;
            bool $tmp1185 = $tmp1177 > 0;
            if ($tmp1185) goto $l1183; else goto $l1184;
            $l1183:;
            if ($tmp1178) goto $l1186; else goto $l1187;
            $l1186:;
            if ($tmp1174 <= $tmp1176) goto $l1179; else goto $l1181;
            $l1187:;
            if ($tmp1174 < $tmp1176) goto $l1179; else goto $l1181;
            $l1184:;
            if ($tmp1178) goto $l1188; else goto $l1189;
            $l1188:;
            if ($tmp1174 >= $tmp1176) goto $l1179; else goto $l1181;
            $l1189:;
            if ($tmp1174 > $tmp1176) goto $l1179; else goto $l1181;
            $l1179:;
            {
                ITable* $tmp1192 = vtable1126->$class->itable;
                while ($tmp1192->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1192 = $tmp1192->next;
                }
                $fn1194 $tmp1193 = $tmp1192->methods[0];
                panda$core$Object* $tmp1195 = $tmp1193(vtable1126, i1173);
                m1191 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1195);
                if (((panda$core$Bit) { ((panda$core$Object*) m1191->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1197 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1191, self->wrapperShims);
                    methodName1196 = $tmp1197;
                }
                }
                else {
                {
                    panda$core$String* $tmp1198 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1191);
                    methodName1196 = $tmp1198;
                    panda$core$Bit $tmp1199 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1191->owner);
                    if ($tmp1199.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1191);
                    }
                    }
                }
                }
                panda$core$String* $tmp1201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1200, separator1166);
                panda$core$String* $tmp1203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1201, &$s1202);
                panda$core$String* $tmp1204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1203, methodName1196);
                panda$core$String* $tmp1206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1204, &$s1205);
                (($fn1207) code1145->$class->vtable[3])(code1145, $tmp1206);
                separator1166 = &$s1208;
            }
            $l1182:;
            if ($tmp1185) goto $l1210; else goto $l1211;
            $l1210:;
            int64_t $tmp1212 = $tmp1176 - i1173.value;
            if ($tmp1178) goto $l1213; else goto $l1214;
            $l1213:;
            if ($tmp1212 >= $tmp1177) goto $l1209; else goto $l1181;
            $l1214:;
            if ($tmp1212 > $tmp1177) goto $l1209; else goto $l1181;
            $l1211:;
            int64_t $tmp1216 = i1173.value - $tmp1176;
            if ($tmp1178) goto $l1217; else goto $l1218;
            $l1217:;
            if ($tmp1216 >= -$tmp1177) goto $l1209; else goto $l1181;
            $l1218:;
            if ($tmp1216 > -$tmp1177) goto $l1209; else goto $l1181;
            $l1209:;
            i1173.value += $tmp1177;
            goto $l1179;
            $l1181:;
            (($fn1221) code1145->$class->vtable[3])(code1145, &$s1220);
            (($fn1222) ((panda$io$OutputStream*) self->types)->$class->vtable[15])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1145));
        }
        }
        (($fn1223) self->classConstants->$class->vtable[5])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) name1088)), ((panda$core$Object*) result1094));
    }
    }
    return result1094;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1229;
    panda$core$Bit $tmp1224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1224.value) {
    {
        panda$core$String* $tmp1226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1225, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1226, &$s1227);
        return $tmp1228;
    }
    }
    panda$core$Object* $tmp1231 = (($fn1230) self->variableNames->$class->vtable[3])(self->variableNames, ((panda$core$Object*) p_v));
    result1229 = ((panda$core$String*) $tmp1231);
    if (((panda$core$Bit) { result1229 == NULL }).value) {
    {
        panda$core$Int64 $tmp1232 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1232;
        panda$core$String* $tmp1234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1233, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1234, &$s1235);
        panda$core$String* $tmp1237 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1236, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1237, &$s1238);
        result1229 = $tmp1239;
        (($fn1240) self->variableNames->$class->vtable[5])(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1229));
    }
    }
    return result1229;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$String* $tmp1242 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1241, $tmp1242);
    panda$core$String* $tmp1245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1243, &$s1244);
    panda$core$String* $tmp1246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1245, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1246, &$s1247);
    return $tmp1248;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$221411249;
    {
        $match$221411249 = p_t->typeKind;
        panda$core$Bit $tmp1250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$221411249, ((panda$core$Int64) { 12 }));
        if ($tmp1250.value) {
        {
            return ((panda$core$Int64) { 10121 });
        }
        }
        else {
        panda$core$Bit $tmp1252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$221411249, ((panda$core$Int64) { 13 }));
        bool $tmp1251 = $tmp1252.value;
        if ($tmp1251) goto $l1253;
        panda$core$Bit $tmp1254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$221411249, ((panda$core$Int64) { 19 }));
        $tmp1251 = $tmp1254.value;
        $l1253:;
        panda$core$Bit $tmp1255 = { $tmp1251 };
        if ($tmp1255.value) {
        {
            return ((panda$core$Int64) { 10122 });
        }
        }
        else {
        panda$core$Bit $tmp1256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$221411249, ((panda$core$Int64) { 20 }));
        if ($tmp1256.value) {
        {
            return ((panda$core$Int64) { 10123 });
        }
        }
        else {
        {
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1257;
    panda$core$String* leftRef1259;
    panda$core$String* falseLabel1274;
    panda$core$String* rightRef1284;
    panda$core$String* $tmp1258 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1257 = $tmp1258;
    panda$core$String* $tmp1260 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1259 = $tmp1260;
    org$pandalanguage$pandac$Type* $tmp1261 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1263 = (($fn1262) p_left->type->$class->vtable[4])(p_left->type, ((panda$core$Object*) $tmp1261));
    if ($tmp1263.value) {
    {
        panda$core$String* $tmp1265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1259, &$s1264);
        leftRef1259 = $tmp1265;
    }
    }
    panda$core$String* $tmp1267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1266, result1257);
    panda$core$String* $tmp1269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1267, &$s1268);
    panda$core$String* $tmp1270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1269, leftRef1259);
    panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1270, &$s1271);
    (($fn1273) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1272);
    panda$core$String* $tmp1275 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1274 = $tmp1275;
    panda$core$String* $tmp1277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1276, result1257);
    panda$core$String* $tmp1279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1277, &$s1278);
    panda$core$String* $tmp1280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1279, falseLabel1274);
    panda$core$String* $tmp1282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1280, &$s1281);
    (($fn1283) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1282);
    panda$core$String* $tmp1285 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1284 = $tmp1285;
    org$pandalanguage$pandac$Type* $tmp1286 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1288 = (($fn1287) p_right->type->$class->vtable[4])(p_right->type, ((panda$core$Object*) $tmp1286));
    if ($tmp1288.value) {
    {
        panda$core$String* $tmp1290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1284, &$s1289);
        rightRef1284 = $tmp1290;
    }
    }
    panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1291, result1257);
    panda$core$String* $tmp1294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1292, &$s1293);
    panda$core$String* $tmp1295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1294, rightRef1284);
    panda$core$String* $tmp1297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1295, &$s1296);
    (($fn1298) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1297);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1274, p_out);
    return result1257;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1299;
    panda$core$String* leftRef1301;
    panda$core$String* trueLabel1316;
    panda$core$String* rightRef1326;
    panda$core$String* $tmp1300 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1299 = $tmp1300;
    panda$core$String* $tmp1302 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1301 = $tmp1302;
    org$pandalanguage$pandac$Type* $tmp1303 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1305 = (($fn1304) p_left->type->$class->vtable[4])(p_left->type, ((panda$core$Object*) $tmp1303));
    if ($tmp1305.value) {
    {
        panda$core$String* $tmp1307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1301, &$s1306);
        leftRef1301 = $tmp1307;
    }
    }
    panda$core$String* $tmp1309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1308, result1299);
    panda$core$String* $tmp1311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1309, &$s1310);
    panda$core$String* $tmp1312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1311, leftRef1301);
    panda$core$String* $tmp1314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1312, &$s1313);
    (($fn1315) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1314);
    panda$core$String* $tmp1317 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1316 = $tmp1317;
    panda$core$String* $tmp1319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1318, result1299);
    panda$core$String* $tmp1321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1319, &$s1320);
    panda$core$String* $tmp1322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1321, trueLabel1316);
    panda$core$String* $tmp1324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1322, &$s1323);
    (($fn1325) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1324);
    panda$core$String* $tmp1327 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1326 = $tmp1327;
    org$pandalanguage$pandac$Type* $tmp1328 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1330 = (($fn1329) p_right->type->$class->vtable[4])(p_right->type, ((panda$core$Object*) $tmp1328));
    if ($tmp1330.value) {
    {
        panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1326, &$s1331);
        rightRef1326 = $tmp1332;
    }
    }
    panda$core$String* $tmp1334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1333, result1299);
    panda$core$String* $tmp1336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1334, &$s1335);
    panda$core$String* $tmp1337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1336, rightRef1326);
    panda$core$String* $tmp1339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1337, &$s1338);
    (($fn1340) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1339);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1316, p_out);
    return result1299;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Int64 p_cl, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1341;
    panda$core$Bit logical1342;
    panda$core$Int64 $match$240091343;
    panda$core$String* result1382;
    logical1342 = ((panda$core$Bit) { false });
    {
        $match$240091343 = p_op;
        panda$core$Bit $tmp1344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 51 }));
        if ($tmp1344.value) {
        {
            cOp1341 = &$s1345;
        }
        }
        else {
        panda$core$Bit $tmp1346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 52 }));
        if ($tmp1346.value) {
        {
            cOp1341 = &$s1347;
        }
        }
        else {
        panda$core$Bit $tmp1348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 53 }));
        if ($tmp1348.value) {
        {
            cOp1341 = &$s1349;
        }
        }
        else {
        panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 55 }));
        if ($tmp1350.value) {
        {
            cOp1341 = &$s1351;
        }
        }
        else {
        panda$core$Bit $tmp1352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 54 }));
        if ($tmp1352.value) {
        {
            cOp1341 = &$s1353;
        }
        }
        else {
        panda$core$Bit $tmp1354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 56 }));
        if ($tmp1354.value) {
        {
            cOp1341 = &$s1355;
        }
        }
        else {
        panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 72 }));
        if ($tmp1356.value) {
        {
            cOp1341 = &$s1357;
        }
        }
        else {
        panda$core$Bit $tmp1358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 1 }));
        if ($tmp1358.value) {
        {
            cOp1341 = &$s1359;
        }
        }
        else {
        panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 67 }));
        if ($tmp1360.value) {
        {
            cOp1341 = &$s1361;
        }
        }
        else {
        panda$core$Bit $tmp1362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 69 }));
        if ($tmp1362.value) {
        {
            cOp1341 = &$s1363;
        }
        }
        else {
        panda$core$Bit $tmp1365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 70 }));
        bool $tmp1364 = $tmp1365.value;
        if ($tmp1364) goto $l1366;
        panda$core$Bit $tmp1367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 71 }));
        $tmp1364 = $tmp1367.value;
        $l1366:;
        panda$core$Bit $tmp1368 = { $tmp1364 };
        if ($tmp1368.value) {
        {
            cOp1341 = &$s1369;
        }
        }
        else {
        panda$core$Bit $tmp1370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 58 }));
        if ($tmp1370.value) {
        {
            cOp1341 = &$s1371;
            logical1342 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 59 }));
        if ($tmp1372.value) {
        {
            cOp1341 = &$s1373;
            logical1342 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 63 }));
        if ($tmp1374.value) {
        {
            cOp1341 = &$s1375;
            logical1342 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 62 }));
        if ($tmp1376.value) {
        {
            cOp1341 = &$s1377;
            logical1342 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 65 }));
        if ($tmp1378.value) {
        {
            cOp1341 = &$s1379;
            logical1342 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091343, ((panda$core$Int64) { 64 }));
        if ($tmp1380.value) {
        {
            logical1342 = ((panda$core$Bit) { true });
            cOp1341 = &$s1381;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    panda$core$String* $tmp1383 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1382 = $tmp1383;
    if (logical1342.value) {
    {
        (($fn1385) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1384);
    }
    }
    else {
    {
        panda$core$String* $tmp1387 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1386, $tmp1387);
        panda$core$String* $tmp1390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1388, &$s1389);
        (($fn1391) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1390);
    }
    }
    panda$core$String* $tmp1393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1392, result1382);
    panda$core$String* $tmp1395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1393, &$s1394);
    panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1395, p_leftRef);
    panda$core$String* $tmp1398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1396, &$s1397);
    panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1398, cOp1341);
    panda$core$String* $tmp1401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1399, &$s1400);
    panda$core$String* $tmp1402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1401, p_rightRef);
    panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1402, &$s1403);
    (($fn1405) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1404);
    return result1382;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1406;
    panda$core$String* rightRef1408;
    panda$core$String* $tmp1407 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1406 = $tmp1407;
    panda$core$String* $tmp1409 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1408 = $tmp1409;
    panda$core$String* $tmp1411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1410, leftRef1406);
    panda$core$String* $tmp1413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1411, &$s1412);
    panda$core$String* $tmp1414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1413, rightRef1408);
    panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1414, &$s1415);
    return $tmp1416;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1417;
    panda$core$String* rightRef1419;
    panda$core$String* $tmp1418 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1417 = $tmp1418;
    panda$core$String* $tmp1420 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1419 = $tmp1420;
    panda$core$String* $tmp1422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1421, leftRef1417);
    panda$core$String* $tmp1424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1422, &$s1423);
    panda$core$String* $tmp1425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1424, rightRef1419);
    panda$core$String* $tmp1427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1425, &$s1426);
    return $tmp1427;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$262781428;
    panda$core$String* leftRef1437;
    panda$core$String* rightRef1439;
    {
        $match$262781428 = p_op;
        panda$core$Bit $tmp1429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$262781428, ((panda$core$Int64) { 66 }));
        if ($tmp1429.value) {
        {
            panda$core$String* $tmp1430 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1430;
        }
        }
        else {
        panda$core$Bit $tmp1431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$262781428, ((panda$core$Int64) { 68 }));
        if ($tmp1431.value) {
        {
            panda$core$String* $tmp1432 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1432;
        }
        }
        else {
        panda$core$Bit $tmp1433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$262781428, ((panda$core$Int64) { 60 }));
        if ($tmp1433.value) {
        {
            panda$core$String* $tmp1434 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1434;
        }
        }
        else {
        panda$core$Bit $tmp1435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$262781428, ((panda$core$Int64) { 61 }));
        if ($tmp1435.value) {
        {
            panda$core$String* $tmp1436 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1436;
        }
        }
        else {
        {
            panda$core$String* $tmp1438 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1437 = $tmp1438;
            panda$core$String* $tmp1440 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1439 = $tmp1440;
            panda$core$Int64 $tmp1441 = org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1442 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1441, p_left->type, leftRef1437, p_op, rightRef1439, p_out);
            return $tmp1442;
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp1443 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1444 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1445 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1443), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1444), p_out);
    return $tmp1445;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1446;
    panda$core$Int64 index1448;
    panda$collections$ListView* vtable1449;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1452;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1447 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1446 = $tmp1447;
    index1448 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1451 = (($fn1450) self->compiler->$class->vtable[21])(self->compiler, p_m->owner);
    vtable1449 = $tmp1451;
    ITable* $tmp1453 = ((panda$collections$CollectionView*) vtable1449)->$class->itable;
    while ($tmp1453->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1453 = $tmp1453->next;
    }
    $fn1455 $tmp1454 = $tmp1453->methods[0];
    panda$core$Int64 $tmp1456 = $tmp1454(((panda$collections$CollectionView*) vtable1449));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1452, ((panda$core$Int64) { 0 }), $tmp1456, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1458 = $tmp1452.start.value;
    panda$core$Int64 i1457 = { $tmp1458 };
    int64_t $tmp1460 = $tmp1452.end.value;
    int64_t $tmp1461 = $tmp1452.step.value;
    bool $tmp1462 = $tmp1452.inclusive.value;
    bool $tmp1469 = $tmp1461 > 0;
    if ($tmp1469) goto $l1467; else goto $l1468;
    $l1467:;
    if ($tmp1462) goto $l1470; else goto $l1471;
    $l1470:;
    if ($tmp1458 <= $tmp1460) goto $l1463; else goto $l1465;
    $l1471:;
    if ($tmp1458 < $tmp1460) goto $l1463; else goto $l1465;
    $l1468:;
    if ($tmp1462) goto $l1472; else goto $l1473;
    $l1472:;
    if ($tmp1458 >= $tmp1460) goto $l1463; else goto $l1465;
    $l1473:;
    if ($tmp1458 > $tmp1460) goto $l1463; else goto $l1465;
    $l1463:;
    {
        ITable* $tmp1475 = vtable1449->$class->itable;
        while ($tmp1475->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1475 = $tmp1475->next;
        }
        $fn1477 $tmp1476 = $tmp1475->methods[0];
        panda$core$Object* $tmp1478 = $tmp1476(vtable1449, i1457);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1478)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1448 = i1457;
            goto $l1465;
        }
        }
    }
    $l1466:;
    if ($tmp1469) goto $l1480; else goto $l1481;
    $l1480:;
    int64_t $tmp1482 = $tmp1460 - i1457.value;
    if ($tmp1462) goto $l1483; else goto $l1484;
    $l1483:;
    if ($tmp1482 >= $tmp1461) goto $l1479; else goto $l1465;
    $l1484:;
    if ($tmp1482 > $tmp1461) goto $l1479; else goto $l1465;
    $l1481:;
    int64_t $tmp1486 = i1457.value - $tmp1460;
    if ($tmp1462) goto $l1487; else goto $l1488;
    $l1487:;
    if ($tmp1486 >= -$tmp1461) goto $l1479; else goto $l1465;
    $l1488:;
    if ($tmp1486 > -$tmp1461) goto $l1479; else goto $l1465;
    $l1479:;
    i1457.value += $tmp1461;
    goto $l1463;
    $l1465:;
    org$pandalanguage$pandac$Type* $tmp1492 = (($fn1491) self->compiler->$class->vtable[47])(self->compiler, p_m);
    panda$core$String* $tmp1493 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1492);
    panda$core$String* $tmp1494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1490, $tmp1493);
    panda$core$String* $tmp1496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1494, &$s1495);
    panda$core$String* $tmp1497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1496, p_target);
    panda$core$String* $tmp1499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1497, &$s1498);
    panda$core$String* $tmp1500 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1499, ((panda$core$Object*) wrap_panda$core$Int64(index1448)));
    panda$core$String* $tmp1502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1500, &$s1501);
    return $tmp1502;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1503;
    panda$core$String* itable1505;
    panda$core$Int64 index1535;
    panda$collections$ListView* vtable1536;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1539;
    panda$core$String* result1587;
    panda$core$String* methodType1589;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1504 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1503 = $tmp1504;
    panda$core$String* $tmp1506 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1505 = $tmp1506;
    panda$core$String* $tmp1508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1507, itable1505);
    panda$core$String* $tmp1510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1508, &$s1509);
    panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1510, p_target);
    panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1511, &$s1512);
    (($fn1514) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1513);
    panda$core$String* $tmp1516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1515, itable1505);
    panda$core$String* $tmp1518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1516, &$s1517);
    panda$core$String* $tmp1519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1518, cc1503->name);
    panda$core$String* $tmp1521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1519, &$s1520);
    (($fn1522) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1521);
    panda$core$Int64 $tmp1523 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1523;
    panda$core$String* $tmp1525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1524, itable1505);
    panda$core$String* $tmp1527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1525, &$s1526);
    panda$core$String* $tmp1528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1527, itable1505);
    panda$core$String* $tmp1530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1528, &$s1529);
    (($fn1531) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1530);
    panda$core$Int64 $tmp1532 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1532;
    (($fn1534) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1533);
    index1535 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1538 = (($fn1537) self->compiler->$class->vtable[21])(self->compiler, p_m->owner);
    vtable1536 = $tmp1538;
    ITable* $tmp1540 = ((panda$collections$CollectionView*) vtable1536)->$class->itable;
    while ($tmp1540->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1540 = $tmp1540->next;
    }
    $fn1542 $tmp1541 = $tmp1540->methods[0];
    panda$core$Int64 $tmp1543 = $tmp1541(((panda$collections$CollectionView*) vtable1536));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1539, ((panda$core$Int64) { 0 }), $tmp1543, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1545 = $tmp1539.start.value;
    panda$core$Int64 i1544 = { $tmp1545 };
    int64_t $tmp1547 = $tmp1539.end.value;
    int64_t $tmp1548 = $tmp1539.step.value;
    bool $tmp1549 = $tmp1539.inclusive.value;
    bool $tmp1556 = $tmp1548 > 0;
    if ($tmp1556) goto $l1554; else goto $l1555;
    $l1554:;
    if ($tmp1549) goto $l1557; else goto $l1558;
    $l1557:;
    if ($tmp1545 <= $tmp1547) goto $l1550; else goto $l1552;
    $l1558:;
    if ($tmp1545 < $tmp1547) goto $l1550; else goto $l1552;
    $l1555:;
    if ($tmp1549) goto $l1559; else goto $l1560;
    $l1559:;
    if ($tmp1545 >= $tmp1547) goto $l1550; else goto $l1552;
    $l1560:;
    if ($tmp1545 > $tmp1547) goto $l1550; else goto $l1552;
    $l1550:;
    {
        ITable* $tmp1562 = vtable1536->$class->itable;
        while ($tmp1562->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1562 = $tmp1562->next;
        }
        $fn1564 $tmp1563 = $tmp1562->methods[0];
        panda$core$Object* $tmp1565 = $tmp1563(vtable1536, i1544);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1565)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1535 = i1544;
            goto $l1552;
        }
        }
    }
    $l1553:;
    if ($tmp1556) goto $l1567; else goto $l1568;
    $l1567:;
    int64_t $tmp1569 = $tmp1547 - i1544.value;
    if ($tmp1549) goto $l1570; else goto $l1571;
    $l1570:;
    if ($tmp1569 >= $tmp1548) goto $l1566; else goto $l1552;
    $l1571:;
    if ($tmp1569 > $tmp1548) goto $l1566; else goto $l1552;
    $l1568:;
    int64_t $tmp1573 = i1544.value - $tmp1547;
    if ($tmp1549) goto $l1574; else goto $l1575;
    $l1574:;
    if ($tmp1573 >= -$tmp1548) goto $l1566; else goto $l1552;
    $l1575:;
    if ($tmp1573 > -$tmp1548) goto $l1566; else goto $l1552;
    $l1566:;
    i1544.value += $tmp1548;
    goto $l1550;
    $l1552:;
    org$pandalanguage$pandac$Type* $tmp1577 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1579 = (($fn1578) self->compiler->$class->vtable[14])(self->compiler, $tmp1577);
    panda$collections$ListView* $tmp1581 = (($fn1580) self->compiler->$class->vtable[21])(self->compiler, $tmp1579);
    ITable* $tmp1582 = ((panda$collections$CollectionView*) $tmp1581)->$class->itable;
    while ($tmp1582->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1582 = $tmp1582->next;
    }
    $fn1584 $tmp1583 = $tmp1582->methods[0];
    panda$core$Int64 $tmp1585 = $tmp1583(((panda$collections$CollectionView*) $tmp1581));
    panda$core$Int64 $tmp1586 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1535, $tmp1585);
    index1535 = $tmp1586;
    panda$core$String* $tmp1588 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1587 = $tmp1588;
    org$pandalanguage$pandac$Type* $tmp1591 = (($fn1590) self->compiler->$class->vtable[47])(self->compiler, p_m);
    panda$core$String* $tmp1592 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1591);
    methodType1589 = $tmp1592;
    panda$core$String* $tmp1594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1593, methodType1589);
    panda$core$String* $tmp1596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1594, &$s1595);
    panda$core$String* $tmp1597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1596, result1587);
    panda$core$String* $tmp1599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1597, &$s1598);
    panda$core$String* $tmp1600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1599, itable1505);
    panda$core$String* $tmp1602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1600, &$s1601);
    panda$core$String* $tmp1603 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1602, ((panda$core$Object*) wrap_panda$core$Int64(index1535)));
    panda$core$String* $tmp1605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1603, &$s1604);
    (($fn1606) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1605);
    return result1587;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1608 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1607 = $tmp1608.value;
    if (!$tmp1607) goto $l1609;
    panda$core$Bit $tmp1611 = (($fn1610) p_m->$class->vtable[3])(p_m);
    $tmp1607 = $tmp1611.value;
    $l1609:;
    panda$core$Bit $tmp1612 = { $tmp1607 };
    if ($tmp1612.value) {
    {
        panda$core$Bit $tmp1613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp1613.value) {
        {
            panda$core$String* $tmp1614 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1614;
        }
        }
        else {
        {
            panda$core$String* $tmp1615 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1615;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1616 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1616.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1617 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1617;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m1618;
    panda$core$String* $match$294961619;
    panda$core$String* count1622;
    panda$core$Int64 elementSize1625;
    panda$core$String* ptr1644;
    panda$core$String* ptr1653;
    panda$core$String* index1656;
    panda$core$String* ptr1668;
    panda$core$String* count1671;
    panda$core$Int64 elementSize1674;
    panda$core$String* ptr1696;
    panda$core$String* offset1699;
    m1618 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$294961619 = ((org$pandalanguage$pandac$Symbol*) m1618->value)->name;
        panda$core$Bit $tmp1621 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$294961619, &$s1620);
        if ($tmp1621.value) {
        {
            panda$core$Object* $tmp1623 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1624 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1623), p_out);
            count1622 = $tmp1624;
            org$pandalanguage$pandac$Type* $tmp1627 = (($fn1626) m1618->$class->vtable[5])(m1618);
            panda$core$Object* $tmp1629 = (($fn1628) $tmp1627->subtypes->$class->vtable[2])($tmp1627->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1630 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1629));
            elementSize1625 = $tmp1630;
            panda$core$String* $tmp1632 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1631, $tmp1632);
            panda$core$String* $tmp1635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1633, &$s1634);
            panda$core$String* $tmp1636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1635, count1622);
            panda$core$String* $tmp1638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1636, &$s1637);
            panda$core$String* $tmp1639 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1638, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1625)));
            panda$core$String* $tmp1641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1639, &$s1640);
            return $tmp1641;
        }
        }
        else {
        panda$core$Bit $tmp1643 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$294961619, &$s1642);
        if ($tmp1643.value) {
        {
            panda$core$Object* $tmp1645 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1646 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1645), p_out);
            ptr1644 = $tmp1646;
            panda$core$String* $tmp1648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1647, ptr1644);
            panda$core$String* $tmp1650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1648, &$s1649);
            return $tmp1650;
        }
        }
        else {
        panda$core$Bit $tmp1652 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$294961619, &$s1651);
        if ($tmp1652.value) {
        {
            panda$core$Object* $tmp1654 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1655 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1654), p_out);
            ptr1653 = $tmp1655;
            panda$core$Object* $tmp1657 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1658 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1657), p_out);
            index1656 = $tmp1658;
            panda$core$String* $tmp1660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1659, ptr1653);
            panda$core$String* $tmp1662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1660, &$s1661);
            panda$core$String* $tmp1663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1662, index1656);
            panda$core$String* $tmp1665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1663, &$s1664);
            return $tmp1665;
        }
        }
        else {
        panda$core$Bit $tmp1667 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$294961619, &$s1666);
        if ($tmp1667.value) {
        {
            panda$core$Object* $tmp1669 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1670 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1669), p_out);
            ptr1668 = $tmp1670;
            panda$core$Object* $tmp1672 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1673 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1672), p_out);
            count1671 = $tmp1673;
            org$pandalanguage$pandac$Type* $tmp1676 = (($fn1675) m1618->$class->vtable[5])(m1618);
            panda$core$Object* $tmp1678 = (($fn1677) $tmp1676->subtypes->$class->vtable[2])($tmp1676->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1679 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1678));
            elementSize1674 = $tmp1679;
            panda$core$String* $tmp1681 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1680, $tmp1681);
            panda$core$String* $tmp1684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1682, &$s1683);
            panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1684, ptr1668);
            panda$core$String* $tmp1687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1685, &$s1686);
            panda$core$String* $tmp1688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1687, count1671);
            panda$core$String* $tmp1690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1688, &$s1689);
            panda$core$String* $tmp1691 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1690, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1674)));
            panda$core$String* $tmp1693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1691, &$s1692);
            return $tmp1693;
        }
        }
        else {
        panda$core$Bit $tmp1695 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$294961619, &$s1694);
        if ($tmp1695.value) {
        {
            panda$core$Object* $tmp1697 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1698 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1697), p_out);
            ptr1696 = $tmp1698;
            panda$core$Object* $tmp1700 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1701 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1700), p_out);
            offset1699 = $tmp1701;
            panda$core$String* $tmp1703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1702, ptr1696);
            panda$core$String* $tmp1705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1703, &$s1704);
            panda$core$String* $tmp1706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1705, offset1699);
            panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, &$s1707);
            return $tmp1708;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m1709;
    panda$core$String* bit1718;
    panda$core$String* result1722;
    panda$core$String* bit1734;
    panda$core$String* result1738;
    panda$collections$Array* args1748;
    org$pandalanguage$pandac$Type* actualMethodType1752;
    panda$core$String* actualResultType1753;
    panda$core$Bit isSuper1754;
    panda$core$Int64 offset1779;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1785;
    panda$core$String* arg1805;
    panda$core$String* target1834;
    panda$core$String* methodRef1838;
    panda$core$Bit indirect1840;
    panda$core$String* result1842;
    panda$core$String* separator1844;
    panda$core$String* indirectVar1846;
    panda$collections$Iterator* arg$Iter1875;
    panda$core$String* arg1887;
    m1709 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp1711 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1709->owner)->name, &$s1710);
    if ($tmp1711.value) {
    {
        panda$core$String* $tmp1712 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp1712;
    }
    }
    panda$core$Bit $tmp1713 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1709->owner);
    if ($tmp1713.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1709);
    }
    }
    panda$core$Bit $tmp1715 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1709->owner)->name, &$s1714);
    if ($tmp1715.value) {
    {
        panda$core$Bit $tmp1717 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1709)->name, &$s1716);
        if ($tmp1717.value) {
        {
            panda$core$Object* $tmp1719 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1720 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1721 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1719), ((org$pandalanguage$pandac$IRNode*) $tmp1720), p_out);
            bit1718 = $tmp1721;
            panda$core$String* $tmp1723 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1722 = $tmp1723;
            panda$core$String* $tmp1725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1724, result1722);
            panda$core$String* $tmp1727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1725, &$s1726);
            panda$core$String* $tmp1728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1727, bit1718);
            panda$core$String* $tmp1730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1728, &$s1729);
            (($fn1731) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1730);
            return result1722;
        }
        }
        panda$core$Bit $tmp1733 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1709)->name, &$s1732);
        if ($tmp1733.value) {
        {
            panda$core$Object* $tmp1735 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1736 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1737 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1735), ((org$pandalanguage$pandac$IRNode*) $tmp1736), p_out);
            bit1734 = $tmp1737;
            panda$core$String* $tmp1739 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1738 = $tmp1739;
            panda$core$String* $tmp1741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1740, result1738);
            panda$core$String* $tmp1743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1741, &$s1742);
            panda$core$String* $tmp1744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1743, bit1734);
            panda$core$String* $tmp1746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1744, &$s1745);
            (($fn1747) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1746);
            return result1738;
        }
        }
    }
    }
    panda$collections$Array* $tmp1749 = (panda$collections$Array*) malloc(40);
    $tmp1749->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1749->refCount.value = 1;
    panda$core$Int64 $tmp1751 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp1749, $tmp1751);
    args1748 = $tmp1749;
    panda$core$Int64 $tmp1756 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp1757 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1756, ((panda$core$Int64) { 1 }));
    bool $tmp1755 = $tmp1757.value;
    if (!$tmp1755) goto $l1758;
    panda$core$Object* $tmp1759 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1759)->kind, ((panda$core$Int64) { 1024 }));
    $tmp1755 = $tmp1760.value;
    $l1758:;
    panda$core$Bit $tmp1761 = { $tmp1755 };
    isSuper1754 = $tmp1761;
    panda$core$Bit $tmp1763 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1754);
    bool $tmp1762 = $tmp1763.value;
    if (!$tmp1762) goto $l1764;
    panda$core$Bit $tmp1766 = (($fn1765) m1709->$class->vtable[3])(m1709);
    $tmp1762 = $tmp1766.value;
    $l1764:;
    panda$core$Bit $tmp1767 = { $tmp1762 };
    if ($tmp1767.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1769 = (($fn1768) self->compiler->$class->vtable[46])(self->compiler, m1709);
        actualMethodType1752 = $tmp1769;
        panda$core$Int64 $tmp1771 = (($fn1770) actualMethodType1752->subtypes->$class->vtable[3])(actualMethodType1752->subtypes);
        panda$core$Int64 $tmp1772 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1771, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1774 = (($fn1773) actualMethodType1752->subtypes->$class->vtable[2])(actualMethodType1752->subtypes, $tmp1772);
        panda$core$String* $tmp1775 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1774));
        actualResultType1753 = $tmp1775;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1777 = (($fn1776) self->compiler->$class->vtable[44])(self->compiler, m1709);
        actualMethodType1752 = $tmp1777;
        panda$core$String* $tmp1778 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType1753 = $tmp1778;
    }
    }
    panda$core$Int64 $tmp1780 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp1782 = (($fn1781) actualMethodType1752->subtypes->$class->vtable[3])(actualMethodType1752->subtypes);
    panda$core$Int64 $tmp1783 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1780, $tmp1782);
    panda$core$Int64 $tmp1784 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1783, ((panda$core$Int64) { 1 }));
    offset1779 = $tmp1784;
    panda$core$Int64 $tmp1786 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1785, ((panda$core$Int64) { 0 }), $tmp1786, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1788 = $tmp1785.start.value;
    panda$core$Int64 i1787 = { $tmp1788 };
    int64_t $tmp1790 = $tmp1785.end.value;
    int64_t $tmp1791 = $tmp1785.step.value;
    bool $tmp1792 = $tmp1785.inclusive.value;
    bool $tmp1799 = $tmp1791 > 0;
    if ($tmp1799) goto $l1797; else goto $l1798;
    $l1797:;
    if ($tmp1792) goto $l1800; else goto $l1801;
    $l1800:;
    if ($tmp1788 <= $tmp1790) goto $l1793; else goto $l1795;
    $l1801:;
    if ($tmp1788 < $tmp1790) goto $l1793; else goto $l1795;
    $l1798:;
    if ($tmp1792) goto $l1802; else goto $l1803;
    $l1802:;
    if ($tmp1788 >= $tmp1790) goto $l1793; else goto $l1795;
    $l1803:;
    if ($tmp1788 > $tmp1790) goto $l1793; else goto $l1795;
    $l1793:;
    {
        panda$core$Object* $tmp1806 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1787);
        panda$core$String* $tmp1807 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1806), p_out);
        arg1805 = $tmp1807;
        panda$core$Bit $tmp1809 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1787, offset1779);
        bool $tmp1808 = $tmp1809.value;
        if (!$tmp1808) goto $l1810;
        panda$core$Int64 $tmp1811 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1787, offset1779);
        panda$core$Object* $tmp1813 = (($fn1812) actualMethodType1752->subtypes->$class->vtable[2])(actualMethodType1752->subtypes, $tmp1811);
        panda$core$Object* $tmp1814 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1787);
        panda$core$Bit $tmp1816 = (($fn1815) ((org$pandalanguage$pandac$Type*) $tmp1813)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp1813), ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1814)->type));
        $tmp1808 = $tmp1816.value;
        $l1810:;
        panda$core$Bit $tmp1817 = { $tmp1808 };
        if ($tmp1817.value) {
        {
            panda$core$Object* $tmp1818 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1787);
            panda$core$Int64 $tmp1819 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1787, offset1779);
            panda$core$Object* $tmp1821 = (($fn1820) actualMethodType1752->subtypes->$class->vtable[2])(actualMethodType1752->subtypes, $tmp1819);
            panda$core$String* $tmp1822 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1805, ((org$pandalanguage$pandac$IRNode*) $tmp1818)->type, ((org$pandalanguage$pandac$Type*) $tmp1821), p_out);
            arg1805 = $tmp1822;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1748, ((panda$core$Object*) arg1805));
    }
    $l1796:;
    if ($tmp1799) goto $l1824; else goto $l1825;
    $l1824:;
    int64_t $tmp1826 = $tmp1790 - i1787.value;
    if ($tmp1792) goto $l1827; else goto $l1828;
    $l1827:;
    if ($tmp1826 >= $tmp1791) goto $l1823; else goto $l1795;
    $l1828:;
    if ($tmp1826 > $tmp1791) goto $l1823; else goto $l1795;
    $l1825:;
    int64_t $tmp1830 = i1787.value - $tmp1790;
    if ($tmp1792) goto $l1831; else goto $l1832;
    $l1831:;
    if ($tmp1830 >= -$tmp1791) goto $l1823; else goto $l1795;
    $l1832:;
    if ($tmp1830 > -$tmp1791) goto $l1823; else goto $l1795;
    $l1823:;
    i1787.value += $tmp1791;
    goto $l1793;
    $l1795:;
    panda$core$Int64 $tmp1835 = panda$collections$Array$get_count$R$panda$core$Int64(args1748);
    panda$core$Bit $tmp1836 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1835, ((panda$core$Int64) { 0 }));
    if ($tmp1836.value) {
    {
        panda$core$Object* $tmp1837 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args1748, ((panda$core$Int64) { 0 }));
        target1834 = ((panda$core$String*) $tmp1837);
    }
    }
    else {
    {
        target1834 = NULL;
    }
    }
    panda$core$String* $tmp1839 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1834, m1709, isSuper1754, p_out);
    methodRef1838 = $tmp1839;
    panda$core$Bit $tmp1841 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1709);
    indirect1840 = $tmp1841;
    panda$core$String* $tmp1843 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1842 = $tmp1843;
    separator1844 = &$s1845;
    if (indirect1840.value) {
    {
        panda$core$String* $tmp1848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1847, actualResultType1753);
        panda$core$String* $tmp1850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1848, &$s1849);
        panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1850, result1842);
        panda$core$String* $tmp1853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1851, &$s1852);
        (($fn1854) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1853);
        panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1855, methodRef1838);
        panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, &$s1857);
        panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, result1842);
        panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, &$s1860);
        (($fn1862) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1861);
        separator1844 = &$s1863;
    }
    }
    else {
    {
        panda$core$String* $tmp1865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1864, actualResultType1753);
        panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1865, &$s1866);
        panda$core$String* $tmp1868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1867, result1842);
        panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1868, &$s1869);
        panda$core$String* $tmp1871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1870, methodRef1838);
        panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1871, &$s1872);
        (($fn1874) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1873);
    }
    }
    {
        ITable* $tmp1876 = ((panda$collections$Iterable*) args1748)->$class->itable;
        while ($tmp1876->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1876 = $tmp1876->next;
        }
        $fn1878 $tmp1877 = $tmp1876->methods[0];
        panda$collections$Iterator* $tmp1879 = $tmp1877(((panda$collections$Iterable*) args1748));
        arg$Iter1875 = $tmp1879;
        $l1880:;
        ITable* $tmp1882 = arg$Iter1875->$class->itable;
        while ($tmp1882->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1882 = $tmp1882->next;
        }
        $fn1884 $tmp1883 = $tmp1882->methods[0];
        panda$core$Bit $tmp1885 = $tmp1883(arg$Iter1875);
        panda$core$Bit $tmp1886 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1885);
        if (!$tmp1886.value) goto $l1881;
        {
            ITable* $tmp1888 = arg$Iter1875->$class->itable;
            while ($tmp1888->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1888 = $tmp1888->next;
            }
            $fn1890 $tmp1889 = $tmp1888->methods[1];
            panda$core$Object* $tmp1891 = $tmp1889(arg$Iter1875);
            arg1887 = ((panda$core$String*) $tmp1891);
            panda$core$String* $tmp1893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1892, separator1844);
            panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1893, &$s1894);
            panda$core$String* $tmp1896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1895, arg1887);
            panda$core$String* $tmp1898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1896, &$s1897);
            (($fn1899) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1898);
            separator1844 = &$s1900;
        }
        goto $l1880;
        $l1881:;
    }
    (($fn1902) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1901);
    panda$core$String* $tmp1903 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp1904 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1903, actualResultType1753);
    if ($tmp1904.value) {
    {
        panda$core$Int64 $tmp1906 = (($fn1905) actualMethodType1752->subtypes->$class->vtable[3])(actualMethodType1752->subtypes);
        panda$core$Int64 $tmp1907 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1906, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1909 = (($fn1908) actualMethodType1752->subtypes->$class->vtable[2])(actualMethodType1752->subtypes, $tmp1907);
        panda$core$String* $tmp1910 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1842, ((org$pandalanguage$pandac$Type*) $tmp1909), p_call->type, p_out);
        return $tmp1910;
    }
    }
    return result1842;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1912;
    panda$core$String* nonNullValue1916;
    panda$core$String* wrapped1927;
    panda$core$Bit $tmp1911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1911.value) {
    {
        panda$core$Object* $tmp1914 = (($fn1913) p_srcType->subtypes->$class->vtable[2])(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1915 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1914), p_out);
        unwrapped1912 = $tmp1915;
        panda$core$Object* $tmp1918 = (($fn1917) p_srcType->subtypes->$class->vtable[2])(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1919 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1912, ((org$pandalanguage$pandac$Type*) $tmp1918), p_dstType, p_out);
        nonNullValue1916 = $tmp1919;
        panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1920, p_value);
        panda$core$String* $tmp1923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1921, &$s1922);
        panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1923, nonNullValue1916);
        panda$core$String* $tmp1926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1924, &$s1925);
        return $tmp1926;
    }
    }
    panda$core$String* $tmp1929 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1928, $tmp1929);
    panda$core$String* $tmp1932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1930, &$s1931);
    org$pandalanguage$pandac$ClassDecl* $tmp1934 = (($fn1933) self->compiler->$class->vtable[14])(self->compiler, p_srcType);
    panda$core$String* $tmp1935 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1934)->name);
    panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1932, $tmp1935);
    panda$core$String* $tmp1938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1936, &$s1937);
    panda$core$String* $tmp1940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1939, p_value);
    panda$core$String* $tmp1942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1940, &$s1941);
    panda$core$String* $tmp1943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1938, $tmp1942);
    wrapped1927 = $tmp1943;
    panda$core$Bit $tmp1944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1944.value) {
    {
        panda$core$String* $tmp1946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1945, p_value);
        panda$core$String* $tmp1948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1946, &$s1947);
        panda$core$String* $tmp1949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1948, wrapped1927);
        panda$core$String* $tmp1951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1949, &$s1950);
        return $tmp1951;
    }
    }
    return wrapped1927;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field1952;
    org$pandalanguage$pandac$ClassDecl* cl1956;
    panda$core$String* base1960;
    field1952 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$Bit $tmp1954 = (($fn1953) field1952->annotations->$class->vtable[5])(field1952->annotations);
    if ($tmp1954.value) {
    {
        panda$core$String* $tmp1955 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field1952->value, p_out);
        return $tmp1955;
    }
    }
    panda$core$Object* $tmp1957 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1959 = (($fn1958) self->compiler->$class->vtable[14])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1957)->type);
    cl1956 = $tmp1959;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1956);
    panda$core$Object* $tmp1961 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1962 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1961), p_out);
    base1960 = $tmp1962;
    panda$core$Bit $tmp1964 = (($fn1963) self->compiler->$class->vtable[9])(self->compiler, cl1956);
    if ($tmp1964.value) {
    {
        panda$core$String* $tmp1966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1965, base1960);
        panda$core$String* $tmp1968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1966, &$s1967);
        panda$core$String* $tmp1969 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1952)->name);
        panda$core$String* $tmp1970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1968, $tmp1969);
        panda$core$String* $tmp1972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1970, &$s1971);
        return $tmp1972;
    }
    }
    panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1973, base1960);
    panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1974, &$s1975);
    panda$core$String* $tmp1977 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1952)->name);
    panda$core$String* $tmp1978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1976, $tmp1977);
    panda$core$String* $tmp1980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1978, &$s1979);
    return $tmp1980;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1981;
    panda$core$String* wrapped1991;
    panda$core$String* nonNullValue1995;
    panda$core$String* $tmp1983 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1982, $tmp1983);
    panda$core$String* $tmp1986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1984, &$s1985);
    panda$core$String* $tmp1987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1986, p_value);
    panda$core$String* $tmp1989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1987, &$s1988);
    result1981 = $tmp1989;
    panda$core$Bit $tmp1990 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1990.value) {
    {
        panda$core$Object* $tmp1993 = (($fn1992) p_dstType->subtypes->$class->vtable[2])(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1994 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1993), p_out);
        wrapped1991 = $tmp1994;
        panda$core$Object* $tmp1997 = (($fn1996) p_dstType->subtypes->$class->vtable[2])(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1998 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1991, ((org$pandalanguage$pandac$Type*) $tmp1997), p_dstType, p_out);
        nonNullValue1995 = $tmp1998;
        panda$core$String* $tmp2000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1999, p_value);
        panda$core$String* $tmp2002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2000, &$s2001);
        panda$core$String* $tmp2003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2002, nonNullValue1995);
        panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2003, &$s2004);
        panda$core$String* $tmp2006 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp2007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2005, $tmp2006);
        panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2007, &$s2008);
        return $tmp2009;
    }
    }
    return result1981;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2011 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp2012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2010, $tmp2011);
    panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2012, &$s2013);
    panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, p_value);
    panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, &$s2016);
    return $tmp2017;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2019 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2018, $tmp2019);
    panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2020, &$s2021);
    panda$core$String* $tmp2023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2022, p_value);
    panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2023, &$s2024);
    return $tmp2025;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op2026;
    org$pandalanguage$pandac$ClassDecl* srcClass2037;
    org$pandalanguage$pandac$ClassDecl* targetClass2040;
    panda$core$String* srcType2090;
    panda$core$String* dstType2092;
    panda$core$Bit $tmp2028 = (($fn2027) p_target->$class->vtable[7])(p_target);
    if ($tmp2028.value) {
    {
        panda$core$String* $tmp2030 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2029, $tmp2030);
        panda$core$String* $tmp2033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2031, &$s2032);
        panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2033, p_value);
        panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2034, &$s2035);
        return $tmp2036;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2039 = (($fn2038) self->compiler->$class->vtable[14])(self->compiler, p_src);
        srcClass2037 = $tmp2039;
        org$pandalanguage$pandac$ClassDecl* $tmp2042 = (($fn2041) self->compiler->$class->vtable[14])(self->compiler, p_target);
        targetClass2040 = $tmp2042;
        panda$core$Bit $tmp2045 = (($fn2044) self->compiler->$class->vtable[9])(self->compiler, srcClass2037);
        bool $tmp2043 = $tmp2045.value;
        if (!$tmp2043) goto $l2046;
        panda$core$Bit $tmp2048 = (($fn2047) self->compiler->$class->vtable[9])(self->compiler, targetClass2040);
        panda$core$Bit $tmp2049 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2048);
        $tmp2043 = $tmp2049.value;
        $l2046:;
        panda$core$Bit $tmp2050 = { $tmp2043 };
        if ($tmp2050.value) {
        {
            panda$core$String* $tmp2051 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2051;
        }
        }
        else {
        panda$core$Bit $tmp2054 = (($fn2053) self->compiler->$class->vtable[9])(self->compiler, srcClass2037);
        panda$core$Bit $tmp2055 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2054);
        bool $tmp2052 = $tmp2055.value;
        if (!$tmp2052) goto $l2056;
        panda$core$Bit $tmp2058 = (($fn2057) self->compiler->$class->vtable[9])(self->compiler, targetClass2040);
        $tmp2052 = $tmp2058.value;
        $l2056:;
        panda$core$Bit $tmp2059 = { $tmp2052 };
        if ($tmp2059.value) {
        {
            panda$core$String* $tmp2060 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2060;
        }
        }
        else {
        panda$core$Bit $tmp2064 = (($fn2063) self->compiler->$class->vtable[9])(self->compiler, srcClass2037);
        bool $tmp2062 = $tmp2064.value;
        if (!$tmp2062) goto $l2065;
        panda$core$Bit $tmp2066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp2062 = $tmp2066.value;
        $l2065:;
        panda$core$Bit $tmp2067 = { $tmp2062 };
        bool $tmp2061 = $tmp2067.value;
        if (!$tmp2061) goto $l2068;
        panda$core$Object* $tmp2070 = (($fn2069) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2072 = (($fn2071) ((org$pandalanguage$pandac$Type*) $tmp2070)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp2070), ((panda$core$Object*) p_src));
        $tmp2061 = $tmp2072.value;
        $l2068:;
        panda$core$Bit $tmp2073 = { $tmp2061 };
        if ($tmp2073.value) {
        {
            panda$core$String* $tmp2074 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2074;
        }
        }
        else {
        panda$core$Bit $tmp2078 = (($fn2077) self->compiler->$class->vtable[9])(self->compiler, targetClass2040);
        bool $tmp2076 = $tmp2078.value;
        if (!$tmp2076) goto $l2079;
        panda$core$Bit $tmp2080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp2076 = $tmp2080.value;
        $l2079:;
        panda$core$Bit $tmp2081 = { $tmp2076 };
        bool $tmp2075 = $tmp2081.value;
        if (!$tmp2075) goto $l2082;
        panda$core$Object* $tmp2084 = (($fn2083) p_src->subtypes->$class->vtable[2])(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2086 = (($fn2085) ((org$pandalanguage$pandac$Type*) $tmp2084)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp2084), ((panda$core$Object*) p_target));
        $tmp2075 = $tmp2086.value;
        $l2082:;
        panda$core$Bit $tmp2087 = { $tmp2075 };
        if ($tmp2087.value) {
        {
            panda$core$String* $tmp2088 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2088;
        }
        }
        }
        }
        }
        op2026 = &$s2089;
    }
    }
    panda$core$String* $tmp2091 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType2090 = $tmp2091;
    panda$core$String* $tmp2093 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType2092 = $tmp2093;
    panda$core$Bit $tmp2094 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType2090, dstType2092);
    if ($tmp2094.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2095, dstType2092);
    panda$core$String* $tmp2098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2096, &$s2097);
    panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2098, p_value);
    panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2099, &$s2100);
    return $tmp2101;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2102;
    panda$core$Object* $tmp2103 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2104 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2103), p_out);
    base2102 = $tmp2104;
    panda$core$Object* $tmp2105 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2106 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base2102, ((org$pandalanguage$pandac$IRNode*) $tmp2105)->type, p_cast->type, p_out);
    return $tmp2106;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2107;
    panda$core$String* t2110;
    panda$core$String* value2120;
    panda$core$String* tmp2135;
    panda$core$String* result2153;
    panda$core$String* classPtr2174;
    panda$core$String* className2176;
    org$pandalanguage$pandac$ClassDecl* $tmp2109 = (($fn2108) self->compiler->$class->vtable[14])(self->compiler, p_construct->type);
    cl2107 = $tmp2109;
    panda$core$String* $tmp2111 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t2110 = $tmp2111;
    panda$core$Bit $tmp2114 = (($fn2113) p_construct->type->$class->vtable[6])(p_construct->type);
    bool $tmp2112 = $tmp2114.value;
    if ($tmp2112) goto $l2115;
    org$pandalanguage$pandac$Type* $tmp2116 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2118 = (($fn2117) p_construct->type->$class->vtable[4])(p_construct->type, ((panda$core$Object*) $tmp2116));
    $tmp2112 = $tmp2118.value;
    $l2115:;
    panda$core$Bit $tmp2119 = { $tmp2112 };
    if ($tmp2119.value) {
    {
        panda$core$Object* $tmp2121 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp2122 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2121)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2123 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2122), p_out);
        value2120 = $tmp2123;
        panda$core$String* $tmp2125 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        panda$core$String* $tmp2126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2124, $tmp2125);
        panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2126, &$s2127);
        panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2128, value2120);
        panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2129, &$s2130);
        return $tmp2131;
    }
    }
    panda$core$Bit $tmp2133 = (($fn2132) self->compiler->$class->vtable[9])(self->compiler, cl2107);
    if ($tmp2133.value) {
    {
        panda$core$Int64 $tmp2134 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2134;
        panda$core$String* $tmp2137 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2136, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp2139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2137, &$s2138);
        tmp2135 = $tmp2139;
        panda$core$String* $tmp2141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2140, t2110);
        panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2141, &$s2142);
        panda$core$String* $tmp2144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2143, tmp2135);
        panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2144, &$s2145);
        (($fn2147) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2146);
        panda$core$Object* $tmp2148 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2149, tmp2135);
        panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, &$s2151);
        org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2148), $tmp2152, p_out);
        return tmp2135;
    }
    }
    panda$core$String* $tmp2154 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2153 = $tmp2154;
    panda$core$String* $tmp2156 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2155, $tmp2156);
    panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2157, &$s2158);
    panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2159, result2153);
    panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2160, &$s2161);
    panda$core$String* $tmp2163 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2162, $tmp2163);
    panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2164, &$s2165);
    panda$core$Int64 $tmp2168 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2167, ((panda$core$Object*) wrap_panda$core$Int64($tmp2168)));
    panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, &$s2170);
    panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, $tmp2171);
    (($fn2173) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2172);
    panda$core$String* $tmp2175 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2174 = $tmp2175;
    panda$core$Bit $tmp2177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp2177.value) {
    {
        panda$core$Object* $tmp2179 = (($fn2178) p_construct->type->subtypes->$class->vtable[2])(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2180 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2179));
        className2176 = $tmp2180;
    }
    }
    else {
    {
        panda$core$String* $tmp2181 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className2176 = $tmp2181;
    }
    }
    panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2182, result2153);
    panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2183, &$s2184);
    panda$core$String* $tmp2186 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl2107)->name);
    panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, $tmp2186);
    panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2187, &$s2188);
    (($fn2190) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2189);
    panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2191, result2153);
    panda$core$String* $tmp2194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2192, &$s2193);
    (($fn2195) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2194);
    panda$core$Object* $tmp2196 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2197, result2153);
    panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2198, &$s2199);
    org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2196), $tmp2200, p_out);
    return result2153;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2201 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp2201;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2203 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp2204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2202, $tmp2203);
    return $tmp2204;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s2205;
    }
    }
    return &$s2206;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2207 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2207;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2209;
    panda$collections$Iterator* raw$Iter2222;
    panda$core$Char8 raw2235;
    panda$core$UInt8 c2240;
    panda$core$Int64 $tmp2208 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2208;
    panda$core$String* $tmp2211 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2210, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2211, &$s2212);
    result2209 = $tmp2213;
    org$pandalanguage$pandac$Type* $tmp2214 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2214);
    panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2215, result2209);
    panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, &$s2217);
    panda$core$String* $tmp2220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2218, &$s2219);
    (($fn2221) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2220);
    {
        panda$collections$ListView* $tmp2223 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2224 = ((panda$collections$Iterable*) $tmp2223)->$class->itable;
        while ($tmp2224->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2224 = $tmp2224->next;
        }
        $fn2226 $tmp2225 = $tmp2224->methods[0];
        panda$collections$Iterator* $tmp2227 = $tmp2225(((panda$collections$Iterable*) $tmp2223));
        raw$Iter2222 = $tmp2227;
        $l2228:;
        ITable* $tmp2230 = raw$Iter2222->$class->itable;
        while ($tmp2230->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2230 = $tmp2230->next;
        }
        $fn2232 $tmp2231 = $tmp2230->methods[0];
        panda$core$Bit $tmp2233 = $tmp2231(raw$Iter2222);
        panda$core$Bit $tmp2234 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2233);
        if (!$tmp2234.value) goto $l2229;
        {
            ITable* $tmp2236 = raw$Iter2222->$class->itable;
            while ($tmp2236->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2236 = $tmp2236->next;
            }
            $fn2238 $tmp2237 = $tmp2236->methods[1];
            panda$core$Object* $tmp2239 = $tmp2237(raw$Iter2222);
            raw2235 = ((panda$core$Char8$wrapper*) $tmp2239)->value;
            panda$core$UInt8 $tmp2241 = panda$core$Char8$convert$R$panda$core$UInt8(raw2235);
            c2240 = $tmp2241;
            (($fn2243) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), &$s2242);
            panda$collections$ListView* $tmp2245 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s2244);
            panda$core$UInt32 $tmp2246 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(c2240, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp2247 = panda$core$UInt32$convert$R$panda$core$Int64($tmp2246);
            ITable* $tmp2248 = $tmp2245->$class->itable;
            while ($tmp2248->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2248 = $tmp2248->next;
            }
            $fn2250 $tmp2249 = $tmp2248->methods[0];
            panda$core$Object* $tmp2251 = $tmp2249($tmp2245, $tmp2247);
            (($fn2252) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp2251)->value)));
            panda$collections$ListView* $tmp2254 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s2253);
            panda$core$UInt32 $tmp2255 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(c2240, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp2256 = panda$core$UInt32$convert$R$panda$core$Int64($tmp2255);
            ITable* $tmp2257 = $tmp2254->$class->itable;
            while ($tmp2257->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2257 = $tmp2257->next;
            }
            $fn2259 $tmp2258 = $tmp2257->methods[0];
            panda$core$Object* $tmp2260 = $tmp2258($tmp2254, $tmp2256);
            (($fn2261) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp2260)->value)));
        }
        goto $l2228;
        $l2229:;
    }
    panda$collections$ListView* $tmp2263 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2264 = ((panda$collections$CollectionView*) $tmp2263)->$class->itable;
    while ($tmp2264->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2264 = $tmp2264->next;
    }
    $fn2266 $tmp2265 = $tmp2264->methods[0];
    panda$core$Int64 $tmp2267 = $tmp2265(((panda$collections$CollectionView*) $tmp2263));
    panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2262, ((panda$core$Object*) wrap_panda$core$Int64($tmp2267)));
    panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2268, &$s2269);
    (($fn2271) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2270);
    panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2272, result2209);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2273, &$s2274);
    return $tmp2275;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s2276;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2278 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp2279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2277, $tmp2278);
    panda$core$String* $tmp2281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2279, &$s2280);
    return $tmp2281;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2282;
    org$pandalanguage$pandac$ClassDecl* cl2285;
    panda$core$String* bit2289;
    panda$core$Object* $tmp2283 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2284 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2283), p_out);
    value2282 = $tmp2284;
    panda$core$Object* $tmp2286 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2288 = (($fn2287) self->compiler->$class->vtable[14])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2286)->type);
    cl2285 = $tmp2288;
    panda$core$Bit $tmp2291 = (($fn2290) self->compiler->$class->vtable[9])(self->compiler, cl2285);
    if ($tmp2291.value) {
    {
        panda$core$Object* $tmp2292 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2293 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2292)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2293.value) {
        {
            bit2289 = &$s2294;
        }
        }
        else {
        {
            panda$core$String* $tmp2296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2295, value2282);
            panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2296, &$s2297);
            bit2289 = $tmp2298;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2299, value2282);
        panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2300, &$s2301);
        bit2289 = $tmp2302;
    }
    }
    panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2303, bit2289);
    panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2304, &$s2305);
    return $tmp2306;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2307;
    org$pandalanguage$pandac$ClassDecl* cl2310;
    panda$core$String* bit2314;
    panda$core$Object* $tmp2308 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2309 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2308), p_out);
    value2307 = $tmp2309;
    panda$core$Object* $tmp2311 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2313 = (($fn2312) self->compiler->$class->vtable[14])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2311)->type);
    cl2310 = $tmp2313;
    panda$core$Bit $tmp2316 = (($fn2315) self->compiler->$class->vtable[9])(self->compiler, cl2310);
    if ($tmp2316.value) {
    {
        panda$core$Object* $tmp2317 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2318 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2317)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2318.value) {
        {
            bit2314 = &$s2319;
        }
        }
        else {
        {
            panda$core$String* $tmp2321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2320, value2307);
            panda$core$String* $tmp2323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2321, &$s2322);
            bit2314 = $tmp2323;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2324, value2307);
        panda$core$String* $tmp2327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2325, &$s2326);
        bit2314 = $tmp2327;
    }
    }
    panda$core$String* $tmp2329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2328, bit2314);
    panda$core$String* $tmp2331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2329, &$s2330);
    return $tmp2331;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2332;
    panda$core$Object* $tmp2334 = (($fn2333) p_expr->type->subtypes->$class->vtable[2])(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2336 = (($fn2335) self->compiler->$class->vtable[14])(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2334));
    cl2332 = $tmp2336;
    panda$core$Bit $tmp2338 = (($fn2337) self->compiler->$class->vtable[9])(self->compiler, cl2332);
    if ($tmp2338.value) {
    {
        panda$core$String* $tmp2340 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2339, $tmp2340);
        panda$core$String* $tmp2343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2341, &$s2342);
        return $tmp2343;
    }
    }
    else {
    {
        return &$s2344;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2345;
    panda$core$String* result2348;
    panda$core$Int64 $match$437862350;
    panda$core$Object* $tmp2346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2347 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2346), p_out);
    base2345 = $tmp2347;
    panda$core$String* $tmp2349 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2348 = $tmp2349;
    {
        panda$core$Int64 $tmp2351 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
        $match$437862350 = $tmp2351;
        panda$core$Bit $tmp2352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437862350, ((panda$core$Int64) { 52 }));
        if ($tmp2352.value) {
        {
            panda$core$String* $tmp2354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2353, base2345);
            panda$core$String* $tmp2356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2354, &$s2355);
            return $tmp2356;
        }
        }
        else {
        panda$core$Bit $tmp2357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437862350, ((panda$core$Int64) { 49 }));
        if ($tmp2357.value) {
        {
            panda$core$String* $tmp2359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2358, base2345);
            panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2359, &$s2360);
            return $tmp2361;
        }
        }
        else {
        panda$core$Bit $tmp2362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437862350, ((panda$core$Int64) { 50 }));
        if ($tmp2362.value) {
        {
            panda$core$String* $tmp2364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2363, base2345);
            panda$core$String* $tmp2366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2364, &$s2365);
            return $tmp2366;
        }
        }
        else {
        {
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$442072367;
    panda$core$String* value2393;
    panda$core$String* result2398;
    {
        $match$442072367 = p_expr->kind;
        panda$core$Bit $tmp2368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1023 }));
        if ($tmp2368.value) {
        {
            panda$core$String* $tmp2369 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2369;
        }
        }
        else {
        panda$core$Bit $tmp2370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1005 }));
        if ($tmp2370.value) {
        {
            panda$core$String* $tmp2371 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2371;
        }
        }
        else {
        panda$core$Bit $tmp2372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1009 }));
        if ($tmp2372.value) {
        {
            panda$core$String* $tmp2373 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2373;
        }
        }
        else {
        panda$core$Bit $tmp2374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1004 }));
        if ($tmp2374.value) {
        {
            panda$core$String* $tmp2375 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2375;
        }
        }
        else {
        panda$core$Bit $tmp2376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1032 }));
        if ($tmp2376.value) {
        {
            panda$core$String* $tmp2377 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2377;
        }
        }
        else {
        panda$core$Bit $tmp2378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1011 }));
        if ($tmp2378.value) {
        {
            panda$core$String* $tmp2379 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2379;
        }
        }
        else {
        panda$core$Bit $tmp2380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1010 }));
        if ($tmp2380.value) {
        {
            panda$core$String* $tmp2381 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2381;
        }
        }
        else {
        panda$core$Bit $tmp2382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1016 }));
        if ($tmp2382.value) {
        {
            panda$core$String* $tmp2383 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2383;
        }
        }
        else {
        panda$core$Bit $tmp2384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1026 }));
        if ($tmp2384.value) {
        {
            panda$core$String* $tmp2385 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2385;
        }
        }
        else {
        panda$core$Bit $tmp2386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1033 }));
        if ($tmp2386.value) {
        {
            panda$core$String* $tmp2387 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2387;
        }
        }
        else {
        panda$core$Bit $tmp2388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1025 }));
        if ($tmp2388.value) {
        {
            panda$core$String* $tmp2389 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2389;
        }
        }
        else {
        panda$core$Bit $tmp2390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1024 }));
        if ($tmp2390.value) {
        {
            panda$core$String* $tmp2391 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2391;
        }
        }
        else {
        panda$core$Bit $tmp2392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1027 }));
        if ($tmp2392.value) {
        {
            panda$core$Object* $tmp2394 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2395 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2394), p_out);
            value2393 = $tmp2395;
            (($fn2396) self->reusedValues->$class->vtable[5])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value))), ((panda$core$Object*) value2393));
            return value2393;
        }
        }
        else {
        panda$core$Bit $tmp2397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1028 }));
        if ($tmp2397.value) {
        {
            panda$core$Object* $tmp2400 = (($fn2399) self->reusedValues->$class->vtable[3])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value))));
            result2398 = ((panda$core$String*) $tmp2400);
            return result2398;
        }
        }
        else {
        panda$core$Bit $tmp2401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1030 }));
        if ($tmp2401.value) {
        {
            panda$core$String* $tmp2402 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2402;
        }
        }
        else {
        panda$core$Bit $tmp2403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1035 }));
        if ($tmp2403.value) {
        {
            panda$core$String* $tmp2404 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2404;
        }
        }
        else {
        panda$core$Bit $tmp2405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1036 }));
        if ($tmp2405.value) {
        {
            panda$core$String* $tmp2406 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2406;
        }
        }
        else {
        panda$core$Bit $tmp2407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072367, ((panda$core$Int64) { 1041 }));
        if ($tmp2407.value) {
        {
            panda$core$String* $tmp2408 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2408;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
    panda$core$String* $tmp2409 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2409;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2413;
    org$pandalanguage$pandac$IRNode* s2425;
    (($fn2411) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2410);
    panda$core$Int64 $tmp2412 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2412;
    {
        ITable* $tmp2414 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2414->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2414 = $tmp2414->next;
        }
        $fn2416 $tmp2415 = $tmp2414->methods[0];
        panda$collections$Iterator* $tmp2417 = $tmp2415(((panda$collections$Iterable*) p_block->children));
        s$Iter2413 = $tmp2417;
        $l2418:;
        ITable* $tmp2420 = s$Iter2413->$class->itable;
        while ($tmp2420->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2420 = $tmp2420->next;
        }
        $fn2422 $tmp2421 = $tmp2420->methods[0];
        panda$core$Bit $tmp2423 = $tmp2421(s$Iter2413);
        panda$core$Bit $tmp2424 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2423);
        if (!$tmp2424.value) goto $l2419;
        {
            ITable* $tmp2426 = s$Iter2413->$class->itable;
            while ($tmp2426->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2426 = $tmp2426->next;
            }
            $fn2428 $tmp2427 = $tmp2426->methods[1];
            panda$core$Object* $tmp2429 = $tmp2427(s$Iter2413);
            s2425 = ((org$pandalanguage$pandac$IRNode*) $tmp2429);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2425, p_out);
        }
        goto $l2418;
        $l2419:;
    }
    panda$core$Int64 $tmp2430 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2430;
    (($fn2432) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2431);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2433;
    panda$core$String* $match$467722434;
    panda$core$String* ptr2437;
    panda$core$String* arg2440;
    panda$core$String* base2455;
    panda$core$String* index2458;
    panda$core$String* value2461;
    m2433 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$467722434 = ((org$pandalanguage$pandac$Symbol*) m2433->value)->name;
        panda$core$Bit $tmp2436 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$467722434, &$s2435);
        if ($tmp2436.value) {
        {
            panda$core$Object* $tmp2438 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2439 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2438), p_out);
            ptr2437 = $tmp2439;
            panda$core$Object* $tmp2441 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2443 = (($fn2442) self->compiler->$class->vtable[51])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2441));
            panda$core$String* $tmp2444 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2443, p_out);
            arg2440 = $tmp2444;
            panda$core$String* $tmp2446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2445, arg2440);
            panda$core$String* $tmp2448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2446, &$s2447);
            panda$core$String* $tmp2449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2448, ptr2437);
            panda$core$String* $tmp2451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2449, &$s2450);
            (($fn2452) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2451);
        }
        }
        else {
        panda$core$Bit $tmp2454 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$467722434, &$s2453);
        if ($tmp2454.value) {
        {
            panda$core$Object* $tmp2456 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2457 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2456), p_out);
            base2455 = $tmp2457;
            panda$core$Object* $tmp2459 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2460 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2459), p_out);
            index2458 = $tmp2460;
            panda$core$Object* $tmp2462 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2464 = (($fn2463) self->compiler->$class->vtable[51])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2462));
            panda$core$String* $tmp2465 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2464, p_out);
            value2461 = $tmp2465;
            panda$core$String* $tmp2467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2466, base2455);
            panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2467, &$s2468);
            panda$core$String* $tmp2470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, index2458);
            panda$core$String* $tmp2472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, &$s2471);
            panda$core$String* $tmp2473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2472, value2461);
            panda$core$String* $tmp2475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2473, &$s2474);
            (($fn2476) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2475);
        }
        }
        else {
        panda$core$Bit $tmp2478 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$467722434, &$s2477);
        if ($tmp2478.value) {
        {
            panda$core$Object* $tmp2480 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2481 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2480), p_out);
            panda$core$String* $tmp2482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2479, $tmp2481);
            panda$core$String* $tmp2484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2482, &$s2483);
            (($fn2485) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2484);
        }
        }
        else {
        {
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$core$String* p_target, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2486;
    org$pandalanguage$pandac$Type* actualMethodType2490;
    panda$core$String* actualResultType2491;
    panda$core$Bit isSuper2492;
    panda$collections$Array* args2517;
    panda$core$Int64 offset2520;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2526;
    panda$core$String* arg2546;
    panda$core$String* refTarget2575;
    panda$core$String* methodRef2579;
    panda$core$String* separator2581;
    panda$core$String* indirectVar2585;
    panda$core$String* resultType2588;
    panda$collections$Iterator* a$Iter2615;
    panda$core$String* a2627;
    m2486 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2488 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2486->owner)->name, &$s2487);
    if ($tmp2488.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2489 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2486->owner);
    if ($tmp2489.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2486);
    }
    }
    panda$core$Int64 $tmp2494 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2495 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2494, ((panda$core$Int64) { 1 }));
    bool $tmp2493 = $tmp2495.value;
    if (!$tmp2493) goto $l2496;
    panda$core$Object* $tmp2497 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2497)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2493 = $tmp2498.value;
    $l2496:;
    panda$core$Bit $tmp2499 = { $tmp2493 };
    isSuper2492 = $tmp2499;
    panda$core$Bit $tmp2501 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2492);
    bool $tmp2500 = $tmp2501.value;
    if (!$tmp2500) goto $l2502;
    panda$core$Bit $tmp2504 = (($fn2503) m2486->$class->vtable[3])(m2486);
    $tmp2500 = $tmp2504.value;
    $l2502:;
    panda$core$Bit $tmp2505 = { $tmp2500 };
    if ($tmp2505.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2507 = (($fn2506) self->compiler->$class->vtable[46])(self->compiler, m2486);
        actualMethodType2490 = $tmp2507;
        panda$core$Int64 $tmp2509 = (($fn2508) actualMethodType2490->subtypes->$class->vtable[3])(actualMethodType2490->subtypes);
        panda$core$Int64 $tmp2510 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2509, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2512 = (($fn2511) actualMethodType2490->subtypes->$class->vtable[2])(actualMethodType2490->subtypes, $tmp2510);
        panda$core$String* $tmp2513 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2512));
        actualResultType2491 = $tmp2513;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2515 = (($fn2514) self->compiler->$class->vtable[44])(self->compiler, m2486);
        actualMethodType2490 = $tmp2515;
        panda$core$String* $tmp2516 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2491 = $tmp2516;
    }
    }
    panda$collections$Array* $tmp2518 = (panda$collections$Array*) malloc(40);
    $tmp2518->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2518->refCount.value = 1;
    panda$collections$Array$init($tmp2518);
    args2517 = $tmp2518;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2517, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2521 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2523 = (($fn2522) actualMethodType2490->subtypes->$class->vtable[3])(actualMethodType2490->subtypes);
    panda$core$Int64 $tmp2524 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2521, $tmp2523);
    panda$core$Int64 $tmp2525 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2524, ((panda$core$Int64) { 1 }));
    offset2520 = $tmp2525;
    panda$core$Int64 $tmp2527 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2526, ((panda$core$Int64) { 0 }), $tmp2527, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2529 = $tmp2526.start.value;
    panda$core$Int64 i2528 = { $tmp2529 };
    int64_t $tmp2531 = $tmp2526.end.value;
    int64_t $tmp2532 = $tmp2526.step.value;
    bool $tmp2533 = $tmp2526.inclusive.value;
    bool $tmp2540 = $tmp2532 > 0;
    if ($tmp2540) goto $l2538; else goto $l2539;
    $l2538:;
    if ($tmp2533) goto $l2541; else goto $l2542;
    $l2541:;
    if ($tmp2529 <= $tmp2531) goto $l2534; else goto $l2536;
    $l2542:;
    if ($tmp2529 < $tmp2531) goto $l2534; else goto $l2536;
    $l2539:;
    if ($tmp2533) goto $l2543; else goto $l2544;
    $l2543:;
    if ($tmp2529 >= $tmp2531) goto $l2534; else goto $l2536;
    $l2544:;
    if ($tmp2529 > $tmp2531) goto $l2534; else goto $l2536;
    $l2534:;
    {
        panda$core$Object* $tmp2547 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2528);
        panda$core$String* $tmp2548 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2547), p_out);
        arg2546 = $tmp2548;
        panda$core$Bit $tmp2550 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2528, offset2520);
        bool $tmp2549 = $tmp2550.value;
        if (!$tmp2549) goto $l2551;
        panda$core$Int64 $tmp2552 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2528, offset2520);
        panda$core$Object* $tmp2554 = (($fn2553) actualMethodType2490->subtypes->$class->vtable[2])(actualMethodType2490->subtypes, $tmp2552);
        panda$core$Object* $tmp2555 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2528);
        panda$core$Bit $tmp2557 = (($fn2556) ((org$pandalanguage$pandac$Type*) $tmp2554)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp2554), ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2555)->type));
        $tmp2549 = $tmp2557.value;
        $l2551:;
        panda$core$Bit $tmp2558 = { $tmp2549 };
        if ($tmp2558.value) {
        {
            panda$core$Object* $tmp2559 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2528);
            panda$core$Int64 $tmp2560 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2528, offset2520);
            panda$core$Object* $tmp2562 = (($fn2561) actualMethodType2490->subtypes->$class->vtable[2])(actualMethodType2490->subtypes, $tmp2560);
            panda$core$String* $tmp2563 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2546, ((org$pandalanguage$pandac$IRNode*) $tmp2559)->type, ((org$pandalanguage$pandac$Type*) $tmp2562), p_out);
            arg2546 = $tmp2563;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2517, ((panda$core$Object*) arg2546));
    }
    $l2537:;
    if ($tmp2540) goto $l2565; else goto $l2566;
    $l2565:;
    int64_t $tmp2567 = $tmp2531 - i2528.value;
    if ($tmp2533) goto $l2568; else goto $l2569;
    $l2568:;
    if ($tmp2567 >= $tmp2532) goto $l2564; else goto $l2536;
    $l2569:;
    if ($tmp2567 > $tmp2532) goto $l2564; else goto $l2536;
    $l2566:;
    int64_t $tmp2571 = i2528.value - $tmp2531;
    if ($tmp2533) goto $l2572; else goto $l2573;
    $l2572:;
    if ($tmp2571 >= -$tmp2532) goto $l2564; else goto $l2536;
    $l2573:;
    if ($tmp2571 > -$tmp2532) goto $l2564; else goto $l2536;
    $l2564:;
    i2528.value += $tmp2532;
    goto $l2534;
    $l2536:;
    panda$core$Int64 $tmp2576 = panda$collections$Array$get_count$R$panda$core$Int64(args2517);
    panda$core$Bit $tmp2577 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2576, ((panda$core$Int64) { 0 }));
    if ($tmp2577.value) {
    {
        panda$core$Object* $tmp2578 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2517, ((panda$core$Int64) { 0 }));
        refTarget2575 = ((panda$core$String*) $tmp2578);
    }
    }
    else {
    {
        refTarget2575 = NULL;
    }
    }
    panda$core$String* $tmp2580 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2575, m2486, isSuper2492, p_out);
    methodRef2579 = $tmp2580;
    separator2581 = &$s2582;
    panda$core$Bit $tmp2583 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2486);
    if ($tmp2583.value) {
    {
        panda$core$Int64 $tmp2584 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2584;
        panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2586, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        indirectVar2585 = $tmp2587;
        panda$core$String* $tmp2589 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2588 = $tmp2589;
        panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2590, resultType2588);
        panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, &$s2592);
        panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2593, indirectVar2585);
        panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2594, &$s2595);
        (($fn2597) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2596);
        panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2598, methodRef2579);
        panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, &$s2600);
        panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2601, resultType2588);
        panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2602, &$s2603);
        panda$core$String* $tmp2605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2604, indirectVar2585);
        panda$core$String* $tmp2607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2605, &$s2606);
        (($fn2608) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2607);
        separator2581 = &$s2609;
    }
    }
    else {
    {
        panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2610, methodRef2579);
        panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, &$s2612);
        (($fn2614) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2613);
    }
    }
    {
        ITable* $tmp2616 = ((panda$collections$Iterable*) args2517)->$class->itable;
        while ($tmp2616->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2616 = $tmp2616->next;
        }
        $fn2618 $tmp2617 = $tmp2616->methods[0];
        panda$collections$Iterator* $tmp2619 = $tmp2617(((panda$collections$Iterable*) args2517));
        a$Iter2615 = $tmp2619;
        $l2620:;
        ITable* $tmp2622 = a$Iter2615->$class->itable;
        while ($tmp2622->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2622 = $tmp2622->next;
        }
        $fn2624 $tmp2623 = $tmp2622->methods[0];
        panda$core$Bit $tmp2625 = $tmp2623(a$Iter2615);
        panda$core$Bit $tmp2626 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2625);
        if (!$tmp2626.value) goto $l2621;
        {
            ITable* $tmp2628 = a$Iter2615->$class->itable;
            while ($tmp2628->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2628 = $tmp2628->next;
            }
            $fn2630 $tmp2629 = $tmp2628->methods[1];
            panda$core$Object* $tmp2631 = $tmp2629(a$Iter2615);
            a2627 = ((panda$core$String*) $tmp2631);
            (($fn2632) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2581);
            (($fn2633) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2627);
            separator2581 = &$s2634;
        }
        goto $l2620;
        $l2621:;
    }
    (($fn2636) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2635);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2637;
    panda$core$Object* $tmp2638 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2639 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2638), p_out);
    test2637 = $tmp2639;
    panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2640, test2637);
    panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2641, &$s2642);
    (($fn2644) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2643);
    panda$core$Object* $tmp2645 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2645), p_out);
    (($fn2647) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2646);
    panda$core$Int64 $tmp2648 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2648, ((panda$core$Int64) { 3 }));
    if ($tmp2649.value) {
    {
        (($fn2651) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2650);
        panda$core$Object* $tmp2652 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2652), p_out);
        (($fn2654) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2653);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2655;
    panda$core$String* range2657;
    org$pandalanguage$pandac$IRNode* block2660;
    org$pandalanguage$pandac$Type* t2662;
    panda$core$String* llt2666;
    panda$core$String* indexType2668;
    org$pandalanguage$pandac$ClassDecl* cl2673;
    org$pandalanguage$pandac$FieldDecl* field2676;
    panda$core$String* numberType2684;
    panda$core$String* index2686;
    panda$core$String* start2688;
    panda$core$String* indexValuePtr2701;
    panda$core$String* end2717;
    panda$core$String* step2730;
    panda$core$String* inclusive2743;
    panda$core$String* loopStart2753;
    panda$core$String* loopBody2755;
    panda$core$String* loopEnd2757;
    panda$core$String* loopTest2759;
    panda$core$String* forwardEntry2764;
    panda$core$String* backwardEntry2766;
    panda$core$String* signPrefix2768;
    panda$core$String* direction2773;
    panda$core$String* forwardEntryInclusive2797;
    panda$core$String* forwardEntryExclusive2799;
    panda$core$String* backwardEntryInclusive2842;
    panda$core$String* backwardEntryExclusive2844;
    panda$core$String* backwardEntryExclusiveTest2873;
    panda$core$String* loopInc2889;
    panda$core$String* forwardLabel2891;
    panda$core$String* backwardLabel2893;
    panda$core$String* forwardDelta2906;
    panda$core$String* forwardInclusiveLabel2922;
    panda$core$String* forwardExclusiveLabel2924;
    panda$core$String* forwardExclusiveTest2953;
    panda$core$String* backwardDelta2969;
    panda$core$String* backwardInclusiveLabel2985;
    panda$core$String* backwardExclusiveLabel2987;
    panda$core$String* inc3030;
    panda$core$Object* $tmp2656 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2655 = ((org$pandalanguage$pandac$IRNode*) $tmp2656);
    panda$core$Object* $tmp2658 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2659 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2658), p_out);
    range2657 = $tmp2659;
    panda$core$Object* $tmp2661 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2660 = ((org$pandalanguage$pandac$IRNode*) $tmp2661);
    panda$core$Object* $tmp2663 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2665 = (($fn2664) ((org$pandalanguage$pandac$IRNode*) $tmp2663)->type->subtypes->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2663)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2662 = ((org$pandalanguage$pandac$Type*) $tmp2665);
    panda$core$String* $tmp2667 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2662);
    llt2666 = $tmp2667;
    panda$core$Bit $tmp2669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2662->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2669.value) {
    {
        panda$core$Object* $tmp2671 = (($fn2670) t2662->subtypes->$class->vtable[2])(t2662->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2672 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2671));
        indexType2668 = $tmp2672;
    }
    }
    else {
    {
        indexType2668 = llt2666;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2675 = (($fn2674) self->compiler->$class->vtable[14])(self->compiler, t2662);
    cl2673 = $tmp2675;
    panda$collections$ListView* $tmp2678 = (($fn2677) self->compiler->$class->vtable[10])(self->compiler, cl2673);
    ITable* $tmp2679 = $tmp2678->$class->itable;
    while ($tmp2679->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2679 = $tmp2679->next;
    }
    $fn2681 $tmp2680 = $tmp2679->methods[0];
    panda$core$Object* $tmp2682 = $tmp2680($tmp2678, ((panda$core$Int64) { 0 }));
    field2676 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2682);
    (($fn2683) self->compiler->$class->vtable[7])(self->compiler, field2676);
    panda$core$String* $tmp2685 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2676->type);
    numberType2684 = $tmp2685;
    panda$core$String* $tmp2687 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2655->payload));
    index2686 = $tmp2687;
    panda$core$String* $tmp2689 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2688 = $tmp2689;
    panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2690, numberType2684);
    panda$core$String* $tmp2693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2691, &$s2692);
    panda$core$String* $tmp2694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2693, start2688);
    panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2694, &$s2695);
    panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2696, range2657);
    panda$core$String* $tmp2699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, &$s2698);
    (($fn2700) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2699);
    panda$core$String* $tmp2702 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2701 = $tmp2702;
    org$pandalanguage$pandac$Type* $tmp2705 = (($fn2704) cl2673->$class->vtable[3])(cl2673);
    panda$core$String* $tmp2706 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2705);
    panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2703, $tmp2706);
    panda$core$String* $tmp2709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2707, &$s2708);
    panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2709, index2686);
    panda$core$String* $tmp2712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, &$s2711);
    panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2712, start2688);
    panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, &$s2714);
    (($fn2716) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2715);
    panda$core$String* $tmp2718 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2717 = $tmp2718;
    panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2719, numberType2684);
    panda$core$String* $tmp2722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2720, &$s2721);
    panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2722, end2717);
    panda$core$String* $tmp2725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2723, &$s2724);
    panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2725, range2657);
    panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, &$s2727);
    (($fn2729) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2728);
    panda$core$String* $tmp2731 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2730 = $tmp2731;
    panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2732, numberType2684);
    panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, &$s2734);
    panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2735, step2730);
    panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, &$s2737);
    panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2738, range2657);
    panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2739, &$s2740);
    (($fn2742) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2741);
    panda$core$String* $tmp2744 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2743 = $tmp2744;
    panda$core$String* $tmp2746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2745, inclusive2743);
    panda$core$String* $tmp2748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2746, &$s2747);
    panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2748, range2657);
    panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, &$s2750);
    (($fn2752) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2751);
    panda$core$String* $tmp2754 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2753 = $tmp2754;
    panda$core$String* $tmp2756 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2755 = $tmp2756;
    panda$core$String* $tmp2758 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2757 = $tmp2758;
    panda$core$String* $tmp2760 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2759 = $tmp2760;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2761 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2761->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2761->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2761, ((panda$core$String*) p_f->payload), loopEnd2757, loopTest2759);
    (($fn2763) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp2761));
    panda$core$String* $tmp2765 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2764 = $tmp2765;
    panda$core$String* $tmp2767 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2766 = $tmp2767;
    panda$core$Bit $tmp2770 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2662)->name, &$s2769);
    if ($tmp2770.value) {
    {
        signPrefix2768 = &$s2771;
    }
    }
    else {
    {
        signPrefix2768 = &$s2772;
    }
    }
    panda$core$Bit $tmp2775 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2768, &$s2774);
    if ($tmp2775.value) {
    {
        panda$core$String* $tmp2776 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2773 = $tmp2776;
        panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2777, direction2773);
        panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, &$s2779);
        panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, step2730);
        panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2781, &$s2782);
        (($fn2784) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2783);
    }
    }
    else {
    {
        direction2773 = &$s2785;
    }
    }
    panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2786, direction2773);
    panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2787, &$s2788);
    panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, forwardEntry2764);
    panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, &$s2791);
    panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, backwardEntry2766);
    panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, &$s2794);
    (($fn2796) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2795);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2764, p_out);
    panda$core$String* $tmp2798 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2797 = $tmp2798;
    panda$core$String* $tmp2800 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2799 = $tmp2800;
    panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2801, inclusive2743);
    panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2802, &$s2803);
    panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, forwardEntryInclusive2797);
    panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, &$s2806);
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2808, forwardEntryExclusive2799);
    panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, &$s2810);
    panda$core$String* $tmp2812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, $tmp2811);
    (($fn2813) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2812);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2797, p_out);
    panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2814, start2688);
    panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, &$s2816);
    panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, end2717);
    panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, &$s2819);
    panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, loopStart2753);
    panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2822);
    panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, loopEnd2757);
    panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, &$s2825);
    (($fn2827) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2826);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2799, p_out);
    panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2828, start2688);
    panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2829, &$s2830);
    panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2831, end2717);
    panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, &$s2833);
    panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, loopStart2753);
    panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, &$s2836);
    panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, loopEnd2757);
    panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, &$s2839);
    (($fn2841) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2840);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2766, p_out);
    panda$core$String* $tmp2843 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2842 = $tmp2843;
    panda$core$String* $tmp2845 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2844 = $tmp2845;
    panda$core$String* $tmp2847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2846, inclusive2743);
    panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2847, &$s2848);
    panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2849, backwardEntryInclusive2842);
    panda$core$String* $tmp2852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2850, &$s2851);
    panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2853, backwardEntryExclusive2844);
    panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2854, &$s2855);
    panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2852, $tmp2856);
    (($fn2858) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2857);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2842, p_out);
    panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2859, start2688);
    panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2860, &$s2861);
    panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2862, end2717);
    panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2863, &$s2864);
    panda$core$String* $tmp2866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2865, loopStart2753);
    panda$core$String* $tmp2868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2866, &$s2867);
    panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2868, loopEnd2757);
    panda$core$String* $tmp2871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2869, &$s2870);
    (($fn2872) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2871);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2844, p_out);
    panda$core$String* $tmp2874 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest2873 = $tmp2874;
    panda$core$String* $tmp2876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2875, start2688);
    panda$core$String* $tmp2878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2876, &$s2877);
    panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2878, end2717);
    panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2879, &$s2880);
    panda$core$String* $tmp2882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2881, loopStart2753);
    panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2882, &$s2883);
    panda$core$String* $tmp2885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2884, loopEnd2757);
    panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2885, &$s2886);
    (($fn2888) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2887);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2753, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2660, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2759, p_out);
    panda$core$String* $tmp2890 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2889 = $tmp2890;
    panda$core$String* $tmp2892 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel2891 = $tmp2892;
    panda$core$String* $tmp2894 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel2893 = $tmp2894;
    panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2895, direction2773);
    panda$core$String* $tmp2898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, &$s2897);
    panda$core$String* $tmp2899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2898, forwardLabel2891);
    panda$core$String* $tmp2901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2899, &$s2900);
    panda$core$String* $tmp2902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2901, backwardLabel2893);
    panda$core$String* $tmp2904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2902, &$s2903);
    (($fn2905) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2904);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel2891, p_out);
    panda$core$String* $tmp2907 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2906 = $tmp2907;
    panda$core$String* $tmp2909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2908, numberType2684);
    panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2909, &$s2910);
    panda$core$String* $tmp2912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2911, forwardDelta2906);
    panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2912, &$s2913);
    panda$core$String* $tmp2915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2914, end2717);
    panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2915, &$s2916);
    panda$core$String* $tmp2918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2917, index2686);
    panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2918, &$s2919);
    (($fn2921) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2920);
    panda$core$String* $tmp2923 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2922 = $tmp2923;
    panda$core$String* $tmp2925 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2924 = $tmp2925;
    panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2926, inclusive2743);
    panda$core$String* $tmp2929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2927, &$s2928);
    panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2929, forwardInclusiveLabel2922);
    panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2930, &$s2931);
    panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2933, forwardExclusiveLabel2924);
    panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2934, &$s2935);
    panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2932, $tmp2936);
    (($fn2938) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2937);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2922, p_out);
    panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2939, forwardDelta2906);
    panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2940, &$s2941);
    panda$core$String* $tmp2943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2942, step2730);
    panda$core$String* $tmp2945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2943, &$s2944);
    panda$core$String* $tmp2946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2945, loopInc2889);
    panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2946, &$s2947);
    panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2948, loopEnd2757);
    panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2949, &$s2950);
    (($fn2952) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2951);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2924, p_out);
    panda$core$String* $tmp2954 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2953 = $tmp2954;
    panda$core$String* $tmp2956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2955, forwardDelta2906);
    panda$core$String* $tmp2958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2956, &$s2957);
    panda$core$String* $tmp2959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2958, step2730);
    panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2959, &$s2960);
    panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2961, loopInc2889);
    panda$core$String* $tmp2964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, &$s2963);
    panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2964, loopEnd2757);
    panda$core$String* $tmp2967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2965, &$s2966);
    (($fn2968) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2967);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel2893, p_out);
    panda$core$String* $tmp2970 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta2969 = $tmp2970;
    panda$core$String* $tmp2972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2971, numberType2684);
    panda$core$String* $tmp2974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2972, &$s2973);
    panda$core$String* $tmp2975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2974, backwardDelta2969);
    panda$core$String* $tmp2977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2975, &$s2976);
    panda$core$String* $tmp2978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2977, index2686);
    panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2978, &$s2979);
    panda$core$String* $tmp2981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, end2717);
    panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2981, &$s2982);
    (($fn2984) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2983);
    panda$core$String* $tmp2986 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel2985 = $tmp2986;
    panda$core$String* $tmp2988 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel2987 = $tmp2988;
    panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2989, inclusive2743);
    panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2990, &$s2991);
    panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2992, backwardInclusiveLabel2985);
    panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2993, &$s2994);
    panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2996, backwardExclusiveLabel2987);
    panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2997, &$s2998);
    panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, $tmp2999);
    (($fn3001) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3000);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel2985, p_out);
    panda$core$String* $tmp3003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3002, backwardDelta2969);
    panda$core$String* $tmp3005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3003, &$s3004);
    panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3005, step2730);
    panda$core$String* $tmp3008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3006, &$s3007);
    panda$core$String* $tmp3009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3008, loopInc2889);
    panda$core$String* $tmp3011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3009, &$s3010);
    panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3011, loopEnd2757);
    panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3012, &$s3013);
    (($fn3015) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3014);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel2987, p_out);
    panda$core$String* $tmp3017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3016, backwardDelta2969);
    panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3017, &$s3018);
    panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, step2730);
    panda$core$String* $tmp3022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3020, &$s3021);
    panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3022, loopInc2889);
    panda$core$String* $tmp3025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3023, &$s3024);
    panda$core$String* $tmp3026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3025, loopEnd2757);
    panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3026, &$s3027);
    (($fn3029) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3028);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2889, p_out);
    panda$core$String* $tmp3031 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3030 = $tmp3031;
    panda$core$String* $tmp3033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3032, index2686);
    panda$core$String* $tmp3035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3033, &$s3034);
    panda$core$String* $tmp3036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3035, step2730);
    panda$core$String* $tmp3038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3036, &$s3037);
    (($fn3039) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3038);
    panda$core$String* $tmp3041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3040, loopStart2753);
    panda$core$String* $tmp3043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3041, &$s3042);
    (($fn3044) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3043);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2757, p_out);
    (($fn3045) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3046;
    panda$core$String* loopEnd3048;
    panda$core$String* $tmp3047 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3046 = $tmp3047;
    panda$core$String* $tmp3049 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3048 = $tmp3049;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3050 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3050->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3050->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3050, ((panda$core$String*) p_w->payload), loopEnd3048, loopStart3046);
    (($fn3052) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp3050));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3046, p_out);
    panda$core$Object* $tmp3054 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3055 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3054), p_out);
    panda$core$String* $tmp3056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3053, $tmp3055);
    panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3056, &$s3057);
    panda$core$String* $tmp3059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, loopEnd3048);
    panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3059, &$s3060);
    (($fn3062) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3061);
    panda$core$Object* $tmp3063 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3063), p_out);
    panda$core$String* $tmp3065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3064, loopStart3046);
    panda$core$String* $tmp3067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3065, &$s3066);
    (($fn3068) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3067);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3048, p_out);
    (($fn3069) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3070;
    panda$core$String* loopEnd3072;
    panda$core$String* $tmp3071 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3070 = $tmp3071;
    panda$core$String* $tmp3073 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3072 = $tmp3073;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3074 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3074->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3074->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3074, ((panda$core$String*) p_d->payload), loopEnd3072, loopStart3070);
    (($fn3076) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp3074));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3070, p_out);
    panda$core$Object* $tmp3077 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3077), p_out);
    panda$core$Object* $tmp3079 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3080 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3079), p_out);
    panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3078, $tmp3080);
    panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3081, &$s3082);
    panda$core$String* $tmp3084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3083, loopStart3070);
    panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3084, &$s3085);
    (($fn3087) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3086);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3072, p_out);
    (($fn3088) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3089;
    panda$core$String* loopEnd3091;
    panda$core$String* $tmp3090 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3089 = $tmp3090;
    panda$core$String* $tmp3092 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3091 = $tmp3092;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3093 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3093->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3093->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3093, ((panda$core$String*) p_l->payload), loopEnd3091, loopStart3089);
    (($fn3095) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp3093));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3089, p_out);
    (($fn3097) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3096);
    panda$core$Object* $tmp3098 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3098), p_out);
    (($fn3100) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3099);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3091, p_out);
    (($fn3101) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$599163102;
    org$pandalanguage$pandac$Variable* v3104;
    {
        $match$599163102 = p_target->kind;
        panda$core$Bit $tmp3103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$599163102, ((panda$core$Int64) { 1016 }));
        if ($tmp3103.value) {
        {
            v3104 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp3106 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3104->type);
            panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3105, $tmp3106);
            panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3107, &$s3108);
            panda$core$String* $tmp3110 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3104);
            panda$core$String* $tmp3111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, $tmp3110);
            panda$core$String* $tmp3113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3111, &$s3112);
            (($fn3114) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3113);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3116 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3104);
                panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3115, $tmp3116);
                panda$core$String* $tmp3119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3117, &$s3118);
                panda$core$String* $tmp3120 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, $tmp3120);
                panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3121, &$s3122);
                (($fn3124) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3123);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$599163102, ((panda$core$Int64) { 1022 }));
        if ($tmp3125.value) {
        {
        }
        }
        else {
        {
        }
        }
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* decl$Iter3126;
    org$pandalanguage$pandac$IRNode* decl3138;
    {
        ITable* $tmp3127 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3127->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3127 = $tmp3127->next;
        }
        $fn3129 $tmp3128 = $tmp3127->methods[0];
        panda$collections$Iterator* $tmp3130 = $tmp3128(((panda$collections$Iterable*) p_v->children));
        decl$Iter3126 = $tmp3130;
        $l3131:;
        ITable* $tmp3133 = decl$Iter3126->$class->itable;
        while ($tmp3133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3133 = $tmp3133->next;
        }
        $fn3135 $tmp3134 = $tmp3133->methods[0];
        panda$core$Bit $tmp3136 = $tmp3134(decl$Iter3126);
        panda$core$Bit $tmp3137 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3136);
        if (!$tmp3137.value) goto $l3132;
        {
            ITable* $tmp3139 = decl$Iter3126->$class->itable;
            while ($tmp3139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3139 = $tmp3139->next;
            }
            $fn3141 $tmp3140 = $tmp3139->methods[1];
            panda$core$Object* $tmp3142 = $tmp3140(decl$Iter3126);
            decl3138 = ((org$pandalanguage$pandac$IRNode*) $tmp3142);
            panda$core$Int64 $tmp3143 = panda$collections$Array$get_count$R$panda$core$Int64(decl3138->children);
            panda$core$Bit $tmp3144 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3143, ((panda$core$Int64) { 1 }));
            if ($tmp3144.value) {
            {
                panda$core$Object* $tmp3145 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3138->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3138->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3145), ((org$pandalanguage$pandac$IRNode*) $tmp3146), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3147 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3138->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3147), NULL, p_out);
            }
            }
        }
        goto $l3131;
        $l3132:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$610313148;
    panda$core$String* base3156;
    panda$core$String* result3167;
    {
        $match$610313148 = p_lvalue->kind;
        panda$core$Bit $tmp3149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$610313148, ((panda$core$Int64) { 1009 }));
        if ($tmp3149.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3151 = (($fn3150) self->compiler->$class->vtable[51])(self->compiler, p_lvalue);
            panda$core$String* $tmp3152 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3151, p_out);
            return $tmp3152;
        }
        }
        else {
        panda$core$Bit $tmp3153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$610313148, ((panda$core$Int64) { 1016 }));
        if ($tmp3153.value) {
        {
            panda$core$String* $tmp3154 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3154;
        }
        }
        else {
        panda$core$Bit $tmp3155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$610313148, ((panda$core$Int64) { 1026 }));
        if ($tmp3155.value) {
        {
            panda$core$Object* $tmp3157 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3158 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3157), p_out);
            base3156 = $tmp3158;
            panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3159, base3156);
            panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, &$s3161);
            panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3162, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, &$s3164);
            return $tmp3165;
        }
        }
        else {
        panda$core$Bit $tmp3166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$610313148, ((panda$core$Int64) { 1027 }));
        if ($tmp3166.value) {
        {
            panda$core$Object* $tmp3168 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3169 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3168), p_out);
            result3167 = $tmp3169;
            (($fn3170) self->reusedValues->$class->vtable[5])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value))), ((panda$core$Object*) result3167));
            return result3167;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue3171;
    panda$core$String* value3174;
    panda$core$String* t3175;
    panda$core$Int64 op3178;
    panda$core$String* right3180;
    panda$core$Object* $tmp3172 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3173 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3172), p_out);
    lvalue3171 = $tmp3173;
    panda$core$Object* $tmp3176 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3177 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3176)->type);
    t3175 = $tmp3177;
    op3178 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp3179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3178, ((panda$core$Int64) { 73 }));
    if ($tmp3179.value) {
    {
        panda$core$Object* $tmp3181 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3182 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3181), p_out);
        right3180 = $tmp3182;
        value3174 = right3180;
    }
    }
    else {
    {
    }
    }
    panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3183, lvalue3171);
    panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3184, &$s3185);
    panda$core$String* $tmp3187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3186, value3174);
    panda$core$String* $tmp3189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3187, &$s3188);
    (($fn3190) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3189);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp3191 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3191, ((panda$core$Int64) { 1 }));
    if ($tmp3192.value) {
    {
        panda$core$Object* $tmp3194 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3195 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3194), p_out);
        panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3193, $tmp3195);
        panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3196, &$s3197);
        (($fn3199) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3198);
    }
    }
    else {
    {
        (($fn3201) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3200);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3204;
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3203 = (($fn3202) self->loopDescriptors->$class->vtable[4])(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3203);
    }
    }
    panda$core$Int64 $tmp3206 = (($fn3205) self->loopDescriptors->$class->vtable[7])(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3204, ((panda$core$Int64) { 0 }), $tmp3206, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3208 = $tmp3204.start.value;
    panda$core$Int64 i3207 = { $tmp3208 };
    int64_t $tmp3210 = $tmp3204.end.value;
    int64_t $tmp3211 = $tmp3204.step.value;
    bool $tmp3212 = $tmp3204.inclusive.value;
    bool $tmp3219 = $tmp3211 > 0;
    if ($tmp3219) goto $l3217; else goto $l3218;
    $l3217:;
    if ($tmp3212) goto $l3220; else goto $l3221;
    $l3220:;
    if ($tmp3208 <= $tmp3210) goto $l3213; else goto $l3215;
    $l3221:;
    if ($tmp3208 < $tmp3210) goto $l3213; else goto $l3215;
    $l3218:;
    if ($tmp3212) goto $l3222; else goto $l3223;
    $l3222:;
    if ($tmp3208 >= $tmp3210) goto $l3213; else goto $l3215;
    $l3223:;
    if ($tmp3208 > $tmp3210) goto $l3213; else goto $l3215;
    $l3213:;
    {
        panda$core$Object* $tmp3227 = (($fn3226) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i3207);
        bool $tmp3225 = ((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3227)->loopLabel != NULL }).value;
        if (!$tmp3225) goto $l3228;
        panda$core$Object* $tmp3230 = (($fn3229) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i3207);
        panda$core$Bit $tmp3231 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3230)->loopLabel, p_name);
        $tmp3225 = $tmp3231.value;
        $l3228:;
        panda$core$Bit $tmp3232 = { $tmp3225 };
        if ($tmp3232.value) {
        {
            panda$core$Object* $tmp3234 = (($fn3233) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i3207);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3234);
        }
        }
    }
    $l3216:;
    if ($tmp3219) goto $l3236; else goto $l3237;
    $l3236:;
    int64_t $tmp3238 = $tmp3210 - i3207.value;
    if ($tmp3212) goto $l3239; else goto $l3240;
    $l3239:;
    if ($tmp3238 >= $tmp3211) goto $l3235; else goto $l3215;
    $l3240:;
    if ($tmp3238 > $tmp3211) goto $l3235; else goto $l3215;
    $l3237:;
    int64_t $tmp3242 = i3207.value - $tmp3210;
    if ($tmp3212) goto $l3243; else goto $l3244;
    $l3243:;
    if ($tmp3242 >= -$tmp3211) goto $l3235; else goto $l3215;
    $l3244:;
    if ($tmp3242 > -$tmp3211) goto $l3235; else goto $l3215;
    $l3235:;
    i3207.value += $tmp3211;
    goto $l3213;
    $l3215:;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3246;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3247 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3246 = $tmp3247;
    panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3248, desc3246->breakLabel);
    panda$core$String* $tmp3251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3249, &$s3250);
    (($fn3252) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3251);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3253;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3254 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3253 = $tmp3254;
    panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3255, desc3253->continueLabel);
    panda$core$String* $tmp3258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3256, &$s3257);
    (($fn3259) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3258);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$656653260;
    {
        $match$656653260 = p_stmt->kind;
        panda$core$Bit $tmp3261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1023 }));
        if ($tmp3261.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1000 }));
        if ($tmp3262.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1005 }));
        if ($tmp3263.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, p_stmt, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1012 }));
        if ($tmp3264.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1029 }));
        if ($tmp3265.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1013 }));
        if ($tmp3266.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1014 }));
        if ($tmp3267.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1015 }));
        if ($tmp3268.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1017 }));
        bool $tmp3271 = $tmp3272.value;
        if ($tmp3271) goto $l3273;
        panda$core$Bit $tmp3274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1018 }));
        $tmp3271 = $tmp3274.value;
        $l3273:;
        panda$core$Bit $tmp3275 = { $tmp3271 };
        bool $tmp3270 = $tmp3275.value;
        if ($tmp3270) goto $l3276;
        panda$core$Bit $tmp3277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1019 }));
        $tmp3270 = $tmp3277.value;
        $l3276:;
        panda$core$Bit $tmp3278 = { $tmp3270 };
        bool $tmp3269 = $tmp3278.value;
        if ($tmp3269) goto $l3279;
        panda$core$Bit $tmp3280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1020 }));
        $tmp3269 = $tmp3280.value;
        $l3279:;
        panda$core$Bit $tmp3281 = { $tmp3269 };
        if ($tmp3281.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1008 }));
        if ($tmp3282.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1006 }));
        if ($tmp3283.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1007 }));
        if ($tmp3284.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653260, ((panda$core$Int64) { 1034 }));
        if ($tmp3285.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        {
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result3286;
    org$pandalanguage$pandac$Type* $tmp3288 = (($fn3287) p_m->owner->$class->vtable[3])(p_m->owner);
    panda$core$String* $tmp3289 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3288);
    result3286 = $tmp3289;
    panda$core$Bit $tmp3291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp3290 = $tmp3291.value;
    if (!$tmp3290) goto $l3292;
    panda$core$Bit $tmp3294 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3286, &$s3293);
    panda$core$Bit $tmp3295 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3294);
    $tmp3290 = $tmp3295.value;
    $l3292:;
    panda$core$Bit $tmp3296 = { $tmp3290 };
    if ($tmp3296.value) {
    {
        panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3286, &$s3297);
        return $tmp3298;
    }
    }
    return result3286;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3311;
    panda$collections$Iterator* p$Iter3323;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3335;
    panda$io$MemoryOutputStream* bodyBuffer3357;
    panda$io$IndentedOutputStream* indentedBody3360;
    panda$collections$Iterator* s$Iter3363;
    org$pandalanguage$pandac$IRNode* s3375;
    self->currentMethod = p_m;
    self->currentBlock = &$s3299;
    (($fn3300) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    panda$core$String* $tmp3302 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3301, $tmp3302);
    panda$core$String* $tmp3305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3303, &$s3304);
    panda$core$String* $tmp3306 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3305, $tmp3306);
    panda$core$String* $tmp3309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3307, &$s3308);
    (($fn3310) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3309);
    separator3311 = &$s3312;
    panda$core$Bit $tmp3314 = (($fn3313) p_m->annotations->$class->vtable[5])(p_m->annotations);
    panda$core$Bit $tmp3315 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3314);
    if ($tmp3315.value) {
    {
        panda$core$String* $tmp3317 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3316, $tmp3317);
        panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3318, &$s3319);
        (($fn3321) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3320);
        separator3311 = &$s3322;
    }
    }
    {
        ITable* $tmp3324 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3324->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3324 = $tmp3324->next;
        }
        $fn3326 $tmp3325 = $tmp3324->methods[0];
        panda$collections$Iterator* $tmp3327 = $tmp3325(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3323 = $tmp3327;
        $l3328:;
        ITable* $tmp3330 = p$Iter3323->$class->itable;
        while ($tmp3330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3330 = $tmp3330->next;
        }
        $fn3332 $tmp3331 = $tmp3330->methods[0];
        panda$core$Bit $tmp3333 = $tmp3331(p$Iter3323);
        panda$core$Bit $tmp3334 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3333);
        if (!$tmp3334.value) goto $l3329;
        {
            ITable* $tmp3336 = p$Iter3323->$class->itable;
            while ($tmp3336->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3336 = $tmp3336->next;
            }
            $fn3338 $tmp3337 = $tmp3336->methods[1];
            panda$core$Object* $tmp3339 = $tmp3337(p$Iter3323);
            p3335 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3339);
            panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3340, separator3311);
            panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, &$s3342);
            panda$core$String* $tmp3344 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3335->type);
            panda$core$String* $tmp3345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3343, $tmp3344);
            panda$core$String* $tmp3347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3345, &$s3346);
            panda$core$String* $tmp3348 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3335->name);
            panda$core$String* $tmp3349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3347, $tmp3348);
            panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3349, &$s3350);
            (($fn3352) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3351);
            separator3311 = &$s3353;
        }
        goto $l3328;
        $l3329:;
    }
    (($fn3355) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3354);
    panda$core$Int64 $tmp3356 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3356;
    panda$io$MemoryOutputStream* $tmp3358 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3358->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3358->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3358);
    bodyBuffer3357 = $tmp3358;
    panda$io$IndentedOutputStream* $tmp3361 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3361->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3361->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3361, ((panda$io$OutputStream*) bodyBuffer3357));
    indentedBody3360 = $tmp3361;
    {
        ITable* $tmp3364 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3364->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3364 = $tmp3364->next;
        }
        $fn3366 $tmp3365 = $tmp3364->methods[0];
        panda$collections$Iterator* $tmp3367 = $tmp3365(((panda$collections$Iterable*) p_body->children));
        s$Iter3363 = $tmp3367;
        $l3368:;
        ITable* $tmp3370 = s$Iter3363->$class->itable;
        while ($tmp3370->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3370 = $tmp3370->next;
        }
        $fn3372 $tmp3371 = $tmp3370->methods[0];
        panda$core$Bit $tmp3373 = $tmp3371(s$Iter3363);
        panda$core$Bit $tmp3374 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3373);
        if (!$tmp3374.value) goto $l3369;
        {
            ITable* $tmp3376 = s$Iter3363->$class->itable;
            while ($tmp3376->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3376 = $tmp3376->next;
            }
            $fn3378 $tmp3377 = $tmp3376->methods[1];
            panda$core$Object* $tmp3379 = $tmp3377(s$Iter3363);
            s3375 = ((org$pandalanguage$pandac$IRNode*) $tmp3379);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3375, indentedBody3360);
        }
        goto $l3368;
        $l3369:;
    }
    panda$core$String* $tmp3381 = (($fn3380) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn3382) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3381);
    panda$core$String* $tmp3384 = (($fn3383) bodyBuffer3357->$class->vtable[0])(bodyBuffer3357);
    (($fn3385) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3384);
    panda$core$Int64 $tmp3386 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3386;
    (($fn3388) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3387);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3403;
    self->currentClass = p_cl;
    (($fn3389) self->imports->$class->vtable[5])(self->imports);
    (($fn3390) self->strings->$class->vtable[20])(self->strings);
    (($fn3391) self->declarations->$class->vtable[20])(self->declarations);
    (($fn3392) self->types->$class->vtable[20])(self->types);
    (($fn3393) self->methodsBuffer->$class->vtable[20])(self->methodsBuffer);
    (($fn3394) self->wrapperShimsBuffer->$class->vtable[20])(self->wrapperShimsBuffer);
    (($fn3395) self->shimsBuffer->$class->vtable[20])(self->shimsBuffer);
    (($fn3396) self->declared->$class->vtable[5])(self->declared);
    (($fn3397) self->writtenTypes->$class->vtable[5])(self->writtenTypes);
    (($fn3398) self->writtenWrappers->$class->vtable[5])(self->writtenWrappers);
    (($fn3399) self->classConstants->$class->vtable[7])(self->classConstants);
    (($fn3400) self->variableNames->$class->vtable[7])(self->variableNames);
    self->varCount = ((panda$core$Int64) { 0 });
    (($fn3401) self->reusedValues->$class->vtable[7])(self->reusedValues);
    (($fn3402) self->methodShims->$class->vtable[7])(self->methodShims);
    panda$io$File* $tmp3405 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3404);
    path3403 = $tmp3405;
    panda$io$File* $tmp3406 = panda$io$File$parent$R$panda$io$File$Q(path3403);
    panda$io$File$createDirectories($tmp3406);
    panda$io$IndentedOutputStream* $tmp3407 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3407->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3407->refCount.value = 1;
    panda$io$OutputStream* $tmp3409 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3403);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3407, $tmp3409);
    self->out = $tmp3407;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3411 = (($fn3410) self->compiler->$class->vtable[9])(self->compiler, p_cl);
    if ($tmp3411.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
        panda$core$String* $tmp3413 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3412, $tmp3413);
        panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3414, &$s3415);
        panda$core$String* $tmp3417 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3416, $tmp3417);
        panda$core$String* $tmp3420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3418, &$s3419);
        panda$core$String* $tmp3422 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3421, $tmp3422);
        panda$core$String* $tmp3425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3423, &$s3424);
        panda$core$String* $tmp3426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3420, $tmp3425);
        (($fn3427) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3426);
        panda$core$String* $tmp3429 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3428, $tmp3429);
        panda$core$String* $tmp3432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3430, &$s3431);
        panda$core$String* $tmp3434 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3433, $tmp3434);
        panda$core$String* $tmp3437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3435, &$s3436);
        org$pandalanguage$pandac$Type* $tmp3439 = (($fn3438) p_cl->$class->vtable[3])(p_cl);
        panda$core$Int64 $tmp3440 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3439);
        panda$core$String* $tmp3441 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3437, ((panda$core$Object*) wrap_panda$core$Int64($tmp3440)));
        panda$core$String* $tmp3443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3441, &$s3442);
        panda$core$String* $tmp3444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3432, $tmp3443);
        (($fn3445) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3444);
        panda$core$String* $tmp3448 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3447, $tmp3448);
        panda$core$String* $tmp3451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3449, &$s3450);
        panda$core$String* $tmp3452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3446, $tmp3451);
        (($fn3453) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3452);
        (($fn3455) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3454);
        (($fn3457) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3456);
        (($fn3459) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3458);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    self->currentClass = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    (($fn3460) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->shimsBuffer));
    (($fn3461) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->wrapperShimsBuffer));
    (($fn3462) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->types));
    (($fn3463) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->strings));
    (($fn3464) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->methodsBuffer));
    (($fn3465) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

