#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/collections/Set.h"
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
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
#include "panda/core/Panda.h"
#include "panda/core/Formattable.h"
#include "org/pandalanguage/pandac/CCodeGenerator/LoopDescriptor.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

typedef void (*$fn65)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn120)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn137)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn182)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn188)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn194)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn228)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn234)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn240)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn329)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn335)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn341)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn370)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn393)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn399)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn405)(panda$collections$Iterator*);
typedef void (*$fn413)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn450)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn456)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn485)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn493)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn538)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn543)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn564)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn572)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn581)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn584)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn590)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn613)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn643)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn651)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn691)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn696)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn717)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn725)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn728)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn737)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn743)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn749)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn778)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn806)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn812)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn818)(panda$collections$Iterator*);
typedef void (*$fn826)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn906)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn912)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn918)(panda$collections$Iterator*);
typedef void (*$fn926)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn944)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1000)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1018)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1039)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1078)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1091)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1101)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1104)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1116)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1121)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1134)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1144)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1147)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1159)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1204)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1209)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1222)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1245)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1247)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1263)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn1274)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1291)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1324)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1332)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1340)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1343)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1350)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1367)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1380)(panda$collections$CollectionView*);
typedef void (*$fn1402)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1540)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1558)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1614)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1619)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1649)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1656)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1667)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1671)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1677)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1683)(panda$collections$Iterator*);
typedef void (*$fn1691)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1694)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1724)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1730)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1746)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1756)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1760)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1767)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1771)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1773)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1778)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1781)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1793)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1922)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1973)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1994)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2011)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2015)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2046)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2051)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2057)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2063)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2071)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn2078)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2083)(panda$collections$CollectionView*);
typedef void (*$fn2094)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2108)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2113)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2131)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2136)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2181)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2183)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2196)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2205)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2216)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2224)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2229)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2237)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2242)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2355)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2360)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2366)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2372)(panda$collections$Iterator*);
typedef void (*$fn2376)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2396)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2403)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2426)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2437)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2496)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2501)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2534)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2544)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2549)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2553)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2559)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2565)(panda$collections$Iterator*);
typedef void (*$fn2567)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2568)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2571)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2578)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2580)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2582)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2584)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2585)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2588)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2592)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2600)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2616)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2623)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2644)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2658)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2670)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2680)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2725)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2739)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2753)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2770)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2786)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2801)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2818)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2824)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2829)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2830)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2833)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2837)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2845)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2849)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2865)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2872)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2893)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2907)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2919)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2927)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2934)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2946)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2956)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2997)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3009)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3025)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3039)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3053)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3069)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3083)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3099)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3116)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3131)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3185)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3200)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3216)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3235)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3254)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3263)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3268)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3269)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3272)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3275)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3293)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3298)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3299)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3317)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3325)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3327)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3340)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3349)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3353)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3359)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3365)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn3416)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3426)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3435)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3450)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3463)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3469)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3471)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3509)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3516)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3522)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3528)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3533)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3539)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3545)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3556)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3562)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3568)(panda$collections$Iterator*);
typedef void (*$fn3576)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3578)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3580)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3583)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3685)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3694)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3699)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3705)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3711)(panda$collections$Iterator*);
typedef void (*$fn3724)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3727)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3738)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3744)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3750)(panda$collections$Iterator*);
typedef void (*$fn3753)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3755)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3758)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3768)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3770)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3772)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3774)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3776)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3777)(panda$core$Object*);

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
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 157, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 15204, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 15402, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70", 2, 13545, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6c\x66", 5, 14792042467, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6d", 12, -5595348649711353309, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2a", 9, 1496394141948660748, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6c\x66\x2d\x3e\x76\x61\x6c\x75\x65", 12, 3684417363826496863, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static panda$core$String $s764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x31\x2c\x20", 5, 15122232102, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x31\x2c\x20", 5, 15122232102, NULL };
static panda$core$String $s989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s1194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x3d\x20", 4, 137658487, NULL };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20", 4, 137372859, NULL };
static panda$core$String $s1243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s1311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s1317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s1325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s1327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s1335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s1400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static panda$core$String $s1428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6d\x61\x6c\x6c\x6f\x63\x28", 9, 1541204091645718446, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2a", 2, 14283, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d", 7, 157293860332681, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6c\x6c\x6f\x63\x28", 10, 8088200864683738024, NULL };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s1509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s1514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s1523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, 14279, NULL };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3f\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20\x4e\x55\x4c\x4c\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x61\x6c\x6c\x6f\x63\x28", 7, 223950062312973, NULL };
static panda$core$String $s1743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x63\x6c\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 27, 7283889564528102738, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x20\x3d\x20\x31\x3b", 15, -7616502316629902533, NULL };
static panda$core$String $s1762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s1765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s1834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 21448182697504497, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s1965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6d\x61\x6c\x6c\x6f\x63\x28", 9, 1541204091645718446, NULL };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 32, -2435628749655888173, NULL };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x2e\x76\x61\x6c\x75\x65\x20\x3d\x20\x31\x3b", 21, 5666803292027080506, NULL };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20\x32\x2c\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 70, 2026475985823268269, NULL };
static panda$core$String $s2065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s2068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6c\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s2211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s2391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d\x20\x3d\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, 21242756259, NULL };
static panda$core$String $s2435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6d\x69\x6e\x2e\x76\x61\x6c\x75\x65\x3b", 11, -3956212002962864875, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6d\x61\x78\x2e\x76\x61\x6c\x75\x65\x3b", 11, -4041768404061004273, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s2745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s2768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 12, -550717230962542041, NULL };
static panda$core$String $s2795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s2812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20\x31\x3b", 12, -4476855678279854640, NULL };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s2885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x73\x74\x61\x72\x74\x2e\x76\x61\x6c\x75\x65\x3b", 13, 3588086193908855763, NULL };
static panda$core$String $s2899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x65\x6e\x64\x2e\x76\x61\x6c\x75\x65\x3b", 11, 5794120589201096528, NULL };
static panda$core$String $s2938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x73\x74\x65\x70\x2e\x76\x61\x6c\x75\x65\x3b", 12, -1565217378717073995, NULL };
static panda$core$String $s2949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20\x30\x3b", 5, 13904243334, NULL };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s3129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2d\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20\x2d", 5, 13904537533, NULL };
static panda$core$String $s3225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20\x2d", 4, 137665772, NULL };
static panda$core$String $s3244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s3261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s3288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7b", 14, 1197661341919403142, NULL };
static panda$core$String $s3326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s3392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s3430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s3433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static panda$core$String $s3439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a\x29\x20", 3, 1462916, NULL };
static panda$core$String $s3441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x63\x68\x61\x72\x2a\x29\x20", 9, 1531222690101128410, NULL };
static panda$core$String $s3443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s3447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s3505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x41\x4e\x44\x41\x5f\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s3520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s3523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s3526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s3570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s3574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s3577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x3b", 6, 2103477946177, NULL };
static panda$core$String $s3579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6c\x74\x3a", 8, 21658216358330300, NULL };
static panda$core$String $s3582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s3679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s3695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s3722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s3757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

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
    org$pandalanguage$pandac$IRNode* $match$244_9138;
    panda$collections$ImmutableArray* statements140;
    {
        $match$244_9138 = p_stmt;
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$244_9138->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp139.value) {
        {
            panda$collections$ImmutableArray** $tmp141 = ((panda$collections$ImmutableArray**) ((char*) $match$244_9138->$data + 16));
            statements140 = *$tmp141;
            panda$core$Int64 $tmp142 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(statements140);
            panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp142, ((panda$core$Int64) { 0 }));
            if ($tmp143.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp144 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(statements140);
            panda$core$Int64 $tmp145 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp144, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp146 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(statements140, $tmp145);
            panda$core$Bit $tmp147 = org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp146));
            return $tmp147;
        }
        }
        else {
        panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$244_9138->$rawValue, ((panda$core$Int64) { 4 }));
        bool $tmp149 = $tmp150.value;
        if ($tmp149) goto $l151;
        panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$244_9138->$rawValue, ((panda$core$Int64) { 11 }));
        $tmp149 = $tmp152.value;
        $l151:;
        panda$core$Bit $tmp153 = { $tmp149 };
        bool $tmp148 = $tmp153.value;
        if ($tmp148) goto $l154;
        panda$core$Bit $tmp155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$244_9138->$rawValue, ((panda$core$Int64) { 27 }));
        $tmp148 = $tmp155.value;
        $l154:;
        panda$core$Bit $tmp156 = { $tmp148 };
        if ($tmp156.value) {
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
    org$pandalanguage$pandac$ClassDecl* cl168;
    panda$core$Int64 result177;
    panda$collections$Iterator* f$Iter178;
    org$pandalanguage$pandac$FieldDecl* f191;
    panda$core$Int64 size201;
    panda$core$Int64 align203;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp157 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp157.value) {
    {
        panda$core$Bit $tmp159 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s158);
        if ($tmp159.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp161 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s160);
        if ($tmp161.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp163 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s162);
        if ($tmp163.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp165 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s164);
        PANDA_ASSERT($tmp165.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp166 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp167 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp166);
    if ($tmp167.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp169 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl168 = $tmp169;
    PANDA_ASSERT(((panda$core$Bit) { cl168 != NULL }).value);
    panda$core$Bit $tmp171 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl168);
    panda$core$Bit $tmp172 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp171);
    bool $tmp170 = $tmp172.value;
    if ($tmp170) goto $l173;
    panda$core$Bit $tmp175 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl168)->name, &$s174);
    $tmp170 = $tmp175.value;
    $l173:;
    panda$core$Bit $tmp176 = { $tmp170 };
    if ($tmp176.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result177 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp179 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl168);
        ITable* $tmp180 = ((panda$collections$Iterable*) $tmp179)->$class->itable;
        while ($tmp180->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp180 = $tmp180->next;
        }
        $fn182 $tmp181 = $tmp180->methods[0];
        panda$collections$Iterator* $tmp183 = $tmp181(((panda$collections$Iterable*) $tmp179));
        f$Iter178 = $tmp183;
        $l184:;
        ITable* $tmp186 = f$Iter178->$class->itable;
        while ($tmp186->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp186 = $tmp186->next;
        }
        $fn188 $tmp187 = $tmp186->methods[0];
        panda$core$Bit $tmp189 = $tmp187(f$Iter178);
        panda$core$Bit $tmp190 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp189);
        if (!$tmp190.value) goto $l185;
        {
            ITable* $tmp192 = f$Iter178->$class->itable;
            while ($tmp192->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp192 = $tmp192->next;
            }
            $fn194 $tmp193 = $tmp192->methods[1];
            panda$core$Object* $tmp195 = $tmp193(f$Iter178);
            f191 = ((org$pandalanguage$pandac$FieldDecl*) $tmp195);
            panda$core$Bit $tmp196 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f191->annotations);
            if ($tmp196.value) {
            {
                goto $l184;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f191);
            org$pandalanguage$pandac$Type* $tmp197 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp198 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f191->type, $tmp197);
            if ($tmp198.value) {
            {
                panda$core$Int64 $tmp199 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl168);
                panda$core$Int64 $tmp200 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result177, $tmp199);
                result177 = $tmp200;
            }
            }
            else {
            {
                panda$core$Int64 $tmp202 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f191->type);
                size201 = $tmp202;
                panda$core$Int64 $tmp204 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result177, size201);
                align203 = $tmp204;
                panda$core$Bit $tmp205 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align203, ((panda$core$Int64) { 0 }));
                if ($tmp205.value) {
                {
                    panda$core$Int64 $tmp206 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size201, align203);
                    panda$core$Int64 $tmp207 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result177, $tmp206);
                    result177 = $tmp207;
                }
                }
                panda$core$Int64 $tmp208 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result177, size201);
                panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp208, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp209.value);
                panda$core$Int64 $tmp210 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result177, size201);
                result177 = $tmp210;
            }
            }
        }
        goto $l184;
        $l185:;
    }
    panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp211.value) {
    {
        panda$core$Int64 $tmp212 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result177, ((panda$core$Int64) { 1 }));
        result177 = $tmp212;
    }
    }
    return result177;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp213 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp214 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp213, ((panda$core$Int64) { 8 }));
    return $tmp214;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl215;
    panda$core$Int64 result221;
    panda$collections$Iterator* f$Iter224;
    org$pandalanguage$pandac$FieldDecl* f237;
    panda$core$Int64 size246;
    panda$core$Int64 align248;
    org$pandalanguage$pandac$ClassDecl* $tmp216 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl215 = $tmp216;
    bool $tmp217 = ((panda$core$Bit) { cl215 != NULL }).value;
    if (!$tmp217) goto $l218;
    panda$core$Bit $tmp219 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl215);
    $tmp217 = $tmp219.value;
    $l218:;
    panda$core$Bit $tmp220 = { $tmp217 };
    PANDA_ASSERT($tmp220.value);
    org$pandalanguage$pandac$Type* $tmp222 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp223 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp222);
    result221 = $tmp223;
    {
        panda$collections$ListView* $tmp225 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl215);
        ITable* $tmp226 = ((panda$collections$Iterable*) $tmp225)->$class->itable;
        while ($tmp226->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp226 = $tmp226->next;
        }
        $fn228 $tmp227 = $tmp226->methods[0];
        panda$collections$Iterator* $tmp229 = $tmp227(((panda$collections$Iterable*) $tmp225));
        f$Iter224 = $tmp229;
        $l230:;
        ITable* $tmp232 = f$Iter224->$class->itable;
        while ($tmp232->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp232 = $tmp232->next;
        }
        $fn234 $tmp233 = $tmp232->methods[0];
        panda$core$Bit $tmp235 = $tmp233(f$Iter224);
        panda$core$Bit $tmp236 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp235);
        if (!$tmp236.value) goto $l231;
        {
            ITable* $tmp238 = f$Iter224->$class->itable;
            while ($tmp238->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp238 = $tmp238->next;
            }
            $fn240 $tmp239 = $tmp238->methods[1];
            panda$core$Object* $tmp241 = $tmp239(f$Iter224);
            f237 = ((org$pandalanguage$pandac$FieldDecl*) $tmp241);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f237);
            org$pandalanguage$pandac$Type* $tmp242 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp243 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f237->type, $tmp242);
            if ($tmp243.value) {
            {
                panda$core$Int64 $tmp244 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl215);
                panda$core$Int64 $tmp245 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result221, $tmp244);
                result221 = $tmp245;
            }
            }
            else {
            {
                panda$core$Int64 $tmp247 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f237->type);
                size246 = $tmp247;
                panda$core$Int64 $tmp249 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result221, size246);
                align248 = $tmp249;
                panda$core$Bit $tmp250 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align248, ((panda$core$Int64) { 0 }));
                if ($tmp250.value) {
                {
                    panda$core$Int64 $tmp251 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size246, align248);
                    panda$core$Int64 $tmp252 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result221, $tmp251);
                    result221 = $tmp252;
                }
                }
                panda$core$Int64 $tmp253 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result221, size246);
                panda$core$Bit $tmp254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp253, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp254.value);
                panda$core$Int64 $tmp255 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result221, size246);
                result221 = $tmp255;
            }
            }
        }
        goto $l230;
        $l231:;
    }
    panda$core$Bit $tmp256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp256.value) {
    {
        panda$core$Int64 $tmp257 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result221, ((panda$core$Int64) { 1 }));
        result221 = $tmp257;
    }
    }
    return result221;
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp258 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp258.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp259 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    return $tmp259;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp260.value) {
    {
        panda$core$Object* $tmp261 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp262 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp261));
        return $tmp262;
    }
    }
    panda$core$String* $tmp263 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp264 = panda$core$String$convert$R$panda$core$String($tmp263);
    panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp264, &$s265);
    return $tmp266;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp267 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp267, &$s268);
    return $tmp269;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType270;
    panda$core$MutableString* result272;
    panda$core$Char8 $tmp279;
    panda$core$Char8 $tmp287;
    panda$core$Range$LTpanda$core$Int64$GT $tmp288;
    org$pandalanguage$pandac$Type* $tmp271 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType270 = $tmp271;
    panda$core$MutableString* $tmp273 = (panda$core$MutableString*) malloc(48);
    $tmp273->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp273->refCount.value = 1;
    panda$core$MutableString$init($tmp273);
    result272 = $tmp273;
    panda$core$Int64 $tmp275 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType270->subtypes);
    panda$core$Int64 $tmp276 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp275, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp277 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType270->subtypes, $tmp276);
    panda$core$String* $tmp278 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp277));
    panda$core$MutableString$append$panda$core$String(result272, $tmp278);
    panda$core$Char8$init$panda$core$UInt8(&$tmp279, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(result272, $tmp279);
    panda$core$Bit $tmp280 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp280.value);
    panda$core$String* $tmp281 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp282 = panda$core$String$convert$R$panda$core$String($tmp281);
    panda$core$String* $tmp284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp282, &$s283);
    panda$core$MutableString$append$panda$core$String(result272, $tmp284);
    panda$core$Bit $tmp285 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp285.value) {
    {
        panda$core$MutableString$append$panda$core$String(result272, &$s286);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp287, ((panda$core$UInt8) { 42 }));
    panda$core$MutableString$append$panda$core$Char8(result272, $tmp287);
    panda$core$Int64 $tmp289 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType270->subtypes);
    panda$core$Int64 $tmp290 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp289, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp288, ((panda$core$Int64) { 0 }), $tmp290, ((panda$core$Bit) { false }));
    int64_t $tmp292 = $tmp288.min.value;
    panda$core$Int64 i291 = { $tmp292 };
    int64_t $tmp294 = $tmp288.max.value;
    bool $tmp295 = $tmp288.inclusive.value;
    if ($tmp295) goto $l302; else goto $l303;
    $l302:;
    if ($tmp292 <= $tmp294) goto $l296; else goto $l298;
    $l303:;
    if ($tmp292 < $tmp294) goto $l296; else goto $l298;
    $l296:;
    {
        panda$core$MutableString$append$panda$core$String(result272, &$s304);
        panda$core$Object* $tmp305 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType270->subtypes, i291);
        panda$core$String* $tmp306 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp305));
        panda$core$MutableString$append$panda$core$String(result272, $tmp306);
    }
    $l299:;
    int64_t $tmp308 = $tmp294 - i291.value;
    if ($tmp295) goto $l309; else goto $l310;
    $l309:;
    if ((uint64_t) $tmp308 >= 1) goto $l307; else goto $l298;
    $l310:;
    if ((uint64_t) $tmp308 > 1) goto $l307; else goto $l298;
    $l307:;
    i291.value += 1;
    goto $l296;
    $l298:;
    panda$core$MutableString$append$panda$core$String(result272, &$s313);
    panda$core$String* $tmp314 = panda$core$MutableString$finish$R$panda$core$String(result272);
    return $tmp314;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp315.value);
    panda$core$Object* $tmp316 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp317 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp316));
    panda$core$String* $tmp318 = panda$core$String$convert$R$panda$core$String($tmp317);
    panda$core$String* $tmp320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp318, &$s319);
    return $tmp320;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces321;
    panda$core$String* previous324;
    panda$collections$Iterator* intfType$Iter326;
    org$pandalanguage$pandac$Type* intfType338;
    org$pandalanguage$pandac$ClassDecl* intf343;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC345;
    panda$collections$ListView* methods347;
    panda$core$String* name349;
    panda$core$MutableString* result358;
    panda$core$String* separator388;
    panda$collections$Iterator* m$Iter390;
    org$pandalanguage$pandac$MethodDecl* m402;
    org$pandalanguage$pandac$Type* $tmp322 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp323 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp322);
    interfaces321 = $tmp323;
    previous324 = &$s325;
    {
        ITable* $tmp327 = ((panda$collections$Iterable*) interfaces321)->$class->itable;
        while ($tmp327->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp327 = $tmp327->next;
        }
        $fn329 $tmp328 = $tmp327->methods[0];
        panda$collections$Iterator* $tmp330 = $tmp328(((panda$collections$Iterable*) interfaces321));
        intfType$Iter326 = $tmp330;
        $l331:;
        ITable* $tmp333 = intfType$Iter326->$class->itable;
        while ($tmp333->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp333 = $tmp333->next;
        }
        $fn335 $tmp334 = $tmp333->methods[0];
        panda$core$Bit $tmp336 = $tmp334(intfType$Iter326);
        panda$core$Bit $tmp337 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp336);
        if (!$tmp337.value) goto $l332;
        {
            ITable* $tmp339 = intfType$Iter326->$class->itable;
            while ($tmp339->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp339 = $tmp339->next;
            }
            $fn341 $tmp340 = $tmp339->methods[1];
            panda$core$Object* $tmp342 = $tmp340(intfType$Iter326);
            intfType338 = ((org$pandalanguage$pandac$Type*) $tmp342);
            org$pandalanguage$pandac$ClassDecl* $tmp344 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType338);
            intf343 = $tmp344;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp346 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf343);
            intfCC345 = $tmp346;
            panda$collections$ListView* $tmp348 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType338);
            methods347 = $tmp348;
            panda$core$String* $tmp350 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp351 = panda$core$String$convert$R$panda$core$String($tmp350);
            panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp351, &$s352);
            panda$core$String* $tmp354 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf343)->name);
            panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp353, $tmp354);
            panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp355, &$s356);
            name349 = $tmp357;
            panda$core$MutableString* $tmp359 = (panda$core$MutableString*) malloc(48);
            $tmp359->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp359->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp362 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp363 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp362);
            panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s361, $tmp363);
            panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, &$s365);
            ITable* $tmp368 = ((panda$collections$CollectionView*) methods347)->$class->itable;
            while ($tmp368->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp368 = $tmp368->next;
            }
            $fn370 $tmp369 = $tmp368->methods[0];
            panda$core$Int64 $tmp371 = $tmp369(((panda$collections$CollectionView*) methods347));
            panda$core$Int64$wrapper* $tmp372;
            $tmp372 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp372->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp372->refCount = 1;
            $tmp372->value = $tmp371;
            panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s367, ((panda$core$Object*) $tmp372));
            panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp373, &$s374);
            panda$core$String* $tmp376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp375, name349);
            panda$core$String* $tmp378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp376, &$s377);
            panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp366, $tmp378);
            panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s380, intfCC345->name);
            panda$core$String* $tmp383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp381, &$s382);
            panda$core$String* $tmp384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp383, previous324);
            panda$core$String* $tmp386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp384, &$s385);
            panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp379, $tmp386);
            panda$core$MutableString$init$panda$core$String($tmp359, $tmp387);
            result358 = $tmp359;
            separator388 = &$s389;
            {
                ITable* $tmp391 = ((panda$collections$Iterable*) methods347)->$class->itable;
                while ($tmp391->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp391 = $tmp391->next;
                }
                $fn393 $tmp392 = $tmp391->methods[0];
                panda$collections$Iterator* $tmp394 = $tmp392(((panda$collections$Iterable*) methods347));
                m$Iter390 = $tmp394;
                $l395:;
                ITable* $tmp397 = m$Iter390->$class->itable;
                while ($tmp397->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp397 = $tmp397->next;
                }
                $fn399 $tmp398 = $tmp397->methods[0];
                panda$core$Bit $tmp400 = $tmp398(m$Iter390);
                panda$core$Bit $tmp401 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp400);
                if (!$tmp401.value) goto $l396;
                {
                    ITable* $tmp403 = m$Iter390->$class->itable;
                    while ($tmp403->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp403 = $tmp403->next;
                    }
                    $fn405 $tmp404 = $tmp403->methods[1];
                    panda$core$Object* $tmp406 = $tmp404(m$Iter390);
                    m402 = ((org$pandalanguage$pandac$MethodDecl*) $tmp406);
                    panda$core$MutableString$append$panda$core$String(result358, separator388);
                    separator388 = &$s407;
                    panda$core$Bit $tmp408 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m402->annotations);
                    if ($tmp408.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result358, &$s409);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp410 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m402);
                        panda$core$MutableString$append$panda$core$String(result358, $tmp410);
                    }
                    }
                }
                goto $l395;
                $l396:;
            }
            panda$core$MutableString$append$panda$core$String(result358, &$s411);
            panda$core$String* $tmp412 = panda$core$MutableString$finish$R$panda$core$String(result358);
            (($fn413) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp412);
            panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s414, name349);
            panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp415, &$s416);
            previous324 = $tmp417;
        }
        goto $l331;
        $l332:;
    }
    return previous324;
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer418;
    panda$io$IndentedOutputStream* out421;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found424;
    org$pandalanguage$pandac$Type* effectiveReturnType432;
    panda$core$String* resultName436;
    panda$core$MutableString* resultType440;
    panda$core$String* self_t451;
    panda$core$Char8 $tmp457;
    panda$core$Range$LTpanda$core$Int64$GT $tmp458;
    panda$core$String* pType473;
    panda$collections$Array* casts496;
    panda$core$Range$LTpanda$core$Int64$GT $tmp499;
    panda$core$String* p514;
    panda$core$Range$LTpanda$core$Int64$GT $tmp544;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result585;
    panda$io$MemoryOutputStream* $tmp419 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp419->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp419->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp419);
    outBuffer418 = $tmp419;
    panda$io$IndentedOutputStream* $tmp422 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp422->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp422->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp422, ((panda$io$OutputStream*) outBuffer418));
    out421 = $tmp422;
    panda$core$Object* $tmp425 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found424 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp425);
    if (((panda$core$Bit) { found424 != NULL }).value) {
    {
        return found424;
    }
    }
    panda$core$Bit $tmp426 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp426.value);
    panda$core$Int64 $tmp427 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp428 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp429 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp428, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp427, $tmp429);
    PANDA_ASSERT($tmp430.value);
    panda$core$Bit $tmp431 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp431.value);
    panda$core$Int64 $tmp433 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp434 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp433, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp435 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp434);
    effectiveReturnType432 = ((org$pandalanguage$pandac$Type*) $tmp435);
    panda$core$String* $tmp437 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp437, &$s438);
    resultName436 = $tmp439;
    panda$core$MutableString* $tmp441 = (panda$core$MutableString*) malloc(48);
    $tmp441->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp441->refCount.value = 1;
    panda$core$String* $tmp443 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType432);
    panda$core$MutableString$init$panda$core$String($tmp441, $tmp443);
    resultType440 = $tmp441;
    panda$core$String* $tmp444 = panda$core$MutableString$convert$R$panda$core$String(resultType440);
    panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp444, &$s445);
    panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp446, resultName436);
    panda$core$String* $tmp449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp447, &$s448);
    (($fn450) ((panda$io$OutputStream*) out421)->$class->vtable[16])(((panda$io$OutputStream*) out421), $tmp449);
    panda$core$String* $tmp452 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t451 = $tmp452;
    panda$core$String* $tmp453 = panda$core$String$convert$R$panda$core$String(self_t451);
    panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp453, &$s454);
    (($fn456) ((panda$io$OutputStream*) out421)->$class->vtable[16])(((panda$io$OutputStream*) out421), $tmp455);
    panda$core$Char8$init$panda$core$UInt8(&$tmp457, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(resultType440, $tmp457);
    panda$core$MutableString$append$panda$core$String(resultType440, self_t451);
    panda$core$Int64 $tmp459 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp458, ((panda$core$Int64) { 0 }), $tmp459, ((panda$core$Bit) { false }));
    int64_t $tmp461 = $tmp458.min.value;
    panda$core$Int64 i460 = { $tmp461 };
    int64_t $tmp463 = $tmp458.max.value;
    bool $tmp464 = $tmp458.inclusive.value;
    if ($tmp464) goto $l471; else goto $l472;
    $l471:;
    if ($tmp461 <= $tmp463) goto $l465; else goto $l467;
    $l472:;
    if ($tmp461 < $tmp463) goto $l465; else goto $l467;
    $l465:;
    {
        panda$core$Object* $tmp474 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i460);
        panda$core$String* $tmp475 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp474));
        pType473 = $tmp475;
        panda$core$MutableString$append$panda$core$String(resultType440, &$s476);
        panda$core$MutableString$append$panda$core$String(resultType440, pType473);
        panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s477, pType473);
        panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp478, &$s479);
        panda$core$Int64$wrapper* $tmp481;
        $tmp481 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp481->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp481->refCount = 1;
        $tmp481->value = i460;
        panda$core$String* $tmp482 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp480, ((panda$core$Object*) $tmp481));
        panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp482, &$s483);
        (($fn485) ((panda$io$OutputStream*) out421)->$class->vtable[16])(((panda$io$OutputStream*) out421), $tmp484);
    }
    $l468:;
    int64_t $tmp487 = $tmp463 - i460.value;
    if ($tmp464) goto $l488; else goto $l489;
    $l488:;
    if ((uint64_t) $tmp487 >= 1) goto $l486; else goto $l467;
    $l489:;
    if ((uint64_t) $tmp487 > 1) goto $l486; else goto $l467;
    $l486:;
    i460.value += 1;
    goto $l465;
    $l467:;
    (($fn493) ((panda$io$OutputStream*) out421)->$class->vtable[19])(((panda$io$OutputStream*) out421), &$s492);
    panda$core$Int64 $tmp494 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out421->level, ((panda$core$Int64) { 1 }));
    out421->level = $tmp494;
    panda$core$MutableString$append$panda$core$String(resultType440, &$s495);
    panda$collections$Array* $tmp497 = (panda$collections$Array*) malloc(40);
    $tmp497->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp497->refCount.value = 1;
    panda$collections$Array$init($tmp497);
    casts496 = $tmp497;
    panda$core$Int64 $tmp500 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp499, ((panda$core$Int64) { 0 }), $tmp500, ((panda$core$Bit) { false }));
    int64_t $tmp502 = $tmp499.min.value;
    panda$core$Int64 i501 = { $tmp502 };
    int64_t $tmp504 = $tmp499.max.value;
    bool $tmp505 = $tmp499.inclusive.value;
    if ($tmp505) goto $l512; else goto $l513;
    $l512:;
    if ($tmp502 <= $tmp504) goto $l506; else goto $l508;
    $l513:;
    if ($tmp502 < $tmp504) goto $l506; else goto $l508;
    $l506:;
    {
        panda$core$Int64$wrapper* $tmp516;
        $tmp516 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp516->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp516->refCount = 1;
        $tmp516->value = i501;
        panda$core$String* $tmp517 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s515, ((panda$core$Object*) $tmp516));
        panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp517, &$s518);
        p514 = $tmp519;
        panda$core$Object* $tmp520 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i501);
        panda$core$Object* $tmp521 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i501);
        panda$core$Bit $tmp522 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp520)->type, ((org$pandalanguage$pandac$Type*) $tmp521));
        if ($tmp522.value) {
        {
            panda$core$Object* $tmp523 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i501);
            panda$core$Object* $tmp524 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i501);
            panda$core$String* $tmp525 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p514, ((org$pandalanguage$pandac$Type*) $tmp523), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp524)->type, out421);
            panda$collections$Array$add$panda$collections$Array$T(casts496, ((panda$core$Object*) $tmp525));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts496, ((panda$core$Object*) p514));
        }
        }
    }
    $l509:;
    int64_t $tmp527 = $tmp504 - i501.value;
    if ($tmp505) goto $l528; else goto $l529;
    $l528:;
    if ((uint64_t) $tmp527 >= 1) goto $l526; else goto $l508;
    $l529:;
    if ((uint64_t) $tmp527 > 1) goto $l526; else goto $l508;
    $l526:;
    i501.value += 1;
    goto $l506;
    $l508:;
    org$pandalanguage$pandac$Type* $tmp532 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp533 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp532);
    if ($tmp533.value) {
    {
        panda$core$String* $tmp534 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp535 = panda$core$String$convert$R$panda$core$String($tmp534);
        panda$core$String* $tmp537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp535, &$s536);
        (($fn538) ((panda$io$OutputStream*) out421)->$class->vtable[16])(((panda$io$OutputStream*) out421), $tmp537);
    }
    }
    panda$core$String* $tmp539 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp540 = panda$core$String$convert$R$panda$core$String($tmp539);
    panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp540, &$s541);
    (($fn543) ((panda$io$OutputStream*) out421)->$class->vtable[16])(((panda$io$OutputStream*) out421), $tmp542);
    panda$core$Int64 $tmp545 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp544, ((panda$core$Int64) { 0 }), $tmp545, ((panda$core$Bit) { false }));
    int64_t $tmp547 = $tmp544.min.value;
    panda$core$Int64 i546 = { $tmp547 };
    int64_t $tmp549 = $tmp544.max.value;
    bool $tmp550 = $tmp544.inclusive.value;
    if ($tmp550) goto $l557; else goto $l558;
    $l557:;
    if ($tmp547 <= $tmp549) goto $l551; else goto $l553;
    $l558:;
    if ($tmp547 < $tmp549) goto $l551; else goto $l553;
    $l551:;
    {
        panda$core$Object* $tmp560 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts496, i546);
        panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s559, ((panda$core$String*) $tmp560));
        panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp561, &$s562);
        (($fn564) ((panda$io$OutputStream*) out421)->$class->vtable[16])(((panda$io$OutputStream*) out421), $tmp563);
    }
    $l554:;
    int64_t $tmp566 = $tmp549 - i546.value;
    if ($tmp550) goto $l567; else goto $l568;
    $l567:;
    if ((uint64_t) $tmp566 >= 1) goto $l565; else goto $l553;
    $l568:;
    if ((uint64_t) $tmp566 > 1) goto $l565; else goto $l553;
    $l565:;
    i546.value += 1;
    goto $l551;
    $l553:;
    (($fn572) ((panda$io$OutputStream*) out421)->$class->vtable[19])(((panda$io$OutputStream*) out421), &$s571);
    org$pandalanguage$pandac$Type* $tmp573 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp574 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp573);
    if ($tmp574.value) {
    {
        panda$core$String* $tmp577 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s576, p_raw->returnType, effectiveReturnType432, out421);
        panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s575, $tmp577);
        panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, &$s579);
        (($fn581) ((panda$io$OutputStream*) out421)->$class->vtable[19])(((panda$io$OutputStream*) out421), $tmp580);
    }
    }
    panda$core$Int64 $tmp582 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out421->level, ((panda$core$Int64) { 1 }));
    out421->level = $tmp582;
    (($fn584) ((panda$io$OutputStream*) out421)->$class->vtable[19])(((panda$io$OutputStream*) out421), &$s583);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp586 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) malloc(32);
    $tmp586->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;
    $tmp586->refCount.value = 1;
    panda$core$String* $tmp588 = panda$core$MutableString$finish$R$panda$core$String(resultType440);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp586, resultName436, $tmp588);
    result585 = $tmp586;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result585));
    panda$core$String* $tmp589 = panda$io$MemoryOutputStream$finish$R$panda$core$String(outBuffer418);
    (($fn590) p_rawOut->$class->vtable[16])(p_rawOut, $tmp589);
    return result585;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod592;
    panda$core$String* result593;
    panda$core$String* selfType598;
    org$pandalanguage$pandac$Type* actualMethodType614;
    org$pandalanguage$pandac$Type* inheritedMethodType616;
    panda$core$Range$LTpanda$core$Int64$GT $tmp618;
    panda$collections$Array* parameters653;
    panda$core$Range$LTpanda$core$Int64$GT $tmp656;
    panda$collections$Array* children681;
    org$pandalanguage$pandac$Position $tmp686;
    panda$core$Range$LTpanda$core$Int64$GT $tmp697;
    panda$core$Bit $tmp591 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp591.value);
    oldMethod592 = self->currentMethod;
    self->currentMethod = p_m;
    panda$core$String* $tmp594 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp595 = panda$core$String$convert$R$panda$core$String($tmp594);
    panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp595, &$s596);
    result593 = $tmp597;
    panda$core$String* $tmp599 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp600 = panda$core$String$convert$R$panda$core$String($tmp599);
    panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp600, &$s601);
    selfType598 = $tmp602;
    panda$core$String* $tmp603 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp604 = panda$core$String$convert$R$panda$core$String($tmp603);
    panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp604, &$s605);
    panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp606, result593);
    panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp607, &$s608);
    panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp609, selfType598);
    panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp610, &$s611);
    (($fn613) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp612);
    org$pandalanguage$pandac$Type* $tmp615 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType614 = $tmp615;
    org$pandalanguage$pandac$Type* $tmp617 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType616 = $tmp617;
    panda$core$Int64 $tmp619 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp618, ((panda$core$Int64) { 0 }), $tmp619, ((panda$core$Bit) { false }));
    int64_t $tmp621 = $tmp618.min.value;
    panda$core$Int64 i620 = { $tmp621 };
    int64_t $tmp623 = $tmp618.max.value;
    bool $tmp624 = $tmp618.inclusive.value;
    if ($tmp624) goto $l631; else goto $l632;
    $l631:;
    if ($tmp621 <= $tmp623) goto $l625; else goto $l627;
    $l632:;
    if ($tmp621 < $tmp623) goto $l625; else goto $l627;
    $l625:;
    {
        panda$core$Object* $tmp634 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType616->subtypes, i620);
        panda$core$String* $tmp635 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp634));
        panda$core$String* $tmp636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s633, $tmp635);
        panda$core$String* $tmp638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp636, &$s637);
        panda$core$Object* $tmp639 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i620);
        panda$core$String* $tmp640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp638, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp639)->name);
        panda$core$String* $tmp642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp640, &$s641);
        (($fn643) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp642);
    }
    $l628:;
    int64_t $tmp645 = $tmp623 - i620.value;
    if ($tmp624) goto $l646; else goto $l647;
    $l646:;
    if ((uint64_t) $tmp645 >= 1) goto $l644; else goto $l627;
    $l647:;
    if ((uint64_t) $tmp645 > 1) goto $l644; else goto $l627;
    $l644:;
    i620.value += 1;
    goto $l625;
    $l627:;
    (($fn651) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s650);
    panda$core$Int64 $tmp652 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp652;
    panda$collections$Array* $tmp654 = (panda$collections$Array*) malloc(40);
    $tmp654->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp654->refCount.value = 1;
    panda$collections$Array$init($tmp654);
    parameters653 = $tmp654;
    panda$core$Int64 $tmp657 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp656, ((panda$core$Int64) { 0 }), $tmp657, ((panda$core$Bit) { false }));
    int64_t $tmp659 = $tmp656.min.value;
    panda$core$Int64 i658 = { $tmp659 };
    int64_t $tmp661 = $tmp656.max.value;
    bool $tmp662 = $tmp656.inclusive.value;
    if ($tmp662) goto $l669; else goto $l670;
    $l669:;
    if ($tmp659 <= $tmp661) goto $l663; else goto $l665;
    $l670:;
    if ($tmp659 < $tmp661) goto $l663; else goto $l665;
    $l663:;
    {
        panda$core$Object* $tmp671 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i658);
        panda$core$Object* $tmp672 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType616->subtypes, i658);
        panda$core$Object* $tmp673 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType614->subtypes, i658);
        panda$core$String* $tmp674 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp671)->name, ((org$pandalanguage$pandac$Type*) $tmp672), ((org$pandalanguage$pandac$Type*) $tmp673), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters653, ((panda$core$Object*) $tmp674));
    }
    $l666:;
    int64_t $tmp676 = $tmp661 - i658.value;
    if ($tmp662) goto $l677; else goto $l678;
    $l677:;
    if ((uint64_t) $tmp676 >= 1) goto $l675; else goto $l665;
    $l678:;
    if ((uint64_t) $tmp676 > 1) goto $l675; else goto $l665;
    $l675:;
    i658.value += 1;
    goto $l663;
    $l665:;
    panda$collections$Array* $tmp682 = (panda$collections$Array*) malloc(40);
    $tmp682->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp682->refCount.value = 1;
    panda$collections$Array$init($tmp682);
    children681 = $tmp682;
    org$pandalanguage$pandac$IRNode* $tmp684 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp684->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp684->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp686);
    org$pandalanguage$pandac$Type* $tmp687 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp684, ((panda$core$Int64) { 30 }), $tmp686, $tmp687);
    panda$collections$Array$add$panda$collections$Array$T(children681, ((panda$core$Object*) $tmp684));
    org$pandalanguage$pandac$Type* $tmp688 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp689 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp688);
    if ($tmp689.value) {
    {
        (($fn691) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s690);
    }
    }
    panda$core$String* $tmp692 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp693 = panda$core$String$convert$R$panda$core$String($tmp692);
    panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp693, &$s694);
    (($fn696) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp695);
    panda$core$Int64 $tmp698 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp697, ((panda$core$Int64) { 0 }), $tmp698, ((panda$core$Bit) { false }));
    int64_t $tmp700 = $tmp697.min.value;
    panda$core$Int64 i699 = { $tmp700 };
    int64_t $tmp702 = $tmp697.max.value;
    bool $tmp703 = $tmp697.inclusive.value;
    if ($tmp703) goto $l710; else goto $l711;
    $l710:;
    if ($tmp700 <= $tmp702) goto $l704; else goto $l706;
    $l711:;
    if ($tmp700 < $tmp702) goto $l704; else goto $l706;
    $l704:;
    {
        panda$core$Object* $tmp713 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters653, i699);
        panda$core$String* $tmp714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s712, ((panda$core$String*) $tmp713));
        panda$core$String* $tmp716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp714, &$s715);
        (($fn717) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp716);
    }
    $l707:;
    int64_t $tmp719 = $tmp702 - i699.value;
    if ($tmp703) goto $l720; else goto $l721;
    $l720:;
    if ((uint64_t) $tmp719 >= 1) goto $l718; else goto $l706;
    $l721:;
    if ((uint64_t) $tmp719 > 1) goto $l718; else goto $l706;
    $l718:;
    i699.value += 1;
    goto $l704;
    $l706:;
    (($fn725) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s724);
    panda$core$Int64 $tmp726 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp726;
    (($fn728) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s727);
    self->currentMethod = oldMethod592;
    return result593;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces729;
    panda$core$String* previous732;
    panda$collections$Iterator* intfType$Iter734;
    org$pandalanguage$pandac$Type* intfType746;
    org$pandalanguage$pandac$ClassDecl* intf751;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC753;
    panda$collections$ListView* methods755;
    panda$core$String* name757;
    panda$core$MutableString* result766;
    panda$core$String* separator801;
    panda$collections$Iterator* m$Iter803;
    org$pandalanguage$pandac$MethodDecl* m815;
    org$pandalanguage$pandac$Type* $tmp730 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp731 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp730);
    interfaces729 = $tmp731;
    previous732 = &$s733;
    {
        ITable* $tmp735 = ((panda$collections$Iterable*) interfaces729)->$class->itable;
        while ($tmp735->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp735 = $tmp735->next;
        }
        $fn737 $tmp736 = $tmp735->methods[0];
        panda$collections$Iterator* $tmp738 = $tmp736(((panda$collections$Iterable*) interfaces729));
        intfType$Iter734 = $tmp738;
        $l739:;
        ITable* $tmp741 = intfType$Iter734->$class->itable;
        while ($tmp741->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp741 = $tmp741->next;
        }
        $fn743 $tmp742 = $tmp741->methods[0];
        panda$core$Bit $tmp744 = $tmp742(intfType$Iter734);
        panda$core$Bit $tmp745 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp744);
        if (!$tmp745.value) goto $l740;
        {
            ITable* $tmp747 = intfType$Iter734->$class->itable;
            while ($tmp747->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp747 = $tmp747->next;
            }
            $fn749 $tmp748 = $tmp747->methods[1];
            panda$core$Object* $tmp750 = $tmp748(intfType$Iter734);
            intfType746 = ((org$pandalanguage$pandac$Type*) $tmp750);
            org$pandalanguage$pandac$ClassDecl* $tmp752 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType746);
            intf751 = $tmp752;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp754 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf751);
            intfCC753 = $tmp754;
            panda$collections$ListView* $tmp756 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType746);
            methods755 = $tmp756;
            panda$core$String* $tmp758 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp759 = panda$core$String$convert$R$panda$core$String($tmp758);
            panda$core$String* $tmp761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp759, &$s760);
            panda$core$String* $tmp762 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf751)->name);
            panda$core$String* $tmp763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp761, $tmp762);
            panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp763, &$s764);
            name757 = $tmp765;
            panda$core$MutableString* $tmp767 = (panda$core$MutableString*) malloc(48);
            $tmp767->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp767->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp770 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp771 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp770);
            panda$core$String* $tmp772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s769, $tmp771);
            panda$core$String* $tmp774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp772, &$s773);
            ITable* $tmp776 = ((panda$collections$CollectionView*) methods755)->$class->itable;
            while ($tmp776->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp776 = $tmp776->next;
            }
            $fn778 $tmp777 = $tmp776->methods[0];
            panda$core$Int64 $tmp779 = $tmp777(((panda$collections$CollectionView*) methods755));
            panda$core$Int64$wrapper* $tmp780;
            $tmp780 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp780->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp780->refCount = 1;
            $tmp780->value = $tmp779;
            panda$core$String* $tmp781 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s775, ((panda$core$Object*) $tmp780));
            panda$core$String* $tmp783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp781, &$s782);
            panda$core$String* $tmp784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp783, name757);
            panda$core$String* $tmp786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp784, &$s785);
            panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp774, $tmp786);
            org$pandalanguage$pandac$Type* $tmp789 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp790 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp789);
            panda$core$String* $tmp791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s788, $tmp790);
            panda$core$String* $tmp793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp791, &$s792);
            panda$core$String* $tmp794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp793, intfCC753->name);
            panda$core$String* $tmp796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp794, &$s795);
            panda$core$String* $tmp797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp796, previous732);
            panda$core$String* $tmp799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp797, &$s798);
            panda$core$String* $tmp800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp787, $tmp799);
            panda$core$MutableString$init$panda$core$String($tmp767, $tmp800);
            result766 = $tmp767;
            separator801 = &$s802;
            {
                ITable* $tmp804 = ((panda$collections$Iterable*) methods755)->$class->itable;
                while ($tmp804->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp804 = $tmp804->next;
                }
                $fn806 $tmp805 = $tmp804->methods[0];
                panda$collections$Iterator* $tmp807 = $tmp805(((panda$collections$Iterable*) methods755));
                m$Iter803 = $tmp807;
                $l808:;
                ITable* $tmp810 = m$Iter803->$class->itable;
                while ($tmp810->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp810 = $tmp810->next;
                }
                $fn812 $tmp811 = $tmp810->methods[0];
                panda$core$Bit $tmp813 = $tmp811(m$Iter803);
                panda$core$Bit $tmp814 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp813);
                if (!$tmp814.value) goto $l809;
                {
                    ITable* $tmp816 = m$Iter803->$class->itable;
                    while ($tmp816->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp816 = $tmp816->next;
                    }
                    $fn818 $tmp817 = $tmp816->methods[1];
                    panda$core$Object* $tmp819 = $tmp817(m$Iter803);
                    m815 = ((org$pandalanguage$pandac$MethodDecl*) $tmp819);
                    panda$core$MutableString$append$panda$core$String(result766, separator801);
                    separator801 = &$s820;
                    panda$core$Bit $tmp821 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m815->annotations);
                    if ($tmp821.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result766, &$s822);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp823 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m815, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result766, $tmp823);
                    }
                    }
                }
                goto $l808;
                $l809:;
            }
            panda$core$MutableString$append$panda$core$String(result766, &$s824);
            panda$core$String* $tmp825 = panda$core$MutableString$finish$R$panda$core$String(result766);
            (($fn826) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp825);
            panda$core$String* $tmp828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s827, name757);
            panda$core$String* $tmp830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp828, &$s829);
            previous732 = $tmp830;
        }
        goto $l739;
        $l740:;
    }
    return previous732;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp831 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp831;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result833;
    org$pandalanguage$pandac$Type* declared834;
    org$pandalanguage$pandac$Type* inherited837;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim840;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    panda$core$Bit $tmp832 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp832.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp835 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp836 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp835);
    declared834 = $tmp836;
    org$pandalanguage$pandac$Type* $tmp838 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited837 = $tmp838;
    panda$core$Bit $tmp839 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared834, inherited837);
    if ($tmp839.value) {
    {
        org$pandalanguage$pandac$Type* $tmp841 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp842 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp841, ((panda$io$OutputStream*) self->shims));
        shim840 = $tmp842;
        result833 = shim840->name;
    }
    }
    else {
    {
        panda$core$String* $tmp843 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        result833 = $tmp843;
    }
    }
    return result833;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result844;
    panda$core$String* type846;
    panda$collections$ListView* vtable857;
    panda$core$String* superPtr867;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC868;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant876;
    panda$core$MutableString* code880;
    panda$core$String* separator901;
    panda$collections$Iterator* m$Iter903;
    org$pandalanguage$pandac$MethodDecl* m915;
    panda$core$Object* $tmp845 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result844 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp845);
    if (((panda$core$Bit) { result844 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        panda$core$Bit $tmp847 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp847.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp848 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp848->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp848->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp850 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp851 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp850)->name);
            panda$core$String* $tmp852 = panda$core$String$convert$R$panda$core$String($tmp851);
            panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp852, &$s853);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp848, $tmp854, &$s855);
            result844 = $tmp848;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result844));
            panda$core$Object* $tmp856 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp856);
        }
        }
        panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp858 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable857 = $tmp858;
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp859 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
        $tmp859->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
        $tmp859->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp861 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp862 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp861)->name);
        panda$core$String* $tmp863 = panda$core$String$convert$R$panda$core$String($tmp862);
        panda$core$String* $tmp865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp863, &$s864);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp859, $tmp865, &$s866);
        result844 = $tmp859;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result844));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp869 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp870 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp869);
            superCC868 = $tmp870;
            panda$core$String* $tmp872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s871, superCC868->name);
            panda$core$String* $tmp874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp872, &$s873);
            superPtr867 = $tmp874;
        }
        }
        else {
        {
            superPtr867 = &$s875;
        }
        }
        org$pandalanguage$pandac$Type* $tmp877 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp878 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp877);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp879 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp878);
        clConstant876 = $tmp879;
        panda$core$MutableString* $tmp881 = (panda$core$MutableString*) malloc(48);
        $tmp881->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp881->refCount.value = 1;
        panda$core$String* $tmp883 = panda$core$String$convert$R$panda$core$String(result844->name);
        panda$core$String* $tmp885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp883, &$s884);
        panda$core$String* $tmp886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp885, result844->name);
        panda$core$String* $tmp888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp886, &$s887);
        panda$core$String* $tmp890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s889, clConstant876->name);
        panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp890, &$s891);
        panda$core$String* $tmp893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp892, superPtr867);
        panda$core$String* $tmp895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp893, &$s894);
        panda$core$String* $tmp896 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp895, $tmp896);
        panda$core$String* $tmp899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp897, &$s898);
        panda$core$String* $tmp900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp888, $tmp899);
        panda$core$MutableString$init$panda$core$String($tmp881, $tmp900);
        code880 = $tmp881;
        separator901 = &$s902;
        {
            ITable* $tmp904 = ((panda$collections$Iterable*) vtable857)->$class->itable;
            while ($tmp904->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp904 = $tmp904->next;
            }
            $fn906 $tmp905 = $tmp904->methods[0];
            panda$collections$Iterator* $tmp907 = $tmp905(((panda$collections$Iterable*) vtable857));
            m$Iter903 = $tmp907;
            $l908:;
            ITable* $tmp910 = m$Iter903->$class->itable;
            while ($tmp910->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp910 = $tmp910->next;
            }
            $fn912 $tmp911 = $tmp910->methods[0];
            panda$core$Bit $tmp913 = $tmp911(m$Iter903);
            panda$core$Bit $tmp914 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp913);
            if (!$tmp914.value) goto $l909;
            {
                ITable* $tmp916 = m$Iter903->$class->itable;
                while ($tmp916->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp916 = $tmp916->next;
                }
                $fn918 $tmp917 = $tmp916->methods[1];
                panda$core$Object* $tmp919 = $tmp917(m$Iter903);
                m915 = ((org$pandalanguage$pandac$MethodDecl*) $tmp919);
                panda$core$MutableString$append$panda$core$String(code880, separator901);
                panda$core$Bit $tmp920 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m915->annotations);
                if ($tmp920.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code880, &$s921);
                }
                }
                else {
                {
                    panda$core$String* $tmp922 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m915);
                    panda$core$MutableString$append$panda$core$String(code880, $tmp922);
                }
                }
                separator901 = &$s923;
            }
            goto $l908;
            $l909:;
        }
        panda$core$MutableString$append$panda$core$String(code880, &$s924);
        panda$core$String* $tmp925 = panda$core$MutableString$finish$R$panda$core$String(code880);
        (($fn926) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp925);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    }
    }
    return result844;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name927;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result932;
    panda$core$String* type936;
    org$pandalanguage$pandac$ClassDecl* value947;
    panda$collections$ListView* valueVTable950;
    panda$collections$ListView* vtable959;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC961;
    panda$core$String* superCast964;
    panda$core$String* itable969;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant971;
    panda$core$MutableString* code975;
    panda$core$String* separator995;
    panda$core$Range$LTpanda$core$Int64$GT $tmp997;
    org$pandalanguage$pandac$MethodDecl* m1015;
    panda$core$String* methodName1020;
    panda$core$String* $tmp928 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp929 = panda$core$String$convert$R$panda$core$String($tmp928);
    panda$core$String* $tmp931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp929, &$s930);
    name927 = $tmp931;
    panda$core$Object* $tmp933 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name927));
    result932 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp933);
    if (((panda$core$Bit) { result932 == NULL }).value) {
    {
        panda$core$Bit $tmp934 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp934.value) {
        {
            org$pandalanguage$pandac$Type* $tmp935 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp935);
            type936 = &$s937;
            panda$core$String* $tmp938 = panda$core$String$convert$R$panda$core$String(name927);
            panda$core$String* $tmp940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp938, &$s939);
            panda$core$String* $tmp941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp940, type936);
            panda$core$String* $tmp943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp941, &$s942);
            (($fn944) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp943);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp945 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp945->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp945->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp945, name927, type936);
            result932 = $tmp945;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp948 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp949 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp948);
            value947 = $tmp949;
            panda$collections$ListView* $tmp951 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value947);
            valueVTable950 = $tmp951;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp952 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp952->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp952->refCount.value = 1;
            panda$core$String* $tmp954 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp955 = panda$core$String$convert$R$panda$core$String($tmp954);
            panda$core$String* $tmp957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp955, &$s956);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp952, $tmp957, &$s958);
            result932 = $tmp952;
            panda$collections$ListView* $tmp960 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable959 = $tmp960;
            org$pandalanguage$pandac$ClassDecl* $tmp962 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp963 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp962);
            superCC961 = $tmp963;
            panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s965, superCC961->name);
            panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp966, &$s967);
            superCast964 = $tmp968;
            panda$core$String* $tmp970 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable969 = $tmp970;
            org$pandalanguage$pandac$Type* $tmp972 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp973 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp972);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp974 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp973);
            clConstant971 = $tmp974;
            panda$core$MutableString* $tmp976 = (panda$core$MutableString*) malloc(48);
            $tmp976->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp976->refCount.value = 1;
            panda$core$String* $tmp978 = panda$core$String$convert$R$panda$core$String(result932->name);
            panda$core$String* $tmp980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp978, &$s979);
            panda$core$String* $tmp981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp980, result932->name);
            panda$core$String* $tmp983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp981, &$s982);
            panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s984, clConstant971->name);
            panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp985, &$s986);
            panda$core$String* $tmp988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp987, superCast964);
            panda$core$String* $tmp990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp988, &$s989);
            panda$core$String* $tmp991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp990, itable969);
            panda$core$String* $tmp993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp991, &$s992);
            panda$core$String* $tmp994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp983, $tmp993);
            panda$core$MutableString$init$panda$core$String($tmp976, $tmp994);
            code975 = $tmp976;
            separator995 = &$s996;
            ITable* $tmp998 = ((panda$collections$CollectionView*) valueVTable950)->$class->itable;
            while ($tmp998->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp998 = $tmp998->next;
            }
            $fn1000 $tmp999 = $tmp998->methods[0];
            panda$core$Int64 $tmp1001 = $tmp999(((panda$collections$CollectionView*) valueVTable950));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp997, ((panda$core$Int64) { 0 }), $tmp1001, ((panda$core$Bit) { false }));
            int64_t $tmp1003 = $tmp997.min.value;
            panda$core$Int64 i1002 = { $tmp1003 };
            int64_t $tmp1005 = $tmp997.max.value;
            bool $tmp1006 = $tmp997.inclusive.value;
            if ($tmp1006) goto $l1013; else goto $l1014;
            $l1013:;
            if ($tmp1003 <= $tmp1005) goto $l1007; else goto $l1009;
            $l1014:;
            if ($tmp1003 < $tmp1005) goto $l1007; else goto $l1009;
            $l1007:;
            {
                ITable* $tmp1016 = vtable959->$class->itable;
                while ($tmp1016->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1016 = $tmp1016->next;
                }
                $fn1018 $tmp1017 = $tmp1016->methods[0];
                panda$core$Object* $tmp1019 = $tmp1017(vtable959, i1002);
                m1015 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1019);
                if (((panda$core$Bit) { ((panda$core$Object*) m1015->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1021 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1015, self->wrapperShims);
                    methodName1020 = $tmp1021;
                }
                }
                else {
                {
                    panda$core$String* $tmp1022 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1015);
                    methodName1020 = $tmp1022;
                    panda$core$Bit $tmp1023 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1015->owner);
                    if ($tmp1023.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1015);
                    }
                    }
                }
                }
                panda$core$String* $tmp1024 = panda$core$String$convert$R$panda$core$String(separator995);
                panda$core$String* $tmp1026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1024, &$s1025);
                panda$core$String* $tmp1027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1026, methodName1020);
                panda$core$String* $tmp1029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1027, &$s1028);
                panda$core$MutableString$append$panda$core$String(code975, $tmp1029);
                separator995 = &$s1030;
            }
            $l1010:;
            int64_t $tmp1032 = $tmp1005 - i1002.value;
            if ($tmp1006) goto $l1033; else goto $l1034;
            $l1033:;
            if ((uint64_t) $tmp1032 >= 1) goto $l1031; else goto $l1009;
            $l1034:;
            if ((uint64_t) $tmp1032 > 1) goto $l1031; else goto $l1009;
            $l1031:;
            i1002.value += 1;
            goto $l1007;
            $l1009:;
            panda$core$MutableString$append$panda$core$String(code975, &$s1037);
            panda$core$String* $tmp1038 = panda$core$MutableString$finish$R$panda$core$String(code975);
            (($fn1039) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1038);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name927), ((panda$core$Object*) result932));
    }
    }
    return result932;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1045;
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
        panda$core$String* $tmp1048 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, &$s1049);
        panda$core$Int64$wrapper* $tmp1051;
        $tmp1051 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp1051->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp1051->refCount = 1;
        $tmp1051->value = self->varCount;
        panda$core$String* $tmp1052 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1050, ((panda$core$Object*) $tmp1051));
        panda$core$String* $tmp1054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1052, &$s1053);
        result1045 = $tmp1054;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1045));
    }
    }
    return result1045;
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
    panda$core$Int64 $match$670_131063;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1065;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1071;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1073;
    {
        $match$670_131063 = p_t->typeKind;
        panda$core$Bit $tmp1064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$670_131063, ((panda$core$Int64) { 12 }));
        if ($tmp1064.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1065, ((panda$core$Int64) { 0 }));
            return $tmp1065;
        }
        }
        else {
        panda$core$Bit $tmp1067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$670_131063, ((panda$core$Int64) { 13 }));
        bool $tmp1066 = $tmp1067.value;
        if ($tmp1066) goto $l1068;
        panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$670_131063, ((panda$core$Int64) { 19 }));
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
        panda$core$Bit $tmp1072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$670_131063, ((panda$core$Int64) { 20 }));
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
    panda$core$String* $tmp1075 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1074 = $tmp1075;
    panda$core$String* $tmp1077 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1076 = $tmp1077;
    org$pandalanguage$pandac$Type* $tmp1079 = (($fn1078) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1080 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1081 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1079, $tmp1080);
    if ($tmp1081.value) {
    {
        panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1076, &$s1082);
        leftRef1076 = $tmp1083;
    }
    }
    panda$core$String* $tmp1085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1084, result1074);
    panda$core$String* $tmp1087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1085, &$s1086);
    panda$core$String* $tmp1088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1087, leftRef1076);
    panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1088, &$s1089);
    (($fn1091) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1090);
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
        panda$core$String* $tmp1109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1102, &$s1108);
        rightRef1102 = $tmp1109;
    }
    }
    panda$core$String* $tmp1110 = panda$core$String$convert$R$panda$core$String(result1074);
    panda$core$String* $tmp1112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1110, &$s1111);
    panda$core$String* $tmp1113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1112, rightRef1102);
    panda$core$String* $tmp1115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1113, &$s1114);
    (($fn1116) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1115);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1092, p_out);
    return result1074;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1117;
    panda$core$String* leftRef1119;
    panda$core$String* trueLabel1135;
    panda$core$String* rightRef1145;
    panda$core$String* $tmp1118 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1117 = $tmp1118;
    panda$core$String* $tmp1120 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1119 = $tmp1120;
    org$pandalanguage$pandac$Type* $tmp1122 = (($fn1121) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1123 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1124 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1122, $tmp1123);
    if ($tmp1124.value) {
    {
        panda$core$String* $tmp1126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1119, &$s1125);
        leftRef1119 = $tmp1126;
    }
    }
    panda$core$String* $tmp1128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1127, result1117);
    panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1128, &$s1129);
    panda$core$String* $tmp1131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1130, leftRef1119);
    panda$core$String* $tmp1133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1131, &$s1132);
    (($fn1134) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1133);
    panda$core$String* $tmp1136 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1135 = $tmp1136;
    panda$core$String* $tmp1138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1137, result1117);
    panda$core$String* $tmp1140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1138, &$s1139);
    panda$core$String* $tmp1141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1140, trueLabel1135);
    panda$core$String* $tmp1143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1141, &$s1142);
    (($fn1144) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1143);
    panda$core$String* $tmp1146 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1145 = $tmp1146;
    org$pandalanguage$pandac$Type* $tmp1148 = (($fn1147) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1149 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1150 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1148, $tmp1149);
    if ($tmp1150.value) {
    {
        panda$core$String* $tmp1152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1145, &$s1151);
        rightRef1145 = $tmp1152;
    }
    }
    panda$core$String* $tmp1153 = panda$core$String$convert$R$panda$core$String(result1117);
    panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1153, &$s1154);
    panda$core$String* $tmp1156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1155, rightRef1145);
    panda$core$String* $tmp1158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1156, &$s1157);
    (($fn1159) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1158);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1135, p_out);
    return result1117;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, org$pandalanguage$pandac$parser$Token$Kind p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1160;
    panda$core$Bit logical1161;
    org$pandalanguage$pandac$parser$Token$Kind $match$721_91162;
    panda$core$String* result1201;
    logical1161 = ((panda$core$Bit) { false });
    {
        $match$721_91162 = p_op;
        panda$core$Bit $tmp1163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp1163.value) {
        {
            cOp1160 = &$s1164;
        }
        }
        else {
        panda$core$Bit $tmp1165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp1165.value) {
        {
            cOp1160 = &$s1166;
        }
        }
        else {
        panda$core$Bit $tmp1167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp1167.value) {
        {
            cOp1160 = &$s1168;
        }
        }
        else {
        panda$core$Bit $tmp1169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp1169.value) {
        {
            cOp1160 = &$s1170;
        }
        }
        else {
        panda$core$Bit $tmp1171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp1171.value) {
        {
            cOp1160 = &$s1172;
        }
        }
        else {
        panda$core$Bit $tmp1173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp1173.value) {
        {
            cOp1160 = &$s1174;
        }
        }
        else {
        panda$core$Bit $tmp1175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp1175.value) {
        {
            cOp1160 = &$s1176;
        }
        }
        else {
        panda$core$Bit $tmp1177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1177.value) {
        {
            cOp1160 = &$s1178;
        }
        }
        else {
        panda$core$Bit $tmp1179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp1179.value) {
        {
            cOp1160 = &$s1180;
        }
        }
        else {
        panda$core$Bit $tmp1181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp1181.value) {
        {
            cOp1160 = &$s1182;
        }
        }
        else {
        panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 70 }));
        bool $tmp1183 = $tmp1184.value;
        if ($tmp1183) goto $l1185;
        panda$core$Bit $tmp1186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp1183 = $tmp1186.value;
        $l1185:;
        panda$core$Bit $tmp1187 = { $tmp1183 };
        if ($tmp1187.value) {
        {
            cOp1160 = &$s1188;
        }
        }
        else {
        panda$core$Bit $tmp1189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1189.value) {
        {
            cOp1160 = &$s1190;
            logical1161 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp1191.value) {
        {
            cOp1160 = &$s1192;
            logical1161 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp1193.value) {
        {
            cOp1160 = &$s1194;
            logical1161 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1195.value) {
        {
            cOp1160 = &$s1196;
            logical1161 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp1197.value) {
        {
            cOp1160 = &$s1198;
            logical1161 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91162.$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp1199.value) {
        {
            logical1161 = ((panda$core$Bit) { true });
            cOp1160 = &$s1200;
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
    panda$core$String* $tmp1202 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1201 = $tmp1202;
    if (logical1161.value) {
    {
        (($fn1204) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1203);
    }
    }
    else {
    {
        panda$core$String* $tmp1205 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1206 = panda$core$String$convert$R$panda$core$String($tmp1205);
        panda$core$String* $tmp1208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1206, &$s1207);
        (($fn1209) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1208);
    }
    }
    panda$core$String* $tmp1210 = panda$core$String$convert$R$panda$core$String(result1201);
    panda$core$String* $tmp1212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1210, &$s1211);
    panda$core$String* $tmp1213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1212, p_leftRef);
    panda$core$String* $tmp1215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1213, &$s1214);
    panda$core$String* $tmp1216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1215, cOp1160);
    panda$core$String* $tmp1218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1216, &$s1217);
    panda$core$String* $tmp1219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1218, p_rightRef);
    panda$core$String* $tmp1221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1219, &$s1220);
    (($fn1222) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1221);
    return result1201;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1223;
    panda$core$String* rightRef1225;
    panda$core$String* $tmp1224 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1223 = $tmp1224;
    panda$core$String* $tmp1226 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1225 = $tmp1226;
    panda$core$String* $tmp1228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1227, leftRef1223);
    panda$core$String* $tmp1230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1228, &$s1229);
    panda$core$String* $tmp1231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1230, rightRef1225);
    panda$core$String* $tmp1233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1231, &$s1232);
    return $tmp1233;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1234;
    panda$core$String* rightRef1236;
    panda$core$String* $tmp1235 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1234 = $tmp1235;
    panda$core$String* $tmp1237 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1236 = $tmp1237;
    panda$core$String* $tmp1239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1238, leftRef1234);
    panda$core$String* $tmp1241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1239, &$s1240);
    panda$core$String* $tmp1242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1241, rightRef1236);
    panda$core$String* $tmp1244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1242, &$s1243);
    return $tmp1244;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$parser$Token$Kind $match$791_91250;
    panda$core$String* leftRef1259;
    panda$core$String* rightRef1261;
    org$pandalanguage$pandac$Type* $tmp1246 = (($fn1245) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1248 = (($fn1247) p_right->$class->vtable[2])(p_right);
    panda$core$Bit $tmp1249 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1246, $tmp1248);
    PANDA_ASSERT($tmp1249.value);
    {
        $match$791_91250 = p_op;
        panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$791_91250.$rawValue, ((panda$core$Int64) { 66 }));
        if ($tmp1251.value) {
        {
            panda$core$String* $tmp1252 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1252;
        }
        }
        else {
        panda$core$Bit $tmp1253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$791_91250.$rawValue, ((panda$core$Int64) { 68 }));
        if ($tmp1253.value) {
        {
            panda$core$String* $tmp1254 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1254;
        }
        }
        else {
        panda$core$Bit $tmp1255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$791_91250.$rawValue, ((panda$core$Int64) { 60 }));
        if ($tmp1255.value) {
        {
            panda$core$String* $tmp1256 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1256;
        }
        }
        else {
        panda$core$Bit $tmp1257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$791_91250.$rawValue, ((panda$core$Int64) { 61 }));
        if ($tmp1257.value) {
        {
            panda$core$String* $tmp1258 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1258;
        }
        }
        else {
        {
            panda$core$String* $tmp1260 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1259 = $tmp1260;
            panda$core$String* $tmp1262 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1261 = $tmp1262;
            org$pandalanguage$pandac$Type* $tmp1264 = (($fn1263) p_left->$class->vtable[2])(p_left);
            panda$core$String* $tmp1265 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1264, leftRef1259, p_op, rightRef1261, p_out);
            return $tmp1265;
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1266;
    panda$core$Int64 index1268;
    panda$collections$ListView* vtable1269;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1271;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1267 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1266 = $tmp1267;
    index1268 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1270 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1269 = $tmp1270;
    ITable* $tmp1272 = ((panda$collections$CollectionView*) vtable1269)->$class->itable;
    while ($tmp1272->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1272 = $tmp1272->next;
    }
    $fn1274 $tmp1273 = $tmp1272->methods[0];
    panda$core$Int64 $tmp1275 = $tmp1273(((panda$collections$CollectionView*) vtable1269));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1271, ((panda$core$Int64) { 0 }), $tmp1275, ((panda$core$Bit) { false }));
    int64_t $tmp1277 = $tmp1271.min.value;
    panda$core$Int64 i1276 = { $tmp1277 };
    int64_t $tmp1279 = $tmp1271.max.value;
    bool $tmp1280 = $tmp1271.inclusive.value;
    if ($tmp1280) goto $l1287; else goto $l1288;
    $l1287:;
    if ($tmp1277 <= $tmp1279) goto $l1281; else goto $l1283;
    $l1288:;
    if ($tmp1277 < $tmp1279) goto $l1281; else goto $l1283;
    $l1281:;
    {
        ITable* $tmp1289 = vtable1269->$class->itable;
        while ($tmp1289->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1289 = $tmp1289->next;
        }
        $fn1291 $tmp1290 = $tmp1289->methods[0];
        panda$core$Object* $tmp1292 = $tmp1290(vtable1269, i1276);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1292)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1268 = i1276;
            goto $l1283;
        }
        }
    }
    $l1284:;
    int64_t $tmp1294 = $tmp1279 - i1276.value;
    if ($tmp1280) goto $l1295; else goto $l1296;
    $l1295:;
    if ((uint64_t) $tmp1294 >= 1) goto $l1293; else goto $l1283;
    $l1296:;
    if ((uint64_t) $tmp1294 > 1) goto $l1293; else goto $l1283;
    $l1293:;
    i1276.value += 1;
    goto $l1281;
    $l1283:;
    panda$core$Bit $tmp1299 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1268, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1299.value);
    org$pandalanguage$pandac$Type* $tmp1301 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1302 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1301);
    panda$core$String* $tmp1303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1300, $tmp1302);
    panda$core$String* $tmp1305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1303, &$s1304);
    panda$core$String* $tmp1306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1305, p_target);
    panda$core$String* $tmp1308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1306, &$s1307);
    panda$core$Int64$wrapper* $tmp1309;
    $tmp1309 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1309->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1309->refCount = 1;
    $tmp1309->value = index1268;
    panda$core$String* $tmp1310 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1308, ((panda$core$Object*) $tmp1309));
    panda$core$String* $tmp1312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1310, &$s1311);
    return $tmp1312;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1313;
    panda$core$String* itable1315;
    panda$core$Int64 index1344;
    panda$collections$ListView* vtable1345;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1347;
    panda$core$String* result1384;
    panda$core$String* methodType1386;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1314 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1313 = $tmp1314;
    panda$core$String* $tmp1316 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1315 = $tmp1316;
    panda$core$String* $tmp1318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1317, itable1315);
    panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1318, &$s1319);
    panda$core$String* $tmp1321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1320, p_target);
    panda$core$String* $tmp1323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1321, &$s1322);
    (($fn1324) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1323);
    panda$core$String* $tmp1326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1325, itable1315);
    panda$core$String* $tmp1328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1326, &$s1327);
    panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1328, cc1313->name);
    panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1329, &$s1330);
    (($fn1332) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1331);
    panda$core$Int64 $tmp1333 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1333;
    panda$core$String* $tmp1334 = panda$core$String$convert$R$panda$core$String(itable1315);
    panda$core$String* $tmp1336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1334, &$s1335);
    panda$core$String* $tmp1337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1336, itable1315);
    panda$core$String* $tmp1339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1337, &$s1338);
    (($fn1340) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1339);
    panda$core$Int64 $tmp1341 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1341;
    (($fn1343) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1342);
    index1344 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1346 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1345 = $tmp1346;
    ITable* $tmp1348 = ((panda$collections$CollectionView*) vtable1345)->$class->itable;
    while ($tmp1348->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1348 = $tmp1348->next;
    }
    $fn1350 $tmp1349 = $tmp1348->methods[0];
    panda$core$Int64 $tmp1351 = $tmp1349(((panda$collections$CollectionView*) vtable1345));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1347, ((panda$core$Int64) { 0 }), $tmp1351, ((panda$core$Bit) { false }));
    int64_t $tmp1353 = $tmp1347.min.value;
    panda$core$Int64 i1352 = { $tmp1353 };
    int64_t $tmp1355 = $tmp1347.max.value;
    bool $tmp1356 = $tmp1347.inclusive.value;
    if ($tmp1356) goto $l1363; else goto $l1364;
    $l1363:;
    if ($tmp1353 <= $tmp1355) goto $l1357; else goto $l1359;
    $l1364:;
    if ($tmp1353 < $tmp1355) goto $l1357; else goto $l1359;
    $l1357:;
    {
        ITable* $tmp1365 = vtable1345->$class->itable;
        while ($tmp1365->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1365 = $tmp1365->next;
        }
        $fn1367 $tmp1366 = $tmp1365->methods[0];
        panda$core$Object* $tmp1368 = $tmp1366(vtable1345, i1352);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1368)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1344 = i1352;
            goto $l1359;
        }
        }
    }
    $l1360:;
    int64_t $tmp1370 = $tmp1355 - i1352.value;
    if ($tmp1356) goto $l1371; else goto $l1372;
    $l1371:;
    if ((uint64_t) $tmp1370 >= 1) goto $l1369; else goto $l1359;
    $l1372:;
    if ((uint64_t) $tmp1370 > 1) goto $l1369; else goto $l1359;
    $l1369:;
    i1352.value += 1;
    goto $l1357;
    $l1359:;
    org$pandalanguage$pandac$Type* $tmp1375 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1376 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1375);
    panda$collections$ListView* $tmp1377 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1376);
    ITable* $tmp1378 = ((panda$collections$CollectionView*) $tmp1377)->$class->itable;
    while ($tmp1378->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1378 = $tmp1378->next;
    }
    $fn1380 $tmp1379 = $tmp1378->methods[0];
    panda$core$Int64 $tmp1381 = $tmp1379(((panda$collections$CollectionView*) $tmp1377));
    panda$core$Int64 $tmp1382 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1344, $tmp1381);
    index1344 = $tmp1382;
    panda$core$Bit $tmp1383 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1344, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1383.value);
    panda$core$String* $tmp1385 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1384 = $tmp1385;
    org$pandalanguage$pandac$Type* $tmp1387 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1388 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1387);
    methodType1386 = $tmp1388;
    panda$core$String* $tmp1389 = panda$core$String$convert$R$panda$core$String(methodType1386);
    panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, &$s1390);
    panda$core$String* $tmp1392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1391, result1384);
    panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1392, &$s1393);
    panda$core$String* $tmp1395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1394, itable1315);
    panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1395, &$s1396);
    panda$core$Int64$wrapper* $tmp1398;
    $tmp1398 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1398->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1398->refCount = 1;
    $tmp1398->value = index1344;
    panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1397, ((panda$core$Object*) $tmp1398));
    panda$core$String* $tmp1401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1399, &$s1400);
    (($fn1402) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1401);
    return result1384;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1404 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1403 = $tmp1404.value;
    if (!$tmp1403) goto $l1405;
    panda$core$Bit $tmp1406 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1403 = $tmp1406.value;
    $l1405:;
    panda$core$Bit $tmp1407 = { $tmp1403 };
    if ($tmp1407.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1408.value) {
        {
            panda$core$String* $tmp1409 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1409;
        }
        }
        else {
        {
            panda$core$String* $tmp1410 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1410;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1411 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1411.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1412 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1412;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$864_91413;
    panda$core$String* count1418;
    panda$core$Int64 elementSize1424;
    panda$core$String* ptr1444;
    panda$core$String* ptr1455;
    panda$core$String* index1458;
    panda$core$String* ptr1471;
    panda$core$String* count1474;
    panda$core$Int64 elementSize1480;
    panda$core$String* ptr1503;
    panda$core$String* offset1506;
    {
        $match$864_91413 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp1415 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$864_91413, &$s1414);
        if ($tmp1415.value) {
        {
            panda$core$Int64 $tmp1416 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1416, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1417.value);
            panda$core$Object* $tmp1419 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1420 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1419), p_out);
            count1418 = $tmp1420;
            org$pandalanguage$pandac$Type* $tmp1421 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1422 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1421->subtypes);
            panda$core$Bit $tmp1423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1422, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1423.value);
            org$pandalanguage$pandac$Type* $tmp1425 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1426 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1425->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1427 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1426));
            elementSize1424 = $tmp1427;
            panda$core$String* $tmp1429 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp1430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1428, $tmp1429);
            panda$core$String* $tmp1432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1430, &$s1431);
            panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1432, count1418);
            panda$core$String* $tmp1435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1433, &$s1434);
            panda$core$Int64$wrapper* $tmp1436;
            $tmp1436 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp1436->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1436->refCount = 1;
            $tmp1436->value = elementSize1424;
            panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1435, ((panda$core$Object*) $tmp1436));
            panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1437, &$s1438);
            return $tmp1439;
        }
        }
        else {
        panda$core$Bit $tmp1441 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$864_91413, &$s1440);
        if ($tmp1441.value) {
        {
            panda$core$Int64 $tmp1442 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1442, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1443.value);
            panda$core$Object* $tmp1445 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1446 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1445), p_out);
            ptr1444 = $tmp1446;
            panda$core$String* $tmp1448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1447, ptr1444);
            panda$core$String* $tmp1450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1448, &$s1449);
            return $tmp1450;
        }
        }
        else {
        panda$core$Bit $tmp1452 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$864_91413, &$s1451);
        if ($tmp1452.value) {
        {
            panda$core$Int64 $tmp1453 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1453, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1454.value);
            panda$core$Object* $tmp1456 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1457 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1456), p_out);
            ptr1455 = $tmp1457;
            panda$core$Object* $tmp1459 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1460 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1459), p_out);
            index1458 = $tmp1460;
            panda$core$String* $tmp1461 = panda$core$String$convert$R$panda$core$String(ptr1455);
            panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1461, &$s1462);
            panda$core$String* $tmp1464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1463, index1458);
            panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1464, &$s1465);
            return $tmp1466;
        }
        }
        else {
        panda$core$Bit $tmp1468 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$864_91413, &$s1467);
        if ($tmp1468.value) {
        {
            panda$core$Int64 $tmp1469 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1469, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1470.value);
            panda$core$Object* $tmp1472 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1473 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1472), p_out);
            ptr1471 = $tmp1473;
            panda$core$Object* $tmp1475 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1476 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1475), p_out);
            count1474 = $tmp1476;
            org$pandalanguage$pandac$Type* $tmp1477 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1478 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1477->subtypes);
            panda$core$Bit $tmp1479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1478, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1479.value);
            org$pandalanguage$pandac$Type* $tmp1481 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1482 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1481->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1483 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1482));
            elementSize1480 = $tmp1483;
            panda$core$String* $tmp1485 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp1486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1484, $tmp1485);
            panda$core$String* $tmp1488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1486, &$s1487);
            panda$core$String* $tmp1489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1488, ptr1471);
            panda$core$String* $tmp1491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1489, &$s1490);
            panda$core$String* $tmp1492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1491, count1474);
            panda$core$String* $tmp1494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1492, &$s1493);
            panda$core$Int64$wrapper* $tmp1495;
            $tmp1495 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp1495->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1495->refCount = 1;
            $tmp1495->value = elementSize1480;
            panda$core$String* $tmp1496 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1494, ((panda$core$Object*) $tmp1495));
            panda$core$String* $tmp1498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1496, &$s1497);
            return $tmp1498;
        }
        }
        else {
        panda$core$Bit $tmp1500 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$864_91413, &$s1499);
        if ($tmp1500.value) {
        {
            panda$core$Int64 $tmp1501 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1501, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1502.value);
            panda$core$Object* $tmp1504 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1505 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1504), p_out);
            ptr1503 = $tmp1505;
            panda$core$Object* $tmp1507 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1508 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1507), p_out);
            offset1506 = $tmp1508;
            panda$core$String* $tmp1510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1509, ptr1503);
            panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1510, &$s1511);
            panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1512, offset1506);
            panda$core$String* $tmp1515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1513, &$s1514);
            return $tmp1515;
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
    org$pandalanguage$pandac$MethodDecl* m1516;
    panda$core$String* bit1527;
    panda$core$String* result1531;
    panda$core$String* bit1545;
    panda$core$String* result1549;
    panda$collections$Array* argRefs1559;
    org$pandalanguage$pandac$Type* actualMethodType1563;
    panda$core$String* actualResultType1564;
    panda$core$Bit isSuper1565;
    panda$core$Int64 offset1585;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1590;
    panda$core$String* arg1605;
    panda$core$String* target1630;
    panda$core$String* methodRef1634;
    panda$core$Bit indirect1636;
    panda$core$String* result1638;
    panda$core$String* separator1640;
    panda$core$String* indirectVar1642;
    panda$collections$Iterator* arg$Iter1668;
    panda$core$String* arg1680;
    m1516 = p_mref->value;
    panda$core$Bit $tmp1518 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1516->owner)->name, &$s1517);
    if ($tmp1518.value) {
    {
        panda$core$String* $tmp1519 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, p_t, p_mref, p_args, p_out);
        return $tmp1519;
    }
    }
    panda$core$Bit $tmp1520 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1516->owner);
    if ($tmp1520.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1516);
    }
    }
    panda$core$Bit $tmp1522 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1516->owner)->name, &$s1521);
    if ($tmp1522.value) {
    {
        panda$core$Bit $tmp1524 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1516)->name, &$s1523);
        if ($tmp1524.value) {
        {
            panda$core$Int64 $tmp1525 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1525, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1526.value);
            panda$core$Object* $tmp1528 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1529 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1530 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1528), ((org$pandalanguage$pandac$IRNode*) $tmp1529), p_out);
            bit1527 = $tmp1530;
            panda$core$String* $tmp1532 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1531 = $tmp1532;
            panda$core$String* $tmp1534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1533, result1531);
            panda$core$String* $tmp1536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1534, &$s1535);
            panda$core$String* $tmp1537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1536, bit1527);
            panda$core$String* $tmp1539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1537, &$s1538);
            (($fn1540) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1539);
            return result1531;
        }
        }
        panda$core$Bit $tmp1542 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1516)->name, &$s1541);
        if ($tmp1542.value) {
        {
            panda$core$Int64 $tmp1543 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1543, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1544.value);
            panda$core$Object* $tmp1546 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1547 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1548 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1546), ((org$pandalanguage$pandac$IRNode*) $tmp1547), p_out);
            bit1545 = $tmp1548;
            panda$core$String* $tmp1550 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1549 = $tmp1550;
            panda$core$String* $tmp1552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1551, result1549);
            panda$core$String* $tmp1554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1552, &$s1553);
            panda$core$String* $tmp1555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1554, bit1545);
            panda$core$String* $tmp1557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1555, &$s1556);
            (($fn1558) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1557);
            return result1549;
        }
        }
    }
    }
    panda$collections$Array* $tmp1560 = (panda$collections$Array*) malloc(40);
    $tmp1560->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1560->refCount.value = 1;
    panda$core$Int64 $tmp1562 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$collections$Array$init$panda$core$Int64($tmp1560, $tmp1562);
    argRefs1559 = $tmp1560;
    panda$core$Int64 $tmp1567 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp1568 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1567, ((panda$core$Int64) { 1 }));
    bool $tmp1566 = $tmp1568.value;
    if (!$tmp1566) goto $l1569;
    panda$core$Object* $tmp1570 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1570)->$rawValue, ((panda$core$Int64) { 32 }));
    $tmp1566 = $tmp1571.value;
    $l1569:;
    panda$core$Bit $tmp1572 = { $tmp1566 };
    isSuper1565 = $tmp1572;
    panda$core$Bit $tmp1574 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1565);
    bool $tmp1573 = $tmp1574.value;
    if (!$tmp1573) goto $l1575;
    panda$core$Bit $tmp1576 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1516);
    $tmp1573 = $tmp1576.value;
    $l1575:;
    panda$core$Bit $tmp1577 = { $tmp1573 };
    if ($tmp1577.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1578 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1516);
        actualMethodType1563 = $tmp1578;
        panda$core$Int64 $tmp1579 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1563->subtypes);
        panda$core$Int64 $tmp1580 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1579, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1581 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1563->subtypes, $tmp1580);
        panda$core$String* $tmp1582 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1581));
        actualResultType1564 = $tmp1582;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1583 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1516);
        actualMethodType1563 = $tmp1583;
        panda$core$String* $tmp1584 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        actualResultType1564 = $tmp1584;
    }
    }
    panda$core$Int64 $tmp1586 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp1587 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1563->subtypes);
    panda$core$Int64 $tmp1588 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1586, $tmp1587);
    panda$core$Int64 $tmp1589 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1588, ((panda$core$Int64) { 1 }));
    offset1585 = $tmp1589;
    panda$core$Int64 $tmp1591 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1590, ((panda$core$Int64) { 0 }), $tmp1591, ((panda$core$Bit) { false }));
    int64_t $tmp1593 = $tmp1590.min.value;
    panda$core$Int64 i1592 = { $tmp1593 };
    int64_t $tmp1595 = $tmp1590.max.value;
    bool $tmp1596 = $tmp1590.inclusive.value;
    if ($tmp1596) goto $l1603; else goto $l1604;
    $l1603:;
    if ($tmp1593 <= $tmp1595) goto $l1597; else goto $l1599;
    $l1604:;
    if ($tmp1593 < $tmp1595) goto $l1597; else goto $l1599;
    $l1597:;
    {
        panda$core$Object* $tmp1606 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1592);
        panda$core$String* $tmp1607 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1606), p_out);
        arg1605 = $tmp1607;
        panda$core$Bit $tmp1609 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1592, offset1585);
        bool $tmp1608 = $tmp1609.value;
        if (!$tmp1608) goto $l1610;
        panda$core$Int64 $tmp1611 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1592, offset1585);
        panda$core$Object* $tmp1612 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1563->subtypes, $tmp1611);
        panda$core$Object* $tmp1613 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1592);
        org$pandalanguage$pandac$Type* $tmp1615 = (($fn1614) ((org$pandalanguage$pandac$IRNode*) $tmp1613)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1613));
        panda$core$Bit $tmp1616 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1612), $tmp1615);
        $tmp1608 = $tmp1616.value;
        $l1610:;
        panda$core$Bit $tmp1617 = { $tmp1608 };
        if ($tmp1617.value) {
        {
            panda$core$Object* $tmp1618 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1592);
            org$pandalanguage$pandac$Type* $tmp1620 = (($fn1619) ((org$pandalanguage$pandac$IRNode*) $tmp1618)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1618));
            panda$core$Int64 $tmp1621 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1592, offset1585);
            panda$core$Object* $tmp1622 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1563->subtypes, $tmp1621);
            panda$core$String* $tmp1623 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1605, $tmp1620, ((org$pandalanguage$pandac$Type*) $tmp1622), p_out);
            arg1605 = $tmp1623;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs1559, ((panda$core$Object*) arg1605));
    }
    $l1600:;
    int64_t $tmp1625 = $tmp1595 - i1592.value;
    if ($tmp1596) goto $l1626; else goto $l1627;
    $l1626:;
    if ((uint64_t) $tmp1625 >= 1) goto $l1624; else goto $l1599;
    $l1627:;
    if ((uint64_t) $tmp1625 > 1) goto $l1624; else goto $l1599;
    $l1624:;
    i1592.value += 1;
    goto $l1597;
    $l1599:;
    panda$core$Int64 $tmp1631 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs1559);
    panda$core$Bit $tmp1632 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1631, ((panda$core$Int64) { 0 }));
    if ($tmp1632.value) {
    {
        panda$core$Object* $tmp1633 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs1559, ((panda$core$Int64) { 0 }));
        target1630 = ((panda$core$String*) $tmp1633);
    }
    }
    else {
    {
        target1630 = NULL;
    }
    }
    panda$core$String* $tmp1635 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1630, m1516, isSuper1565, p_out);
    methodRef1634 = $tmp1635;
    panda$core$Bit $tmp1637 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1516);
    indirect1636 = $tmp1637;
    panda$core$String* $tmp1639 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1638 = $tmp1639;
    separator1640 = &$s1641;
    if (indirect1636.value) {
    {
        panda$core$String* $tmp1643 = panda$core$String$convert$R$panda$core$String(actualResultType1564);
        panda$core$String* $tmp1645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1643, &$s1644);
        panda$core$String* $tmp1646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1645, result1638);
        panda$core$String* $tmp1648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1646, &$s1647);
        (($fn1649) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1648);
        panda$core$String* $tmp1650 = panda$core$String$convert$R$panda$core$String(methodRef1634);
        panda$core$String* $tmp1652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1650, &$s1651);
        panda$core$String* $tmp1653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1652, result1638);
        panda$core$String* $tmp1655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1653, &$s1654);
        (($fn1656) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1655);
        separator1640 = &$s1657;
    }
    }
    else {
    {
        panda$core$String* $tmp1658 = panda$core$String$convert$R$panda$core$String(actualResultType1564);
        panda$core$String* $tmp1660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1658, &$s1659);
        panda$core$String* $tmp1661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1660, result1638);
        panda$core$String* $tmp1663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1661, &$s1662);
        panda$core$String* $tmp1664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1663, methodRef1634);
        panda$core$String* $tmp1666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1664, &$s1665);
        (($fn1667) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1666);
    }
    }
    {
        ITable* $tmp1669 = ((panda$collections$Iterable*) argRefs1559)->$class->itable;
        while ($tmp1669->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1669 = $tmp1669->next;
        }
        $fn1671 $tmp1670 = $tmp1669->methods[0];
        panda$collections$Iterator* $tmp1672 = $tmp1670(((panda$collections$Iterable*) argRefs1559));
        arg$Iter1668 = $tmp1672;
        $l1673:;
        ITable* $tmp1675 = arg$Iter1668->$class->itable;
        while ($tmp1675->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1675 = $tmp1675->next;
        }
        $fn1677 $tmp1676 = $tmp1675->methods[0];
        panda$core$Bit $tmp1678 = $tmp1676(arg$Iter1668);
        panda$core$Bit $tmp1679 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1678);
        if (!$tmp1679.value) goto $l1674;
        {
            ITable* $tmp1681 = arg$Iter1668->$class->itable;
            while ($tmp1681->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1681 = $tmp1681->next;
            }
            $fn1683 $tmp1682 = $tmp1681->methods[1];
            panda$core$Object* $tmp1684 = $tmp1682(arg$Iter1668);
            arg1680 = ((panda$core$String*) $tmp1684);
            panda$core$String* $tmp1685 = panda$core$String$convert$R$panda$core$String(separator1640);
            panda$core$String* $tmp1687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1685, &$s1686);
            panda$core$String* $tmp1688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1687, arg1680);
            panda$core$String* $tmp1690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1688, &$s1689);
            (($fn1691) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1690);
            separator1640 = &$s1692;
        }
        goto $l1673;
        $l1674:;
    }
    (($fn1694) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1693);
    panda$core$String* $tmp1695 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$Bit $tmp1696 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1695, actualResultType1564);
    if ($tmp1696.value) {
    {
        panda$core$Int64 $tmp1697 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1563->subtypes);
        panda$core$Int64 $tmp1698 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1697, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1699 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1563->subtypes, $tmp1698);
        panda$core$String* $tmp1700 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1638, ((org$pandalanguage$pandac$Type*) $tmp1699), p_t, p_out);
        return $tmp1700;
    }
    }
    return result1638;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1702;
    panda$core$String* nonNullValue1705;
    panda$core$String* wrapped1715;
    panda$core$Bit $tmp1701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1701.value) {
    {
        panda$core$Object* $tmp1703 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1704 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1703), p_out);
        unwrapped1702 = $tmp1704;
        panda$core$Object* $tmp1706 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1707 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1702, ((org$pandalanguage$pandac$Type*) $tmp1706), p_dstType, p_out);
        nonNullValue1705 = $tmp1707;
        panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1708, p_value);
        panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1709, &$s1710);
        panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1711, nonNullValue1705);
        panda$core$String* $tmp1714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1712, &$s1713);
        return $tmp1714;
    }
    }
    panda$core$String* $tmp1716 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    wrapped1715 = $tmp1716;
    panda$core$String* $tmp1717 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1718 = panda$core$String$convert$R$panda$core$String($tmp1717);
    panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1718, &$s1719);
    panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1720, wrapped1715);
    panda$core$String* $tmp1723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1721, &$s1722);
    (($fn1724) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1723);
    panda$core$Bit $tmp1725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1725.value) {
    {
        panda$core$String* $tmp1727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1726, p_value);
        panda$core$String* $tmp1729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1727, &$s1728);
        (($fn1730) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1729);
        panda$core$Int64 $tmp1731 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1731;
    }
    }
    panda$core$String* $tmp1732 = panda$core$String$convert$R$panda$core$String(wrapped1715);
    panda$core$String* $tmp1734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1732, &$s1733);
    panda$core$String* $tmp1735 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1734, $tmp1735);
    panda$core$String* $tmp1738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1736, &$s1737);
    panda$core$Int64 $tmp1740 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_srcType);
    panda$core$Int64$wrapper* $tmp1741;
    $tmp1741 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1741->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1741->refCount = 1;
    $tmp1741->value = $tmp1740;
    panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1739, ((panda$core$Object*) $tmp1741));
    panda$core$String* $tmp1744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1742, &$s1743);
    panda$core$String* $tmp1745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1738, $tmp1744);
    (($fn1746) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1745);
    panda$core$String* $tmp1747 = panda$core$String$convert$R$panda$core$String(wrapped1715);
    panda$core$String* $tmp1749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1747, &$s1748);
    panda$core$String* $tmp1751 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_srcType)->name);
    panda$core$String* $tmp1752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1750, $tmp1751);
    panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1752, &$s1753);
    panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1749, $tmp1754);
    (($fn1756) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1755);
    panda$core$String* $tmp1757 = panda$core$String$convert$R$panda$core$String(wrapped1715);
    panda$core$String* $tmp1759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1757, &$s1758);
    (($fn1760) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1759);
    panda$core$String* $tmp1761 = panda$core$String$convert$R$panda$core$String(wrapped1715);
    panda$core$String* $tmp1763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1761, &$s1762);
    panda$core$String* $tmp1764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1763, p_value);
    panda$core$String* $tmp1766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1764, &$s1765);
    (($fn1767) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1766);
    panda$core$Bit $tmp1768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1768.value) {
    {
        panda$core$Int64 $tmp1769 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1769;
        (($fn1771) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1770);
        (($fn1773) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1772);
        panda$core$Int64 $tmp1774 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1774;
        panda$core$String* $tmp1775 = panda$core$String$convert$R$panda$core$String(wrapped1715);
        panda$core$String* $tmp1777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1775, &$s1776);
        (($fn1778) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1777);
        panda$core$Int64 $tmp1779 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1779;
        (($fn1781) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1780);
    }
    }
    panda$core$String* $tmp1783 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1782, $tmp1783);
    panda$core$String* $tmp1786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1784, &$s1785);
    panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1786, wrapped1715);
    panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1787, &$s1788);
    return $tmp1789;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$FieldDecl* p_field, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1792;
    panda$core$String* baseRef1796;
    panda$core$Bit $tmp1790 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_field->annotations);
    if ($tmp1790.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_field->value != NULL }).value);
        panda$core$String* $tmp1791 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_field->value, p_out);
        return $tmp1791;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1794 = (($fn1793) p_base->$class->vtable[2])(p_base);
    org$pandalanguage$pandac$ClassDecl* $tmp1795 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1794);
    cl1792 = $tmp1795;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1792);
    panda$core$String* $tmp1797 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef1796 = $tmp1797;
    PANDA_ASSERT(((panda$core$Bit) { cl1792 != NULL }).value);
    panda$core$Bit $tmp1798 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1792);
    if ($tmp1798.value) {
    {
        panda$core$String* $tmp1799 = panda$core$String$convert$R$panda$core$String(baseRef1796);
        panda$core$String* $tmp1801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1799, &$s1800);
        panda$core$String* $tmp1802 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
        panda$core$String* $tmp1803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1801, $tmp1802);
        panda$core$String* $tmp1805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1803, &$s1804);
        return $tmp1805;
    }
    }
    panda$core$String* $tmp1806 = panda$core$String$convert$R$panda$core$String(baseRef1796);
    panda$core$String* $tmp1808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1806, &$s1807);
    panda$core$String* $tmp1809 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
    panda$core$String* $tmp1810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1808, $tmp1809);
    panda$core$String* $tmp1812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1810, &$s1811);
    return $tmp1812;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1813;
    panda$core$String* wrapped1823;
    panda$core$String* nonNullValue1826;
    panda$core$String* $tmp1815 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1814, $tmp1815);
    panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1816, &$s1817);
    panda$core$String* $tmp1819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, p_value);
    panda$core$String* $tmp1821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1819, &$s1820);
    result1813 = $tmp1821;
    panda$core$Bit $tmp1822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1822.value) {
    {
        panda$core$Object* $tmp1824 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1825 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1824), p_out);
        wrapped1823 = $tmp1825;
        panda$core$Object* $tmp1827 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1828 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1823, ((org$pandalanguage$pandac$Type*) $tmp1827), p_dstType, p_out);
        nonNullValue1826 = $tmp1828;
        panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1829, p_value);
        panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, &$s1831);
        panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1832, nonNullValue1826);
        panda$core$String* $tmp1835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1833, &$s1834);
        panda$core$String* $tmp1836 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1835, $tmp1836);
        panda$core$String* $tmp1839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1837, &$s1838);
        return $tmp1839;
    }
    }
    return result1813;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1841 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1840, $tmp1841);
    panda$core$String* $tmp1844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1842, &$s1843);
    panda$core$String* $tmp1845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1844, p_value);
    panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1845, &$s1846);
    return $tmp1847;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1849 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1848, $tmp1849);
    panda$core$String* $tmp1852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1850, &$s1851);
    panda$core$String* $tmp1853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1852, p_value);
    panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1853, &$s1854);
    return $tmp1855;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1856;
    org$pandalanguage$pandac$ClassDecl* srcClass1867;
    org$pandalanguage$pandac$ClassDecl* targetClass1869;
    panda$core$String* srcType1908;
    panda$core$String* dstType1910;
    panda$core$Bit $tmp1857 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1857.value) {
    {
        panda$core$Bit $tmp1858 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1858.value);
        panda$core$String* $tmp1860 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1859, $tmp1860);
        panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1861, &$s1862);
        panda$core$String* $tmp1864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1863, p_value);
        panda$core$String* $tmp1866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, &$s1865);
        return $tmp1866;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1868 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1867 = $tmp1868;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1867 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1870 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1869 = $tmp1870;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1869 != NULL }).value);
        panda$core$Bit $tmp1872 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1867);
        bool $tmp1871 = $tmp1872.value;
        if (!$tmp1871) goto $l1873;
        panda$core$Bit $tmp1874 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1869);
        panda$core$Bit $tmp1875 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1874);
        $tmp1871 = $tmp1875.value;
        $l1873:;
        panda$core$Bit $tmp1876 = { $tmp1871 };
        if ($tmp1876.value) {
        {
            panda$core$String* $tmp1877 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1877;
        }
        }
        else {
        panda$core$Bit $tmp1879 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1867);
        panda$core$Bit $tmp1880 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1879);
        bool $tmp1878 = $tmp1880.value;
        if (!$tmp1878) goto $l1881;
        panda$core$Bit $tmp1882 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1869);
        $tmp1878 = $tmp1882.value;
        $l1881:;
        panda$core$Bit $tmp1883 = { $tmp1878 };
        if ($tmp1883.value) {
        {
            panda$core$String* $tmp1884 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1884;
        }
        }
        else {
        panda$core$Bit $tmp1887 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1867);
        bool $tmp1886 = $tmp1887.value;
        if (!$tmp1886) goto $l1888;
        panda$core$Bit $tmp1889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1886 = $tmp1889.value;
        $l1888:;
        panda$core$Bit $tmp1890 = { $tmp1886 };
        bool $tmp1885 = $tmp1890.value;
        if (!$tmp1885) goto $l1891;
        panda$core$Object* $tmp1892 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1893 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1892), p_src);
        $tmp1885 = $tmp1893.value;
        $l1891:;
        panda$core$Bit $tmp1894 = { $tmp1885 };
        if ($tmp1894.value) {
        {
            panda$core$String* $tmp1895 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1895;
        }
        }
        else {
        panda$core$Bit $tmp1898 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1869);
        bool $tmp1897 = $tmp1898.value;
        if (!$tmp1897) goto $l1899;
        panda$core$Bit $tmp1900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1897 = $tmp1900.value;
        $l1899:;
        panda$core$Bit $tmp1901 = { $tmp1897 };
        bool $tmp1896 = $tmp1901.value;
        if (!$tmp1896) goto $l1902;
        panda$core$Object* $tmp1903 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1904 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1903), p_target);
        $tmp1896 = $tmp1904.value;
        $l1902:;
        panda$core$Bit $tmp1905 = { $tmp1896 };
        if ($tmp1905.value) {
        {
            panda$core$String* $tmp1906 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1906;
        }
        }
        }
        }
        }
        op1856 = &$s1907;
    }
    }
    panda$core$String* $tmp1909 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1908 = $tmp1909;
    panda$core$String* $tmp1911 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1910 = $tmp1911;
    panda$core$Bit $tmp1912 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1908, dstType1910);
    if ($tmp1912.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1913, dstType1910);
    panda$core$String* $tmp1916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1914, &$s1915);
    panda$core$String* $tmp1917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1916, p_value);
    panda$core$String* $tmp1919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1917, &$s1918);
    return $tmp1919;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef1920;
    panda$core$String* $tmp1921 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef1920 = $tmp1921;
    org$pandalanguage$pandac$Type* $tmp1923 = (($fn1922) p_base->$class->vtable[2])(p_base);
    panda$core$String* $tmp1924 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, baseRef1920, $tmp1923, p_t, p_out);
    return $tmp1924;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_target, org$pandalanguage$pandac$IRNode* p_initCall, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1088_91925;
    org$pandalanguage$pandac$Type* initType1927;
    org$pandalanguage$pandac$MethodRef* initMref1929;
    panda$collections$ImmutableArray* initArgs1931;
    org$pandalanguage$pandac$ClassDecl* cl1933;
    panda$core$String* t1935;
    org$pandalanguage$pandac$IRNode* $match$1094_211943;
    panda$collections$ImmutableArray* args1945;
    panda$core$String* value1949;
    panda$core$String* tmp1961;
    panda$core$String* result1978;
    panda$core$String* classPtr1995;
    panda$core$String* className1997;
    {
        $match$1088_91925 = p_initCall;
        panda$core$Bit $tmp1926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1088_91925->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1926.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1928 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1088_91925->$data + 16));
            initType1927 = *$tmp1928;
            org$pandalanguage$pandac$MethodRef** $tmp1930 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1088_91925->$data + 24));
            initMref1929 = *$tmp1930;
            panda$collections$ImmutableArray** $tmp1932 = ((panda$collections$ImmutableArray**) ((char*) $match$1088_91925->$data + 32));
            initArgs1931 = *$tmp1932;
            org$pandalanguage$pandac$ClassDecl* $tmp1934 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
            cl1933 = $tmp1934;
            PANDA_ASSERT(((panda$core$Bit) { cl1933 != NULL }).value);
            panda$core$String* $tmp1936 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            t1935 = $tmp1936;
            panda$core$Bit $tmp1938 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            bool $tmp1937 = $tmp1938.value;
            if ($tmp1937) goto $l1939;
            org$pandalanguage$pandac$Type* $tmp1940 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1941 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1940);
            $tmp1937 = $tmp1941.value;
            $l1939:;
            panda$core$Bit $tmp1942 = { $tmp1937 };
            if ($tmp1942.value) {
            {
                {
                    $match$1094_211943 = p_initCall;
                    panda$core$Bit $tmp1944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1094_211943->$rawValue, ((panda$core$Int64) { 5 }));
                    if ($tmp1944.value) {
                    {
                        panda$collections$ImmutableArray** $tmp1946 = ((panda$collections$ImmutableArray**) ((char*) $match$1094_211943->$data + 32));
                        args1945 = *$tmp1946;
                        panda$core$Int64 $tmp1947 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(args1945);
                        panda$core$Bit $tmp1948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1947, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1948.value);
                        panda$core$Object* $tmp1950 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(args1945, ((panda$core$Int64) { 0 }));
                        panda$core$String* $tmp1951 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1950), p_out);
                        value1949 = $tmp1951;
                        panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1952, t1935);
                        panda$core$String* $tmp1955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1953, &$s1954);
                        panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1955, value1949);
                        panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, &$s1957);
                        return $tmp1958;
                    }
                    }
                }
            }
            }
            panda$core$Bit $tmp1959 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1933);
            if ($tmp1959.value) {
            {
                panda$core$Int64 $tmp1960 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
                self->varCount = $tmp1960;
                panda$core$Int64$wrapper* $tmp1963;
                $tmp1963 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp1963->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp1963->refCount = 1;
                $tmp1963->value = self->varCount;
                panda$core$String* $tmp1964 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1962, ((panda$core$Object*) $tmp1963));
                panda$core$String* $tmp1966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1964, &$s1965);
                tmp1961 = $tmp1966;
                panda$core$String* $tmp1967 = panda$core$String$convert$R$panda$core$String(t1935);
                panda$core$String* $tmp1969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1967, &$s1968);
                panda$core$String* $tmp1970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1969, tmp1961);
                panda$core$String* $tmp1972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1970, &$s1971);
                (($fn1973) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1972);
                panda$core$String* $tmp1975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1974, tmp1961);
                panda$core$String* $tmp1977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1975, &$s1976);
                org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType1927, initMref1929, initArgs1931, $tmp1977, p_out);
                return tmp1961;
            }
            }
            panda$core$String* $tmp1979 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1978 = $tmp1979;
            panda$core$String* $tmp1980 = panda$core$String$convert$R$panda$core$String(t1935);
            panda$core$String* $tmp1982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1980, &$s1981);
            panda$core$String* $tmp1983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1982, result1978);
            panda$core$String* $tmp1985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1983, &$s1984);
            panda$core$String* $tmp1986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1985, t1935);
            panda$core$String* $tmp1988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1986, &$s1987);
            panda$core$Int64 $tmp1989 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
            panda$core$Int64$wrapper* $tmp1990;
            $tmp1990 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp1990->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1990->refCount = 1;
            $tmp1990->value = $tmp1989;
            panda$core$String* $tmp1991 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1988, ((panda$core$Object*) $tmp1990));
            panda$core$String* $tmp1993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1991, &$s1992);
            (($fn1994) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1993);
            panda$core$String* $tmp1996 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            classPtr1995 = $tmp1996;
            panda$core$Bit $tmp1998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1998.value) {
            {
                panda$core$Object* $tmp1999 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp2000 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1999));
                className1997 = $tmp2000;
            }
            }
            else {
            {
                panda$core$String* $tmp2001 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
                className1997 = $tmp2001;
            }
            }
            panda$core$String* $tmp2002 = panda$core$String$convert$R$panda$core$String(result1978);
            panda$core$String* $tmp2004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2002, &$s2003);
            panda$core$String* $tmp2005 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1933)->name);
            panda$core$String* $tmp2006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2004, $tmp2005);
            panda$core$String* $tmp2008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2006, &$s2007);
            panda$core$String* $tmp2010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2008, &$s2009);
            (($fn2011) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2010);
            panda$core$String* $tmp2012 = panda$core$String$convert$R$panda$core$String(result1978);
            panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2012, &$s2013);
            (($fn2015) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2014);
            panda$core$String* $tmp2016 = panda$core$String$convert$R$panda$core$String(result1978);
            panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2016, &$s2017);
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType1927, initMref1929, initArgs1931, $tmp2018, p_out);
            return result1978;
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
    panda$core$String* $tmp2019 = panda$core$UInt64$convert$R$panda$core$String(p_int);
    return $tmp2019;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$UInt64 p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$UInt64$wrapper* $tmp2021;
    $tmp2021 = (panda$core$UInt64$wrapper*) malloc(24);
    $tmp2021->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp2021->refCount = 1;
    $tmp2021->value = p_int;
    panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2020, ((panda$core$Object*) $tmp2021));
    return $tmp2022;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Real64 p_real, panda$io$OutputStream* p_out) {
    panda$core$String* result2023;
    panda$core$Char8 $tmp2025;
    panda$core$String* $tmp2024 = panda$core$Real64$convert$R$panda$core$String(p_real);
    result2023 = $tmp2024;
    panda$core$Char8$init$panda$core$UInt8(&$tmp2025, ((panda$core$UInt8) { 46 }));
    panda$core$Bit $tmp2026 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(result2023, $tmp2025);
    if ($tmp2026.value) {
    {
        return result2023;
    }
    }
    panda$core$String* $tmp2028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result2023, &$s2027);
    return $tmp2028;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_bit, panda$io$IndentedOutputStream* p_out) {
    if (p_bit.value) {
    {
        return &$s2029;
    }
    }
    return &$s2030;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2031 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2031;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2033;
    panda$collections$Iterator* c$Iter2047;
    panda$core$Char8 c2060;
    panda$core$Int64 $tmp2032 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2032;
    panda$core$Int64$wrapper* $tmp2035;
    $tmp2035 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp2035->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2035->refCount = 1;
    $tmp2035->value = self->varCount;
    panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2034, ((panda$core$Object*) $tmp2035));
    panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2036, &$s2037);
    result2033 = $tmp2038;
    org$pandalanguage$pandac$Type* $tmp2039 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2039);
    panda$core$String* $tmp2041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2040, result2033);
    panda$core$String* $tmp2043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2041, &$s2042);
    panda$core$String* $tmp2045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2043, &$s2044);
    (($fn2046) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2045);
    {
        panda$collections$ListView* $tmp2048 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2049 = ((panda$collections$Iterable*) $tmp2048)->$class->itable;
        while ($tmp2049->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2049 = $tmp2049->next;
        }
        $fn2051 $tmp2050 = $tmp2049->methods[0];
        panda$collections$Iterator* $tmp2052 = $tmp2050(((panda$collections$Iterable*) $tmp2048));
        c$Iter2047 = $tmp2052;
        $l2053:;
        ITable* $tmp2055 = c$Iter2047->$class->itable;
        while ($tmp2055->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2055 = $tmp2055->next;
        }
        $fn2057 $tmp2056 = $tmp2055->methods[0];
        panda$core$Bit $tmp2058 = $tmp2056(c$Iter2047);
        panda$core$Bit $tmp2059 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2058);
        if (!$tmp2059.value) goto $l2054;
        {
            ITable* $tmp2061 = c$Iter2047->$class->itable;
            while ($tmp2061->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2061 = $tmp2061->next;
            }
            $fn2063 $tmp2062 = $tmp2061->methods[1];
            panda$core$Object* $tmp2064 = $tmp2062(c$Iter2047);
            c2060 = ((panda$core$Char8$wrapper*) $tmp2064)->value;
            panda$core$UInt8 $tmp2066 = panda$core$Char8$convert$R$panda$core$UInt8(c2060);
            panda$core$UInt8$wrapper* $tmp2067;
            $tmp2067 = (panda$core$UInt8$wrapper*) malloc(13);
            $tmp2067->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
            $tmp2067->refCount = 1;
            $tmp2067->value = $tmp2066;
            ITable* $tmp2069 = ((panda$core$Formattable*) $tmp2067)->$class->itable;
            while ($tmp2069->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2069 = $tmp2069->next;
            }
            $fn2071 $tmp2070 = $tmp2069->methods[0];
            panda$core$String* $tmp2072 = $tmp2070(((panda$core$Formattable*) $tmp2067), &$s2068);
            panda$core$String* $tmp2074 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp2072, &$s2073);
            panda$core$String* $tmp2075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2065, $tmp2074);
            panda$core$String* $tmp2077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2075, &$s2076);
            (($fn2078) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2077);
        }
        goto $l2053;
        $l2054:;
    }
    panda$collections$ListView* $tmp2080 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2081 = ((panda$collections$CollectionView*) $tmp2080)->$class->itable;
    while ($tmp2081->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2081 = $tmp2081->next;
    }
    $fn2083 $tmp2082 = $tmp2081->methods[0];
    panda$core$Int64 $tmp2084 = $tmp2082(((panda$collections$CollectionView*) $tmp2080));
    panda$core$Int64$wrapper* $tmp2085;
    $tmp2085 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp2085->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2085->refCount = 1;
    $tmp2085->value = $tmp2084;
    panda$core$String* $tmp2086 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2079, ((panda$core$Object*) $tmp2085));
    panda$core$String* $tmp2088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2086, &$s2087);
    panda$core$Int64 $tmp2089 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$Int64$wrapper* $tmp2090;
    $tmp2090 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp2090->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2090->refCount = 1;
    $tmp2090->value = $tmp2089;
    panda$core$String* $tmp2091 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2088, ((panda$core$Object*) $tmp2090));
    panda$core$String* $tmp2093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2091, &$s2092);
    (($fn2094) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2093);
    panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2095, result2033);
    panda$core$String* $tmp2098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2096, &$s2097);
    return $tmp2098;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    return &$s2099;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2101 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp2102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2100, $tmp2101);
    panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2102, &$s2103);
    return $tmp2104;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2105;
    org$pandalanguage$pandac$ClassDecl* cl2107;
    panda$core$String* bit2111;
    panda$core$String* $tmp2106 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    ref2105 = $tmp2106;
    org$pandalanguage$pandac$Type* $tmp2109 = (($fn2108) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2110 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2109);
    cl2107 = $tmp2110;
    panda$core$Bit $tmp2112 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2107);
    if ($tmp2112.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2114 = (($fn2113) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2115 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2114->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2115.value) {
        {
            bit2111 = &$s2116;
        }
        }
        else {
        {
            panda$core$String* $tmp2118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2117, ref2105);
            panda$core$String* $tmp2120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2118, &$s2119);
            bit2111 = $tmp2120;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2121 = panda$core$String$convert$R$panda$core$String(ref2105);
        panda$core$String* $tmp2123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2121, &$s2122);
        bit2111 = $tmp2123;
    }
    }
    panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2124, bit2111);
    panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2125, &$s2126);
    return $tmp2127;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2128;
    org$pandalanguage$pandac$ClassDecl* cl2130;
    panda$core$String* bit2134;
    panda$core$String* $tmp2129 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    ref2128 = $tmp2129;
    org$pandalanguage$pandac$Type* $tmp2132 = (($fn2131) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2133 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2132);
    cl2130 = $tmp2133;
    panda$core$Bit $tmp2135 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2130);
    if ($tmp2135.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2137 = (($fn2136) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2138 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2137->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2138.value) {
        {
            bit2134 = &$s2139;
        }
        }
        else {
        {
            panda$core$String* $tmp2140 = panda$core$String$convert$R$panda$core$String(ref2128);
            panda$core$String* $tmp2142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2140, &$s2141);
            bit2134 = $tmp2142;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2143 = panda$core$String$convert$R$panda$core$String(ref2128);
        panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2143, &$s2144);
        bit2134 = $tmp2145;
    }
    }
    panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2146, bit2134);
    panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2147, &$s2148);
    return $tmp2149;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2151;
    panda$core$Bit $tmp2150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2150.value);
    panda$core$Object* $tmp2152 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2153 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2152));
    cl2151 = $tmp2153;
    PANDA_ASSERT(((panda$core$Bit) { cl2151 != NULL }).value);
    panda$core$Bit $tmp2154 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2151);
    if ($tmp2154.value) {
    {
        panda$core$String* $tmp2156 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2155, $tmp2156);
        panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2157, &$s2158);
        return $tmp2159;
    }
    }
    else {
    {
        return &$s2160;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_base, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef2161;
    panda$core$String* result2163;
    org$pandalanguage$pandac$parser$Token$Kind $match$1227_92165;
    panda$core$String* $tmp2162 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    baseRef2161 = $tmp2162;
    panda$core$String* $tmp2164 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2163 = $tmp2164;
    {
        $match$1227_92165 = p_op;
        panda$core$Bit $tmp2166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_92165.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp2166.value) {
        {
            panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2167, baseRef2161);
            panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2168, &$s2169);
            return $tmp2170;
        }
        }
        else {
        panda$core$Bit $tmp2171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_92165.$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp2171.value) {
        {
            panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2172, baseRef2161);
            panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, &$s2174);
            return $tmp2175;
        }
        }
        else {
        panda$core$Bit $tmp2176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_92165.$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp2176.value) {
        {
            panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2177, baseRef2161);
            panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2178, &$s2179);
            return $tmp2180;
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
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef2186;
    panda$core$String* trueLabel2188;
    panda$core$String* falseLabel2190;
    panda$core$String* merge2192;
    panda$core$String* result2194;
    org$pandalanguage$pandac$Type* $tmp2182 = (($fn2181) p_ifTrue->$class->vtable[2])(p_ifTrue);
    org$pandalanguage$pandac$Type* $tmp2184 = (($fn2183) p_ifFalse->$class->vtable[2])(p_ifFalse);
    panda$core$Bit $tmp2185 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2182, $tmp2184);
    PANDA_ASSERT($tmp2185.value);
    panda$core$String* $tmp2187 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    testRef2186 = $tmp2187;
    panda$core$String* $tmp2189 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2188 = $tmp2189;
    panda$core$String* $tmp2191 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2190 = $tmp2191;
    panda$core$String* $tmp2193 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2192 = $tmp2193;
    panda$core$String* $tmp2195 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2194 = $tmp2195;
    org$pandalanguage$pandac$Type* $tmp2197 = (($fn2196) p_ifTrue->$class->vtable[2])(p_ifTrue);
    panda$core$String* $tmp2198 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2197);
    panda$core$String* $tmp2199 = panda$core$String$convert$R$panda$core$String($tmp2198);
    panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2199, &$s2200);
    panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2201, result2194);
    panda$core$String* $tmp2204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2202, &$s2203);
    (($fn2205) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2204);
    panda$core$String* $tmp2207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2206, testRef2186);
    panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2207, &$s2208);
    panda$core$String* $tmp2210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2209, trueLabel2188);
    panda$core$String* $tmp2212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2210, &$s2211);
    panda$core$String* $tmp2213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2212, falseLabel2190);
    panda$core$String* $tmp2215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2213, &$s2214);
    (($fn2216) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2215);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel2188, p_out);
    panda$core$String* $tmp2217 = panda$core$String$convert$R$panda$core$String(result2194);
    panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2217, &$s2218);
    panda$core$String* $tmp2220 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifTrue, p_out);
    panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2219, $tmp2220);
    panda$core$String* $tmp2223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2221, &$s2222);
    (($fn2224) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2223);
    panda$core$String* $tmp2226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2225, merge2192);
    panda$core$String* $tmp2228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2226, &$s2227);
    (($fn2229) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2228);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel2190, p_out);
    panda$core$String* $tmp2230 = panda$core$String$convert$R$panda$core$String(result2194);
    panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2230, &$s2231);
    panda$core$String* $tmp2233 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifFalse, p_out);
    panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2232, $tmp2233);
    panda$core$String* $tmp2236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2234, &$s2235);
    (($fn2237) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2236);
    panda$core$String* $tmp2239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2238, merge2192);
    panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2239, &$s2240);
    (($fn2242) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2241);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, merge2192, p_out);
    return result2194;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2243 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2243;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1264_92244;
    org$pandalanguage$pandac$IRNode* left2246;
    org$pandalanguage$pandac$parser$Token$Kind op2248;
    org$pandalanguage$pandac$IRNode* right2250;
    org$pandalanguage$pandac$Type* type2254;
    org$pandalanguage$pandac$MethodRef* target2256;
    panda$collections$ImmutableArray* args2258;
    org$pandalanguage$pandac$IRNode* base2262;
    org$pandalanguage$pandac$Type* type2264;
    panda$core$Bit explicit2266;
    panda$core$UInt64 value2270;
    panda$core$UInt64 value2274;
    panda$core$Real64 value2278;
    panda$core$Bit value2282;
    org$pandalanguage$pandac$Type* type2286;
    org$pandalanguage$pandac$IRNode* initCall2288;
    org$pandalanguage$pandac$Variable* variable2292;
    org$pandalanguage$pandac$IRNode* base2296;
    org$pandalanguage$pandac$FieldDecl* field2298;
    panda$core$String* str2302;
    org$pandalanguage$pandac$Type* t2308;
    org$pandalanguage$pandac$IRNode* base2312;
    panda$core$Int64 id2314;
    panda$core$String* value2316;
    panda$core$Int64 id2320;
    panda$core$String* result2322;
    org$pandalanguage$pandac$Type* type2326;
    org$pandalanguage$pandac$IRNode* value2330;
    org$pandalanguage$pandac$IRNode* value2334;
    org$pandalanguage$pandac$parser$Token$Kind op2338;
    org$pandalanguage$pandac$IRNode* base2340;
    org$pandalanguage$pandac$IRNode* test2344;
    org$pandalanguage$pandac$IRNode* ifTrue2346;
    org$pandalanguage$pandac$IRNode* ifFalse2348;
    {
        $match$1264_92244 = p_expr;
        panda$core$Bit $tmp2245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp2245.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2247 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92244->$data + 24));
            left2246 = *$tmp2247;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2249 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1264_92244->$data + 32));
            op2248 = *$tmp2249;
            org$pandalanguage$pandac$IRNode** $tmp2251 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92244->$data + 40));
            right2250 = *$tmp2251;
            panda$core$String* $tmp2252 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, left2246, op2248, right2250, p_out);
            return $tmp2252;
        }
        }
        else {
        panda$core$Bit $tmp2253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp2253.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2255 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1264_92244->$data + 16));
            type2254 = *$tmp2255;
            org$pandalanguage$pandac$MethodRef** $tmp2257 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1264_92244->$data + 24));
            target2256 = *$tmp2257;
            panda$collections$ImmutableArray** $tmp2259 = ((panda$collections$ImmutableArray**) ((char*) $match$1264_92244->$data + 32));
            args2258 = *$tmp2259;
            panda$core$String* $tmp2260 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, type2254, target2256, args2258, p_out);
            return $tmp2260;
        }
        }
        else {
        panda$core$Bit $tmp2261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp2261.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2263 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92244->$data + 16));
            base2262 = *$tmp2263;
            org$pandalanguage$pandac$Type** $tmp2265 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1264_92244->$data + 24));
            type2264 = *$tmp2265;
            panda$core$Bit* $tmp2267 = ((panda$core$Bit*) ((char*) $match$1264_92244->$data + 32));
            explicit2266 = *$tmp2267;
            panda$core$String* $tmp2268 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base2262, type2264, p_out);
            return $tmp2268;
        }
        }
        else {
        panda$core$Bit $tmp2269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp2269.value) {
        {
            panda$core$UInt64* $tmp2271 = ((panda$core$UInt64*) ((char*) $match$1264_92244->$data + 24));
            value2270 = *$tmp2271;
            panda$core$String* $tmp2272 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2270, p_out);
            return $tmp2272;
        }
        }
        else {
        panda$core$Bit $tmp2273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2273.value) {
        {
            panda$core$UInt64* $tmp2275 = ((panda$core$UInt64*) ((char*) $match$1264_92244->$data + 24));
            value2274 = *$tmp2275;
            panda$core$String* $tmp2276 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2274, p_out);
            return $tmp2276;
        }
        }
        else {
        panda$core$Bit $tmp2277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp2277.value) {
        {
            panda$core$Real64* $tmp2279 = ((panda$core$Real64*) ((char*) $match$1264_92244->$data + 24));
            value2278 = *$tmp2279;
            panda$core$String* $tmp2280 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(self, value2278, ((panda$io$OutputStream*) p_out));
            return $tmp2280;
        }
        }
        else {
        panda$core$Bit $tmp2281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp2281.value) {
        {
            panda$core$Bit* $tmp2283 = ((panda$core$Bit*) ((char*) $match$1264_92244->$data + 24));
            value2282 = *$tmp2283;
            panda$core$String* $tmp2284 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, value2282, p_out);
            return $tmp2284;
        }
        }
        else {
        panda$core$Bit $tmp2285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp2285.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2287 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1264_92244->$data + 16));
            type2286 = *$tmp2287;
            org$pandalanguage$pandac$IRNode** $tmp2289 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92244->$data + 24));
            initCall2288 = *$tmp2289;
            panda$core$String* $tmp2290 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, type2286, initCall2288, p_out);
            return $tmp2290;
        }
        }
        else {
        panda$core$Bit $tmp2291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2291.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2293 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1264_92244->$data + 16));
            variable2292 = *$tmp2293;
            panda$core$String* $tmp2294 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, variable2292, p_out);
            return $tmp2294;
        }
        }
        else {
        panda$core$Bit $tmp2295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2295.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2297 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92244->$data + 24));
            base2296 = *$tmp2297;
            org$pandalanguage$pandac$FieldDecl** $tmp2299 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1264_92244->$data + 32));
            field2298 = *$tmp2299;
            panda$core$String* $tmp2300 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, base2296, field2298, p_out);
            return $tmp2300;
        }
        }
        else {
        panda$core$Bit $tmp2301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2301.value) {
        {
            panda$core$String** $tmp2303 = ((panda$core$String**) ((char*) $match$1264_92244->$data + 16));
            str2302 = *$tmp2303;
            panda$core$String* $tmp2304 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, str2302, p_out);
            return $tmp2304;
        }
        }
        else {
        panda$core$Bit $tmp2305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2305.value) {
        {
            panda$core$String* $tmp2306 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(self, p_out);
            return $tmp2306;
        }
        }
        else {
        panda$core$Bit $tmp2307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2307.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2309 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1264_92244->$data + 16));
            t2308 = *$tmp2309;
            panda$core$String* $tmp2310 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, t2308, p_out);
            return $tmp2310;
        }
        }
        else {
        panda$core$Bit $tmp2311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2311.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2313 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92244->$data + 0));
            base2312 = *$tmp2313;
            panda$core$Int64* $tmp2315 = ((panda$core$Int64*) ((char*) $match$1264_92244->$data + 8));
            id2314 = *$tmp2315;
            panda$core$String* $tmp2317 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base2312, p_out);
            value2316 = $tmp2317;
            panda$core$Int64$wrapper* $tmp2318;
            $tmp2318 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp2318->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2318->refCount = 1;
            $tmp2318->value = id2314;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp2318), ((panda$core$Object*) value2316));
            return value2316;
        }
        }
        else {
        panda$core$Bit $tmp2319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2319.value) {
        {
            panda$core$Int64* $tmp2321 = ((panda$core$Int64*) ((char*) $match$1264_92244->$data + 24));
            id2320 = *$tmp2321;
            panda$core$Int64$wrapper* $tmp2323;
            $tmp2323 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp2323->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2323->refCount = 1;
            $tmp2323->value = id2320;
            panda$core$Object* $tmp2324 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) $tmp2323));
            result2322 = ((panda$core$String*) $tmp2324);
            PANDA_ASSERT(((panda$core$Bit) { result2322 != NULL }).value);
            return result2322;
        }
        }
        else {
        panda$core$Bit $tmp2325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp2325.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2327 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1264_92244->$data + 16));
            type2326 = *$tmp2327;
            panda$core$String* $tmp2328 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, type2326, p_out);
            return $tmp2328;
        }
        }
        else {
        panda$core$Bit $tmp2329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2329.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2331 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92244->$data + 16));
            value2330 = *$tmp2331;
            panda$core$String* $tmp2332 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2330, p_out);
            return $tmp2332;
        }
        }
        else {
        panda$core$Bit $tmp2333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2333.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2335 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92244->$data + 16));
            value2334 = *$tmp2335;
            panda$core$String* $tmp2336 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2334, p_out);
            return $tmp2336;
        }
        }
        else {
        panda$core$Bit $tmp2337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp2337.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2339 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1264_92244->$data + 16));
            op2338 = *$tmp2339;
            org$pandalanguage$pandac$IRNode** $tmp2341 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92244->$data + 24));
            base2340 = *$tmp2341;
            panda$core$String* $tmp2342 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, op2338, base2340, p_out);
            return $tmp2342;
        }
        }
        else {
        panda$core$Bit $tmp2343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2343.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2345 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92244->$data + 16));
            test2344 = *$tmp2345;
            org$pandalanguage$pandac$IRNode** $tmp2347 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92244->$data + 24));
            ifTrue2346 = *$tmp2347;
            org$pandalanguage$pandac$IRNode** $tmp2349 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1264_92244->$data + 32));
            ifFalse2348 = *$tmp2349;
            panda$core$String* $tmp2350 = org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, test2344, ifTrue2346, ifFalse2348, p_out);
            return $tmp2350;
        }
        }
        else {
        panda$core$Bit $tmp2351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92244->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp2351.value) {
        {
            panda$core$String* $tmp2352 = org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2352;
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
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2353 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2353;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2357;
    org$pandalanguage$pandac$IRNode* s2369;
    (($fn2355) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2354);
    panda$core$Int64 $tmp2356 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2356;
    {
        ITable* $tmp2358 = ((panda$collections$Iterable*) p_statements)->$class->itable;
        while ($tmp2358->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2358 = $tmp2358->next;
        }
        $fn2360 $tmp2359 = $tmp2358->methods[0];
        panda$collections$Iterator* $tmp2361 = $tmp2359(((panda$collections$Iterable*) p_statements));
        s$Iter2357 = $tmp2361;
        $l2362:;
        ITable* $tmp2364 = s$Iter2357->$class->itable;
        while ($tmp2364->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2364 = $tmp2364->next;
        }
        $fn2366 $tmp2365 = $tmp2364->methods[0];
        panda$core$Bit $tmp2367 = $tmp2365(s$Iter2357);
        panda$core$Bit $tmp2368 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2367);
        if (!$tmp2368.value) goto $l2363;
        {
            ITable* $tmp2370 = s$Iter2357->$class->itable;
            while ($tmp2370->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2370 = $tmp2370->next;
            }
            $fn2372 $tmp2371 = $tmp2370->methods[1];
            panda$core$Object* $tmp2373 = $tmp2371(s$Iter2357);
            s2369 = ((org$pandalanguage$pandac$IRNode*) $tmp2373);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2369, p_out);
        }
        goto $l2362;
        $l2363:;
    }
    panda$core$Int64 $tmp2374 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2374;
    (($fn2376) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2375);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$1331_92377;
    panda$core$String* ptr2382;
    panda$core$String* arg2385;
    panda$core$String* base2407;
    panda$core$String* index2410;
    panda$core$String* value2413;
    {
        $match$1331_92377 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp2379 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1331_92377, &$s2378);
        if ($tmp2379.value) {
        {
            panda$core$Int64 $tmp2380 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2380, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2381.value);
            panda$core$Object* $tmp2383 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2384 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2383), p_out);
            ptr2382 = $tmp2384;
            panda$core$Object* $tmp2386 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2387 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2386));
            panda$core$String* $tmp2388 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2387, p_out);
            arg2385 = $tmp2388;
            panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2389, arg2385);
            panda$core$String* $tmp2392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2390, &$s2391);
            panda$core$String* $tmp2393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2392, ptr2382);
            panda$core$String* $tmp2395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2393, &$s2394);
            (($fn2396) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2395);
        }
        }
        else {
        panda$core$Bit $tmp2398 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1331_92377, &$s2397);
        if ($tmp2398.value) {
        {
            panda$core$Int64 $tmp2399 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2399, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2400.value);
            panda$core$Object* $tmp2401 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2402 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2401));
            org$pandalanguage$pandac$Type* $tmp2404 = (($fn2403) $tmp2402->$class->vtable[2])($tmp2402);
            panda$core$Int64 $tmp2405 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2404->subtypes);
            panda$core$Bit $tmp2406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2405, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2406.value);
            panda$core$Object* $tmp2408 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2409 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2408), p_out);
            base2407 = $tmp2409;
            panda$core$Object* $tmp2411 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2412 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2411), p_out);
            index2410 = $tmp2412;
            panda$core$Object* $tmp2414 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2415 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2414));
            panda$core$String* $tmp2416 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2415, p_out);
            value2413 = $tmp2416;
            panda$core$String* $tmp2417 = panda$core$String$convert$R$panda$core$String(base2407);
            panda$core$String* $tmp2419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2417, &$s2418);
            panda$core$String* $tmp2420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2419, index2410);
            panda$core$String* $tmp2422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2420, &$s2421);
            panda$core$String* $tmp2423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2422, value2413);
            panda$core$String* $tmp2425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2423, &$s2424);
            (($fn2426) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2425);
        }
        }
        else {
        panda$core$Bit $tmp2428 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1331_92377, &$s2427);
        if ($tmp2428.value) {
        {
            panda$core$Int64 $tmp2429 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2429, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2430.value);
            panda$core$Object* $tmp2432 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2433 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2432), p_out);
            panda$core$String* $tmp2434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2431, $tmp2433);
            panda$core$String* $tmp2436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2434, &$s2435);
            (($fn2437) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2436);
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
    org$pandalanguage$pandac$MethodDecl* m2438;
    org$pandalanguage$pandac$Type* actualMethodType2442;
    panda$core$String* actualResultType2443;
    panda$core$Bit isSuper2444;
    panda$collections$Array* argRefs2464;
    panda$core$Int64 offset2467;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2472;
    panda$core$String* arg2487;
    panda$core$String* targetRef2512;
    panda$core$String* methodRef2516;
    panda$core$String* separator2518;
    panda$core$String* indirectVar2522;
    panda$core$String* resultType2526;
    panda$collections$Iterator* a$Iter2550;
    panda$core$String* a2562;
    m2438 = p_mref->value;
    panda$core$Bit $tmp2440 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2438->owner)->name, &$s2439);
    if ($tmp2440.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_mref, p_args, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2441 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2438->owner);
    if ($tmp2441.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2438);
    }
    }
    panda$core$Int64 $tmp2446 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp2447 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2446, ((panda$core$Int64) { 1 }));
    bool $tmp2445 = $tmp2447.value;
    if (!$tmp2445) goto $l2448;
    panda$core$Object* $tmp2449 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2449)->$rawValue, ((panda$core$Int64) { 32 }));
    $tmp2445 = $tmp2450.value;
    $l2448:;
    panda$core$Bit $tmp2451 = { $tmp2445 };
    isSuper2444 = $tmp2451;
    panda$core$Bit $tmp2453 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2444);
    bool $tmp2452 = $tmp2453.value;
    if (!$tmp2452) goto $l2454;
    panda$core$Bit $tmp2455 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2438);
    $tmp2452 = $tmp2455.value;
    $l2454:;
    panda$core$Bit $tmp2456 = { $tmp2452 };
    if ($tmp2456.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2457 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2438);
        actualMethodType2442 = $tmp2457;
        panda$core$Int64 $tmp2458 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2442->subtypes);
        panda$core$Int64 $tmp2459 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2458, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2460 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2442->subtypes, $tmp2459);
        panda$core$String* $tmp2461 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2460));
        actualResultType2443 = $tmp2461;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2462 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2438);
        actualMethodType2442 = $tmp2462;
        panda$core$String* $tmp2463 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        actualResultType2443 = $tmp2463;
    }
    }
    panda$collections$Array* $tmp2465 = (panda$collections$Array*) malloc(40);
    $tmp2465->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2465->refCount.value = 1;
    panda$collections$Array$init($tmp2465);
    argRefs2464 = $tmp2465;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(argRefs2464, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2468 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp2469 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2442->subtypes);
    panda$core$Int64 $tmp2470 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2468, $tmp2469);
    panda$core$Int64 $tmp2471 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2470, ((panda$core$Int64) { 1 }));
    offset2467 = $tmp2471;
    panda$core$Int64 $tmp2473 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2472, ((panda$core$Int64) { 0 }), $tmp2473, ((panda$core$Bit) { false }));
    int64_t $tmp2475 = $tmp2472.min.value;
    panda$core$Int64 i2474 = { $tmp2475 };
    int64_t $tmp2477 = $tmp2472.max.value;
    bool $tmp2478 = $tmp2472.inclusive.value;
    if ($tmp2478) goto $l2485; else goto $l2486;
    $l2485:;
    if ($tmp2475 <= $tmp2477) goto $l2479; else goto $l2481;
    $l2486:;
    if ($tmp2475 < $tmp2477) goto $l2479; else goto $l2481;
    $l2479:;
    {
        panda$core$Object* $tmp2488 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2474);
        panda$core$String* $tmp2489 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2488), p_out);
        arg2487 = $tmp2489;
        panda$core$Bit $tmp2491 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2474, offset2467);
        bool $tmp2490 = $tmp2491.value;
        if (!$tmp2490) goto $l2492;
        panda$core$Int64 $tmp2493 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2474, offset2467);
        panda$core$Object* $tmp2494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2442->subtypes, $tmp2493);
        panda$core$Object* $tmp2495 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2474);
        org$pandalanguage$pandac$Type* $tmp2497 = (($fn2496) ((org$pandalanguage$pandac$IRNode*) $tmp2495)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2495));
        panda$core$Bit $tmp2498 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2494), $tmp2497);
        $tmp2490 = $tmp2498.value;
        $l2492:;
        panda$core$Bit $tmp2499 = { $tmp2490 };
        if ($tmp2499.value) {
        {
            panda$core$Object* $tmp2500 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2474);
            org$pandalanguage$pandac$Type* $tmp2502 = (($fn2501) ((org$pandalanguage$pandac$IRNode*) $tmp2500)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2500));
            panda$core$Int64 $tmp2503 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2474, offset2467);
            panda$core$Object* $tmp2504 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2442->subtypes, $tmp2503);
            panda$core$String* $tmp2505 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2487, $tmp2502, ((org$pandalanguage$pandac$Type*) $tmp2504), p_out);
            arg2487 = $tmp2505;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs2464, ((panda$core$Object*) arg2487));
    }
    $l2482:;
    int64_t $tmp2507 = $tmp2477 - i2474.value;
    if ($tmp2478) goto $l2508; else goto $l2509;
    $l2508:;
    if ((uint64_t) $tmp2507 >= 1) goto $l2506; else goto $l2481;
    $l2509:;
    if ((uint64_t) $tmp2507 > 1) goto $l2506; else goto $l2481;
    $l2506:;
    i2474.value += 1;
    goto $l2479;
    $l2481:;
    panda$core$Int64 $tmp2513 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs2464);
    panda$core$Bit $tmp2514 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2513, ((panda$core$Int64) { 0 }));
    if ($tmp2514.value) {
    {
        panda$core$Object* $tmp2515 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs2464, ((panda$core$Int64) { 0 }));
        targetRef2512 = ((panda$core$String*) $tmp2515);
    }
    }
    else {
    {
        targetRef2512 = NULL;
    }
    }
    panda$core$String* $tmp2517 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, targetRef2512, m2438, isSuper2444, p_out);
    methodRef2516 = $tmp2517;
    separator2518 = &$s2519;
    panda$core$Bit $tmp2520 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2438);
    if ($tmp2520.value) {
    {
        panda$core$Int64 $tmp2521 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2521;
        panda$core$Int64$wrapper* $tmp2524;
        $tmp2524 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp2524->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2524->refCount = 1;
        $tmp2524->value = self->varCount;
        panda$core$String* $tmp2525 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2523, ((panda$core$Object*) $tmp2524));
        indirectVar2522 = $tmp2525;
        panda$core$String* $tmp2527 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        resultType2526 = $tmp2527;
        panda$core$String* $tmp2528 = panda$core$String$convert$R$panda$core$String(resultType2526);
        panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2528, &$s2529);
        panda$core$String* $tmp2531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, indirectVar2522);
        panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2531, &$s2532);
        (($fn2534) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2533);
        panda$core$String* $tmp2535 = panda$core$String$convert$R$panda$core$String(methodRef2516);
        panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2535, &$s2536);
        panda$core$String* $tmp2538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, resultType2526);
        panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2538, &$s2539);
        panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2540, indirectVar2522);
        panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, &$s2542);
        (($fn2544) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2543);
        separator2518 = &$s2545;
    }
    }
    else {
    {
        panda$core$String* $tmp2546 = panda$core$String$convert$R$panda$core$String(methodRef2516);
        panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2546, &$s2547);
        (($fn2549) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2548);
    }
    }
    {
        ITable* $tmp2551 = ((panda$collections$Iterable*) argRefs2464)->$class->itable;
        while ($tmp2551->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2551 = $tmp2551->next;
        }
        $fn2553 $tmp2552 = $tmp2551->methods[0];
        panda$collections$Iterator* $tmp2554 = $tmp2552(((panda$collections$Iterable*) argRefs2464));
        a$Iter2550 = $tmp2554;
        $l2555:;
        ITable* $tmp2557 = a$Iter2550->$class->itable;
        while ($tmp2557->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2557 = $tmp2557->next;
        }
        $fn2559 $tmp2558 = $tmp2557->methods[0];
        panda$core$Bit $tmp2560 = $tmp2558(a$Iter2550);
        panda$core$Bit $tmp2561 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2560);
        if (!$tmp2561.value) goto $l2556;
        {
            ITable* $tmp2563 = a$Iter2550->$class->itable;
            while ($tmp2563->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2563 = $tmp2563->next;
            }
            $fn2565 $tmp2564 = $tmp2563->methods[1];
            panda$core$Object* $tmp2566 = $tmp2564(a$Iter2550);
            a2562 = ((panda$core$String*) $tmp2566);
            (($fn2567) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2518);
            (($fn2568) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2562);
            separator2518 = &$s2569;
        }
        goto $l2555;
        $l2556:;
    }
    (($fn2571) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2570);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$collections$ImmutableArray* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef2572;
    panda$core$String* $tmp2573 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    testRef2572 = $tmp2573;
    panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2574, testRef2572);
    panda$core$String* $tmp2577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2575, &$s2576);
    (($fn2578) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2577);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_ifTrue, p_out);
    (($fn2580) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2579);
    if (((panda$core$Bit) { p_ifFalse != NULL }).value) {
    {
        (($fn2582) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2581);
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_ifFalse, p_out);
        (($fn2584) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2583);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range2597;
    org$pandalanguage$pandac$Type* t2599;
    panda$core$String* llt2603;
    panda$core$String* indexType2605;
    org$pandalanguage$pandac$ClassDecl* cl2611;
    org$pandalanguage$pandac$FieldDecl* field2619;
    panda$core$String* numberType2625;
    panda$core$String* index2627;
    org$pandalanguage$pandac$IRNode* $match$1459_92628;
    org$pandalanguage$pandac$Variable* variable2630;
    panda$core$String* start2633;
    panda$core$String* indexValuePtr2645;
    panda$core$String* end2659;
    panda$core$String* inclusive2671;
    panda$core$String* loopStart2681;
    panda$core$String* loopBody2683;
    panda$core$String* loopEnd2685;
    panda$core$String* loopTest2687;
    panda$core$String* forwardEntry2691;
    panda$core$String* backwardEntry2693;
    panda$core$String* signPrefix2695;
    panda$core$String* unsigned2696;
    panda$core$String* forwardEntryInclusive2710;
    panda$core$String* forwardEntryExclusive2712;
    panda$core$String* loopInc2754;
    panda$core$String* forwardDelta2756;
    panda$core$String* forwardInclusiveLabel2771;
    panda$core$String* forwardExclusiveLabel2773;
    panda$core$String* forwardExclusiveTest2802;
    panda$core$String* inc2819;
    org$pandalanguage$pandac$Type* $tmp2586 = (($fn2585) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp2587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2586->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2587.value);
    org$pandalanguage$pandac$Type* $tmp2589 = (($fn2588) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp2590 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2589->subtypes);
    panda$core$Bit $tmp2591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2590, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2591.value);
    org$pandalanguage$pandac$Type* $tmp2593 = (($fn2592) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2594 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2593->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2596 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2594))->name, &$s2595);
    PANDA_ASSERT($tmp2596.value);
    panda$core$String* $tmp2598 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    range2597 = $tmp2598;
    org$pandalanguage$pandac$Type* $tmp2601 = (($fn2600) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2602 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2601->subtypes, ((panda$core$Int64) { 1 }));
    t2599 = ((org$pandalanguage$pandac$Type*) $tmp2602);
    panda$core$String* $tmp2604 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2599);
    llt2603 = $tmp2604;
    panda$core$Bit $tmp2606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2599->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2606.value) {
    {
        panda$core$Int64 $tmp2607 = panda$collections$Array$get_count$R$panda$core$Int64(t2599->subtypes);
        panda$core$Bit $tmp2608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2607, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2608.value);
        panda$core$Object* $tmp2609 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2599->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2610 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2609));
        indexType2605 = $tmp2610;
    }
    }
    else {
    {
        indexType2605 = llt2603;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2612 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2599);
    cl2611 = $tmp2612;
    PANDA_ASSERT(((panda$core$Bit) { cl2611 != NULL }).value);
    panda$collections$ListView* $tmp2613 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2611);
    ITable* $tmp2614 = ((panda$collections$CollectionView*) $tmp2613)->$class->itable;
    while ($tmp2614->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2614 = $tmp2614->next;
    }
    $fn2616 $tmp2615 = $tmp2614->methods[0];
    panda$core$Int64 $tmp2617 = $tmp2615(((panda$collections$CollectionView*) $tmp2613));
    panda$core$Bit $tmp2618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2617, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2618.value);
    panda$collections$ListView* $tmp2620 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2611);
    ITable* $tmp2621 = $tmp2620->$class->itable;
    while ($tmp2621->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2621 = $tmp2621->next;
    }
    $fn2623 $tmp2622 = $tmp2621->methods[0];
    panda$core$Object* $tmp2624 = $tmp2622($tmp2620, ((panda$core$Int64) { 0 }));
    field2619 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2624);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2619);
    panda$core$String* $tmp2626 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2619->type);
    numberType2625 = $tmp2626;
    {
        $match$1459_92628 = p_target;
        panda$core$Bit $tmp2629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1459_92628->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2629.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2631 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1459_92628->$data + 16));
            variable2630 = *$tmp2631;
            panda$core$String* $tmp2632 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable2630);
            index2627 = $tmp2632;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp2634 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2633 = $tmp2634;
    panda$core$String* $tmp2635 = panda$core$String$convert$R$panda$core$String(numberType2625);
    panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2635, &$s2636);
    panda$core$String* $tmp2638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, start2633);
    panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2638, &$s2639);
    panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2640, range2597);
    panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2641, &$s2642);
    (($fn2644) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2643);
    panda$core$String* $tmp2646 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2645 = $tmp2646;
    org$pandalanguage$pandac$Type* $tmp2647 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2611);
    panda$core$String* $tmp2648 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2647);
    panda$core$String* $tmp2649 = panda$core$String$convert$R$panda$core$String($tmp2648);
    panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2649, &$s2650);
    panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, index2627);
    panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2652, &$s2653);
    panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, start2633);
    panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2655, &$s2656);
    (($fn2658) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2657);
    panda$core$String* $tmp2660 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2659 = $tmp2660;
    panda$core$String* $tmp2661 = panda$core$String$convert$R$panda$core$String(numberType2625);
    panda$core$String* $tmp2663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2661, &$s2662);
    panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2663, end2659);
    panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2664, &$s2665);
    panda$core$String* $tmp2667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, range2597);
    panda$core$String* $tmp2669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2667, &$s2668);
    (($fn2670) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2669);
    panda$core$String* $tmp2672 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2671 = $tmp2672;
    panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2673, inclusive2671);
    panda$core$String* $tmp2676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2674, &$s2675);
    panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2676, range2597);
    panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2677, &$s2678);
    (($fn2680) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2679);
    panda$core$String* $tmp2682 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2681 = $tmp2682;
    panda$core$String* $tmp2684 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2683 = $tmp2684;
    panda$core$String* $tmp2686 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2685 = $tmp2686;
    panda$core$String* $tmp2688 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2687 = $tmp2688;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2689 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2689->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2689->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2689, p_label, loopEnd2685, loopTest2687);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2689));
    panda$core$String* $tmp2692 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2691 = $tmp2692;
    panda$core$String* $tmp2694 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2693 = $tmp2694;
    panda$core$Bit $tmp2698 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2599)->name, &$s2697);
    if ($tmp2698.value) {
    {
        signPrefix2695 = &$s2699;
        panda$core$String* $tmp2701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2700, numberType2625);
        unsigned2696 = $tmp2701;
    }
    }
    else {
    {
        panda$core$Bit $tmp2704 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2599)->name, &$s2703);
        bool $tmp2702 = $tmp2704.value;
        if ($tmp2702) goto $l2705;
        panda$core$Bit $tmp2707 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2599)->name, &$s2706);
        $tmp2702 = $tmp2707.value;
        $l2705:;
        panda$core$Bit $tmp2708 = { $tmp2702 };
        PANDA_ASSERT($tmp2708.value);
        signPrefix2695 = &$s2709;
        unsigned2696 = numberType2625;
    }
    }
    panda$core$String* $tmp2711 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2710 = $tmp2711;
    panda$core$String* $tmp2713 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2712 = $tmp2713;
    panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2714, inclusive2671);
    panda$core$String* $tmp2717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, &$s2716);
    panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2717, forwardEntryInclusive2710);
    panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, &$s2719);
    panda$core$String* $tmp2721 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2712);
    panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, &$s2722);
    panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2720, $tmp2723);
    (($fn2725) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2724);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2710, p_out);
    panda$core$String* $tmp2727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2726, start2633);
    panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2727, &$s2728);
    panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2729, end2659);
    panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2730, &$s2731);
    panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2732, loopStart2681);
    panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, &$s2734);
    panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2735, loopEnd2685);
    panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, &$s2737);
    (($fn2739) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2738);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2712, p_out);
    panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2740, start2633);
    panda$core$String* $tmp2743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2741, &$s2742);
    panda$core$String* $tmp2744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2743, end2659);
    panda$core$String* $tmp2746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2744, &$s2745);
    panda$core$String* $tmp2747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2746, loopStart2681);
    panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2747, &$s2748);
    panda$core$String* $tmp2750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, loopEnd2685);
    panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2750, &$s2751);
    (($fn2753) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2752);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2681, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2687, p_out);
    panda$core$String* $tmp2755 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2754 = $tmp2755;
    panda$core$String* $tmp2757 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2756 = $tmp2757;
    panda$core$String* $tmp2758 = panda$core$String$convert$R$panda$core$String(numberType2625);
    panda$core$String* $tmp2760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2758, &$s2759);
    panda$core$String* $tmp2761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2760, forwardDelta2756);
    panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2761, &$s2762);
    panda$core$String* $tmp2764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2763, end2659);
    panda$core$String* $tmp2766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2764, &$s2765);
    panda$core$String* $tmp2767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2766, index2627);
    panda$core$String* $tmp2769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2767, &$s2768);
    (($fn2770) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2769);
    panda$core$String* $tmp2772 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2771 = $tmp2772;
    panda$core$String* $tmp2774 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2773 = $tmp2774;
    panda$core$String* $tmp2776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2775, inclusive2671);
    panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2776, &$s2777);
    panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, forwardInclusiveLabel2771);
    panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2779, &$s2780);
    panda$core$String* $tmp2782 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2773);
    panda$core$String* $tmp2784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2782, &$s2783);
    panda$core$String* $tmp2785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2781, $tmp2784);
    (($fn2786) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2785);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2771, p_out);
    panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2787, unsigned2696);
    panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2788, &$s2789);
    panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, forwardDelta2756);
    panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, &$s2792);
    panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, loopInc2754);
    panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2794, &$s2795);
    panda$core$String* $tmp2797 = panda$core$String$convert$R$panda$core$String(loopEnd2685);
    panda$core$String* $tmp2799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2797, &$s2798);
    panda$core$String* $tmp2800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2796, $tmp2799);
    (($fn2801) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2800);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2773, p_out);
    panda$core$String* $tmp2803 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2802 = $tmp2803;
    panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2804, unsigned2696);
    panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, &$s2806);
    panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, forwardDelta2756);
    panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, &$s2809);
    panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2810, loopInc2754);
    panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2811, &$s2812);
    panda$core$String* $tmp2814 = panda$core$String$convert$R$panda$core$String(loopEnd2685);
    panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2814, &$s2815);
    panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2813, $tmp2816);
    (($fn2818) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2817);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2754, p_out);
    panda$core$String* $tmp2820 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2819 = $tmp2820;
    panda$core$String* $tmp2821 = panda$core$String$convert$R$panda$core$String(index2627);
    panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2822);
    (($fn2824) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2823);
    panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2825, loopStart2681);
    panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2826, &$s2827);
    (($fn2829) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2828);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2685, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range2842;
    org$pandalanguage$pandac$Type* t2844;
    org$pandalanguage$pandac$Type* stepType2848;
    panda$core$String* llt2852;
    panda$core$String* indexType2854;
    org$pandalanguage$pandac$ClassDecl* cl2860;
    org$pandalanguage$pandac$FieldDecl* field2868;
    panda$core$String* numberType2874;
    panda$core$String* index2876;
    org$pandalanguage$pandac$IRNode* $match$1571_92877;
    org$pandalanguage$pandac$Variable* variable2879;
    panda$core$String* start2882;
    panda$core$String* indexValuePtr2894;
    panda$core$String* end2908;
    panda$core$String* step2920;
    org$pandalanguage$pandac$ClassDecl* stepCl2922;
    org$pandalanguage$pandac$FieldDecl* stepField2930;
    panda$core$String* inclusive2947;
    panda$core$String* loopStart2957;
    panda$core$String* loopBody2959;
    panda$core$String* loopEnd2961;
    panda$core$String* loopTest2963;
    panda$core$String* forwardEntry2967;
    panda$core$String* backwardEntry2969;
    panda$core$String* unsigned2971;
    panda$core$String* signPrefix2972;
    panda$core$String* direction2986;
    panda$core$String* forwardEntryInclusive3010;
    panda$core$String* forwardEntryExclusive3012;
    panda$core$String* backwardEntryInclusive3054;
    panda$core$String* backwardEntryExclusive3056;
    panda$core$String* backwardEntryExclusiveTest3084;
    panda$core$String* loopInc3100;
    panda$core$String* forwardLabel3102;
    panda$core$String* backwardLabel3104;
    panda$core$String* forwardDelta3117;
    panda$core$String* forwardInclusiveLabel3132;
    panda$core$String* forwardExclusiveLabel3134;
    panda$core$String* forwardExclusiveTest3166;
    panda$core$String* backwardDelta3186;
    panda$core$String* backwardInclusiveLabel3201;
    panda$core$String* backwardExclusiveLabel3203;
    panda$core$String* inc3255;
    org$pandalanguage$pandac$Type* $tmp2831 = (($fn2830) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp2832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2831->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2832.value);
    org$pandalanguage$pandac$Type* $tmp2834 = (($fn2833) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp2835 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2834->subtypes);
    panda$core$Bit $tmp2836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2835, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2836.value);
    org$pandalanguage$pandac$Type* $tmp2838 = (($fn2837) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2839 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2838->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2841 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2839))->name, &$s2840);
    PANDA_ASSERT($tmp2841.value);
    panda$core$String* $tmp2843 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    range2842 = $tmp2843;
    org$pandalanguage$pandac$Type* $tmp2846 = (($fn2845) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2847 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2846->subtypes, ((panda$core$Int64) { 1 }));
    t2844 = ((org$pandalanguage$pandac$Type*) $tmp2847);
    org$pandalanguage$pandac$Type* $tmp2850 = (($fn2849) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2851 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2850->subtypes, ((panda$core$Int64) { 2 }));
    stepType2848 = ((org$pandalanguage$pandac$Type*) $tmp2851);
    panda$core$String* $tmp2853 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2844);
    llt2852 = $tmp2853;
    panda$core$Bit $tmp2855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2844->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2855.value) {
    {
        panda$core$Int64 $tmp2856 = panda$collections$Array$get_count$R$panda$core$Int64(t2844->subtypes);
        panda$core$Bit $tmp2857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2856, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2857.value);
        panda$core$Object* $tmp2858 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2844->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2859 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2858));
        indexType2854 = $tmp2859;
    }
    }
    else {
    {
        indexType2854 = llt2852;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2861 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2844);
    cl2860 = $tmp2861;
    PANDA_ASSERT(((panda$core$Bit) { cl2860 != NULL }).value);
    panda$collections$ListView* $tmp2862 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2860);
    ITable* $tmp2863 = ((panda$collections$CollectionView*) $tmp2862)->$class->itable;
    while ($tmp2863->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2863 = $tmp2863->next;
    }
    $fn2865 $tmp2864 = $tmp2863->methods[0];
    panda$core$Int64 $tmp2866 = $tmp2864(((panda$collections$CollectionView*) $tmp2862));
    panda$core$Bit $tmp2867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2866, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2867.value);
    panda$collections$ListView* $tmp2869 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2860);
    ITable* $tmp2870 = $tmp2869->$class->itable;
    while ($tmp2870->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2870 = $tmp2870->next;
    }
    $fn2872 $tmp2871 = $tmp2870->methods[0];
    panda$core$Object* $tmp2873 = $tmp2871($tmp2869, ((panda$core$Int64) { 0 }));
    field2868 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2873);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2868);
    panda$core$String* $tmp2875 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2868->type);
    numberType2874 = $tmp2875;
    {
        $match$1571_92877 = p_target;
        panda$core$Bit $tmp2878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1571_92877->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2878.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2880 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1571_92877->$data + 16));
            variable2879 = *$tmp2880;
            panda$core$String* $tmp2881 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable2879);
            index2876 = $tmp2881;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp2883 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2882 = $tmp2883;
    panda$core$String* $tmp2884 = panda$core$String$convert$R$panda$core$String(numberType2874);
    panda$core$String* $tmp2886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2884, &$s2885);
    panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2886, start2882);
    panda$core$String* $tmp2889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2887, &$s2888);
    panda$core$String* $tmp2890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2889, range2842);
    panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2890, &$s2891);
    (($fn2893) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2892);
    panda$core$String* $tmp2895 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2894 = $tmp2895;
    org$pandalanguage$pandac$Type* $tmp2896 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2860);
    panda$core$String* $tmp2897 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2896);
    panda$core$String* $tmp2898 = panda$core$String$convert$R$panda$core$String($tmp2897);
    panda$core$String* $tmp2900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2898, &$s2899);
    panda$core$String* $tmp2901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2900, index2876);
    panda$core$String* $tmp2903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2901, &$s2902);
    panda$core$String* $tmp2904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2903, start2882);
    panda$core$String* $tmp2906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2904, &$s2905);
    (($fn2907) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2906);
    panda$core$String* $tmp2909 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2908 = $tmp2909;
    panda$core$String* $tmp2910 = panda$core$String$convert$R$panda$core$String(numberType2874);
    panda$core$String* $tmp2912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2910, &$s2911);
    panda$core$String* $tmp2913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2912, end2908);
    panda$core$String* $tmp2915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2913, &$s2914);
    panda$core$String* $tmp2916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2915, range2842);
    panda$core$String* $tmp2918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2916, &$s2917);
    (($fn2919) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2918);
    panda$core$String* $tmp2921 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2920 = $tmp2921;
    org$pandalanguage$pandac$ClassDecl* $tmp2923 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, stepType2848);
    stepCl2922 = $tmp2923;
    PANDA_ASSERT(((panda$core$Bit) { stepCl2922 != NULL }).value);
    panda$collections$ListView* $tmp2924 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2922);
    ITable* $tmp2925 = ((panda$collections$CollectionView*) $tmp2924)->$class->itable;
    while ($tmp2925->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2925 = $tmp2925->next;
    }
    $fn2927 $tmp2926 = $tmp2925->methods[0];
    panda$core$Int64 $tmp2928 = $tmp2926(((panda$collections$CollectionView*) $tmp2924));
    panda$core$Bit $tmp2929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2928, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2929.value);
    panda$collections$ListView* $tmp2931 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2922);
    ITable* $tmp2932 = $tmp2931->$class->itable;
    while ($tmp2932->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2932 = $tmp2932->next;
    }
    $fn2934 $tmp2933 = $tmp2932->methods[0];
    panda$core$Object* $tmp2935 = $tmp2933($tmp2931, ((panda$core$Int64) { 0 }));
    stepField2930 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2935);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, stepField2930);
    panda$core$String* $tmp2936 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, stepField2930->type);
    panda$core$String* $tmp2937 = panda$core$String$convert$R$panda$core$String($tmp2936);
    panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2937, &$s2938);
    panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2939, step2920);
    panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2940, &$s2941);
    panda$core$String* $tmp2943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2942, range2842);
    panda$core$String* $tmp2945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2943, &$s2944);
    (($fn2946) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2945);
    panda$core$String* $tmp2948 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2947 = $tmp2948;
    panda$core$String* $tmp2950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2949, inclusive2947);
    panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, &$s2951);
    panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2952, range2842);
    panda$core$String* $tmp2955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2953, &$s2954);
    (($fn2956) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2955);
    panda$core$String* $tmp2958 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2957 = $tmp2958;
    panda$core$String* $tmp2960 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2959 = $tmp2960;
    panda$core$String* $tmp2962 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2961 = $tmp2962;
    panda$core$String* $tmp2964 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2963 = $tmp2964;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2965 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2965->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2965->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2965, p_label, loopEnd2961, loopTest2963);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2965));
    panda$core$String* $tmp2968 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2967 = $tmp2968;
    panda$core$String* $tmp2970 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2969 = $tmp2970;
    panda$core$Bit $tmp2974 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2848)->name, &$s2973);
    if ($tmp2974.value) {
    {
        signPrefix2972 = &$s2975;
        panda$core$String* $tmp2977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2976, numberType2874);
        unsigned2971 = $tmp2977;
    }
    }
    else {
    {
        panda$core$Bit $tmp2980 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2848)->name, &$s2979);
        bool $tmp2978 = $tmp2980.value;
        if ($tmp2978) goto $l2981;
        panda$core$Bit $tmp2983 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2848)->name, &$s2982);
        $tmp2978 = $tmp2983.value;
        $l2981:;
        panda$core$Bit $tmp2984 = { $tmp2978 };
        PANDA_ASSERT($tmp2984.value);
        signPrefix2972 = &$s2985;
        unsigned2971 = numberType2874;
    }
    }
    panda$core$Bit $tmp2988 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2972, &$s2987);
    if ($tmp2988.value) {
    {
        panda$core$String* $tmp2989 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2986 = $tmp2989;
        panda$core$String* $tmp2991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2990, direction2986);
        panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2991, &$s2992);
        panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2993, step2920);
        panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2994, &$s2995);
        (($fn2997) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2996);
    }
    }
    else {
    {
        direction2986 = &$s2998;
    }
    }
    panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2999, direction2986);
    panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3000, &$s3001);
    panda$core$String* $tmp3003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, forwardEntry2967);
    panda$core$String* $tmp3005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3003, &$s3004);
    panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3005, backwardEntry2969);
    panda$core$String* $tmp3008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3006, &$s3007);
    (($fn3009) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3008);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2967, p_out);
    panda$core$String* $tmp3011 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive3010 = $tmp3011;
    panda$core$String* $tmp3013 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive3012 = $tmp3013;
    panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3014, inclusive2947);
    panda$core$String* $tmp3017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3015, &$s3016);
    panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3017, forwardEntryInclusive3010);
    panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3018, &$s3019);
    panda$core$String* $tmp3021 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive3012);
    panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3021, &$s3022);
    panda$core$String* $tmp3024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3020, $tmp3023);
    (($fn3025) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3024);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive3010, p_out);
    panda$core$String* $tmp3027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3026, start2882);
    panda$core$String* $tmp3029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3027, &$s3028);
    panda$core$String* $tmp3030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3029, end2908);
    panda$core$String* $tmp3032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3030, &$s3031);
    panda$core$String* $tmp3033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3032, loopStart2957);
    panda$core$String* $tmp3035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3033, &$s3034);
    panda$core$String* $tmp3036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3035, loopEnd2961);
    panda$core$String* $tmp3038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3036, &$s3037);
    (($fn3039) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3038);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive3012, p_out);
    panda$core$String* $tmp3041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3040, start2882);
    panda$core$String* $tmp3043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3041, &$s3042);
    panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3043, end2908);
    panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, &$s3045);
    panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3046, loopStart2957);
    panda$core$String* $tmp3049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3047, &$s3048);
    panda$core$String* $tmp3050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3049, loopEnd2961);
    panda$core$String* $tmp3052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3050, &$s3051);
    (($fn3053) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3052);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2969, p_out);
    panda$core$String* $tmp3055 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive3054 = $tmp3055;
    panda$core$String* $tmp3057 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive3056 = $tmp3057;
    panda$core$String* $tmp3059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3058, inclusive2947);
    panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3059, &$s3060);
    panda$core$String* $tmp3062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3061, backwardEntryInclusive3054);
    panda$core$String* $tmp3064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3062, &$s3063);
    panda$core$String* $tmp3065 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive3056);
    panda$core$String* $tmp3067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3065, &$s3066);
    panda$core$String* $tmp3068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3064, $tmp3067);
    (($fn3069) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3068);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive3054, p_out);
    panda$core$String* $tmp3071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3070, start2882);
    panda$core$String* $tmp3073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3071, &$s3072);
    panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3073, end2908);
    panda$core$String* $tmp3076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3074, &$s3075);
    panda$core$String* $tmp3077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3076, loopStart2957);
    panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3077, &$s3078);
    panda$core$String* $tmp3080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3079, loopEnd2961);
    panda$core$String* $tmp3082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3080, &$s3081);
    (($fn3083) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3082);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive3056, p_out);
    panda$core$String* $tmp3085 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest3084 = $tmp3085;
    panda$core$String* $tmp3087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3086, start2882);
    panda$core$String* $tmp3089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3087, &$s3088);
    panda$core$String* $tmp3090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3089, end2908);
    panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3090, &$s3091);
    panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, loopStart2957);
    panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, &$s3094);
    panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, loopEnd2961);
    panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3097);
    (($fn3099) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3098);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2957, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2963, p_out);
    panda$core$String* $tmp3101 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc3100 = $tmp3101;
    panda$core$String* $tmp3103 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel3102 = $tmp3103;
    panda$core$String* $tmp3105 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel3104 = $tmp3105;
    panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3106, direction2986);
    panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3107, &$s3108);
    panda$core$String* $tmp3110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, forwardLabel3102);
    panda$core$String* $tmp3112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3110, &$s3111);
    panda$core$String* $tmp3113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3112, backwardLabel3104);
    panda$core$String* $tmp3115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3113, &$s3114);
    (($fn3116) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3115);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel3102, p_out);
    panda$core$String* $tmp3118 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta3117 = $tmp3118;
    panda$core$String* $tmp3119 = panda$core$String$convert$R$panda$core$String(numberType2874);
    panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, &$s3120);
    panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3121, forwardDelta3117);
    panda$core$String* $tmp3124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3122, &$s3123);
    panda$core$String* $tmp3125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3124, end2908);
    panda$core$String* $tmp3127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3125, &$s3126);
    panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3127, index2876);
    panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3128, &$s3129);
    (($fn3131) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3130);
    panda$core$String* $tmp3133 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel3132 = $tmp3133;
    panda$core$String* $tmp3135 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel3134 = $tmp3135;
    panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3136, inclusive2947);
    panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, &$s3138);
    panda$core$String* $tmp3140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3139, forwardInclusiveLabel3132);
    panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3140, &$s3141);
    panda$core$String* $tmp3143 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel3134);
    panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, &$s3144);
    panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3142, $tmp3145);
    (($fn3147) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3146);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel3132, p_out);
    panda$core$String* $tmp3149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3148, unsigned2971);
    panda$core$String* $tmp3151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3149, &$s3150);
    panda$core$String* $tmp3152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3151, forwardDelta3117);
    panda$core$String* $tmp3154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3152, &$s3153);
    panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3154, step2920);
    panda$core$String* $tmp3157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, &$s3156);
    panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3157, loopInc3100);
    panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, &$s3159);
    panda$core$String* $tmp3161 = panda$core$String$convert$R$panda$core$String(loopEnd2961);
    panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, &$s3162);
    panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, $tmp3163);
    (($fn3165) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3164);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel3134, p_out);
    panda$core$String* $tmp3167 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest3166 = $tmp3167;
    panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3168, unsigned2971);
    panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3169, &$s3170);
    panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3171, forwardDelta3117);
    panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3172, &$s3173);
    panda$core$String* $tmp3175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, step2920);
    panda$core$String* $tmp3177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3175, &$s3176);
    panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3177, loopInc3100);
    panda$core$String* $tmp3180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, &$s3179);
    panda$core$String* $tmp3181 = panda$core$String$convert$R$panda$core$String(loopEnd2961);
    panda$core$String* $tmp3183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3181, &$s3182);
    panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3180, $tmp3183);
    (($fn3185) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3184);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel3104, p_out);
    panda$core$String* $tmp3187 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta3186 = $tmp3187;
    panda$core$String* $tmp3188 = panda$core$String$convert$R$panda$core$String(numberType2874);
    panda$core$String* $tmp3190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3188, &$s3189);
    panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3190, backwardDelta3186);
    panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3191, &$s3192);
    panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3193, index2876);
    panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, &$s3195);
    panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3196, end2908);
    panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, &$s3198);
    (($fn3200) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3199);
    panda$core$String* $tmp3202 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel3201 = $tmp3202;
    panda$core$String* $tmp3204 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel3203 = $tmp3204;
    panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3205, inclusive2947);
    panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3206, &$s3207);
    panda$core$String* $tmp3209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, backwardInclusiveLabel3201);
    panda$core$String* $tmp3211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3209, &$s3210);
    panda$core$String* $tmp3212 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel3203);
    panda$core$String* $tmp3214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3212, &$s3213);
    panda$core$String* $tmp3215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3211, $tmp3214);
    (($fn3216) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3215);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel3201, p_out);
    panda$core$String* $tmp3218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3217, unsigned2971);
    panda$core$String* $tmp3220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3218, &$s3219);
    panda$core$String* $tmp3221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3220, backwardDelta3186);
    panda$core$String* $tmp3223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3221, &$s3222);
    panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3223, step2920);
    panda$core$String* $tmp3226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3224, &$s3225);
    panda$core$String* $tmp3227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3226, loopInc3100);
    panda$core$String* $tmp3229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3227, &$s3228);
    panda$core$String* $tmp3231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3230, loopEnd2961);
    panda$core$String* $tmp3233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3231, &$s3232);
    panda$core$String* $tmp3234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3229, $tmp3233);
    (($fn3235) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3234);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel3203, p_out);
    panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3236, unsigned2971);
    panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3237, &$s3238);
    panda$core$String* $tmp3240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3239, backwardDelta3186);
    panda$core$String* $tmp3242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3240, &$s3241);
    panda$core$String* $tmp3243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3242, step2920);
    panda$core$String* $tmp3245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3243, &$s3244);
    panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3245, loopInc3100);
    panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3246, &$s3247);
    panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3249, loopEnd2961);
    panda$core$String* $tmp3252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3250, &$s3251);
    panda$core$String* $tmp3253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3248, $tmp3252);
    (($fn3254) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3253);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc3100, p_out);
    panda$core$String* $tmp3256 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3255 = $tmp3256;
    panda$core$String* $tmp3257 = panda$core$String$convert$R$panda$core$String(index2876);
    panda$core$String* $tmp3259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3257, &$s3258);
    panda$core$String* $tmp3260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3259, step2920);
    panda$core$String* $tmp3262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3260, &$s3261);
    (($fn3263) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3262);
    panda$core$String* $tmp3265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3264, loopStart2957);
    panda$core$String* $tmp3267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3265, &$s3266);
    (($fn3268) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3267);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2961, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Type* $tmp3270 = (($fn3269) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3271 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit($tmp3270);
    if ($tmp3271.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_label, p_target, p_list, p_statements, p_out);
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp3273 = (($fn3272) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3274 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit($tmp3273);
    if ($tmp3274.value) {
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
    panda$core$String* loopStart3279;
    panda$core$String* loopEnd3281;
    org$pandalanguage$pandac$Type* $tmp3276 = (($fn3275) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3277 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3278 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3276, $tmp3277);
    PANDA_ASSERT($tmp3278.value);
    panda$core$String* $tmp3280 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3279 = $tmp3280;
    panda$core$String* $tmp3282 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3281 = $tmp3282;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3283 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3283->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3283->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3283, p_label, loopEnd3281, loopStart3279);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3283));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3279, p_out);
    panda$core$String* $tmp3286 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3285, $tmp3286);
    panda$core$String* $tmp3289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3287, &$s3288);
    panda$core$String* $tmp3290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3289, loopEnd3281);
    panda$core$String* $tmp3292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3290, &$s3291);
    (($fn3293) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3292);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3294, loopStart3279);
    panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3295, &$s3296);
    (($fn3298) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3297);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3281, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3303;
    panda$core$String* loopEnd3305;
    org$pandalanguage$pandac$Type* $tmp3300 = (($fn3299) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3301 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3302 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3300, $tmp3301);
    PANDA_ASSERT($tmp3302.value);
    panda$core$String* $tmp3304 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3303 = $tmp3304;
    panda$core$String* $tmp3306 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3305 = $tmp3306;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3307 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3307->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3307->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3307, p_label, loopEnd3305, loopStart3303);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3307));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3303, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3310 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3309, $tmp3310);
    panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3311, &$s3312);
    panda$core$String* $tmp3314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3313, loopStart3303);
    panda$core$String* $tmp3316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3314, &$s3315);
    (($fn3317) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3316);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3305, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3318;
    panda$core$String* loopEnd3320;
    panda$core$String* $tmp3319 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3318 = $tmp3319;
    panda$core$String* $tmp3321 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3320 = $tmp3321;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3322 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3322->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3322->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3322, p_label, loopEnd3320, loopStart3318);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3322));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3318, p_out);
    (($fn3325) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3324);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    (($fn3327) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3326);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3320, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1769_93328;
    org$pandalanguage$pandac$Variable* v3330;
    {
        $match$1769_93328 = p_target;
        panda$core$Bit $tmp3329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1769_93328->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp3329.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3331 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1769_93328->$data + 16));
            v3330 = *$tmp3331;
            panda$core$String* $tmp3332 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3330->type);
            panda$core$String* $tmp3333 = panda$core$String$convert$R$panda$core$String($tmp3332);
            panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3333, &$s3334);
            panda$core$String* $tmp3336 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3330);
            panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, $tmp3336);
            panda$core$String* $tmp3339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, &$s3338);
            (($fn3340) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3339);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3341 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3330);
                panda$core$String* $tmp3342 = panda$core$String$convert$R$panda$core$String($tmp3341);
                panda$core$String* $tmp3344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3342, &$s3343);
                panda$core$String* $tmp3345 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3344, $tmp3345);
                panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3346, &$s3347);
                (($fn3349) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3348);
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
    panda$collections$Iterator* decl$Iter3350;
    org$pandalanguage$pandac$IRNode* decl3362;
    org$pandalanguage$pandac$IRNode* $match$1782_133367;
    org$pandalanguage$pandac$IRNode* target3369;
    org$pandalanguage$pandac$IRNode* value3371;
    {
        ITable* $tmp3351 = ((panda$collections$Iterable*) p_decls)->$class->itable;
        while ($tmp3351->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3351 = $tmp3351->next;
        }
        $fn3353 $tmp3352 = $tmp3351->methods[0];
        panda$collections$Iterator* $tmp3354 = $tmp3352(((panda$collections$Iterable*) p_decls));
        decl$Iter3350 = $tmp3354;
        $l3355:;
        ITable* $tmp3357 = decl$Iter3350->$class->itable;
        while ($tmp3357->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3357 = $tmp3357->next;
        }
        $fn3359 $tmp3358 = $tmp3357->methods[0];
        panda$core$Bit $tmp3360 = $tmp3358(decl$Iter3350);
        panda$core$Bit $tmp3361 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3360);
        if (!$tmp3361.value) goto $l3356;
        {
            ITable* $tmp3363 = decl$Iter3350->$class->itable;
            while ($tmp3363->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3363 = $tmp3363->next;
            }
            $fn3365 $tmp3364 = $tmp3363->methods[1];
            panda$core$Object* $tmp3366 = $tmp3364(decl$Iter3350);
            decl3362 = ((org$pandalanguage$pandac$IRNode*) $tmp3366);
            {
                $match$1782_133367 = decl3362;
                panda$core$Bit $tmp3368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1782_133367->$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp3368.value) {
                {
                    org$pandalanguage$pandac$IRNode** $tmp3370 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1782_133367->$data + 0));
                    target3369 = *$tmp3370;
                    org$pandalanguage$pandac$IRNode** $tmp3372 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1782_133367->$data + 8));
                    value3371 = *$tmp3372;
                    org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, target3369, value3371, p_out);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l3355;
        $l3356:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1792_93373;
    org$pandalanguage$pandac$Variable* v3378;
    org$pandalanguage$pandac$IRNode* base3382;
    org$pandalanguage$pandac$FieldDecl* field3384;
    panda$core$String* baseRef3386;
    org$pandalanguage$pandac$IRNode* value3395;
    panda$core$Int64 id3397;
    panda$core$String* result3399;
    org$pandalanguage$pandac$IRNode* value3403;
    org$pandalanguage$pandac$ChoiceEntry* ce3405;
    panda$core$Int64 field3407;
    org$pandalanguage$pandac$FieldDecl* data3409;
    org$pandalanguage$pandac$IRNode* fieldRef3413;
    panda$core$String* base3418;
    panda$core$Int64 size3420;
    panda$core$Int64 offset3422;
    panda$core$String* result3424;
    {
        $match$1792_93373 = p_lvalue;
        panda$core$Bit $tmp3374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1792_93373->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp3374.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3375 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3376 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3375, p_out);
            return $tmp3376;
        }
        }
        else {
        panda$core$Bit $tmp3377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1792_93373->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp3377.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3379 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1792_93373->$data + 16));
            v3378 = *$tmp3379;
            panda$core$String* $tmp3380 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3378);
            return $tmp3380;
        }
        }
        else {
        panda$core$Bit $tmp3381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1792_93373->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp3381.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3383 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1792_93373->$data + 24));
            base3382 = *$tmp3383;
            org$pandalanguage$pandac$FieldDecl** $tmp3385 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1792_93373->$data + 32));
            field3384 = *$tmp3385;
            panda$core$String* $tmp3387 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3382, p_out);
            baseRef3386 = $tmp3387;
            panda$core$String* $tmp3388 = panda$core$String$convert$R$panda$core$String(baseRef3386);
            panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, &$s3389);
            panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, ((org$pandalanguage$pandac$Symbol*) field3384)->name);
            panda$core$String* $tmp3393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3391, &$s3392);
            return $tmp3393;
        }
        }
        else {
        panda$core$Bit $tmp3394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1792_93373->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp3394.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3396 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1792_93373->$data + 0));
            value3395 = *$tmp3396;
            panda$core$Int64* $tmp3398 = ((panda$core$Int64*) ((char*) $match$1792_93373->$data + 8));
            id3397 = *$tmp3398;
            panda$core$String* $tmp3400 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value3395, p_out);
            result3399 = $tmp3400;
            panda$core$Int64$wrapper* $tmp3401;
            $tmp3401 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp3401->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3401->refCount = 1;
            $tmp3401->value = id3397;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp3401), ((panda$core$Object*) result3399));
            return result3399;
        }
        }
        else {
        panda$core$Bit $tmp3402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1792_93373->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp3402.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3404 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1792_93373->$data + 16));
            value3403 = *$tmp3404;
            org$pandalanguage$pandac$ChoiceEntry** $tmp3406 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$1792_93373->$data + 24));
            ce3405 = *$tmp3406;
            panda$core$Int64* $tmp3408 = ((panda$core$Int64*) ((char*) $match$1792_93373->$data + 32));
            field3407 = *$tmp3408;
            panda$core$Object* $tmp3410 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce3405->owner->fields, ((panda$core$Int64) { 1 }));
            data3409 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3410);
            panda$core$Bit $tmp3412 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) data3409)->name, &$s3411);
            PANDA_ASSERT($tmp3412.value);
            org$pandalanguage$pandac$IRNode* $tmp3414 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3414->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3414->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp3417 = (($fn3416) p_lvalue->$class->vtable[3])(p_lvalue);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp3414, ((panda$core$Int64) { 14 }), $tmp3417, data3409->type, value3403, data3409);
            fieldRef3413 = $tmp3414;
            panda$core$String* $tmp3419 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, fieldRef3413, p_out);
            base3418 = $tmp3419;
            panda$core$Int64 $tmp3421 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3405->owner);
            size3420 = $tmp3421;
            panda$core$Int64 $tmp3423 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3405, field3407);
            offset3422 = $tmp3423;
            panda$core$String* $tmp3425 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result3424 = $tmp3425;
            org$pandalanguage$pandac$Type* $tmp3427 = (($fn3426) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3428 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3427);
            panda$core$String* $tmp3429 = panda$core$String$convert$R$panda$core$String($tmp3428);
            panda$core$String* $tmp3431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3429, &$s3430);
            panda$core$String* $tmp3432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3431, result3424);
            panda$core$String* $tmp3434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3432, &$s3433);
            org$pandalanguage$pandac$Type* $tmp3436 = (($fn3435) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3437 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3436);
            panda$core$String* $tmp3438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3434, $tmp3437);
            panda$core$String* $tmp3440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3438, &$s3439);
            panda$core$String* $tmp3442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3441, base3418);
            panda$core$String* $tmp3444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3442, &$s3443);
            panda$core$Int64$wrapper* $tmp3445;
            $tmp3445 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp3445->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3445->refCount = 1;
            $tmp3445->value = offset3422;
            panda$core$String* $tmp3446 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3444, ((panda$core$Object*) $tmp3445));
            panda$core$String* $tmp3448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3446, &$s3447);
            panda$core$String* $tmp3449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3440, $tmp3448);
            (($fn3450) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3449);
            panda$core$String* $tmp3452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3451, result3424);
            panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3452, &$s3453);
            return $tmp3454;
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
    panda$core$String* $tmp3455 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$String* $tmp3456 = panda$core$String$convert$R$panda$core$String($tmp3455);
    panda$core$String* $tmp3458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3456, &$s3457);
    panda$core$String* $tmp3459 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$String* $tmp3460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3458, $tmp3459);
    panda$core$String* $tmp3462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3460, &$s3461);
    (($fn3463) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3462);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit) { p_value != NULL }).value) {
    {
        panda$core$String* $tmp3465 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
        panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3464, $tmp3465);
        panda$core$String* $tmp3468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3466, &$s3467);
        (($fn3469) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3468);
    }
    }
    else {
    {
        (($fn3471) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3470);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3475;
    panda$core$Int64 $tmp3472 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3473 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3472, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3473.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3474 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3474);
    }
    }
    panda$core$Int64 $tmp3476 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3475, ((panda$core$Int64) { 0 }), $tmp3476, ((panda$core$Bit) { false }));
    int64_t $tmp3478 = $tmp3475.min.value;
    panda$core$Int64 i3477 = { $tmp3478 };
    int64_t $tmp3480 = $tmp3475.max.value;
    bool $tmp3481 = $tmp3475.inclusive.value;
    if ($tmp3481) goto $l3488; else goto $l3489;
    $l3488:;
    if ($tmp3478 <= $tmp3480) goto $l3482; else goto $l3484;
    $l3489:;
    if ($tmp3478 < $tmp3480) goto $l3482; else goto $l3484;
    $l3482:;
    {
        panda$core$Object* $tmp3490 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3477);
        panda$core$Bit $tmp3494;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3490)->loopLabel != NULL }).value) goto $l3491; else goto $l3492;
        $l3491:;
        panda$core$Bit $tmp3495 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3490)->loopLabel, p_name);
        $tmp3494 = $tmp3495;
        goto $l3493;
        $l3492:;
        $tmp3494 = ((panda$core$Bit) { false });
        goto $l3493;
        $l3493:;
        if ($tmp3494.value) {
        {
            panda$core$Object* $tmp3496 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3477);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3496);
        }
        }
    }
    $l3485:;
    int64_t $tmp3498 = $tmp3480 - i3477.value;
    if ($tmp3481) goto $l3499; else goto $l3500;
    $l3499:;
    if ((uint64_t) $tmp3498 >= 1) goto $l3497; else goto $l3484;
    $l3500:;
    if ((uint64_t) $tmp3498 > 1) goto $l3497; else goto $l3484;
    $l3497:;
    i3477.value += 1;
    goto $l3482;
    $l3484:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3503;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3504 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    desc3503 = $tmp3504;
    panda$core$String* $tmp3506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3505, desc3503->breakLabel);
    panda$core$String* $tmp3508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3506, &$s3507);
    (($fn3509) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3508);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3510;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3511 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    desc3510 = $tmp3511;
    panda$core$String* $tmp3513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3512, desc3510->continueLabel);
    panda$core$String* $tmp3515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3513, &$s3514);
    (($fn3516) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3515);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_message, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3518 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3517, $tmp3518);
    panda$core$String* $tmp3521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, &$s3520);
    (($fn3522) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3521);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$collections$ImmutableArray* p_whens, panda$collections$ImmutableArray* p_other, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* w$Iter3530;
    org$pandalanguage$pandac$IRNode* w3542;
    org$pandalanguage$pandac$IRNode* $match$1866_133547;
    panda$collections$ImmutableArray* tests3549;
    panda$collections$ImmutableArray* statements3551;
    panda$collections$Iterator* test$Iter3553;
    org$pandalanguage$pandac$IRNode* test3565;
    panda$core$String* $tmp3524 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    panda$core$String* $tmp3525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3523, $tmp3524);
    panda$core$String* $tmp3527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3525, &$s3526);
    (($fn3528) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3527);
    panda$core$Int64 $tmp3529 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3529;
    {
        ITable* $tmp3531 = ((panda$collections$Iterable*) p_whens)->$class->itable;
        while ($tmp3531->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3531 = $tmp3531->next;
        }
        $fn3533 $tmp3532 = $tmp3531->methods[0];
        panda$collections$Iterator* $tmp3534 = $tmp3532(((panda$collections$Iterable*) p_whens));
        w$Iter3530 = $tmp3534;
        $l3535:;
        ITable* $tmp3537 = w$Iter3530->$class->itable;
        while ($tmp3537->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3537 = $tmp3537->next;
        }
        $fn3539 $tmp3538 = $tmp3537->methods[0];
        panda$core$Bit $tmp3540 = $tmp3538(w$Iter3530);
        panda$core$Bit $tmp3541 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3540);
        if (!$tmp3541.value) goto $l3536;
        {
            ITable* $tmp3543 = w$Iter3530->$class->itable;
            while ($tmp3543->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3543 = $tmp3543->next;
            }
            $fn3545 $tmp3544 = $tmp3543->methods[1];
            panda$core$Object* $tmp3546 = $tmp3544(w$Iter3530);
            w3542 = ((org$pandalanguage$pandac$IRNode*) $tmp3546);
            {
                $match$1866_133547 = w3542;
                panda$core$Bit $tmp3548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1866_133547->$rawValue, ((panda$core$Int64) { 42 }));
                if ($tmp3548.value) {
                {
                    panda$collections$ImmutableArray** $tmp3550 = ((panda$collections$ImmutableArray**) ((char*) $match$1866_133547->$data + 16));
                    tests3549 = *$tmp3550;
                    panda$collections$ImmutableArray** $tmp3552 = ((panda$collections$ImmutableArray**) ((char*) $match$1866_133547->$data + 24));
                    statements3551 = *$tmp3552;
                    {
                        ITable* $tmp3554 = ((panda$collections$Iterable*) tests3549)->$class->itable;
                        while ($tmp3554->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3554 = $tmp3554->next;
                        }
                        $fn3556 $tmp3555 = $tmp3554->methods[0];
                        panda$collections$Iterator* $tmp3557 = $tmp3555(((panda$collections$Iterable*) tests3549));
                        test$Iter3553 = $tmp3557;
                        $l3558:;
                        ITable* $tmp3560 = test$Iter3553->$class->itable;
                        while ($tmp3560->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3560 = $tmp3560->next;
                        }
                        $fn3562 $tmp3561 = $tmp3560->methods[0];
                        panda$core$Bit $tmp3563 = $tmp3561(test$Iter3553);
                        panda$core$Bit $tmp3564 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3563);
                        if (!$tmp3564.value) goto $l3559;
                        {
                            ITable* $tmp3566 = test$Iter3553->$class->itable;
                            while ($tmp3566->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3566 = $tmp3566->next;
                            }
                            $fn3568 $tmp3567 = $tmp3566->methods[1];
                            panda$core$Object* $tmp3569 = $tmp3567(test$Iter3553);
                            test3565 = ((org$pandalanguage$pandac$IRNode*) $tmp3569);
                            panda$core$UInt64 $tmp3571 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, test3565);
                            panda$core$UInt64$wrapper* $tmp3572;
                            $tmp3572 = (panda$core$UInt64$wrapper*) malloc(24);
                            $tmp3572->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
                            $tmp3572->refCount = 1;
                            $tmp3572->value = $tmp3571;
                            panda$core$String* $tmp3573 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3570, ((panda$core$Object*) $tmp3572));
                            panda$core$String* $tmp3575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3573, &$s3574);
                            (($fn3576) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3575);
                        }
                        goto $l3558;
                        $l3559:;
                    }
                    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3551, p_out);
                    (($fn3578) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3577);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l3535;
        $l3536:;
    }
    if (((panda$core$Bit) { p_other != NULL }).value) {
    {
        (($fn3580) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3579);
        org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_other, p_out);
    }
    }
    panda$core$Int64 $tmp3581 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3581;
    (($fn3583) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3582);
}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1886_93584;
    org$pandalanguage$pandac$IRNode* left3586;
    org$pandalanguage$pandac$parser$Token$Kind op3588;
    org$pandalanguage$pandac$IRNode* right3590;
    panda$collections$ImmutableArray* statements3593;
    org$pandalanguage$pandac$Type* target3596;
    org$pandalanguage$pandac$MethodRef* mref3598;
    panda$collections$ImmutableArray* args3600;
    org$pandalanguage$pandac$IRNode* test3603;
    panda$collections$ImmutableArray* ifTrue3605;
    org$pandalanguage$pandac$IRNode* ifFalse3607;
    panda$core$String* label3610;
    org$pandalanguage$pandac$IRNode* target3612;
    org$pandalanguage$pandac$IRNode* list3614;
    panda$collections$ImmutableArray* statements3616;
    panda$core$String* label3619;
    org$pandalanguage$pandac$IRNode* test3621;
    panda$collections$ImmutableArray* statements3623;
    panda$core$String* label3626;
    panda$collections$ImmutableArray* statements3628;
    org$pandalanguage$pandac$IRNode* test3630;
    panda$core$String* label3633;
    panda$collections$ImmutableArray* statements3635;
    org$pandalanguage$pandac$Variable$Kind kind3638;
    panda$collections$ImmutableArray* decls3640;
    org$pandalanguage$pandac$IRNode* value3643;
    panda$core$String* label3646;
    panda$core$String* label3649;
    org$pandalanguage$pandac$IRNode* test3652;
    org$pandalanguage$pandac$IRNode* msg3654;
    org$pandalanguage$pandac$IRNode* value3657;
    panda$collections$ImmutableArray* whens3659;
    panda$collections$ImmutableArray* other3661;
    {
        $match$1886_93584 = p_stmt;
        panda$core$Bit $tmp3585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1886_93584->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp3585.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3587 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1886_93584->$data + 24));
            left3586 = *$tmp3587;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3589 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1886_93584->$data + 32));
            op3588 = *$tmp3589;
            org$pandalanguage$pandac$IRNode** $tmp3591 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1886_93584->$data + 40));
            right3590 = *$tmp3591;
            org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, left3586, right3590, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1886_93584->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp3592.value) {
        {
            panda$collections$ImmutableArray** $tmp3594 = ((panda$collections$ImmutableArray**) ((char*) $match$1886_93584->$data + 16));
            statements3593 = *$tmp3594;
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3593, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1886_93584->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp3595.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3597 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1886_93584->$data + 16));
            target3596 = *$tmp3597;
            org$pandalanguage$pandac$MethodRef** $tmp3599 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1886_93584->$data + 24));
            mref3598 = *$tmp3599;
            panda$collections$ImmutableArray** $tmp3601 = ((panda$collections$ImmutableArray**) ((char*) $match$1886_93584->$data + 32));
            args3600 = *$tmp3601;
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, target3596, mref3598, args3600, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1886_93584->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp3602.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3604 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1886_93584->$data + 16));
            test3603 = *$tmp3604;
            panda$collections$ImmutableArray** $tmp3606 = ((panda$collections$ImmutableArray**) ((char*) $match$1886_93584->$data + 24));
            ifTrue3605 = *$tmp3606;
            org$pandalanguage$pandac$IRNode** $tmp3608 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1886_93584->$data + 32));
            ifFalse3607 = *$tmp3608;
            org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3603, ifTrue3605, ifFalse3607, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1886_93584->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp3609.value) {
        {
            panda$core$String** $tmp3611 = ((panda$core$String**) ((char*) $match$1886_93584->$data + 16));
            label3610 = *$tmp3611;
            org$pandalanguage$pandac$IRNode** $tmp3613 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1886_93584->$data + 24));
            target3612 = *$tmp3613;
            org$pandalanguage$pandac$IRNode** $tmp3615 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1886_93584->$data + 32));
            list3614 = *$tmp3615;
            panda$collections$ImmutableArray** $tmp3617 = ((panda$collections$ImmutableArray**) ((char*) $match$1886_93584->$data + 40));
            statements3616 = *$tmp3617;
            org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3610, target3612, list3614, statements3616, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1886_93584->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp3618.value) {
        {
            panda$core$String** $tmp3620 = ((panda$core$String**) ((char*) $match$1886_93584->$data + 16));
            label3619 = *$tmp3620;
            org$pandalanguage$pandac$IRNode** $tmp3622 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1886_93584->$data + 24));
            test3621 = *$tmp3622;
            panda$collections$ImmutableArray** $tmp3624 = ((panda$collections$ImmutableArray**) ((char*) $match$1886_93584->$data + 32));
            statements3623 = *$tmp3624;
            org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3619, test3621, statements3623, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1886_93584->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp3625.value) {
        {
            panda$core$String** $tmp3627 = ((panda$core$String**) ((char*) $match$1886_93584->$data + 16));
            label3626 = *$tmp3627;
            panda$collections$ImmutableArray** $tmp3629 = ((panda$collections$ImmutableArray**) ((char*) $match$1886_93584->$data + 24));
            statements3628 = *$tmp3629;
            org$pandalanguage$pandac$IRNode** $tmp3631 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1886_93584->$data + 32));
            test3630 = *$tmp3631;
            org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, label3626, statements3628, test3630, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1886_93584->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp3632.value) {
        {
            panda$core$String** $tmp3634 = ((panda$core$String**) ((char*) $match$1886_93584->$data + 16));
            label3633 = *$tmp3634;
            panda$collections$ImmutableArray** $tmp3636 = ((panda$collections$ImmutableArray**) ((char*) $match$1886_93584->$data + 24));
            statements3635 = *$tmp3636;
            org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3633, statements3635, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1886_93584->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp3637.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp3639 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$1886_93584->$data + 16));
            kind3638 = *$tmp3639;
            panda$collections$ImmutableArray** $tmp3641 = ((panda$collections$ImmutableArray**) ((char*) $match$1886_93584->$data + 24));
            decls3640 = *$tmp3641;
            org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, kind3638, decls3640, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1886_93584->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp3642.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3644 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1886_93584->$data + 16));
            value3643 = *$tmp3644;
            org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, value3643, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1886_93584->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp3645.value) {
        {
            panda$core$String** $tmp3647 = ((panda$core$String**) ((char*) $match$1886_93584->$data + 16));
            label3646 = *$tmp3647;
            org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3646, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1886_93584->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp3648.value) {
        {
            panda$core$String** $tmp3650 = ((panda$core$String**) ((char*) $match$1886_93584->$data + 16));
            label3649 = *$tmp3650;
            org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3649, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1886_93584->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp3651.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3653 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1886_93584->$data + 16));
            test3652 = *$tmp3653;
            org$pandalanguage$pandac$IRNode** $tmp3655 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1886_93584->$data + 24));
            msg3654 = *$tmp3655;
            org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3652, msg3654, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1886_93584->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp3656.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3658 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1886_93584->$data + 16));
            value3657 = *$tmp3658;
            panda$collections$ImmutableArray** $tmp3660 = ((panda$collections$ImmutableArray**) ((char*) $match$1886_93584->$data + 24));
            whens3659 = *$tmp3660;
            panda$collections$ImmutableArray** $tmp3662 = ((panda$collections$ImmutableArray**) ((char*) $match$1886_93584->$data + 32));
            other3661 = *$tmp3662;
            org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(self, value3657, whens3659, other3661, p_out);
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
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result3663;
    org$pandalanguage$pandac$Type* $tmp3664 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3665 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3664);
    result3663 = $tmp3665;
    panda$core$Bit $tmp3667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp3666 = $tmp3667.value;
    if (!$tmp3666) goto $l3668;
    panda$core$Bit $tmp3670 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3663, &$s3669);
    panda$core$Bit $tmp3671 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3670);
    $tmp3666 = $tmp3671.value;
    $l3668:;
    panda$core$Bit $tmp3672 = { $tmp3666 };
    if ($tmp3672.value) {
    {
        panda$core$String* $tmp3674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3663, &$s3673);
        return $tmp3674;
    }
    }
    return result3663;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    panda$core$String* separator3686;
    panda$collections$Iterator* p$Iter3696;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3708;
    panda$io$MemoryOutputStream* bodyBuffer3729;
    panda$io$IndentedOutputStream* indentedBody3732;
    panda$collections$Iterator* s$Iter3735;
    org$pandalanguage$pandac$IRNode* s3747;
    panda$core$Object* $tmp3675 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3675)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s3676;
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp3677 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3678 = panda$core$String$convert$R$panda$core$String($tmp3677);
    panda$core$String* $tmp3680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3678, &$s3679);
    panda$core$String* $tmp3681 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3680, $tmp3681);
    panda$core$String* $tmp3684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3682, &$s3683);
    (($fn3685) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3684);
    separator3686 = &$s3687;
    panda$core$Bit $tmp3688 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3689 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3688);
    if ($tmp3689.value) {
    {
        panda$core$String* $tmp3690 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3691 = panda$core$String$convert$R$panda$core$String($tmp3690);
        panda$core$String* $tmp3693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3691, &$s3692);
        (($fn3694) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3693);
        separator3686 = &$s3695;
    }
    }
    {
        ITable* $tmp3697 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3697->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3697 = $tmp3697->next;
        }
        $fn3699 $tmp3698 = $tmp3697->methods[0];
        panda$collections$Iterator* $tmp3700 = $tmp3698(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3696 = $tmp3700;
        $l3701:;
        ITable* $tmp3703 = p$Iter3696->$class->itable;
        while ($tmp3703->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3703 = $tmp3703->next;
        }
        $fn3705 $tmp3704 = $tmp3703->methods[0];
        panda$core$Bit $tmp3706 = $tmp3704(p$Iter3696);
        panda$core$Bit $tmp3707 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3706);
        if (!$tmp3707.value) goto $l3702;
        {
            ITable* $tmp3709 = p$Iter3696->$class->itable;
            while ($tmp3709->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3709 = $tmp3709->next;
            }
            $fn3711 $tmp3710 = $tmp3709->methods[1];
            panda$core$Object* $tmp3712 = $tmp3710(p$Iter3696);
            p3708 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3712);
            panda$core$String* $tmp3713 = panda$core$String$convert$R$panda$core$String(separator3686);
            panda$core$String* $tmp3715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3713, &$s3714);
            panda$core$String* $tmp3716 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3708->type);
            panda$core$String* $tmp3717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3715, $tmp3716);
            panda$core$String* $tmp3719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3717, &$s3718);
            panda$core$String* $tmp3720 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3708->name);
            panda$core$String* $tmp3721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3719, $tmp3720);
            panda$core$String* $tmp3723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3721, &$s3722);
            (($fn3724) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3723);
            separator3686 = &$s3725;
        }
        goto $l3701;
        $l3702:;
    }
    (($fn3727) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3726);
    panda$core$Int64 $tmp3728 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3728;
    panda$io$MemoryOutputStream* $tmp3730 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3730->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3730->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3730);
    bodyBuffer3729 = $tmp3730;
    panda$io$IndentedOutputStream* $tmp3733 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3733->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3733->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3733, ((panda$io$OutputStream*) bodyBuffer3729));
    indentedBody3732 = $tmp3733;
    {
        ITable* $tmp3736 = ((panda$collections$Iterable*) p_body)->$class->itable;
        while ($tmp3736->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3736 = $tmp3736->next;
        }
        $fn3738 $tmp3737 = $tmp3736->methods[0];
        panda$collections$Iterator* $tmp3739 = $tmp3737(((panda$collections$Iterable*) p_body));
        s$Iter3735 = $tmp3739;
        $l3740:;
        ITable* $tmp3742 = s$Iter3735->$class->itable;
        while ($tmp3742->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3742 = $tmp3742->next;
        }
        $fn3744 $tmp3743 = $tmp3742->methods[0];
        panda$core$Bit $tmp3745 = $tmp3743(s$Iter3735);
        panda$core$Bit $tmp3746 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3745);
        if (!$tmp3746.value) goto $l3741;
        {
            ITable* $tmp3748 = s$Iter3735->$class->itable;
            while ($tmp3748->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3748 = $tmp3748->next;
            }
            $fn3750 $tmp3749 = $tmp3748->methods[1];
            panda$core$Object* $tmp3751 = $tmp3749(s$Iter3735);
            s3747 = ((org$pandalanguage$pandac$IRNode*) $tmp3751);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3747, indentedBody3732);
        }
        goto $l3740;
        $l3741:;
    }
    panda$core$String* $tmp3752 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn3753) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3752);
    panda$core$String* $tmp3754 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer3729);
    (($fn3755) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3754);
    panda$core$Int64 $tmp3756 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3756;
    (($fn3758) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3757);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3759;
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
    panda$io$File* $tmp3761 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3760);
    path3759 = $tmp3761;
    panda$io$File* $tmp3762 = panda$io$File$parent$R$panda$io$File$Q(path3759);
    panda$io$File$createDirectories($tmp3762);
    panda$io$IndentedOutputStream* $tmp3763 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3763->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3763->refCount.value = 1;
    panda$io$OutputStream* $tmp3765 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3759);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3763, $tmp3765);
    self->out = $tmp3763;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3766 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3766.value) {
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
    panda$core$String* $tmp3767 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn3768) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3767);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp3769 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn3770) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3769);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp3771 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn3772) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3771);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp3773 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn3774) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3773);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp3775 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn3776) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3775);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn3777) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

