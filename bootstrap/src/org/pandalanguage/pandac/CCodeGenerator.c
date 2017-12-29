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
#include "panda/core/Panda.h"
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
#include "panda/core/Formattable.h"
#include "org/pandalanguage/pandac/CCodeGenerator/LoopDescriptor.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

typedef void (*$fn69)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn129)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn147)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn194)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn200)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn206)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn241)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn247)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn253)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn346)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn352)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn358)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn391)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn416)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn422)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn428)(panda$collections$Iterator*);
typedef void (*$fn437)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn481)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn488)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn518)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn526)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn573)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn578)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn599)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn607)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn616)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn619)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn626)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn653)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn685)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn693)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn735)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn740)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn761)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn769)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn772)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn784)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn790)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn796)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn829)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn859)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn865)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn871)(panda$collections$Iterator*);
typedef void (*$fn880)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn976)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn982)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn988)(panda$collections$Iterator*);
typedef void (*$fn997)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1018)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1085)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1103)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1128)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1171)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1185)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1196)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1200)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1213)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1220)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1234)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1245)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1249)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1262)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1325)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1330)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1343)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1370)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1372)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1390)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn1403)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1420)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1455)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1463)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1471)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1474)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1482)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1499)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1512)(panda$collections$CollectionView*);
typedef void (*$fn1536)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1697)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1717)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1779)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1784)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn1820)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1839)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1843)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1849)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1855)(panda$collections$Iterator*);
typedef void (*$fn1863)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1867)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1900)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1906)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1922)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1932)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1936)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1943)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1947)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1949)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1954)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1957)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1969)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2109)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2164)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2186)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2206)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2210)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2243)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2248)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2254)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2260)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2268)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn2275)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2280)(panda$collections$CollectionView*);
typedef void (*$fn2291)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2306)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2312)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2334)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2340)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2391)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2393)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2411)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2420)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2431)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2439)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2444)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2452)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2457)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2574)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2579)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2585)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2591)(panda$collections$Iterator*);
typedef void (*$fn2595)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2617)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2624)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2650)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2661)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2727)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2732)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2772)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2782)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2788)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2792)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2798)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2804)(panda$collections$Iterator*);
typedef void (*$fn2806)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2807)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2811)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2819)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2821)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2823)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2825)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2826)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2829)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2833)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2842)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn2863)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2870)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2895)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2910)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2923)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2934)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2991)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3005)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3019)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3038)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3056)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3071)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3089)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3096)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3101)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3102)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3105)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3109)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3118)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3123)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn3144)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3151)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3176)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3191)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3204)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3214)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3221)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3234)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3245)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3299)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3312)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3330)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3344)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3358)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3376)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3390)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3407)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3427)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3443)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3479)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3500)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3516)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3534)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3553)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3572)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3582)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3587)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3588)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3591)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3594)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3614)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3619)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3620)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3640)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3650)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3652)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3665)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3674)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3684)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3688)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3694)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3700)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn3754)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3767)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3776)(org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3804)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3810)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3812)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3851)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3859)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3865)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3871)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3876)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3882)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3888)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3899)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3905)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3911)(panda$collections$Iterator*);
typedef void (*$fn3919)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3921)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3923)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3926)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4031)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4041)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4047)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4053)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4059)(panda$collections$Iterator*);
typedef void (*$fn4072)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4076)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4091)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4097)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4103)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4121)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4127)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4133)(panda$collections$Iterator*);
typedef void (*$fn4136)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4138)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4141)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4156)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4158)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4160)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4162)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4164)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4165)(panda$core$Object*);

static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x28", 2, 14382, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x38", 1, 157, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x36", 2, 15204, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x33\x32", 2, 15402, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70", 2, 13545, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x73\x65\x6c\x66", 5, 14792042467, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6d", 12, -5595348649711353309, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2a", 9, 1496394141948660748, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x73\x65\x6c\x66\x2d\x3e\x76\x61\x6c\x75\x65", 12, 3684417363826496863, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x31\x2c\x20", 5, 15122232102, NULL };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s1016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s1065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s1069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x31\x2c\x20", 5, 15122232102, NULL };
static panda$core$String $s1072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s1080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s1191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s1270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s1304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s1310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20", 4, 137658487, NULL };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20", 4, 137372859, NULL };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s1534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x41\x6c\x6c\x6f\x63\x28", 13, -2101061406745854183, NULL };
static panda$core$String $s1569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2a", 2, 14283, NULL };
static panda$core$String $s1585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d", 7, 157293860332681, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, 2191018519584705024, NULL };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s1663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x26", 2, 14279, NULL };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3f\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x4e\x55\x4c\x4c\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x41\x6c\x6c\x6f\x63\x28", 11, 5461551678777487752, NULL };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x63\x6c\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 27, 7283889564528102738, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s1934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x20\x3d\x20\x31\x3b", 15, -7616502316629902533, NULL };
static panda$core$String $s1938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s1956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 21448182697504497, NULL };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x41\x6c\x6c\x6f\x63\x28", 13, -2101061406745854183, NULL };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 32, -2435628749655888173, NULL };
static panda$core$String $s2202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x2e\x76\x61\x6c\x75\x65\x20\x3d\x20\x31\x3b", 21, 5666803292027080506, NULL };
static panda$core$String $s2212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s2225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s2239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20\x2d\x39\x39\x39\x2c\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 73, -2776236680409370361, NULL };
static panda$core$String $s2262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s2284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x73\x65\x6c\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s2315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s2353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s2426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d\x20\x3d\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s2648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x46\x72\x65\x65\x28", 10, -5790438204225352665, NULL };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s2887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x69\x6e\x2e\x76\x61\x6c\x75\x65\x3b", 11, -3956212002962864875, NULL };
static panda$core$String $s2902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6d\x61\x78\x2e\x76\x61\x6c\x75\x65\x3b", 11, -4041768404061004273, NULL };
static panda$core$String $s2927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s3036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 12, -550717230962542041, NULL };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s3083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20\x31\x3b", 12, -4476855678279854640, NULL };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s3168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x61\x72\x74\x2e\x76\x61\x6c\x75\x65\x3b", 13, 3588086193908855763, NULL };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s3189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x65\x6e\x64\x2e\x76\x61\x6c\x75\x65\x3b", 11, 5794120589201096528, NULL };
static panda$core$String $s3226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73\x74\x65\x70\x2e\x76\x61\x6c\x75\x65\x3b", 12, -1565217378717073995, NULL };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s3268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s3270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s3273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s3276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s3279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s3292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s3294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x30\x3b", 5, 13904243334, NULL };
static panda$core$String $s3300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s3350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s3441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s3450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2d\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s3514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x3d\x20\x2d", 5, 13904537533, NULL };
static panda$core$String $s3543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3e\x20\x2d", 4, 137665772, NULL };
static panda$core$String $s3562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s3580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7b", 14, 1197661341919403142, NULL };
static panda$core$String $s3651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x6d\x73\x65\x74\x28\x26", 8, 22623213602606430, NULL };
static panda$core$String $s3678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x30\x2c\x20\x73\x69\x7a\x65\x6f\x66\x28", 12, 4086987682289124441, NULL };
static panda$core$String $s3682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s3728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s3771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s3774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static panda$core$String $s3780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20", 3, 1462916, NULL };
static panda$core$String $s3782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x63\x68\x61\x72\x2a\x29\x20", 9, 1531222690101128410, NULL };
static panda$core$String $s3784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s3788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s3847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x41\x4e\x44\x41\x5f\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s3863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s3866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s3869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s3913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s3917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s3920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x3b", 6, 2103477946177, NULL };
static panda$core$String $s3922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6c\x74\x3a", 8, 21658216358330300, NULL };
static panda$core$String $s3925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s4013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s4017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s4021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s4025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s4042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s4070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s4140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s4145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

void org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$File* p_outDir) {
    self->compiler = NULL;
    self->currentClass = NULL;
    self->currentBlock = NULL;
    self->currentMethod = NULL;
    panda$io$MemoryOutputStream* $tmp1 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
    $tmp1->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp1->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp1);
    self->strings = $tmp1;
    panda$collections$Set* $tmp3 = (panda$collections$Set*) pandaAlloc(24);
    $tmp3->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp3->refCount.value = 1;
    panda$collections$Set$init($tmp3);
    self->imports = $tmp3;
    self->currentClass = NULL;
    panda$io$MemoryOutputStream* $tmp5 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
    $tmp5->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp5->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp5);
    self->declarations = $tmp5;
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
    $tmp7->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp7->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp7);
    self->types = $tmp7;
    panda$io$MemoryOutputStream* $tmp9 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
    $tmp9->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp9->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp9);
    self->methodsBuffer = $tmp9;
    panda$io$IndentedOutputStream* $tmp11 = (panda$io$IndentedOutputStream*) pandaAlloc(56);
    $tmp11->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp11->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp11, ((panda$io$OutputStream*) self->methodsBuffer));
    self->methods = $tmp11;
    panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp13->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp13);
    self->methodHeaderBuffer = $tmp13;
    panda$io$IndentedOutputStream* $tmp15 = (panda$io$IndentedOutputStream*) pandaAlloc(56);
    $tmp15->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp15->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp15, ((panda$io$OutputStream*) self->methodHeaderBuffer));
    self->methodHeader = $tmp15;
    panda$io$MemoryOutputStream* $tmp17 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
    $tmp17->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp17->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp17);
    self->wrapperShimsBuffer = $tmp17;
    panda$io$IndentedOutputStream* $tmp19 = (panda$io$IndentedOutputStream*) pandaAlloc(56);
    $tmp19->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp19->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp19, ((panda$io$OutputStream*) self->wrapperShimsBuffer));
    self->wrapperShims = $tmp19;
    panda$io$MemoryOutputStream* $tmp21 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
    $tmp21->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp21->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp21);
    self->shimsBuffer = $tmp21;
    panda$io$IndentedOutputStream* $tmp23 = (panda$io$IndentedOutputStream*) pandaAlloc(56);
    $tmp23->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp23->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp23, ((panda$io$OutputStream*) self->shimsBuffer));
    self->shims = $tmp23;
    panda$collections$Set* $tmp25 = (panda$collections$Set*) pandaAlloc(24);
    $tmp25->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp25->refCount.value = 1;
    panda$collections$Set$init($tmp25);
    self->declared = $tmp25;
    panda$collections$Set* $tmp27 = (panda$collections$Set*) pandaAlloc(24);
    $tmp27->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp27->refCount.value = 1;
    panda$collections$Set$init($tmp27);
    self->writtenTypes = $tmp27;
    panda$collections$Set* $tmp29 = (panda$collections$Set*) pandaAlloc(24);
    $tmp29->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp29->refCount.value = 1;
    panda$collections$Set$init($tmp29);
    self->writtenWrappers = $tmp29;
    panda$collections$HashMap* $tmp31 = (panda$collections$HashMap*) pandaAlloc(56);
    $tmp31->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp31->refCount.value = 1;
    panda$collections$HashMap$init($tmp31);
    self->classConstants = $tmp31;
    panda$collections$IdentityMap* $tmp33 = (panda$collections$IdentityMap*) pandaAlloc(56);
    $tmp33->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp33->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp33);
    self->variableNames = $tmp33;
    panda$collections$Stack* $tmp35 = (panda$collections$Stack*) pandaAlloc(24);
    $tmp35->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp35->refCount.value = 1;
    panda$collections$Stack$init($tmp35);
    self->loopDescriptors = $tmp35;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap* $tmp37 = (panda$collections$HashMap*) pandaAlloc(56);
    $tmp37->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp37->refCount.value = 1;
    panda$collections$HashMap$init($tmp37);
    self->reusedValues = $tmp37;
    panda$collections$IdentityMap* $tmp39 = (panda$collections$IdentityMap*) pandaAlloc(56);
    $tmp39->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp39->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp39);
    self->methodShims = $tmp39;
    panda$collections$Stack* $tmp41 = (panda$collections$Stack*) pandaAlloc(24);
    $tmp41->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp41->refCount.value = 1;
    panda$collections$Stack$init($tmp41);
    self->inlineContext = $tmp41;
    panda$collections$IdentityMap* $tmp43 = (panda$collections$IdentityMap*) pandaAlloc(56);
    $tmp43->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp43->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp43);
    self->currentlyInlining = $tmp43;
    {
        panda$core$Object* $tmp45 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_outDir));
        self->outDir = ((panda$io$File*) $tmp45);
    }
    {
        panda$io$IndentedOutputStream* $tmp46 = (panda$io$IndentedOutputStream*) pandaAlloc(56);
        $tmp46->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
        $tmp46->refCount.value = 1;
        panda$io$MemoryOutputStream* $tmp48 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
        $tmp48->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
        $tmp48->refCount.value = 1;
        panda$io$MemoryOutputStream$init($tmp48);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp46, ((panda$io$OutputStream*) $tmp48));
        panda$core$Object* $tmp50 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp46));
        self->out = ((panda$io$IndentedOutputStream*) $tmp50);
    }
    {
        org$pandalanguage$pandac$HCodeGenerator* $tmp51 = (org$pandalanguage$pandac$HCodeGenerator*) pandaAlloc(129);
        $tmp51->$class = (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class;
        $tmp51->refCount.value = 1;
        org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp51, p_outDir);
        panda$core$Object* $tmp53 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp51));
        self->hCodeGen = ((org$pandalanguage$pandac$HCodeGenerator*) $tmp53);
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
    panda$core$Object* $tmp62 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp61));
    includePath59 = ((panda$core$String*) $tmp62);
    panda$core$Bit $tmp63 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath59));
    panda$core$Bit $tmp64 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp63);
    if ($tmp64.value) {
    {
        panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s65, includePath59);
        panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp66, &$s67);
        (($fn69) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp68);
        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath59));
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl71;
    panda$core$String* result80;
    panda$core$MutableString* code87;
    panda$core$String* separator98;
    panda$core$Range$LTpanda$core$Int64$GT $tmp101;
    panda$core$Bit $tmp70 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_t);
    if ($tmp70.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp72 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
        panda$core$Object* $tmp73 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp72));
        cl71 = ((org$pandalanguage$pandac$ClassDecl*) $tmp73);
        PANDA_ASSERT(((panda$core$Bit) { cl71 != NULL }).value);
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl71);
    }
    }
    panda$core$Bit $tmp75 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp74 = $tmp75.value;
    if ($tmp74) goto $l76;
    panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 24 }));
    $tmp74 = $tmp77.value;
    $l76:;
    panda$core$Bit $tmp78 = { $tmp74 };
    if ($tmp78.value) {
    {
        panda$core$Int64 $tmp79 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp79;
        panda$core$Int64$wrapper* $tmp82;
        $tmp82 = (panda$core$Int64$wrapper*) pandaAlloc(24);
        $tmp82->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp82->refCount = 1;
        $tmp82->value = self->varCount;
        panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s81, ((panda$core$Object*) $tmp82));
        panda$core$String* $tmp85 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp83, &$s84);
        panda$core$Object* $tmp86 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp85));
        result80 = ((panda$core$String*) $tmp86);
        panda$core$MutableString* $tmp88 = (panda$core$MutableString*) pandaAlloc(48);
        $tmp88->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp88->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp88, &$s90);
        panda$core$Object* $tmp91 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp88));
        code87 = ((panda$core$MutableString*) $tmp91);
        panda$core$Int64 $tmp92 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp93 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp92, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp94 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp93);
        panda$core$String* $tmp95 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp94));
        panda$core$MutableString$append$panda$core$String(code87, $tmp95);
        panda$core$MutableString$append$panda$core$String(code87, &$s96);
        panda$core$MutableString$append$panda$core$String(code87, result80);
        panda$core$MutableString$append$panda$core$String(code87, &$s97);
        panda$core$Object* $tmp100 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s99));
        separator98 = ((panda$core$String*) $tmp100);
        panda$core$Int64 $tmp102 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp103 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp102, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp101, ((panda$core$Int64) { 0 }), $tmp103, ((panda$core$Bit) { false }));
        int64_t $tmp105 = $tmp101.min.value;
        panda$core$Int64 i104 = { $tmp105 };
        int64_t $tmp107 = $tmp101.max.value;
        bool $tmp108 = $tmp101.inclusive.value;
        if ($tmp108) goto $l115; else goto $l116;
        $l115:;
        if ($tmp105 <= $tmp107) goto $l109; else goto $l111;
        $l116:;
        if ($tmp105 < $tmp107) goto $l109; else goto $l111;
        $l109:;
        {
            panda$core$MutableString$append$panda$core$String(code87, separator98);
            panda$core$Object* $tmp117 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i104);
            panda$core$String* $tmp118 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp117));
            panda$core$MutableString$append$panda$core$String(code87, $tmp118);
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator98));
                panda$core$Object* $tmp120 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s119));
                separator98 = ((panda$core$String*) $tmp120);
            }
        }
        $l112:;
        int64_t $tmp122 = $tmp107 - i104.value;
        if ($tmp108) goto $l123; else goto $l124;
        $l123:;
        if ((uint64_t) $tmp122 >= 1) goto $l121; else goto $l111;
        $l124:;
        if ((uint64_t) $tmp122 > 1) goto $l121; else goto $l111;
        $l121:;
        i104.value += 1;
        goto $l109;
        $l111:;
        panda$core$MutableString$append$panda$core$String(code87, &$s127);
        panda$core$String* $tmp128 = panda$core$MutableString$finish$R$panda$core$String(code87);
        (($fn129) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp128);
        return result80;
    }
    }
    panda$core$String* $tmp130 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self->hCodeGen, p_t);
    return $tmp130;
}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    {
        panda$core$Object* $tmp131 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_compiler));
        self->compiler = ((org$pandalanguage$pandac$Compiler*) $tmp131);
    }
    org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->hCodeGen, p_compiler);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp132 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp132;
    panda$core$Int64$wrapper* $tmp134;
    $tmp134 = (panda$core$Int64$wrapper*) pandaAlloc(24);
    $tmp134->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp134->refCount = 1;
    $tmp134->value = self->varCount;
    panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s133, ((panda$core$Object*) $tmp134));
    panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp135, &$s136);
    return $tmp137;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp138 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp138;
    panda$core$Int64$wrapper* $tmp140;
    $tmp140 = (panda$core$Int64$wrapper*) pandaAlloc(24);
    $tmp140->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp140->refCount = 1;
    $tmp140->value = self->varCount;
    panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s139, ((panda$core$Object*) $tmp140));
    panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp141, &$s142);
    return $tmp143;
}
void org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp144 = panda$core$String$convert$R$panda$core$String(p_label);
    panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp144, &$s145);
    (($fn147) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp146);
    {
        panda$core$Object* $tmp148 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_label));
        self->currentBlock = ((panda$core$String*) $tmp148);
    }
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt) {
    org$pandalanguage$pandac$IRNode* $match$244_9149;
    panda$collections$ImmutableArray* statements151;
    {
        $match$244_9149 = p_stmt;
        panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$244_9149->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp150.value) {
        {
            panda$collections$ImmutableArray** $tmp152 = ((panda$collections$ImmutableArray**) ((char*) $match$244_9149->$data + 16));
            statements151 = *$tmp152;
            panda$core$Int64 $tmp153 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(statements151);
            panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp153, ((panda$core$Int64) { 0 }));
            if ($tmp154.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp155 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(statements151);
            panda$core$Int64 $tmp156 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp155, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp157 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(statements151, $tmp156);
            panda$core$Bit $tmp158 = org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp157));
            return $tmp158;
        }
        }
        else {
        panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$244_9149->$rawValue, ((panda$core$Int64) { 4 }));
        bool $tmp160 = $tmp161.value;
        if ($tmp160) goto $l162;
        panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$244_9149->$rawValue, ((panda$core$Int64) { 11 }));
        $tmp160 = $tmp163.value;
        $l162:;
        panda$core$Bit $tmp164 = { $tmp160 };
        bool $tmp159 = $tmp164.value;
        if ($tmp159) goto $l165;
        panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$244_9149->$rawValue, ((panda$core$Int64) { 27 }));
        $tmp159 = $tmp166.value;
        $l165:;
        panda$core$Bit $tmp167 = { $tmp159 };
        if ($tmp167.value) {
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
    org$pandalanguage$pandac$ClassDecl* cl179;
    panda$core$Int64 result189;
    panda$collections$Iterator* f$Iter190;
    org$pandalanguage$pandac$FieldDecl* f203;
    panda$core$Int64 size213;
    panda$core$Int64 align215;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp168 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp168.value) {
    {
        panda$core$Bit $tmp170 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s169);
        if ($tmp170.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp172 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s171);
        if ($tmp172.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp174 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s173);
        if ($tmp174.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp176 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s175);
        PANDA_ASSERT($tmp176.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp177 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp178 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp177);
    if ($tmp178.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp180 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    panda$core$Object* $tmp181 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp180));
    cl179 = ((org$pandalanguage$pandac$ClassDecl*) $tmp181);
    PANDA_ASSERT(((panda$core$Bit) { cl179 != NULL }).value);
    panda$core$Bit $tmp183 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl179);
    panda$core$Bit $tmp184 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp183);
    bool $tmp182 = $tmp184.value;
    if ($tmp182) goto $l185;
    panda$core$Bit $tmp187 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl179)->name, &$s186);
    $tmp182 = $tmp187.value;
    $l185:;
    panda$core$Bit $tmp188 = { $tmp182 };
    if ($tmp188.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result189 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp191 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl179);
        ITable* $tmp192 = ((panda$collections$Iterable*) $tmp191)->$class->itable;
        while ($tmp192->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp192 = $tmp192->next;
        }
        $fn194 $tmp193 = $tmp192->methods[0];
        panda$collections$Iterator* $tmp195 = $tmp193(((panda$collections$Iterable*) $tmp191));
        f$Iter190 = $tmp195;
        $l196:;
        ITable* $tmp198 = f$Iter190->$class->itable;
        while ($tmp198->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp198 = $tmp198->next;
        }
        $fn200 $tmp199 = $tmp198->methods[0];
        panda$core$Bit $tmp201 = $tmp199(f$Iter190);
        panda$core$Bit $tmp202 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp201);
        if (!$tmp202.value) goto $l197;
        {
            ITable* $tmp204 = f$Iter190->$class->itable;
            while ($tmp204->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp204 = $tmp204->next;
            }
            $fn206 $tmp205 = $tmp204->methods[1];
            panda$core$Object* $tmp207 = $tmp205(f$Iter190);
            f203 = ((org$pandalanguage$pandac$FieldDecl*) $tmp207);
            panda$core$Bit $tmp208 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f203->annotations);
            if ($tmp208.value) {
            {
                goto $l196;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f203);
            org$pandalanguage$pandac$Type* $tmp209 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp210 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f203->type, $tmp209);
            if ($tmp210.value) {
            {
                panda$core$Int64 $tmp211 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl179);
                panda$core$Int64 $tmp212 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result189, $tmp211);
                result189 = $tmp212;
            }
            }
            else {
            {
                panda$core$Int64 $tmp214 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f203->type);
                size213 = $tmp214;
                panda$core$Int64 $tmp216 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result189, size213);
                align215 = $tmp216;
                panda$core$Bit $tmp217 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align215, ((panda$core$Int64) { 0 }));
                if ($tmp217.value) {
                {
                    panda$core$Int64 $tmp218 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size213, align215);
                    panda$core$Int64 $tmp219 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result189, $tmp218);
                    result189 = $tmp219;
                }
                }
                panda$core$Int64 $tmp220 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result189, size213);
                panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp220, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp221.value);
                panda$core$Int64 $tmp222 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result189, size213);
                result189 = $tmp222;
            }
            }
        }
        goto $l196;
        $l197:;
    }
    panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp223.value) {
    {
        panda$core$Int64 $tmp224 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result189, ((panda$core$Int64) { 1 }));
        result189 = $tmp224;
    }
    }
    return result189;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp225 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp226 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp225, ((panda$core$Int64) { 8 }));
    return $tmp226;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl227;
    panda$core$Int64 result234;
    panda$collections$Iterator* f$Iter237;
    org$pandalanguage$pandac$FieldDecl* f250;
    panda$core$Int64 size259;
    panda$core$Int64 align261;
    org$pandalanguage$pandac$ClassDecl* $tmp228 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    panda$core$Object* $tmp229 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp228));
    cl227 = ((org$pandalanguage$pandac$ClassDecl*) $tmp229);
    bool $tmp230 = ((panda$core$Bit) { cl227 != NULL }).value;
    if (!$tmp230) goto $l231;
    panda$core$Bit $tmp232 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl227);
    $tmp230 = $tmp232.value;
    $l231:;
    panda$core$Bit $tmp233 = { $tmp230 };
    PANDA_ASSERT($tmp233.value);
    org$pandalanguage$pandac$Type* $tmp235 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp236 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp235);
    result234 = $tmp236;
    {
        panda$collections$ListView* $tmp238 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl227);
        ITable* $tmp239 = ((panda$collections$Iterable*) $tmp238)->$class->itable;
        while ($tmp239->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp239 = $tmp239->next;
        }
        $fn241 $tmp240 = $tmp239->methods[0];
        panda$collections$Iterator* $tmp242 = $tmp240(((panda$collections$Iterable*) $tmp238));
        f$Iter237 = $tmp242;
        $l243:;
        ITable* $tmp245 = f$Iter237->$class->itable;
        while ($tmp245->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp245 = $tmp245->next;
        }
        $fn247 $tmp246 = $tmp245->methods[0];
        panda$core$Bit $tmp248 = $tmp246(f$Iter237);
        panda$core$Bit $tmp249 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp248);
        if (!$tmp249.value) goto $l244;
        {
            ITable* $tmp251 = f$Iter237->$class->itable;
            while ($tmp251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp251 = $tmp251->next;
            }
            $fn253 $tmp252 = $tmp251->methods[1];
            panda$core$Object* $tmp254 = $tmp252(f$Iter237);
            f250 = ((org$pandalanguage$pandac$FieldDecl*) $tmp254);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f250);
            org$pandalanguage$pandac$Type* $tmp255 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp256 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f250->type, $tmp255);
            if ($tmp256.value) {
            {
                panda$core$Int64 $tmp257 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, cl227);
                panda$core$Int64 $tmp258 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result234, $tmp257);
                result234 = $tmp258;
            }
            }
            else {
            {
                panda$core$Int64 $tmp260 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f250->type);
                size259 = $tmp260;
                panda$core$Int64 $tmp262 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result234, size259);
                align261 = $tmp262;
                panda$core$Bit $tmp263 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align261, ((panda$core$Int64) { 0 }));
                if ($tmp263.value) {
                {
                    panda$core$Int64 $tmp264 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size259, align261);
                    panda$core$Int64 $tmp265 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result234, $tmp264);
                    result234 = $tmp265;
                }
                }
                panda$core$Int64 $tmp266 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result234, size259);
                panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp266, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp267.value);
                panda$core$Int64 $tmp268 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result234, size259);
                result234 = $tmp268;
            }
            }
        }
        goto $l243;
        $l244:;
    }
    panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp269.value) {
    {
        panda$core$Int64 $tmp270 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result234, ((panda$core$Int64) { 1 }));
        result234 = $tmp270;
    }
    }
    return result234;
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp271 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
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
        panda$core$Object* $tmp274 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp275 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp274));
        return $tmp275;
    }
    }
    panda$core$String* $tmp276 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp277 = panda$core$String$convert$R$panda$core$String($tmp276);
    panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp277, &$s278);
    return $tmp279;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp280 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp280, &$s281);
    return $tmp282;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType283;
    panda$core$MutableString* result286;
    panda$core$Char8 $tmp294;
    panda$core$Char8 $tmp302;
    panda$core$Range$LTpanda$core$Int64$GT $tmp303;
    org$pandalanguage$pandac$Type* $tmp284 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$Object* $tmp285 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp284));
    inheritedType283 = ((org$pandalanguage$pandac$Type*) $tmp285);
    panda$core$MutableString* $tmp287 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp287->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp287->refCount.value = 1;
    panda$core$MutableString$init($tmp287);
    panda$core$Object* $tmp289 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp287));
    result286 = ((panda$core$MutableString*) $tmp289);
    panda$core$Int64 $tmp290 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType283->subtypes);
    panda$core$Int64 $tmp291 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp290, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp292 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType283->subtypes, $tmp291);
    panda$core$String* $tmp293 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp292));
    panda$core$MutableString$append$panda$core$String(result286, $tmp293);
    panda$core$Char8$init$panda$core$UInt8(&$tmp294, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(result286, $tmp294);
    panda$core$Bit $tmp295 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp295.value);
    panda$core$String* $tmp296 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp297 = panda$core$String$convert$R$panda$core$String($tmp296);
    panda$core$String* $tmp299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp297, &$s298);
    panda$core$MutableString$append$panda$core$String(result286, $tmp299);
    panda$core$Bit $tmp300 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp300.value) {
    {
        panda$core$MutableString$append$panda$core$String(result286, &$s301);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp302, ((panda$core$UInt8) { 42 }));
    panda$core$MutableString$append$panda$core$Char8(result286, $tmp302);
    panda$core$Int64 $tmp304 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType283->subtypes);
    panda$core$Int64 $tmp305 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp304, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp303, ((panda$core$Int64) { 0 }), $tmp305, ((panda$core$Bit) { false }));
    int64_t $tmp307 = $tmp303.min.value;
    panda$core$Int64 i306 = { $tmp307 };
    int64_t $tmp309 = $tmp303.max.value;
    bool $tmp310 = $tmp303.inclusive.value;
    if ($tmp310) goto $l317; else goto $l318;
    $l317:;
    if ($tmp307 <= $tmp309) goto $l311; else goto $l313;
    $l318:;
    if ($tmp307 < $tmp309) goto $l311; else goto $l313;
    $l311:;
    {
        panda$core$MutableString$append$panda$core$String(result286, &$s319);
        panda$core$Object* $tmp320 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType283->subtypes, i306);
        panda$core$String* $tmp321 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp320));
        panda$core$MutableString$append$panda$core$String(result286, $tmp321);
    }
    $l314:;
    int64_t $tmp323 = $tmp309 - i306.value;
    if ($tmp310) goto $l324; else goto $l325;
    $l324:;
    if ((uint64_t) $tmp323 >= 1) goto $l322; else goto $l313;
    $l325:;
    if ((uint64_t) $tmp323 > 1) goto $l322; else goto $l313;
    $l322:;
    i306.value += 1;
    goto $l311;
    $l313:;
    panda$core$MutableString$append$panda$core$String(result286, &$s328);
    panda$core$String* $tmp329 = panda$core$MutableString$finish$R$panda$core$String(result286);
    return $tmp329;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp330.value);
    panda$core$Object* $tmp331 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp332 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp331));
    panda$core$String* $tmp333 = panda$core$String$convert$R$panda$core$String($tmp332);
    panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, &$s334);
    return $tmp335;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces336;
    panda$core$String* previous340;
    panda$collections$Iterator* intfType$Iter343;
    org$pandalanguage$pandac$Type* intfType355;
    org$pandalanguage$pandac$ClassDecl* intf360;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC363;
    panda$collections$ListView* methods366;
    panda$core$String* name369;
    panda$core$MutableString* result379;
    panda$core$String* separator410;
    panda$collections$Iterator* m$Iter413;
    org$pandalanguage$pandac$MethodDecl* m425;
    org$pandalanguage$pandac$Type* $tmp337 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp338 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp337);
    panda$core$Object* $tmp339 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp338));
    interfaces336 = ((panda$collections$Set*) $tmp339);
    panda$core$Object* $tmp342 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s341));
    previous340 = ((panda$core$String*) $tmp342);
    {
        ITable* $tmp344 = ((panda$collections$Iterable*) interfaces336)->$class->itable;
        while ($tmp344->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp344 = $tmp344->next;
        }
        $fn346 $tmp345 = $tmp344->methods[0];
        panda$collections$Iterator* $tmp347 = $tmp345(((panda$collections$Iterable*) interfaces336));
        intfType$Iter343 = $tmp347;
        $l348:;
        ITable* $tmp350 = intfType$Iter343->$class->itable;
        while ($tmp350->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp350 = $tmp350->next;
        }
        $fn352 $tmp351 = $tmp350->methods[0];
        panda$core$Bit $tmp353 = $tmp351(intfType$Iter343);
        panda$core$Bit $tmp354 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp353);
        if (!$tmp354.value) goto $l349;
        {
            ITable* $tmp356 = intfType$Iter343->$class->itable;
            while ($tmp356->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp356 = $tmp356->next;
            }
            $fn358 $tmp357 = $tmp356->methods[1];
            panda$core$Object* $tmp359 = $tmp357(intfType$Iter343);
            intfType355 = ((org$pandalanguage$pandac$Type*) $tmp359);
            org$pandalanguage$pandac$ClassDecl* $tmp361 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType355);
            panda$core$Object* $tmp362 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp361));
            intf360 = ((org$pandalanguage$pandac$ClassDecl*) $tmp362);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp364 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf360);
            panda$core$Object* $tmp365 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp364));
            intfCC363 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp365);
            panda$collections$ListView* $tmp367 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType355);
            panda$core$Object* $tmp368 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp367));
            methods366 = ((panda$collections$ListView*) $tmp368);
            panda$core$String* $tmp370 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp371 = panda$core$String$convert$R$panda$core$String($tmp370);
            panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp371, &$s372);
            panda$core$String* $tmp374 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf360)->name);
            panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp373, $tmp374);
            panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp375, &$s376);
            panda$core$Object* $tmp378 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp377));
            name369 = ((panda$core$String*) $tmp378);
            panda$core$MutableString* $tmp380 = (panda$core$MutableString*) pandaAlloc(48);
            $tmp380->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp380->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp383 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp384 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp383);
            panda$core$String* $tmp385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s382, $tmp384);
            panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp385, &$s386);
            ITable* $tmp389 = ((panda$collections$CollectionView*) methods366)->$class->itable;
            while ($tmp389->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp389 = $tmp389->next;
            }
            $fn391 $tmp390 = $tmp389->methods[0];
            panda$core$Int64 $tmp392 = $tmp390(((panda$collections$CollectionView*) methods366));
            panda$core$Int64$wrapper* $tmp393;
            $tmp393 = (panda$core$Int64$wrapper*) pandaAlloc(24);
            $tmp393->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp393->refCount = 1;
            $tmp393->value = $tmp392;
            panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s388, ((panda$core$Object*) $tmp393));
            panda$core$String* $tmp396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp394, &$s395);
            panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp396, name369);
            panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp397, &$s398);
            panda$core$String* $tmp400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp387, $tmp399);
            panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s401, intfCC363->name);
            panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp402, &$s403);
            panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp404, previous340);
            panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, &$s406);
            panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp400, $tmp407);
            panda$core$MutableString$init$panda$core$String($tmp380, $tmp408);
            panda$core$Object* $tmp409 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp380));
            result379 = ((panda$core$MutableString*) $tmp409);
            panda$core$Object* $tmp412 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s411));
            separator410 = ((panda$core$String*) $tmp412);
            {
                ITable* $tmp414 = ((panda$collections$Iterable*) methods366)->$class->itable;
                while ($tmp414->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp414 = $tmp414->next;
                }
                $fn416 $tmp415 = $tmp414->methods[0];
                panda$collections$Iterator* $tmp417 = $tmp415(((panda$collections$Iterable*) methods366));
                m$Iter413 = $tmp417;
                $l418:;
                ITable* $tmp420 = m$Iter413->$class->itable;
                while ($tmp420->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp420 = $tmp420->next;
                }
                $fn422 $tmp421 = $tmp420->methods[0];
                panda$core$Bit $tmp423 = $tmp421(m$Iter413);
                panda$core$Bit $tmp424 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp423);
                if (!$tmp424.value) goto $l419;
                {
                    ITable* $tmp426 = m$Iter413->$class->itable;
                    while ($tmp426->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp426 = $tmp426->next;
                    }
                    $fn428 $tmp427 = $tmp426->methods[1];
                    panda$core$Object* $tmp429 = $tmp427(m$Iter413);
                    m425 = ((org$pandalanguage$pandac$MethodDecl*) $tmp429);
                    panda$core$MutableString$append$panda$core$String(result379, separator410);
                    {
                        panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator410));
                        panda$core$Object* $tmp431 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s430));
                        separator410 = ((panda$core$String*) $tmp431);
                    }
                    panda$core$Bit $tmp432 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m425->annotations);
                    if ($tmp432.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result379, &$s433);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp434 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m425);
                        panda$core$MutableString$append$panda$core$String(result379, $tmp434);
                    }
                    }
                }
                goto $l418;
                $l419:;
            }
            panda$core$MutableString$append$panda$core$String(result379, &$s435);
            panda$core$String* $tmp436 = panda$core$MutableString$finish$R$panda$core$String(result379);
            (($fn437) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp436);
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) previous340));
                panda$core$String* $tmp439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s438, name369);
                panda$core$String* $tmp441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp439, &$s440);
                panda$core$Object* $tmp442 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp441));
                previous340 = ((panda$core$String*) $tmp442);
            }
        }
        goto $l348;
        $l349:;
    }
    return previous340;
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer443;
    panda$io$IndentedOutputStream* out447;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found451;
    org$pandalanguage$pandac$Type* effectiveReturnType460;
    panda$core$String* resultName465;
    panda$core$MutableString* resultType470;
    panda$core$String* self_t482;
    panda$core$Char8 $tmp489;
    panda$core$Range$LTpanda$core$Int64$GT $tmp490;
    panda$core$String* pType505;
    panda$collections$Array* casts529;
    panda$core$Range$LTpanda$core$Int64$GT $tmp533;
    panda$core$String* p548;
    panda$core$Range$LTpanda$core$Int64$GT $tmp579;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result620;
    panda$io$MemoryOutputStream* $tmp444 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
    $tmp444->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp444->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp444);
    panda$core$Object* $tmp446 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp444));
    outBuffer443 = ((panda$io$MemoryOutputStream*) $tmp446);
    panda$io$IndentedOutputStream* $tmp448 = (panda$io$IndentedOutputStream*) pandaAlloc(56);
    $tmp448->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp448->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp448, ((panda$io$OutputStream*) outBuffer443));
    panda$core$Object* $tmp450 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp448));
    out447 = ((panda$io$IndentedOutputStream*) $tmp450);
    panda$core$Object* $tmp452 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    panda$core$Object* $tmp453 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp452)));
    found451 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp453);
    if (((panda$core$Bit) { found451 != NULL }).value) {
    {
        return found451;
    }
    }
    panda$core$Bit $tmp454 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp454.value);
    panda$core$Int64 $tmp455 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp456 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp457 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp456, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp455, $tmp457);
    PANDA_ASSERT($tmp458.value);
    panda$core$Bit $tmp459 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp459.value);
    panda$core$Int64 $tmp461 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp462 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp461, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp463 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp462);
    panda$core$Object* $tmp464 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp463)));
    effectiveReturnType460 = ((org$pandalanguage$pandac$Type*) $tmp464);
    panda$core$String* $tmp466 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp466, &$s467);
    panda$core$Object* $tmp469 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp468));
    resultName465 = ((panda$core$String*) $tmp469);
    panda$core$MutableString* $tmp471 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp471->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp471->refCount.value = 1;
    panda$core$String* $tmp473 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType460);
    panda$core$MutableString$init$panda$core$String($tmp471, $tmp473);
    panda$core$Object* $tmp474 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp471));
    resultType470 = ((panda$core$MutableString*) $tmp474);
    panda$core$String* $tmp475 = panda$core$MutableString$convert$R$panda$core$String(resultType470);
    panda$core$String* $tmp477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp475, &$s476);
    panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp477, resultName465);
    panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp478, &$s479);
    (($fn481) ((panda$io$OutputStream*) out447)->$class->vtable[16])(((panda$io$OutputStream*) out447), $tmp480);
    panda$core$String* $tmp483 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$Object* $tmp484 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp483));
    self_t482 = ((panda$core$String*) $tmp484);
    panda$core$String* $tmp485 = panda$core$String$convert$R$panda$core$String(self_t482);
    panda$core$String* $tmp487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp485, &$s486);
    (($fn488) ((panda$io$OutputStream*) out447)->$class->vtable[16])(((panda$io$OutputStream*) out447), $tmp487);
    panda$core$Char8$init$panda$core$UInt8(&$tmp489, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(resultType470, $tmp489);
    panda$core$MutableString$append$panda$core$String(resultType470, self_t482);
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
        panda$core$Object* $tmp506 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i492);
        panda$core$String* $tmp507 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp506));
        panda$core$Object* $tmp508 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp507));
        pType505 = ((panda$core$String*) $tmp508);
        panda$core$MutableString$append$panda$core$String(resultType470, &$s509);
        panda$core$MutableString$append$panda$core$String(resultType470, pType505);
        panda$core$String* $tmp511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s510, pType505);
        panda$core$String* $tmp513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp511, &$s512);
        panda$core$Int64$wrapper* $tmp514;
        $tmp514 = (panda$core$Int64$wrapper*) pandaAlloc(24);
        $tmp514->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp514->refCount = 1;
        $tmp514->value = i492;
        panda$core$String* $tmp515 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp513, ((panda$core$Object*) $tmp514));
        panda$core$String* $tmp517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp515, &$s516);
        (($fn518) ((panda$io$OutputStream*) out447)->$class->vtable[16])(((panda$io$OutputStream*) out447), $tmp517);
    }
    $l500:;
    int64_t $tmp520 = $tmp495 - i492.value;
    if ($tmp496) goto $l521; else goto $l522;
    $l521:;
    if ((uint64_t) $tmp520 >= 1) goto $l519; else goto $l499;
    $l522:;
    if ((uint64_t) $tmp520 > 1) goto $l519; else goto $l499;
    $l519:;
    i492.value += 1;
    goto $l497;
    $l499:;
    (($fn526) ((panda$io$OutputStream*) out447)->$class->vtable[19])(((panda$io$OutputStream*) out447), &$s525);
    panda$core$Int64 $tmp527 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out447->level, ((panda$core$Int64) { 1 }));
    out447->level = $tmp527;
    panda$core$MutableString$append$panda$core$String(resultType470, &$s528);
    panda$collections$Array* $tmp530 = (panda$collections$Array*) pandaAlloc(41);
    $tmp530->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp530->refCount.value = 1;
    panda$collections$Array$init($tmp530);
    panda$core$Object* $tmp532 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp530));
    casts529 = ((panda$collections$Array*) $tmp532);
    panda$core$Int64 $tmp534 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp533, ((panda$core$Int64) { 0 }), $tmp534, ((panda$core$Bit) { false }));
    int64_t $tmp536 = $tmp533.min.value;
    panda$core$Int64 i535 = { $tmp536 };
    int64_t $tmp538 = $tmp533.max.value;
    bool $tmp539 = $tmp533.inclusive.value;
    if ($tmp539) goto $l546; else goto $l547;
    $l546:;
    if ($tmp536 <= $tmp538) goto $l540; else goto $l542;
    $l547:;
    if ($tmp536 < $tmp538) goto $l540; else goto $l542;
    $l540:;
    {
        panda$core$Int64$wrapper* $tmp550;
        $tmp550 = (panda$core$Int64$wrapper*) pandaAlloc(24);
        $tmp550->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp550->refCount = 1;
        $tmp550->value = i535;
        panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s549, ((panda$core$Object*) $tmp550));
        panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp551, &$s552);
        panda$core$Object* $tmp554 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp553));
        p548 = ((panda$core$String*) $tmp554);
        panda$core$Object* $tmp555 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i535);
        panda$core$Object* $tmp556 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i535);
        panda$core$Bit $tmp557 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp555)->type, ((org$pandalanguage$pandac$Type*) $tmp556));
        if ($tmp557.value) {
        {
            panda$core$Object* $tmp558 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i535);
            panda$core$Object* $tmp559 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i535);
            panda$core$String* $tmp560 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p548, ((org$pandalanguage$pandac$Type*) $tmp558), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp559)->type, out447);
            panda$collections$Array$add$panda$collections$Array$T(casts529, ((panda$core$Object*) $tmp560));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts529, ((panda$core$Object*) p548));
        }
        }
    }
    $l543:;
    int64_t $tmp562 = $tmp538 - i535.value;
    if ($tmp539) goto $l563; else goto $l564;
    $l563:;
    if ((uint64_t) $tmp562 >= 1) goto $l561; else goto $l542;
    $l564:;
    if ((uint64_t) $tmp562 > 1) goto $l561; else goto $l542;
    $l561:;
    i535.value += 1;
    goto $l540;
    $l542:;
    org$pandalanguage$pandac$Type* $tmp567 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp568 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp567);
    if ($tmp568.value) {
    {
        panda$core$String* $tmp569 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp570 = panda$core$String$convert$R$panda$core$String($tmp569);
        panda$core$String* $tmp572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp570, &$s571);
        (($fn573) ((panda$io$OutputStream*) out447)->$class->vtable[16])(((panda$io$OutputStream*) out447), $tmp572);
    }
    }
    panda$core$String* $tmp574 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp575 = panda$core$String$convert$R$panda$core$String($tmp574);
    panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, &$s576);
    (($fn578) ((panda$io$OutputStream*) out447)->$class->vtable[16])(((panda$io$OutputStream*) out447), $tmp577);
    panda$core$Int64 $tmp580 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp579, ((panda$core$Int64) { 0 }), $tmp580, ((panda$core$Bit) { false }));
    int64_t $tmp582 = $tmp579.min.value;
    panda$core$Int64 i581 = { $tmp582 };
    int64_t $tmp584 = $tmp579.max.value;
    bool $tmp585 = $tmp579.inclusive.value;
    if ($tmp585) goto $l592; else goto $l593;
    $l592:;
    if ($tmp582 <= $tmp584) goto $l586; else goto $l588;
    $l593:;
    if ($tmp582 < $tmp584) goto $l586; else goto $l588;
    $l586:;
    {
        panda$core$Object* $tmp595 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts529, i581);
        panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s594, ((panda$core$String*) $tmp595));
        panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, &$s597);
        (($fn599) ((panda$io$OutputStream*) out447)->$class->vtable[16])(((panda$io$OutputStream*) out447), $tmp598);
    }
    $l589:;
    int64_t $tmp601 = $tmp584 - i581.value;
    if ($tmp585) goto $l602; else goto $l603;
    $l602:;
    if ((uint64_t) $tmp601 >= 1) goto $l600; else goto $l588;
    $l603:;
    if ((uint64_t) $tmp601 > 1) goto $l600; else goto $l588;
    $l600:;
    i581.value += 1;
    goto $l586;
    $l588:;
    (($fn607) ((panda$io$OutputStream*) out447)->$class->vtable[19])(((panda$io$OutputStream*) out447), &$s606);
    org$pandalanguage$pandac$Type* $tmp608 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp609 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp608);
    if ($tmp609.value) {
    {
        panda$core$String* $tmp612 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s611, p_raw->returnType, effectiveReturnType460, out447);
        panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s610, $tmp612);
        panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp613, &$s614);
        (($fn616) ((panda$io$OutputStream*) out447)->$class->vtable[19])(((panda$io$OutputStream*) out447), $tmp615);
    }
    }
    panda$core$Int64 $tmp617 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out447->level, ((panda$core$Int64) { 1 }));
    out447->level = $tmp617;
    (($fn619) ((panda$io$OutputStream*) out447)->$class->vtable[19])(((panda$io$OutputStream*) out447), &$s618);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp621 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) pandaAlloc(32);
    $tmp621->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;
    $tmp621->refCount.value = 1;
    panda$core$String* $tmp623 = panda$core$MutableString$finish$R$panda$core$String(resultType470);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp621, resultName465, $tmp623);
    panda$core$Object* $tmp624 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp621));
    result620 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp624);
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result620));
    panda$core$String* $tmp625 = panda$io$MemoryOutputStream$finish$R$panda$core$String(outBuffer443);
    (($fn626) p_rawOut->$class->vtable[16])(p_rawOut, $tmp625);
    return result620;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod628;
    panda$core$String* result631;
    panda$core$String* selfType637;
    org$pandalanguage$pandac$Type* actualMethodType654;
    org$pandalanguage$pandac$Type* inheritedMethodType657;
    panda$core$Range$LTpanda$core$Int64$GT $tmp660;
    panda$collections$Array* parameters695;
    panda$core$Range$LTpanda$core$Int64$GT $tmp699;
    panda$collections$Array* children724;
    org$pandalanguage$pandac$Position $tmp730;
    panda$core$Range$LTpanda$core$Int64$GT $tmp741;
    panda$core$Bit $tmp627 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp627.value);
    panda$core$Object* $tmp629 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->currentMethod));
    oldMethod628 = ((org$pandalanguage$pandac$MethodDecl*) $tmp629);
    {
        panda$core$Object* $tmp630 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_m));
        self->currentMethod = ((org$pandalanguage$pandac$MethodDecl*) $tmp630);
    }
    panda$core$String* $tmp632 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp633 = panda$core$String$convert$R$panda$core$String($tmp632);
    panda$core$String* $tmp635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp633, &$s634);
    panda$core$Object* $tmp636 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp635));
    result631 = ((panda$core$String*) $tmp636);
    panda$core$String* $tmp638 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp639 = panda$core$String$convert$R$panda$core$String($tmp638);
    panda$core$String* $tmp641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp639, &$s640);
    panda$core$Object* $tmp642 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp641));
    selfType637 = ((panda$core$String*) $tmp642);
    panda$core$String* $tmp643 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp644 = panda$core$String$convert$R$panda$core$String($tmp643);
    panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp644, &$s645);
    panda$core$String* $tmp647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp646, result631);
    panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp647, &$s648);
    panda$core$String* $tmp650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp649, selfType637);
    panda$core$String* $tmp652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp650, &$s651);
    (($fn653) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp652);
    org$pandalanguage$pandac$Type* $tmp655 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$Object* $tmp656 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp655));
    actualMethodType654 = ((org$pandalanguage$pandac$Type*) $tmp656);
    org$pandalanguage$pandac$Type* $tmp658 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$Object* $tmp659 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp658));
    inheritedMethodType657 = ((org$pandalanguage$pandac$Type*) $tmp659);
    panda$core$Int64 $tmp661 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp660, ((panda$core$Int64) { 0 }), $tmp661, ((panda$core$Bit) { false }));
    int64_t $tmp663 = $tmp660.min.value;
    panda$core$Int64 i662 = { $tmp663 };
    int64_t $tmp665 = $tmp660.max.value;
    bool $tmp666 = $tmp660.inclusive.value;
    if ($tmp666) goto $l673; else goto $l674;
    $l673:;
    if ($tmp663 <= $tmp665) goto $l667; else goto $l669;
    $l674:;
    if ($tmp663 < $tmp665) goto $l667; else goto $l669;
    $l667:;
    {
        panda$core$Object* $tmp676 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType657->subtypes, i662);
        panda$core$String* $tmp677 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp676));
        panda$core$String* $tmp678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s675, $tmp677);
        panda$core$String* $tmp680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp678, &$s679);
        panda$core$Object* $tmp681 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i662);
        panda$core$String* $tmp682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp680, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp681)->name);
        panda$core$String* $tmp684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp682, &$s683);
        (($fn685) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp684);
    }
    $l670:;
    int64_t $tmp687 = $tmp665 - i662.value;
    if ($tmp666) goto $l688; else goto $l689;
    $l688:;
    if ((uint64_t) $tmp687 >= 1) goto $l686; else goto $l669;
    $l689:;
    if ((uint64_t) $tmp687 > 1) goto $l686; else goto $l669;
    $l686:;
    i662.value += 1;
    goto $l667;
    $l669:;
    (($fn693) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s692);
    panda$core$Int64 $tmp694 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp694;
    panda$collections$Array* $tmp696 = (panda$collections$Array*) pandaAlloc(41);
    $tmp696->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp696->refCount.value = 1;
    panda$collections$Array$init($tmp696);
    panda$core$Object* $tmp698 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp696));
    parameters695 = ((panda$collections$Array*) $tmp698);
    panda$core$Int64 $tmp700 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp699, ((panda$core$Int64) { 0 }), $tmp700, ((panda$core$Bit) { false }));
    int64_t $tmp702 = $tmp699.min.value;
    panda$core$Int64 i701 = { $tmp702 };
    int64_t $tmp704 = $tmp699.max.value;
    bool $tmp705 = $tmp699.inclusive.value;
    if ($tmp705) goto $l712; else goto $l713;
    $l712:;
    if ($tmp702 <= $tmp704) goto $l706; else goto $l708;
    $l713:;
    if ($tmp702 < $tmp704) goto $l706; else goto $l708;
    $l706:;
    {
        panda$core$Object* $tmp714 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i701);
        panda$core$Object* $tmp715 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType657->subtypes, i701);
        panda$core$Object* $tmp716 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType654->subtypes, i701);
        panda$core$String* $tmp717 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp714)->name, ((org$pandalanguage$pandac$Type*) $tmp715), ((org$pandalanguage$pandac$Type*) $tmp716), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters695, ((panda$core$Object*) $tmp717));
    }
    $l709:;
    int64_t $tmp719 = $tmp704 - i701.value;
    if ($tmp705) goto $l720; else goto $l721;
    $l720:;
    if ((uint64_t) $tmp719 >= 1) goto $l718; else goto $l708;
    $l721:;
    if ((uint64_t) $tmp719 > 1) goto $l718; else goto $l708;
    $l718:;
    i701.value += 1;
    goto $l706;
    $l708:;
    panda$collections$Array* $tmp725 = (panda$collections$Array*) pandaAlloc(41);
    $tmp725->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp725->refCount.value = 1;
    panda$collections$Array$init($tmp725);
    panda$core$Object* $tmp727 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp725));
    children724 = ((panda$collections$Array*) $tmp727);
    org$pandalanguage$pandac$IRNode* $tmp728 = (org$pandalanguage$pandac$IRNode*) pandaAlloc(72);
    $tmp728->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp728->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp730);
    org$pandalanguage$pandac$Type* $tmp731 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp728, ((panda$core$Int64) { 30 }), $tmp730, $tmp731);
    panda$collections$Array$add$panda$collections$Array$T(children724, ((panda$core$Object*) $tmp728));
    org$pandalanguage$pandac$Type* $tmp732 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp733 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp732);
    if ($tmp733.value) {
    {
        (($fn735) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s734);
    }
    }
    panda$core$String* $tmp736 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp737 = panda$core$String$convert$R$panda$core$String($tmp736);
    panda$core$String* $tmp739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp737, &$s738);
    (($fn740) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp739);
    panda$core$Int64 $tmp742 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp741, ((panda$core$Int64) { 0 }), $tmp742, ((panda$core$Bit) { false }));
    int64_t $tmp744 = $tmp741.min.value;
    panda$core$Int64 i743 = { $tmp744 };
    int64_t $tmp746 = $tmp741.max.value;
    bool $tmp747 = $tmp741.inclusive.value;
    if ($tmp747) goto $l754; else goto $l755;
    $l754:;
    if ($tmp744 <= $tmp746) goto $l748; else goto $l750;
    $l755:;
    if ($tmp744 < $tmp746) goto $l748; else goto $l750;
    $l748:;
    {
        panda$core$Object* $tmp757 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters695, i743);
        panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s756, ((panda$core$String*) $tmp757));
        panda$core$String* $tmp760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp758, &$s759);
        (($fn761) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp760);
    }
    $l751:;
    int64_t $tmp763 = $tmp746 - i743.value;
    if ($tmp747) goto $l764; else goto $l765;
    $l764:;
    if ((uint64_t) $tmp763 >= 1) goto $l762; else goto $l750;
    $l765:;
    if ((uint64_t) $tmp763 > 1) goto $l762; else goto $l750;
    $l762:;
    i743.value += 1;
    goto $l748;
    $l750:;
    (($fn769) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s768);
    panda$core$Int64 $tmp770 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp770;
    (($fn772) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s771);
    {
        panda$core$Object* $tmp773 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) oldMethod628));
        self->currentMethod = ((org$pandalanguage$pandac$MethodDecl*) $tmp773);
    }
    return result631;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces774;
    panda$core$String* previous778;
    panda$collections$Iterator* intfType$Iter781;
    org$pandalanguage$pandac$Type* intfType793;
    org$pandalanguage$pandac$ClassDecl* intf798;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC801;
    panda$collections$ListView* methods804;
    panda$core$String* name807;
    panda$core$MutableString* result817;
    panda$core$String* separator853;
    panda$collections$Iterator* m$Iter856;
    org$pandalanguage$pandac$MethodDecl* m868;
    org$pandalanguage$pandac$Type* $tmp775 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp776 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp775);
    panda$core$Object* $tmp777 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp776));
    interfaces774 = ((panda$collections$Set*) $tmp777);
    panda$core$Object* $tmp780 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s779));
    previous778 = ((panda$core$String*) $tmp780);
    {
        ITable* $tmp782 = ((panda$collections$Iterable*) interfaces774)->$class->itable;
        while ($tmp782->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp782 = $tmp782->next;
        }
        $fn784 $tmp783 = $tmp782->methods[0];
        panda$collections$Iterator* $tmp785 = $tmp783(((panda$collections$Iterable*) interfaces774));
        intfType$Iter781 = $tmp785;
        $l786:;
        ITable* $tmp788 = intfType$Iter781->$class->itable;
        while ($tmp788->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp788 = $tmp788->next;
        }
        $fn790 $tmp789 = $tmp788->methods[0];
        panda$core$Bit $tmp791 = $tmp789(intfType$Iter781);
        panda$core$Bit $tmp792 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp791);
        if (!$tmp792.value) goto $l787;
        {
            ITable* $tmp794 = intfType$Iter781->$class->itable;
            while ($tmp794->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp794 = $tmp794->next;
            }
            $fn796 $tmp795 = $tmp794->methods[1];
            panda$core$Object* $tmp797 = $tmp795(intfType$Iter781);
            intfType793 = ((org$pandalanguage$pandac$Type*) $tmp797);
            org$pandalanguage$pandac$ClassDecl* $tmp799 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType793);
            panda$core$Object* $tmp800 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp799));
            intf798 = ((org$pandalanguage$pandac$ClassDecl*) $tmp800);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp802 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf798);
            panda$core$Object* $tmp803 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp802));
            intfCC801 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp803);
            panda$collections$ListView* $tmp805 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType793);
            panda$core$Object* $tmp806 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp805));
            methods804 = ((panda$collections$ListView*) $tmp806);
            panda$core$String* $tmp808 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp809 = panda$core$String$convert$R$panda$core$String($tmp808);
            panda$core$String* $tmp811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp809, &$s810);
            panda$core$String* $tmp812 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf798)->name);
            panda$core$String* $tmp813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp811, $tmp812);
            panda$core$String* $tmp815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp813, &$s814);
            panda$core$Object* $tmp816 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp815));
            name807 = ((panda$core$String*) $tmp816);
            panda$core$MutableString* $tmp818 = (panda$core$MutableString*) pandaAlloc(48);
            $tmp818->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp818->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp821 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp822 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp821);
            panda$core$String* $tmp823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s820, $tmp822);
            panda$core$String* $tmp825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp823, &$s824);
            ITable* $tmp827 = ((panda$collections$CollectionView*) methods804)->$class->itable;
            while ($tmp827->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp827 = $tmp827->next;
            }
            $fn829 $tmp828 = $tmp827->methods[0];
            panda$core$Int64 $tmp830 = $tmp828(((panda$collections$CollectionView*) methods804));
            panda$core$Int64$wrapper* $tmp831;
            $tmp831 = (panda$core$Int64$wrapper*) pandaAlloc(24);
            $tmp831->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp831->refCount = 1;
            $tmp831->value = $tmp830;
            panda$core$String* $tmp832 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s826, ((panda$core$Object*) $tmp831));
            panda$core$String* $tmp834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp832, &$s833);
            panda$core$String* $tmp835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp834, name807);
            panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp835, &$s836);
            panda$core$String* $tmp838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp825, $tmp837);
            org$pandalanguage$pandac$Type* $tmp840 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp841 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp840);
            panda$core$String* $tmp842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s839, $tmp841);
            panda$core$String* $tmp844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp842, &$s843);
            panda$core$String* $tmp845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp844, intfCC801->name);
            panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp845, &$s846);
            panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp847, previous778);
            panda$core$String* $tmp850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp848, &$s849);
            panda$core$String* $tmp851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp838, $tmp850);
            panda$core$MutableString$init$panda$core$String($tmp818, $tmp851);
            panda$core$Object* $tmp852 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp818));
            result817 = ((panda$core$MutableString*) $tmp852);
            panda$core$Object* $tmp855 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s854));
            separator853 = ((panda$core$String*) $tmp855);
            {
                ITable* $tmp857 = ((panda$collections$Iterable*) methods804)->$class->itable;
                while ($tmp857->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp857 = $tmp857->next;
                }
                $fn859 $tmp858 = $tmp857->methods[0];
                panda$collections$Iterator* $tmp860 = $tmp858(((panda$collections$Iterable*) methods804));
                m$Iter856 = $tmp860;
                $l861:;
                ITable* $tmp863 = m$Iter856->$class->itable;
                while ($tmp863->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp863 = $tmp863->next;
                }
                $fn865 $tmp864 = $tmp863->methods[0];
                panda$core$Bit $tmp866 = $tmp864(m$Iter856);
                panda$core$Bit $tmp867 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp866);
                if (!$tmp867.value) goto $l862;
                {
                    ITable* $tmp869 = m$Iter856->$class->itable;
                    while ($tmp869->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp869 = $tmp869->next;
                    }
                    $fn871 $tmp870 = $tmp869->methods[1];
                    panda$core$Object* $tmp872 = $tmp870(m$Iter856);
                    m868 = ((org$pandalanguage$pandac$MethodDecl*) $tmp872);
                    panda$core$MutableString$append$panda$core$String(result817, separator853);
                    {
                        panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator853));
                        panda$core$Object* $tmp874 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s873));
                        separator853 = ((panda$core$String*) $tmp874);
                    }
                    panda$core$Bit $tmp875 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m868->annotations);
                    if ($tmp875.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result817, &$s876);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp877 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m868, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result817, $tmp877);
                    }
                    }
                }
                goto $l861;
                $l862:;
            }
            panda$core$MutableString$append$panda$core$String(result817, &$s878);
            panda$core$String* $tmp879 = panda$core$MutableString$finish$R$panda$core$String(result817);
            (($fn880) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp879);
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) previous778));
                panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s881, name807);
                panda$core$String* $tmp884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp882, &$s883);
                panda$core$Object* $tmp885 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp884));
                previous778 = ((panda$core$String*) $tmp885);
            }
        }
        goto $l786;
        $l787:;
    }
    return previous778;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp886 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp886;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result888;
    org$pandalanguage$pandac$Type* declared889;
    org$pandalanguage$pandac$Type* inherited893;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim897;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    panda$core$Bit $tmp887 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp887.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    memset(&result888, 0, sizeof(result888));
    org$pandalanguage$pandac$Type* $tmp890 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp891 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp890);
    panda$core$Object* $tmp892 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp891));
    declared889 = ((org$pandalanguage$pandac$Type*) $tmp892);
    org$pandalanguage$pandac$Type* $tmp894 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$Object* $tmp895 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp894));
    inherited893 = ((org$pandalanguage$pandac$Type*) $tmp895);
    panda$core$Bit $tmp896 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared889, inherited893);
    if ($tmp896.value) {
    {
        org$pandalanguage$pandac$Type* $tmp898 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp899 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp898, ((panda$io$OutputStream*) self->shims));
        panda$core$Object* $tmp900 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp899));
        shim897 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp900);
        {
            panda$core$Object* $tmp901 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) shim897->name));
            result888 = ((panda$core$String*) $tmp901);
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp902 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            panda$core$Object* $tmp903 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp902));
            result888 = ((panda$core$String*) $tmp903);
        }
    }
    }
    return result888;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result904;
    panda$core$String* type907;
    panda$collections$ListView* vtable919;
    panda$core$String* superPtr931;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC932;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant943;
    panda$core$MutableString* code948;
    panda$core$String* separator970;
    panda$collections$Iterator* m$Iter973;
    org$pandalanguage$pandac$MethodDecl* m985;
    panda$core$Object* $tmp905 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    panda$core$Object* $tmp906 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp905)));
    result904 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp906);
    if (((panda$core$Bit) { result904 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        memset(&type907, 0, sizeof(type907));
        panda$core$Bit $tmp908 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp908.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result904));
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp909 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaAlloc(32);
                $tmp909->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
                $tmp909->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp911 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                panda$core$String* $tmp912 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp911)->name);
                panda$core$String* $tmp913 = panda$core$String$convert$R$panda$core$String($tmp912);
                panda$core$String* $tmp915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp913, &$s914);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp909, $tmp915, &$s916);
                panda$core$Object* $tmp917 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp909));
                result904 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp917);
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result904));
            panda$core$Object* $tmp918 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp918);
        }
        }
        panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp920 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        panda$core$Object* $tmp921 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp920));
        vtable919 = ((panda$collections$ListView*) $tmp921);
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result904));
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp922 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaAlloc(32);
            $tmp922->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp922->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp924 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp925 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp924)->name);
            panda$core$String* $tmp926 = panda$core$String$convert$R$panda$core$String($tmp925);
            panda$core$String* $tmp928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp926, &$s927);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp922, $tmp928, &$s929);
            panda$core$Object* $tmp930 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp922));
            result904 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp930);
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result904));
        memset(&superPtr931, 0, sizeof(superPtr931));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp933 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp934 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp933);
            panda$core$Object* $tmp935 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp934));
            superCC932 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp935);
            {
                panda$core$String* $tmp937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s936, superCC932->name);
                panda$core$String* $tmp939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp937, &$s938);
                panda$core$Object* $tmp940 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp939));
                superPtr931 = ((panda$core$String*) $tmp940);
            }
        }
        }
        else {
        {
            {
                panda$core$Object* $tmp942 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s941));
                superPtr931 = ((panda$core$String*) $tmp942);
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp944 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp945 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp944);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp946 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp945);
        panda$core$Object* $tmp947 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp946));
        clConstant943 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp947);
        panda$core$MutableString* $tmp949 = (panda$core$MutableString*) pandaAlloc(48);
        $tmp949->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp949->refCount.value = 1;
        panda$core$String* $tmp951 = panda$core$String$convert$R$panda$core$String(result904->name);
        panda$core$String* $tmp953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp951, &$s952);
        panda$core$String* $tmp954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp953, result904->name);
        panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp954, &$s955);
        panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s957, clConstant943->name);
        panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp958, &$s959);
        panda$core$String* $tmp961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp960, superPtr931);
        panda$core$String* $tmp963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp961, &$s962);
        panda$core$String* $tmp964 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp963, $tmp964);
        panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp965, &$s966);
        panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp956, $tmp967);
        panda$core$MutableString$init$panda$core$String($tmp949, $tmp968);
        panda$core$Object* $tmp969 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp949));
        code948 = ((panda$core$MutableString*) $tmp969);
        panda$core$Object* $tmp972 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s971));
        separator970 = ((panda$core$String*) $tmp972);
        {
            ITable* $tmp974 = ((panda$collections$Iterable*) vtable919)->$class->itable;
            while ($tmp974->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp974 = $tmp974->next;
            }
            $fn976 $tmp975 = $tmp974->methods[0];
            panda$collections$Iterator* $tmp977 = $tmp975(((panda$collections$Iterable*) vtable919));
            m$Iter973 = $tmp977;
            $l978:;
            ITable* $tmp980 = m$Iter973->$class->itable;
            while ($tmp980->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp980 = $tmp980->next;
            }
            $fn982 $tmp981 = $tmp980->methods[0];
            panda$core$Bit $tmp983 = $tmp981(m$Iter973);
            panda$core$Bit $tmp984 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp983);
            if (!$tmp984.value) goto $l979;
            {
                ITable* $tmp986 = m$Iter973->$class->itable;
                while ($tmp986->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp986 = $tmp986->next;
                }
                $fn988 $tmp987 = $tmp986->methods[1];
                panda$core$Object* $tmp989 = $tmp987(m$Iter973);
                m985 = ((org$pandalanguage$pandac$MethodDecl*) $tmp989);
                panda$core$MutableString$append$panda$core$String(code948, separator970);
                panda$core$Bit $tmp990 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m985->annotations);
                if ($tmp990.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code948, &$s991);
                }
                }
                else {
                {
                    panda$core$String* $tmp992 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m985);
                    panda$core$MutableString$append$panda$core$String(code948, $tmp992);
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator970));
                    panda$core$Object* $tmp994 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s993));
                    separator970 = ((panda$core$String*) $tmp994);
                }
            }
            goto $l978;
            $l979:;
        }
        panda$core$MutableString$append$panda$core$String(code948, &$s995);
        panda$core$String* $tmp996 = panda$core$MutableString$finish$R$panda$core$String(code948);
        (($fn997) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp996);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    }
    }
    return result904;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name998;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result1004;
    panda$core$String* type1009;
    org$pandalanguage$pandac$ClassDecl* value1022;
    panda$collections$ListView* valueVTable1026;
    panda$collections$ListView* vtable1037;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC1040;
    panda$core$String* superCast1044;
    panda$core$String* itable1050;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant1053;
    panda$core$MutableString* code1058;
    panda$core$String* separator1079;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1082;
    org$pandalanguage$pandac$MethodDecl* m1100;
    panda$core$String* methodName1106;
    panda$core$String* $tmp999 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1000 = panda$core$String$convert$R$panda$core$String($tmp999);
    panda$core$String* $tmp1002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1000, &$s1001);
    panda$core$Object* $tmp1003 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1002));
    name998 = ((panda$core$String*) $tmp1003);
    panda$core$Object* $tmp1005 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name998));
    panda$core$Object* $tmp1006 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1005)));
    result1004 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1006);
    if (((panda$core$Bit) { result1004 == NULL }).value) {
    {
        panda$core$Bit $tmp1007 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp1007.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1008 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1008);
            panda$core$Object* $tmp1011 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1010));
            type1009 = ((panda$core$String*) $tmp1011);
            panda$core$String* $tmp1012 = panda$core$String$convert$R$panda$core$String(name998);
            panda$core$String* $tmp1014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1012, &$s1013);
            panda$core$String* $tmp1015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1014, type1009);
            panda$core$String* $tmp1017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1015, &$s1016);
            (($fn1018) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1017);
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result1004));
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1019 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaAlloc(32);
                $tmp1019->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
                $tmp1019->refCount.value = 1;
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1019, name998, type1009);
                panda$core$Object* $tmp1021 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1019));
                result1004 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1021);
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1023 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1024 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1023);
            panda$core$Object* $tmp1025 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1024));
            value1022 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1025);
            panda$collections$ListView* $tmp1027 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1022);
            panda$core$Object* $tmp1028 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1027));
            valueVTable1026 = ((panda$collections$ListView*) $tmp1028);
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result1004));
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1029 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaAlloc(32);
                $tmp1029->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
                $tmp1029->refCount.value = 1;
                panda$core$String* $tmp1031 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$String* $tmp1032 = panda$core$String$convert$R$panda$core$String($tmp1031);
                panda$core$String* $tmp1034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1032, &$s1033);
                org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1029, $tmp1034, &$s1035);
                panda$core$Object* $tmp1036 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1029));
                result1004 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1036);
            }
            panda$collections$ListView* $tmp1038 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            panda$core$Object* $tmp1039 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1038));
            vtable1037 = ((panda$collections$ListView*) $tmp1039);
            org$pandalanguage$pandac$ClassDecl* $tmp1041 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1042 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1041);
            panda$core$Object* $tmp1043 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1042));
            superCC1040 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1043);
            panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1045, superCC1040->name);
            panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1046, &$s1047);
            panda$core$Object* $tmp1049 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1048));
            superCast1044 = ((panda$core$String*) $tmp1049);
            panda$core$String* $tmp1051 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            panda$core$Object* $tmp1052 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1051));
            itable1050 = ((panda$core$String*) $tmp1052);
            org$pandalanguage$pandac$Type* $tmp1054 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1055 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1054);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1056 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1055);
            panda$core$Object* $tmp1057 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1056));
            clConstant1053 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1057);
            panda$core$MutableString* $tmp1059 = (panda$core$MutableString*) pandaAlloc(48);
            $tmp1059->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1059->refCount.value = 1;
            panda$core$String* $tmp1061 = panda$core$String$convert$R$panda$core$String(result1004->name);
            panda$core$String* $tmp1063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1061, &$s1062);
            panda$core$String* $tmp1064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1063, result1004->name);
            panda$core$String* $tmp1066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1064, &$s1065);
            panda$core$String* $tmp1068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1067, clConstant1053->name);
            panda$core$String* $tmp1070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1068, &$s1069);
            panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1070, superCast1044);
            panda$core$String* $tmp1073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1071, &$s1072);
            panda$core$String* $tmp1074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1073, itable1050);
            panda$core$String* $tmp1076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1074, &$s1075);
            panda$core$String* $tmp1077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1066, $tmp1076);
            panda$core$MutableString$init$panda$core$String($tmp1059, $tmp1077);
            panda$core$Object* $tmp1078 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1059));
            code1058 = ((panda$core$MutableString*) $tmp1078);
            panda$core$Object* $tmp1081 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1080));
            separator1079 = ((panda$core$String*) $tmp1081);
            ITable* $tmp1083 = ((panda$collections$CollectionView*) valueVTable1026)->$class->itable;
            while ($tmp1083->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1083 = $tmp1083->next;
            }
            $fn1085 $tmp1084 = $tmp1083->methods[0];
            panda$core$Int64 $tmp1086 = $tmp1084(((panda$collections$CollectionView*) valueVTable1026));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1082, ((panda$core$Int64) { 0 }), $tmp1086, ((panda$core$Bit) { false }));
            int64_t $tmp1088 = $tmp1082.min.value;
            panda$core$Int64 i1087 = { $tmp1088 };
            int64_t $tmp1090 = $tmp1082.max.value;
            bool $tmp1091 = $tmp1082.inclusive.value;
            if ($tmp1091) goto $l1098; else goto $l1099;
            $l1098:;
            if ($tmp1088 <= $tmp1090) goto $l1092; else goto $l1094;
            $l1099:;
            if ($tmp1088 < $tmp1090) goto $l1092; else goto $l1094;
            $l1092:;
            {
                ITable* $tmp1101 = vtable1037->$class->itable;
                while ($tmp1101->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1101 = $tmp1101->next;
                }
                $fn1103 $tmp1102 = $tmp1101->methods[0];
                panda$core$Object* $tmp1104 = $tmp1102(vtable1037, i1087);
                panda$core$Object* $tmp1105 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1104)));
                m1100 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1105);
                memset(&methodName1106, 0, sizeof(methodName1106));
                if (((panda$core$Bit) { ((panda$core$Object*) m1100->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    {
                        panda$core$String* $tmp1107 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1100, self->wrapperShims);
                        panda$core$Object* $tmp1108 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1107));
                        methodName1106 = ((panda$core$String*) $tmp1108);
                    }
                }
                }
                else {
                {
                    {
                        panda$core$String* $tmp1109 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1100);
                        panda$core$Object* $tmp1110 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1109));
                        methodName1106 = ((panda$core$String*) $tmp1110);
                    }
                    panda$core$Bit $tmp1111 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1100->owner);
                    if ($tmp1111.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1100);
                    }
                    }
                }
                }
                panda$core$String* $tmp1112 = panda$core$String$convert$R$panda$core$String(separator1079);
                panda$core$String* $tmp1114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1112, &$s1113);
                panda$core$String* $tmp1115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1114, methodName1106);
                panda$core$String* $tmp1117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1115, &$s1116);
                panda$core$MutableString$append$panda$core$String(code1058, $tmp1117);
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator1079));
                    panda$core$Object* $tmp1119 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1118));
                    separator1079 = ((panda$core$String*) $tmp1119);
                }
            }
            $l1095:;
            int64_t $tmp1121 = $tmp1090 - i1087.value;
            if ($tmp1091) goto $l1122; else goto $l1123;
            $l1122:;
            if ((uint64_t) $tmp1121 >= 1) goto $l1120; else goto $l1094;
            $l1123:;
            if ((uint64_t) $tmp1121 > 1) goto $l1120; else goto $l1094;
            $l1120:;
            i1087.value += 1;
            goto $l1092;
            $l1094:;
            panda$core$MutableString$append$panda$core$String(code1058, &$s1126);
            panda$core$String* $tmp1127 = panda$core$MutableString$finish$R$panda$core$String(code1058);
            (($fn1128) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1127);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name998), ((panda$core$Object*) result1004));
    }
    }
    return result1004;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1134;
    panda$core$Bit $tmp1129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp1129.value) {
    {
        panda$core$String* $tmp1131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1130, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1131, &$s1132);
        return $tmp1133;
    }
    }
    panda$core$Object* $tmp1135 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    panda$core$Object* $tmp1136 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((panda$core$String*) $tmp1135)));
    result1134 = ((panda$core$String*) $tmp1136);
    if (((panda$core$Bit) { result1134 == NULL }).value) {
    {
        panda$core$Int64 $tmp1137 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1137;
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result1134));
            panda$core$String* $tmp1138 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_v)->name);
            panda$core$String* $tmp1140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1138, &$s1139);
            panda$core$Int64$wrapper* $tmp1141;
            $tmp1141 = (panda$core$Int64$wrapper*) pandaAlloc(24);
            $tmp1141->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1141->refCount = 1;
            $tmp1141->value = self->varCount;
            panda$core$String* $tmp1142 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1140, ((panda$core$Object*) $tmp1141));
            panda$core$String* $tmp1144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1142, &$s1143);
            panda$core$Object* $tmp1145 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1144));
            result1134 = ((panda$core$String*) $tmp1145);
        }
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1134));
    }
    }
    return result1134;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1146 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1146.value);
    panda$core$String* $tmp1147 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1148 = panda$core$String$convert$R$panda$core$String($tmp1147);
    panda$core$String* $tmp1150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1148, &$s1149);
    panda$core$String* $tmp1151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1150, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1151, &$s1152);
    return $tmp1153;
}
org$pandalanguage$pandac$CCodeGenerator$OpClass org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$670_131154;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1156;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1162;
    org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp1164;
    {
        $match$670_131154 = p_t->typeKind;
        panda$core$Bit $tmp1155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$670_131154, ((panda$core$Int64) { 12 }));
        if ($tmp1155.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1156, ((panda$core$Int64) { 0 }));
            return $tmp1156;
        }
        }
        else {
        panda$core$Bit $tmp1158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$670_131154, ((panda$core$Int64) { 13 }));
        bool $tmp1157 = $tmp1158.value;
        if ($tmp1157) goto $l1159;
        panda$core$Bit $tmp1160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$670_131154, ((panda$core$Int64) { 19 }));
        $tmp1157 = $tmp1160.value;
        $l1159:;
        panda$core$Bit $tmp1161 = { $tmp1157 };
        if ($tmp1161.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1162, ((panda$core$Int64) { 1 }));
            return $tmp1162;
        }
        }
        else {
        panda$core$Bit $tmp1163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$670_131154, ((panda$core$Int64) { 20 }));
        if ($tmp1163.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(&$tmp1164, ((panda$core$Int64) { 2 }));
            return $tmp1164;
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
    panda$core$String* result1165;
    panda$core$String* leftRef1168;
    panda$core$String* falseLabel1186;
    panda$core$String* rightRef1197;
    panda$core$String* $tmp1166 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp1167 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1166));
    result1165 = ((panda$core$String*) $tmp1167);
    panda$core$String* $tmp1169 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$Object* $tmp1170 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1169));
    leftRef1168 = ((panda$core$String*) $tmp1170);
    org$pandalanguage$pandac$Type* $tmp1172 = (($fn1171) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1173 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1174 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1172, $tmp1173);
    if ($tmp1174.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) leftRef1168));
            panda$core$String* $tmp1176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1168, &$s1175);
            panda$core$Object* $tmp1177 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1176));
            leftRef1168 = ((panda$core$String*) $tmp1177);
        }
    }
    }
    panda$core$String* $tmp1179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1178, result1165);
    panda$core$String* $tmp1181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1179, &$s1180);
    panda$core$String* $tmp1182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1181, leftRef1168);
    panda$core$String* $tmp1184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1182, &$s1183);
    (($fn1185) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1184);
    panda$core$String* $tmp1187 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp1188 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1187));
    falseLabel1186 = ((panda$core$String*) $tmp1188);
    panda$core$String* $tmp1190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1189, result1165);
    panda$core$String* $tmp1192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1190, &$s1191);
    panda$core$String* $tmp1193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1192, falseLabel1186);
    panda$core$String* $tmp1195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1193, &$s1194);
    (($fn1196) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1195);
    panda$core$String* $tmp1198 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$Object* $tmp1199 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1198));
    rightRef1197 = ((panda$core$String*) $tmp1199);
    org$pandalanguage$pandac$Type* $tmp1201 = (($fn1200) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1202 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1203 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1201, $tmp1202);
    if ($tmp1203.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) rightRef1197));
            panda$core$String* $tmp1205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1197, &$s1204);
            panda$core$Object* $tmp1206 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1205));
            rightRef1197 = ((panda$core$String*) $tmp1206);
        }
    }
    }
    panda$core$String* $tmp1207 = panda$core$String$convert$R$panda$core$String(result1165);
    panda$core$String* $tmp1209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1207, &$s1208);
    panda$core$String* $tmp1210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1209, rightRef1197);
    panda$core$String* $tmp1212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1210, &$s1211);
    (($fn1213) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1212);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1186, p_out);
    return result1165;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1214;
    panda$core$String* leftRef1217;
    panda$core$String* trueLabel1235;
    panda$core$String* rightRef1246;
    panda$core$String* $tmp1215 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp1216 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1215));
    result1214 = ((panda$core$String*) $tmp1216);
    panda$core$String* $tmp1218 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$Object* $tmp1219 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1218));
    leftRef1217 = ((panda$core$String*) $tmp1219);
    org$pandalanguage$pandac$Type* $tmp1221 = (($fn1220) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1222 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1223 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1221, $tmp1222);
    if ($tmp1223.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) leftRef1217));
            panda$core$String* $tmp1225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1217, &$s1224);
            panda$core$Object* $tmp1226 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1225));
            leftRef1217 = ((panda$core$String*) $tmp1226);
        }
    }
    }
    panda$core$String* $tmp1228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1227, result1214);
    panda$core$String* $tmp1230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1228, &$s1229);
    panda$core$String* $tmp1231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1230, leftRef1217);
    panda$core$String* $tmp1233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1231, &$s1232);
    (($fn1234) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1233);
    panda$core$String* $tmp1236 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp1237 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1236));
    trueLabel1235 = ((panda$core$String*) $tmp1237);
    panda$core$String* $tmp1239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1238, result1214);
    panda$core$String* $tmp1241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1239, &$s1240);
    panda$core$String* $tmp1242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1241, trueLabel1235);
    panda$core$String* $tmp1244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1242, &$s1243);
    (($fn1245) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1244);
    panda$core$String* $tmp1247 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$Object* $tmp1248 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1247));
    rightRef1246 = ((panda$core$String*) $tmp1248);
    org$pandalanguage$pandac$Type* $tmp1250 = (($fn1249) p_right->$class->vtable[2])(p_right);
    org$pandalanguage$pandac$Type* $tmp1251 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1252 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1250, $tmp1251);
    if ($tmp1252.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) rightRef1246));
            panda$core$String* $tmp1254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1246, &$s1253);
            panda$core$Object* $tmp1255 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1254));
            rightRef1246 = ((panda$core$String*) $tmp1255);
        }
    }
    }
    panda$core$String* $tmp1256 = panda$core$String$convert$R$panda$core$String(result1214);
    panda$core$String* $tmp1258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1256, &$s1257);
    panda$core$String* $tmp1259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1258, rightRef1246);
    panda$core$String* $tmp1261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1259, &$s1260);
    (($fn1262) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1261);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1235, p_out);
    return result1214;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, org$pandalanguage$pandac$parser$Token$Kind p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1263;
    panda$core$Bit logical1264;
    org$pandalanguage$pandac$parser$Token$Kind $match$721_91265;
    panda$core$String* result1321;
    memset(&cOp1263, 0, sizeof(cOp1263));
    logical1264 = ((panda$core$Bit) { false });
    {
        $match$721_91265 = p_op;
        panda$core$Bit $tmp1266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp1266.value) {
        {
            {
                panda$core$Object* $tmp1268 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1267));
                cOp1263 = ((panda$core$String*) $tmp1268);
            }
        }
        }
        else {
        panda$core$Bit $tmp1269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp1269.value) {
        {
            {
                panda$core$Object* $tmp1271 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1270));
                cOp1263 = ((panda$core$String*) $tmp1271);
            }
        }
        }
        else {
        panda$core$Bit $tmp1272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp1272.value) {
        {
            {
                panda$core$Object* $tmp1274 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1273));
                cOp1263 = ((panda$core$String*) $tmp1274);
            }
        }
        }
        else {
        panda$core$Bit $tmp1275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp1275.value) {
        {
            {
                panda$core$Object* $tmp1277 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1276));
                cOp1263 = ((panda$core$String*) $tmp1277);
            }
        }
        }
        else {
        panda$core$Bit $tmp1278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp1278.value) {
        {
            {
                panda$core$Object* $tmp1280 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1279));
                cOp1263 = ((panda$core$String*) $tmp1280);
            }
        }
        }
        else {
        panda$core$Bit $tmp1281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp1281.value) {
        {
            {
                panda$core$Object* $tmp1283 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1282));
                cOp1263 = ((panda$core$String*) $tmp1283);
            }
        }
        }
        else {
        panda$core$Bit $tmp1284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp1284.value) {
        {
            {
                panda$core$Object* $tmp1286 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1285));
                cOp1263 = ((panda$core$String*) $tmp1286);
            }
        }
        }
        else {
        panda$core$Bit $tmp1287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1287.value) {
        {
            {
                panda$core$Object* $tmp1289 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1288));
                cOp1263 = ((panda$core$String*) $tmp1289);
            }
        }
        }
        else {
        panda$core$Bit $tmp1290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp1290.value) {
        {
            {
                panda$core$Object* $tmp1292 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1291));
                cOp1263 = ((panda$core$String*) $tmp1292);
            }
        }
        }
        else {
        panda$core$Bit $tmp1293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp1293.value) {
        {
            {
                panda$core$Object* $tmp1295 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1294));
                cOp1263 = ((panda$core$String*) $tmp1295);
            }
        }
        }
        else {
        panda$core$Bit $tmp1297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 70 }));
        bool $tmp1296 = $tmp1297.value;
        if ($tmp1296) goto $l1298;
        panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp1296 = $tmp1299.value;
        $l1298:;
        panda$core$Bit $tmp1300 = { $tmp1296 };
        if ($tmp1300.value) {
        {
            {
                panda$core$Object* $tmp1302 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1301));
                cOp1263 = ((panda$core$String*) $tmp1302);
            }
        }
        }
        else {
        panda$core$Bit $tmp1303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1303.value) {
        {
            {
                panda$core$Object* $tmp1305 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1304));
                cOp1263 = ((panda$core$String*) $tmp1305);
            }
            logical1264 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp1306.value) {
        {
            {
                panda$core$Object* $tmp1308 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1307));
                cOp1263 = ((panda$core$String*) $tmp1308);
            }
            logical1264 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp1309.value) {
        {
            {
                panda$core$Object* $tmp1311 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1310));
                cOp1263 = ((panda$core$String*) $tmp1311);
            }
            logical1264 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1312.value) {
        {
            {
                panda$core$Object* $tmp1314 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1313));
                cOp1263 = ((panda$core$String*) $tmp1314);
            }
            logical1264 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp1315.value) {
        {
            {
                panda$core$Object* $tmp1317 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1316));
                cOp1263 = ((panda$core$String*) $tmp1317);
            }
            logical1264 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$721_91265.$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp1318.value) {
        {
            logical1264 = ((panda$core$Bit) { true });
            {
                panda$core$Object* $tmp1320 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1319));
                cOp1263 = ((panda$core$String*) $tmp1320);
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
    panda$core$String* $tmp1322 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp1323 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1322));
    result1321 = ((panda$core$String*) $tmp1323);
    if (logical1264.value) {
    {
        (($fn1325) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1324);
    }
    }
    else {
    {
        panda$core$String* $tmp1326 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1327 = panda$core$String$convert$R$panda$core$String($tmp1326);
        panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1327, &$s1328);
        (($fn1330) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1329);
    }
    }
    panda$core$String* $tmp1331 = panda$core$String$convert$R$panda$core$String(result1321);
    panda$core$String* $tmp1333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, &$s1332);
    panda$core$String* $tmp1334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1333, p_leftRef);
    panda$core$String* $tmp1336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1334, &$s1335);
    panda$core$String* $tmp1337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1336, cOp1263);
    panda$core$String* $tmp1339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1337, &$s1338);
    panda$core$String* $tmp1340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1339, p_rightRef);
    panda$core$String* $tmp1342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1340, &$s1341);
    (($fn1343) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1342);
    return result1321;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1344;
    panda$core$String* rightRef1347;
    panda$core$String* $tmp1345 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$Object* $tmp1346 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1345));
    leftRef1344 = ((panda$core$String*) $tmp1346);
    panda$core$String* $tmp1348 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$Object* $tmp1349 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1348));
    rightRef1347 = ((panda$core$String*) $tmp1349);
    panda$core$String* $tmp1351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1350, leftRef1344);
    panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1351, &$s1352);
    panda$core$String* $tmp1354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1353, rightRef1347);
    panda$core$String* $tmp1356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1354, &$s1355);
    return $tmp1356;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1357;
    panda$core$String* rightRef1360;
    panda$core$String* $tmp1358 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$Object* $tmp1359 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1358));
    leftRef1357 = ((panda$core$String*) $tmp1359);
    panda$core$String* $tmp1361 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$Object* $tmp1362 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1361));
    rightRef1360 = ((panda$core$String*) $tmp1362);
    panda$core$String* $tmp1364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1363, leftRef1357);
    panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1364, &$s1365);
    panda$core$String* $tmp1367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1366, rightRef1360);
    panda$core$String* $tmp1369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1367, &$s1368);
    return $tmp1369;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$parser$Token$Kind $match$791_91375;
    panda$core$String* leftRef1384;
    panda$core$String* rightRef1387;
    org$pandalanguage$pandac$Type* $tmp1371 = (($fn1370) p_left->$class->vtable[2])(p_left);
    org$pandalanguage$pandac$Type* $tmp1373 = (($fn1372) p_right->$class->vtable[2])(p_right);
    panda$core$Bit $tmp1374 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1371, $tmp1373);
    PANDA_ASSERT($tmp1374.value);
    {
        $match$791_91375 = p_op;
        panda$core$Bit $tmp1376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$791_91375.$rawValue, ((panda$core$Int64) { 66 }));
        if ($tmp1376.value) {
        {
            panda$core$String* $tmp1377 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1377;
        }
        }
        else {
        panda$core$Bit $tmp1378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$791_91375.$rawValue, ((panda$core$Int64) { 68 }));
        if ($tmp1378.value) {
        {
            panda$core$String* $tmp1379 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1379;
        }
        }
        else {
        panda$core$Bit $tmp1380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$791_91375.$rawValue, ((panda$core$Int64) { 60 }));
        if ($tmp1380.value) {
        {
            panda$core$String* $tmp1381 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1381;
        }
        }
        else {
        panda$core$Bit $tmp1382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$791_91375.$rawValue, ((panda$core$Int64) { 61 }));
        if ($tmp1382.value) {
        {
            panda$core$String* $tmp1383 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1383;
        }
        }
        else {
        {
            panda$core$String* $tmp1385 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            panda$core$Object* $tmp1386 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1385));
            leftRef1384 = ((panda$core$String*) $tmp1386);
            panda$core$String* $tmp1388 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            panda$core$Object* $tmp1389 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1388));
            rightRef1387 = ((panda$core$String*) $tmp1389);
            org$pandalanguage$pandac$Type* $tmp1391 = (($fn1390) p_left->$class->vtable[2])(p_left);
            panda$core$String* $tmp1392 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1391, leftRef1384, p_op, rightRef1387, p_out);
            return $tmp1392;
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1393;
    panda$core$Int64 index1396;
    panda$collections$ListView* vtable1397;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1400;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1394 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    panda$core$Object* $tmp1395 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1394));
    cc1393 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1395);
    index1396 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1398 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    panda$core$Object* $tmp1399 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1398));
    vtable1397 = ((panda$collections$ListView*) $tmp1399);
    ITable* $tmp1401 = ((panda$collections$CollectionView*) vtable1397)->$class->itable;
    while ($tmp1401->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1401 = $tmp1401->next;
    }
    $fn1403 $tmp1402 = $tmp1401->methods[0];
    panda$core$Int64 $tmp1404 = $tmp1402(((panda$collections$CollectionView*) vtable1397));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1400, ((panda$core$Int64) { 0 }), $tmp1404, ((panda$core$Bit) { false }));
    int64_t $tmp1406 = $tmp1400.min.value;
    panda$core$Int64 i1405 = { $tmp1406 };
    int64_t $tmp1408 = $tmp1400.max.value;
    bool $tmp1409 = $tmp1400.inclusive.value;
    if ($tmp1409) goto $l1416; else goto $l1417;
    $l1416:;
    if ($tmp1406 <= $tmp1408) goto $l1410; else goto $l1412;
    $l1417:;
    if ($tmp1406 < $tmp1408) goto $l1410; else goto $l1412;
    $l1410:;
    {
        ITable* $tmp1418 = vtable1397->$class->itable;
        while ($tmp1418->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1418 = $tmp1418->next;
        }
        $fn1420 $tmp1419 = $tmp1418->methods[0];
        panda$core$Object* $tmp1421 = $tmp1419(vtable1397, i1405);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1421)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1396 = i1405;
            goto $l1412;
        }
        }
    }
    $l1413:;
    int64_t $tmp1423 = $tmp1408 - i1405.value;
    if ($tmp1409) goto $l1424; else goto $l1425;
    $l1424:;
    if ((uint64_t) $tmp1423 >= 1) goto $l1422; else goto $l1412;
    $l1425:;
    if ((uint64_t) $tmp1423 > 1) goto $l1422; else goto $l1412;
    $l1422:;
    i1405.value += 1;
    goto $l1410;
    $l1412:;
    panda$core$Bit $tmp1428 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1396, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1428.value);
    org$pandalanguage$pandac$Type* $tmp1430 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1431 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1430);
    panda$core$String* $tmp1432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1429, $tmp1431);
    panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1432, &$s1433);
    panda$core$String* $tmp1435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, p_target);
    panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1435, &$s1436);
    panda$core$Int64$wrapper* $tmp1438;
    $tmp1438 = (panda$core$Int64$wrapper*) pandaAlloc(24);
    $tmp1438->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1438->refCount = 1;
    $tmp1438->value = index1396;
    panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1437, ((panda$core$Object*) $tmp1438));
    panda$core$String* $tmp1441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1439, &$s1440);
    return $tmp1441;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1442;
    panda$core$String* itable1445;
    panda$core$Int64 index1475;
    panda$collections$ListView* vtable1476;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1479;
    panda$core$String* result1516;
    panda$core$String* methodType1519;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1443 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    panda$core$Object* $tmp1444 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1443));
    cc1442 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1444);
    panda$core$String* $tmp1446 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp1447 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1446));
    itable1445 = ((panda$core$String*) $tmp1447);
    panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1448, itable1445);
    panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1449, &$s1450);
    panda$core$String* $tmp1452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1451, p_target);
    panda$core$String* $tmp1454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1452, &$s1453);
    (($fn1455) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1454);
    panda$core$String* $tmp1457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1456, itable1445);
    panda$core$String* $tmp1459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1457, &$s1458);
    panda$core$String* $tmp1460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1459, cc1442->name);
    panda$core$String* $tmp1462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1460, &$s1461);
    (($fn1463) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1462);
    panda$core$Int64 $tmp1464 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1464;
    panda$core$String* $tmp1465 = panda$core$String$convert$R$panda$core$String(itable1445);
    panda$core$String* $tmp1467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1465, &$s1466);
    panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1467, itable1445);
    panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1468, &$s1469);
    (($fn1471) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1470);
    panda$core$Int64 $tmp1472 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1472;
    (($fn1474) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1473);
    index1475 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1477 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    panda$core$Object* $tmp1478 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1477));
    vtable1476 = ((panda$collections$ListView*) $tmp1478);
    ITable* $tmp1480 = ((panda$collections$CollectionView*) vtable1476)->$class->itable;
    while ($tmp1480->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1480 = $tmp1480->next;
    }
    $fn1482 $tmp1481 = $tmp1480->methods[0];
    panda$core$Int64 $tmp1483 = $tmp1481(((panda$collections$CollectionView*) vtable1476));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1479, ((panda$core$Int64) { 0 }), $tmp1483, ((panda$core$Bit) { false }));
    int64_t $tmp1485 = $tmp1479.min.value;
    panda$core$Int64 i1484 = { $tmp1485 };
    int64_t $tmp1487 = $tmp1479.max.value;
    bool $tmp1488 = $tmp1479.inclusive.value;
    if ($tmp1488) goto $l1495; else goto $l1496;
    $l1495:;
    if ($tmp1485 <= $tmp1487) goto $l1489; else goto $l1491;
    $l1496:;
    if ($tmp1485 < $tmp1487) goto $l1489; else goto $l1491;
    $l1489:;
    {
        ITable* $tmp1497 = vtable1476->$class->itable;
        while ($tmp1497->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1497 = $tmp1497->next;
        }
        $fn1499 $tmp1498 = $tmp1497->methods[0];
        panda$core$Object* $tmp1500 = $tmp1498(vtable1476, i1484);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1500)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1475 = i1484;
            goto $l1491;
        }
        }
    }
    $l1492:;
    int64_t $tmp1502 = $tmp1487 - i1484.value;
    if ($tmp1488) goto $l1503; else goto $l1504;
    $l1503:;
    if ((uint64_t) $tmp1502 >= 1) goto $l1501; else goto $l1491;
    $l1504:;
    if ((uint64_t) $tmp1502 > 1) goto $l1501; else goto $l1491;
    $l1501:;
    i1484.value += 1;
    goto $l1489;
    $l1491:;
    org$pandalanguage$pandac$Type* $tmp1507 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1508 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1507);
    panda$collections$ListView* $tmp1509 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1508);
    ITable* $tmp1510 = ((panda$collections$CollectionView*) $tmp1509)->$class->itable;
    while ($tmp1510->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1510 = $tmp1510->next;
    }
    $fn1512 $tmp1511 = $tmp1510->methods[0];
    panda$core$Int64 $tmp1513 = $tmp1511(((panda$collections$CollectionView*) $tmp1509));
    panda$core$Int64 $tmp1514 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1475, $tmp1513);
    index1475 = $tmp1514;
    panda$core$Bit $tmp1515 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1475, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1515.value);
    panda$core$String* $tmp1517 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp1518 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1517));
    result1516 = ((panda$core$String*) $tmp1518);
    org$pandalanguage$pandac$Type* $tmp1520 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1521 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1520);
    panda$core$Object* $tmp1522 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1521));
    methodType1519 = ((panda$core$String*) $tmp1522);
    panda$core$String* $tmp1523 = panda$core$String$convert$R$panda$core$String(methodType1519);
    panda$core$String* $tmp1525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1523, &$s1524);
    panda$core$String* $tmp1526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1525, result1516);
    panda$core$String* $tmp1528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1526, &$s1527);
    panda$core$String* $tmp1529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1528, itable1445);
    panda$core$String* $tmp1531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1529, &$s1530);
    panda$core$Int64$wrapper* $tmp1532;
    $tmp1532 = (panda$core$Int64$wrapper*) pandaAlloc(24);
    $tmp1532->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1532->refCount = 1;
    $tmp1532->value = index1475;
    panda$core$String* $tmp1533 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1531, ((panda$core$Object*) $tmp1532));
    panda$core$String* $tmp1535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1533, &$s1534);
    (($fn1536) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1535);
    return result1516;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1538 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1537 = $tmp1538.value;
    if (!$tmp1537) goto $l1539;
    panda$core$Bit $tmp1540 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1537 = $tmp1540.value;
    $l1539:;
    panda$core$Bit $tmp1541 = { $tmp1537 };
    if ($tmp1541.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1542.value) {
        {
            panda$core$String* $tmp1543 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1543;
        }
        }
        else {
        {
            panda$core$String* $tmp1544 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1544;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1545 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1545.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1546 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1546;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$864_91547;
    panda$core$String* count1552;
    panda$core$Int64 elementSize1559;
    panda$core$String* ptr1579;
    panda$core$String* ptr1591;
    panda$core$String* index1595;
    panda$core$String* ptr1609;
    panda$core$String* oldCount1613;
    panda$core$String* newCount1617;
    panda$core$Int64 elementSize1624;
    panda$core$String* ptr1655;
    panda$core$String* offset1659;
    {
        $match$864_91547 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp1549 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$864_91547, &$s1548);
        if ($tmp1549.value) {
        {
            panda$core$Int64 $tmp1550 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1550, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1551.value);
            panda$core$Object* $tmp1553 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1554 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1553), p_out);
            panda$core$Object* $tmp1555 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1554));
            count1552 = ((panda$core$String*) $tmp1555);
            org$pandalanguage$pandac$Type* $tmp1556 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1557 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1556->subtypes);
            panda$core$Bit $tmp1558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1557, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1558.value);
            org$pandalanguage$pandac$Type* $tmp1560 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1561 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1560->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1562 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1561));
            elementSize1559 = $tmp1562;
            panda$core$String* $tmp1564 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp1565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1563, $tmp1564);
            panda$core$String* $tmp1567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1565, &$s1566);
            panda$core$String* $tmp1568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1567, count1552);
            panda$core$String* $tmp1570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1568, &$s1569);
            panda$core$Int64$wrapper* $tmp1571;
            $tmp1571 = (panda$core$Int64$wrapper*) pandaAlloc(24);
            $tmp1571->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1571->refCount = 1;
            $tmp1571->value = elementSize1559;
            panda$core$String* $tmp1572 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1570, ((panda$core$Object*) $tmp1571));
            panda$core$String* $tmp1574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1572, &$s1573);
            return $tmp1574;
        }
        }
        else {
        panda$core$Bit $tmp1576 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$864_91547, &$s1575);
        if ($tmp1576.value) {
        {
            panda$core$Int64 $tmp1577 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1577, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1578.value);
            panda$core$Object* $tmp1580 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1581 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1580), p_out);
            panda$core$Object* $tmp1582 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1581));
            ptr1579 = ((panda$core$String*) $tmp1582);
            panda$core$String* $tmp1584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1583, ptr1579);
            panda$core$String* $tmp1586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1584, &$s1585);
            return $tmp1586;
        }
        }
        else {
        panda$core$Bit $tmp1588 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$864_91547, &$s1587);
        if ($tmp1588.value) {
        {
            panda$core$Int64 $tmp1589 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1589, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1590.value);
            panda$core$Object* $tmp1592 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1593 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1592), p_out);
            panda$core$Object* $tmp1594 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1593));
            ptr1591 = ((panda$core$String*) $tmp1594);
            panda$core$Object* $tmp1596 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1597 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1596), p_out);
            panda$core$Object* $tmp1598 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1597));
            index1595 = ((panda$core$String*) $tmp1598);
            panda$core$String* $tmp1599 = panda$core$String$convert$R$panda$core$String(ptr1591);
            panda$core$String* $tmp1601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1599, &$s1600);
            panda$core$String* $tmp1602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1601, index1595);
            panda$core$String* $tmp1604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1602, &$s1603);
            return $tmp1604;
        }
        }
        else {
        panda$core$Bit $tmp1606 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$864_91547, &$s1605);
        if ($tmp1606.value) {
        {
            panda$core$Int64 $tmp1607 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1607, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp1608.value);
            panda$core$Object* $tmp1610 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1611 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1610), p_out);
            panda$core$Object* $tmp1612 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1611));
            ptr1609 = ((panda$core$String*) $tmp1612);
            panda$core$Object* $tmp1614 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1615 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1614), p_out);
            panda$core$Object* $tmp1616 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1615));
            oldCount1613 = ((panda$core$String*) $tmp1616);
            panda$core$Object* $tmp1618 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp1619 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1618), p_out);
            panda$core$Object* $tmp1620 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1619));
            newCount1617 = ((panda$core$String*) $tmp1620);
            org$pandalanguage$pandac$Type* $tmp1621 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Int64 $tmp1622 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1621->subtypes);
            panda$core$Bit $tmp1623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1622, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1623.value);
            org$pandalanguage$pandac$Type* $tmp1625 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
            panda$core$Object* $tmp1626 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1625->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1627 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1626));
            elementSize1624 = $tmp1627;
            panda$core$String* $tmp1629 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$String* $tmp1630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1628, $tmp1629);
            panda$core$String* $tmp1632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1630, &$s1631);
            panda$core$String* $tmp1633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1632, ptr1609);
            panda$core$String* $tmp1635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1633, &$s1634);
            panda$core$String* $tmp1636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1635, oldCount1613);
            panda$core$String* $tmp1638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1636, &$s1637);
            panda$core$Int64$wrapper* $tmp1639;
            $tmp1639 = (panda$core$Int64$wrapper*) pandaAlloc(24);
            $tmp1639->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1639->refCount = 1;
            $tmp1639->value = elementSize1624;
            panda$core$String* $tmp1640 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1638, ((panda$core$Object*) $tmp1639));
            panda$core$String* $tmp1642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1640, &$s1641);
            panda$core$String* $tmp1643 = panda$core$String$convert$R$panda$core$String(newCount1617);
            panda$core$String* $tmp1645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1643, &$s1644);
            panda$core$Int64$wrapper* $tmp1646;
            $tmp1646 = (panda$core$Int64$wrapper*) pandaAlloc(24);
            $tmp1646->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1646->refCount = 1;
            $tmp1646->value = elementSize1624;
            panda$core$String* $tmp1647 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1645, ((panda$core$Object*) $tmp1646));
            panda$core$String* $tmp1649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1647, &$s1648);
            panda$core$String* $tmp1650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1642, $tmp1649);
            return $tmp1650;
        }
        }
        else {
        panda$core$Bit $tmp1652 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$864_91547, &$s1651);
        if ($tmp1652.value) {
        {
            panda$core$Int64 $tmp1653 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1653, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1654.value);
            panda$core$Object* $tmp1656 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1657 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1656), p_out);
            panda$core$Object* $tmp1658 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1657));
            ptr1655 = ((panda$core$String*) $tmp1658);
            panda$core$Object* $tmp1660 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1661 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1660), p_out);
            panda$core$Object* $tmp1662 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1661));
            offset1659 = ((panda$core$String*) $tmp1662);
            panda$core$String* $tmp1664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1663, ptr1655);
            panda$core$String* $tmp1666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1664, &$s1665);
            panda$core$String* $tmp1667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1666, offset1659);
            panda$core$String* $tmp1669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1667, &$s1668);
            return $tmp1669;
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
    org$pandalanguage$pandac$MethodDecl* m1670;
    panda$core$String* bit1682;
    panda$core$String* result1687;
    panda$core$String* bit1702;
    panda$core$String* result1707;
    panda$collections$Array* argRefs1718;
    org$pandalanguage$pandac$Type* actualMethodType1723;
    panda$core$String* actualResultType1724;
    panda$core$Bit isSuper1725;
    panda$core$Int64 offset1749;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1754;
    panda$core$String* arg1769;
    panda$core$String* target1796;
    panda$core$String* methodRef1802;
    panda$core$Bit indirect1805;
    panda$core$String* result1807;
    panda$core$String* separator1810;
    panda$core$String* indirectVar1813;
    panda$collections$Iterator* arg$Iter1840;
    panda$core$String* arg1852;
    panda$core$Object* $tmp1671 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_mref->value));
    m1670 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1671);
    panda$core$Bit $tmp1673 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1670->owner)->name, &$s1672);
    if ($tmp1673.value) {
    {
        panda$core$String* $tmp1674 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, p_t, p_mref, p_args, p_out);
        return $tmp1674;
    }
    }
    panda$core$Bit $tmp1675 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1670->owner);
    if ($tmp1675.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1670);
    }
    }
    panda$core$Bit $tmp1677 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1670->owner)->name, &$s1676);
    if ($tmp1677.value) {
    {
        panda$core$Bit $tmp1679 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1670)->name, &$s1678);
        if ($tmp1679.value) {
        {
            panda$core$Int64 $tmp1680 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1680, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1681.value);
            panda$core$Object* $tmp1683 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1684 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1685 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1683), ((org$pandalanguage$pandac$IRNode*) $tmp1684), p_out);
            panda$core$Object* $tmp1686 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1685));
            bit1682 = ((panda$core$String*) $tmp1686);
            panda$core$String* $tmp1688 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            panda$core$Object* $tmp1689 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1688));
            result1687 = ((panda$core$String*) $tmp1689);
            panda$core$String* $tmp1691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1690, result1687);
            panda$core$String* $tmp1693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1691, &$s1692);
            panda$core$String* $tmp1694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1693, bit1682);
            panda$core$String* $tmp1696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1694, &$s1695);
            (($fn1697) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1696);
            return result1687;
        }
        }
        panda$core$Bit $tmp1699 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1670)->name, &$s1698);
        if ($tmp1699.value) {
        {
            panda$core$Int64 $tmp1700 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp1701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1700, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1701.value);
            panda$core$Object* $tmp1703 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1704 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1705 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1703), ((org$pandalanguage$pandac$IRNode*) $tmp1704), p_out);
            panda$core$Object* $tmp1706 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1705));
            bit1702 = ((panda$core$String*) $tmp1706);
            panda$core$String* $tmp1708 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            panda$core$Object* $tmp1709 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1708));
            result1707 = ((panda$core$String*) $tmp1709);
            panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1710, result1707);
            panda$core$String* $tmp1713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1711, &$s1712);
            panda$core$String* $tmp1714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1713, bit1702);
            panda$core$String* $tmp1716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1714, &$s1715);
            (($fn1717) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1716);
            return result1707;
        }
        }
    }
    }
    panda$collections$Array* $tmp1719 = (panda$collections$Array*) pandaAlloc(41);
    $tmp1719->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1719->refCount.value = 1;
    panda$core$Int64 $tmp1721 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$collections$Array$init$panda$core$Int64($tmp1719, $tmp1721);
    panda$core$Object* $tmp1722 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1719));
    argRefs1718 = ((panda$collections$Array*) $tmp1722);
    memset(&actualMethodType1723, 0, sizeof(actualMethodType1723));
    memset(&actualResultType1724, 0, sizeof(actualResultType1724));
    panda$core$Int64 $tmp1727 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp1728 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1727, ((panda$core$Int64) { 1 }));
    bool $tmp1726 = $tmp1728.value;
    if (!$tmp1726) goto $l1729;
    panda$core$Object* $tmp1730 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1730)->$rawValue, ((panda$core$Int64) { 32 }));
    $tmp1726 = $tmp1731.value;
    $l1729:;
    panda$core$Bit $tmp1732 = { $tmp1726 };
    isSuper1725 = $tmp1732;
    panda$core$Bit $tmp1734 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1725);
    bool $tmp1733 = $tmp1734.value;
    if (!$tmp1733) goto $l1735;
    panda$core$Bit $tmp1736 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1670);
    $tmp1733 = $tmp1736.value;
    $l1735:;
    panda$core$Bit $tmp1737 = { $tmp1733 };
    if ($tmp1737.value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp1738 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1670);
            panda$core$Object* $tmp1739 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1738));
            actualMethodType1723 = ((org$pandalanguage$pandac$Type*) $tmp1739);
        }
        {
            panda$core$Int64 $tmp1740 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1723->subtypes);
            panda$core$Int64 $tmp1741 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1740, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp1742 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1723->subtypes, $tmp1741);
            panda$core$String* $tmp1743 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1742));
            panda$core$Object* $tmp1744 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1743));
            actualResultType1724 = ((panda$core$String*) $tmp1744);
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp1745 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1670);
            panda$core$Object* $tmp1746 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1745));
            actualMethodType1723 = ((org$pandalanguage$pandac$Type*) $tmp1746);
        }
        {
            panda$core$String* $tmp1747 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$Object* $tmp1748 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1747));
            actualResultType1724 = ((panda$core$String*) $tmp1748);
        }
    }
    }
    panda$core$Int64 $tmp1750 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp1751 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1723->subtypes);
    panda$core$Int64 $tmp1752 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1750, $tmp1751);
    panda$core$Int64 $tmp1753 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1752, ((panda$core$Int64) { 1 }));
    offset1749 = $tmp1753;
    panda$core$Int64 $tmp1755 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1754, ((panda$core$Int64) { 0 }), $tmp1755, ((panda$core$Bit) { false }));
    int64_t $tmp1757 = $tmp1754.min.value;
    panda$core$Int64 i1756 = { $tmp1757 };
    int64_t $tmp1759 = $tmp1754.max.value;
    bool $tmp1760 = $tmp1754.inclusive.value;
    if ($tmp1760) goto $l1767; else goto $l1768;
    $l1767:;
    if ($tmp1757 <= $tmp1759) goto $l1761; else goto $l1763;
    $l1768:;
    if ($tmp1757 < $tmp1759) goto $l1761; else goto $l1763;
    $l1761:;
    {
        panda$core$Object* $tmp1770 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1756);
        panda$core$String* $tmp1771 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1770), p_out);
        panda$core$Object* $tmp1772 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1771));
        arg1769 = ((panda$core$String*) $tmp1772);
        panda$core$Bit $tmp1774 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1756, offset1749);
        bool $tmp1773 = $tmp1774.value;
        if (!$tmp1773) goto $l1775;
        panda$core$Int64 $tmp1776 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1756, offset1749);
        panda$core$Object* $tmp1777 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1723->subtypes, $tmp1776);
        panda$core$Object* $tmp1778 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1756);
        org$pandalanguage$pandac$Type* $tmp1780 = (($fn1779) ((org$pandalanguage$pandac$IRNode*) $tmp1778)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1778));
        panda$core$Bit $tmp1781 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1777), $tmp1780);
        $tmp1773 = $tmp1781.value;
        $l1775:;
        panda$core$Bit $tmp1782 = { $tmp1773 };
        if ($tmp1782.value) {
        {
            {
                panda$core$Object* $tmp1783 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i1756);
                org$pandalanguage$pandac$Type* $tmp1785 = (($fn1784) ((org$pandalanguage$pandac$IRNode*) $tmp1783)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp1783));
                panda$core$Int64 $tmp1786 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1756, offset1749);
                panda$core$Object* $tmp1787 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1723->subtypes, $tmp1786);
                panda$core$String* $tmp1788 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1769, $tmp1785, ((org$pandalanguage$pandac$Type*) $tmp1787), p_out);
                panda$core$Object* $tmp1789 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1788));
                arg1769 = ((panda$core$String*) $tmp1789);
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs1718, ((panda$core$Object*) arg1769));
    }
    $l1764:;
    int64_t $tmp1791 = $tmp1759 - i1756.value;
    if ($tmp1760) goto $l1792; else goto $l1793;
    $l1792:;
    if ((uint64_t) $tmp1791 >= 1) goto $l1790; else goto $l1763;
    $l1793:;
    if ((uint64_t) $tmp1791 > 1) goto $l1790; else goto $l1763;
    $l1790:;
    i1756.value += 1;
    goto $l1761;
    $l1763:;
    memset(&target1796, 0, sizeof(target1796));
    panda$core$Int64 $tmp1797 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs1718);
    panda$core$Bit $tmp1798 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1797, ((panda$core$Int64) { 0 }));
    if ($tmp1798.value) {
    {
        {
            panda$core$Object* $tmp1799 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs1718, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1800 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((panda$core$String*) $tmp1799)));
            target1796 = ((panda$core$String*) $tmp1800);
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp1801 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
            target1796 = ((panda$core$String*) $tmp1801);
        }
    }
    }
    panda$core$String* $tmp1803 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1796, m1670, isSuper1725, p_out);
    panda$core$Object* $tmp1804 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1803));
    methodRef1802 = ((panda$core$String*) $tmp1804);
    panda$core$Bit $tmp1806 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1670);
    indirect1805 = $tmp1806;
    panda$core$String* $tmp1808 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp1809 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1808));
    result1807 = ((panda$core$String*) $tmp1809);
    panda$core$Object* $tmp1812 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1811));
    separator1810 = ((panda$core$String*) $tmp1812);
    memset(&indirectVar1813, 0, sizeof(indirectVar1813));
    if (indirect1805.value) {
    {
        panda$core$String* $tmp1814 = panda$core$String$convert$R$panda$core$String(actualResultType1724);
        panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1814, &$s1815);
        panda$core$String* $tmp1817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1816, result1807);
        panda$core$String* $tmp1819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1817, &$s1818);
        (($fn1820) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1819);
        panda$core$String* $tmp1821 = panda$core$String$convert$R$panda$core$String(methodRef1802);
        panda$core$String* $tmp1823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1821, &$s1822);
        panda$core$String* $tmp1824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1823, result1807);
        panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1824, &$s1825);
        (($fn1827) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1826);
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator1810));
            panda$core$Object* $tmp1829 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1828));
            separator1810 = ((panda$core$String*) $tmp1829);
        }
    }
    }
    else {
    {
        panda$core$String* $tmp1830 = panda$core$String$convert$R$panda$core$String(actualResultType1724);
        panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, &$s1831);
        panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1832, result1807);
        panda$core$String* $tmp1835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1833, &$s1834);
        panda$core$String* $tmp1836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1835, methodRef1802);
        panda$core$String* $tmp1838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1836, &$s1837);
        (($fn1839) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1838);
    }
    }
    {
        ITable* $tmp1841 = ((panda$collections$Iterable*) argRefs1718)->$class->itable;
        while ($tmp1841->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1841 = $tmp1841->next;
        }
        $fn1843 $tmp1842 = $tmp1841->methods[0];
        panda$collections$Iterator* $tmp1844 = $tmp1842(((panda$collections$Iterable*) argRefs1718));
        arg$Iter1840 = $tmp1844;
        $l1845:;
        ITable* $tmp1847 = arg$Iter1840->$class->itable;
        while ($tmp1847->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1847 = $tmp1847->next;
        }
        $fn1849 $tmp1848 = $tmp1847->methods[0];
        panda$core$Bit $tmp1850 = $tmp1848(arg$Iter1840);
        panda$core$Bit $tmp1851 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1850);
        if (!$tmp1851.value) goto $l1846;
        {
            ITable* $tmp1853 = arg$Iter1840->$class->itable;
            while ($tmp1853->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1853 = $tmp1853->next;
            }
            $fn1855 $tmp1854 = $tmp1853->methods[1];
            panda$core$Object* $tmp1856 = $tmp1854(arg$Iter1840);
            arg1852 = ((panda$core$String*) $tmp1856);
            panda$core$String* $tmp1857 = panda$core$String$convert$R$panda$core$String(separator1810);
            panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1857, &$s1858);
            panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, arg1852);
            panda$core$String* $tmp1862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, &$s1861);
            (($fn1863) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1862);
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator1810));
                panda$core$Object* $tmp1865 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1864));
                separator1810 = ((panda$core$String*) $tmp1865);
            }
        }
        goto $l1845;
        $l1846:;
    }
    (($fn1867) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1866);
    panda$core$String* $tmp1868 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$Bit $tmp1869 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1868, actualResultType1724);
    if ($tmp1869.value) {
    {
        panda$core$Int64 $tmp1870 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1723->subtypes);
        panda$core$Int64 $tmp1871 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1870, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1872 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1723->subtypes, $tmp1871);
        panda$core$String* $tmp1873 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1807, ((org$pandalanguage$pandac$Type*) $tmp1872), p_t, p_out);
        return $tmp1873;
    }
    }
    return result1807;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1875;
    panda$core$String* nonNullValue1879;
    panda$core$String* wrapped1890;
    panda$core$Bit $tmp1874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1874.value) {
    {
        panda$core$Object* $tmp1876 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1877 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1876), p_out);
        panda$core$Object* $tmp1878 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1877));
        unwrapped1875 = ((panda$core$String*) $tmp1878);
        panda$core$Object* $tmp1880 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1881 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1875, ((org$pandalanguage$pandac$Type*) $tmp1880), p_dstType, p_out);
        panda$core$Object* $tmp1882 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1881));
        nonNullValue1879 = ((panda$core$String*) $tmp1882);
        panda$core$String* $tmp1884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1883, p_value);
        panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1884, &$s1885);
        panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1886, nonNullValue1879);
        panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1887, &$s1888);
        return $tmp1889;
    }
    }
    panda$core$String* $tmp1891 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp1892 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1891));
    wrapped1890 = ((panda$core$String*) $tmp1892);
    panda$core$String* $tmp1893 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1894 = panda$core$String$convert$R$panda$core$String($tmp1893);
    panda$core$String* $tmp1896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1894, &$s1895);
    panda$core$String* $tmp1897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1896, wrapped1890);
    panda$core$String* $tmp1899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1897, &$s1898);
    (($fn1900) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1899);
    panda$core$Bit $tmp1901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1901.value) {
    {
        panda$core$String* $tmp1903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1902, p_value);
        panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1903, &$s1904);
        (($fn1906) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1905);
        panda$core$Int64 $tmp1907 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1907;
    }
    }
    panda$core$String* $tmp1908 = panda$core$String$convert$R$panda$core$String(wrapped1890);
    panda$core$String* $tmp1910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1908, &$s1909);
    panda$core$String* $tmp1911 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1910, $tmp1911);
    panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1912, &$s1913);
    panda$core$Int64 $tmp1916 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_srcType);
    panda$core$Int64$wrapper* $tmp1917;
    $tmp1917 = (panda$core$Int64$wrapper*) pandaAlloc(24);
    $tmp1917->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1917->refCount = 1;
    $tmp1917->value = $tmp1916;
    panda$core$String* $tmp1918 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1915, ((panda$core$Object*) $tmp1917));
    panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1918, &$s1919);
    panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1914, $tmp1920);
    (($fn1922) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1921);
    panda$core$String* $tmp1923 = panda$core$String$convert$R$panda$core$String(wrapped1890);
    panda$core$String* $tmp1925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1923, &$s1924);
    panda$core$String* $tmp1927 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_srcType)->name);
    panda$core$String* $tmp1928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1926, $tmp1927);
    panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1928, &$s1929);
    panda$core$String* $tmp1931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1925, $tmp1930);
    (($fn1932) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1931);
    panda$core$String* $tmp1933 = panda$core$String$convert$R$panda$core$String(wrapped1890);
    panda$core$String* $tmp1935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1933, &$s1934);
    (($fn1936) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1935);
    panda$core$String* $tmp1937 = panda$core$String$convert$R$panda$core$String(wrapped1890);
    panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1937, &$s1938);
    panda$core$String* $tmp1940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1939, p_value);
    panda$core$String* $tmp1942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1940, &$s1941);
    (($fn1943) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1942);
    panda$core$Bit $tmp1944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1944.value) {
    {
        panda$core$Int64 $tmp1945 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1945;
        (($fn1947) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1946);
        (($fn1949) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1948);
        panda$core$Int64 $tmp1950 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1950;
        panda$core$String* $tmp1951 = panda$core$String$convert$R$panda$core$String(wrapped1890);
        panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1951, &$s1952);
        (($fn1954) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1953);
        panda$core$Int64 $tmp1955 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1955;
        (($fn1957) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1956);
    }
    }
    panda$core$String* $tmp1959 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1958, $tmp1959);
    panda$core$String* $tmp1962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1960, &$s1961);
    panda$core$String* $tmp1963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1962, wrapped1890);
    panda$core$String* $tmp1965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1963, &$s1964);
    return $tmp1965;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$FieldDecl* p_field, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1968;
    panda$core$String* baseRef1973;
    panda$core$Bit $tmp1966 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_field->annotations);
    if ($tmp1966.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_field->value != NULL }).value);
        panda$core$String* $tmp1967 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_field->value, p_out);
        return $tmp1967;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1970 = (($fn1969) p_base->$class->vtable[2])(p_base);
    org$pandalanguage$pandac$ClassDecl* $tmp1971 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1970);
    panda$core$Object* $tmp1972 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1971));
    cl1968 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1972);
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1968);
    panda$core$String* $tmp1974 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    panda$core$Object* $tmp1975 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1974));
    baseRef1973 = ((panda$core$String*) $tmp1975);
    PANDA_ASSERT(((panda$core$Bit) { cl1968 != NULL }).value);
    panda$core$Bit $tmp1976 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1968);
    if ($tmp1976.value) {
    {
        panda$core$String* $tmp1977 = panda$core$String$convert$R$panda$core$String(baseRef1973);
        panda$core$String* $tmp1979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1977, &$s1978);
        panda$core$String* $tmp1980 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
        panda$core$String* $tmp1981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1979, $tmp1980);
        panda$core$String* $tmp1983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1981, &$s1982);
        return $tmp1983;
    }
    }
    panda$core$String* $tmp1984 = panda$core$String$convert$R$panda$core$String(baseRef1973);
    panda$core$String* $tmp1986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1984, &$s1985);
    panda$core$String* $tmp1987 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_field)->name);
    panda$core$String* $tmp1988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1986, $tmp1987);
    panda$core$String* $tmp1990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1988, &$s1989);
    return $tmp1990;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1991;
    panda$core$String* wrapped2002;
    panda$core$String* nonNullValue2006;
    panda$core$String* $tmp1993 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1992, $tmp1993);
    panda$core$String* $tmp1996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1994, &$s1995);
    panda$core$String* $tmp1997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1996, p_value);
    panda$core$String* $tmp1999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1997, &$s1998);
    panda$core$Object* $tmp2000 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1999));
    result1991 = ((panda$core$String*) $tmp2000);
    panda$core$Bit $tmp2001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2001.value) {
    {
        panda$core$Object* $tmp2003 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2004 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp2003), p_out);
        panda$core$Object* $tmp2005 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2004));
        wrapped2002 = ((panda$core$String*) $tmp2005);
        panda$core$Object* $tmp2007 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2008 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped2002, ((org$pandalanguage$pandac$Type*) $tmp2007), p_dstType, p_out);
        panda$core$Object* $tmp2009 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2008));
        nonNullValue2006 = ((panda$core$String*) $tmp2009);
        panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2010, p_value);
        panda$core$String* $tmp2013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2011, &$s2012);
        panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2013, nonNullValue2006);
        panda$core$String* $tmp2016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, &$s2015);
        panda$core$String* $tmp2017 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2016, $tmp2017);
        panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2018, &$s2019);
        return $tmp2020;
    }
    }
    return result1991;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2022 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp2023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2021, $tmp2022);
    panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2023, &$s2024);
    panda$core$String* $tmp2026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2025, p_value);
    panda$core$String* $tmp2028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2026, &$s2027);
    return $tmp2028;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2030 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2029, $tmp2030);
    panda$core$String* $tmp2033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2031, &$s2032);
    panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2033, p_value);
    panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2034, &$s2035);
    return $tmp2036;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op2037;
    org$pandalanguage$pandac$ClassDecl* srcClass2048;
    org$pandalanguage$pandac$ClassDecl* targetClass2051;
    panda$core$String* srcType2092;
    panda$core$String* dstType2095;
    memset(&op2037, 0, sizeof(op2037));
    panda$core$Bit $tmp2038 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp2038.value) {
    {
        panda$core$Bit $tmp2039 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp2039.value);
        panda$core$String* $tmp2041 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp2042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2040, $tmp2041);
        panda$core$String* $tmp2044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2042, &$s2043);
        panda$core$String* $tmp2045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2044, p_value);
        panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2045, &$s2046);
        return $tmp2047;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2049 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        panda$core$Object* $tmp2050 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2049));
        srcClass2048 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2050);
        PANDA_ASSERT(((panda$core$Bit) { srcClass2048 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp2052 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        panda$core$Object* $tmp2053 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2052));
        targetClass2051 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2053);
        PANDA_ASSERT(((panda$core$Bit) { targetClass2051 != NULL }).value);
        panda$core$Bit $tmp2055 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass2048);
        bool $tmp2054 = $tmp2055.value;
        if (!$tmp2054) goto $l2056;
        panda$core$Bit $tmp2057 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass2051);
        panda$core$Bit $tmp2058 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2057);
        $tmp2054 = $tmp2058.value;
        $l2056:;
        panda$core$Bit $tmp2059 = { $tmp2054 };
        if ($tmp2059.value) {
        {
            panda$core$String* $tmp2060 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2060;
        }
        }
        else {
        panda$core$Bit $tmp2062 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass2048);
        panda$core$Bit $tmp2063 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2062);
        bool $tmp2061 = $tmp2063.value;
        if (!$tmp2061) goto $l2064;
        panda$core$Bit $tmp2065 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass2051);
        $tmp2061 = $tmp2065.value;
        $l2064:;
        panda$core$Bit $tmp2066 = { $tmp2061 };
        if ($tmp2066.value) {
        {
            panda$core$String* $tmp2067 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2067;
        }
        }
        else {
        panda$core$Bit $tmp2070 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass2048);
        bool $tmp2069 = $tmp2070.value;
        if (!$tmp2069) goto $l2071;
        panda$core$Bit $tmp2072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp2069 = $tmp2072.value;
        $l2071:;
        panda$core$Bit $tmp2073 = { $tmp2069 };
        bool $tmp2068 = $tmp2073.value;
        if (!$tmp2068) goto $l2074;
        panda$core$Object* $tmp2075 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2076 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2075), p_src);
        $tmp2068 = $tmp2076.value;
        $l2074:;
        panda$core$Bit $tmp2077 = { $tmp2068 };
        if ($tmp2077.value) {
        {
            panda$core$String* $tmp2078 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2078;
        }
        }
        else {
        panda$core$Bit $tmp2081 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass2051);
        bool $tmp2080 = $tmp2081.value;
        if (!$tmp2080) goto $l2082;
        panda$core$Bit $tmp2083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp2080 = $tmp2083.value;
        $l2082:;
        panda$core$Bit $tmp2084 = { $tmp2080 };
        bool $tmp2079 = $tmp2084.value;
        if (!$tmp2079) goto $l2085;
        panda$core$Object* $tmp2086 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2087 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2086), p_target);
        $tmp2079 = $tmp2087.value;
        $l2085:;
        panda$core$Bit $tmp2088 = { $tmp2079 };
        if ($tmp2088.value) {
        {
            panda$core$String* $tmp2089 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp2089;
        }
        }
        }
        }
        }
        {
            panda$core$Object* $tmp2091 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s2090));
            op2037 = ((panda$core$String*) $tmp2091);
        }
    }
    }
    panda$core$String* $tmp2093 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    panda$core$Object* $tmp2094 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2093));
    srcType2092 = ((panda$core$String*) $tmp2094);
    panda$core$String* $tmp2096 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    panda$core$Object* $tmp2097 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2096));
    dstType2095 = ((panda$core$String*) $tmp2097);
    panda$core$Bit $tmp2098 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType2092, dstType2095);
    if ($tmp2098.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp2100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2099, dstType2095);
    panda$core$String* $tmp2102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2100, &$s2101);
    panda$core$String* $tmp2103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2102, p_value);
    panda$core$String* $tmp2105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2103, &$s2104);
    return $tmp2105;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef2106;
    panda$core$String* $tmp2107 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    panda$core$Object* $tmp2108 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2107));
    baseRef2106 = ((panda$core$String*) $tmp2108);
    org$pandalanguage$pandac$Type* $tmp2110 = (($fn2109) p_base->$class->vtable[2])(p_base);
    panda$core$String* $tmp2111 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, baseRef2106, $tmp2110, p_t, p_out);
    return $tmp2111;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_target, org$pandalanguage$pandac$IRNode* p_initCall, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1090_92112;
    org$pandalanguage$pandac$Type* initType2114;
    org$pandalanguage$pandac$MethodRef* initMref2116;
    panda$collections$ImmutableArray* initArgs2118;
    org$pandalanguage$pandac$ClassDecl* cl2120;
    panda$core$String* t2123;
    org$pandalanguage$pandac$IRNode* $match$1096_212132;
    panda$collections$ImmutableArray* args2134;
    panda$core$String* value2138;
    panda$core$String* tmp2151;
    panda$core$String* result2169;
    panda$core$String* classPtr2187;
    panda$core$String* className2190;
    {
        $match$1090_92112 = p_initCall;
        panda$core$Bit $tmp2113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1090_92112->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp2113.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2115 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1090_92112->$data + 16));
            initType2114 = *$tmp2115;
            org$pandalanguage$pandac$MethodRef** $tmp2117 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1090_92112->$data + 24));
            initMref2116 = *$tmp2117;
            panda$collections$ImmutableArray** $tmp2119 = ((panda$collections$ImmutableArray**) ((char*) $match$1090_92112->$data + 32));
            initArgs2118 = *$tmp2119;
            org$pandalanguage$pandac$ClassDecl* $tmp2121 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
            panda$core$Object* $tmp2122 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2121));
            cl2120 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2122);
            PANDA_ASSERT(((panda$core$Bit) { cl2120 != NULL }).value);
            panda$core$String* $tmp2124 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
            panda$core$Object* $tmp2125 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2124));
            t2123 = ((panda$core$String*) $tmp2125);
            panda$core$Bit $tmp2127 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            bool $tmp2126 = $tmp2127.value;
            if ($tmp2126) goto $l2128;
            org$pandalanguage$pandac$Type* $tmp2129 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp2130 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2129);
            $tmp2126 = $tmp2130.value;
            $l2128:;
            panda$core$Bit $tmp2131 = { $tmp2126 };
            if ($tmp2131.value) {
            {
                {
                    $match$1096_212132 = p_initCall;
                    panda$core$Bit $tmp2133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1096_212132->$rawValue, ((panda$core$Int64) { 5 }));
                    if ($tmp2133.value) {
                    {
                        panda$collections$ImmutableArray** $tmp2135 = ((panda$collections$ImmutableArray**) ((char*) $match$1096_212132->$data + 32));
                        args2134 = *$tmp2135;
                        panda$core$Int64 $tmp2136 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(args2134);
                        panda$core$Bit $tmp2137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2136, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp2137.value);
                        panda$core$Object* $tmp2139 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(args2134, ((panda$core$Int64) { 0 }));
                        panda$core$String* $tmp2140 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2139), p_out);
                        panda$core$Object* $tmp2141 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2140));
                        value2138 = ((panda$core$String*) $tmp2141);
                        panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2142, t2123);
                        panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2143, &$s2144);
                        panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2145, value2138);
                        panda$core$String* $tmp2148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2146, &$s2147);
                        return $tmp2148;
                    }
                    }
                }
            }
            }
            panda$core$Bit $tmp2149 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2120);
            if ($tmp2149.value) {
            {
                panda$core$Int64 $tmp2150 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
                self->varCount = $tmp2150;
                panda$core$Int64$wrapper* $tmp2153;
                $tmp2153 = (panda$core$Int64$wrapper*) pandaAlloc(24);
                $tmp2153->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp2153->refCount = 1;
                $tmp2153->value = self->varCount;
                panda$core$String* $tmp2154 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2152, ((panda$core$Object*) $tmp2153));
                panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2154, &$s2155);
                panda$core$Object* $tmp2157 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2156));
                tmp2151 = ((panda$core$String*) $tmp2157);
                panda$core$String* $tmp2158 = panda$core$String$convert$R$panda$core$String(t2123);
                panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2158, &$s2159);
                panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2160, tmp2151);
                panda$core$String* $tmp2163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2161, &$s2162);
                (($fn2164) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2163);
                panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2165, tmp2151);
                panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, &$s2167);
                org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType2114, initMref2116, initArgs2118, $tmp2168, p_out);
                return tmp2151;
            }
            }
            panda$core$String* $tmp2170 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            panda$core$Object* $tmp2171 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2170));
            result2169 = ((panda$core$String*) $tmp2171);
            panda$core$String* $tmp2172 = panda$core$String$convert$R$panda$core$String(t2123);
            panda$core$String* $tmp2174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2172, &$s2173);
            panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2174, result2169);
            panda$core$String* $tmp2177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2175, &$s2176);
            panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2177, t2123);
            panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2178, &$s2179);
            panda$core$Int64 $tmp2181 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
            panda$core$Int64$wrapper* $tmp2182;
            $tmp2182 = (panda$core$Int64$wrapper*) pandaAlloc(24);
            $tmp2182->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2182->refCount = 1;
            $tmp2182->value = $tmp2181;
            panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2180, ((panda$core$Object*) $tmp2182));
            panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2183, &$s2184);
            (($fn2186) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2185);
            panda$core$String* $tmp2188 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            panda$core$Object* $tmp2189 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2188));
            classPtr2187 = ((panda$core$String*) $tmp2189);
            memset(&className2190, 0, sizeof(className2190));
            panda$core$Bit $tmp2191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp2191.value) {
            {
                {
                    panda$core$Object* $tmp2192 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
                    panda$core$String* $tmp2193 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2192));
                    panda$core$Object* $tmp2194 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2193));
                    className2190 = ((panda$core$String*) $tmp2194);
                }
            }
            }
            else {
            {
                {
                    panda$core$String* $tmp2195 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
                    panda$core$Object* $tmp2196 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2195));
                    className2190 = ((panda$core$String*) $tmp2196);
                }
            }
            }
            panda$core$String* $tmp2197 = panda$core$String$convert$R$panda$core$String(result2169);
            panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2197, &$s2198);
            panda$core$String* $tmp2200 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl2120)->name);
            panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2199, $tmp2200);
            panda$core$String* $tmp2203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2201, &$s2202);
            panda$core$String* $tmp2205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2203, &$s2204);
            (($fn2206) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2205);
            panda$core$String* $tmp2207 = panda$core$String$convert$R$panda$core$String(result2169);
            panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2207, &$s2208);
            (($fn2210) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2209);
            panda$core$String* $tmp2211 = panda$core$String$convert$R$panda$core$String(result2169);
            panda$core$String* $tmp2213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2211, &$s2212);
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, initType2114, initMref2116, initArgs2118, $tmp2213, p_out);
            return result2169;
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
    panda$core$String* $tmp2214 = panda$core$UInt64$convert$R$panda$core$String(p_int);
    return $tmp2214;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$UInt64 p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$UInt64$wrapper* $tmp2216;
    $tmp2216 = (panda$core$UInt64$wrapper*) pandaAlloc(24);
    $tmp2216->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp2216->refCount = 1;
    $tmp2216->value = p_int;
    panda$core$String* $tmp2217 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2215, ((panda$core$Object*) $tmp2216));
    return $tmp2217;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Real64 p_real, panda$io$OutputStream* p_out) {
    panda$core$String* result2218;
    panda$core$Char8 $tmp2221;
    panda$core$String* $tmp2219 = panda$core$Real64$convert$R$panda$core$String(p_real);
    panda$core$Object* $tmp2220 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2219));
    result2218 = ((panda$core$String*) $tmp2220);
    panda$core$Char8$init$panda$core$UInt8(&$tmp2221, ((panda$core$UInt8) { 46 }));
    panda$core$Bit $tmp2222 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(result2218, $tmp2221);
    if ($tmp2222.value) {
    {
        return result2218;
    }
    }
    panda$core$String* $tmp2224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result2218, &$s2223);
    return $tmp2224;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Bit p_bit, panda$io$IndentedOutputStream* p_out) {
    if (p_bit.value) {
    {
        return &$s2225;
    }
    }
    return &$s2226;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2227 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2227;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2229;
    panda$collections$Iterator* c$Iter2244;
    panda$core$Char8 c2257;
    panda$core$Int64 $tmp2228 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2228;
    panda$core$Int64$wrapper* $tmp2231;
    $tmp2231 = (panda$core$Int64$wrapper*) pandaAlloc(24);
    $tmp2231->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2231->refCount = 1;
    $tmp2231->value = self->varCount;
    panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2230, ((panda$core$Object*) $tmp2231));
    panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2232, &$s2233);
    panda$core$Object* $tmp2235 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2234));
    result2229 = ((panda$core$String*) $tmp2235);
    org$pandalanguage$pandac$Type* $tmp2236 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2236);
    panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2237, result2229);
    panda$core$String* $tmp2240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2238, &$s2239);
    panda$core$String* $tmp2242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2240, &$s2241);
    (($fn2243) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2242);
    {
        panda$collections$ListView* $tmp2245 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2246 = ((panda$collections$Iterable*) $tmp2245)->$class->itable;
        while ($tmp2246->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2246 = $tmp2246->next;
        }
        $fn2248 $tmp2247 = $tmp2246->methods[0];
        panda$collections$Iterator* $tmp2249 = $tmp2247(((panda$collections$Iterable*) $tmp2245));
        c$Iter2244 = $tmp2249;
        $l2250:;
        ITable* $tmp2252 = c$Iter2244->$class->itable;
        while ($tmp2252->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2252 = $tmp2252->next;
        }
        $fn2254 $tmp2253 = $tmp2252->methods[0];
        panda$core$Bit $tmp2255 = $tmp2253(c$Iter2244);
        panda$core$Bit $tmp2256 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2255);
        if (!$tmp2256.value) goto $l2251;
        {
            ITable* $tmp2258 = c$Iter2244->$class->itable;
            while ($tmp2258->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2258 = $tmp2258->next;
            }
            $fn2260 $tmp2259 = $tmp2258->methods[1];
            panda$core$Object* $tmp2261 = $tmp2259(c$Iter2244);
            c2257 = ((panda$core$Char8$wrapper*) $tmp2261)->value;
            panda$core$UInt8 $tmp2263 = panda$core$Char8$convert$R$panda$core$UInt8(c2257);
            panda$core$UInt8$wrapper* $tmp2264;
            $tmp2264 = (panda$core$UInt8$wrapper*) pandaAlloc(13);
            $tmp2264->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
            $tmp2264->refCount = 1;
            $tmp2264->value = $tmp2263;
            ITable* $tmp2266 = ((panda$core$Formattable*) $tmp2264)->$class->itable;
            while ($tmp2266->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2266 = $tmp2266->next;
            }
            $fn2268 $tmp2267 = $tmp2266->methods[0];
            panda$core$String* $tmp2269 = $tmp2267(((panda$core$Formattable*) $tmp2264), &$s2265);
            panda$core$String* $tmp2271 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp2269, &$s2270);
            panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2262, $tmp2271);
            panda$core$String* $tmp2274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2272, &$s2273);
            (($fn2275) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2274);
        }
        goto $l2250;
        $l2251:;
    }
    panda$collections$ListView* $tmp2277 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2278 = ((panda$collections$CollectionView*) $tmp2277)->$class->itable;
    while ($tmp2278->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2278 = $tmp2278->next;
    }
    $fn2280 $tmp2279 = $tmp2278->methods[0];
    panda$core$Int64 $tmp2281 = $tmp2279(((panda$collections$CollectionView*) $tmp2277));
    panda$core$Int64$wrapper* $tmp2282;
    $tmp2282 = (panda$core$Int64$wrapper*) pandaAlloc(24);
    $tmp2282->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2282->refCount = 1;
    $tmp2282->value = $tmp2281;
    panda$core$String* $tmp2283 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2276, ((panda$core$Object*) $tmp2282));
    panda$core$String* $tmp2285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2283, &$s2284);
    panda$core$Int64 $tmp2286 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$Int64$wrapper* $tmp2287;
    $tmp2287 = (panda$core$Int64$wrapper*) pandaAlloc(24);
    $tmp2287->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2287->refCount = 1;
    $tmp2287->value = $tmp2286;
    panda$core$String* $tmp2288 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2285, ((panda$core$Object*) $tmp2287));
    panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2288, &$s2289);
    (($fn2291) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2290);
    panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2292, result2229);
    panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2293, &$s2294);
    return $tmp2295;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$IndentedOutputStream* p_out) {
    return &$s2296;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2298 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2297, $tmp2298);
    panda$core$String* $tmp2301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2299, &$s2300);
    return $tmp2301;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2302;
    org$pandalanguage$pandac$ClassDecl* cl2305;
    panda$core$String* bit2310;
    panda$core$String* $tmp2303 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    panda$core$Object* $tmp2304 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2303));
    ref2302 = ((panda$core$String*) $tmp2304);
    org$pandalanguage$pandac$Type* $tmp2307 = (($fn2306) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2308 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2307);
    panda$core$Object* $tmp2309 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2308));
    cl2305 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2309);
    memset(&bit2310, 0, sizeof(bit2310));
    panda$core$Bit $tmp2311 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2305);
    if ($tmp2311.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2313 = (($fn2312) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2314 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2313->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2314.value) {
        {
            {
                panda$core$Object* $tmp2316 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s2315));
                bit2310 = ((panda$core$String*) $tmp2316);
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp2318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2317, ref2302);
                panda$core$String* $tmp2320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2318, &$s2319);
                panda$core$Object* $tmp2321 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2320));
                bit2310 = ((panda$core$String*) $tmp2321);
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp2322 = panda$core$String$convert$R$panda$core$String(ref2302);
            panda$core$String* $tmp2324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2322, &$s2323);
            panda$core$Object* $tmp2325 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2324));
            bit2310 = ((panda$core$String*) $tmp2325);
        }
    }
    }
    panda$core$String* $tmp2327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2326, bit2310);
    panda$core$String* $tmp2329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2327, &$s2328);
    return $tmp2329;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* ref2330;
    org$pandalanguage$pandac$ClassDecl* cl2333;
    panda$core$String* bit2338;
    panda$core$String* $tmp2331 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    panda$core$Object* $tmp2332 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2331));
    ref2330 = ((panda$core$String*) $tmp2332);
    org$pandalanguage$pandac$Type* $tmp2335 = (($fn2334) p_value->$class->vtable[2])(p_value);
    org$pandalanguage$pandac$ClassDecl* $tmp2336 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2335);
    panda$core$Object* $tmp2337 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2336));
    cl2333 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2337);
    memset(&bit2338, 0, sizeof(bit2338));
    panda$core$Bit $tmp2339 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2333);
    if ($tmp2339.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2341 = (($fn2340) p_value->$class->vtable[2])(p_value);
        panda$core$Bit $tmp2342 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2341->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2342.value) {
        {
            {
                panda$core$Object* $tmp2344 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s2343));
                bit2338 = ((panda$core$String*) $tmp2344);
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp2345 = panda$core$String$convert$R$panda$core$String(ref2330);
                panda$core$String* $tmp2347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2345, &$s2346);
                panda$core$Object* $tmp2348 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2347));
                bit2338 = ((panda$core$String*) $tmp2348);
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp2349 = panda$core$String$convert$R$panda$core$String(ref2330);
            panda$core$String* $tmp2351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2349, &$s2350);
            panda$core$Object* $tmp2352 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2351));
            bit2338 = ((panda$core$String*) $tmp2352);
        }
    }
    }
    panda$core$String* $tmp2354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2353, bit2338);
    panda$core$String* $tmp2356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2354, &$s2355);
    return $tmp2356;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2358;
    panda$core$Bit $tmp2357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2357.value);
    panda$core$Object* $tmp2359 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2360 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2359));
    panda$core$Object* $tmp2361 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2360));
    cl2358 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2361);
    PANDA_ASSERT(((panda$core$Bit) { cl2358 != NULL }).value);
    panda$core$Bit $tmp2362 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2358);
    if ($tmp2362.value) {
    {
        panda$core$String* $tmp2364 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp2365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2363, $tmp2364);
        panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2365, &$s2366);
        return $tmp2367;
    }
    }
    else {
    {
        return &$s2368;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_base, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* baseRef2369;
    panda$core$String* result2372;
    org$pandalanguage$pandac$parser$Token$Kind $match$1229_92375;
    panda$core$String* $tmp2370 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_base, p_out);
    panda$core$Object* $tmp2371 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2370));
    baseRef2369 = ((panda$core$String*) $tmp2371);
    panda$core$String* $tmp2373 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp2374 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2373));
    result2372 = ((panda$core$String*) $tmp2374);
    {
        $match$1229_92375 = p_op;
        panda$core$Bit $tmp2376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1229_92375.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp2376.value) {
        {
            panda$core$String* $tmp2378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2377, baseRef2369);
            panda$core$String* $tmp2380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2378, &$s2379);
            return $tmp2380;
        }
        }
        else {
        panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1229_92375.$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp2381.value) {
        {
            panda$core$String* $tmp2383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2382, baseRef2369);
            panda$core$String* $tmp2385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2383, &$s2384);
            return $tmp2385;
        }
        }
        else {
        panda$core$Bit $tmp2386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1229_92375.$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp2386.value) {
        {
            panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2387, baseRef2369);
            panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2388, &$s2389);
            return $tmp2390;
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
    panda$core$String* testRef2396;
    panda$core$String* trueLabel2399;
    panda$core$String* falseLabel2402;
    panda$core$String* merge2405;
    panda$core$String* result2408;
    org$pandalanguage$pandac$Type* $tmp2392 = (($fn2391) p_ifTrue->$class->vtable[2])(p_ifTrue);
    org$pandalanguage$pandac$Type* $tmp2394 = (($fn2393) p_ifFalse->$class->vtable[2])(p_ifFalse);
    panda$core$Bit $tmp2395 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2392, $tmp2394);
    PANDA_ASSERT($tmp2395.value);
    panda$core$String* $tmp2397 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$Object* $tmp2398 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2397));
    testRef2396 = ((panda$core$String*) $tmp2398);
    panda$core$String* $tmp2400 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp2401 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2400));
    trueLabel2399 = ((panda$core$String*) $tmp2401);
    panda$core$String* $tmp2403 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp2404 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2403));
    falseLabel2402 = ((panda$core$String*) $tmp2404);
    panda$core$String* $tmp2406 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp2407 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2406));
    merge2405 = ((panda$core$String*) $tmp2407);
    panda$core$String* $tmp2409 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp2410 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2409));
    result2408 = ((panda$core$String*) $tmp2410);
    org$pandalanguage$pandac$Type* $tmp2412 = (($fn2411) p_ifTrue->$class->vtable[2])(p_ifTrue);
    panda$core$String* $tmp2413 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2412);
    panda$core$String* $tmp2414 = panda$core$String$convert$R$panda$core$String($tmp2413);
    panda$core$String* $tmp2416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2414, &$s2415);
    panda$core$String* $tmp2417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2416, result2408);
    panda$core$String* $tmp2419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2417, &$s2418);
    (($fn2420) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2419);
    panda$core$String* $tmp2422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2421, testRef2396);
    panda$core$String* $tmp2424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2422, &$s2423);
    panda$core$String* $tmp2425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2424, trueLabel2399);
    panda$core$String* $tmp2427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2425, &$s2426);
    panda$core$String* $tmp2428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2427, falseLabel2402);
    panda$core$String* $tmp2430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, &$s2429);
    (($fn2431) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2430);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel2399, p_out);
    panda$core$String* $tmp2432 = panda$core$String$convert$R$panda$core$String(result2408);
    panda$core$String* $tmp2434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2432, &$s2433);
    panda$core$String* $tmp2435 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifTrue, p_out);
    panda$core$String* $tmp2436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2434, $tmp2435);
    panda$core$String* $tmp2438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2436, &$s2437);
    (($fn2439) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2438);
    panda$core$String* $tmp2441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2440, merge2405);
    panda$core$String* $tmp2443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2441, &$s2442);
    (($fn2444) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2443);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel2402, p_out);
    panda$core$String* $tmp2445 = panda$core$String$convert$R$panda$core$String(result2408);
    panda$core$String* $tmp2447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2445, &$s2446);
    panda$core$String* $tmp2448 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_ifFalse, p_out);
    panda$core$String* $tmp2449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2447, $tmp2448);
    panda$core$String* $tmp2451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2449, &$s2450);
    (($fn2452) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2451);
    panda$core$String* $tmp2454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2453, merge2405);
    panda$core$String* $tmp2456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2454, &$s2455);
    (($fn2457) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2456);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, merge2405, p_out);
    return result2408;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2458 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2458;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1266_92459;
    org$pandalanguage$pandac$IRNode* left2461;
    org$pandalanguage$pandac$parser$Token$Kind op2463;
    org$pandalanguage$pandac$IRNode* right2465;
    org$pandalanguage$pandac$Type* type2469;
    org$pandalanguage$pandac$MethodRef* target2471;
    panda$collections$ImmutableArray* args2473;
    org$pandalanguage$pandac$IRNode* base2477;
    org$pandalanguage$pandac$Type* type2479;
    panda$core$Bit explicit2481;
    panda$core$UInt64 value2485;
    panda$core$UInt64 value2489;
    panda$core$Real64 value2493;
    panda$core$Bit value2497;
    org$pandalanguage$pandac$Type* type2501;
    org$pandalanguage$pandac$IRNode* initCall2503;
    org$pandalanguage$pandac$Variable* variable2507;
    org$pandalanguage$pandac$IRNode* base2511;
    org$pandalanguage$pandac$FieldDecl* field2513;
    panda$core$String* str2517;
    org$pandalanguage$pandac$Type* t2523;
    org$pandalanguage$pandac$IRNode* base2527;
    panda$core$Int64 id2529;
    panda$core$String* value2531;
    panda$core$Int64 id2536;
    panda$core$String* result2538;
    org$pandalanguage$pandac$Position pos2543;
    org$pandalanguage$pandac$Type* type2545;
    org$pandalanguage$pandac$IRNode* value2549;
    org$pandalanguage$pandac$IRNode* value2553;
    org$pandalanguage$pandac$parser$Token$Kind op2557;
    org$pandalanguage$pandac$IRNode* base2559;
    org$pandalanguage$pandac$IRNode* test2563;
    org$pandalanguage$pandac$IRNode* ifTrue2565;
    org$pandalanguage$pandac$IRNode* ifFalse2567;
    {
        $match$1266_92459 = p_expr;
        panda$core$Bit $tmp2460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp2460.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2462 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1266_92459->$data + 24));
            left2461 = *$tmp2462;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2464 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1266_92459->$data + 32));
            op2463 = *$tmp2464;
            org$pandalanguage$pandac$IRNode** $tmp2466 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1266_92459->$data + 40));
            right2465 = *$tmp2466;
            panda$core$String* $tmp2467 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, left2461, op2463, right2465, p_out);
            return $tmp2467;
        }
        }
        else {
        panda$core$Bit $tmp2468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp2468.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2470 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1266_92459->$data + 16));
            type2469 = *$tmp2470;
            org$pandalanguage$pandac$MethodRef** $tmp2472 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1266_92459->$data + 24));
            target2471 = *$tmp2472;
            panda$collections$ImmutableArray** $tmp2474 = ((panda$collections$ImmutableArray**) ((char*) $match$1266_92459->$data + 32));
            args2473 = *$tmp2474;
            panda$core$String* $tmp2475 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream$R$panda$core$String(self, type2469, target2471, args2473, p_out);
            return $tmp2475;
        }
        }
        else {
        panda$core$Bit $tmp2476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp2476.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2478 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1266_92459->$data + 16));
            base2477 = *$tmp2478;
            org$pandalanguage$pandac$Type** $tmp2480 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1266_92459->$data + 24));
            type2479 = *$tmp2480;
            panda$core$Bit* $tmp2482 = ((panda$core$Bit*) ((char*) $match$1266_92459->$data + 32));
            explicit2481 = *$tmp2482;
            panda$core$String* $tmp2483 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base2477, type2479, p_out);
            return $tmp2483;
        }
        }
        else {
        panda$core$Bit $tmp2484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp2484.value) {
        {
            panda$core$UInt64* $tmp2486 = ((panda$core$UInt64*) ((char*) $match$1266_92459->$data + 24));
            value2485 = *$tmp2486;
            panda$core$String* $tmp2487 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2485, p_out);
            return $tmp2487;
        }
        }
        else {
        panda$core$Bit $tmp2488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2488.value) {
        {
            panda$core$UInt64* $tmp2490 = ((panda$core$UInt64*) ((char*) $match$1266_92459->$data + 24));
            value2489 = *$tmp2490;
            panda$core$String* $tmp2491 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$panda$core$UInt64$panda$io$IndentedOutputStream$R$panda$core$String(self, value2489, p_out);
            return $tmp2491;
        }
        }
        else {
        panda$core$Bit $tmp2492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp2492.value) {
        {
            panda$core$Real64* $tmp2494 = ((panda$core$Real64*) ((char*) $match$1266_92459->$data + 24));
            value2493 = *$tmp2494;
            panda$core$String* $tmp2495 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$panda$core$Real64$panda$io$OutputStream$R$panda$core$String(self, value2493, ((panda$io$OutputStream*) p_out));
            return $tmp2495;
        }
        }
        else {
        panda$core$Bit $tmp2496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp2496.value) {
        {
            panda$core$Bit* $tmp2498 = ((panda$core$Bit*) ((char*) $match$1266_92459->$data + 24));
            value2497 = *$tmp2498;
            panda$core$String* $tmp2499 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, value2497, p_out);
            return $tmp2499;
        }
        }
        else {
        panda$core$Bit $tmp2500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp2500.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2502 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1266_92459->$data + 16));
            type2501 = *$tmp2502;
            org$pandalanguage$pandac$IRNode** $tmp2504 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1266_92459->$data + 24));
            initCall2503 = *$tmp2504;
            panda$core$String* $tmp2505 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, type2501, initCall2503, p_out);
            return $tmp2505;
        }
        }
        else {
        panda$core$Bit $tmp2506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2506.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2508 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1266_92459->$data + 16));
            variable2507 = *$tmp2508;
            panda$core$String* $tmp2509 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, variable2507, p_out);
            return $tmp2509;
        }
        }
        else {
        panda$core$Bit $tmp2510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2510.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2512 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1266_92459->$data + 24));
            base2511 = *$tmp2512;
            org$pandalanguage$pandac$FieldDecl** $tmp2514 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1266_92459->$data + 32));
            field2513 = *$tmp2514;
            panda$core$String* $tmp2515 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, base2511, field2513, p_out);
            return $tmp2515;
        }
        }
        else {
        panda$core$Bit $tmp2516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2516.value) {
        {
            panda$core$String** $tmp2518 = ((panda$core$String**) ((char*) $match$1266_92459->$data + 16));
            str2517 = *$tmp2518;
            panda$core$String* $tmp2519 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, str2517, p_out);
            return $tmp2519;
        }
        }
        else {
        panda$core$Bit $tmp2520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2520.value) {
        {
            panda$core$String* $tmp2521 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$panda$io$IndentedOutputStream$R$panda$core$String(self, p_out);
            return $tmp2521;
        }
        }
        else {
        panda$core$Bit $tmp2522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2522.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2524 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1266_92459->$data + 16));
            t2523 = *$tmp2524;
            panda$core$String* $tmp2525 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, t2523, p_out);
            return $tmp2525;
        }
        }
        else {
        panda$core$Bit $tmp2526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2526.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2528 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1266_92459->$data + 0));
            base2527 = *$tmp2528;
            panda$core$Int64* $tmp2530 = ((panda$core$Int64*) ((char*) $match$1266_92459->$data + 8));
            id2529 = *$tmp2530;
            panda$core$String* $tmp2532 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base2527, p_out);
            panda$core$Object* $tmp2533 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2532));
            value2531 = ((panda$core$String*) $tmp2533);
            panda$core$Int64$wrapper* $tmp2534;
            $tmp2534 = (panda$core$Int64$wrapper*) pandaAlloc(24);
            $tmp2534->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2534->refCount = 1;
            $tmp2534->value = id2529;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp2534), ((panda$core$Object*) value2531));
            return value2531;
        }
        }
        else {
        panda$core$Bit $tmp2535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2535.value) {
        {
            panda$core$Int64* $tmp2537 = ((panda$core$Int64*) ((char*) $match$1266_92459->$data + 24));
            id2536 = *$tmp2537;
            panda$core$Int64$wrapper* $tmp2539;
            $tmp2539 = (panda$core$Int64$wrapper*) pandaAlloc(24);
            $tmp2539->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2539->refCount = 1;
            $tmp2539->value = id2536;
            panda$core$Object* $tmp2540 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) $tmp2539));
            panda$core$Object* $tmp2541 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((panda$core$String*) $tmp2540)));
            result2538 = ((panda$core$String*) $tmp2541);
            PANDA_ASSERT(((panda$core$Bit) { result2538 != NULL }).value);
            return result2538;
        }
        }
        else {
        panda$core$Bit $tmp2542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp2542.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2544 = ((org$pandalanguage$pandac$Position*) ((char*) $match$1266_92459->$data + 0));
            pos2543 = *$tmp2544;
            org$pandalanguage$pandac$Type** $tmp2546 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1266_92459->$data + 16));
            type2545 = *$tmp2546;
            panda$core$String* $tmp2547 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, type2545, p_out);
            return $tmp2547;
        }
        }
        else {
        panda$core$Bit $tmp2548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2548.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2550 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1266_92459->$data + 16));
            value2549 = *$tmp2550;
            panda$core$String* $tmp2551 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2549, p_out);
            return $tmp2551;
        }
        }
        else {
        panda$core$Bit $tmp2552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2552.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2554 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1266_92459->$data + 16));
            value2553 = *$tmp2554;
            panda$core$String* $tmp2555 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value2553, p_out);
            return $tmp2555;
        }
        }
        else {
        panda$core$Bit $tmp2556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp2556.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2558 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1266_92459->$data + 16));
            op2557 = *$tmp2558;
            org$pandalanguage$pandac$IRNode** $tmp2560 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1266_92459->$data + 24));
            base2559 = *$tmp2560;
            panda$core$String* $tmp2561 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, op2557, base2559, p_out);
            return $tmp2561;
        }
        }
        else {
        panda$core$Bit $tmp2562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2562.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2564 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1266_92459->$data + 16));
            test2563 = *$tmp2564;
            org$pandalanguage$pandac$IRNode** $tmp2566 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1266_92459->$data + 24));
            ifTrue2565 = *$tmp2566;
            org$pandalanguage$pandac$IRNode** $tmp2568 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1266_92459->$data + 32));
            ifFalse2567 = *$tmp2568;
            panda$core$String* $tmp2569 = org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, test2563, ifTrue2565, ifFalse2567, p_out);
            return $tmp2569;
        }
        }
        else {
        panda$core$Bit $tmp2570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1266_92459->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp2570.value) {
        {
            panda$core$String* $tmp2571 = org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2571;
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
    panda$core$String* $tmp2572 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2572;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2576;
    org$pandalanguage$pandac$IRNode* s2588;
    (($fn2574) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2573);
    panda$core$Int64 $tmp2575 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2575;
    {
        ITable* $tmp2577 = ((panda$collections$Iterable*) p_statements)->$class->itable;
        while ($tmp2577->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2577 = $tmp2577->next;
        }
        $fn2579 $tmp2578 = $tmp2577->methods[0];
        panda$collections$Iterator* $tmp2580 = $tmp2578(((panda$collections$Iterable*) p_statements));
        s$Iter2576 = $tmp2580;
        $l2581:;
        ITable* $tmp2583 = s$Iter2576->$class->itable;
        while ($tmp2583->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2583 = $tmp2583->next;
        }
        $fn2585 $tmp2584 = $tmp2583->methods[0];
        panda$core$Bit $tmp2586 = $tmp2584(s$Iter2576);
        panda$core$Bit $tmp2587 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2586);
        if (!$tmp2587.value) goto $l2582;
        {
            ITable* $tmp2589 = s$Iter2576->$class->itable;
            while ($tmp2589->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2589 = $tmp2589->next;
            }
            $fn2591 $tmp2590 = $tmp2589->methods[1];
            panda$core$Object* $tmp2592 = $tmp2590(s$Iter2576);
            s2588 = ((org$pandalanguage$pandac$IRNode*) $tmp2592);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2588, p_out);
        }
        goto $l2581;
        $l2582:;
    }
    panda$core$Int64 $tmp2593 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2593;
    (($fn2595) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2594);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ImmutableArray* p_args, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $match$1333_92596;
    panda$core$String* ptr2601;
    panda$core$String* arg2605;
    panda$core$String* base2628;
    panda$core$String* index2632;
    panda$core$String* value2636;
    {
        $match$1333_92596 = ((org$pandalanguage$pandac$Symbol*) p_m->value)->name;
        panda$core$Bit $tmp2598 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1333_92596, &$s2597);
        if ($tmp2598.value) {
        {
            panda$core$Int64 $tmp2599 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2599, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2600.value);
            panda$core$Object* $tmp2602 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2603 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2602), p_out);
            panda$core$Object* $tmp2604 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2603));
            ptr2601 = ((panda$core$String*) $tmp2604);
            panda$core$Object* $tmp2606 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2607 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2606));
            panda$core$String* $tmp2608 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2607, p_out);
            panda$core$Object* $tmp2609 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2608));
            arg2605 = ((panda$core$String*) $tmp2609);
            panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2610, arg2605);
            panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, &$s2612);
            panda$core$String* $tmp2614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, ptr2601);
            panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2614, &$s2615);
            (($fn2617) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2616);
        }
        }
        else {
        panda$core$Bit $tmp2619 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1333_92596, &$s2618);
        if ($tmp2619.value) {
        {
            panda$core$Int64 $tmp2620 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2620, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2621.value);
            panda$core$Object* $tmp2622 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2623 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2622));
            org$pandalanguage$pandac$Type* $tmp2625 = (($fn2624) $tmp2623->$class->vtable[2])($tmp2623);
            panda$core$Int64 $tmp2626 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2625->subtypes);
            panda$core$Bit $tmp2627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2626, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2627.value);
            panda$core$Object* $tmp2629 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2630 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2629), p_out);
            panda$core$Object* $tmp2631 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2630));
            base2628 = ((panda$core$String*) $tmp2631);
            panda$core$Object* $tmp2633 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2634 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2633), p_out);
            panda$core$Object* $tmp2635 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2634));
            index2632 = ((panda$core$String*) $tmp2635);
            panda$core$Object* $tmp2637 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2638 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2637));
            panda$core$String* $tmp2639 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2638, p_out);
            panda$core$Object* $tmp2640 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2639));
            value2636 = ((panda$core$String*) $tmp2640);
            panda$core$String* $tmp2641 = panda$core$String$convert$R$panda$core$String(base2628);
            panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2641, &$s2642);
            panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2643, index2632);
            panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2644, &$s2645);
            panda$core$String* $tmp2647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2646, value2636);
            panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2647, &$s2648);
            (($fn2650) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2649);
        }
        }
        else {
        panda$core$Bit $tmp2652 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1333_92596, &$s2651);
        if ($tmp2652.value) {
        {
            panda$core$Int64 $tmp2653 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
            panda$core$Bit $tmp2654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2653, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2654.value);
            panda$core$Object* $tmp2656 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2657 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2656), p_out);
            panda$core$String* $tmp2658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2655, $tmp2657);
            panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2658, &$s2659);
            (($fn2661) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2660);
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
    org$pandalanguage$pandac$MethodDecl* m2662;
    org$pandalanguage$pandac$Type* actualMethodType2667;
    panda$core$String* actualResultType2668;
    panda$core$Bit isSuper2669;
    panda$collections$Array* argRefs2693;
    panda$core$Int64 offset2697;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2702;
    panda$core$String* arg2717;
    panda$core$String* targetRef2744;
    panda$core$String* methodRef2750;
    panda$core$String* separator2753;
    panda$core$String* indirectVar2758;
    panda$core$String* resultType2763;
    panda$collections$Iterator* a$Iter2789;
    panda$core$String* a2801;
    panda$core$Object* $tmp2663 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_mref->value));
    m2662 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2663);
    panda$core$Bit $tmp2665 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2662->owner)->name, &$s2664);
    if ($tmp2665.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_mref, p_args, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2666 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2662->owner);
    if ($tmp2666.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2662);
    }
    }
    memset(&actualMethodType2667, 0, sizeof(actualMethodType2667));
    memset(&actualResultType2668, 0, sizeof(actualResultType2668));
    panda$core$Int64 $tmp2671 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Bit $tmp2672 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2671, ((panda$core$Int64) { 1 }));
    bool $tmp2670 = $tmp2672.value;
    if (!$tmp2670) goto $l2673;
    panda$core$Object* $tmp2674 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2674)->$rawValue, ((panda$core$Int64) { 32 }));
    $tmp2670 = $tmp2675.value;
    $l2673:;
    panda$core$Bit $tmp2676 = { $tmp2670 };
    isSuper2669 = $tmp2676;
    panda$core$Bit $tmp2678 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2669);
    bool $tmp2677 = $tmp2678.value;
    if (!$tmp2677) goto $l2679;
    panda$core$Bit $tmp2680 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2662);
    $tmp2677 = $tmp2680.value;
    $l2679:;
    panda$core$Bit $tmp2681 = { $tmp2677 };
    if ($tmp2681.value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp2682 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2662);
            panda$core$Object* $tmp2683 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2682));
            actualMethodType2667 = ((org$pandalanguage$pandac$Type*) $tmp2683);
        }
        {
            panda$core$Int64 $tmp2684 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2667->subtypes);
            panda$core$Int64 $tmp2685 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2684, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp2686 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2667->subtypes, $tmp2685);
            panda$core$String* $tmp2687 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2686));
            panda$core$Object* $tmp2688 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2687));
            actualResultType2668 = ((panda$core$String*) $tmp2688);
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp2689 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2662);
            panda$core$Object* $tmp2690 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2689));
            actualMethodType2667 = ((org$pandalanguage$pandac$Type*) $tmp2690);
        }
        {
            panda$core$String* $tmp2691 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
            panda$core$Object* $tmp2692 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2691));
            actualResultType2668 = ((panda$core$String*) $tmp2692);
        }
    }
    }
    panda$collections$Array* $tmp2694 = (panda$collections$Array*) pandaAlloc(41);
    $tmp2694->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2694->refCount.value = 1;
    panda$collections$Array$init($tmp2694);
    panda$core$Object* $tmp2696 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2694));
    argRefs2693 = ((panda$collections$Array*) $tmp2696);
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(argRefs2693, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2698 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Int64 $tmp2699 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2667->subtypes);
    panda$core$Int64 $tmp2700 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2698, $tmp2699);
    panda$core$Int64 $tmp2701 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2700, ((panda$core$Int64) { 1 }));
    offset2697 = $tmp2701;
    panda$core$Int64 $tmp2703 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_args);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2702, ((panda$core$Int64) { 0 }), $tmp2703, ((panda$core$Bit) { false }));
    int64_t $tmp2705 = $tmp2702.min.value;
    panda$core$Int64 i2704 = { $tmp2705 };
    int64_t $tmp2707 = $tmp2702.max.value;
    bool $tmp2708 = $tmp2702.inclusive.value;
    if ($tmp2708) goto $l2715; else goto $l2716;
    $l2715:;
    if ($tmp2705 <= $tmp2707) goto $l2709; else goto $l2711;
    $l2716:;
    if ($tmp2705 < $tmp2707) goto $l2709; else goto $l2711;
    $l2709:;
    {
        panda$core$Object* $tmp2718 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2704);
        panda$core$String* $tmp2719 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2718), p_out);
        panda$core$Object* $tmp2720 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2719));
        arg2717 = ((panda$core$String*) $tmp2720);
        panda$core$Bit $tmp2722 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2704, offset2697);
        bool $tmp2721 = $tmp2722.value;
        if (!$tmp2721) goto $l2723;
        panda$core$Int64 $tmp2724 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2704, offset2697);
        panda$core$Object* $tmp2725 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2667->subtypes, $tmp2724);
        panda$core$Object* $tmp2726 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2704);
        org$pandalanguage$pandac$Type* $tmp2728 = (($fn2727) ((org$pandalanguage$pandac$IRNode*) $tmp2726)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2726));
        panda$core$Bit $tmp2729 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2725), $tmp2728);
        $tmp2721 = $tmp2729.value;
        $l2723:;
        panda$core$Bit $tmp2730 = { $tmp2721 };
        if ($tmp2730.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) arg2717));
                panda$core$Object* $tmp2731 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_args, i2704);
                org$pandalanguage$pandac$Type* $tmp2733 = (($fn2732) ((org$pandalanguage$pandac$IRNode*) $tmp2731)->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp2731));
                panda$core$Int64 $tmp2734 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2704, offset2697);
                panda$core$Object* $tmp2735 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2667->subtypes, $tmp2734);
                panda$core$String* $tmp2736 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2717, $tmp2733, ((org$pandalanguage$pandac$Type*) $tmp2735), p_out);
                panda$core$Object* $tmp2737 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2736));
                arg2717 = ((panda$core$String*) $tmp2737);
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(argRefs2693, ((panda$core$Object*) arg2717));
    }
    $l2712:;
    int64_t $tmp2739 = $tmp2707 - i2704.value;
    if ($tmp2708) goto $l2740; else goto $l2741;
    $l2740:;
    if ((uint64_t) $tmp2739 >= 1) goto $l2738; else goto $l2711;
    $l2741:;
    if ((uint64_t) $tmp2739 > 1) goto $l2738; else goto $l2711;
    $l2738:;
    i2704.value += 1;
    goto $l2709;
    $l2711:;
    memset(&targetRef2744, 0, sizeof(targetRef2744));
    panda$core$Int64 $tmp2745 = panda$collections$Array$get_count$R$panda$core$Int64(argRefs2693);
    panda$core$Bit $tmp2746 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2745, ((panda$core$Int64) { 0 }));
    if ($tmp2746.value) {
    {
        {
            panda$core$Object* $tmp2747 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(argRefs2693, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2748 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((panda$core$String*) $tmp2747)));
            targetRef2744 = ((panda$core$String*) $tmp2748);
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp2749 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
            targetRef2744 = ((panda$core$String*) $tmp2749);
        }
    }
    }
    panda$core$String* $tmp2751 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, targetRef2744, m2662, isSuper2669, p_out);
    panda$core$Object* $tmp2752 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2751));
    methodRef2750 = ((panda$core$String*) $tmp2752);
    panda$core$Object* $tmp2755 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s2754));
    separator2753 = ((panda$core$String*) $tmp2755);
    panda$core$Bit $tmp2756 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2662);
    if ($tmp2756.value) {
    {
        panda$core$Int64 $tmp2757 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2757;
        panda$core$Int64$wrapper* $tmp2760;
        $tmp2760 = (panda$core$Int64$wrapper*) pandaAlloc(24);
        $tmp2760->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2760->refCount = 1;
        $tmp2760->value = self->varCount;
        panda$core$String* $tmp2761 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2759, ((panda$core$Object*) $tmp2760));
        panda$core$Object* $tmp2762 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2761));
        indirectVar2758 = ((panda$core$String*) $tmp2762);
        panda$core$String* $tmp2764 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$Object* $tmp2765 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2764));
        resultType2763 = ((panda$core$String*) $tmp2765);
        panda$core$String* $tmp2766 = panda$core$String$convert$R$panda$core$String(resultType2763);
        panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2766, &$s2767);
        panda$core$String* $tmp2769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2768, indirectVar2758);
        panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2769, &$s2770);
        (($fn2772) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2771);
        panda$core$String* $tmp2773 = panda$core$String$convert$R$panda$core$String(methodRef2750);
        panda$core$String* $tmp2775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2773, &$s2774);
        panda$core$String* $tmp2776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2775, resultType2763);
        panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2776, &$s2777);
        panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, indirectVar2758);
        panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2779, &$s2780);
        (($fn2782) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2781);
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator2753));
            panda$core$Object* $tmp2784 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s2783));
            separator2753 = ((panda$core$String*) $tmp2784);
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2785 = panda$core$String$convert$R$panda$core$String(methodRef2750);
        panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2785, &$s2786);
        (($fn2788) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2787);
    }
    }
    {
        ITable* $tmp2790 = ((panda$collections$Iterable*) argRefs2693)->$class->itable;
        while ($tmp2790->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2790 = $tmp2790->next;
        }
        $fn2792 $tmp2791 = $tmp2790->methods[0];
        panda$collections$Iterator* $tmp2793 = $tmp2791(((panda$collections$Iterable*) argRefs2693));
        a$Iter2789 = $tmp2793;
        $l2794:;
        ITable* $tmp2796 = a$Iter2789->$class->itable;
        while ($tmp2796->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2796 = $tmp2796->next;
        }
        $fn2798 $tmp2797 = $tmp2796->methods[0];
        panda$core$Bit $tmp2799 = $tmp2797(a$Iter2789);
        panda$core$Bit $tmp2800 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2799);
        if (!$tmp2800.value) goto $l2795;
        {
            ITable* $tmp2802 = a$Iter2789->$class->itable;
            while ($tmp2802->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2802 = $tmp2802->next;
            }
            $fn2804 $tmp2803 = $tmp2802->methods[1];
            panda$core$Object* $tmp2805 = $tmp2803(a$Iter2789);
            a2801 = ((panda$core$String*) $tmp2805);
            (($fn2806) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2753);
            (($fn2807) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2801);
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator2753));
                panda$core$Object* $tmp2809 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s2808));
                separator2753 = ((panda$core$String*) $tmp2809);
            }
        }
        goto $l2794;
        $l2795:;
    }
    (($fn2811) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2810);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$collections$ImmutableArray* p_ifTrue, org$pandalanguage$pandac$IRNode* p_ifFalse, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* testRef2812;
    panda$core$String* $tmp2813 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$Object* $tmp2814 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2813));
    testRef2812 = ((panda$core$String*) $tmp2814);
    panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2815, testRef2812);
    panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, &$s2817);
    (($fn2819) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2818);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_ifTrue, p_out);
    (($fn2821) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2820);
    if (((panda$core$Bit) { p_ifFalse != NULL }).value) {
    {
        (($fn2823) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2822);
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_ifFalse, p_out);
        (($fn2825) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2824);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range2838;
    org$pandalanguage$pandac$Type* t2841;
    panda$core$String* llt2846;
    panda$core$String* indexType2849;
    org$pandalanguage$pandac$ClassDecl* cl2857;
    org$pandalanguage$pandac$FieldDecl* field2866;
    panda$core$String* numberType2873;
    panda$core$String* index2876;
    org$pandalanguage$pandac$IRNode* $match$1461_92877;
    org$pandalanguage$pandac$Variable* variable2879;
    panda$core$String* start2883;
    panda$core$String* indexValuePtr2896;
    panda$core$String* end2911;
    panda$core$String* inclusive2924;
    panda$core$String* loopStart2935;
    panda$core$String* loopBody2938;
    panda$core$String* loopEnd2941;
    panda$core$String* loopTest2944;
    panda$core$String* forwardEntry2949;
    panda$core$String* backwardEntry2952;
    panda$core$String* signPrefix2955;
    panda$core$String* unsigned2956;
    panda$core$String* forwardEntryInclusive2974;
    panda$core$String* forwardEntryExclusive2977;
    panda$core$String* loopInc3020;
    panda$core$String* forwardDelta3023;
    panda$core$String* forwardInclusiveLabel3039;
    panda$core$String* forwardExclusiveLabel3042;
    panda$core$String* forwardExclusiveTest3072;
    panda$core$String* inc3090;
    org$pandalanguage$pandac$Type* $tmp2827 = (($fn2826) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp2828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2827->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2828.value);
    org$pandalanguage$pandac$Type* $tmp2830 = (($fn2829) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp2831 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2830->subtypes);
    panda$core$Bit $tmp2832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2831, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2832.value);
    org$pandalanguage$pandac$Type* $tmp2834 = (($fn2833) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2835 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2834->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2837 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2835))->name, &$s2836);
    PANDA_ASSERT($tmp2837.value);
    panda$core$String* $tmp2839 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    panda$core$Object* $tmp2840 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2839));
    range2838 = ((panda$core$String*) $tmp2840);
    org$pandalanguage$pandac$Type* $tmp2843 = (($fn2842) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp2844 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2843->subtypes, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2845 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp2844)));
    t2841 = ((org$pandalanguage$pandac$Type*) $tmp2845);
    panda$core$String* $tmp2847 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2841);
    panda$core$Object* $tmp2848 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2847));
    llt2846 = ((panda$core$String*) $tmp2848);
    memset(&indexType2849, 0, sizeof(indexType2849));
    panda$core$Bit $tmp2850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2841->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2850.value) {
    {
        panda$core$Int64 $tmp2851 = panda$collections$Array$get_count$R$panda$core$Int64(t2841->subtypes);
        panda$core$Bit $tmp2852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2851, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2852.value);
        {
            panda$core$Object* $tmp2853 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2841->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2854 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2853));
            panda$core$Object* $tmp2855 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2854));
            indexType2849 = ((panda$core$String*) $tmp2855);
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp2856 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) llt2846));
            indexType2849 = ((panda$core$String*) $tmp2856);
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2858 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2841);
    panda$core$Object* $tmp2859 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2858));
    cl2857 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2859);
    PANDA_ASSERT(((panda$core$Bit) { cl2857 != NULL }).value);
    panda$collections$ListView* $tmp2860 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2857);
    ITable* $tmp2861 = ((panda$collections$CollectionView*) $tmp2860)->$class->itable;
    while ($tmp2861->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2861 = $tmp2861->next;
    }
    $fn2863 $tmp2862 = $tmp2861->methods[0];
    panda$core$Int64 $tmp2864 = $tmp2862(((panda$collections$CollectionView*) $tmp2860));
    panda$core$Bit $tmp2865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2864, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2865.value);
    panda$collections$ListView* $tmp2867 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2857);
    ITable* $tmp2868 = $tmp2867->$class->itable;
    while ($tmp2868->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2868 = $tmp2868->next;
    }
    $fn2870 $tmp2869 = $tmp2868->methods[0];
    panda$core$Object* $tmp2871 = $tmp2869($tmp2867, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2872 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp2871)));
    field2866 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2872);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2866);
    panda$core$String* $tmp2874 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2866->type);
    panda$core$Object* $tmp2875 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2874));
    numberType2873 = ((panda$core$String*) $tmp2875);
    memset(&index2876, 0, sizeof(index2876));
    {
        $match$1461_92877 = p_target;
        panda$core$Bit $tmp2878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1461_92877->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2878.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2880 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1461_92877->$data + 16));
            variable2879 = *$tmp2880;
            {
                panda$core$String* $tmp2881 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable2879);
                panda$core$Object* $tmp2882 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2881));
                index2876 = ((panda$core$String*) $tmp2882);
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp2884 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp2885 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2884));
    start2883 = ((panda$core$String*) $tmp2885);
    panda$core$String* $tmp2886 = panda$core$String$convert$R$panda$core$String(numberType2873);
    panda$core$String* $tmp2888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2886, &$s2887);
    panda$core$String* $tmp2889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2888, start2883);
    panda$core$String* $tmp2891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2889, &$s2890);
    panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2891, range2838);
    panda$core$String* $tmp2894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2892, &$s2893);
    (($fn2895) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2894);
    panda$core$String* $tmp2897 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp2898 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2897));
    indexValuePtr2896 = ((panda$core$String*) $tmp2898);
    org$pandalanguage$pandac$Type* $tmp2899 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2857);
    panda$core$String* $tmp2900 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2899);
    panda$core$String* $tmp2901 = panda$core$String$convert$R$panda$core$String($tmp2900);
    panda$core$String* $tmp2903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2901, &$s2902);
    panda$core$String* $tmp2904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2903, index2876);
    panda$core$String* $tmp2906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2904, &$s2905);
    panda$core$String* $tmp2907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2906, start2883);
    panda$core$String* $tmp2909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2907, &$s2908);
    (($fn2910) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2909);
    panda$core$String* $tmp2912 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp2913 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2912));
    end2911 = ((panda$core$String*) $tmp2913);
    panda$core$String* $tmp2914 = panda$core$String$convert$R$panda$core$String(numberType2873);
    panda$core$String* $tmp2916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2914, &$s2915);
    panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2916, end2911);
    panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2917, &$s2918);
    panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, range2838);
    panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2920, &$s2921);
    (($fn2923) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2922);
    panda$core$String* $tmp2925 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp2926 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2925));
    inclusive2924 = ((panda$core$String*) $tmp2926);
    panda$core$String* $tmp2928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2927, inclusive2924);
    panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2928, &$s2929);
    panda$core$String* $tmp2931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2930, range2838);
    panda$core$String* $tmp2933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2931, &$s2932);
    (($fn2934) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2933);
    panda$core$String* $tmp2936 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp2937 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2936));
    loopStart2935 = ((panda$core$String*) $tmp2937);
    panda$core$String* $tmp2939 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp2940 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2939));
    loopBody2938 = ((panda$core$String*) $tmp2940);
    panda$core$String* $tmp2942 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp2943 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2942));
    loopEnd2941 = ((panda$core$String*) $tmp2943);
    panda$core$String* $tmp2945 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp2946 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2945));
    loopTest2944 = ((panda$core$String*) $tmp2946);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2947 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaAlloc(40);
    $tmp2947->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2947->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2947, p_label, loopEnd2941, loopTest2944);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2947));
    panda$core$String* $tmp2950 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp2951 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2950));
    forwardEntry2949 = ((panda$core$String*) $tmp2951);
    panda$core$String* $tmp2953 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp2954 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2953));
    backwardEntry2952 = ((panda$core$String*) $tmp2954);
    memset(&signPrefix2955, 0, sizeof(signPrefix2955));
    memset(&unsigned2956, 0, sizeof(unsigned2956));
    panda$core$Bit $tmp2958 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2841)->name, &$s2957);
    if ($tmp2958.value) {
    {
        {
            panda$core$Object* $tmp2960 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s2959));
            signPrefix2955 = ((panda$core$String*) $tmp2960);
        }
        {
            panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2961, numberType2873);
            panda$core$Object* $tmp2963 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2962));
            unsigned2956 = ((panda$core$String*) $tmp2963);
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp2966 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2841)->name, &$s2965);
        bool $tmp2964 = $tmp2966.value;
        if ($tmp2964) goto $l2967;
        panda$core$Bit $tmp2969 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2841)->name, &$s2968);
        $tmp2964 = $tmp2969.value;
        $l2967:;
        panda$core$Bit $tmp2970 = { $tmp2964 };
        PANDA_ASSERT($tmp2970.value);
        {
            panda$core$Object* $tmp2972 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s2971));
            signPrefix2955 = ((panda$core$String*) $tmp2972);
        }
        {
            panda$core$Object* $tmp2973 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) numberType2873));
            unsigned2956 = ((panda$core$String*) $tmp2973);
        }
    }
    }
    panda$core$String* $tmp2975 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp2976 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2975));
    forwardEntryInclusive2974 = ((panda$core$String*) $tmp2976);
    panda$core$String* $tmp2978 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp2979 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2978));
    forwardEntryExclusive2977 = ((panda$core$String*) $tmp2979);
    panda$core$String* $tmp2981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2980, inclusive2924);
    panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2981, &$s2982);
    panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, forwardEntryInclusive2974);
    panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2984, &$s2985);
    panda$core$String* $tmp2987 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2977);
    panda$core$String* $tmp2989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2987, &$s2988);
    panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2986, $tmp2989);
    (($fn2991) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2990);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2974, p_out);
    panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2992, start2883);
    panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2993, &$s2994);
    panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, end2911);
    panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2996, &$s2997);
    panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2998, loopStart2935);
    panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2999, &$s3000);
    panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, loopEnd2941);
    panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, &$s3003);
    (($fn3005) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3004);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2977, p_out);
    panda$core$String* $tmp3007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3006, start2883);
    panda$core$String* $tmp3009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3007, &$s3008);
    panda$core$String* $tmp3010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3009, end2911);
    panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3010, &$s3011);
    panda$core$String* $tmp3013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3012, loopStart2935);
    panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, &$s3014);
    panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3015, loopEnd2941);
    panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, &$s3017);
    (($fn3019) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3018);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2935, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2944, p_out);
    panda$core$String* $tmp3021 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3022 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3021));
    loopInc3020 = ((panda$core$String*) $tmp3022);
    panda$core$String* $tmp3024 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp3025 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3024));
    forwardDelta3023 = ((panda$core$String*) $tmp3025);
    panda$core$String* $tmp3026 = panda$core$String$convert$R$panda$core$String(numberType2873);
    panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3026, &$s3027);
    panda$core$String* $tmp3029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3028, forwardDelta3023);
    panda$core$String* $tmp3031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3029, &$s3030);
    panda$core$String* $tmp3032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3031, end2911);
    panda$core$String* $tmp3034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3032, &$s3033);
    panda$core$String* $tmp3035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3034, index2876);
    panda$core$String* $tmp3037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3035, &$s3036);
    (($fn3038) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3037);
    panda$core$String* $tmp3040 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3041 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3040));
    forwardInclusiveLabel3039 = ((panda$core$String*) $tmp3041);
    panda$core$String* $tmp3043 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3044 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3043));
    forwardExclusiveLabel3042 = ((panda$core$String*) $tmp3044);
    panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3045, inclusive2924);
    panda$core$String* $tmp3048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3046, &$s3047);
    panda$core$String* $tmp3049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3048, forwardInclusiveLabel3039);
    panda$core$String* $tmp3051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3049, &$s3050);
    panda$core$String* $tmp3052 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel3042);
    panda$core$String* $tmp3054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3052, &$s3053);
    panda$core$String* $tmp3055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3051, $tmp3054);
    (($fn3056) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3055);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel3039, p_out);
    panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3057, unsigned2956);
    panda$core$String* $tmp3060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, &$s3059);
    panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3060, forwardDelta3023);
    panda$core$String* $tmp3063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3061, &$s3062);
    panda$core$String* $tmp3064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3063, loopInc3020);
    panda$core$String* $tmp3066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3064, &$s3065);
    panda$core$String* $tmp3067 = panda$core$String$convert$R$panda$core$String(loopEnd2941);
    panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3067, &$s3068);
    panda$core$String* $tmp3070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3066, $tmp3069);
    (($fn3071) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3070);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel3042, p_out);
    panda$core$String* $tmp3073 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp3074 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3073));
    forwardExclusiveTest3072 = ((panda$core$String*) $tmp3074);
    panda$core$String* $tmp3076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3075, unsigned2956);
    panda$core$String* $tmp3078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3076, &$s3077);
    panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3078, forwardDelta3023);
    panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3079, &$s3080);
    panda$core$String* $tmp3082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3081, loopInc3020);
    panda$core$String* $tmp3084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3082, &$s3083);
    panda$core$String* $tmp3085 = panda$core$String$convert$R$panda$core$String(loopEnd2941);
    panda$core$String* $tmp3087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3085, &$s3086);
    panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3084, $tmp3087);
    (($fn3089) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3088);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc3020, p_out);
    panda$core$String* $tmp3091 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp3092 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3091));
    inc3090 = ((panda$core$String*) $tmp3092);
    panda$core$String* $tmp3093 = panda$core$String$convert$R$panda$core$String(index2876);
    panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, &$s3094);
    (($fn3096) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3095);
    panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3097, loopStart2935);
    panda$core$String* $tmp3100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3098, &$s3099);
    (($fn3101) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3100);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2941, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* range3114;
    org$pandalanguage$pandac$Type* t3117;
    org$pandalanguage$pandac$Type* stepType3122;
    panda$core$String* llt3127;
    panda$core$String* indexType3130;
    org$pandalanguage$pandac$ClassDecl* cl3138;
    org$pandalanguage$pandac$FieldDecl* field3147;
    panda$core$String* numberType3154;
    panda$core$String* index3157;
    org$pandalanguage$pandac$IRNode* $match$1573_93158;
    org$pandalanguage$pandac$Variable* variable3160;
    panda$core$String* start3164;
    panda$core$String* indexValuePtr3177;
    panda$core$String* end3192;
    panda$core$String* step3205;
    org$pandalanguage$pandac$ClassDecl* stepCl3208;
    org$pandalanguage$pandac$FieldDecl* stepField3217;
    panda$core$String* inclusive3235;
    panda$core$String* loopStart3246;
    panda$core$String* loopBody3249;
    panda$core$String* loopEnd3252;
    panda$core$String* loopTest3255;
    panda$core$String* forwardEntry3260;
    panda$core$String* backwardEntry3263;
    panda$core$String* unsigned3266;
    panda$core$String* signPrefix3267;
    panda$core$String* direction3287;
    panda$core$String* forwardEntryInclusive3313;
    panda$core$String* forwardEntryExclusive3316;
    panda$core$String* backwardEntryInclusive3359;
    panda$core$String* backwardEntryExclusive3362;
    panda$core$String* backwardEntryExclusiveTest3391;
    panda$core$String* loopInc3408;
    panda$core$String* forwardLabel3411;
    panda$core$String* backwardLabel3414;
    panda$core$String* forwardDelta3428;
    panda$core$String* forwardInclusiveLabel3444;
    panda$core$String* forwardExclusiveLabel3447;
    panda$core$String* forwardExclusiveTest3480;
    panda$core$String* backwardDelta3501;
    panda$core$String* backwardInclusiveLabel3517;
    panda$core$String* backwardExclusiveLabel3520;
    panda$core$String* inc3573;
    org$pandalanguage$pandac$Type* $tmp3103 = (($fn3102) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3103->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp3104.value);
    org$pandalanguage$pandac$Type* $tmp3106 = (($fn3105) p_list->$class->vtable[2])(p_list);
    panda$core$Int64 $tmp3107 = panda$collections$Array$get_count$R$panda$core$Int64($tmp3106->subtypes);
    panda$core$Bit $tmp3108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3107, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3108.value);
    org$pandalanguage$pandac$Type* $tmp3110 = (($fn3109) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp3111 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3110->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3113 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp3111))->name, &$s3112);
    PANDA_ASSERT($tmp3113.value);
    panda$core$String* $tmp3115 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_list, p_out);
    panda$core$Object* $tmp3116 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3115));
    range3114 = ((panda$core$String*) $tmp3116);
    org$pandalanguage$pandac$Type* $tmp3119 = (($fn3118) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp3120 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3119->subtypes, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp3121 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3120)));
    t3117 = ((org$pandalanguage$pandac$Type*) $tmp3121);
    org$pandalanguage$pandac$Type* $tmp3124 = (($fn3123) p_list->$class->vtable[2])(p_list);
    panda$core$Object* $tmp3125 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3124->subtypes, ((panda$core$Int64) { 2 }));
    panda$core$Object* $tmp3126 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3125)));
    stepType3122 = ((org$pandalanguage$pandac$Type*) $tmp3126);
    panda$core$String* $tmp3128 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t3117);
    panda$core$Object* $tmp3129 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3128));
    llt3127 = ((panda$core$String*) $tmp3129);
    memset(&indexType3130, 0, sizeof(indexType3130));
    panda$core$Bit $tmp3131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t3117->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3131.value) {
    {
        panda$core$Int64 $tmp3132 = panda$collections$Array$get_count$R$panda$core$Int64(t3117->subtypes);
        panda$core$Bit $tmp3133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3132, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3133.value);
        {
            panda$core$Object* $tmp3134 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t3117->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3135 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3134));
            panda$core$Object* $tmp3136 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3135));
            indexType3130 = ((panda$core$String*) $tmp3136);
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp3137 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) llt3127));
            indexType3130 = ((panda$core$String*) $tmp3137);
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp3139 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t3117);
    panda$core$Object* $tmp3140 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3139));
    cl3138 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3140);
    PANDA_ASSERT(((panda$core$Bit) { cl3138 != NULL }).value);
    panda$collections$ListView* $tmp3141 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3138);
    ITable* $tmp3142 = ((panda$collections$CollectionView*) $tmp3141)->$class->itable;
    while ($tmp3142->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3142 = $tmp3142->next;
    }
    $fn3144 $tmp3143 = $tmp3142->methods[0];
    panda$core$Int64 $tmp3145 = $tmp3143(((panda$collections$CollectionView*) $tmp3141));
    panda$core$Bit $tmp3146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3145, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3146.value);
    panda$collections$ListView* $tmp3148 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3138);
    ITable* $tmp3149 = $tmp3148->$class->itable;
    while ($tmp3149->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp3149 = $tmp3149->next;
    }
    $fn3151 $tmp3150 = $tmp3149->methods[0];
    panda$core$Object* $tmp3152 = $tmp3150($tmp3148, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3153 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3152)));
    field3147 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3153);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field3147);
    panda$core$String* $tmp3155 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3147->type);
    panda$core$Object* $tmp3156 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3155));
    numberType3154 = ((panda$core$String*) $tmp3156);
    memset(&index3157, 0, sizeof(index3157));
    {
        $match$1573_93158 = p_target;
        panda$core$Bit $tmp3159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1573_93158->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp3159.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3161 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1573_93158->$data + 16));
            variable3160 = *$tmp3161;
            {
                panda$core$String* $tmp3162 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, variable3160);
                panda$core$Object* $tmp3163 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3162));
                index3157 = ((panda$core$String*) $tmp3163);
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    panda$core$String* $tmp3165 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp3166 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3165));
    start3164 = ((panda$core$String*) $tmp3166);
    panda$core$String* $tmp3167 = panda$core$String$convert$R$panda$core$String(numberType3154);
    panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3167, &$s3168);
    panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3169, start3164);
    panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, &$s3171);
    panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3172, range3114);
    panda$core$String* $tmp3175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3173, &$s3174);
    (($fn3176) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3175);
    panda$core$String* $tmp3178 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp3179 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3178));
    indexValuePtr3177 = ((panda$core$String*) $tmp3179);
    org$pandalanguage$pandac$Type* $tmp3180 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3138);
    panda$core$String* $tmp3181 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3180);
    panda$core$String* $tmp3182 = panda$core$String$convert$R$panda$core$String($tmp3181);
    panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3182, &$s3183);
    panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3184, index3157);
    panda$core$String* $tmp3187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3185, &$s3186);
    panda$core$String* $tmp3188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3187, start3164);
    panda$core$String* $tmp3190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3188, &$s3189);
    (($fn3191) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3190);
    panda$core$String* $tmp3193 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp3194 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3193));
    end3192 = ((panda$core$String*) $tmp3194);
    panda$core$String* $tmp3195 = panda$core$String$convert$R$panda$core$String(numberType3154);
    panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3195, &$s3196);
    panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, end3192);
    panda$core$String* $tmp3200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3198, &$s3199);
    panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3200, range3114);
    panda$core$String* $tmp3203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3201, &$s3202);
    (($fn3204) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3203);
    panda$core$String* $tmp3206 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp3207 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3206));
    step3205 = ((panda$core$String*) $tmp3207);
    org$pandalanguage$pandac$ClassDecl* $tmp3209 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, stepType3122);
    panda$core$Object* $tmp3210 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3209));
    stepCl3208 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3210);
    PANDA_ASSERT(((panda$core$Bit) { stepCl3208 != NULL }).value);
    panda$collections$ListView* $tmp3211 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl3208);
    ITable* $tmp3212 = ((panda$collections$CollectionView*) $tmp3211)->$class->itable;
    while ($tmp3212->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3212 = $tmp3212->next;
    }
    $fn3214 $tmp3213 = $tmp3212->methods[0];
    panda$core$Int64 $tmp3215 = $tmp3213(((panda$collections$CollectionView*) $tmp3211));
    panda$core$Bit $tmp3216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3215, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3216.value);
    panda$collections$ListView* $tmp3218 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl3208);
    ITable* $tmp3219 = $tmp3218->$class->itable;
    while ($tmp3219->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp3219 = $tmp3219->next;
    }
    $fn3221 $tmp3220 = $tmp3219->methods[0];
    panda$core$Object* $tmp3222 = $tmp3220($tmp3218, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3223 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3222)));
    stepField3217 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3223);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, stepField3217);
    panda$core$String* $tmp3224 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, stepField3217->type);
    panda$core$String* $tmp3225 = panda$core$String$convert$R$panda$core$String($tmp3224);
    panda$core$String* $tmp3227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3225, &$s3226);
    panda$core$String* $tmp3228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3227, step3205);
    panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3228, &$s3229);
    panda$core$String* $tmp3231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3230, range3114);
    panda$core$String* $tmp3233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3231, &$s3232);
    (($fn3234) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3233);
    panda$core$String* $tmp3236 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp3237 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3236));
    inclusive3235 = ((panda$core$String*) $tmp3237);
    panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3238, inclusive3235);
    panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3239, &$s3240);
    panda$core$String* $tmp3242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, range3114);
    panda$core$String* $tmp3244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3242, &$s3243);
    (($fn3245) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3244);
    panda$core$String* $tmp3247 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3248 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3247));
    loopStart3246 = ((panda$core$String*) $tmp3248);
    panda$core$String* $tmp3250 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3251 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3250));
    loopBody3249 = ((panda$core$String*) $tmp3251);
    panda$core$String* $tmp3253 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3254 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3253));
    loopEnd3252 = ((panda$core$String*) $tmp3254);
    panda$core$String* $tmp3256 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3257 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3256));
    loopTest3255 = ((panda$core$String*) $tmp3257);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3258 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaAlloc(40);
    $tmp3258->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3258->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3258, p_label, loopEnd3252, loopTest3255);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3258));
    panda$core$String* $tmp3261 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3262 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3261));
    forwardEntry3260 = ((panda$core$String*) $tmp3262);
    panda$core$String* $tmp3264 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3265 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3264));
    backwardEntry3263 = ((panda$core$String*) $tmp3265);
    memset(&unsigned3266, 0, sizeof(unsigned3266));
    memset(&signPrefix3267, 0, sizeof(signPrefix3267));
    panda$core$Bit $tmp3269 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType3122)->name, &$s3268);
    if ($tmp3269.value) {
    {
        {
            panda$core$Object* $tmp3271 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s3270));
            signPrefix3267 = ((panda$core$String*) $tmp3271);
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp3274 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType3122)->name, &$s3273);
        bool $tmp3272 = $tmp3274.value;
        if ($tmp3272) goto $l3275;
        panda$core$Bit $tmp3277 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType3122)->name, &$s3276);
        $tmp3272 = $tmp3277.value;
        $l3275:;
        panda$core$Bit $tmp3278 = { $tmp3272 };
        PANDA_ASSERT($tmp3278.value);
        {
            panda$core$Object* $tmp3280 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s3279));
            signPrefix3267 = ((panda$core$String*) $tmp3280);
        }
    }
    }
    panda$core$Bit $tmp3282 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(numberType3154, &$s3281);
    if ($tmp3282.value) {
    {
        {
            panda$core$Object* $tmp3283 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) numberType3154));
            unsigned3266 = ((panda$core$String*) $tmp3283);
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3284, numberType3154);
            panda$core$Object* $tmp3286 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3285));
            unsigned3266 = ((panda$core$String*) $tmp3286);
        }
    }
    }
    memset(&direction3287, 0, sizeof(direction3287));
    panda$core$Bit $tmp3289 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix3267, &$s3288);
    if ($tmp3289.value) {
    {
        {
            panda$core$String* $tmp3290 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            panda$core$Object* $tmp3291 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3290));
            direction3287 = ((panda$core$String*) $tmp3291);
        }
        panda$core$String* $tmp3293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3292, direction3287);
        panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3293, &$s3294);
        panda$core$String* $tmp3296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3295, step3205);
        panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3296, &$s3297);
        (($fn3299) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3298);
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp3301 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s3300));
            direction3287 = ((panda$core$String*) $tmp3301);
        }
    }
    }
    panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3302, direction3287);
    panda$core$String* $tmp3305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3303, &$s3304);
    panda$core$String* $tmp3306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3305, forwardEntry3260);
    panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3306, &$s3307);
    panda$core$String* $tmp3309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3308, backwardEntry3263);
    panda$core$String* $tmp3311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3309, &$s3310);
    (($fn3312) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3311);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry3260, p_out);
    panda$core$String* $tmp3314 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3315 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3314));
    forwardEntryInclusive3313 = ((panda$core$String*) $tmp3315);
    panda$core$String* $tmp3317 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3318 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3317));
    forwardEntryExclusive3316 = ((panda$core$String*) $tmp3318);
    panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3319, inclusive3235);
    panda$core$String* $tmp3322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3320, &$s3321);
    panda$core$String* $tmp3323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3322, forwardEntryInclusive3313);
    panda$core$String* $tmp3325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3323, &$s3324);
    panda$core$String* $tmp3326 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive3316);
    panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3326, &$s3327);
    panda$core$String* $tmp3329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3325, $tmp3328);
    (($fn3330) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3329);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive3313, p_out);
    panda$core$String* $tmp3332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3331, start3164);
    panda$core$String* $tmp3334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3332, &$s3333);
    panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3334, end3192);
    panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, &$s3336);
    panda$core$String* $tmp3338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, loopStart3246);
    panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3338, &$s3339);
    panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3340, loopEnd3252);
    panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, &$s3342);
    (($fn3344) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3343);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive3316, p_out);
    panda$core$String* $tmp3346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3345, start3164);
    panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3346, &$s3347);
    panda$core$String* $tmp3349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3348, end3192);
    panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3349, &$s3350);
    panda$core$String* $tmp3352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3351, loopStart3246);
    panda$core$String* $tmp3354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3352, &$s3353);
    panda$core$String* $tmp3355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3354, loopEnd3252);
    panda$core$String* $tmp3357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3355, &$s3356);
    (($fn3358) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3357);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry3263, p_out);
    panda$core$String* $tmp3360 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3361 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3360));
    backwardEntryInclusive3359 = ((panda$core$String*) $tmp3361);
    panda$core$String* $tmp3363 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3364 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3363));
    backwardEntryExclusive3362 = ((panda$core$String*) $tmp3364);
    panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3365, inclusive3235);
    panda$core$String* $tmp3368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3366, &$s3367);
    panda$core$String* $tmp3369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3368, backwardEntryInclusive3359);
    panda$core$String* $tmp3371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3369, &$s3370);
    panda$core$String* $tmp3372 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive3362);
    panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3372, &$s3373);
    panda$core$String* $tmp3375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3371, $tmp3374);
    (($fn3376) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3375);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive3359, p_out);
    panda$core$String* $tmp3378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3377, start3164);
    panda$core$String* $tmp3380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3378, &$s3379);
    panda$core$String* $tmp3381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3380, end3192);
    panda$core$String* $tmp3383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3381, &$s3382);
    panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3383, loopStart3246);
    panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3384, &$s3385);
    panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3386, loopEnd3252);
    panda$core$String* $tmp3389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3387, &$s3388);
    (($fn3390) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3389);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive3362, p_out);
    panda$core$String* $tmp3392 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp3393 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3392));
    backwardEntryExclusiveTest3391 = ((panda$core$String*) $tmp3393);
    panda$core$String* $tmp3395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3394, start3164);
    panda$core$String* $tmp3397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3395, &$s3396);
    panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3397, end3192);
    panda$core$String* $tmp3400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3398, &$s3399);
    panda$core$String* $tmp3401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3400, loopStart3246);
    panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3401, &$s3402);
    panda$core$String* $tmp3404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3403, loopEnd3252);
    panda$core$String* $tmp3406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3404, &$s3405);
    (($fn3407) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3406);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3246, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest3255, p_out);
    panda$core$String* $tmp3409 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3410 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3409));
    loopInc3408 = ((panda$core$String*) $tmp3410);
    panda$core$String* $tmp3412 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3413 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3412));
    forwardLabel3411 = ((panda$core$String*) $tmp3413);
    panda$core$String* $tmp3415 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3416 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3415));
    backwardLabel3414 = ((panda$core$String*) $tmp3416);
    panda$core$String* $tmp3418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3417, direction3287);
    panda$core$String* $tmp3420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3418, &$s3419);
    panda$core$String* $tmp3421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3420, forwardLabel3411);
    panda$core$String* $tmp3423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3421, &$s3422);
    panda$core$String* $tmp3424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3423, backwardLabel3414);
    panda$core$String* $tmp3426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3424, &$s3425);
    (($fn3427) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3426);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel3411, p_out);
    panda$core$String* $tmp3429 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp3430 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3429));
    forwardDelta3428 = ((panda$core$String*) $tmp3430);
    panda$core$String* $tmp3431 = panda$core$String$convert$R$panda$core$String(numberType3154);
    panda$core$String* $tmp3433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3431, &$s3432);
    panda$core$String* $tmp3434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3433, forwardDelta3428);
    panda$core$String* $tmp3436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3434, &$s3435);
    panda$core$String* $tmp3437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3436, end3192);
    panda$core$String* $tmp3439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3437, &$s3438);
    panda$core$String* $tmp3440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3439, index3157);
    panda$core$String* $tmp3442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3440, &$s3441);
    (($fn3443) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3442);
    panda$core$String* $tmp3445 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3446 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3445));
    forwardInclusiveLabel3444 = ((panda$core$String*) $tmp3446);
    panda$core$String* $tmp3448 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3449 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3448));
    forwardExclusiveLabel3447 = ((panda$core$String*) $tmp3449);
    panda$core$String* $tmp3451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3450, inclusive3235);
    panda$core$String* $tmp3453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3451, &$s3452);
    panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3453, forwardInclusiveLabel3444);
    panda$core$String* $tmp3456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3454, &$s3455);
    panda$core$String* $tmp3457 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel3447);
    panda$core$String* $tmp3459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3457, &$s3458);
    panda$core$String* $tmp3460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3456, $tmp3459);
    (($fn3461) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3460);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel3444, p_out);
    panda$core$String* $tmp3463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3462, unsigned3266);
    panda$core$String* $tmp3465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3463, &$s3464);
    panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3465, forwardDelta3428);
    panda$core$String* $tmp3468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3466, &$s3467);
    panda$core$String* $tmp3469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3468, step3205);
    panda$core$String* $tmp3471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3469, &$s3470);
    panda$core$String* $tmp3472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3471, loopInc3408);
    panda$core$String* $tmp3474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3472, &$s3473);
    panda$core$String* $tmp3475 = panda$core$String$convert$R$panda$core$String(loopEnd3252);
    panda$core$String* $tmp3477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3475, &$s3476);
    panda$core$String* $tmp3478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3474, $tmp3477);
    (($fn3479) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3478);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel3447, p_out);
    panda$core$String* $tmp3481 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp3482 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3481));
    forwardExclusiveTest3480 = ((panda$core$String*) $tmp3482);
    panda$core$String* $tmp3484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3483, unsigned3266);
    panda$core$String* $tmp3486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3484, &$s3485);
    panda$core$String* $tmp3487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3486, forwardDelta3428);
    panda$core$String* $tmp3489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3487, &$s3488);
    panda$core$String* $tmp3490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3489, step3205);
    panda$core$String* $tmp3492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3490, &$s3491);
    panda$core$String* $tmp3493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3492, loopInc3408);
    panda$core$String* $tmp3495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3493, &$s3494);
    panda$core$String* $tmp3496 = panda$core$String$convert$R$panda$core$String(loopEnd3252);
    panda$core$String* $tmp3498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3496, &$s3497);
    panda$core$String* $tmp3499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3495, $tmp3498);
    (($fn3500) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3499);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel3414, p_out);
    panda$core$String* $tmp3502 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp3503 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3502));
    backwardDelta3501 = ((panda$core$String*) $tmp3503);
    panda$core$String* $tmp3504 = panda$core$String$convert$R$panda$core$String(numberType3154);
    panda$core$String* $tmp3506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3504, &$s3505);
    panda$core$String* $tmp3507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3506, backwardDelta3501);
    panda$core$String* $tmp3509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3507, &$s3508);
    panda$core$String* $tmp3510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3509, index3157);
    panda$core$String* $tmp3512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3510, &$s3511);
    panda$core$String* $tmp3513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3512, end3192);
    panda$core$String* $tmp3515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3513, &$s3514);
    (($fn3516) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3515);
    panda$core$String* $tmp3518 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3519 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3518));
    backwardInclusiveLabel3517 = ((panda$core$String*) $tmp3519);
    panda$core$String* $tmp3521 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3522 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3521));
    backwardExclusiveLabel3520 = ((panda$core$String*) $tmp3522);
    panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3523, inclusive3235);
    panda$core$String* $tmp3526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3524, &$s3525);
    panda$core$String* $tmp3527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3526, backwardInclusiveLabel3517);
    panda$core$String* $tmp3529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3527, &$s3528);
    panda$core$String* $tmp3530 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel3520);
    panda$core$String* $tmp3532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3530, &$s3531);
    panda$core$String* $tmp3533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3529, $tmp3532);
    (($fn3534) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3533);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel3517, p_out);
    panda$core$String* $tmp3536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3535, unsigned3266);
    panda$core$String* $tmp3538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3536, &$s3537);
    panda$core$String* $tmp3539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3538, backwardDelta3501);
    panda$core$String* $tmp3541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3539, &$s3540);
    panda$core$String* $tmp3542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3541, step3205);
    panda$core$String* $tmp3544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3542, &$s3543);
    panda$core$String* $tmp3545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3544, loopInc3408);
    panda$core$String* $tmp3547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3545, &$s3546);
    panda$core$String* $tmp3549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3548, loopEnd3252);
    panda$core$String* $tmp3551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3549, &$s3550);
    panda$core$String* $tmp3552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3547, $tmp3551);
    (($fn3553) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3552);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel3520, p_out);
    panda$core$String* $tmp3555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3554, unsigned3266);
    panda$core$String* $tmp3557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3555, &$s3556);
    panda$core$String* $tmp3558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3557, backwardDelta3501);
    panda$core$String* $tmp3560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3558, &$s3559);
    panda$core$String* $tmp3561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3560, step3205);
    panda$core$String* $tmp3563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3561, &$s3562);
    panda$core$String* $tmp3564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3563, loopInc3408);
    panda$core$String* $tmp3566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3564, &$s3565);
    panda$core$String* $tmp3568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3567, loopEnd3252);
    panda$core$String* $tmp3570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3568, &$s3569);
    panda$core$String* $tmp3571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3566, $tmp3570);
    (($fn3572) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3571);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc3408, p_out);
    panda$core$String* $tmp3574 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    panda$core$Object* $tmp3575 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3574));
    inc3573 = ((panda$core$String*) $tmp3575);
    panda$core$String* $tmp3576 = panda$core$String$convert$R$panda$core$String(index3157);
    panda$core$String* $tmp3578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3576, &$s3577);
    panda$core$String* $tmp3579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3578, step3205);
    panda$core$String* $tmp3581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3579, &$s3580);
    (($fn3582) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3581);
    panda$core$String* $tmp3584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3583, loopStart3246);
    panda$core$String* $tmp3586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3584, &$s3585);
    (($fn3587) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3586);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3252, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_list, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Type* $tmp3589 = (($fn3588) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3590 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit($tmp3589);
    if ($tmp3590.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_label, p_target, p_list, p_statements, p_out);
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp3592 = (($fn3591) p_list->$class->vtable[2])(p_list);
    panda$core$Bit $tmp3593 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit($tmp3592);
    if ($tmp3593.value) {
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
    panda$core$String* loopStart3598;
    panda$core$String* loopEnd3601;
    org$pandalanguage$pandac$Type* $tmp3595 = (($fn3594) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3596 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3597 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3595, $tmp3596);
    PANDA_ASSERT($tmp3597.value);
    panda$core$String* $tmp3599 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3600 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3599));
    loopStart3598 = ((panda$core$String*) $tmp3600);
    panda$core$String* $tmp3602 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3603 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3602));
    loopEnd3601 = ((panda$core$String*) $tmp3603);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3604 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaAlloc(40);
    $tmp3604->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3604->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3604, p_label, loopEnd3601, loopStart3598);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3604));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3598, p_out);
    panda$core$String* $tmp3607 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3606, $tmp3607);
    panda$core$String* $tmp3610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3608, &$s3609);
    panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3610, loopEnd3601);
    panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3611, &$s3612);
    (($fn3614) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3613);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3615, loopStart3598);
    panda$core$String* $tmp3618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3616, &$s3617);
    (($fn3619) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3618);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3601, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3624;
    panda$core$String* loopEnd3627;
    org$pandalanguage$pandac$Type* $tmp3621 = (($fn3620) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$Type* $tmp3622 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3623 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3621, $tmp3622);
    PANDA_ASSERT($tmp3623.value);
    panda$core$String* $tmp3625 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3626 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3625));
    loopStart3624 = ((panda$core$String*) $tmp3626);
    panda$core$String* $tmp3628 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3629 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3628));
    loopEnd3627 = ((panda$core$String*) $tmp3629);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3630 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaAlloc(40);
    $tmp3630->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3630->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3630, p_label, loopEnd3627, loopStart3624);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3630));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3624, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    panda$core$String* $tmp3633 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3632, $tmp3633);
    panda$core$String* $tmp3636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3634, &$s3635);
    panda$core$String* $tmp3637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3636, loopStart3624);
    panda$core$String* $tmp3639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3637, &$s3638);
    (($fn3640) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3639);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3627, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$collections$ImmutableArray* p_statements, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3641;
    panda$core$String* loopEnd3644;
    panda$core$String* $tmp3642 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3643 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3642));
    loopStart3641 = ((panda$core$String*) $tmp3643);
    panda$core$String* $tmp3645 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    panda$core$Object* $tmp3646 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3645));
    loopEnd3644 = ((panda$core$String*) $tmp3646);
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3647 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) pandaAlloc(40);
    $tmp3647->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3647->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3647, p_label, loopEnd3644, loopStart3641);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3647));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3641, p_out);
    (($fn3650) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3649);
    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_statements, p_out);
    (($fn3652) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3651);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3644, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1775_93653;
    org$pandalanguage$pandac$Variable* v3655;
    {
        $match$1775_93653 = p_target;
        panda$core$Bit $tmp3654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1775_93653->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp3654.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3656 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1775_93653->$data + 16));
            v3655 = *$tmp3656;
            panda$core$String* $tmp3657 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3655->type);
            panda$core$String* $tmp3658 = panda$core$String$convert$R$panda$core$String($tmp3657);
            panda$core$String* $tmp3660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3658, &$s3659);
            panda$core$String* $tmp3661 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3655);
            panda$core$String* $tmp3662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3660, $tmp3661);
            panda$core$String* $tmp3664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3662, &$s3663);
            (($fn3665) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3664);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3666 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3655);
                panda$core$String* $tmp3667 = panda$core$String$convert$R$panda$core$String($tmp3666);
                panda$core$String* $tmp3669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3667, &$s3668);
                panda$core$String* $tmp3670 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3669, $tmp3670);
                panda$core$String* $tmp3673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3671, &$s3672);
                (($fn3674) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3673);
            }
            }
            else {
            {
                panda$core$String* $tmp3676 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3655);
                panda$core$String* $tmp3677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3675, $tmp3676);
                panda$core$String* $tmp3679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3677, &$s3678);
                panda$core$String* $tmp3680 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3655);
                panda$core$String* $tmp3681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3679, $tmp3680);
                panda$core$String* $tmp3683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3681, &$s3682);
                (($fn3684) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3683);
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
    panda$collections$Iterator* decl$Iter3685;
    org$pandalanguage$pandac$IRNode* decl3697;
    org$pandalanguage$pandac$IRNode* $match$1791_133702;
    org$pandalanguage$pandac$IRNode* target3704;
    org$pandalanguage$pandac$IRNode* value3706;
    {
        ITable* $tmp3686 = ((panda$collections$Iterable*) p_decls)->$class->itable;
        while ($tmp3686->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3686 = $tmp3686->next;
        }
        $fn3688 $tmp3687 = $tmp3686->methods[0];
        panda$collections$Iterator* $tmp3689 = $tmp3687(((panda$collections$Iterable*) p_decls));
        decl$Iter3685 = $tmp3689;
        $l3690:;
        ITable* $tmp3692 = decl$Iter3685->$class->itable;
        while ($tmp3692->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3692 = $tmp3692->next;
        }
        $fn3694 $tmp3693 = $tmp3692->methods[0];
        panda$core$Bit $tmp3695 = $tmp3693(decl$Iter3685);
        panda$core$Bit $tmp3696 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3695);
        if (!$tmp3696.value) goto $l3691;
        {
            ITable* $tmp3698 = decl$Iter3685->$class->itable;
            while ($tmp3698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3698 = $tmp3698->next;
            }
            $fn3700 $tmp3699 = $tmp3698->methods[1];
            panda$core$Object* $tmp3701 = $tmp3699(decl$Iter3685);
            decl3697 = ((org$pandalanguage$pandac$IRNode*) $tmp3701);
            {
                $match$1791_133702 = decl3697;
                panda$core$Bit $tmp3703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1791_133702->$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp3703.value) {
                {
                    org$pandalanguage$pandac$IRNode** $tmp3705 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1791_133702->$data + 0));
                    target3704 = *$tmp3705;
                    org$pandalanguage$pandac$IRNode** $tmp3707 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1791_133702->$data + 8));
                    value3706 = *$tmp3707;
                    org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, target3704, value3706, p_out);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l3690;
        $l3691:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1801_93708;
    org$pandalanguage$pandac$Variable* v3713;
    org$pandalanguage$pandac$IRNode* base3717;
    org$pandalanguage$pandac$FieldDecl* field3719;
    panda$core$String* baseRef3721;
    org$pandalanguage$pandac$IRNode* value3731;
    panda$core$Int64 id3733;
    panda$core$String* result3735;
    org$pandalanguage$pandac$IRNode* value3740;
    org$pandalanguage$pandac$ChoiceEntry* ce3742;
    panda$core$Int64 field3744;
    org$pandalanguage$pandac$FieldDecl* data3746;
    org$pandalanguage$pandac$IRNode* fieldRef3751;
    panda$core$String* base3757;
    panda$core$Int64 size3760;
    panda$core$Int64 offset3762;
    panda$core$String* result3764;
    {
        $match$1801_93708 = p_lvalue;
        panda$core$Bit $tmp3709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1801_93708->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp3709.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3710 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3711 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3710, p_out);
            return $tmp3711;
        }
        }
        else {
        panda$core$Bit $tmp3712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1801_93708->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp3712.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3714 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$1801_93708->$data + 16));
            v3713 = *$tmp3714;
            panda$core$String* $tmp3715 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3713);
            return $tmp3715;
        }
        }
        else {
        panda$core$Bit $tmp3716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1801_93708->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp3716.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3718 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1801_93708->$data + 24));
            base3717 = *$tmp3718;
            org$pandalanguage$pandac$FieldDecl** $tmp3720 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$1801_93708->$data + 32));
            field3719 = *$tmp3720;
            panda$core$String* $tmp3722 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, base3717, p_out);
            panda$core$Object* $tmp3723 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3722));
            baseRef3721 = ((panda$core$String*) $tmp3723);
            panda$core$String* $tmp3724 = panda$core$String$convert$R$panda$core$String(baseRef3721);
            panda$core$String* $tmp3726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3724, &$s3725);
            panda$core$String* $tmp3727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3726, ((org$pandalanguage$pandac$Symbol*) field3719)->name);
            panda$core$String* $tmp3729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3727, &$s3728);
            return $tmp3729;
        }
        }
        else {
        panda$core$Bit $tmp3730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1801_93708->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp3730.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3732 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1801_93708->$data + 0));
            value3731 = *$tmp3732;
            panda$core$Int64* $tmp3734 = ((panda$core$Int64*) ((char*) $match$1801_93708->$data + 8));
            id3733 = *$tmp3734;
            panda$core$String* $tmp3736 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, value3731, p_out);
            panda$core$Object* $tmp3737 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3736));
            result3735 = ((panda$core$String*) $tmp3737);
            panda$core$Int64$wrapper* $tmp3738;
            $tmp3738 = (panda$core$Int64$wrapper*) pandaAlloc(24);
            $tmp3738->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3738->refCount = 1;
            $tmp3738->value = id3733;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp3738), ((panda$core$Object*) result3735));
            return result3735;
        }
        }
        else {
        panda$core$Bit $tmp3739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1801_93708->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp3739.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3741 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1801_93708->$data + 16));
            value3740 = *$tmp3741;
            org$pandalanguage$pandac$ChoiceEntry** $tmp3743 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$1801_93708->$data + 24));
            ce3742 = *$tmp3743;
            panda$core$Int64* $tmp3745 = ((panda$core$Int64*) ((char*) $match$1801_93708->$data + 32));
            field3744 = *$tmp3745;
            panda$core$Object* $tmp3747 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce3742->owner->fields, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp3748 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3747)));
            data3746 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3748);
            panda$core$Bit $tmp3750 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) data3746)->name, &$s3749);
            PANDA_ASSERT($tmp3750.value);
            org$pandalanguage$pandac$IRNode* $tmp3752 = (org$pandalanguage$pandac$IRNode*) pandaAlloc(72);
            $tmp3752->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3752->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp3755 = (($fn3754) p_lvalue->$class->vtable[3])(p_lvalue);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp3752, ((panda$core$Int64) { 14 }), $tmp3755, data3746->type, value3740, data3746);
            panda$core$Object* $tmp3756 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3752));
            fieldRef3751 = ((org$pandalanguage$pandac$IRNode*) $tmp3756);
            panda$core$String* $tmp3758 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, fieldRef3751, p_out);
            panda$core$Object* $tmp3759 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3758));
            base3757 = ((panda$core$String*) $tmp3759);
            panda$core$Int64 $tmp3761 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3742->owner);
            size3760 = $tmp3761;
            panda$core$Int64 $tmp3763 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, ce3742, field3744);
            offset3762 = $tmp3763;
            panda$core$String* $tmp3765 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            panda$core$Object* $tmp3766 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3765));
            result3764 = ((panda$core$String*) $tmp3766);
            org$pandalanguage$pandac$Type* $tmp3768 = (($fn3767) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3769 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3768);
            panda$core$String* $tmp3770 = panda$core$String$convert$R$panda$core$String($tmp3769);
            panda$core$String* $tmp3772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3770, &$s3771);
            panda$core$String* $tmp3773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3772, result3764);
            panda$core$String* $tmp3775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3773, &$s3774);
            org$pandalanguage$pandac$Type* $tmp3777 = (($fn3776) p_lvalue->$class->vtable[2])(p_lvalue);
            panda$core$String* $tmp3778 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3777);
            panda$core$String* $tmp3779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3775, $tmp3778);
            panda$core$String* $tmp3781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3779, &$s3780);
            panda$core$String* $tmp3783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3782, base3757);
            panda$core$String* $tmp3785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3783, &$s3784);
            panda$core$Int64$wrapper* $tmp3786;
            $tmp3786 = (panda$core$Int64$wrapper*) pandaAlloc(24);
            $tmp3786->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3786->refCount = 1;
            $tmp3786->value = offset3762;
            panda$core$String* $tmp3787 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3785, ((panda$core$Object*) $tmp3786));
            panda$core$String* $tmp3789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3787, &$s3788);
            panda$core$String* $tmp3790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3781, $tmp3789);
            (($fn3791) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3790);
            panda$core$String* $tmp3793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3792, result3764);
            panda$core$String* $tmp3795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3793, &$s3794);
            return $tmp3795;
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
    panda$core$String* $tmp3796 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    panda$core$String* $tmp3797 = panda$core$String$convert$R$panda$core$String($tmp3796);
    panda$core$String* $tmp3799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3797, &$s3798);
    panda$core$String* $tmp3800 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    panda$core$String* $tmp3801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3799, $tmp3800);
    panda$core$String* $tmp3803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3801, &$s3802);
    (($fn3804) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3803);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit) { p_value != NULL }).value) {
    {
        panda$core$String* $tmp3806 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
        panda$core$String* $tmp3807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3805, $tmp3806);
        panda$core$String* $tmp3809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3807, &$s3808);
        (($fn3810) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3809);
    }
    }
    else {
    {
        (($fn3812) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3811);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3816;
    panda$core$Int64 $tmp3813 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3814 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3813, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3814.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3815 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3815);
    }
    }
    panda$core$Int64 $tmp3817 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3816, ((panda$core$Int64) { 0 }), $tmp3817, ((panda$core$Bit) { false }));
    int64_t $tmp3819 = $tmp3816.min.value;
    panda$core$Int64 i3818 = { $tmp3819 };
    int64_t $tmp3821 = $tmp3816.max.value;
    bool $tmp3822 = $tmp3816.inclusive.value;
    if ($tmp3822) goto $l3829; else goto $l3830;
    $l3829:;
    if ($tmp3819 <= $tmp3821) goto $l3823; else goto $l3825;
    $l3830:;
    if ($tmp3819 < $tmp3821) goto $l3823; else goto $l3825;
    $l3823:;
    {
        panda$core$Object* $tmp3831 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3818);
        panda$core$Bit $tmp3835;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3831)->loopLabel != NULL }).value) goto $l3832; else goto $l3833;
        $l3832:;
        panda$core$Bit $tmp3836 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3831)->loopLabel, p_name);
        $tmp3835 = $tmp3836;
        goto $l3834;
        $l3833:;
        $tmp3835 = ((panda$core$Bit) { false });
        goto $l3834;
        $l3834:;
        if ($tmp3835.value) {
        {
            panda$core$Object* $tmp3837 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3818);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3837);
        }
        }
    }
    $l3826:;
    int64_t $tmp3839 = $tmp3821 - i3818.value;
    if ($tmp3822) goto $l3840; else goto $l3841;
    $l3840:;
    if ((uint64_t) $tmp3839 >= 1) goto $l3838; else goto $l3825;
    $l3841:;
    if ((uint64_t) $tmp3839 > 1) goto $l3838; else goto $l3825;
    $l3838:;
    i3818.value += 1;
    goto $l3823;
    $l3825:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3844;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3845 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    panda$core$Object* $tmp3846 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3845));
    desc3844 = ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3846);
    panda$core$String* $tmp3848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3847, desc3844->breakLabel);
    panda$core$String* $tmp3850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3848, &$s3849);
    (($fn3851) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3850);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3852;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3853 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, p_label);
    panda$core$Object* $tmp3854 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3853));
    desc3852 = ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3854);
    panda$core$String* $tmp3856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3855, desc3852->continueLabel);
    panda$core$String* $tmp3858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3856, &$s3857);
    (($fn3859) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3858);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, org$pandalanguage$pandac$IRNode* p_message, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3861 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_test, p_out);
    panda$core$String* $tmp3862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3860, $tmp3861);
    panda$core$String* $tmp3864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3862, &$s3863);
    (($fn3865) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3864);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_value, panda$collections$ImmutableArray* p_whens, panda$collections$ImmutableArray* p_other, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* w$Iter3873;
    org$pandalanguage$pandac$IRNode* w3885;
    org$pandalanguage$pandac$IRNode* $match$1875_133890;
    panda$collections$ImmutableArray* tests3892;
    panda$collections$ImmutableArray* statements3894;
    panda$collections$Iterator* test$Iter3896;
    org$pandalanguage$pandac$IRNode* test3908;
    panda$core$String* $tmp3867 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
    panda$core$String* $tmp3868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3866, $tmp3867);
    panda$core$String* $tmp3870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3868, &$s3869);
    (($fn3871) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3870);
    panda$core$Int64 $tmp3872 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3872;
    {
        ITable* $tmp3874 = ((panda$collections$Iterable*) p_whens)->$class->itable;
        while ($tmp3874->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3874 = $tmp3874->next;
        }
        $fn3876 $tmp3875 = $tmp3874->methods[0];
        panda$collections$Iterator* $tmp3877 = $tmp3875(((panda$collections$Iterable*) p_whens));
        w$Iter3873 = $tmp3877;
        $l3878:;
        ITable* $tmp3880 = w$Iter3873->$class->itable;
        while ($tmp3880->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3880 = $tmp3880->next;
        }
        $fn3882 $tmp3881 = $tmp3880->methods[0];
        panda$core$Bit $tmp3883 = $tmp3881(w$Iter3873);
        panda$core$Bit $tmp3884 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3883);
        if (!$tmp3884.value) goto $l3879;
        {
            ITable* $tmp3886 = w$Iter3873->$class->itable;
            while ($tmp3886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3886 = $tmp3886->next;
            }
            $fn3888 $tmp3887 = $tmp3886->methods[1];
            panda$core$Object* $tmp3889 = $tmp3887(w$Iter3873);
            w3885 = ((org$pandalanguage$pandac$IRNode*) $tmp3889);
            {
                $match$1875_133890 = w3885;
                panda$core$Bit $tmp3891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1875_133890->$rawValue, ((panda$core$Int64) { 42 }));
                if ($tmp3891.value) {
                {
                    panda$collections$ImmutableArray** $tmp3893 = ((panda$collections$ImmutableArray**) ((char*) $match$1875_133890->$data + 16));
                    tests3892 = *$tmp3893;
                    panda$collections$ImmutableArray** $tmp3895 = ((panda$collections$ImmutableArray**) ((char*) $match$1875_133890->$data + 24));
                    statements3894 = *$tmp3895;
                    {
                        ITable* $tmp3897 = ((panda$collections$Iterable*) tests3892)->$class->itable;
                        while ($tmp3897->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3897 = $tmp3897->next;
                        }
                        $fn3899 $tmp3898 = $tmp3897->methods[0];
                        panda$collections$Iterator* $tmp3900 = $tmp3898(((panda$collections$Iterable*) tests3892));
                        test$Iter3896 = $tmp3900;
                        $l3901:;
                        ITable* $tmp3903 = test$Iter3896->$class->itable;
                        while ($tmp3903->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3903 = $tmp3903->next;
                        }
                        $fn3905 $tmp3904 = $tmp3903->methods[0];
                        panda$core$Bit $tmp3906 = $tmp3904(test$Iter3896);
                        panda$core$Bit $tmp3907 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3906);
                        if (!$tmp3907.value) goto $l3902;
                        {
                            ITable* $tmp3909 = test$Iter3896->$class->itable;
                            while ($tmp3909->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3909 = $tmp3909->next;
                            }
                            $fn3911 $tmp3910 = $tmp3909->methods[1];
                            panda$core$Object* $tmp3912 = $tmp3910(test$Iter3896);
                            test3908 = ((org$pandalanguage$pandac$IRNode*) $tmp3912);
                            panda$core$UInt64 $tmp3914 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, test3908);
                            panda$core$UInt64$wrapper* $tmp3915;
                            $tmp3915 = (panda$core$UInt64$wrapper*) pandaAlloc(24);
                            $tmp3915->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
                            $tmp3915->refCount = 1;
                            $tmp3915->value = $tmp3914;
                            panda$core$String* $tmp3916 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3913, ((panda$core$Object*) $tmp3915));
                            panda$core$String* $tmp3918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3916, &$s3917);
                            (($fn3919) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3918);
                        }
                        goto $l3901;
                        $l3902:;
                    }
                    org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3894, p_out);
                    (($fn3921) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3920);
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l3878;
        $l3879:;
    }
    if (((panda$core$Bit) { p_other != NULL }).value) {
    {
        (($fn3923) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3922);
        org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, p_other, p_out);
    }
    }
    panda$core$Int64 $tmp3924 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3924;
    (($fn3926) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3925);
}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* $match$1895_93927;
    org$pandalanguage$pandac$IRNode* left3929;
    org$pandalanguage$pandac$parser$Token$Kind op3931;
    org$pandalanguage$pandac$IRNode* right3933;
    panda$collections$ImmutableArray* statements3936;
    org$pandalanguage$pandac$Type* target3939;
    org$pandalanguage$pandac$MethodRef* mref3941;
    panda$collections$ImmutableArray* args3943;
    org$pandalanguage$pandac$IRNode* test3946;
    panda$collections$ImmutableArray* ifTrue3948;
    org$pandalanguage$pandac$IRNode* ifFalse3950;
    panda$core$String* label3953;
    org$pandalanguage$pandac$IRNode* target3955;
    org$pandalanguage$pandac$IRNode* list3957;
    panda$collections$ImmutableArray* statements3959;
    panda$core$String* label3962;
    org$pandalanguage$pandac$IRNode* test3964;
    panda$collections$ImmutableArray* statements3966;
    panda$core$String* label3969;
    panda$collections$ImmutableArray* statements3971;
    org$pandalanguage$pandac$IRNode* test3973;
    panda$core$String* label3976;
    panda$collections$ImmutableArray* statements3978;
    org$pandalanguage$pandac$Variable$Kind kind3981;
    panda$collections$ImmutableArray* decls3983;
    org$pandalanguage$pandac$IRNode* value3986;
    panda$core$String* label3989;
    panda$core$String* label3992;
    org$pandalanguage$pandac$IRNode* test3995;
    org$pandalanguage$pandac$IRNode* msg3997;
    org$pandalanguage$pandac$IRNode* value4000;
    panda$collections$ImmutableArray* whens4002;
    panda$collections$ImmutableArray* other4004;
    {
        $match$1895_93927 = p_stmt;
        panda$core$Bit $tmp3928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1895_93927->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp3928.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3930 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1895_93927->$data + 24));
            left3929 = *$tmp3930;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3932 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$1895_93927->$data + 32));
            op3931 = *$tmp3932;
            org$pandalanguage$pandac$IRNode** $tmp3934 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1895_93927->$data + 40));
            right3933 = *$tmp3934;
            org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, left3929, right3933, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1895_93927->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp3935.value) {
        {
            panda$collections$ImmutableArray** $tmp3937 = ((panda$collections$ImmutableArray**) ((char*) $match$1895_93927->$data + 16));
            statements3936 = *$tmp3937;
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, statements3936, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1895_93927->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp3938.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3940 = ((org$pandalanguage$pandac$Type**) ((char*) $match$1895_93927->$data + 16));
            target3939 = *$tmp3940;
            org$pandalanguage$pandac$MethodRef** $tmp3942 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$1895_93927->$data + 24));
            mref3941 = *$tmp3942;
            panda$collections$ImmutableArray** $tmp3944 = ((panda$collections$ImmutableArray**) ((char*) $match$1895_93927->$data + 32));
            args3943 = *$tmp3944;
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$core$String$Q$panda$io$IndentedOutputStream(self, target3939, mref3941, args3943, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1895_93927->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp3945.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3947 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1895_93927->$data + 16));
            test3946 = *$tmp3947;
            panda$collections$ImmutableArray** $tmp3949 = ((panda$collections$ImmutableArray**) ((char*) $match$1895_93927->$data + 24));
            ifTrue3948 = *$tmp3949;
            org$pandalanguage$pandac$IRNode** $tmp3951 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1895_93927->$data + 32));
            ifFalse3950 = *$tmp3951;
            org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3946, ifTrue3948, ifFalse3950, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1895_93927->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp3952.value) {
        {
            panda$core$String** $tmp3954 = ((panda$core$String**) ((char*) $match$1895_93927->$data + 16));
            label3953 = *$tmp3954;
            org$pandalanguage$pandac$IRNode** $tmp3956 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1895_93927->$data + 24));
            target3955 = *$tmp3956;
            org$pandalanguage$pandac$IRNode** $tmp3958 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1895_93927->$data + 32));
            list3957 = *$tmp3958;
            panda$collections$ImmutableArray** $tmp3960 = ((panda$collections$ImmutableArray**) ((char*) $match$1895_93927->$data + 40));
            statements3959 = *$tmp3960;
            org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$panda$core$String$Q$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3953, target3955, list3957, statements3959, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1895_93927->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp3961.value) {
        {
            panda$core$String** $tmp3963 = ((panda$core$String**) ((char*) $match$1895_93927->$data + 16));
            label3962 = *$tmp3963;
            org$pandalanguage$pandac$IRNode** $tmp3965 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1895_93927->$data + 24));
            test3964 = *$tmp3965;
            panda$collections$ImmutableArray** $tmp3967 = ((panda$collections$ImmutableArray**) ((char*) $match$1895_93927->$data + 32));
            statements3966 = *$tmp3967;
            org$pandalanguage$pandac$CCodeGenerator$writeWhile$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3962, test3964, statements3966, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1895_93927->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp3968.value) {
        {
            panda$core$String** $tmp3970 = ((panda$core$String**) ((char*) $match$1895_93927->$data + 16));
            label3969 = *$tmp3970;
            panda$collections$ImmutableArray** $tmp3972 = ((panda$collections$ImmutableArray**) ((char*) $match$1895_93927->$data + 24));
            statements3971 = *$tmp3972;
            org$pandalanguage$pandac$IRNode** $tmp3974 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1895_93927->$data + 32));
            test3973 = *$tmp3974;
            org$pandalanguage$pandac$CCodeGenerator$writeDo$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, label3969, statements3971, test3973, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1895_93927->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp3975.value) {
        {
            panda$core$String** $tmp3977 = ((panda$core$String**) ((char*) $match$1895_93927->$data + 16));
            label3976 = *$tmp3977;
            panda$collections$ImmutableArray** $tmp3979 = ((panda$collections$ImmutableArray**) ((char*) $match$1895_93927->$data + 24));
            statements3978 = *$tmp3979;
            org$pandalanguage$pandac$CCodeGenerator$writeLoop$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, label3976, statements3978, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1895_93927->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp3980.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp3982 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$1895_93927->$data + 16));
            kind3981 = *$tmp3982;
            panda$collections$ImmutableArray** $tmp3984 = ((panda$collections$ImmutableArray**) ((char*) $match$1895_93927->$data + 24));
            decls3983 = *$tmp3984;
            org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$io$IndentedOutputStream(self, kind3981, decls3983, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1895_93927->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp3985.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3987 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1895_93927->$data + 16));
            value3986 = *$tmp3987;
            org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, value3986, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1895_93927->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp3988.value) {
        {
            panda$core$String** $tmp3990 = ((panda$core$String**) ((char*) $match$1895_93927->$data + 16));
            label3989 = *$tmp3990;
            org$pandalanguage$pandac$CCodeGenerator$writeBreak$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3989, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1895_93927->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp3991.value) {
        {
            panda$core$String** $tmp3993 = ((panda$core$String**) ((char*) $match$1895_93927->$data + 16));
            label3992 = *$tmp3993;
            org$pandalanguage$pandac$CCodeGenerator$writeContinue$panda$core$String$Q$panda$io$IndentedOutputStream(self, label3992, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1895_93927->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp3994.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3996 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1895_93927->$data + 16));
            test3995 = *$tmp3996;
            org$pandalanguage$pandac$IRNode** $tmp3998 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1895_93927->$data + 24));
            msg3997 = *$tmp3998;
            org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, test3995, msg3997, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1895_93927->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp3999.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp4001 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$1895_93927->$data + 16));
            value4000 = *$tmp4001;
            panda$collections$ImmutableArray** $tmp4003 = ((panda$collections$ImmutableArray**) ((char*) $match$1895_93927->$data + 24));
            whens4002 = *$tmp4003;
            panda$collections$ImmutableArray** $tmp4005 = ((panda$collections$ImmutableArray**) ((char*) $match$1895_93927->$data + 32));
            other4004 = *$tmp4005;
            org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$io$IndentedOutputStream(self, value4000, whens4002, other4004, p_out);
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
    panda$core$String* result4006;
    org$pandalanguage$pandac$Type* $tmp4007 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp4008 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp4007);
    panda$core$Object* $tmp4009 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp4008));
    result4006 = ((panda$core$String*) $tmp4009);
    panda$core$Bit $tmp4011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp4010 = $tmp4011.value;
    if (!$tmp4010) goto $l4012;
    panda$core$Bit $tmp4014 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result4006, &$s4013);
    panda$core$Bit $tmp4015 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4014);
    $tmp4010 = $tmp4015.value;
    $l4012:;
    panda$core$Bit $tmp4016 = { $tmp4010 };
    if ($tmp4016.value) {
    {
        panda$core$String* $tmp4018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result4006, &$s4017);
        return $tmp4018;
    }
    }
    return result4006;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    panda$core$String* separator4032;
    panda$collections$Iterator* p$Iter4044;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4056;
    panda$io$MemoryOutputStream* bodyBuffer4078;
    panda$io$IndentedOutputStream* indentedBody4082;
    panda$collections$Iterator* f$Iter4087;
    org$pandalanguage$pandac$FieldDecl* f4100;
    panda$collections$Iterator* s$Iter4118;
    org$pandalanguage$pandac$IRNode* s4130;
    panda$core$Object* $tmp4019 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4019)) == ((panda$core$Object*) p_m->owner) }).value);
    {
        panda$core$Object* $tmp4020 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_m));
        self->currentMethod = ((org$pandalanguage$pandac$MethodDecl*) $tmp4020);
    }
    {
        panda$core$Object* $tmp4022 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s4021));
        self->currentBlock = ((panda$core$String*) $tmp4022);
    }
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp4023 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp4024 = panda$core$String$convert$R$panda$core$String($tmp4023);
    panda$core$String* $tmp4026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4024, &$s4025);
    panda$core$String* $tmp4027 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp4028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4026, $tmp4027);
    panda$core$String* $tmp4030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4028, &$s4029);
    (($fn4031) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp4030);
    panda$core$Object* $tmp4034 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s4033));
    separator4032 = ((panda$core$String*) $tmp4034);
    panda$core$Bit $tmp4035 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp4036 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4035);
    if ($tmp4036.value) {
    {
        panda$core$String* $tmp4037 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp4038 = panda$core$String$convert$R$panda$core$String($tmp4037);
        panda$core$String* $tmp4040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4038, &$s4039);
        (($fn4041) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp4040);
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator4032));
            panda$core$Object* $tmp4043 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s4042));
            separator4032 = ((panda$core$String*) $tmp4043);
        }
    }
    }
    {
        ITable* $tmp4045 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4045->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4045 = $tmp4045->next;
        }
        $fn4047 $tmp4046 = $tmp4045->methods[0];
        panda$collections$Iterator* $tmp4048 = $tmp4046(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4044 = $tmp4048;
        $l4049:;
        ITable* $tmp4051 = p$Iter4044->$class->itable;
        while ($tmp4051->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4051 = $tmp4051->next;
        }
        $fn4053 $tmp4052 = $tmp4051->methods[0];
        panda$core$Bit $tmp4054 = $tmp4052(p$Iter4044);
        panda$core$Bit $tmp4055 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4054);
        if (!$tmp4055.value) goto $l4050;
        {
            ITable* $tmp4057 = p$Iter4044->$class->itable;
            while ($tmp4057->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4057 = $tmp4057->next;
            }
            $fn4059 $tmp4058 = $tmp4057->methods[1];
            panda$core$Object* $tmp4060 = $tmp4058(p$Iter4044);
            p4056 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4060);
            panda$core$String* $tmp4061 = panda$core$String$convert$R$panda$core$String(separator4032);
            panda$core$String* $tmp4063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4061, &$s4062);
            panda$core$String* $tmp4064 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p4056->type);
            panda$core$String* $tmp4065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4063, $tmp4064);
            panda$core$String* $tmp4067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4065, &$s4066);
            panda$core$String* $tmp4068 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p4056->name);
            panda$core$String* $tmp4069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4067, $tmp4068);
            panda$core$String* $tmp4071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4069, &$s4070);
            (($fn4072) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp4071);
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator4032));
                panda$core$Object* $tmp4074 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s4073));
                separator4032 = ((panda$core$String*) $tmp4074);
            }
        }
        goto $l4049;
        $l4050:;
    }
    (($fn4076) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s4075);
    panda$core$Int64 $tmp4077 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp4077;
    panda$io$MemoryOutputStream* $tmp4079 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
    $tmp4079->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp4079->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp4079);
    panda$core$Object* $tmp4081 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp4079));
    bodyBuffer4078 = ((panda$io$MemoryOutputStream*) $tmp4081);
    panda$io$IndentedOutputStream* $tmp4083 = (panda$io$IndentedOutputStream*) pandaAlloc(56);
    $tmp4083->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp4083->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp4083, ((panda$io$OutputStream*) bodyBuffer4078));
    panda$core$Object* $tmp4085 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp4083));
    indentedBody4082 = ((panda$io$IndentedOutputStream*) $tmp4085);
    panda$core$Bit $tmp4086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp4086.value) {
    {
        {
            panda$collections$ListView* $tmp4088 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, p_m->owner);
            ITable* $tmp4089 = ((panda$collections$Iterable*) $tmp4088)->$class->itable;
            while ($tmp4089->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4089 = $tmp4089->next;
            }
            $fn4091 $tmp4090 = $tmp4089->methods[0];
            panda$collections$Iterator* $tmp4092 = $tmp4090(((panda$collections$Iterable*) $tmp4088));
            f$Iter4087 = $tmp4092;
            $l4093:;
            ITable* $tmp4095 = f$Iter4087->$class->itable;
            while ($tmp4095->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4095 = $tmp4095->next;
            }
            $fn4097 $tmp4096 = $tmp4095->methods[0];
            panda$core$Bit $tmp4098 = $tmp4096(f$Iter4087);
            panda$core$Bit $tmp4099 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4098);
            if (!$tmp4099.value) goto $l4094;
            {
                ITable* $tmp4101 = f$Iter4087->$class->itable;
                while ($tmp4101->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4101 = $tmp4101->next;
                }
                $fn4103 $tmp4102 = $tmp4101->methods[1];
                panda$core$Object* $tmp4104 = $tmp4102(f$Iter4087);
                f4100 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4104);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f4100);
                panda$core$Bit $tmp4106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4100->fieldKind.$rawValue, ((panda$core$Int64) { 0 }));
                bool $tmp4105 = $tmp4106.value;
                if (!$tmp4105) goto $l4107;
                panda$core$Bit $tmp4108 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->compiler, f4100->type);
                $tmp4105 = $tmp4108.value;
                $l4107:;
                panda$core$Bit $tmp4109 = { $tmp4105 };
                if ($tmp4109.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp4110 = (org$pandalanguage$pandac$IRNode*) pandaAlloc(72);
                    $tmp4110->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4110->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode* $tmp4112 = (org$pandalanguage$pandac$IRNode*) pandaAlloc(72);
                    $tmp4112->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4112->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp4114 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4112, ((panda$core$Int64) { 30 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4114);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl($tmp4110, ((panda$core$Int64) { 14 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4100->type, $tmp4112, f4100);
                    org$pandalanguage$pandac$IRNode* $tmp4115 = (org$pandalanguage$pandac$IRNode*) pandaAlloc(72);
                    $tmp4115->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4115->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp4117 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(f4100->type);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4115, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4117);
                    org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, $tmp4110, $tmp4115, indentedBody4082);
                }
                }
            }
            goto $l4093;
            $l4094:;
        }
    }
    }
    {
        ITable* $tmp4119 = ((panda$collections$Iterable*) p_body)->$class->itable;
        while ($tmp4119->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4119 = $tmp4119->next;
        }
        $fn4121 $tmp4120 = $tmp4119->methods[0];
        panda$collections$Iterator* $tmp4122 = $tmp4120(((panda$collections$Iterable*) p_body));
        s$Iter4118 = $tmp4122;
        $l4123:;
        ITable* $tmp4125 = s$Iter4118->$class->itable;
        while ($tmp4125->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4125 = $tmp4125->next;
        }
        $fn4127 $tmp4126 = $tmp4125->methods[0];
        panda$core$Bit $tmp4128 = $tmp4126(s$Iter4118);
        panda$core$Bit $tmp4129 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4128);
        if (!$tmp4129.value) goto $l4124;
        {
            ITable* $tmp4131 = s$Iter4118->$class->itable;
            while ($tmp4131->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4131 = $tmp4131->next;
            }
            $fn4133 $tmp4132 = $tmp4131->methods[1];
            panda$core$Object* $tmp4134 = $tmp4132(s$Iter4118);
            s4130 = ((org$pandalanguage$pandac$IRNode*) $tmp4134);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s4130, indentedBody4082);
        }
        goto $l4123;
        $l4124:;
    }
    panda$core$String* $tmp4135 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn4136) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp4135);
    panda$core$String* $tmp4137 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer4078);
    (($fn4138) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp4137);
    panda$core$Int64 $tmp4139 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp4139;
    (($fn4141) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s4140);
    {
        panda$core$Object* $tmp4142 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
        self->currentMethod = ((org$pandalanguage$pandac$MethodDecl*) $tmp4142);
    }
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path4144;
    PANDA_ASSERT(((panda$core$Bit) { self->currentClass == NULL }).value);
    {
        panda$core$Object* $tmp4143 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_cl));
        self->currentClass = ((org$pandalanguage$pandac$ClassDecl*) $tmp4143);
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
    panda$io$File* $tmp4146 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s4145);
    panda$core$Object* $tmp4147 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp4146));
    path4144 = ((panda$io$File*) $tmp4147);
    panda$io$File* $tmp4148 = panda$io$File$parent$R$panda$io$File$Q(path4144);
    panda$io$File$createDirectories($tmp4148);
    {
        panda$io$IndentedOutputStream* $tmp4149 = (panda$io$IndentedOutputStream*) pandaAlloc(56);
        $tmp4149->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
        $tmp4149->refCount.value = 1;
        panda$io$OutputStream* $tmp4151 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path4144);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp4149, $tmp4151);
        panda$core$Object* $tmp4152 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp4149));
        self->out = ((panda$io$IndentedOutputStream*) $tmp4152);
    }
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp4153 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp4153.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    {
        panda$core$Object* $tmp4154 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
        self->currentClass = ((org$pandalanguage$pandac$ClassDecl*) $tmp4154);
    }
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$String* $tmp4155 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn4156) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp4155);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp4157 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn4158) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp4157);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp4159 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn4160) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp4159);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp4161 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn4162) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp4161);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp4163 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn4164) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp4163);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn4165) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

