#include "org/frostlang/frostc/CCodeGenerator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/HCodeGenerator.h"
#include "frost/core/Frost.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/io/MemoryOutputStream.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/io/IndentedOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/IdentityMap.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "frost/core/Error.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/MutableString.h"
#include "frost/core/Equatable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/CCodeGenerator/ClassConstant.h"
#include "org/frostlang/frostc/CCodeGenerator/MethodShim.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/CCodeGenerator/OpClass.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "frost/core/Real64.h"
#include "frost/core/Char8.h"
#include "frost/core/UInt8.h"
#include "frost/core/Formattable.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "frost/core/Maybe.h"
#include "frost/io/Console.h"
#include "frost/core/System.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } org$frostlang$frostc$CCodeGenerator$_org$frostlang$frostc$CodeGenerator = { (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class, NULL, { org$frostlang$frostc$CCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$CCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$CCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$CCodeGenerator$finish} };

static frost$core$String $s1;
org$frostlang$frostc$CCodeGenerator$class_type org$frostlang$frostc$CCodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$CCodeGenerator$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$cleanup, org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit, org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$nextLabel$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$writeType$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$typeName$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getITable$org$frostlang$frostc$ClassDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$MethodShim, org$frostlang$frostc$CCodeGenerator$getWrapperITable$org$frostlang$frostc$ClassDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant, org$frostlang$frostc$CCodeGenerator$getWrapperClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant, org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$Variable$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$FieldDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$opClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$OpClass, org$frostlang$frostc$CCodeGenerator$getBinaryReference$org$frostlang$frostc$Type$frost$core$String$org$frostlang$frostc$expression$Binary$Operator$frost$core$String$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getInterfaceMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getMethodReference$frost$core$String$Q$org$frostlang$frostc$MethodDecl$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getIntReference$frost$core$UInt64$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getBitReference$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit, org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT, org$frostlang$frostc$CCodeGenerator$writeDynamicCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT, org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$CCodeGenerator$writeGetChoiceFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerRealloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$CCodeGenerator$writeStaticCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT, org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement, org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$CCodeGenerator$writeIR$org$frostlang$frostc$IR, org$frostlang$frostc$CCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$CCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$finish} };

typedef frost$core$Error* (*$fn157)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn244)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn255)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn266)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn277)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn309)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn339)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn402)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn459)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn463)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn468)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn481)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn485)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn490)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn580)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn584)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn589)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn669)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn731)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn735)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn740)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn814)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn853)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn917)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn985)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1014)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1018)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1023)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1065)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1096)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1100)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1105)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1131)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1182)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1188)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1225)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1243)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1294)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1331)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1362)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1423)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1461)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1505)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1517)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1535)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1554)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1592)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1629)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1645)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Bit (*$fn1661)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1676)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1700)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1725)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1778)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1782)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1787)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1829)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1865)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1869)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1874)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1900)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1981)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2161)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2165)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2170)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn2196)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2270)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2398)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2427)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn2463)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2706)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2716)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2735)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2764)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2788)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn2859)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2875)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2896)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2909)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2927)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2951)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn2989)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn3030)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3071)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3090)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3104)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3112)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3145)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3159)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3166)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3185)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3199)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3221)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3232)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3240)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3275)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3286)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3297)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3309)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3314)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3331)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3343)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn3361)(frost$core$Object*);
typedef frost$core$Bit (*$fn3382)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3515)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3543)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3591)(frost$core$Object*);
typedef frost$core$String* (*$fn3595)(frost$core$Object*);
typedef frost$core$Error* (*$fn3648)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn3654)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3658)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3663)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn3672)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Error* (*$fn3682)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn3690)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3699)(frost$collections$Key*);
typedef frost$core$Error* (*$fn3706)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3727)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3778)(frost$core$Object*);
typedef frost$core$String* (*$fn3790)(frost$core$Object*);
typedef frost$core$Bit (*$fn3975)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3995)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn4011)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4021)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn4051)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn4067)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4077)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn4112)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4281)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4302)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4312)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4331)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn4352)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn4403)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4449)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn4458)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4462)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4467)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn4482)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4495)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4512)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4531)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn4548)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4565)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn4574)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4578)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4583)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn4590)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4601)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4614)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4656)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4725)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4768)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4797)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4815)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4840)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4857)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4885)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4930)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4948)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4963)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4979)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4994)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn5010)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5025)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5067)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5092)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn5108)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5131)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn5155)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5174)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn5196)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn5208)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn5220)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn5231)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5261)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5299)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5320)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5325)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn5350)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn5368)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5384)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5400)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5415)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn5425)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn5429)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5434)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn5441)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5452)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5465)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5489)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5560)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5885)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn5901)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn5945)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5961)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5969)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn6001)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn6050)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn6064)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn6166)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6190)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn6207)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn6211)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn6216)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn6238)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6256)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6273)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6282)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6290)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6377)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn6405)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6414)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6423)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6432)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6441)(frost$io$OutputStream*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 35, -2345644890872423107, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x74\x79\x70\x65\x20", 16, 7914278075631058822, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x63\x4d\x65\x74\x68\x6f\x64\x54\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x73\x65\x6c\x66\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 163, 3276100450823531157, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x28", 2, 14382, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x38", 1, 157, NULL };
static frost$core$String $s526 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31\x36", 2, 15204, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x33\x32", 2, 15402, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s556 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s721 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s798 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s867 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static frost$core$String $s871 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s884 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s888 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s908 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static frost$core$String $s910 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s943 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s972 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static frost$core$String $s991 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x73\x20\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 16, 538313452881261501, NULL };
static frost$core$String $s992 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1000 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static frost$core$String $s1008 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1010 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1046 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static frost$core$String $s1053 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static frost$core$String $s1061 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static frost$core$String $s1069 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static frost$core$String $s1071 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1075 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s1081 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s1083 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1087 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s1090 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1092 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s1134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static frost$core$String $s1140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static frost$core$String $s1217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x5f\x61\x74\x74\x72\x69\x62\x75\x74\x65\x5f\x5f\x28\x28\x77\x65\x61\x6b\x29\x29\x20", 22, 985746977287669079, NULL };
static frost$core$String $s1219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1234 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1275 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1283 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x70", 2, 13545, NULL };
static frost$core$String $s1292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s1352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static frost$core$String $s1390 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70", 1, 213, NULL };
static frost$core$String $s1392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x2a\x29\x20", 21, 439094005818830454, NULL };
static frost$core$String $s1457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x46\x72\x6f\x73\x74\x24\x75\x6e\x72\x65\x66\x24\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x24\x51\x28", 43, 2176290240124383769, NULL };
static frost$core$String $s1515 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static frost$core$String $s1533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1590 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1605 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1631 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1670 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static frost$core$String $s1672 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s1674 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s1702 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1754 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1764 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x63\x72\x65\x61\x74\x65\x4d\x65\x74\x68\x6f\x64\x53\x68\x69\x6d\x28\x72\x61\x77\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x65\x66\x66\x65\x63\x74\x69\x76\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4d\x65\x74\x68\x6f\x64\x53\x68\x69\x6d", 206, -7873525039119771459, NULL };
static frost$core$String $s1772 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1774 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1810 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static frost$core$String $s1817 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1823 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static frost$core$String $s1825 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static frost$core$String $s1833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static frost$core$String $s1835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1839 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s1844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1846 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static frost$core$String $s1852 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1856 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s1859 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1879 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1881 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1888 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s1913 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static frost$core$String $s1915 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1929 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2022 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static frost$core$String $s2023 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s2056 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static frost$core$String $s2057 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s2080 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2082 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2085 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s2087 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s2101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s2114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static frost$core$String $s2120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static frost$core$String $s2126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s2132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s2155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s2185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s2217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static frost$core$String $s2256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s2258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s2264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static frost$core$String $s2268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static frost$core$String $s2299 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s2318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2340 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s2350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static frost$core$String $s2356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static frost$core$String $s2362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s2368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2380 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2388 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s2391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static frost$core$String $s2496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s2510 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2530 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2557 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24", 1, 137, NULL };
static frost$core$String $s2562 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2591 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s2593 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s2597 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s2599 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s2603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s2605 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s2609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2611 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2617 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2621 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s2623 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s2627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s2629 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s2633 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2639 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s2647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s2654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s2656 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s2660 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s2662 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s2667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s2669 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s2674 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2676 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2681 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s2683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s2688 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2690 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2696 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s2698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s2700 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2708 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static frost$core$String $s2714 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2723 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2726 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2730 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s2744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2822 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2829 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s2831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s2834 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static frost$core$String $s2839 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static frost$core$String $s2852 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static frost$core$String $s2854 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2857 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static frost$core$String $s2865 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static frost$core$String $s2867 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, -2219903404419143126, NULL };
static frost$core$String $s2873 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s2890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static frost$core$String $s2911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3003 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3015 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3019 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s3023 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static frost$core$String $s3028 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s3045 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3056 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6c\x6c\x69\x6e\x67\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 17, 6273213310080951380, NULL };
static frost$core$String $s3058 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x61\x20\x74\x61\x72\x67\x65\x74", 17, 4566770767977439161, NULL };
static frost$core$String $s3059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3098 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s3110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static frost$core$String $s3139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s3143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static frost$core$String $s3183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static frost$core$String $s3201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s3238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static frost$core$String $s3254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s3258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 17, 6191911388433222465, NULL };
static frost$core$String $s3264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 22, -4321982028467046391, NULL };
static frost$core$String $s3270 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x29\x3b", 15, -9084967859609473468, NULL };
static frost$core$String $s3281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static frost$core$String $s3284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static frost$core$String $s3329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x3b", 8, 14324500803727928, NULL };
static frost$core$String $s3345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static frost$core$String $s3399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s3401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static frost$core$String $s3405 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static frost$core$String $s3409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static frost$core$String $s3417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static frost$core$String $s3422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static frost$core$String $s3425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static frost$core$String $s3436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3441 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3444 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3573 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3576 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3588 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75", 1, 218, NULL };
static frost$core$String $s3600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s3606 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static frost$core$String $s3609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3611 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3625 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73", 2, 13952, NULL };
static frost$core$String $s3627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s3637 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s3641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -2509429713584291557, NULL };
static frost$core$String $s3643 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s3646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 309785060753825527, NULL };
static frost$core$String $s3674 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x78", 1, 221, NULL };
static frost$core$String $s3676 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static frost$core$String $s3678 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static frost$core$String $s3680 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3694 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static frost$core$String $s3696 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s3704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static frost$core$String $s3711 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3713 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3717 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3732 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3a\x20", 14, 4299600041167827879, NULL };
static frost$core$String $s3734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3735 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3749 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3758 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3760 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static frost$core$String $s3764 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x4e\x55\x4c\x4c\x29", 7, 151080389671230, NULL };
static frost$core$String $s3802 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x26\x6c\x6f\x63\x61\x6c", 7, 150085078960302, NULL };
static frost$core$String $s3804 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static frost$core$String $s3845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3876 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x64\x20", 3, 2111538, NULL };
static frost$core$String $s3878 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x68\x61\x73\x20\x6e\x6f\x74\x20\x62\x65\x65\x6e\x20\x64\x65\x66\x69\x6e\x65\x64", 21, -4672138024147032761, NULL };
static frost$core$String $s3879 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x20\x72\x65\x66\x3a\x20", 15, -4631094845120441450, NULL };
static frost$core$String $s3892 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3908 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3980 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s3985 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s4003 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4024 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s4026 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s4029 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21", 1, 134, NULL };
static frost$core$String $s4031 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static frost$core$String $s4036 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static frost$core$String $s4059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4080 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s4082 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s4086 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static frost$core$String $s4091 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static frost$core$String $s4143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s4145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s4149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s4151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s4155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s4157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s4164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s4166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s4170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s4172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s4176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s4178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s4182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s4184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s4191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s4193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s4200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s4202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s4209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s4211 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s4218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s4220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s4227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s4229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s4233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s4235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s4239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s4241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s4245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s4247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s4251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s4253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s4255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4275 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static frost$core$String $s4300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s4321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static frost$core$String $s4325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static frost$core$String $s4329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 16, -1641588070395923110, NULL };
static frost$core$String $s4359 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s4361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s4369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x66\x72\x6f\x73\x74\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 19, 1107787609391233434, NULL };
static frost$core$String $s4396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s4453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4480 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4488 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4490 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x3b", 2, 22885, NULL };
static frost$core$String $s4509 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4542 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4563 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s4569 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4624 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4649 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4681 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static frost$core$String $s4684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s4708 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4712 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x29\x20\x28", 4, 147754556, NULL };
static frost$core$String $s4716 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x64\x61\x74\x61\x20", 8, 15719379260890086, NULL };
static frost$core$String $s4720 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b\x20", 2, 14576, NULL };
static frost$core$String $s4722 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4740 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4753 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s4757 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x26", 4, 137655564, NULL };
static frost$core$String $s4761 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s4766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4779 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4789 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static frost$core$String $s4791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4795 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static frost$core$String $s4805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static frost$core$String $s4807 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, -2219903404419143126, NULL };
static frost$core$String $s4813 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s4834 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4838 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static frost$core$String $s4859 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s4871 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4879 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static frost$core$String $s4883 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s4900 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4915 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4919 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s4923 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static frost$core$String $s4927 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s4941 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4953 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4957 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x2a", 4, 137655568, NULL };
static frost$core$String $s4961 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4972 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4984 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4988 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x2d", 4, 137655571, NULL };
static frost$core$String $s4992 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5003 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5015 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5019 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x21", 4, 137655559, NULL };
static frost$core$String $s5023 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5034 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5048 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s5052 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static frost$core$String $s5056 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x29\x20\x66\x72\x6f\x73\x74\x41\x6c\x6c\x6f\x63\x28", 14, 1479774152278083113, NULL };
static frost$core$String $s5060 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5064 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static frost$core$String $s5080 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5088 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x46\x72\x65\x65\x28", 10, 1903662118626742793, NULL };
static frost$core$String $s5090 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5097 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s5129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s5144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static frost$core$String $s5172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5211 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x66\x6f\x72\x20\x74\x79\x70\x65\x20", 22, 6026307984013519672, NULL };
static frost$core$String $s5213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s5236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x66\x72\x6f\x73\x74\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, -7010250365195627110, NULL };
static frost$core$String $s5240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s5293 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x20\x3d\x20", 4, 200211019, NULL };
static frost$core$String $s5297 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s5318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5327 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static frost$core$String $s5329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5344 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s5411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s5413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s5483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5492 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5556 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f\x20", 3, 1514527, NULL };
static frost$core$String $s5558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5887 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x62\x6f\x72\x74\x28\x29\x3b\x20\x2f\x2f\x20\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 23, 8273563093259754029, NULL };
static frost$core$String $s5889 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5891 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5924 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static frost$core$String $s5926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5939 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5943 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5963 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c", 7, 141826707331641, NULL };
static frost$core$String $s5971 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s6038 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6048 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static frost$core$String $s6053 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30", 1, 149, NULL };
static frost$core$String $s6057 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30", 1, 149, NULL };
static frost$core$String $s6136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s6164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s6169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static frost$core$String $s6188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static frost$core$String $s6236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s6292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s6304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x77\x72\x69\x74\x65\x28\x6d\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x69\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x29", 137, -8068718440467774474, NULL };
static frost$core$String $s6319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6353 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x63", 2, 14946, NULL };

void org$frostlang$frostc$CCodeGenerator$init$frost$io$File(org$frostlang$frostc$CCodeGenerator* param0, frost$io$File* param1) {

// line 59
org$frostlang$frostc$HCodeGenerator* $tmp2 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
org$frostlang$frostc$HCodeGenerator$init$frost$io$File$org$frostlang$frostc$CCodeGenerator($tmp2, param1, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$HCodeGenerator** $tmp3 = &param0->hCodeGenRetain;
org$frostlang$frostc$HCodeGenerator* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
org$frostlang$frostc$HCodeGenerator** $tmp5 = &param0->hCodeGenRetain;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 60
org$frostlang$frostc$HCodeGenerator** $tmp6 = &param0->hCodeGenRetain;
org$frostlang$frostc$HCodeGenerator* $tmp7 = *$tmp6;
org$frostlang$frostc$CCodeGenerator$init$frost$io$File$org$frostlang$frostc$HCodeGenerator(param0, param1, $tmp7);
return;

}
void org$frostlang$frostc$CCodeGenerator$init$frost$io$File$org$frostlang$frostc$HCodeGenerator(org$frostlang$frostc$CCodeGenerator* param0, frost$io$File* param1, org$frostlang$frostc$HCodeGenerator* param2) {

// line 41
frost$core$Weak* $tmp8 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp8, ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Weak** $tmp9 = &param0->compiler;
frost$core$Weak* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Weak** $tmp11 = &param0->compiler;
*$tmp11 = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// line 47
frost$io$MemoryOutputStream* $tmp12 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$io$MemoryOutputStream** $tmp13 = &param0->strings;
frost$io$MemoryOutputStream* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$io$MemoryOutputStream** $tmp15 = &param0->strings;
*$tmp15 = $tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// line 49
frost$collections$HashSet* $tmp16 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$collections$HashSet** $tmp17 = &param0->imports;
frost$collections$HashSet* $tmp18 = *$tmp17;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$collections$HashSet** $tmp19 = &param0->imports;
*$tmp19 = $tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// line 56
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl** $tmp20 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp21 = *$tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
org$frostlang$frostc$ClassDecl** $tmp22 = &param0->currentClass;
*$tmp22 = ((org$frostlang$frostc$ClassDecl*) NULL);
// line 189
frost$io$MemoryOutputStream* $tmp23 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp23);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$io$MemoryOutputStream** $tmp24 = &param0->includes;
frost$io$MemoryOutputStream* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$io$MemoryOutputStream** $tmp26 = &param0->includes;
*$tmp26 = $tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// line 191
frost$io$MemoryOutputStream* $tmp27 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp27);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$io$MemoryOutputStream** $tmp28 = &param0->declarations;
frost$io$MemoryOutputStream* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$io$MemoryOutputStream** $tmp30 = &param0->declarations;
*$tmp30 = $tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// line 193
frost$io$MemoryOutputStream* $tmp31 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp31);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$io$MemoryOutputStream** $tmp32 = &param0->types;
frost$io$MemoryOutputStream* $tmp33 = *$tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$io$MemoryOutputStream** $tmp34 = &param0->types;
*$tmp34 = $tmp31;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// line 195
frost$io$MemoryOutputStream* $tmp35 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp35);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$io$MemoryOutputStream** $tmp36 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp37 = *$tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$io$MemoryOutputStream** $tmp38 = &param0->methodsBuffer;
*$tmp38 = $tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// line 197
frost$io$IndentedOutputStream* $tmp39 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream** $tmp40 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp41 = *$tmp40;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp39, ((frost$io$OutputStream*) $tmp41));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$io$IndentedOutputStream** $tmp42 = &param0->methods;
frost$io$IndentedOutputStream* $tmp43 = *$tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$io$IndentedOutputStream** $tmp44 = &param0->methods;
*$tmp44 = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// line 199
frost$io$MemoryOutputStream* $tmp45 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp45);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$io$MemoryOutputStream** $tmp46 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp47 = *$tmp46;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$io$MemoryOutputStream** $tmp48 = &param0->methodHeaderBuffer;
*$tmp48 = $tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// line 201
frost$io$IndentedOutputStream* $tmp49 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream** $tmp50 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp51 = *$tmp50;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp49, ((frost$io$OutputStream*) $tmp51));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$io$IndentedOutputStream** $tmp52 = &param0->methodHeader;
frost$io$IndentedOutputStream* $tmp53 = *$tmp52;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$io$IndentedOutputStream** $tmp54 = &param0->methodHeader;
*$tmp54 = $tmp49;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// line 203
frost$io$MemoryOutputStream* $tmp55 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp55);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$io$MemoryOutputStream** $tmp56 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp57 = *$tmp56;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$io$MemoryOutputStream** $tmp58 = &param0->shimsBuffer;
*$tmp58 = $tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// line 205
frost$io$IndentedOutputStream* $tmp59 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream** $tmp60 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp61 = *$tmp60;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp59, ((frost$io$OutputStream*) $tmp61));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$io$IndentedOutputStream** $tmp62 = &param0->shims;
frost$io$IndentedOutputStream* $tmp63 = *$tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$io$IndentedOutputStream** $tmp64 = &param0->shims;
*$tmp64 = $tmp59;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// line 207
frost$collections$HashSet* $tmp65 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp65);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$collections$HashSet** $tmp66 = &param0->declared;
frost$collections$HashSet* $tmp67 = *$tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$collections$HashSet** $tmp68 = &param0->declared;
*$tmp68 = $tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// line 209
frost$collections$HashSet* $tmp69 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp69);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$collections$HashSet** $tmp70 = &param0->writtenTypes;
frost$collections$HashSet* $tmp71 = *$tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$collections$HashSet** $tmp72 = &param0->writtenTypes;
*$tmp72 = $tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// line 211
frost$collections$HashSet* $tmp73 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp73);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$collections$HashSet** $tmp74 = &param0->writtenWrappers;
frost$collections$HashSet* $tmp75 = *$tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$collections$HashSet** $tmp76 = &param0->writtenWrappers;
*$tmp76 = $tmp73;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// line 213
frost$collections$HashMap* $tmp77 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp77);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$collections$HashMap** $tmp78 = &param0->classConstants;
frost$collections$HashMap* $tmp79 = *$tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$collections$HashMap** $tmp80 = &param0->classConstants;
*$tmp80 = $tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// line 215
frost$collections$IdentityMap* $tmp81 = (frost$collections$IdentityMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init($tmp81);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$collections$IdentityMap** $tmp82 = &param0->variableNames;
frost$collections$IdentityMap* $tmp83 = *$tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$collections$IdentityMap** $tmp84 = &param0->variableNames;
*$tmp84 = $tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// line 223
frost$collections$Stack* $tmp85 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp85);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$collections$Stack** $tmp86 = &param0->enclosingContexts;
frost$collections$Stack* $tmp87 = *$tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$collections$Stack** $tmp88 = &param0->enclosingContexts;
*$tmp88 = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// line 225
frost$core$Int64 $tmp89 = (frost$core$Int64) {0};
frost$core$Int64* $tmp90 = &param0->varCount;
*$tmp90 = $tmp89;
// line 227
frost$collections$IdentityMap* $tmp91 = (frost$collections$IdentityMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init($tmp91);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$collections$IdentityMap** $tmp92 = &param0->methodShims;
frost$collections$IdentityMap* $tmp93 = *$tmp92;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$collections$IdentityMap** $tmp94 = &param0->methodShims;
*$tmp94 = $tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// line 229
frost$collections$IdentityMap* $tmp95 = (frost$collections$IdentityMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init($tmp95);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$collections$IdentityMap** $tmp96 = &param0->choiceDataSizes;
frost$collections$IdentityMap* $tmp97 = *$tmp96;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$collections$IdentityMap** $tmp98 = &param0->choiceDataSizes;
*$tmp98 = $tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// line 231
frost$collections$HashMap* $tmp99 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp99);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$collections$HashMap** $tmp100 = &param0->refs;
frost$collections$HashMap* $tmp101 = *$tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$collections$HashMap** $tmp102 = &param0->refs;
*$tmp102 = $tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// line 64
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp103 = &param0->outDir;
frost$io$File* $tmp104 = *$tmp103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$io$File** $tmp105 = &param0->outDir;
*$tmp105 = param1;
// line 65
frost$io$IndentedOutputStream* $tmp106 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp107 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp107);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp106, ((frost$io$OutputStream*) $tmp107));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$io$IndentedOutputStream** $tmp108 = &param0->out;
frost$io$IndentedOutputStream* $tmp109 = *$tmp108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$io$IndentedOutputStream** $tmp110 = &param0->out;
*$tmp110 = $tmp106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// line 66
frost$core$Weak* $tmp111 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp111, ((frost$core$Object*) param2));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Weak** $tmp112 = &param0->hCodeGen;
frost$core$Weak* $tmp113 = *$tmp112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Weak** $tmp114 = &param0->hCodeGen;
*$tmp114 = $tmp111;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1) {

// line 70
frost$core$Weak** $tmp115 = &param0->hCodeGen;
frost$core$Weak* $tmp116 = *$tmp115;
frost$core$Object* $tmp117 = frost$core$Weak$get$R$frost$core$Weak$T($tmp116);
frost$core$String* $tmp118 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp117), param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
return $tmp118;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 74
frost$core$Weak** $tmp119 = &param0->hCodeGen;
frost$core$Weak* $tmp120 = *$tmp119;
frost$core$Object* $tmp121 = frost$core$Weak$get$R$frost$core$Weak$T($tmp120);
frost$core$String* $tmp122 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp121), param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
return $tmp122;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 78
frost$core$Weak** $tmp123 = &param0->hCodeGen;
frost$core$Weak* $tmp124 = *$tmp123;
frost$core$Object* $tmp125 = frost$core$Weak$get$R$frost$core$Weak$T($tmp124);
frost$core$Int64 $tmp126 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(((org$frostlang$frostc$HCodeGenerator*) $tmp125), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp125);
return $tmp126;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// line 82
org$frostlang$frostc$ClassDecl** $tmp127 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp128 = *$tmp127;
bool $tmp129 = param1 != $tmp128;
frost$core$Bit $tmp130 = frost$core$Bit$init$builtin_bit($tmp129);
return $tmp130;

}
void org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 86
*(&local0) = ((frost$core$Error*) NULL);
// line 87
frost$core$String** $tmp131 = &param1->name;
frost$core$String* $tmp132 = *$tmp131;
frost$core$Bit $tmp133 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp132, &$s134);
bool $tmp135 = $tmp133.value;
if ($tmp135) goto block3; else goto block4;
block3:;
// line 88
frost$core$Error* $tmp136 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local0) = ((frost$core$Error*) NULL);
return;
block4:;
// line 90
frost$core$Weak** $tmp137 = &param0->hCodeGen;
frost$core$Weak* $tmp138 = *$tmp137;
frost$core$Object* $tmp139 = frost$core$Weak$get$R$frost$core$Weak$T($tmp138);
frost$core$String* $tmp140 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp139), param1, &$s141);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$String* $tmp142 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local1) = $tmp140;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q($tmp139);
// line 91
frost$collections$HashSet** $tmp143 = &param0->imports;
frost$collections$HashSet* $tmp144 = *$tmp143;
frost$core$String* $tmp145 = *(&local1);
frost$core$Bit $tmp146 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp144, ((frost$collections$Key*) $tmp145));
frost$core$Bit $tmp147 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp146);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block5; else goto block6;
block5:;
// line 92
frost$io$MemoryOutputStream** $tmp149 = &param0->includes;
frost$io$MemoryOutputStream* $tmp150 = *$tmp149;
frost$core$String* $tmp151 = *(&local1);
frost$core$String* $tmp152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s153, $tmp151);
frost$core$String* $tmp154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp152, &$s155);
$fn157 $tmp156 = ($fn157) ((frost$io$OutputStream*) $tmp150)->$class->vtable[19];
frost$core$Error* $tmp158 = $tmp156(((frost$io$OutputStream*) $tmp150), $tmp154);
if ($tmp158 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local0) = $tmp158;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$String* $tmp159 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// line 93
frost$collections$HashSet** $tmp160 = &param0->imports;
frost$collections$HashSet* $tmp161 = *$tmp160;
frost$core$String* $tmp162 = *(&local1);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp161, ((frost$collections$Key*) $tmp162));
goto block6;
block6:;
frost$core$String* $tmp163 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 97
frost$core$Int64 $tmp164 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s165, $tmp164);
abort(); // unreachable
block2:;
frost$core$Error* $tmp166 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 102
frost$core$Bit* $tmp167 = &param1->resolved;
frost$core$Bit $tmp168 = *$tmp167;
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp170 = (frost$core$Int64) {102};
frost$core$String* $tmp171 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s172, ((frost$core$Object*) param1));
frost$core$String* $tmp173 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp171, &$s174);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s175, $tmp170, $tmp173);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
abort(); // unreachable
block1:;
// line 103
frost$core$Bit $tmp176 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(param1);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block3; else goto block4;
block3:;
// line 104
frost$core$Weak** $tmp178 = &param0->compiler;
frost$core$Weak* $tmp179 = *$tmp178;
frost$core$Object* $tmp180 = frost$core$Weak$get$R$frost$core$Weak$T($tmp179);
org$frostlang$frostc$ClassDecl* $tmp181 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp180), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
org$frostlang$frostc$ClassDecl* $tmp182 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local0) = $tmp181;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q($tmp180);
// line 105
org$frostlang$frostc$ClassDecl* $tmp183 = *(&local0);
frost$core$Bit $tmp184 = frost$core$Bit$init$builtin_bit($tmp183 != NULL);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp186 = (frost$core$Int64) {105};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s187, $tmp186);
abort(); // unreachable
block5:;
// line 106
org$frostlang$frostc$ClassDecl* $tmp188 = *(&local0);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, $tmp188);
org$frostlang$frostc$ClassDecl* $tmp189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block4;
block4:;
// line 108
org$frostlang$frostc$Type$Kind* $tmp190 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp191 = *$tmp190;
frost$core$Int64 $tmp192 = $tmp191.$rawValue;
frost$core$Int64 $tmp193 = (frost$core$Int64) {15};
frost$core$Bit $tmp194 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp192, $tmp193);
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp196 = (frost$core$Int64) {14};
frost$core$Bit $tmp197 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp192, $tmp196);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block8; else goto block10;
block8:;
// line 110
org$frostlang$frostc$Type* $tmp199 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$String* $tmp200 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp199);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
return $tmp200;
block10:;
frost$core$Int64 $tmp201 = (frost$core$Int64) {17};
frost$core$Bit $tmp202 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp192, $tmp201);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp204 = (frost$core$Int64) {16};
frost$core$Bit $tmp205 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp192, $tmp204);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block11; else goto block13;
block11:;
// line 113
org$frostlang$frostc$Type* $tmp207 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$String* $tmp208 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp207);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
return $tmp208;
block13:;
frost$core$Int64 $tmp209 = (frost$core$Int64) {10};
frost$core$Bit $tmp210 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp192, $tmp209);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block14; else goto block7;
block14:;
// line 116
org$frostlang$frostc$FixedArray** $tmp212 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp213 = *$tmp212;
frost$core$Int64 $tmp214 = (frost$core$Int64) {0};
frost$core$Object* $tmp215 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp213, $tmp214);
frost$core$String** $tmp216 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp215))->name;
frost$core$String* $tmp217 = *$tmp216;
frost$core$Bit $tmp218 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp217, &$s219);
bool $tmp220 = $tmp218.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp215);
if ($tmp220) goto block17; else goto block16;
block17:;
org$frostlang$frostc$FixedArray** $tmp221 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp222 = *$tmp221;
frost$core$Int64 $tmp223 = (frost$core$Int64) {1};
frost$core$Object* $tmp224 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp222, $tmp223);
frost$core$Bit $tmp225 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp224));
bool $tmp226 = $tmp225.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp224);
if ($tmp226) goto block15; else goto block16;
block15:;
// line 117
org$frostlang$frostc$FixedArray** $tmp227 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp228 = *$tmp227;
frost$core$Int64 $tmp229 = (frost$core$Int64) {1};
frost$core$Object* $tmp230 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp228, $tmp229);
frost$core$String* $tmp231 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp230), ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q($tmp230);
return $tmp231;
block16:;
goto block7;
block7:;
// line 121
frost$core$Weak** $tmp232 = &param0->hCodeGen;
frost$core$Weak* $tmp233 = *$tmp232;
frost$core$Object* $tmp234 = frost$core$Weak$get$R$frost$core$Weak$T($tmp233);
frost$core$String* $tmp235 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp234), param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q($tmp234);
return $tmp235;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$Type* param2) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$Int64 local3;
frost$core$Error* local4 = NULL;
org$frostlang$frostc$Type$Kind* $tmp236 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp237 = *$tmp236;
org$frostlang$frostc$Type$Kind$wrapper* $tmp238;
$tmp238 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp238->value = $tmp237;
frost$core$Int64 $tmp239 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp240 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp239);
org$frostlang$frostc$Type$Kind$wrapper* $tmp241;
$tmp241 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp241->value = $tmp240;
ITable* $tmp242 = ((frost$core$Equatable*) $tmp238)->$class->itable;
while ($tmp242->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp242 = $tmp242->next;
}
$fn244 $tmp243 = $tmp242->methods[0];
frost$core$Bit $tmp245 = $tmp243(((frost$core$Equatable*) $tmp238), ((frost$core$Equatable*) $tmp241));
bool $tmp246 = $tmp245.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp241)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp238)));
if ($tmp246) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp247 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp248 = *$tmp247;
org$frostlang$frostc$Type$Kind$wrapper* $tmp249;
$tmp249 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp249->value = $tmp248;
frost$core$Int64 $tmp250 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp251 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp250);
org$frostlang$frostc$Type$Kind$wrapper* $tmp252;
$tmp252 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp252->value = $tmp251;
ITable* $tmp253 = ((frost$core$Equatable*) $tmp249)->$class->itable;
while ($tmp253->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp253 = $tmp253->next;
}
$fn255 $tmp254 = $tmp253->methods[0];
frost$core$Bit $tmp256 = $tmp254(((frost$core$Equatable*) $tmp249), ((frost$core$Equatable*) $tmp252));
bool $tmp257 = $tmp256.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp252)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp249)));
if ($tmp257) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp258 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp259 = *$tmp258;
org$frostlang$frostc$Type$Kind$wrapper* $tmp260;
$tmp260 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp260->value = $tmp259;
frost$core$Int64 $tmp261 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp262 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp261);
org$frostlang$frostc$Type$Kind$wrapper* $tmp263;
$tmp263 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp263->value = $tmp262;
ITable* $tmp264 = ((frost$core$Equatable*) $tmp260)->$class->itable;
while ($tmp264->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[0];
frost$core$Bit $tmp267 = $tmp265(((frost$core$Equatable*) $tmp260), ((frost$core$Equatable*) $tmp263));
bool $tmp268 = $tmp267.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp263)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp260)));
if ($tmp268) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp269 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp270 = *$tmp269;
org$frostlang$frostc$Type$Kind$wrapper* $tmp271;
$tmp271 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp271->value = $tmp270;
frost$core$Int64 $tmp272 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp273 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp272);
org$frostlang$frostc$Type$Kind$wrapper* $tmp274;
$tmp274 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp274->value = $tmp273;
ITable* $tmp275 = ((frost$core$Equatable*) $tmp271)->$class->itable;
while ($tmp275->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp275 = $tmp275->next;
}
$fn277 $tmp276 = $tmp275->methods[0];
frost$core$Bit $tmp278 = $tmp276(((frost$core$Equatable*) $tmp271), ((frost$core$Equatable*) $tmp274));
bool $tmp279 = $tmp278.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp274)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp271)));
if ($tmp279) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp280 = (frost$core$Int64) {126};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s281, $tmp280, &$s282);
abort(); // unreachable
block1:;
// line 127
frost$core$Int64* $tmp283 = &param0->varCount;
frost$core$Int64 $tmp284 = *$tmp283;
frost$core$Int64 $tmp285 = (frost$core$Int64) {1};
int64_t $tmp286 = $tmp284.value;
int64_t $tmp287 = $tmp285.value;
int64_t $tmp288 = $tmp286 + $tmp287;
frost$core$Int64 $tmp289 = (frost$core$Int64) {$tmp288};
frost$core$Int64* $tmp290 = &param0->varCount;
*$tmp290 = $tmp289;
// line 128
frost$core$Int64* $tmp291 = &param0->varCount;
frost$core$Int64 $tmp292 = *$tmp291;
frost$core$Int64$wrapper* $tmp293;
$tmp293 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp293->value = $tmp292;
frost$core$String* $tmp294 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s295, ((frost$core$Object*) $tmp293));
frost$core$String* $tmp296 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp294, &$s297);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$String* $tmp298 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local0) = $tmp296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// line 129
frost$core$MutableString* $tmp299 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp299, &$s300);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$MutableString* $tmp301 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local1) = $tmp299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
// line 130
frost$core$MutableString* $tmp302 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp303 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp304 = *$tmp303;
org$frostlang$frostc$FixedArray** $tmp305 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp306 = *$tmp305;
ITable* $tmp307 = ((frost$collections$CollectionView*) $tmp306)->$class->itable;
while ($tmp307->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp307 = $tmp307->next;
}
$fn309 $tmp308 = $tmp307->methods[0];
frost$core$Int64 $tmp310 = $tmp308(((frost$collections$CollectionView*) $tmp306));
frost$core$Int64 $tmp311 = (frost$core$Int64) {1};
int64_t $tmp312 = $tmp310.value;
int64_t $tmp313 = $tmp311.value;
int64_t $tmp314 = $tmp312 - $tmp313;
frost$core$Int64 $tmp315 = (frost$core$Int64) {$tmp314};
frost$core$Object* $tmp316 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp304, $tmp315);
frost$core$String* $tmp317 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp316));
frost$core$MutableString$append$frost$core$String($tmp302, $tmp317);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q($tmp316);
// line 131
frost$core$MutableString* $tmp318 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp318, &$s319);
// line 132
frost$core$MutableString* $tmp320 = *(&local1);
frost$core$String* $tmp321 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp320, $tmp321);
// line 133
frost$core$MutableString* $tmp322 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp322, &$s323);
// line 134
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s324));
frost$core$String* $tmp325 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local2) = &$s326;
// line 135
frost$core$Bit $tmp327 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block6; else goto block7;
block6:;
// line 136
frost$core$MutableString* $tmp329 = *(&local1);
frost$core$String* $tmp330 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$MutableString$append$frost$core$String($tmp329, $tmp330);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// line 137
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s331));
frost$core$String* $tmp332 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local2) = &$s333;
goto block7;
block7:;
// line 139
frost$core$Int64 $tmp334 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp335 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp336 = *$tmp335;
ITable* $tmp337 = ((frost$collections$CollectionView*) $tmp336)->$class->itable;
while ($tmp337->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp337 = $tmp337->next;
}
$fn339 $tmp338 = $tmp337->methods[0];
frost$core$Int64 $tmp340 = $tmp338(((frost$collections$CollectionView*) $tmp336));
frost$core$Int64 $tmp341 = (frost$core$Int64) {1};
int64_t $tmp342 = $tmp340.value;
int64_t $tmp343 = $tmp341.value;
int64_t $tmp344 = $tmp342 - $tmp343;
frost$core$Int64 $tmp345 = (frost$core$Int64) {$tmp344};
frost$core$Bit $tmp346 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp347 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp334, $tmp345, $tmp346);
frost$core$Int64 $tmp348 = $tmp347.min;
*(&local3) = $tmp348;
frost$core$Int64 $tmp349 = $tmp347.max;
frost$core$Bit $tmp350 = $tmp347.inclusive;
bool $tmp351 = $tmp350.value;
frost$core$Int64 $tmp352 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp353 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp352);
if ($tmp351) goto block11; else goto block12;
block11:;
int64_t $tmp354 = $tmp348.value;
int64_t $tmp355 = $tmp349.value;
bool $tmp356 = $tmp354 <= $tmp355;
frost$core$Bit $tmp357 = (frost$core$Bit) {$tmp356};
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block8; else goto block9;
block12:;
int64_t $tmp359 = $tmp348.value;
int64_t $tmp360 = $tmp349.value;
bool $tmp361 = $tmp359 < $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block8; else goto block9;
block8:;
// line 140
frost$core$MutableString* $tmp364 = *(&local1);
frost$core$String* $tmp365 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp364, $tmp365);
// line 141
frost$core$MutableString* $tmp366 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp367 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp368 = *$tmp367;
frost$core$Int64 $tmp369 = *(&local3);
frost$core$Object* $tmp370 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp368, $tmp369);
frost$core$String* $tmp371 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp370));
frost$core$MutableString$append$frost$core$String($tmp366, $tmp371);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$core$Frost$unref$frost$core$Object$Q($tmp370);
// line 142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s372));
frost$core$String* $tmp373 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
*(&local2) = &$s374;
goto block10;
block10:;
frost$core$Int64 $tmp375 = *(&local3);
int64_t $tmp376 = $tmp349.value;
int64_t $tmp377 = $tmp375.value;
int64_t $tmp378 = $tmp376 - $tmp377;
frost$core$Int64 $tmp379 = (frost$core$Int64) {$tmp378};
frost$core$UInt64 $tmp380 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp379);
if ($tmp351) goto block14; else goto block15;
block14:;
uint64_t $tmp381 = $tmp380.value;
uint64_t $tmp382 = $tmp353.value;
bool $tmp383 = $tmp381 >= $tmp382;
frost$core$Bit $tmp384 = (frost$core$Bit) {$tmp383};
bool $tmp385 = $tmp384.value;
if ($tmp385) goto block13; else goto block9;
block15:;
uint64_t $tmp386 = $tmp380.value;
uint64_t $tmp387 = $tmp353.value;
bool $tmp388 = $tmp386 > $tmp387;
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block13; else goto block9;
block13:;
int64_t $tmp391 = $tmp375.value;
int64_t $tmp392 = $tmp352.value;
int64_t $tmp393 = $tmp391 + $tmp392;
frost$core$Int64 $tmp394 = (frost$core$Int64) {$tmp393};
*(&local3) = $tmp394;
goto block8;
block9:;
// line 144
frost$core$MutableString* $tmp395 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp395, &$s396);
// line 145
*(&local4) = ((frost$core$Error*) NULL);
// line 146
frost$io$MemoryOutputStream** $tmp397 = &param0->types;
frost$io$MemoryOutputStream* $tmp398 = *$tmp397;
frost$core$MutableString* $tmp399 = *(&local1);
frost$core$String* $tmp400 = frost$core$MutableString$finish$R$frost$core$String($tmp399);
$fn402 $tmp401 = ($fn402) ((frost$io$OutputStream*) $tmp398)->$class->vtable[19];
frost$core$Error* $tmp403 = $tmp401(((frost$io$OutputStream*) $tmp398), $tmp400);
if ($tmp403 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local4) = $tmp403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
goto block16;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
goto block17;
block16:;
// line 149
frost$core$Int64 $tmp404 = (frost$core$Int64) {149};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s405, $tmp404);
abort(); // unreachable
block17:;
frost$core$Error* $tmp406 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local4) = ((frost$core$Error*) NULL);
// line 151
frost$core$String* $tmp407 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$String* $tmp408 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp409 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp410 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local0) = ((frost$core$String*) NULL);
return $tmp407;

}
void org$frostlang$frostc$CCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// line 156
frost$core$Weak* $tmp411 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp411, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Weak** $tmp412 = &param0->compiler;
frost$core$Weak* $tmp413 = *$tmp412;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$Weak** $tmp414 = &param0->compiler;
*$tmp414 = $tmp411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// line 157
frost$core$Weak** $tmp415 = &param0->hCodeGen;
frost$core$Weak* $tmp416 = *$tmp415;
frost$core$Object* $tmp417 = frost$core$Weak$get$R$frost$core$Weak$T($tmp416);
org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(((org$frostlang$frostc$HCodeGenerator*) $tmp417), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp417);
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0) {

// line 236
frost$core$Int64* $tmp418 = &param0->varCount;
frost$core$Int64 $tmp419 = *$tmp418;
frost$core$Int64 $tmp420 = (frost$core$Int64) {1};
int64_t $tmp421 = $tmp419.value;
int64_t $tmp422 = $tmp420.value;
int64_t $tmp423 = $tmp421 + $tmp422;
frost$core$Int64 $tmp424 = (frost$core$Int64) {$tmp423};
frost$core$Int64* $tmp425 = &param0->varCount;
*$tmp425 = $tmp424;
// line 237
frost$core$Int64* $tmp426 = &param0->varCount;
frost$core$Int64 $tmp427 = *$tmp426;
frost$core$Int64$wrapper* $tmp428;
$tmp428 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp428->value = $tmp427;
frost$core$String* $tmp429 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s430, ((frost$core$Object*) $tmp428));
frost$core$String* $tmp431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp429, &$s432);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
return $tmp431;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nextLabel$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0) {

// line 241
frost$core$Int64* $tmp433 = &param0->varCount;
frost$core$Int64 $tmp434 = *$tmp433;
frost$core$Int64 $tmp435 = (frost$core$Int64) {1};
int64_t $tmp436 = $tmp434.value;
int64_t $tmp437 = $tmp435.value;
int64_t $tmp438 = $tmp436 + $tmp437;
frost$core$Int64 $tmp439 = (frost$core$Int64) {$tmp438};
frost$core$Int64* $tmp440 = &param0->varCount;
*$tmp440 = $tmp439;
// line 242
frost$core$Int64* $tmp441 = &param0->varCount;
frost$core$Int64 $tmp442 = *$tmp441;
frost$core$Int64$wrapper* $tmp443;
$tmp443 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp443->value = $tmp442;
frost$core$String* $tmp444 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s445, ((frost$core$Object*) $tmp443));
frost$core$String* $tmp446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp444, &$s447);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
return $tmp446;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Int64$nullable local0;
org$frostlang$frostc$ChoiceCase* local1 = NULL;
frost$core$Int64 local2;
org$frostlang$frostc$Type* local3 = NULL;
// line 246
frost$collections$IdentityMap** $tmp448 = &param0->choiceDataSizes;
frost$collections$IdentityMap* $tmp449 = *$tmp448;
frost$core$Object* $tmp450 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp449, ((frost$core$Object*) param1));
*(&local0) = ($tmp450 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp450)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp450);
// line 247
frost$core$Int64$nullable $tmp451 = *(&local0);
frost$core$Bit $tmp452 = frost$core$Bit$init$builtin_bit(!$tmp451.nonnull);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block1; else goto block2;
block1:;
// line 248
frost$core$Int64 $tmp454 = (frost$core$Int64) {0};
*(&local0) = ((frost$core$Int64$nullable) { $tmp454, true });
// line 249
frost$collections$Array** $tmp455 = &param1->choiceCases;
frost$collections$Array* $tmp456 = *$tmp455;
ITable* $tmp457 = ((frost$collections$Iterable*) $tmp456)->$class->itable;
while ($tmp457->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp457 = $tmp457->next;
}
$fn459 $tmp458 = $tmp457->methods[0];
frost$collections$Iterator* $tmp460 = $tmp458(((frost$collections$Iterable*) $tmp456));
goto block3;
block3:;
ITable* $tmp461 = $tmp460->$class->itable;
while ($tmp461->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp461 = $tmp461->next;
}
$fn463 $tmp462 = $tmp461->methods[0];
frost$core$Bit $tmp464 = $tmp462($tmp460);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp466 = $tmp460->$class->itable;
while ($tmp466->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp466 = $tmp466->next;
}
$fn468 $tmp467 = $tmp466->methods[1];
frost$core$Object* $tmp469 = $tmp467($tmp460);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp469)));
org$frostlang$frostc$ChoiceCase* $tmp470 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local1) = ((org$frostlang$frostc$ChoiceCase*) $tmp469);
// line 250
frost$core$Weak** $tmp471 = &param0->compiler;
frost$core$Weak* $tmp472 = *$tmp471;
frost$core$Object* $tmp473 = frost$core$Weak$get$R$frost$core$Weak$T($tmp472);
org$frostlang$frostc$ChoiceCase* $tmp474 = *(&local1);
org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ChoiceCase(((org$frostlang$frostc$Compiler*) $tmp473), $tmp474);
frost$core$Frost$unref$frost$core$Object$Q($tmp473);
// line 251
frost$core$Int64 $tmp475 = (frost$core$Int64) {0};
*(&local2) = $tmp475;
// line 252
org$frostlang$frostc$ChoiceCase* $tmp476 = *(&local1);
frost$collections$Array** $tmp477 = &$tmp476->fields;
frost$collections$Array* $tmp478 = *$tmp477;
ITable* $tmp479 = ((frost$collections$Iterable*) $tmp478)->$class->itable;
while ($tmp479->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp479 = $tmp479->next;
}
$fn481 $tmp480 = $tmp479->methods[0];
frost$collections$Iterator* $tmp482 = $tmp480(((frost$collections$Iterable*) $tmp478));
goto block6;
block6:;
ITable* $tmp483 = $tmp482->$class->itable;
while ($tmp483->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp483 = $tmp483->next;
}
$fn485 $tmp484 = $tmp483->methods[0];
frost$core$Bit $tmp486 = $tmp484($tmp482);
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block8; else goto block7;
block7:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp488 = $tmp482->$class->itable;
while ($tmp488->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp488 = $tmp488->next;
}
$fn490 $tmp489 = $tmp488->methods[1];
frost$core$Object* $tmp491 = $tmp489($tmp482);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp491)));
org$frostlang$frostc$Type* $tmp492 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp491);
// line 254
frost$core$Int64 $tmp493 = *(&local2);
org$frostlang$frostc$Type* $tmp494 = *(&local3);
frost$core$Int64 $tmp495 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp494);
int64_t $tmp496 = $tmp493.value;
int64_t $tmp497 = $tmp495.value;
int64_t $tmp498 = $tmp496 + $tmp497;
frost$core$Int64 $tmp499 = (frost$core$Int64) {$tmp498};
*(&local2) = $tmp499;
frost$core$Frost$unref$frost$core$Object$Q($tmp491);
org$frostlang$frostc$Type* $tmp500 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// line 256
frost$core$Int64$nullable $tmp501 = *(&local0);
frost$core$Int64 $tmp502 = *(&local2);
frost$core$Int64 $tmp503 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64) $tmp501.value), $tmp502);
*(&local0) = ((frost$core$Int64$nullable) { $tmp503, true });
frost$core$Frost$unref$frost$core$Object$Q($tmp469);
org$frostlang$frostc$ChoiceCase* $tmp504 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local1) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
// line 258
frost$collections$IdentityMap** $tmp505 = &param0->choiceDataSizes;
frost$collections$IdentityMap* $tmp506 = *$tmp505;
frost$core$Int64$nullable $tmp507 = *(&local0);
frost$core$Int64$wrapper* $tmp508;
$tmp508 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp508->value = ((frost$core$Int64) $tmp507.value);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp506, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
goto block2;
block2:;
// line 260
frost$core$Int64$nullable $tmp509 = *(&local0);
return ((frost$core$Int64) $tmp509.value);

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
frost$core$Int64 local1;
org$frostlang$frostc$FieldDecl* local2 = NULL;
frost$core$Int64 local3;
frost$core$Int64 local4;
// line 264
frost$core$Bit* $tmp510 = &param1->resolved;
frost$core$Bit $tmp511 = *$tmp510;
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp513 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s514, $tmp513);
abort(); // unreachable
block1:;
// line 265
frost$core$Bit $tmp515 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param1);
bool $tmp516 = $tmp515.value;
if ($tmp516) goto block3; else goto block4;
block3:;
// line 266
frost$core$String** $tmp517 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp518 = *$tmp517;
frost$core$Bit $tmp519 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp518, &$s520);
bool $tmp521 = $tmp519.value;
if ($tmp521) goto block5; else goto block6;
block5:;
// line 267
frost$core$Int64 $tmp522 = (frost$core$Int64) {1};
return $tmp522;
block6:;
// line 269
frost$core$String** $tmp523 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp524 = *$tmp523;
frost$core$Bit $tmp525 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp524, &$s526);
bool $tmp527 = $tmp525.value;
if ($tmp527) goto block7; else goto block8;
block7:;
// line 270
frost$core$Int64 $tmp528 = (frost$core$Int64) {2};
return $tmp528;
block8:;
// line 272
frost$core$String** $tmp529 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp530 = *$tmp529;
frost$core$Bit $tmp531 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp530, &$s532);
bool $tmp533 = $tmp531.value;
if ($tmp533) goto block9; else goto block10;
block9:;
// line 273
frost$core$Int64 $tmp534 = (frost$core$Int64) {4};
return $tmp534;
block10:;
// line 275
frost$core$String** $tmp535 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp536 = *$tmp535;
frost$core$Bit $tmp537 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp536, &$s538);
bool $tmp539 = $tmp537.value;
if ($tmp539) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp540 = (frost$core$Int64) {275};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s541, $tmp540);
abort(); // unreachable
block11:;
// line 276
frost$core$Int64 $tmp542 = (frost$core$Int64) {8};
return $tmp542;
block4:;
// line 278
org$frostlang$frostc$Type* $tmp543 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp544 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param1, $tmp543);
bool $tmp545 = $tmp544.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
if ($tmp545) goto block13; else goto block14;
block13:;
// line 279
frost$core$Int64 $tmp546 = (frost$core$Int64) {1};
return $tmp546;
block14:;
// line 281
frost$core$Weak** $tmp547 = &param0->compiler;
frost$core$Weak* $tmp548 = *$tmp547;
frost$core$Object* $tmp549 = frost$core$Weak$get$R$frost$core$Weak$T($tmp548);
org$frostlang$frostc$ClassDecl* $tmp550 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp549), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
org$frostlang$frostc$ClassDecl* $tmp551 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
*(&local0) = $tmp550;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q($tmp549);
// line 282
org$frostlang$frostc$ClassDecl* $tmp552 = *(&local0);
frost$core$Bit $tmp553 = frost$core$Bit$init$builtin_bit($tmp552 != NULL);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp555 = (frost$core$Int64) {282};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s556, $tmp555);
abort(); // unreachable
block15:;
// line 283
frost$core$Weak** $tmp557 = &param0->compiler;
frost$core$Weak* $tmp558 = *$tmp557;
frost$core$Object* $tmp559 = frost$core$Weak$get$R$frost$core$Weak$T($tmp558);
org$frostlang$frostc$ClassDecl* $tmp560 = *(&local0);
frost$core$Bit $tmp561 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp559), $tmp560);
frost$core$Bit $tmp562 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp561);
bool $tmp563 = $tmp562.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp559);
if ($tmp563) goto block17; else goto block19;
block19:;
org$frostlang$frostc$ClassDecl* $tmp564 = *(&local0);
frost$core$String** $tmp565 = &$tmp564->name;
frost$core$String* $tmp566 = *$tmp565;
frost$core$Bit $tmp567 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp566, &$s568);
bool $tmp569 = $tmp567.value;
if ($tmp569) goto block17; else goto block18;
block17:;
// line 284
frost$core$Int64 $tmp570 = (frost$core$Int64) {8};
org$frostlang$frostc$ClassDecl* $tmp571 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp570;
block18:;
// line 286
frost$core$Int64 $tmp572 = (frost$core$Int64) {0};
*(&local1) = $tmp572;
// line 287
frost$core$Weak** $tmp573 = &param0->compiler;
frost$core$Weak* $tmp574 = *$tmp573;
frost$core$Object* $tmp575 = frost$core$Weak$get$R$frost$core$Weak$T($tmp574);
org$frostlang$frostc$ClassDecl* $tmp576 = *(&local0);
frost$collections$ListView* $tmp577 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp575), $tmp576);
ITable* $tmp578 = ((frost$collections$Iterable*) $tmp577)->$class->itable;
while ($tmp578->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp578 = $tmp578->next;
}
$fn580 $tmp579 = $tmp578->methods[0];
frost$collections$Iterator* $tmp581 = $tmp579(((frost$collections$Iterable*) $tmp577));
goto block20;
block20:;
ITable* $tmp582 = $tmp581->$class->itable;
while ($tmp582->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp582 = $tmp582->next;
}
$fn584 $tmp583 = $tmp582->methods[0];
frost$core$Bit $tmp585 = $tmp583($tmp581);
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block22; else goto block21;
block21:;
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp587 = $tmp581->$class->itable;
while ($tmp587->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp587 = $tmp587->next;
}
$fn589 $tmp588 = $tmp587->methods[1];
frost$core$Object* $tmp590 = $tmp588($tmp581);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp590)));
org$frostlang$frostc$FieldDecl* $tmp591 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local2) = ((org$frostlang$frostc$FieldDecl*) $tmp590);
// line 288
org$frostlang$frostc$FieldDecl* $tmp592 = *(&local2);
org$frostlang$frostc$Annotations** $tmp593 = &$tmp592->annotations;
org$frostlang$frostc$Annotations* $tmp594 = *$tmp593;
frost$core$Bit $tmp595 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block23; else goto block24;
block23:;
// line 289
frost$core$Frost$unref$frost$core$Object$Q($tmp590);
org$frostlang$frostc$FieldDecl* $tmp597 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block20;
block24:;
// line 291
frost$core$Weak** $tmp598 = &param0->compiler;
frost$core$Weak* $tmp599 = *$tmp598;
frost$core$Object* $tmp600 = frost$core$Weak$get$R$frost$core$Weak$T($tmp599);
org$frostlang$frostc$FieldDecl* $tmp601 = *(&local2);
frost$core$Bit $tmp602 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp600), $tmp601);
frost$core$Frost$unref$frost$core$Object$Q($tmp600);
// line 292
org$frostlang$frostc$FieldDecl* $tmp603 = *(&local2);
org$frostlang$frostc$Type** $tmp604 = &$tmp603->type;
org$frostlang$frostc$Type* $tmp605 = *$tmp604;
org$frostlang$frostc$Type* $tmp606 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp607 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp605, $tmp606);
bool $tmp608 = $tmp607.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
if ($tmp608) goto block25; else goto block27;
block25:;
// line 294
frost$core$Int64 $tmp609 = *(&local1);
frost$core$Weak** $tmp610 = &param0->hCodeGen;
frost$core$Weak* $tmp611 = *$tmp610;
frost$core$Object* $tmp612 = frost$core$Weak$get$R$frost$core$Weak$T($tmp611);
org$frostlang$frostc$LLVMCodeGenerator** $tmp613 = &((org$frostlang$frostc$HCodeGenerator*) $tmp612)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp614 = *$tmp613;
org$frostlang$frostc$ClassDecl* $tmp615 = *(&local0);
frost$core$Int64 $tmp616 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp614, $tmp615);
int64_t $tmp617 = $tmp609.value;
int64_t $tmp618 = $tmp616.value;
int64_t $tmp619 = $tmp617 + $tmp618;
frost$core$Int64 $tmp620 = (frost$core$Int64) {$tmp619};
*(&local1) = $tmp620;
frost$core$Frost$unref$frost$core$Object$Q($tmp612);
goto block26;
block27:;
// line 1
// line 297
org$frostlang$frostc$FieldDecl* $tmp621 = *(&local2);
org$frostlang$frostc$Type** $tmp622 = &$tmp621->type;
org$frostlang$frostc$Type* $tmp623 = *$tmp622;
frost$core$Int64 $tmp624 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp623);
*(&local3) = $tmp624;
// line 298
frost$core$Int64 $tmp625 = *(&local1);
frost$core$Int64 $tmp626 = *(&local3);
frost$core$Int64 $tmp627 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp625, $tmp626);
*(&local4) = $tmp627;
// line 299
frost$core$Int64 $tmp628 = *(&local4);
frost$core$Int64 $tmp629 = (frost$core$Int64) {0};
int64_t $tmp630 = $tmp628.value;
int64_t $tmp631 = $tmp629.value;
bool $tmp632 = $tmp630 != $tmp631;
frost$core$Bit $tmp633 = (frost$core$Bit) {$tmp632};
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block28; else goto block29;
block28:;
// line 300
frost$core$Int64 $tmp635 = *(&local1);
frost$core$Int64 $tmp636 = *(&local3);
frost$core$Int64 $tmp637 = *(&local4);
int64_t $tmp638 = $tmp636.value;
int64_t $tmp639 = $tmp637.value;
int64_t $tmp640 = $tmp638 - $tmp639;
frost$core$Int64 $tmp641 = (frost$core$Int64) {$tmp640};
int64_t $tmp642 = $tmp635.value;
int64_t $tmp643 = $tmp641.value;
int64_t $tmp644 = $tmp642 + $tmp643;
frost$core$Int64 $tmp645 = (frost$core$Int64) {$tmp644};
*(&local1) = $tmp645;
goto block29;
block29:;
// line 302
frost$core$Int64 $tmp646 = *(&local1);
frost$core$Int64 $tmp647 = *(&local3);
frost$core$Int64 $tmp648 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp646, $tmp647);
frost$core$Int64 $tmp649 = (frost$core$Int64) {0};
frost$core$Bit $tmp650 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp648, $tmp649);
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp652 = (frost$core$Int64) {302};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s653, $tmp652);
abort(); // unreachable
block30:;
// line 303
frost$core$Int64 $tmp654 = *(&local1);
frost$core$Int64 $tmp655 = *(&local3);
int64_t $tmp656 = $tmp654.value;
int64_t $tmp657 = $tmp655.value;
int64_t $tmp658 = $tmp656 + $tmp657;
frost$core$Int64 $tmp659 = (frost$core$Int64) {$tmp658};
*(&local1) = $tmp659;
goto block26;
block26:;
frost$core$Frost$unref$frost$core$Object$Q($tmp590);
org$frostlang$frostc$FieldDecl* $tmp660 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$core$Frost$unref$frost$core$Object$Q($tmp575);
// line 306
org$frostlang$frostc$Type$Kind* $tmp661 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp662 = *$tmp661;
org$frostlang$frostc$Type$Kind$wrapper* $tmp663;
$tmp663 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp663->value = $tmp662;
frost$core$Int64 $tmp664 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp665 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp664);
org$frostlang$frostc$Type$Kind$wrapper* $tmp666;
$tmp666 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp666->value = $tmp665;
ITable* $tmp667 = ((frost$core$Equatable*) $tmp663)->$class->itable;
while ($tmp667->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp667 = $tmp667->next;
}
$fn669 $tmp668 = $tmp667->methods[0];
frost$core$Bit $tmp670 = $tmp668(((frost$core$Equatable*) $tmp663), ((frost$core$Equatable*) $tmp666));
bool $tmp671 = $tmp670.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp666)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp663)));
if ($tmp671) goto block32; else goto block33;
block32:;
// line 307
frost$core$Int64 $tmp672 = *(&local1);
frost$core$Int64 $tmp673 = (frost$core$Int64) {1};
int64_t $tmp674 = $tmp672.value;
int64_t $tmp675 = $tmp673.value;
int64_t $tmp676 = $tmp674 + $tmp675;
frost$core$Int64 $tmp677 = (frost$core$Int64) {$tmp676};
*(&local1) = $tmp677;
goto block33;
block33:;
// line 309
frost$core$Int64 $tmp678 = *(&local1);
org$frostlang$frostc$ClassDecl* $tmp679 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp678;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 313
frost$core$Int64 $tmp680 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp681 = (frost$core$Int64) {8};
frost$core$Int64 $tmp682 = frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64($tmp680, $tmp681);
return $tmp682;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 317
frost$core$Int64 $tmp683 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp683;
// line 318
frost$core$Int64 $tmp684 = org$frostlang$frostc$CCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
*(&local1) = $tmp684;
// line 319
frost$core$Int64 $tmp685 = *(&local0);
frost$core$Int64 $tmp686 = *(&local1);
frost$core$Int64 $tmp687 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp685, $tmp686);
frost$core$Int64 $tmp688 = (frost$core$Int64) {0};
frost$core$Bit $tmp689 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp687, $tmp688);
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block1; else goto block2;
block1:;
// line 320
frost$core$Int64 $tmp691 = *(&local0);
return $tmp691;
block2:;
// line 322
frost$core$Int64 $tmp692 = *(&local0);
frost$core$Int64 $tmp693 = *(&local1);
int64_t $tmp694 = $tmp692.value;
int64_t $tmp695 = $tmp693.value;
int64_t $tmp696 = $tmp694 + $tmp695;
frost$core$Int64 $tmp697 = (frost$core$Int64) {$tmp696};
frost$core$Int64 $tmp698 = *(&local0);
frost$core$Int64 $tmp699 = *(&local1);
frost$core$Int64 $tmp700 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp698, $tmp699);
int64_t $tmp701 = $tmp697.value;
int64_t $tmp702 = $tmp700.value;
int64_t $tmp703 = $tmp701 - $tmp702;
frost$core$Int64 $tmp704 = (frost$core$Int64) {$tmp703};
return $tmp704;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
frost$core$Bit local1;
frost$core$Int64 local2;
org$frostlang$frostc$FieldDecl* local3 = NULL;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 326
frost$core$Weak** $tmp705 = &param0->compiler;
frost$core$Weak* $tmp706 = *$tmp705;
frost$core$Object* $tmp707 = frost$core$Weak$get$R$frost$core$Weak$T($tmp706);
org$frostlang$frostc$ClassDecl* $tmp708 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp707), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
org$frostlang$frostc$ClassDecl* $tmp709 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
*(&local0) = $tmp708;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
frost$core$Frost$unref$frost$core$Object$Q($tmp707);
// line 327
org$frostlang$frostc$ClassDecl* $tmp710 = *(&local0);
frost$core$Bit $tmp711 = frost$core$Bit$init$builtin_bit($tmp710 != NULL);
bool $tmp712 = $tmp711.value;
if ($tmp712) goto block1; else goto block2;
block1:;
frost$core$Weak** $tmp713 = &param0->compiler;
frost$core$Weak* $tmp714 = *$tmp713;
frost$core$Object* $tmp715 = frost$core$Weak$get$R$frost$core$Weak$T($tmp714);
org$frostlang$frostc$ClassDecl* $tmp716 = *(&local0);
frost$core$Bit $tmp717 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp715), $tmp716);
frost$core$Frost$unref$frost$core$Object$Q($tmp715);
*(&local1) = $tmp717;
goto block3;
block2:;
*(&local1) = $tmp711;
goto block3;
block3:;
frost$core$Bit $tmp718 = *(&local1);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp720 = (frost$core$Int64) {327};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s721, $tmp720);
abort(); // unreachable
block4:;
// line 328
org$frostlang$frostc$Type* $tmp722 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Int64 $tmp723 = org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp722);
*(&local2) = $tmp723;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
// line 329
frost$core$Weak** $tmp724 = &param0->compiler;
frost$core$Weak* $tmp725 = *$tmp724;
frost$core$Object* $tmp726 = frost$core$Weak$get$R$frost$core$Weak$T($tmp725);
org$frostlang$frostc$ClassDecl* $tmp727 = *(&local0);
frost$collections$ListView* $tmp728 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp726), $tmp727);
ITable* $tmp729 = ((frost$collections$Iterable*) $tmp728)->$class->itable;
while ($tmp729->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp729 = $tmp729->next;
}
$fn731 $tmp730 = $tmp729->methods[0];
frost$collections$Iterator* $tmp732 = $tmp730(((frost$collections$Iterable*) $tmp728));
goto block6;
block6:;
ITable* $tmp733 = $tmp732->$class->itable;
while ($tmp733->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp733 = $tmp733->next;
}
$fn735 $tmp734 = $tmp733->methods[0];
frost$core$Bit $tmp736 = $tmp734($tmp732);
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block8; else goto block7;
block7:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp738 = $tmp732->$class->itable;
while ($tmp738->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp738 = $tmp738->next;
}
$fn740 $tmp739 = $tmp738->methods[1];
frost$core$Object* $tmp741 = $tmp739($tmp732);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp741)));
org$frostlang$frostc$FieldDecl* $tmp742 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) $tmp741);
// line 330
frost$core$Weak** $tmp743 = &param0->compiler;
frost$core$Weak* $tmp744 = *$tmp743;
frost$core$Object* $tmp745 = frost$core$Weak$get$R$frost$core$Weak$T($tmp744);
org$frostlang$frostc$FieldDecl* $tmp746 = *(&local3);
frost$core$Bit $tmp747 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp745), $tmp746);
frost$core$Frost$unref$frost$core$Object$Q($tmp745);
// line 331
org$frostlang$frostc$FieldDecl* $tmp748 = *(&local3);
org$frostlang$frostc$Type** $tmp749 = &$tmp748->type;
org$frostlang$frostc$Type* $tmp750 = *$tmp749;
org$frostlang$frostc$Type* $tmp751 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp752 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp750, $tmp751);
bool $tmp753 = $tmp752.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
if ($tmp753) goto block9; else goto block11;
block9:;
// line 333
frost$core$Int64 $tmp754 = *(&local2);
frost$core$Weak** $tmp755 = &param0->hCodeGen;
frost$core$Weak* $tmp756 = *$tmp755;
frost$core$Object* $tmp757 = frost$core$Weak$get$R$frost$core$Weak$T($tmp756);
org$frostlang$frostc$LLVMCodeGenerator** $tmp758 = &((org$frostlang$frostc$HCodeGenerator*) $tmp757)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp759 = *$tmp758;
org$frostlang$frostc$ClassDecl* $tmp760 = *(&local0);
frost$core$Int64 $tmp761 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp759, $tmp760);
int64_t $tmp762 = $tmp754.value;
int64_t $tmp763 = $tmp761.value;
int64_t $tmp764 = $tmp762 + $tmp763;
frost$core$Int64 $tmp765 = (frost$core$Int64) {$tmp764};
*(&local2) = $tmp765;
frost$core$Frost$unref$frost$core$Object$Q($tmp757);
goto block10;
block11:;
// line 1
// line 336
org$frostlang$frostc$FieldDecl* $tmp766 = *(&local3);
org$frostlang$frostc$Type** $tmp767 = &$tmp766->type;
org$frostlang$frostc$Type* $tmp768 = *$tmp767;
frost$core$Int64 $tmp769 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp768);
*(&local4) = $tmp769;
// line 337
frost$core$Int64 $tmp770 = *(&local2);
frost$core$Int64 $tmp771 = *(&local4);
frost$core$Int64 $tmp772 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp770, $tmp771);
*(&local5) = $tmp772;
// line 338
frost$core$Int64 $tmp773 = *(&local5);
frost$core$Int64 $tmp774 = (frost$core$Int64) {0};
int64_t $tmp775 = $tmp773.value;
int64_t $tmp776 = $tmp774.value;
bool $tmp777 = $tmp775 != $tmp776;
frost$core$Bit $tmp778 = (frost$core$Bit) {$tmp777};
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block12; else goto block13;
block12:;
// line 339
frost$core$Int64 $tmp780 = *(&local2);
frost$core$Int64 $tmp781 = *(&local4);
frost$core$Int64 $tmp782 = *(&local5);
int64_t $tmp783 = $tmp781.value;
int64_t $tmp784 = $tmp782.value;
int64_t $tmp785 = $tmp783 - $tmp784;
frost$core$Int64 $tmp786 = (frost$core$Int64) {$tmp785};
int64_t $tmp787 = $tmp780.value;
int64_t $tmp788 = $tmp786.value;
int64_t $tmp789 = $tmp787 + $tmp788;
frost$core$Int64 $tmp790 = (frost$core$Int64) {$tmp789};
*(&local2) = $tmp790;
goto block13;
block13:;
// line 341
frost$core$Int64 $tmp791 = *(&local2);
frost$core$Int64 $tmp792 = *(&local4);
frost$core$Int64 $tmp793 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp791, $tmp792);
frost$core$Int64 $tmp794 = (frost$core$Int64) {0};
frost$core$Bit $tmp795 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp793, $tmp794);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp797 = (frost$core$Int64) {341};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s798, $tmp797);
abort(); // unreachable
block14:;
// line 342
frost$core$Int64 $tmp799 = *(&local2);
frost$core$Int64 $tmp800 = *(&local4);
int64_t $tmp801 = $tmp799.value;
int64_t $tmp802 = $tmp800.value;
int64_t $tmp803 = $tmp801 + $tmp802;
frost$core$Int64 $tmp804 = (frost$core$Int64) {$tmp803};
*(&local2) = $tmp804;
goto block10;
block10:;
frost$core$Frost$unref$frost$core$Object$Q($tmp741);
org$frostlang$frostc$FieldDecl* $tmp805 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
frost$core$Frost$unref$frost$core$Object$Q($tmp726);
// line 345
org$frostlang$frostc$Type$Kind* $tmp806 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp807 = *$tmp806;
org$frostlang$frostc$Type$Kind$wrapper* $tmp808;
$tmp808 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp808->value = $tmp807;
frost$core$Int64 $tmp809 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp810 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp809);
org$frostlang$frostc$Type$Kind$wrapper* $tmp811;
$tmp811 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp811->value = $tmp810;
ITable* $tmp812 = ((frost$core$Equatable*) $tmp808)->$class->itable;
while ($tmp812->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp812 = $tmp812->next;
}
$fn814 $tmp813 = $tmp812->methods[0];
frost$core$Bit $tmp815 = $tmp813(((frost$core$Equatable*) $tmp808), ((frost$core$Equatable*) $tmp811));
bool $tmp816 = $tmp815.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp811)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp808)));
if ($tmp816) goto block16; else goto block17;
block16:;
// line 346
frost$core$Int64 $tmp817 = *(&local2);
frost$core$Int64 $tmp818 = (frost$core$Int64) {1};
int64_t $tmp819 = $tmp817.value;
int64_t $tmp820 = $tmp818.value;
int64_t $tmp821 = $tmp819 + $tmp820;
frost$core$Int64 $tmp822 = (frost$core$Int64) {$tmp821};
*(&local2) = $tmp822;
goto block17;
block17:;
// line 348
frost$core$Int64 $tmp823 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp824 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp823;

}
void org$frostlang$frostc$CCodeGenerator$writeType$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 352
frost$collections$HashSet** $tmp825 = &param0->writtenTypes;
frost$collections$HashSet* $tmp826 = *$tmp825;
frost$core$String** $tmp827 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp828 = *$tmp827;
frost$core$Bit $tmp829 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp826, ((frost$collections$Key*) $tmp828));
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block1; else goto block2;
block1:;
// line 353
return;
block2:;
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$typeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 358
frost$core$String** $tmp831 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp832 = *$tmp831;
frost$core$String* $tmp833 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp832);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
return $tmp833;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 362
frost$core$Weak** $tmp834 = &param0->compiler;
frost$core$Weak* $tmp835 = *$tmp834;
frost$core$Object* $tmp836 = frost$core$Weak$get$R$frost$core$Weak$T($tmp835);
org$frostlang$frostc$ClassDecl* $tmp837 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp836), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
org$frostlang$frostc$ClassDecl* $tmp838 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
*(&local0) = $tmp837;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$core$Frost$unref$frost$core$Object$Q($tmp836);
// line 363
org$frostlang$frostc$ClassDecl* $tmp839 = *(&local0);
frost$core$Bit $tmp840 = frost$core$Bit$init$builtin_bit($tmp839 != NULL);
bool $tmp841 = $tmp840.value;
if ($tmp841) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp842 = (frost$core$Int64) {363};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s843, $tmp842);
abort(); // unreachable
block1:;
// line 364
org$frostlang$frostc$ClassDecl* $tmp844 = *(&local0);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, $tmp844);
// line 365
org$frostlang$frostc$Type$Kind* $tmp845 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp846 = *$tmp845;
org$frostlang$frostc$Type$Kind$wrapper* $tmp847;
$tmp847 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp847->value = $tmp846;
frost$core$Int64 $tmp848 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp849 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp848);
org$frostlang$frostc$Type$Kind$wrapper* $tmp850;
$tmp850 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp850->value = $tmp849;
ITable* $tmp851 = ((frost$core$Equatable*) $tmp847)->$class->itable;
while ($tmp851->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp851 = $tmp851->next;
}
$fn853 $tmp852 = $tmp851->methods[0];
frost$core$Bit $tmp854 = $tmp852(((frost$core$Equatable*) $tmp847), ((frost$core$Equatable*) $tmp850));
bool $tmp855 = $tmp854.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp850)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp847)));
if ($tmp855) goto block3; else goto block4;
block3:;
// line 366
org$frostlang$frostc$FixedArray** $tmp856 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp857 = *$tmp856;
frost$core$Int64 $tmp858 = (frost$core$Int64) {0};
frost$core$Object* $tmp859 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp857, $tmp858);
frost$core$String* $tmp860 = org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp859));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
frost$core$Frost$unref$frost$core$Object$Q($tmp859);
org$frostlang$frostc$ClassDecl* $tmp861 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp860;
block4:;
// line 368
frost$core$String** $tmp862 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp863 = *$tmp862;
frost$core$String* $tmp864 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp863);
frost$core$String* $tmp865 = frost$core$String$get_asString$R$frost$core$String($tmp864);
frost$core$String* $tmp866 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp865, &$s867);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
org$frostlang$frostc$ClassDecl* $tmp868 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp866;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 372
frost$core$String* $tmp869 = org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp870 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp869, &$s871);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
return $tmp870;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
// line 376
frost$core$Weak** $tmp872 = &param0->compiler;
frost$core$Weak* $tmp873 = *$tmp872;
frost$core$Object* $tmp874 = frost$core$Weak$get$R$frost$core$Weak$T($tmp873);
org$frostlang$frostc$Type* $tmp875 = org$frostlang$frostc$Compiler$inheritedType$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp874), param1);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
org$frostlang$frostc$Type* $tmp876 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local0) = $tmp875;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
frost$core$Frost$unref$frost$core$Object$Q($tmp874);
// line 377
frost$core$MutableString* $tmp877 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp877);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
frost$core$MutableString* $tmp878 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local1) = $tmp877;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
// line 378
frost$core$MutableString* $tmp879 = *(&local1);
org$frostlang$frostc$Type* $tmp880 = *(&local0);
org$frostlang$frostc$Type* $tmp881 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp880);
frost$core$String* $tmp882 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp881);
frost$core$MutableString$append$frost$core$String($tmp879, $tmp882);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
// line 379
frost$core$MutableString* $tmp883 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp883, &$s884);
// line 380
frost$core$Bit $tmp885 = org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(param1);
bool $tmp886 = $tmp885.value;
if ($tmp886) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp887 = (frost$core$Int64) {380};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s888, $tmp887);
abort(); // unreachable
block1:;
// line 381
frost$core$MutableString* $tmp889 = *(&local1);
frost$core$Weak** $tmp890 = &param1->owner;
frost$core$Weak* $tmp891 = *$tmp890;
frost$core$Object* $tmp892 = frost$core$Weak$get$R$frost$core$Weak$T($tmp891);
frost$core$String** $tmp893 = &((org$frostlang$frostc$ClassDecl*) $tmp892)->name;
frost$core$String* $tmp894 = *$tmp893;
frost$core$String* $tmp895 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp894);
frost$core$String* $tmp896 = frost$core$String$get_asString$R$frost$core$String($tmp895);
frost$core$String* $tmp897 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp896, &$s898);
frost$core$MutableString$append$frost$core$String($tmp889, $tmp897);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
frost$core$Frost$unref$frost$core$Object$Q($tmp892);
// line 382
frost$core$Weak** $tmp899 = &param0->compiler;
frost$core$Weak* $tmp900 = *$tmp899;
frost$core$Object* $tmp901 = frost$core$Weak$get$R$frost$core$Weak$T($tmp900);
frost$core$Weak** $tmp902 = &param1->owner;
frost$core$Weak* $tmp903 = *$tmp902;
frost$core$Object* $tmp904 = frost$core$Weak$get$R$frost$core$Weak$T($tmp903);
frost$core$Bit $tmp905 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp901), ((org$frostlang$frostc$ClassDecl*) $tmp904));
bool $tmp906 = $tmp905.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp904);
frost$core$Frost$unref$frost$core$Object$Q($tmp901);
if ($tmp906) goto block3; else goto block4;
block3:;
// line 383
frost$core$MutableString* $tmp907 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp907, &$s908);
goto block4;
block4:;
// line 385
frost$core$MutableString* $tmp909 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp909, &$s910);
// line 386
frost$core$Int64 $tmp911 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp912 = *(&local0);
org$frostlang$frostc$FixedArray** $tmp913 = &$tmp912->subtypes;
org$frostlang$frostc$FixedArray* $tmp914 = *$tmp913;
ITable* $tmp915 = ((frost$collections$CollectionView*) $tmp914)->$class->itable;
while ($tmp915->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp915 = $tmp915->next;
}
$fn917 $tmp916 = $tmp915->methods[0];
frost$core$Int64 $tmp918 = $tmp916(((frost$collections$CollectionView*) $tmp914));
frost$core$Int64 $tmp919 = (frost$core$Int64) {1};
int64_t $tmp920 = $tmp918.value;
int64_t $tmp921 = $tmp919.value;
int64_t $tmp922 = $tmp920 - $tmp921;
frost$core$Int64 $tmp923 = (frost$core$Int64) {$tmp922};
frost$core$Bit $tmp924 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp925 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp911, $tmp923, $tmp924);
frost$core$Int64 $tmp926 = $tmp925.min;
*(&local2) = $tmp926;
frost$core$Int64 $tmp927 = $tmp925.max;
frost$core$Bit $tmp928 = $tmp925.inclusive;
bool $tmp929 = $tmp928.value;
frost$core$Int64 $tmp930 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp931 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp930);
if ($tmp929) goto block8; else goto block9;
block8:;
int64_t $tmp932 = $tmp926.value;
int64_t $tmp933 = $tmp927.value;
bool $tmp934 = $tmp932 <= $tmp933;
frost$core$Bit $tmp935 = (frost$core$Bit) {$tmp934};
bool $tmp936 = $tmp935.value;
if ($tmp936) goto block5; else goto block6;
block9:;
int64_t $tmp937 = $tmp926.value;
int64_t $tmp938 = $tmp927.value;
bool $tmp939 = $tmp937 < $tmp938;
frost$core$Bit $tmp940 = (frost$core$Bit) {$tmp939};
bool $tmp941 = $tmp940.value;
if ($tmp941) goto block5; else goto block6;
block5:;
// line 387
frost$core$MutableString* $tmp942 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp942, &$s943);
// line 388
frost$core$MutableString* $tmp944 = *(&local1);
org$frostlang$frostc$Type* $tmp945 = *(&local0);
org$frostlang$frostc$FixedArray** $tmp946 = &$tmp945->subtypes;
org$frostlang$frostc$FixedArray* $tmp947 = *$tmp946;
frost$core$Int64 $tmp948 = *(&local2);
frost$core$Object* $tmp949 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp947, $tmp948);
frost$core$String* $tmp950 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp949));
frost$core$MutableString$append$frost$core$String($tmp944, $tmp950);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
frost$core$Frost$unref$frost$core$Object$Q($tmp949);
goto block7;
block7:;
frost$core$Int64 $tmp951 = *(&local2);
int64_t $tmp952 = $tmp927.value;
int64_t $tmp953 = $tmp951.value;
int64_t $tmp954 = $tmp952 - $tmp953;
frost$core$Int64 $tmp955 = (frost$core$Int64) {$tmp954};
frost$core$UInt64 $tmp956 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp955);
if ($tmp929) goto block11; else goto block12;
block11:;
uint64_t $tmp957 = $tmp956.value;
uint64_t $tmp958 = $tmp931.value;
bool $tmp959 = $tmp957 >= $tmp958;
frost$core$Bit $tmp960 = (frost$core$Bit) {$tmp959};
bool $tmp961 = $tmp960.value;
if ($tmp961) goto block10; else goto block6;
block12:;
uint64_t $tmp962 = $tmp956.value;
uint64_t $tmp963 = $tmp931.value;
bool $tmp964 = $tmp962 > $tmp963;
frost$core$Bit $tmp965 = (frost$core$Bit) {$tmp964};
bool $tmp966 = $tmp965.value;
if ($tmp966) goto block10; else goto block6;
block10:;
int64_t $tmp967 = $tmp951.value;
int64_t $tmp968 = $tmp930.value;
int64_t $tmp969 = $tmp967 + $tmp968;
frost$core$Int64 $tmp970 = (frost$core$Int64) {$tmp969};
*(&local2) = $tmp970;
goto block5;
block6:;
// line 390
frost$core$MutableString* $tmp971 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp971, &$s972);
// line 391
frost$core$MutableString* $tmp973 = *(&local1);
frost$core$String* $tmp974 = frost$core$MutableString$finish$R$frost$core$String($tmp973);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
frost$core$MutableString* $tmp975 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
*(&local1) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$Type* $tmp976 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp974;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 395
org$frostlang$frostc$Type$Kind* $tmp977 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp978 = *$tmp977;
org$frostlang$frostc$Type$Kind$wrapper* $tmp979;
$tmp979 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp979->value = $tmp978;
frost$core$Int64 $tmp980 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp981 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp980);
org$frostlang$frostc$Type$Kind$wrapper* $tmp982;
$tmp982 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp982->value = $tmp981;
ITable* $tmp983 = ((frost$core$Equatable*) $tmp979)->$class->itable;
while ($tmp983->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp983 = $tmp983->next;
}
$fn985 $tmp984 = $tmp983->methods[0];
frost$core$Bit $tmp986 = $tmp984(((frost$core$Equatable*) $tmp979), ((frost$core$Equatable*) $tmp982));
bool $tmp987 = $tmp986.value;
if ($tmp987) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp988 = (frost$core$Int64) {395};
frost$core$String* $tmp989 = org$frostlang$frostc$Type$get_asString$R$frost$core$String(param1);
frost$core$String* $tmp990 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp989, &$s991);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s992, $tmp988, $tmp990);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp982)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp979)));
// line 396
org$frostlang$frostc$FixedArray** $tmp993 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp994 = *$tmp993;
frost$core$Int64 $tmp995 = (frost$core$Int64) {0};
frost$core$Object* $tmp996 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp994, $tmp995);
frost$core$String* $tmp997 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp996));
frost$core$String* $tmp998 = frost$core$String$get_asString$R$frost$core$String($tmp997);
frost$core$String* $tmp999 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp998, &$s1000);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
frost$core$Frost$unref$frost$core$Object$Q($tmp996);
return $tmp999;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$collections$HashSet* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$ClassDecl* local3 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local4 = NULL;
frost$collections$ListView* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$MutableString* local7 = NULL;
frost$core$String* local8 = NULL;
org$frostlang$frostc$MethodDecl* local9 = NULL;
frost$core$Error* local10 = NULL;
// line 400
frost$core$Weak** $tmp1001 = &param0->compiler;
frost$core$Weak* $tmp1002 = *$tmp1001;
frost$core$Object* $tmp1003 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1002);
org$frostlang$frostc$Type** $tmp1004 = &param1->type;
org$frostlang$frostc$Type* $tmp1005 = *$tmp1004;
frost$collections$HashSet* $tmp1006 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(((org$frostlang$frostc$Compiler*) $tmp1003), $tmp1005);
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
frost$collections$HashSet* $tmp1007 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
*(&local0) = $tmp1006;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
frost$core$Frost$unref$frost$core$Object$Q($tmp1003);
// line 401
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1008));
frost$core$String* $tmp1009 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
*(&local1) = &$s1010;
// line 402
frost$collections$HashSet* $tmp1011 = *(&local0);
ITable* $tmp1012 = ((frost$collections$Iterable*) $tmp1011)->$class->itable;
while ($tmp1012->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1012 = $tmp1012->next;
}
$fn1014 $tmp1013 = $tmp1012->methods[0];
frost$collections$Iterator* $tmp1015 = $tmp1013(((frost$collections$Iterable*) $tmp1011));
goto block1;
block1:;
ITable* $tmp1016 = $tmp1015->$class->itable;
while ($tmp1016->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1016 = $tmp1016->next;
}
$fn1018 $tmp1017 = $tmp1016->methods[0];
frost$core$Bit $tmp1019 = $tmp1017($tmp1015);
bool $tmp1020 = $tmp1019.value;
if ($tmp1020) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1021 = $tmp1015->$class->itable;
while ($tmp1021->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1021 = $tmp1021->next;
}
$fn1023 $tmp1022 = $tmp1021->methods[1];
frost$core$Object* $tmp1024 = $tmp1022($tmp1015);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1024)));
org$frostlang$frostc$Type* $tmp1025 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1024);
// line 403
frost$core$Weak** $tmp1026 = &param0->compiler;
frost$core$Weak* $tmp1027 = *$tmp1026;
frost$core$Object* $tmp1028 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1027);
org$frostlang$frostc$Type* $tmp1029 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp1030 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1028), $tmp1029);
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
org$frostlang$frostc$ClassDecl* $tmp1031 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
*(&local3) = $tmp1030;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
frost$core$Frost$unref$frost$core$Object$Q($tmp1028);
// line 404
org$frostlang$frostc$ClassDecl* $tmp1032 = *(&local3);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1033 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp1032);
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1034 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
*(&local4) = $tmp1033;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
// line 405
frost$core$Weak** $tmp1035 = &param0->compiler;
frost$core$Weak* $tmp1036 = *$tmp1035;
frost$core$Object* $tmp1037 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1036);
org$frostlang$frostc$Type* $tmp1038 = *(&local2);
frost$collections$ListView* $tmp1039 = org$frostlang$frostc$Compiler$interfaceMethods$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1037), param1, $tmp1038);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
frost$collections$ListView* $tmp1040 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
*(&local5) = $tmp1039;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
frost$core$Frost$unref$frost$core$Object$Q($tmp1037);
// line 406
frost$core$String** $tmp1041 = &param1->name;
frost$core$String* $tmp1042 = *$tmp1041;
frost$core$String* $tmp1043 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1042);
frost$core$String* $tmp1044 = frost$core$String$get_asString$R$frost$core$String($tmp1043);
frost$core$String* $tmp1045 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1044, &$s1046);
org$frostlang$frostc$ClassDecl* $tmp1047 = *(&local3);
frost$core$String** $tmp1048 = &$tmp1047->name;
frost$core$String* $tmp1049 = *$tmp1048;
frost$core$String* $tmp1050 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1049);
frost$core$String* $tmp1051 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1045, $tmp1050);
frost$core$String* $tmp1052 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1051, &$s1053);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
frost$core$String* $tmp1054 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
*(&local6) = $tmp1052;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
// line 407
frost$core$MutableString* $tmp1055 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp1056 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1057 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1056);
frost$core$String* $tmp1058 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1059, $tmp1057);
frost$core$String* $tmp1060 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1058, &$s1061);
frost$collections$ListView* $tmp1062 = *(&local5);
ITable* $tmp1063 = ((frost$collections$CollectionView*) $tmp1062)->$class->itable;
while ($tmp1063->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1063 = $tmp1063->next;
}
$fn1065 $tmp1064 = $tmp1063->methods[0];
frost$core$Int64 $tmp1066 = $tmp1064(((frost$collections$CollectionView*) $tmp1062));
frost$core$Int64$wrapper* $tmp1067;
$tmp1067 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1067->value = $tmp1066;
frost$core$String* $tmp1068 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1069, ((frost$core$Object*) $tmp1067));
frost$core$String* $tmp1070 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1068, &$s1071);
frost$core$String* $tmp1072 = *(&local6);
frost$core$String* $tmp1073 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1070, $tmp1072);
frost$core$String* $tmp1074 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1073, &$s1075);
frost$core$String* $tmp1076 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1060, $tmp1074);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1077 = *(&local4);
frost$core$String** $tmp1078 = &$tmp1077->name;
frost$core$String* $tmp1079 = *$tmp1078;
frost$core$String* $tmp1080 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1081, $tmp1079);
frost$core$String* $tmp1082 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1080, &$s1083);
frost$core$String* $tmp1084 = *(&local1);
frost$core$String* $tmp1085 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1082, $tmp1084);
frost$core$String* $tmp1086 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1085, &$s1087);
frost$core$String* $tmp1088 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1076, $tmp1086);
frost$core$MutableString$init$frost$core$String($tmp1055, $tmp1088);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
frost$core$MutableString* $tmp1089 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
*(&local7) = $tmp1055;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
// line 410
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1090));
frost$core$String* $tmp1091 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
*(&local8) = &$s1092;
// line 411
frost$collections$ListView* $tmp1093 = *(&local5);
ITable* $tmp1094 = ((frost$collections$Iterable*) $tmp1093)->$class->itable;
while ($tmp1094->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1094 = $tmp1094->next;
}
$fn1096 $tmp1095 = $tmp1094->methods[0];
frost$collections$Iterator* $tmp1097 = $tmp1095(((frost$collections$Iterable*) $tmp1093));
goto block4;
block4:;
ITable* $tmp1098 = $tmp1097->$class->itable;
while ($tmp1098->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1098 = $tmp1098->next;
}
$fn1100 $tmp1099 = $tmp1098->methods[0];
frost$core$Bit $tmp1101 = $tmp1099($tmp1097);
bool $tmp1102 = $tmp1101.value;
if ($tmp1102) goto block6; else goto block5;
block5:;
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1103 = $tmp1097->$class->itable;
while ($tmp1103->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1103 = $tmp1103->next;
}
$fn1105 $tmp1104 = $tmp1103->methods[1];
frost$core$Object* $tmp1106 = $tmp1104($tmp1097);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1106)));
org$frostlang$frostc$MethodDecl* $tmp1107 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) $tmp1106);
// line 412
frost$core$MutableString* $tmp1108 = *(&local7);
frost$core$String* $tmp1109 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1108, $tmp1109);
// line 413
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1110));
frost$core$String* $tmp1111 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
*(&local8) = &$s1112;
// line 414
org$frostlang$frostc$MethodDecl* $tmp1113 = *(&local9);
org$frostlang$frostc$Annotations** $tmp1114 = &$tmp1113->annotations;
org$frostlang$frostc$Annotations* $tmp1115 = *$tmp1114;
frost$core$Bit $tmp1116 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp1115);
bool $tmp1117 = $tmp1116.value;
if ($tmp1117) goto block7; else goto block9;
block7:;
// line 415
frost$core$MutableString* $tmp1118 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1118, &$s1119);
goto block8;
block9:;
// line 1
// line 418
frost$core$MutableString* $tmp1120 = *(&local7);
org$frostlang$frostc$MethodDecl* $tmp1121 = *(&local9);
frost$core$String* $tmp1122 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp1121);
frost$core$MutableString$append$frost$core$String($tmp1120, $tmp1122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
goto block8;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1106);
org$frostlang$frostc$MethodDecl* $tmp1123 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
// line 421
frost$core$MutableString* $tmp1124 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1124, &$s1125);
// line 422
*(&local10) = ((frost$core$Error*) NULL);
// line 423
frost$io$MemoryOutputStream** $tmp1126 = &param0->types;
frost$io$MemoryOutputStream* $tmp1127 = *$tmp1126;
frost$core$MutableString* $tmp1128 = *(&local7);
frost$core$String* $tmp1129 = frost$core$MutableString$finish$R$frost$core$String($tmp1128);
$fn1131 $tmp1130 = ($fn1131) ((frost$io$OutputStream*) $tmp1127)->$class->vtable[19];
frost$core$Error* $tmp1132 = $tmp1130(((frost$io$OutputStream*) $tmp1127), $tmp1129);
if ($tmp1132 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
*(&local10) = $tmp1132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
goto block10;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
goto block11;
block10:;
// line 426
frost$core$Int64 $tmp1133 = (frost$core$Int64) {426};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1134, $tmp1133);
abort(); // unreachable
block11:;
frost$core$Error* $tmp1135 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
*(&local10) = ((frost$core$Error*) NULL);
// line 428
frost$core$String* $tmp1136 = *(&local6);
frost$core$String* $tmp1137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1138, $tmp1136);
frost$core$String* $tmp1139 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1137, &$s1140);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$String* $tmp1141 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
*(&local1) = $tmp1139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$core$String* $tmp1142 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1143 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1144 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1145 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1146 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1147 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1024);
org$frostlang$frostc$Type* $tmp1148 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
// line 430
frost$core$String* $tmp1149 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$String* $tmp1150 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
*(&local1) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1151 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
*(&local0) = ((frost$collections$HashSet*) NULL);
return $tmp1149;

}
org$frostlang$frostc$CCodeGenerator$MethodShim* org$frostlang$frostc$CCodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$MethodShim(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$CCodeGenerator$MethodShim* local0 = NULL;
frost$core$Error* local1 = NULL;
org$frostlang$frostc$CCodeGenerator$MethodShim* local2 = NULL;
frost$io$IndentedOutputStream* local3 = NULL;
frost$io$MemoryOutputStream* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$MutableString* local7 = NULL;
frost$core$String* local8 = NULL;
frost$core$Int64 local9;
frost$core$String* local10 = NULL;
frost$io$MemoryOutputStream* local11 = NULL;
frost$collections$Array* local12 = NULL;
frost$core$Int64 local13;
frost$core$String* local14 = NULL;
org$frostlang$frostc$Type* local15 = NULL;
frost$core$String* local16 = NULL;
frost$core$Int64 local17;
org$frostlang$frostc$CCodeGenerator$MethodShim* local18 = NULL;
frost$io$IndentedOutputStream** $tmp1152 = &param0->out;
frost$io$IndentedOutputStream* $tmp1153 = *$tmp1152;
// line 435
*(&local1) = ((frost$core$Error*) NULL);
// line 436
frost$collections$IdentityMap** $tmp1154 = &param0->methodShims;
frost$collections$IdentityMap* $tmp1155 = *$tmp1154;
frost$core$Object* $tmp1156 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp1155, ((frost$core$Object*) param1));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$MethodShim*) $tmp1156)));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1157 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) $tmp1156);
frost$core$Frost$unref$frost$core$Object$Q($tmp1156);
// line 437
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1158 = *(&local2);
frost$core$Bit $tmp1159 = frost$core$Bit$init$builtin_bit($tmp1158 != NULL);
bool $tmp1160 = $tmp1159.value;
if ($tmp1160) goto block6; else goto block7;
block6:;
// line 438
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1161 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1162 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Error* $tmp1163 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
*(&local1) = ((frost$core$Error*) NULL);
*(&local0) = $tmp1161;
goto block1;
block7:;
// line 440
frost$io$IndentedOutputStream** $tmp1164 = &param0->out;
frost$io$IndentedOutputStream* $tmp1165 = *$tmp1164;
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$io$IndentedOutputStream* $tmp1166 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
*(&local3) = $tmp1165;
// line 441
frost$io$MemoryOutputStream* $tmp1167 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp1167);
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$io$MemoryOutputStream* $tmp1168 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local4) = $tmp1167;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
// line 442
frost$io$IndentedOutputStream* $tmp1169 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp1170 = *(&local4);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp1169, ((frost$io$OutputStream*) $tmp1170));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
frost$io$IndentedOutputStream** $tmp1171 = &param0->out;
frost$io$IndentedOutputStream* $tmp1172 = *$tmp1171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$io$IndentedOutputStream** $tmp1173 = &param0->out;
*$tmp1173 = $tmp1169;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
// line 443
frost$core$Bit $tmp1174 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(param2);
bool $tmp1175 = $tmp1174.value;
if ($tmp1175) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp1176 = (frost$core$Int64) {443};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1177, $tmp1176);
abort(); // unreachable
block8:;
// line 444
org$frostlang$frostc$FixedArray** $tmp1178 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1179 = *$tmp1178;
ITable* $tmp1180 = ((frost$collections$CollectionView*) $tmp1179)->$class->itable;
while ($tmp1180->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1180 = $tmp1180->next;
}
$fn1182 $tmp1181 = $tmp1180->methods[0];
frost$core$Int64 $tmp1183 = $tmp1181(((frost$collections$CollectionView*) $tmp1179));
frost$collections$Array** $tmp1184 = &param1->parameters;
frost$collections$Array* $tmp1185 = *$tmp1184;
ITable* $tmp1186 = ((frost$collections$CollectionView*) $tmp1185)->$class->itable;
while ($tmp1186->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1186 = $tmp1186->next;
}
$fn1188 $tmp1187 = $tmp1186->methods[0];
frost$core$Int64 $tmp1189 = $tmp1187(((frost$collections$CollectionView*) $tmp1185));
frost$core$Int64 $tmp1190 = (frost$core$Int64) {2};
int64_t $tmp1191 = $tmp1189.value;
int64_t $tmp1192 = $tmp1190.value;
int64_t $tmp1193 = $tmp1191 + $tmp1192;
frost$core$Int64 $tmp1194 = (frost$core$Int64) {$tmp1193};
frost$core$Bit $tmp1195 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1183, $tmp1194);
bool $tmp1196 = $tmp1195.value;
if ($tmp1196) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1197 = (frost$core$Int64) {444};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1198, $tmp1197);
abort(); // unreachable
block10:;
// line 445
frost$core$Bit $tmp1199 = org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(param1);
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1201 = (frost$core$Int64) {445};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1202, $tmp1201);
abort(); // unreachable
block12:;
// line 446
org$frostlang$frostc$Type* $tmp1203 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(param2);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
org$frostlang$frostc$Type* $tmp1204 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
*(&local5) = $tmp1203;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
// line 447
frost$core$String* $tmp1205 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1205, &$s1207);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$String* $tmp1208 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
*(&local6) = $tmp1206;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
// line 448
frost$core$MutableString* $tmp1209 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp1210 = *(&local5);
frost$core$String* $tmp1211 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1210);
frost$core$MutableString$init$frost$core$String($tmp1209, $tmp1211);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$MutableString* $tmp1212 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local7) = $tmp1209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
// line 449
frost$io$IndentedOutputStream** $tmp1213 = &param0->out;
frost$io$IndentedOutputStream* $tmp1214 = *$tmp1213;
frost$core$MutableString* $tmp1215 = *(&local7);
frost$core$String* $tmp1216 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1217, ((frost$core$Object*) $tmp1215));
frost$core$String* $tmp1218 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1216, &$s1219);
frost$core$String* $tmp1220 = *(&local6);
frost$core$String* $tmp1221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1218, $tmp1220);
frost$core$String* $tmp1222 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1221, &$s1223);
$fn1225 $tmp1224 = ($fn1225) ((frost$io$OutputStream*) $tmp1214)->$class->vtable[17];
frost$core$Error* $tmp1226 = $tmp1224(((frost$io$OutputStream*) $tmp1214), $tmp1222);
if ($tmp1226 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
*(&local1) = $tmp1226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
frost$core$MutableString* $tmp1227 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1228 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1229 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1230 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1231 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1232 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
// line 450
frost$core$MutableString* $tmp1233 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1233, &$s1234);
// line 451
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1235));
frost$core$String* $tmp1236 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local8) = &$s1237;
// line 452
frost$core$Int64 $tmp1238 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1239 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1240 = *$tmp1239;
ITable* $tmp1241 = ((frost$collections$CollectionView*) $tmp1240)->$class->itable;
while ($tmp1241->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1241 = $tmp1241->next;
}
$fn1243 $tmp1242 = $tmp1241->methods[0];
frost$core$Int64 $tmp1244 = $tmp1242(((frost$collections$CollectionView*) $tmp1240));
frost$core$Int64 $tmp1245 = (frost$core$Int64) {1};
int64_t $tmp1246 = $tmp1244.value;
int64_t $tmp1247 = $tmp1245.value;
int64_t $tmp1248 = $tmp1246 - $tmp1247;
frost$core$Int64 $tmp1249 = (frost$core$Int64) {$tmp1248};
frost$core$Bit $tmp1250 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1251 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1238, $tmp1249, $tmp1250);
frost$core$Int64 $tmp1252 = $tmp1251.min;
*(&local9) = $tmp1252;
frost$core$Int64 $tmp1253 = $tmp1251.max;
frost$core$Bit $tmp1254 = $tmp1251.inclusive;
bool $tmp1255 = $tmp1254.value;
frost$core$Int64 $tmp1256 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1257 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1256);
if ($tmp1255) goto block19; else goto block20;
block19:;
int64_t $tmp1258 = $tmp1252.value;
int64_t $tmp1259 = $tmp1253.value;
bool $tmp1260 = $tmp1258 <= $tmp1259;
frost$core$Bit $tmp1261 = (frost$core$Bit) {$tmp1260};
bool $tmp1262 = $tmp1261.value;
if ($tmp1262) goto block16; else goto block17;
block20:;
int64_t $tmp1263 = $tmp1252.value;
int64_t $tmp1264 = $tmp1253.value;
bool $tmp1265 = $tmp1263 < $tmp1264;
frost$core$Bit $tmp1266 = (frost$core$Bit) {$tmp1265};
bool $tmp1267 = $tmp1266.value;
if ($tmp1267) goto block16; else goto block17;
block16:;
// line 453
org$frostlang$frostc$FixedArray** $tmp1268 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1269 = *$tmp1268;
frost$core$Int64 $tmp1270 = *(&local9);
frost$core$Object* $tmp1271 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1269, $tmp1270);
frost$core$String* $tmp1272 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp1271));
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
frost$core$String* $tmp1273 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
*(&local10) = $tmp1272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
frost$core$Frost$unref$frost$core$Object$Q($tmp1271);
// line 454
frost$core$MutableString* $tmp1274 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1274, &$s1275);
// line 455
frost$core$MutableString* $tmp1276 = *(&local7);
frost$core$String* $tmp1277 = *(&local10);
frost$core$MutableString$append$frost$core$String($tmp1276, $tmp1277);
// line 456
frost$io$IndentedOutputStream** $tmp1278 = &param0->out;
frost$io$IndentedOutputStream* $tmp1279 = *$tmp1278;
frost$core$String* $tmp1280 = *(&local8);
frost$core$String* $tmp1281 = frost$core$String$get_asString$R$frost$core$String($tmp1280);
frost$core$String* $tmp1282 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1281, &$s1283);
frost$core$String* $tmp1284 = *(&local10);
frost$core$String* $tmp1285 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1282, $tmp1284);
frost$core$String* $tmp1286 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1285, &$s1287);
frost$core$Int64 $tmp1288 = *(&local9);
frost$core$Int64$wrapper* $tmp1289;
$tmp1289 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1289->value = $tmp1288;
frost$core$String* $tmp1290 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1286, ((frost$core$Object*) $tmp1289));
frost$core$String* $tmp1291 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1290, &$s1292);
$fn1294 $tmp1293 = ($fn1294) ((frost$io$OutputStream*) $tmp1279)->$class->vtable[17];
frost$core$Error* $tmp1295 = $tmp1293(((frost$io$OutputStream*) $tmp1279), $tmp1291);
if ($tmp1295 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
*(&local1) = $tmp1295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$core$String* $tmp1296 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
*(&local10) = ((frost$core$String*) NULL);
frost$core$String* $tmp1297 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1298 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1299 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1300 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1301 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1302 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1303 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
// line 457
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1304));
frost$core$String* $tmp1305 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local8) = &$s1306;
frost$core$String* $tmp1307 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
*(&local10) = ((frost$core$String*) NULL);
goto block18;
block18:;
frost$core$Int64 $tmp1308 = *(&local9);
int64_t $tmp1309 = $tmp1253.value;
int64_t $tmp1310 = $tmp1308.value;
int64_t $tmp1311 = $tmp1309 - $tmp1310;
frost$core$Int64 $tmp1312 = (frost$core$Int64) {$tmp1311};
frost$core$UInt64 $tmp1313 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1312);
if ($tmp1255) goto block24; else goto block25;
block24:;
uint64_t $tmp1314 = $tmp1313.value;
uint64_t $tmp1315 = $tmp1257.value;
bool $tmp1316 = $tmp1314 >= $tmp1315;
frost$core$Bit $tmp1317 = (frost$core$Bit) {$tmp1316};
bool $tmp1318 = $tmp1317.value;
if ($tmp1318) goto block23; else goto block17;
block25:;
uint64_t $tmp1319 = $tmp1313.value;
uint64_t $tmp1320 = $tmp1257.value;
bool $tmp1321 = $tmp1319 > $tmp1320;
frost$core$Bit $tmp1322 = (frost$core$Bit) {$tmp1321};
bool $tmp1323 = $tmp1322.value;
if ($tmp1323) goto block23; else goto block17;
block23:;
int64_t $tmp1324 = $tmp1308.value;
int64_t $tmp1325 = $tmp1256.value;
int64_t $tmp1326 = $tmp1324 + $tmp1325;
frost$core$Int64 $tmp1327 = (frost$core$Int64) {$tmp1326};
*(&local9) = $tmp1327;
goto block16;
block17:;
// line 459
frost$io$IndentedOutputStream** $tmp1328 = &param0->out;
frost$io$IndentedOutputStream* $tmp1329 = *$tmp1328;
$fn1331 $tmp1330 = ($fn1331) ((frost$io$OutputStream*) $tmp1329)->$class->vtable[19];
frost$core$Error* $tmp1332 = $tmp1330(((frost$io$OutputStream*) $tmp1329), &$s1333);
if ($tmp1332 == NULL) goto block26; else goto block27;
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
*(&local1) = $tmp1332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$core$String* $tmp1334 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1335 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1336 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1337 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1338 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1339 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1340 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
// line 460
frost$io$IndentedOutputStream** $tmp1341 = &param0->out;
frost$io$IndentedOutputStream* $tmp1342 = *$tmp1341;
frost$core$Int64* $tmp1343 = &$tmp1342->level;
frost$core$Int64 $tmp1344 = *$tmp1343;
frost$core$Int64 $tmp1345 = (frost$core$Int64) {1};
int64_t $tmp1346 = $tmp1344.value;
int64_t $tmp1347 = $tmp1345.value;
int64_t $tmp1348 = $tmp1346 + $tmp1347;
frost$core$Int64 $tmp1349 = (frost$core$Int64) {$tmp1348};
frost$core$Int64* $tmp1350 = &$tmp1342->level;
*$tmp1350 = $tmp1349;
// line 461
frost$core$MutableString* $tmp1351 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1351, &$s1352);
// line 462
frost$io$MemoryOutputStream* $tmp1353 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp1353);
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
frost$io$MemoryOutputStream* $tmp1354 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
*(&local11) = $tmp1353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
// line 463
frost$collections$Array* $tmp1355 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1355);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$collections$Array* $tmp1356 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local12) = $tmp1355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
// line 464
frost$core$Int64 $tmp1357 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1358 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1359 = *$tmp1358;
ITable* $tmp1360 = ((frost$collections$CollectionView*) $tmp1359)->$class->itable;
while ($tmp1360->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1360 = $tmp1360->next;
}
$fn1362 $tmp1361 = $tmp1360->methods[0];
frost$core$Int64 $tmp1363 = $tmp1361(((frost$collections$CollectionView*) $tmp1359));
frost$core$Int64 $tmp1364 = (frost$core$Int64) {1};
int64_t $tmp1365 = $tmp1363.value;
int64_t $tmp1366 = $tmp1364.value;
int64_t $tmp1367 = $tmp1365 - $tmp1366;
frost$core$Int64 $tmp1368 = (frost$core$Int64) {$tmp1367};
frost$core$Bit $tmp1369 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1370 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1357, $tmp1368, $tmp1369);
frost$core$Int64 $tmp1371 = $tmp1370.min;
*(&local13) = $tmp1371;
frost$core$Int64 $tmp1372 = $tmp1370.max;
frost$core$Bit $tmp1373 = $tmp1370.inclusive;
bool $tmp1374 = $tmp1373.value;
frost$core$Int64 $tmp1375 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1376 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1375);
if ($tmp1374) goto block31; else goto block32;
block31:;
int64_t $tmp1377 = $tmp1371.value;
int64_t $tmp1378 = $tmp1372.value;
bool $tmp1379 = $tmp1377 <= $tmp1378;
frost$core$Bit $tmp1380 = (frost$core$Bit) {$tmp1379};
bool $tmp1381 = $tmp1380.value;
if ($tmp1381) goto block28; else goto block29;
block32:;
int64_t $tmp1382 = $tmp1371.value;
int64_t $tmp1383 = $tmp1372.value;
bool $tmp1384 = $tmp1382 < $tmp1383;
frost$core$Bit $tmp1385 = (frost$core$Bit) {$tmp1384};
bool $tmp1386 = $tmp1385.value;
if ($tmp1386) goto block28; else goto block29;
block28:;
// line 465
frost$core$Int64 $tmp1387 = *(&local13);
frost$core$Int64$wrapper* $tmp1388;
$tmp1388 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1388->value = $tmp1387;
frost$core$String* $tmp1389 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1390, ((frost$core$Object*) $tmp1388));
frost$core$String* $tmp1391 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1389, &$s1392);
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
frost$core$String* $tmp1393 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
*(&local14) = $tmp1391;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
// line 466
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
// line 467
frost$core$Int64 $tmp1394 = *(&local13);
frost$core$Int64 $tmp1395 = (frost$core$Int64) {0};
frost$core$Bit $tmp1396 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1394, $tmp1395);
bool $tmp1397 = $tmp1396.value;
if ($tmp1397) goto block33; else goto block35;
block33:;
// line 468
frost$core$Weak** $tmp1398 = &param1->owner;
frost$core$Weak* $tmp1399 = *$tmp1398;
frost$core$Object* $tmp1400 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1399);
org$frostlang$frostc$Type** $tmp1401 = &((org$frostlang$frostc$ClassDecl*) $tmp1400)->type;
org$frostlang$frostc$Type* $tmp1402 = *$tmp1401;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
org$frostlang$frostc$Type* $tmp1403 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
*(&local15) = $tmp1402;
frost$core$Frost$unref$frost$core$Object$Q($tmp1400);
goto block34;
block35:;
// line 1
// line 471
frost$collections$Array** $tmp1404 = &param1->parameters;
frost$collections$Array* $tmp1405 = *$tmp1404;
frost$core$Int64 $tmp1406 = *(&local13);
frost$core$Int64 $tmp1407 = (frost$core$Int64) {1};
int64_t $tmp1408 = $tmp1406.value;
int64_t $tmp1409 = $tmp1407.value;
int64_t $tmp1410 = $tmp1408 - $tmp1409;
frost$core$Int64 $tmp1411 = (frost$core$Int64) {$tmp1410};
frost$core$Object* $tmp1412 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1405, $tmp1411);
org$frostlang$frostc$Type** $tmp1413 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1412)->type;
org$frostlang$frostc$Type* $tmp1414 = *$tmp1413;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
org$frostlang$frostc$Type* $tmp1415 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
*(&local15) = $tmp1414;
frost$core$Frost$unref$frost$core$Object$Q($tmp1412);
goto block34;
block34:;
// line 473
org$frostlang$frostc$Type* $tmp1416 = *(&local15);
org$frostlang$frostc$FixedArray** $tmp1417 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1418 = *$tmp1417;
frost$core$Int64 $tmp1419 = *(&local13);
frost$core$Object* $tmp1420 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1418, $tmp1419);
ITable* $tmp1421 = ((frost$core$Equatable*) $tmp1416)->$class->itable;
while ($tmp1421->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1421 = $tmp1421->next;
}
$fn1423 $tmp1422 = $tmp1421->methods[1];
frost$core$Bit $tmp1424 = $tmp1422(((frost$core$Equatable*) $tmp1416), ((frost$core$Equatable*) ((org$frostlang$frostc$Type*) $tmp1420)));
bool $tmp1425 = $tmp1424.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1420);
if ($tmp1425) goto block36; else goto block38;
block36:;
// line 474
frost$core$String* $tmp1426 = *(&local14);
org$frostlang$frostc$FixedArray** $tmp1427 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1428 = *$tmp1427;
frost$core$Int64 $tmp1429 = *(&local13);
frost$core$Object* $tmp1430 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1428, $tmp1429);
org$frostlang$frostc$Type* $tmp1431 = *(&local15);
frost$core$String* $tmp1432 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1426, ((org$frostlang$frostc$Type*) $tmp1430), $tmp1431);
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
frost$core$String* $tmp1433 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
*(&local16) = $tmp1432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
frost$core$Frost$unref$frost$core$Object$Q($tmp1430);
// line 475
frost$collections$Array* $tmp1434 = *(&local12);
frost$core$String* $tmp1435 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp1434, ((frost$core$Object*) $tmp1435));
// line 476
frost$core$Weak** $tmp1436 = &param0->compiler;
frost$core$Weak* $tmp1437 = *$tmp1436;
frost$core$Object* $tmp1438 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1437);
org$frostlang$frostc$FixedArray** $tmp1439 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1440 = *$tmp1439;
frost$core$Int64 $tmp1441 = *(&local13);
frost$core$Object* $tmp1442 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1440, $tmp1441);
frost$core$Bit $tmp1443 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1438), ((org$frostlang$frostc$Type*) $tmp1442));
bool $tmp1444 = $tmp1443.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1442);
frost$core$Frost$unref$frost$core$Object$Q($tmp1438);
if ($tmp1444) goto block41; else goto block40;
block41:;
frost$core$Weak** $tmp1445 = &param0->compiler;
frost$core$Weak* $tmp1446 = *$tmp1445;
frost$core$Object* $tmp1447 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1446);
org$frostlang$frostc$Type* $tmp1448 = *(&local15);
frost$core$Bit $tmp1449 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1447), $tmp1448);
frost$core$Bit $tmp1450 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1449);
bool $tmp1451 = $tmp1450.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1447);
if ($tmp1451) goto block39; else goto block40;
block39:;
// line 477
frost$io$MemoryOutputStream* $tmp1452 = *(&local11);
frost$core$String* $tmp1453 = *(&local16);
frost$core$String* $tmp1454 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1455, $tmp1453);
frost$core$String* $tmp1456 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1454, &$s1457);
frost$core$String* $tmp1458 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1459, $tmp1456);
$fn1461 $tmp1460 = ($fn1461) ((frost$io$OutputStream*) $tmp1452)->$class->vtable[19];
frost$core$Error* $tmp1462 = $tmp1460(((frost$io$OutputStream*) $tmp1452), $tmp1458);
if ($tmp1462 == NULL) goto block42; else goto block43;
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
*(&local1) = $tmp1462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
frost$core$String* $tmp1463 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
*(&local16) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1464 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1465 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
*(&local14) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp1466 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1467 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1468 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1469 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1470 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1471 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1472 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1473 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1474 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
goto block40;
block40:;
frost$core$String* $tmp1475 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
*(&local16) = ((frost$core$String*) NULL);
goto block37;
block38:;
// line 1
// line 482
frost$collections$Array* $tmp1476 = *(&local12);
frost$core$String* $tmp1477 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp1476, ((frost$core$Object*) $tmp1477));
goto block37;
block37:;
org$frostlang$frostc$Type* $tmp1478 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1479 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
*(&local14) = ((frost$core$String*) NULL);
goto block30;
block30:;
frost$core$Int64 $tmp1480 = *(&local13);
int64_t $tmp1481 = $tmp1372.value;
int64_t $tmp1482 = $tmp1480.value;
int64_t $tmp1483 = $tmp1481 - $tmp1482;
frost$core$Int64 $tmp1484 = (frost$core$Int64) {$tmp1483};
frost$core$UInt64 $tmp1485 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1484);
if ($tmp1374) goto block45; else goto block46;
block45:;
uint64_t $tmp1486 = $tmp1485.value;
uint64_t $tmp1487 = $tmp1376.value;
bool $tmp1488 = $tmp1486 >= $tmp1487;
frost$core$Bit $tmp1489 = (frost$core$Bit) {$tmp1488};
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block44; else goto block29;
block46:;
uint64_t $tmp1491 = $tmp1485.value;
uint64_t $tmp1492 = $tmp1376.value;
bool $tmp1493 = $tmp1491 > $tmp1492;
frost$core$Bit $tmp1494 = (frost$core$Bit) {$tmp1493};
bool $tmp1495 = $tmp1494.value;
if ($tmp1495) goto block44; else goto block29;
block44:;
int64_t $tmp1496 = $tmp1480.value;
int64_t $tmp1497 = $tmp1375.value;
int64_t $tmp1498 = $tmp1496 + $tmp1497;
frost$core$Int64 $tmp1499 = (frost$core$Int64) {$tmp1498};
*(&local13) = $tmp1499;
goto block28;
block29:;
// line 485
org$frostlang$frostc$Type** $tmp1500 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1501 = *$tmp1500;
org$frostlang$frostc$Type* $tmp1502 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp1503 = ((frost$core$Equatable*) $tmp1501)->$class->itable;
while ($tmp1503->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1503 = $tmp1503->next;
}
$fn1505 $tmp1504 = $tmp1503->methods[1];
frost$core$Bit $tmp1506 = $tmp1504(((frost$core$Equatable*) $tmp1501), ((frost$core$Equatable*) $tmp1502));
bool $tmp1507 = $tmp1506.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
if ($tmp1507) goto block47; else goto block48;
block47:;
// line 486
frost$io$IndentedOutputStream** $tmp1508 = &param0->out;
frost$io$IndentedOutputStream* $tmp1509 = *$tmp1508;
org$frostlang$frostc$Type** $tmp1510 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1511 = *$tmp1510;
frost$core$String* $tmp1512 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1511);
frost$core$String* $tmp1513 = frost$core$String$get_asString$R$frost$core$String($tmp1512);
frost$core$String* $tmp1514 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1513, &$s1515);
$fn1517 $tmp1516 = ($fn1517) ((frost$io$OutputStream*) $tmp1509)->$class->vtable[17];
frost$core$Error* $tmp1518 = $tmp1516(((frost$io$OutputStream*) $tmp1509), $tmp1514);
if ($tmp1518 == NULL) goto block49; else goto block50;
block50:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
*(&local1) = $tmp1518;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
frost$collections$Array* $tmp1519 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1520 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1521 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1522 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1523 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1524 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1525 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1526 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1527 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
goto block48;
block48:;
// line 488
frost$io$IndentedOutputStream** $tmp1528 = &param0->out;
frost$io$IndentedOutputStream* $tmp1529 = *$tmp1528;
frost$core$String* $tmp1530 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1531 = frost$core$String$get_asString$R$frost$core$String($tmp1530);
frost$core$String* $tmp1532 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1531, &$s1533);
$fn1535 $tmp1534 = ($fn1535) ((frost$io$OutputStream*) $tmp1529)->$class->vtable[17];
frost$core$Error* $tmp1536 = $tmp1534(((frost$io$OutputStream*) $tmp1529), $tmp1532);
if ($tmp1536 == NULL) goto block51; else goto block52;
block52:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
*(&local1) = $tmp1536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
frost$collections$Array* $tmp1537 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1538 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1539 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1540 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1541 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1542 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1543 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1544 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1545 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
// line 489
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1546));
frost$core$String* $tmp1547 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
*(&local8) = &$s1548;
// line 490
frost$core$Int64 $tmp1549 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1550 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1551 = *$tmp1550;
ITable* $tmp1552 = ((frost$collections$CollectionView*) $tmp1551)->$class->itable;
while ($tmp1552->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1552 = $tmp1552->next;
}
$fn1554 $tmp1553 = $tmp1552->methods[0];
frost$core$Int64 $tmp1555 = $tmp1553(((frost$collections$CollectionView*) $tmp1551));
frost$core$Int64 $tmp1556 = (frost$core$Int64) {1};
int64_t $tmp1557 = $tmp1555.value;
int64_t $tmp1558 = $tmp1556.value;
int64_t $tmp1559 = $tmp1557 - $tmp1558;
frost$core$Int64 $tmp1560 = (frost$core$Int64) {$tmp1559};
frost$core$Bit $tmp1561 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1562 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1549, $tmp1560, $tmp1561);
frost$core$Int64 $tmp1563 = $tmp1562.min;
*(&local17) = $tmp1563;
frost$core$Int64 $tmp1564 = $tmp1562.max;
frost$core$Bit $tmp1565 = $tmp1562.inclusive;
bool $tmp1566 = $tmp1565.value;
frost$core$Int64 $tmp1567 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1568 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1567);
if ($tmp1566) goto block56; else goto block57;
block56:;
int64_t $tmp1569 = $tmp1563.value;
int64_t $tmp1570 = $tmp1564.value;
bool $tmp1571 = $tmp1569 <= $tmp1570;
frost$core$Bit $tmp1572 = (frost$core$Bit) {$tmp1571};
bool $tmp1573 = $tmp1572.value;
if ($tmp1573) goto block53; else goto block54;
block57:;
int64_t $tmp1574 = $tmp1563.value;
int64_t $tmp1575 = $tmp1564.value;
bool $tmp1576 = $tmp1574 < $tmp1575;
frost$core$Bit $tmp1577 = (frost$core$Bit) {$tmp1576};
bool $tmp1578 = $tmp1577.value;
if ($tmp1578) goto block53; else goto block54;
block53:;
// line 491
frost$io$IndentedOutputStream** $tmp1579 = &param0->out;
frost$io$IndentedOutputStream* $tmp1580 = *$tmp1579;
frost$core$String* $tmp1581 = *(&local8);
frost$core$String* $tmp1582 = frost$core$String$get_asString$R$frost$core$String($tmp1581);
frost$core$String* $tmp1583 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1582, &$s1584);
frost$collections$Array* $tmp1585 = *(&local12);
frost$core$Int64 $tmp1586 = *(&local17);
frost$core$Object* $tmp1587 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1585, $tmp1586);
frost$core$String* $tmp1588 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1583, ((frost$core$String*) $tmp1587));
frost$core$String* $tmp1589 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1588, &$s1590);
$fn1592 $tmp1591 = ($fn1592) ((frost$io$OutputStream*) $tmp1580)->$class->vtable[17];
frost$core$Error* $tmp1593 = $tmp1591(((frost$io$OutputStream*) $tmp1580), $tmp1589);
if ($tmp1593 == NULL) goto block58; else goto block59;
block59:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
*(&local1) = $tmp1593;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
frost$core$Frost$unref$frost$core$Object$Q($tmp1587);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
frost$collections$Array* $tmp1594 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1595 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1596 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1597 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1598 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1599 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1600 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1601 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1602 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
frost$core$Frost$unref$frost$core$Object$Q($tmp1587);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
// line 492
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1603));
frost$core$String* $tmp1604 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
*(&local8) = &$s1605;
goto block55;
block55:;
frost$core$Int64 $tmp1606 = *(&local17);
int64_t $tmp1607 = $tmp1564.value;
int64_t $tmp1608 = $tmp1606.value;
int64_t $tmp1609 = $tmp1607 - $tmp1608;
frost$core$Int64 $tmp1610 = (frost$core$Int64) {$tmp1609};
frost$core$UInt64 $tmp1611 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1610);
if ($tmp1566) goto block61; else goto block62;
block61:;
uint64_t $tmp1612 = $tmp1611.value;
uint64_t $tmp1613 = $tmp1568.value;
bool $tmp1614 = $tmp1612 >= $tmp1613;
frost$core$Bit $tmp1615 = (frost$core$Bit) {$tmp1614};
bool $tmp1616 = $tmp1615.value;
if ($tmp1616) goto block60; else goto block54;
block62:;
uint64_t $tmp1617 = $tmp1611.value;
uint64_t $tmp1618 = $tmp1568.value;
bool $tmp1619 = $tmp1617 > $tmp1618;
frost$core$Bit $tmp1620 = (frost$core$Bit) {$tmp1619};
bool $tmp1621 = $tmp1620.value;
if ($tmp1621) goto block60; else goto block54;
block60:;
int64_t $tmp1622 = $tmp1606.value;
int64_t $tmp1623 = $tmp1567.value;
int64_t $tmp1624 = $tmp1622 + $tmp1623;
frost$core$Int64 $tmp1625 = (frost$core$Int64) {$tmp1624};
*(&local17) = $tmp1625;
goto block53;
block54:;
// line 494
frost$io$IndentedOutputStream** $tmp1626 = &param0->out;
frost$io$IndentedOutputStream* $tmp1627 = *$tmp1626;
$fn1629 $tmp1628 = ($fn1629) ((frost$io$OutputStream*) $tmp1627)->$class->vtable[19];
frost$core$Error* $tmp1630 = $tmp1628(((frost$io$OutputStream*) $tmp1627), &$s1631);
if ($tmp1630 == NULL) goto block63; else goto block64;
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
*(&local1) = $tmp1630;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
frost$collections$Array* $tmp1632 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1633 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1634 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1635 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1636 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1637 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1638 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1639 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1640 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
// line 495
frost$io$IndentedOutputStream** $tmp1641 = &param0->out;
frost$io$IndentedOutputStream* $tmp1642 = *$tmp1641;
frost$io$MemoryOutputStream* $tmp1643 = *(&local11);
$fn1645 $tmp1644 = ($fn1645) ((frost$io$OutputStream*) $tmp1642)->$class->vtable[20];
frost$core$Error* $tmp1646 = $tmp1644(((frost$io$OutputStream*) $tmp1642), ((frost$core$Object*) $tmp1643));
if ($tmp1646 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
*(&local1) = $tmp1646;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
frost$collections$Array* $tmp1647 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1648 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1649 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1650 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1651 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1652 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1653 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1654 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1655 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
// line 496
org$frostlang$frostc$Type** $tmp1656 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1657 = *$tmp1656;
org$frostlang$frostc$Type* $tmp1658 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp1659 = ((frost$core$Equatable*) $tmp1657)->$class->itable;
while ($tmp1659->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1659 = $tmp1659->next;
}
$fn1661 $tmp1660 = $tmp1659->methods[1];
frost$core$Bit $tmp1662 = $tmp1660(((frost$core$Equatable*) $tmp1657), ((frost$core$Equatable*) $tmp1658));
bool $tmp1663 = $tmp1662.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
if ($tmp1663) goto block67; else goto block68;
block67:;
// line 497
frost$io$IndentedOutputStream** $tmp1664 = &param0->out;
frost$io$IndentedOutputStream* $tmp1665 = *$tmp1664;
org$frostlang$frostc$Type** $tmp1666 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1667 = *$tmp1666;
org$frostlang$frostc$Type* $tmp1668 = *(&local5);
frost$core$String* $tmp1669 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, &$s1670, $tmp1667, $tmp1668);
frost$core$String* $tmp1671 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1672, $tmp1669);
frost$core$String* $tmp1673 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1671, &$s1674);
$fn1676 $tmp1675 = ($fn1676) ((frost$io$OutputStream*) $tmp1665)->$class->vtable[19];
frost$core$Error* $tmp1677 = $tmp1675(((frost$io$OutputStream*) $tmp1665), $tmp1673);
if ($tmp1677 == NULL) goto block69; else goto block70;
block70:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
*(&local1) = $tmp1677;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
frost$collections$Array* $tmp1678 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1679 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1680 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1681 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1682 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1683 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1684 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1685 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1686 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1686));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
goto block68;
block68:;
// line 500
frost$io$IndentedOutputStream** $tmp1687 = &param0->out;
frost$io$IndentedOutputStream* $tmp1688 = *$tmp1687;
frost$core$Int64* $tmp1689 = &$tmp1688->level;
frost$core$Int64 $tmp1690 = *$tmp1689;
frost$core$Int64 $tmp1691 = (frost$core$Int64) {1};
int64_t $tmp1692 = $tmp1690.value;
int64_t $tmp1693 = $tmp1691.value;
int64_t $tmp1694 = $tmp1692 - $tmp1693;
frost$core$Int64 $tmp1695 = (frost$core$Int64) {$tmp1694};
frost$core$Int64* $tmp1696 = &$tmp1688->level;
*$tmp1696 = $tmp1695;
// line 501
frost$io$IndentedOutputStream** $tmp1697 = &param0->out;
frost$io$IndentedOutputStream* $tmp1698 = *$tmp1697;
$fn1700 $tmp1699 = ($fn1700) ((frost$io$OutputStream*) $tmp1698)->$class->vtable[19];
frost$core$Error* $tmp1701 = $tmp1699(((frost$io$OutputStream*) $tmp1698), &$s1702);
if ($tmp1701 == NULL) goto block71; else goto block72;
block72:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
*(&local1) = $tmp1701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$collections$Array* $tmp1703 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1704 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1705 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1706 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1707 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1708 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1709 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1710 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1711 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block71:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
// line 502
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1712 = (org$frostlang$frostc$CCodeGenerator$MethodShim*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$MethodShim$class);
frost$core$String* $tmp1713 = *(&local6);
frost$core$MutableString* $tmp1714 = *(&local7);
frost$core$String* $tmp1715 = frost$core$MutableString$finish$R$frost$core$String($tmp1714);
org$frostlang$frostc$CCodeGenerator$MethodShim$init$frost$core$String$frost$core$String($tmp1712, $tmp1713, $tmp1715);
*(&local18) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1712));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1716 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
*(&local18) = $tmp1712;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1712));
// line 503
frost$collections$IdentityMap** $tmp1717 = &param0->methodShims;
frost$collections$IdentityMap* $tmp1718 = *$tmp1717;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1719 = *(&local18);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp1718, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp1719));
// line 504
frost$io$IndentedOutputStream** $tmp1720 = &param0->shims;
frost$io$IndentedOutputStream* $tmp1721 = *$tmp1720;
frost$io$MemoryOutputStream* $tmp1722 = *(&local4);
frost$core$String* $tmp1723 = frost$io$MemoryOutputStream$finish$R$frost$core$String($tmp1722);
$fn1725 $tmp1724 = ($fn1725) ((frost$io$OutputStream*) $tmp1721)->$class->vtable[17];
frost$core$Error* $tmp1726 = $tmp1724(((frost$io$OutputStream*) $tmp1721), $tmp1723);
if ($tmp1726 == NULL) goto block73; else goto block74;
block74:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
*(&local1) = $tmp1726;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1727 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
*(&local18) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$collections$Array* $tmp1728 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1729 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1730 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1731 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1732 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1733 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1734 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1735 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1736 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
// line 505
frost$io$IndentedOutputStream* $tmp1737 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
frost$io$IndentedOutputStream** $tmp1738 = &param0->out;
frost$io$IndentedOutputStream* $tmp1739 = *$tmp1738;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
frost$io$IndentedOutputStream** $tmp1740 = &param0->out;
*$tmp1740 = $tmp1737;
// line 506
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1741 = *(&local18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1742 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
*(&local18) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$collections$Array* $tmp1743 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1744 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1745 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1745));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1746 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1746));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1747 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1748 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1748));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1749 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1750 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1751 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Error* $tmp1752 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
*(&local1) = ((frost$core$Error*) NULL);
*(&local0) = $tmp1741;
goto block1;
block4:;
// line 509
frost$core$Int64 $tmp1753 = (frost$core$Int64) {509};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1754, $tmp1753);
abort(); // unreachable
block5:;
frost$core$Error* $tmp1755 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
*(&local1) = ((frost$core$Error*) NULL);
goto block75;
block75:;
block1:;
frost$io$IndentedOutputStream** $tmp1756 = &param0->out;
frost$io$IndentedOutputStream* $tmp1757 = *$tmp1756;
bool $tmp1758 = $tmp1757 == $tmp1153;
frost$core$Bit $tmp1759 = frost$core$Bit$init$builtin_bit($tmp1758);
bool $tmp1760 = $tmp1759.value;
if ($tmp1760) goto block2; else goto block3;
block2:;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1761 = *(&local0);
return $tmp1761;
block3:;
frost$core$Int64 $tmp1762 = (frost$core$Int64) {434};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1763, $tmp1762, &$s1764);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getWrapperITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$collections$HashSet* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local5 = NULL;
frost$collections$ListView* local6 = NULL;
frost$core$String* local7 = NULL;
frost$core$MutableString* local8 = NULL;
frost$core$String* local9 = NULL;
org$frostlang$frostc$MethodDecl* local10 = NULL;
// line 514
*(&local0) = ((frost$core$Error*) NULL);
// line 515
frost$core$Weak** $tmp1765 = &param0->compiler;
frost$core$Weak* $tmp1766 = *$tmp1765;
frost$core$Object* $tmp1767 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1766);
org$frostlang$frostc$Type** $tmp1768 = &param1->type;
org$frostlang$frostc$Type* $tmp1769 = *$tmp1768;
frost$collections$HashSet* $tmp1770 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(((org$frostlang$frostc$Compiler*) $tmp1767), $tmp1769);
*(&local1) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
frost$collections$HashSet* $tmp1771 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
*(&local1) = $tmp1770;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
frost$core$Frost$unref$frost$core$Object$Q($tmp1767);
// line 516
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1772));
frost$core$String* $tmp1773 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
*(&local2) = &$s1774;
// line 517
frost$collections$HashSet* $tmp1775 = *(&local1);
ITable* $tmp1776 = ((frost$collections$Iterable*) $tmp1775)->$class->itable;
while ($tmp1776->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1776 = $tmp1776->next;
}
$fn1778 $tmp1777 = $tmp1776->methods[0];
frost$collections$Iterator* $tmp1779 = $tmp1777(((frost$collections$Iterable*) $tmp1775));
goto block3;
block3:;
ITable* $tmp1780 = $tmp1779->$class->itable;
while ($tmp1780->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1780 = $tmp1780->next;
}
$fn1782 $tmp1781 = $tmp1780->methods[0];
frost$core$Bit $tmp1783 = $tmp1781($tmp1779);
bool $tmp1784 = $tmp1783.value;
if ($tmp1784) goto block5; else goto block4;
block4:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1785 = $tmp1779->$class->itable;
while ($tmp1785->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1785 = $tmp1785->next;
}
$fn1787 $tmp1786 = $tmp1785->methods[1];
frost$core$Object* $tmp1788 = $tmp1786($tmp1779);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1788)));
org$frostlang$frostc$Type* $tmp1789 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp1788);
// line 518
frost$core$Weak** $tmp1790 = &param0->compiler;
frost$core$Weak* $tmp1791 = *$tmp1790;
frost$core$Object* $tmp1792 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1791);
org$frostlang$frostc$Type* $tmp1793 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1794 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1792), $tmp1793);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
org$frostlang$frostc$ClassDecl* $tmp1795 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
*(&local4) = $tmp1794;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
frost$core$Frost$unref$frost$core$Object$Q($tmp1792);
// line 519
org$frostlang$frostc$ClassDecl* $tmp1796 = *(&local4);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1797 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp1796);
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1798 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
*(&local5) = $tmp1797;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
// line 520
frost$core$Weak** $tmp1799 = &param0->compiler;
frost$core$Weak* $tmp1800 = *$tmp1799;
frost$core$Object* $tmp1801 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1800);
org$frostlang$frostc$Type* $tmp1802 = *(&local3);
frost$collections$ListView* $tmp1803 = org$frostlang$frostc$Compiler$interfaceMethods$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1801), param1, $tmp1802);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
frost$collections$ListView* $tmp1804 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
*(&local6) = $tmp1803;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
frost$core$Frost$unref$frost$core$Object$Q($tmp1801);
// line 521
frost$core$String** $tmp1805 = &param1->name;
frost$core$String* $tmp1806 = *$tmp1805;
frost$core$String* $tmp1807 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1806);
frost$core$String* $tmp1808 = frost$core$String$get_asString$R$frost$core$String($tmp1807);
frost$core$String* $tmp1809 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1808, &$s1810);
org$frostlang$frostc$ClassDecl* $tmp1811 = *(&local4);
frost$core$String** $tmp1812 = &$tmp1811->name;
frost$core$String* $tmp1813 = *$tmp1812;
frost$core$String* $tmp1814 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1813);
frost$core$String* $tmp1815 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1809, $tmp1814);
frost$core$String* $tmp1816 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1815, &$s1817);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
frost$core$String* $tmp1818 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
*(&local7) = $tmp1816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
// line 522
frost$core$MutableString* $tmp1819 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp1820 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1821 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1820);
frost$core$String* $tmp1822 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1823, $tmp1821);
frost$core$String* $tmp1824 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1822, &$s1825);
frost$collections$ListView* $tmp1826 = *(&local6);
ITable* $tmp1827 = ((frost$collections$CollectionView*) $tmp1826)->$class->itable;
while ($tmp1827->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1827 = $tmp1827->next;
}
$fn1829 $tmp1828 = $tmp1827->methods[0];
frost$core$Int64 $tmp1830 = $tmp1828(((frost$collections$CollectionView*) $tmp1826));
frost$core$Int64$wrapper* $tmp1831;
$tmp1831 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1831->value = $tmp1830;
frost$core$String* $tmp1832 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1833, ((frost$core$Object*) $tmp1831));
frost$core$String* $tmp1834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1832, &$s1835);
frost$core$String* $tmp1836 = *(&local7);
frost$core$String* $tmp1837 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1834, $tmp1836);
frost$core$String* $tmp1838 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1837, &$s1839);
frost$core$String* $tmp1840 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1824, $tmp1838);
org$frostlang$frostc$Type* $tmp1841 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1842 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1841);
frost$core$String* $tmp1843 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1844, $tmp1842);
frost$core$String* $tmp1845 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1843, &$s1846);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1847 = *(&local5);
frost$core$String** $tmp1848 = &$tmp1847->name;
frost$core$String* $tmp1849 = *$tmp1848;
frost$core$String* $tmp1850 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1845, $tmp1849);
frost$core$String* $tmp1851 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1850, &$s1852);
frost$core$String* $tmp1853 = *(&local2);
frost$core$String* $tmp1854 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1851, $tmp1853);
frost$core$String* $tmp1855 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1854, &$s1856);
frost$core$String* $tmp1857 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1840, $tmp1855);
frost$core$MutableString$init$frost$core$String($tmp1819, $tmp1857);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
frost$core$MutableString* $tmp1858 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
*(&local8) = $tmp1819;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
// line 525
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1859));
frost$core$String* $tmp1860 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
*(&local9) = &$s1861;
// line 526
frost$collections$ListView* $tmp1862 = *(&local6);
ITable* $tmp1863 = ((frost$collections$Iterable*) $tmp1862)->$class->itable;
while ($tmp1863->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1863 = $tmp1863->next;
}
$fn1865 $tmp1864 = $tmp1863->methods[0];
frost$collections$Iterator* $tmp1866 = $tmp1864(((frost$collections$Iterable*) $tmp1862));
goto block6;
block6:;
ITable* $tmp1867 = $tmp1866->$class->itable;
while ($tmp1867->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1867 = $tmp1867->next;
}
$fn1869 $tmp1868 = $tmp1867->methods[0];
frost$core$Bit $tmp1870 = $tmp1868($tmp1866);
bool $tmp1871 = $tmp1870.value;
if ($tmp1871) goto block8; else goto block7;
block7:;
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1872 = $tmp1866->$class->itable;
while ($tmp1872->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1872 = $tmp1872->next;
}
$fn1874 $tmp1873 = $tmp1872->methods[1];
frost$core$Object* $tmp1875 = $tmp1873($tmp1866);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1875)));
org$frostlang$frostc$MethodDecl* $tmp1876 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) $tmp1875);
// line 527
frost$core$MutableString* $tmp1877 = *(&local8);
frost$core$String* $tmp1878 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp1877, $tmp1878);
// line 528
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1879));
frost$core$String* $tmp1880 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
*(&local9) = &$s1881;
// line 529
org$frostlang$frostc$MethodDecl* $tmp1882 = *(&local10);
org$frostlang$frostc$Annotations** $tmp1883 = &$tmp1882->annotations;
org$frostlang$frostc$Annotations* $tmp1884 = *$tmp1883;
frost$core$Bit $tmp1885 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp1884);
bool $tmp1886 = $tmp1885.value;
if ($tmp1886) goto block9; else goto block11;
block9:;
// line 530
frost$core$MutableString* $tmp1887 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1887, &$s1888);
goto block10;
block11:;
// line 1
// line 533
frost$core$MutableString* $tmp1889 = *(&local8);
org$frostlang$frostc$MethodDecl* $tmp1890 = *(&local10);
frost$core$String* $tmp1891 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp1890);
frost$core$MutableString$append$frost$core$String($tmp1889, $tmp1891);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
goto block10;
block10:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1875);
org$frostlang$frostc$MethodDecl* $tmp1892 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
// line 536
frost$core$MutableString* $tmp1893 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1893, &$s1894);
// line 537
frost$io$MemoryOutputStream** $tmp1895 = &param0->types;
frost$io$MemoryOutputStream* $tmp1896 = *$tmp1895;
frost$core$MutableString* $tmp1897 = *(&local8);
frost$core$String* $tmp1898 = frost$core$MutableString$finish$R$frost$core$String($tmp1897);
$fn1900 $tmp1899 = ($fn1900) ((frost$io$OutputStream*) $tmp1896)->$class->vtable[19];
frost$core$Error* $tmp1901 = $tmp1899(((frost$io$OutputStream*) $tmp1896), $tmp1898);
if ($tmp1901 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
*(&local0) = $tmp1901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
frost$core$String* $tmp1902 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1903 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1904 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1905 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1906 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1907 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1788);
org$frostlang$frostc$Type* $tmp1908 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
frost$core$String* $tmp1909 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1910 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
*(&local1) = ((frost$collections$HashSet*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
// line 538
frost$core$String* $tmp1911 = *(&local7);
frost$core$String* $tmp1912 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1913, $tmp1911);
frost$core$String* $tmp1914 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1912, &$s1915);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
frost$core$String* $tmp1916 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1916));
*(&local2) = $tmp1914;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
frost$core$String* $tmp1917 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1918 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1919 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1920 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1921 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1922 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1788);
org$frostlang$frostc$Type* $tmp1923 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
// line 540
frost$core$String* $tmp1924 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
frost$core$String* $tmp1925 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1926 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
*(&local1) = ((frost$collections$HashSet*) NULL);
frost$core$Error* $tmp1927 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp1924;
block1:;
// line 543
frost$core$Int64 $tmp1928 = (frost$core$Int64) {543};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1929, $tmp1928);
abort(); // unreachable
block2:;
frost$core$Error* $tmp1930 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
*(&local0) = ((frost$core$Error*) NULL);
goto block14;
block14:;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 548
frost$core$Weak** $tmp1931 = &param0->hCodeGen;
frost$core$Weak* $tmp1932 = *$tmp1931;
frost$core$Object* $tmp1933 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1932);
frost$core$Bit $tmp1934 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$HCodeGenerator*) $tmp1933), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp1933);
return $tmp1934;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$CCodeGenerator$MethodShim* local4 = NULL;
// line 552
frost$core$Weak** $tmp1935 = &param0->compiler;
frost$core$Weak* $tmp1936 = *$tmp1935;
frost$core$Object* $tmp1937 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1936);
frost$core$Bit $tmp1938 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1937), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp1937);
// line 553
frost$core$Weak** $tmp1939 = &param1->owner;
frost$core$Weak* $tmp1940 = *$tmp1939;
frost$core$Object* $tmp1941 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1940);
frost$core$Bit $tmp1942 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp1941));
bool $tmp1943 = $tmp1942.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1941);
if ($tmp1943) goto block1; else goto block2;
block1:;
// line 554
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param1);
goto block2;
block2:;
// line 556
*(&local0) = ((frost$core$String*) NULL);
// line 557
frost$core$Weak** $tmp1944 = &param0->compiler;
frost$core$Weak* $tmp1945 = *$tmp1944;
frost$core$Object* $tmp1946 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1945);
frost$core$Weak** $tmp1947 = &param1->owner;
frost$core$Weak* $tmp1948 = *$tmp1947;
frost$core$Object* $tmp1949 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1948);
org$frostlang$frostc$Type** $tmp1950 = &((org$frostlang$frostc$ClassDecl*) $tmp1949)->type;
org$frostlang$frostc$Type* $tmp1951 = *$tmp1950;
frost$core$Bit $tmp1952 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp1953 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp1946), param1, $tmp1951, $tmp1952);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
org$frostlang$frostc$Type* $tmp1954 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
*(&local1) = $tmp1953;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
frost$core$Frost$unref$frost$core$Object$Q($tmp1949);
frost$core$Frost$unref$frost$core$Object$Q($tmp1946);
// line 558
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
// line 559
frost$core$Weak** $tmp1955 = &param0->compiler;
frost$core$Weak* $tmp1956 = *$tmp1955;
frost$core$Object* $tmp1957 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1956);
frost$core$Weak** $tmp1958 = &param1->owner;
frost$core$Weak* $tmp1959 = *$tmp1958;
frost$core$Object* $tmp1960 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1959);
frost$core$Bit $tmp1961 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1957), ((org$frostlang$frostc$ClassDecl*) $tmp1960));
bool $tmp1962 = $tmp1961.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1960);
frost$core$Frost$unref$frost$core$Object$Q($tmp1957);
if ($tmp1962) goto block3; else goto block5;
block3:;
// line 560
org$frostlang$frostc$Type* $tmp1963 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1963));
org$frostlang$frostc$Type* $tmp1964 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
*(&local2) = $tmp1963;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1963));
goto block4;
block5:;
// line 1
// line 563
frost$core$Weak** $tmp1965 = &param1->owner;
frost$core$Weak* $tmp1966 = *$tmp1965;
frost$core$Object* $tmp1967 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1966);
org$frostlang$frostc$Type** $tmp1968 = &((org$frostlang$frostc$ClassDecl*) $tmp1967)->type;
org$frostlang$frostc$Type* $tmp1969 = *$tmp1968;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
org$frostlang$frostc$Type* $tmp1970 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
*(&local2) = $tmp1969;
frost$core$Frost$unref$frost$core$Object$Q($tmp1967);
goto block4;
block4:;
// line 565
frost$core$Weak** $tmp1971 = &param0->compiler;
frost$core$Weak* $tmp1972 = *$tmp1971;
frost$core$Object* $tmp1973 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1972);
org$frostlang$frostc$Type* $tmp1974 = *(&local2);
org$frostlang$frostc$Type* $tmp1975 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp1973), param1, $tmp1974);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
org$frostlang$frostc$Type* $tmp1976 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
*(&local3) = $tmp1975;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
frost$core$Frost$unref$frost$core$Object$Q($tmp1973);
// line 566
org$frostlang$frostc$Type* $tmp1977 = *(&local1);
org$frostlang$frostc$Type* $tmp1978 = *(&local3);
ITable* $tmp1979 = ((frost$core$Equatable*) $tmp1977)->$class->itable;
while ($tmp1979->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1979 = $tmp1979->next;
}
$fn1981 $tmp1980 = $tmp1979->methods[1];
frost$core$Bit $tmp1982 = $tmp1980(((frost$core$Equatable*) $tmp1977), ((frost$core$Equatable*) $tmp1978));
bool $tmp1983 = $tmp1982.value;
if ($tmp1983) goto block6; else goto block8;
block6:;
// line 567
org$frostlang$frostc$Type* $tmp1984 = *(&local3);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1985 = org$frostlang$frostc$CCodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$MethodShim(param0, param1, $tmp1984);
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1986 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
*(&local4) = $tmp1985;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
// line 568
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1987 = *(&local4);
frost$core$String** $tmp1988 = &$tmp1987->name;
frost$core$String* $tmp1989 = *$tmp1988;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
frost$core$String* $tmp1990 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
*(&local0) = $tmp1989;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1991 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1991));
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block7;
block8:;
// line 1
// line 571
frost$core$String* $tmp1992 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
frost$core$String* $tmp1993 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
*(&local0) = $tmp1992;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
goto block7;
block7:;
// line 573
frost$core$String* $tmp1994 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
org$frostlang$frostc$Type* $tmp1995 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1996 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1997 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1998 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1994;

}
org$frostlang$frostc$CCodeGenerator$ClassConstant* org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local1 = NULL;
frost$core$String* local2 = NULL;
frost$collections$ListView* local3 = NULL;
frost$core$String* local4 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local5 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local6 = NULL;
frost$core$String* local7 = NULL;
frost$core$MutableString* local8 = NULL;
frost$core$String* local9 = NULL;
org$frostlang$frostc$MethodDecl* local10 = NULL;
// line 577
*(&local0) = ((frost$core$Error*) NULL);
// line 578
frost$collections$HashMap** $tmp1999 = &param0->classConstants;
frost$collections$HashMap* $tmp2000 = *$tmp1999;
frost$core$String** $tmp2001 = &param1->name;
frost$core$String* $tmp2002 = *$tmp2001;
frost$core$Object* $tmp2003 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2000, ((frost$collections$Key*) $tmp2002));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2003)));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2004 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2004));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2003);
frost$core$Frost$unref$frost$core$Object$Q($tmp2003);
// line 579
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2005 = *(&local1);
frost$core$Bit $tmp2006 = frost$core$Bit$init$builtin_bit($tmp2005 == NULL);
bool $tmp2007 = $tmp2006.value;
if ($tmp2007) goto block3; else goto block4;
block3:;
// line 580
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, param1);
// line 581
frost$core$Weak** $tmp2008 = &param0->compiler;
frost$core$Weak* $tmp2009 = *$tmp2008;
frost$core$Object* $tmp2010 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2009);
frost$core$Bit $tmp2011 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp2010), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp2010);
// line 582
*(&local2) = ((frost$core$String*) NULL);
// line 583
frost$core$Bit $tmp2012 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, param1);
bool $tmp2013 = $tmp2012.value;
if ($tmp2013) goto block5; else goto block6;
block5:;
// line 584
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2014 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
org$frostlang$frostc$Type** $tmp2015 = &param1->type;
org$frostlang$frostc$Type* $tmp2016 = *$tmp2015;
frost$core$String** $tmp2017 = &((org$frostlang$frostc$Symbol*) $tmp2016)->name;
frost$core$String* $tmp2018 = *$tmp2017;
frost$core$String* $tmp2019 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2018);
frost$core$String* $tmp2020 = frost$core$String$get_asString$R$frost$core$String($tmp2019);
frost$core$String* $tmp2021 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2020, &$s2022);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2014, $tmp2021, &$s2023);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2024 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
*(&local1) = $tmp2014;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
// line 586
frost$collections$HashMap** $tmp2025 = &param0->classConstants;
frost$collections$HashMap* $tmp2026 = *$tmp2025;
frost$core$String** $tmp2027 = &param1->name;
frost$core$String* $tmp2028 = *$tmp2027;
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2029 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2026, ((frost$collections$Key*) $tmp2028), ((frost$core$Object*) $tmp2029));
// line 587
frost$collections$HashMap** $tmp2030 = &param0->classConstants;
frost$collections$HashMap* $tmp2031 = *$tmp2030;
frost$core$String** $tmp2032 = &param1->name;
frost$core$String* $tmp2033 = *$tmp2032;
frost$core$Object* $tmp2034 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2031, ((frost$collections$Key*) $tmp2033));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2034)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2034);
frost$core$String* $tmp2035 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2036 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp2037 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
*(&local0) = ((frost$core$Error*) NULL);
return ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2034);
block6:;
// line 589
frost$core$Weak** $tmp2038 = &param0->compiler;
frost$core$Weak* $tmp2039 = *$tmp2038;
frost$core$Object* $tmp2040 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2039);
frost$collections$Stack** $tmp2041 = &((org$frostlang$frostc$Compiler*) $tmp2040)->currentClass;
frost$collections$Stack* $tmp2042 = *$tmp2041;
frost$collections$Stack$push$frost$collections$Stack$T($tmp2042, ((frost$core$Object*) param1));
frost$core$Frost$unref$frost$core$Object$Q($tmp2040);
// line 590
frost$core$Weak** $tmp2043 = &param0->compiler;
frost$core$Weak* $tmp2044 = *$tmp2043;
frost$core$Object* $tmp2045 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2044);
frost$collections$ListView* $tmp2046 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2045), param1);
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2046));
frost$collections$ListView* $tmp2047 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
*(&local3) = $tmp2046;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2046));
frost$core$Frost$unref$frost$core$Object$Q($tmp2045);
// line 591
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2048 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
org$frostlang$frostc$Type** $tmp2049 = &param1->type;
org$frostlang$frostc$Type* $tmp2050 = *$tmp2049;
frost$core$String** $tmp2051 = &((org$frostlang$frostc$Symbol*) $tmp2050)->name;
frost$core$String* $tmp2052 = *$tmp2051;
frost$core$String* $tmp2053 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2052);
frost$core$String* $tmp2054 = frost$core$String$get_asString$R$frost$core$String($tmp2053);
frost$core$String* $tmp2055 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2054, &$s2056);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2048, $tmp2055, &$s2057);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2048));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2058 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
*(&local1) = $tmp2048;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2048));
// line 592
frost$collections$HashMap** $tmp2059 = &param0->classConstants;
frost$collections$HashMap* $tmp2060 = *$tmp2059;
frost$core$String** $tmp2061 = &param1->name;
frost$core$String* $tmp2062 = *$tmp2061;
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2063 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2060, ((frost$collections$Key*) $tmp2062), ((frost$core$Object*) $tmp2063));
// line 593
*(&local4) = ((frost$core$String*) NULL);
// line 594
org$frostlang$frostc$Type** $tmp2064 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp2065 = *$tmp2064;
frost$core$Bit $tmp2066 = frost$core$Bit$init$builtin_bit($tmp2065 != NULL);
bool $tmp2067 = $tmp2066.value;
if ($tmp2067) goto block7; else goto block9;
block7:;
// line 595
frost$core$Weak** $tmp2068 = &param0->compiler;
frost$core$Weak* $tmp2069 = *$tmp2068;
frost$core$Object* $tmp2070 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2069);
org$frostlang$frostc$Type** $tmp2071 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp2072 = *$tmp2071;
org$frostlang$frostc$ClassDecl* $tmp2073 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2070), $tmp2072);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2074 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2073);
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2075 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
*(&local5) = $tmp2074;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
frost$core$Frost$unref$frost$core$Object$Q($tmp2070);
// line 596
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2076 = *(&local5);
frost$core$String** $tmp2077 = &$tmp2076->name;
frost$core$String* $tmp2078 = *$tmp2077;
frost$core$String* $tmp2079 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2080, $tmp2078);
frost$core$String* $tmp2081 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2079, &$s2082);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
frost$core$String* $tmp2083 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
*(&local4) = $tmp2081;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2084 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block8;
block9:;
// line 1
// line 599
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2085));
frost$core$String* $tmp2086 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
*(&local4) = &$s2087;
goto block8;
block8:;
// line 601
frost$core$Weak** $tmp2088 = &param0->compiler;
frost$core$Weak* $tmp2089 = *$tmp2088;
frost$core$Object* $tmp2090 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2089);
org$frostlang$frostc$Type* $tmp2091 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2092 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2090), $tmp2091);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2093 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2092);
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2094 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
*(&local6) = $tmp2093;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
frost$core$Frost$unref$frost$core$Object$Q($tmp2090);
// line 602
frost$core$String** $tmp2095 = &param1->name;
frost$core$String* $tmp2096 = *$tmp2095;
frost$core$String* $tmp2097 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp2096);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
frost$core$String* $tmp2098 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
*(&local7) = $tmp2097;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
// line 603
frost$core$String* $tmp2099 = *(&local7);
frost$core$Bit $tmp2100 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2099, &$s2101);
bool $tmp2102 = $tmp2100.value;
if ($tmp2102) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2103 = (frost$core$Int64) {603};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2104, $tmp2103);
abort(); // unreachable
block10:;
// line 604
frost$core$MutableString* $tmp2105 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp2106 = *(&local7);
frost$core$Int64 $tmp2107 = (frost$core$Int64) {1};
frost$core$Bit $tmp2108 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp2109 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp2107, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp2108);
frost$core$String* $tmp2110 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp2106, $tmp2109);
frost$core$String* $tmp2111 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2112, $tmp2110);
frost$core$String* $tmp2113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2111, &$s2114);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2115 = *(&local1);
frost$core$String** $tmp2116 = &$tmp2115->name;
frost$core$String* $tmp2117 = *$tmp2116;
frost$core$String* $tmp2118 = frost$core$String$get_asString$R$frost$core$String($tmp2117);
frost$core$String* $tmp2119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2118, &$s2120);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2121 = *(&local1);
frost$core$String** $tmp2122 = &$tmp2121->name;
frost$core$String* $tmp2123 = *$tmp2122;
frost$core$String* $tmp2124 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2119, $tmp2123);
frost$core$String* $tmp2125 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2124, &$s2126);
frost$core$String* $tmp2127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2113, $tmp2125);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2128 = *(&local6);
frost$core$String** $tmp2129 = &$tmp2128->name;
frost$core$String* $tmp2130 = *$tmp2129;
frost$core$String* $tmp2131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2132, $tmp2130);
frost$core$String* $tmp2133 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2131, &$s2134);
frost$core$Int64 $tmp2135 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp2136;
$tmp2136 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2136->value = $tmp2135;
frost$core$String* $tmp2137 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2133, ((frost$core$Object*) $tmp2136));
frost$core$String* $tmp2138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2137, &$s2139);
frost$core$String* $tmp2140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2127, $tmp2138);
frost$core$String* $tmp2141 = *(&local7);
frost$core$String* $tmp2142 = frost$core$String$get_asString$R$frost$core$String($tmp2141);
frost$core$String* $tmp2143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2142, &$s2144);
frost$core$String* $tmp2145 = *(&local4);
frost$core$String* $tmp2146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2143, $tmp2145);
frost$core$String* $tmp2147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2146, &$s2148);
frost$core$String* $tmp2149 = org$frostlang$frostc$CCodeGenerator$getITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp2150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2147, $tmp2149);
frost$core$String* $tmp2151 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2150, &$s2152);
frost$core$String* $tmp2153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2140, $tmp2151);
frost$core$MutableString$init$frost$core$String($tmp2105, $tmp2153);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
frost$core$MutableString* $tmp2154 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
*(&local8) = $tmp2105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
// line 608
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2155));
frost$core$String* $tmp2156 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
*(&local9) = &$s2157;
// line 609
frost$collections$ListView* $tmp2158 = *(&local3);
ITable* $tmp2159 = ((frost$collections$Iterable*) $tmp2158)->$class->itable;
while ($tmp2159->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2159 = $tmp2159->next;
}
$fn2161 $tmp2160 = $tmp2159->methods[0];
frost$collections$Iterator* $tmp2162 = $tmp2160(((frost$collections$Iterable*) $tmp2158));
goto block12;
block12:;
ITable* $tmp2163 = $tmp2162->$class->itable;
while ($tmp2163->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2163 = $tmp2163->next;
}
$fn2165 $tmp2164 = $tmp2163->methods[0];
frost$core$Bit $tmp2166 = $tmp2164($tmp2162);
bool $tmp2167 = $tmp2166.value;
if ($tmp2167) goto block14; else goto block13;
block13:;
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp2168 = $tmp2162->$class->itable;
while ($tmp2168->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2168 = $tmp2168->next;
}
$fn2170 $tmp2169 = $tmp2168->methods[1];
frost$core$Object* $tmp2171 = $tmp2169($tmp2162);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2171)));
org$frostlang$frostc$MethodDecl* $tmp2172 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) $tmp2171);
// line 610
frost$core$MutableString* $tmp2173 = *(&local8);
frost$core$String* $tmp2174 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp2173, $tmp2174);
// line 611
org$frostlang$frostc$MethodDecl* $tmp2175 = *(&local10);
org$frostlang$frostc$Annotations** $tmp2176 = &$tmp2175->annotations;
org$frostlang$frostc$Annotations* $tmp2177 = *$tmp2176;
frost$core$Bit $tmp2178 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp2177);
bool $tmp2179 = $tmp2178.value;
if ($tmp2179) goto block15; else goto block17;
block15:;
// line 612
frost$core$MutableString* $tmp2180 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp2180, &$s2181);
goto block16;
block17:;
// line 1
// line 615
frost$core$MutableString* $tmp2182 = *(&local8);
org$frostlang$frostc$MethodDecl* $tmp2183 = *(&local10);
frost$core$String* $tmp2184 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp2183);
frost$core$MutableString$append$frost$core$String($tmp2182, $tmp2184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
goto block16;
block16:;
// line 617
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2185));
frost$core$String* $tmp2186 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
*(&local9) = &$s2187;
frost$core$Frost$unref$frost$core$Object$Q($tmp2171);
org$frostlang$frostc$MethodDecl* $tmp2188 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
// line 619
frost$core$MutableString* $tmp2189 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp2189, &$s2190);
// line 620
frost$io$MemoryOutputStream** $tmp2191 = &param0->types;
frost$io$MemoryOutputStream* $tmp2192 = *$tmp2191;
frost$core$MutableString* $tmp2193 = *(&local8);
frost$core$String* $tmp2194 = frost$core$MutableString$finish$R$frost$core$String($tmp2193);
$fn2196 $tmp2195 = ($fn2196) ((frost$io$OutputStream*) $tmp2192)->$class->vtable[19];
frost$core$Error* $tmp2197 = $tmp2195(((frost$io$OutputStream*) $tmp2192), $tmp2194);
if ($tmp2197 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
*(&local0) = $tmp2197;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
frost$core$String* $tmp2198 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2199 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2200 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2201 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2202 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
*(&local4) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp2203 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2203));
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp2204 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2205 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
// line 621
frost$core$Weak** $tmp2206 = &param0->compiler;
frost$core$Weak* $tmp2207 = *$tmp2206;
frost$core$Object* $tmp2208 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2207);
frost$collections$Stack** $tmp2209 = &((org$frostlang$frostc$Compiler*) $tmp2208)->currentClass;
frost$collections$Stack* $tmp2210 = *$tmp2209;
frost$core$Int64 $tmp2211 = (frost$core$Int64) {0};
frost$core$Object* $tmp2212 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2210, $tmp2211);
bool $tmp2213 = ((org$frostlang$frostc$ClassDecl*) $tmp2212) == param1;
frost$core$Bit $tmp2214 = frost$core$Bit$init$builtin_bit($tmp2213);
bool $tmp2215 = $tmp2214.value;
if ($tmp2215) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp2216 = (frost$core$Int64) {621};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2217, $tmp2216);
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2212);
frost$core$Frost$unref$frost$core$Object$Q($tmp2208);
// line 622
frost$core$Weak** $tmp2218 = &param0->compiler;
frost$core$Weak* $tmp2219 = *$tmp2218;
frost$core$Object* $tmp2220 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2219);
frost$collections$Stack** $tmp2221 = &((org$frostlang$frostc$Compiler*) $tmp2220)->currentClass;
frost$collections$Stack* $tmp2222 = *$tmp2221;
frost$core$Object* $tmp2223 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2222);
frost$core$Frost$unref$frost$core$Object$Q($tmp2223);
frost$core$Frost$unref$frost$core$Object$Q($tmp2220);
frost$core$String* $tmp2224 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2225 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2226 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2227 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2228 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
*(&local4) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp2229 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp2230 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block4:;
// line 624
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2231 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2232 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp2233 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2231;
block1:;
// line 627
frost$core$Int64 $tmp2234 = (frost$core$Int64) {627};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2235, $tmp2234);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
*(&local0) = ((frost$core$Error*) NULL);
goto block22;
block22:;

}
org$frostlang$frostc$CCodeGenerator$ClassConstant* org$frostlang$frostc$CCodeGenerator$getWrapperClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
frost$collections$ListView* local5 = NULL;
frost$collections$ListView* local6 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local7 = NULL;
frost$core$String* local8 = NULL;
frost$core$String* local9 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local10 = NULL;
frost$core$String* local11 = NULL;
frost$core$MutableString* local12 = NULL;
frost$core$String* local13 = NULL;
frost$core$Int64 local14;
// line 632
*(&local0) = ((frost$core$Error*) NULL);
// line 633
frost$core$String** $tmp2237 = &param1->name;
frost$core$String* $tmp2238 = *$tmp2237;
frost$core$String* $tmp2239 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2238);
frost$core$String* $tmp2240 = frost$core$String$get_asString$R$frost$core$String($tmp2239);
frost$core$String* $tmp2241 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2240, &$s2242);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
frost$core$String* $tmp2243 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2243));
*(&local1) = $tmp2241;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
// line 634
frost$collections$HashMap** $tmp2244 = &param0->classConstants;
frost$collections$HashMap* $tmp2245 = *$tmp2244;
frost$core$String* $tmp2246 = *(&local1);
frost$core$Object* $tmp2247 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2245, ((frost$collections$Key*) $tmp2246));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2247)));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2248 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2247);
frost$core$Frost$unref$frost$core$Object$Q($tmp2247);
// line 635
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2249 = *(&local2);
frost$core$Bit $tmp2250 = frost$core$Bit$init$builtin_bit($tmp2249 == NULL);
bool $tmp2251 = $tmp2250.value;
if ($tmp2251) goto block3; else goto block4;
block3:;
// line 636
frost$core$Bit $tmp2252 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, param1);
bool $tmp2253 = $tmp2252.value;
if ($tmp2253) goto block5; else goto block7;
block5:;
// line 637
org$frostlang$frostc$Type* $tmp2254 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp2255 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp2254);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
// line 638
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2256));
frost$core$String* $tmp2257 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2257));
*(&local3) = &$s2258;
// line 639
frost$io$MemoryOutputStream** $tmp2259 = &param0->types;
frost$io$MemoryOutputStream* $tmp2260 = *$tmp2259;
frost$core$String* $tmp2261 = *(&local1);
frost$core$String* $tmp2262 = frost$core$String$get_asString$R$frost$core$String($tmp2261);
frost$core$String* $tmp2263 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2262, &$s2264);
frost$core$String* $tmp2265 = *(&local3);
frost$core$String* $tmp2266 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2263, $tmp2265);
frost$core$String* $tmp2267 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2266, &$s2268);
$fn2270 $tmp2269 = ($fn2270) ((frost$io$OutputStream*) $tmp2260)->$class->vtable[19];
frost$core$Error* $tmp2271 = $tmp2269(((frost$io$OutputStream*) $tmp2260), $tmp2267);
if ($tmp2271 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
*(&local0) = $tmp2271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
frost$core$String* $tmp2272 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2273 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2274 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2274));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
// line 640
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2275 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
frost$core$String* $tmp2276 = *(&local1);
frost$core$String* $tmp2277 = *(&local3);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2275, $tmp2276, $tmp2277);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2278 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
*(&local2) = $tmp2275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
frost$core$String* $tmp2279 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block7:;
// line 1
// line 643
frost$core$Weak** $tmp2280 = &param0->compiler;
frost$core$Weak* $tmp2281 = *$tmp2280;
frost$core$Object* $tmp2282 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2281);
org$frostlang$frostc$Type* $tmp2283 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2284 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2282), $tmp2283);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2284));
org$frostlang$frostc$ClassDecl* $tmp2285 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
*(&local4) = $tmp2284;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
frost$core$Frost$unref$frost$core$Object$Q($tmp2282);
// line 644
frost$core$Weak** $tmp2286 = &param0->compiler;
frost$core$Weak* $tmp2287 = *$tmp2286;
frost$core$Object* $tmp2288 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2287);
org$frostlang$frostc$ClassDecl* $tmp2289 = *(&local4);
frost$collections$ListView* $tmp2290 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2288), $tmp2289);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
frost$collections$ListView* $tmp2291 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
*(&local5) = $tmp2290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
frost$core$Frost$unref$frost$core$Object$Q($tmp2288);
// line 645
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2292 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
frost$core$String** $tmp2293 = &param1->name;
frost$core$String* $tmp2294 = *$tmp2293;
frost$core$String* $tmp2295 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2294);
frost$core$String* $tmp2296 = frost$core$String$get_asString$R$frost$core$String($tmp2295);
frost$core$String* $tmp2297 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2296, &$s2298);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2292, $tmp2297, &$s2299);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2300 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
*(&local2) = $tmp2292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
// line 646
frost$core$Weak** $tmp2301 = &param0->compiler;
frost$core$Weak* $tmp2302 = *$tmp2301;
frost$core$Object* $tmp2303 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2302);
frost$collections$ListView* $tmp2304 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2303), param1);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
frost$collections$ListView* $tmp2305 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
*(&local6) = $tmp2304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
frost$core$Frost$unref$frost$core$Object$Q($tmp2303);
// line 647
frost$core$Weak** $tmp2306 = &param0->compiler;
frost$core$Weak* $tmp2307 = *$tmp2306;
frost$core$Object* $tmp2308 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2307);
org$frostlang$frostc$Type** $tmp2309 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp2310 = *$tmp2309;
org$frostlang$frostc$ClassDecl* $tmp2311 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2308), $tmp2310);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2312 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2311);
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2313 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
*(&local7) = $tmp2312;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
frost$core$Frost$unref$frost$core$Object$Q($tmp2308);
// line 648
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2314 = *(&local7);
frost$core$String** $tmp2315 = &$tmp2314->name;
frost$core$String* $tmp2316 = *$tmp2315;
frost$core$String* $tmp2317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2318, $tmp2316);
frost$core$String* $tmp2319 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2317, &$s2320);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2319));
frost$core$String* $tmp2321 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
*(&local8) = $tmp2319;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
// line 649
frost$core$String* $tmp2322 = org$frostlang$frostc$CCodeGenerator$getWrapperITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(param0, param1);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
frost$core$String* $tmp2323 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2323));
*(&local9) = $tmp2322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
// line 650
frost$core$Weak** $tmp2324 = &param0->compiler;
frost$core$Weak* $tmp2325 = *$tmp2324;
frost$core$Object* $tmp2326 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2325);
org$frostlang$frostc$Type* $tmp2327 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2328 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2326), $tmp2327);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2329 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2328);
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2330 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
*(&local10) = $tmp2329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
frost$core$Frost$unref$frost$core$Object$Q($tmp2326);
// line 651
frost$core$String** $tmp2331 = &param1->name;
frost$core$String* $tmp2332 = *$tmp2331;
frost$core$String* $tmp2333 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp2332);
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
frost$core$String* $tmp2334 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2334));
*(&local11) = $tmp2333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
// line 652
frost$core$String* $tmp2335 = *(&local11);
frost$core$Bit $tmp2336 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2335, &$s2337);
bool $tmp2338 = $tmp2336.value;
if ($tmp2338) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2339 = (frost$core$Int64) {652};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2340, $tmp2339);
abort(); // unreachable
block10:;
// line 653
frost$core$MutableString* $tmp2341 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp2342 = *(&local11);
frost$core$Int64 $tmp2343 = (frost$core$Int64) {1};
frost$core$Bit $tmp2344 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp2345 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp2343, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp2344);
frost$core$String* $tmp2346 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp2342, $tmp2345);
frost$core$String* $tmp2347 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2348, $tmp2346);
frost$core$String* $tmp2349 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2347, &$s2350);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2351 = *(&local2);
frost$core$String** $tmp2352 = &$tmp2351->name;
frost$core$String* $tmp2353 = *$tmp2352;
frost$core$String* $tmp2354 = frost$core$String$get_asString$R$frost$core$String($tmp2353);
frost$core$String* $tmp2355 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2354, &$s2356);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2357 = *(&local2);
frost$core$String** $tmp2358 = &$tmp2357->name;
frost$core$String* $tmp2359 = *$tmp2358;
frost$core$String* $tmp2360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2355, $tmp2359);
frost$core$String* $tmp2361 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2360, &$s2362);
frost$core$String* $tmp2363 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2349, $tmp2361);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2364 = *(&local10);
frost$core$String** $tmp2365 = &$tmp2364->name;
frost$core$String* $tmp2366 = *$tmp2365;
frost$core$String* $tmp2367 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2368, $tmp2366);
frost$core$String* $tmp2369 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2367, &$s2370);
frost$core$Int64 $tmp2371 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp2372;
$tmp2372 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2372->value = $tmp2371;
frost$core$String* $tmp2373 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2369, ((frost$core$Object*) $tmp2372));
frost$core$String* $tmp2374 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2373, &$s2375);
frost$core$String* $tmp2376 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2363, $tmp2374);
frost$core$String* $tmp2377 = *(&local11);
frost$core$String* $tmp2378 = frost$core$String$get_asString$R$frost$core$String($tmp2377);
frost$core$String* $tmp2379 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2378, &$s2380);
frost$core$String* $tmp2381 = *(&local8);
frost$core$String* $tmp2382 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2379, $tmp2381);
frost$core$String* $tmp2383 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2382, &$s2384);
frost$core$String* $tmp2385 = *(&local9);
frost$core$String* $tmp2386 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2383, $tmp2385);
frost$core$String* $tmp2387 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2386, &$s2388);
frost$core$String* $tmp2389 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2376, $tmp2387);
frost$core$MutableString$init$frost$core$String($tmp2341, $tmp2389);
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
frost$core$MutableString* $tmp2390 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
*(&local12) = $tmp2341;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
// line 657
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2391));
frost$core$String* $tmp2392 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
*(&local13) = &$s2393;
// line 658
frost$core$Int64 $tmp2394 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2395 = *(&local5);
ITable* $tmp2396 = ((frost$collections$CollectionView*) $tmp2395)->$class->itable;
while ($tmp2396->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2396 = $tmp2396->next;
}
$fn2398 $tmp2397 = $tmp2396->methods[0];
frost$core$Int64 $tmp2399 = $tmp2397(((frost$collections$CollectionView*) $tmp2395));
frost$core$Bit $tmp2400 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2401 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2394, $tmp2399, $tmp2400);
frost$core$Int64 $tmp2402 = $tmp2401.min;
*(&local14) = $tmp2402;
frost$core$Int64 $tmp2403 = $tmp2401.max;
frost$core$Bit $tmp2404 = $tmp2401.inclusive;
bool $tmp2405 = $tmp2404.value;
frost$core$Int64 $tmp2406 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2407 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2406);
if ($tmp2405) goto block15; else goto block16;
block15:;
int64_t $tmp2408 = $tmp2402.value;
int64_t $tmp2409 = $tmp2403.value;
bool $tmp2410 = $tmp2408 <= $tmp2409;
frost$core$Bit $tmp2411 = (frost$core$Bit) {$tmp2410};
bool $tmp2412 = $tmp2411.value;
if ($tmp2412) goto block12; else goto block13;
block16:;
int64_t $tmp2413 = $tmp2402.value;
int64_t $tmp2414 = $tmp2403.value;
bool $tmp2415 = $tmp2413 < $tmp2414;
frost$core$Bit $tmp2416 = (frost$core$Bit) {$tmp2415};
bool $tmp2417 = $tmp2416.value;
if ($tmp2417) goto block12; else goto block13;
block12:;
// line 659
frost$core$MutableString* $tmp2418 = *(&local12);
frost$core$String* $tmp2419 = *(&local13);
frost$core$String* $tmp2420 = frost$core$String$get_asString$R$frost$core$String($tmp2419);
frost$core$String* $tmp2421 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2420, &$s2422);
frost$collections$ListView* $tmp2423 = *(&local6);
frost$core$Int64 $tmp2424 = *(&local14);
ITable* $tmp2425 = $tmp2423->$class->itable;
while ($tmp2425->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2425 = $tmp2425->next;
}
$fn2427 $tmp2426 = $tmp2425->methods[0];
frost$core$Object* $tmp2428 = $tmp2426($tmp2423, $tmp2424);
frost$core$String* $tmp2429 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, ((org$frostlang$frostc$MethodDecl*) $tmp2428));
frost$core$String* $tmp2430 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2421, $tmp2429);
frost$core$String* $tmp2431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2430, &$s2432);
frost$core$MutableString$append$frost$core$String($tmp2418, $tmp2431);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2429));
frost$core$Frost$unref$frost$core$Object$Q($tmp2428);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
// line 660
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2433));
frost$core$String* $tmp2434 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
*(&local13) = &$s2435;
goto block14;
block14:;
frost$core$Int64 $tmp2436 = *(&local14);
int64_t $tmp2437 = $tmp2403.value;
int64_t $tmp2438 = $tmp2436.value;
int64_t $tmp2439 = $tmp2437 - $tmp2438;
frost$core$Int64 $tmp2440 = (frost$core$Int64) {$tmp2439};
frost$core$UInt64 $tmp2441 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2440);
if ($tmp2405) goto block18; else goto block19;
block18:;
uint64_t $tmp2442 = $tmp2441.value;
uint64_t $tmp2443 = $tmp2407.value;
bool $tmp2444 = $tmp2442 >= $tmp2443;
frost$core$Bit $tmp2445 = (frost$core$Bit) {$tmp2444};
bool $tmp2446 = $tmp2445.value;
if ($tmp2446) goto block17; else goto block13;
block19:;
uint64_t $tmp2447 = $tmp2441.value;
uint64_t $tmp2448 = $tmp2407.value;
bool $tmp2449 = $tmp2447 > $tmp2448;
frost$core$Bit $tmp2450 = (frost$core$Bit) {$tmp2449};
bool $tmp2451 = $tmp2450.value;
if ($tmp2451) goto block17; else goto block13;
block17:;
int64_t $tmp2452 = $tmp2436.value;
int64_t $tmp2453 = $tmp2406.value;
int64_t $tmp2454 = $tmp2452 + $tmp2453;
frost$core$Int64 $tmp2455 = (frost$core$Int64) {$tmp2454};
*(&local14) = $tmp2455;
goto block12;
block13:;
// line 662
frost$core$MutableString* $tmp2456 = *(&local12);
frost$core$MutableString$append$frost$core$String($tmp2456, &$s2457);
// line 663
frost$io$MemoryOutputStream** $tmp2458 = &param0->types;
frost$io$MemoryOutputStream* $tmp2459 = *$tmp2458;
frost$core$MutableString* $tmp2460 = *(&local12);
frost$core$String* $tmp2461 = frost$core$MutableString$finish$R$frost$core$String($tmp2460);
$fn2463 $tmp2462 = ($fn2463) ((frost$io$OutputStream*) $tmp2459)->$class->vtable[17];
frost$core$Error* $tmp2464 = $tmp2462(((frost$io$OutputStream*) $tmp2459), $tmp2461);
if ($tmp2464 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
*(&local0) = $tmp2464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
frost$core$String* $tmp2465 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2465));
*(&local13) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2466 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2466));
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2467 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2468 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2469 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2469));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp2470 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2471 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$collections$ListView* $tmp2472 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp2473 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2474 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2475 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2476 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
frost$core$String* $tmp2477 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
*(&local13) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2478 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2478));
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2479 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2479));
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2480 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2481 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2481));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp2482 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2483 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$collections$ListView* $tmp2484 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp2485 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2485));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2486 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block6;
block6:;
// line 665
frost$collections$HashMap** $tmp2487 = &param0->classConstants;
frost$collections$HashMap* $tmp2488 = *$tmp2487;
frost$core$String* $tmp2489 = *(&local1);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2490 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2488, ((frost$collections$Key*) $tmp2489), ((frost$core$Object*) $tmp2490));
goto block4;
block4:;
// line 667
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2491 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2491));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2492 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2492));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2493 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2494 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2494));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2491;
block1:;
// line 670
frost$core$Int64 $tmp2495 = (frost$core$Int64) {670};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2496, $tmp2495);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2497 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
*(&local0) = ((frost$core$Error*) NULL);
goto block22;
block22:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$Variable$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Variable* param1) {

frost$core$String* local0 = NULL;
// line 675
org$frostlang$frostc$Variable$Storage** $tmp2498 = &param1->storage;
org$frostlang$frostc$Variable$Storage* $tmp2499 = *$tmp2498;
frost$core$Int64* $tmp2500 = &$tmp2499->$rawValue;
frost$core$Int64 $tmp2501 = *$tmp2500;
frost$core$Int64 $tmp2502 = (frost$core$Int64) {1};
frost$core$Bit $tmp2503 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2501, $tmp2502);
bool $tmp2504 = $tmp2503.value;
if ($tmp2504) goto block2; else goto block1;
block2:;
// line 677
frost$core$String** $tmp2505 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2506 = *$tmp2505;
frost$core$String* $tmp2507 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2508, $tmp2506);
frost$core$String* $tmp2509 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2507, &$s2510);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
return $tmp2509;
block1:;
// line 680
frost$collections$IdentityMap** $tmp2511 = &param0->variableNames;
frost$collections$IdentityMap* $tmp2512 = *$tmp2511;
frost$core$Object* $tmp2513 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp2512, ((frost$core$Object*) param1));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp2513)));
frost$core$String* $tmp2514 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
*(&local0) = ((frost$core$String*) $tmp2513);
frost$core$Frost$unref$frost$core$Object$Q($tmp2513);
// line 681
frost$core$String* $tmp2515 = *(&local0);
frost$core$Bit $tmp2516 = frost$core$Bit$init$builtin_bit($tmp2515 == NULL);
bool $tmp2517 = $tmp2516.value;
if ($tmp2517) goto block3; else goto block4;
block3:;
// line 682
frost$core$Int64* $tmp2518 = &param0->varCount;
frost$core$Int64 $tmp2519 = *$tmp2518;
frost$core$Int64 $tmp2520 = (frost$core$Int64) {1};
int64_t $tmp2521 = $tmp2519.value;
int64_t $tmp2522 = $tmp2520.value;
int64_t $tmp2523 = $tmp2521 + $tmp2522;
frost$core$Int64 $tmp2524 = (frost$core$Int64) {$tmp2523};
frost$core$Int64* $tmp2525 = &param0->varCount;
*$tmp2525 = $tmp2524;
// line 683
frost$core$String** $tmp2526 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2527 = *$tmp2526;
frost$core$String* $tmp2528 = frost$core$String$get_asString$R$frost$core$String($tmp2527);
frost$core$String* $tmp2529 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2528, &$s2530);
frost$core$Int64* $tmp2531 = &param0->varCount;
frost$core$Int64 $tmp2532 = *$tmp2531;
frost$core$Int64$wrapper* $tmp2533;
$tmp2533 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2533->value = $tmp2532;
frost$core$String* $tmp2534 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2529, ((frost$core$Object*) $tmp2533));
frost$core$String* $tmp2535 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2534, &$s2536);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
frost$core$String* $tmp2537 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
*(&local0) = $tmp2535;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
// line 684
frost$collections$IdentityMap** $tmp2538 = &param0->variableNames;
frost$collections$IdentityMap* $tmp2539 = *$tmp2538;
frost$core$String* $tmp2540 = *(&local0);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp2539, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp2540));
goto block4;
block4:;
// line 686
frost$core$String* $tmp2541 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2541));
frost$core$String* $tmp2542 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2542));
*(&local0) = ((frost$core$String*) NULL);
return $tmp2541;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$FieldDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$FieldDecl* param1) {

// line 690
org$frostlang$frostc$Annotations** $tmp2543 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2544 = *$tmp2543;
frost$core$Bit $tmp2545 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2544);
bool $tmp2546 = $tmp2545.value;
if ($tmp2546) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2547 = (frost$core$Int64) {690};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2548, $tmp2547);
abort(); // unreachable
block1:;
// line 691
frost$core$Weak** $tmp2549 = &param1->owner;
frost$core$Weak* $tmp2550 = *$tmp2549;
frost$core$Object* $tmp2551 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2550);
frost$core$String** $tmp2552 = &((org$frostlang$frostc$ClassDecl*) $tmp2551)->name;
frost$core$String* $tmp2553 = *$tmp2552;
frost$core$String* $tmp2554 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2553);
frost$core$String* $tmp2555 = frost$core$String$get_asString$R$frost$core$String($tmp2554);
frost$core$String* $tmp2556 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2555, &$s2557);
frost$core$String** $tmp2558 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2559 = *$tmp2558;
frost$core$String* $tmp2560 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2556, $tmp2559);
frost$core$String* $tmp2561 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2560, &$s2562);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2554));
frost$core$Frost$unref$frost$core$Object$Q($tmp2551);
return $tmp2561;

}
org$frostlang$frostc$CCodeGenerator$OpClass org$frostlang$frostc$CCodeGenerator$opClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$OpClass(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 702
org$frostlang$frostc$Type$Kind* $tmp2563 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp2564 = *$tmp2563;
frost$core$Int64 $tmp2565 = $tmp2564.$rawValue;
frost$core$Int64 $tmp2566 = (frost$core$Int64) {2};
frost$core$Bit $tmp2567 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2565, $tmp2566);
bool $tmp2568 = $tmp2567.value;
if ($tmp2568) goto block2; else goto block3;
block2:;
// line 704
frost$core$Int64 $tmp2569 = (frost$core$Int64) {0};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2570 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2569);
return $tmp2570;
block3:;
frost$core$Int64 $tmp2571 = (frost$core$Int64) {3};
frost$core$Bit $tmp2572 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2565, $tmp2571);
bool $tmp2573 = $tmp2572.value;
if ($tmp2573) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp2574 = (frost$core$Int64) {8};
frost$core$Bit $tmp2575 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2565, $tmp2574);
bool $tmp2576 = $tmp2575.value;
if ($tmp2576) goto block4; else goto block6;
block4:;
// line 707
frost$core$Int64 $tmp2577 = (frost$core$Int64) {1};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2578 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2577);
return $tmp2578;
block6:;
frost$core$Int64 $tmp2579 = (frost$core$Int64) {9};
frost$core$Bit $tmp2580 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2565, $tmp2579);
bool $tmp2581 = $tmp2580.value;
if ($tmp2581) goto block7; else goto block8;
block7:;
// line 710
frost$core$Int64 $tmp2582 = (frost$core$Int64) {2};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2583 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2582);
return $tmp2583;
block8:;
// line 713
frost$core$Int64 $tmp2584 = (frost$core$Int64) {3};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2585 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2584);
return $tmp2585;
block1:;
goto block9;
block9:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getBinaryReference$org$frostlang$frostc$Type$frost$core$String$org$frostlang$frostc$expression$Binary$Operator$frost$core$String$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2, org$frostlang$frostc$expression$Binary$Operator param3, frost$core$String* param4, frost$io$IndentedOutputStream* param5) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Bit local2;
frost$core$String* local3 = NULL;
// line 720
*(&local0) = ((frost$core$Error*) NULL);
// line 721
*(&local1) = ((frost$core$String*) NULL);
// line 722
frost$core$Bit $tmp2586 = frost$core$Bit$init$builtin_bit(false);
*(&local2) = $tmp2586;
// line 723
frost$core$Int64 $tmp2587 = param3.$rawValue;
frost$core$Int64 $tmp2588 = (frost$core$Int64) {0};
frost$core$Bit $tmp2589 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2588);
bool $tmp2590 = $tmp2589.value;
if ($tmp2590) goto block4; else goto block5;
block4:;
// line 725
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2591));
frost$core$String* $tmp2592 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
*(&local1) = &$s2593;
goto block3;
block5:;
frost$core$Int64 $tmp2594 = (frost$core$Int64) {1};
frost$core$Bit $tmp2595 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2594);
bool $tmp2596 = $tmp2595.value;
if ($tmp2596) goto block6; else goto block7;
block6:;
// line 728
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2597));
frost$core$String* $tmp2598 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
*(&local1) = &$s2599;
goto block3;
block7:;
frost$core$Int64 $tmp2600 = (frost$core$Int64) {2};
frost$core$Bit $tmp2601 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2600);
bool $tmp2602 = $tmp2601.value;
if ($tmp2602) goto block8; else goto block9;
block8:;
// line 731
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2603));
frost$core$String* $tmp2604 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
*(&local1) = &$s2605;
goto block3;
block9:;
frost$core$Int64 $tmp2606 = (frost$core$Int64) {4};
frost$core$Bit $tmp2607 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2606);
bool $tmp2608 = $tmp2607.value;
if ($tmp2608) goto block10; else goto block11;
block10:;
// line 734
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2609));
frost$core$String* $tmp2610 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
*(&local1) = &$s2611;
goto block3;
block11:;
frost$core$Int64 $tmp2612 = (frost$core$Int64) {3};
frost$core$Bit $tmp2613 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2612);
bool $tmp2614 = $tmp2613.value;
if ($tmp2614) goto block12; else goto block13;
block12:;
// line 737
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2615));
frost$core$String* $tmp2616 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
*(&local1) = &$s2617;
goto block3;
block13:;
frost$core$Int64 $tmp2618 = (frost$core$Int64) {5};
frost$core$Bit $tmp2619 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2618);
bool $tmp2620 = $tmp2619.value;
if ($tmp2620) goto block14; else goto block15;
block14:;
// line 740
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2621));
frost$core$String* $tmp2622 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2622));
*(&local1) = &$s2623;
goto block3;
block15:;
frost$core$Int64 $tmp2624 = (frost$core$Int64) {18};
frost$core$Bit $tmp2625 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2624);
bool $tmp2626 = $tmp2625.value;
if ($tmp2626) goto block16; else goto block17;
block16:;
// line 743
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2627));
frost$core$String* $tmp2628 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
*(&local1) = &$s2629;
goto block3;
block17:;
frost$core$Int64 $tmp2630 = (frost$core$Int64) {19};
frost$core$Bit $tmp2631 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2630);
bool $tmp2632 = $tmp2631.value;
if ($tmp2632) goto block18; else goto block19;
block18:;
// line 746
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2633));
frost$core$String* $tmp2634 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2634));
*(&local1) = &$s2635;
goto block3;
block19:;
frost$core$Int64 $tmp2636 = (frost$core$Int64) {15};
frost$core$Bit $tmp2637 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2636);
bool $tmp2638 = $tmp2637.value;
if ($tmp2638) goto block20; else goto block21;
block20:;
// line 749
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2639));
frost$core$String* $tmp2640 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
*(&local1) = &$s2641;
goto block3;
block21:;
frost$core$Int64 $tmp2642 = (frost$core$Int64) {13};
frost$core$Bit $tmp2643 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2642);
bool $tmp2644 = $tmp2643.value;
if ($tmp2644) goto block22; else goto block23;
block22:;
// line 752
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2645));
frost$core$String* $tmp2646 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
*(&local1) = &$s2647;
goto block3;
block23:;
frost$core$Int64 $tmp2648 = (frost$core$Int64) {16};
frost$core$Bit $tmp2649 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2648);
bool $tmp2650 = $tmp2649.value;
if ($tmp2650) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp2651 = (frost$core$Int64) {17};
frost$core$Bit $tmp2652 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2651);
bool $tmp2653 = $tmp2652.value;
if ($tmp2653) goto block24; else goto block26;
block24:;
// line 755
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2654));
frost$core$String* $tmp2655 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
*(&local1) = &$s2656;
goto block3;
block26:;
frost$core$Int64 $tmp2657 = (frost$core$Int64) {6};
frost$core$Bit $tmp2658 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2657);
bool $tmp2659 = $tmp2658.value;
if ($tmp2659) goto block27; else goto block28;
block27:;
// line 758
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2660));
frost$core$String* $tmp2661 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
*(&local1) = &$s2662;
// line 759
frost$core$Bit $tmp2663 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2663;
goto block3;
block28:;
frost$core$Int64 $tmp2664 = (frost$core$Int64) {7};
frost$core$Bit $tmp2665 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2664);
bool $tmp2666 = $tmp2665.value;
if ($tmp2666) goto block29; else goto block30;
block29:;
// line 762
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2667));
frost$core$String* $tmp2668 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
*(&local1) = &$s2669;
// line 763
frost$core$Bit $tmp2670 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2670;
goto block3;
block30:;
frost$core$Int64 $tmp2671 = (frost$core$Int64) {8};
frost$core$Bit $tmp2672 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2671);
bool $tmp2673 = $tmp2672.value;
if ($tmp2673) goto block31; else goto block32;
block31:;
// line 766
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2674));
frost$core$String* $tmp2675 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
*(&local1) = &$s2676;
// line 767
frost$core$Bit $tmp2677 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2677;
goto block3;
block32:;
frost$core$Int64 $tmp2678 = (frost$core$Int64) {9};
frost$core$Bit $tmp2679 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2678);
bool $tmp2680 = $tmp2679.value;
if ($tmp2680) goto block33; else goto block34;
block33:;
// line 770
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2681));
frost$core$String* $tmp2682 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
*(&local1) = &$s2683;
// line 771
frost$core$Bit $tmp2684 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2684;
goto block3;
block34:;
frost$core$Int64 $tmp2685 = (frost$core$Int64) {10};
frost$core$Bit $tmp2686 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2685);
bool $tmp2687 = $tmp2686.value;
if ($tmp2687) goto block35; else goto block36;
block35:;
// line 774
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2688));
frost$core$String* $tmp2689 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
*(&local1) = &$s2690;
// line 775
frost$core$Bit $tmp2691 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2691;
goto block3;
block36:;
frost$core$Int64 $tmp2692 = (frost$core$Int64) {11};
frost$core$Bit $tmp2693 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2587, $tmp2692);
bool $tmp2694 = $tmp2693.value;
if ($tmp2694) goto block37; else goto block38;
block37:;
// line 778
frost$core$Bit $tmp2695 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2695;
// line 779
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2696));
frost$core$String* $tmp2697 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
*(&local1) = &$s2698;
goto block3;
block38:;
// line 782
frost$core$Int64 $tmp2699 = (frost$core$Int64) {782};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2700, $tmp2699);
abort(); // unreachable
block3:;
// line 785
frost$core$String* $tmp2701 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
frost$core$String* $tmp2702 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
*(&local3) = $tmp2701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
// line 786
frost$core$Bit $tmp2703 = *(&local2);
bool $tmp2704 = $tmp2703.value;
if ($tmp2704) goto block39; else goto block41;
block39:;
// line 787
$fn2706 $tmp2705 = ($fn2706) ((frost$io$OutputStream*) param5)->$class->vtable[17];
frost$core$Error* $tmp2707 = $tmp2705(((frost$io$OutputStream*) param5), &$s2708);
if ($tmp2707 == NULL) goto block42; else goto block43;
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
*(&local0) = $tmp2707;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
frost$core$String* $tmp2709 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2710 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
goto block40;
block41:;
// line 1
// line 790
frost$core$String* $tmp2711 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp2712 = frost$core$String$get_asString$R$frost$core$String($tmp2711);
frost$core$String* $tmp2713 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2712, &$s2714);
$fn2716 $tmp2715 = ($fn2716) ((frost$io$OutputStream*) param5)->$class->vtable[17];
frost$core$Error* $tmp2717 = $tmp2715(((frost$io$OutputStream*) param5), $tmp2713);
if ($tmp2717 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
*(&local0) = $tmp2717;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2711));
frost$core$String* $tmp2718 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2719 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2711));
goto block40;
block40:;
// line 792
frost$core$String* $tmp2720 = *(&local3);
frost$core$String* $tmp2721 = frost$core$String$get_asString$R$frost$core$String($tmp2720);
frost$core$String* $tmp2722 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2721, &$s2723);
frost$core$String* $tmp2724 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2722, param2);
frost$core$String* $tmp2725 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2724, &$s2726);
frost$core$String* $tmp2727 = *(&local1);
frost$core$String* $tmp2728 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2725, $tmp2727);
frost$core$String* $tmp2729 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2728, &$s2730);
frost$core$String* $tmp2731 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2729, param4);
frost$core$String* $tmp2732 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2731, &$s2733);
$fn2735 $tmp2734 = ($fn2735) ((frost$io$OutputStream*) param5)->$class->vtable[19];
frost$core$Error* $tmp2736 = $tmp2734(((frost$io$OutputStream*) param5), $tmp2732);
if ($tmp2736 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
*(&local0) = $tmp2736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
frost$core$String* $tmp2737 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2738 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
// line 793
frost$core$String* $tmp2739 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2739));
frost$core$String* $tmp2740 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2741 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2741));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2742 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2739;
block1:;
// line 796
frost$core$Int64 $tmp2743 = (frost$core$Int64) {796};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2744, $tmp2743);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2745 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
*(&local0) = ((frost$core$Error*) NULL);
goto block48;
block48:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$MethodDecl* param2, frost$io$IndentedOutputStream* param3) {

org$frostlang$frostc$CCodeGenerator$ClassConstant* local0 = NULL;
frost$core$Int64 local1;
frost$collections$ListView* local2 = NULL;
frost$core$Int64 local3;
// line 801
frost$core$Weak** $tmp2746 = &param2->owner;
frost$core$Weak* $tmp2747 = *$tmp2746;
frost$core$Object* $tmp2748 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2747);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2749 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, ((org$frostlang$frostc$ClassDecl*) $tmp2748));
*(&local0) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2750 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2750));
*(&local0) = $tmp2749;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
frost$core$Frost$unref$frost$core$Object$Q($tmp2748);
// line 802
frost$core$Int64 $tmp2751 = (frost$core$Int64) {18446744073709551615};
*(&local1) = $tmp2751;
// line 803
frost$core$Weak** $tmp2752 = &param0->compiler;
frost$core$Weak* $tmp2753 = *$tmp2752;
frost$core$Object* $tmp2754 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2753);
frost$core$Weak** $tmp2755 = &param2->owner;
frost$core$Weak* $tmp2756 = *$tmp2755;
frost$core$Object* $tmp2757 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2756);
frost$collections$ListView* $tmp2758 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2754), ((org$frostlang$frostc$ClassDecl*) $tmp2757));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
frost$collections$ListView* $tmp2759 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
*(&local2) = $tmp2758;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
frost$core$Frost$unref$frost$core$Object$Q($tmp2757);
frost$core$Frost$unref$frost$core$Object$Q($tmp2754);
// line 804
frost$core$Int64 $tmp2760 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2761 = *(&local2);
ITable* $tmp2762 = ((frost$collections$CollectionView*) $tmp2761)->$class->itable;
while ($tmp2762->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2762 = $tmp2762->next;
}
$fn2764 $tmp2763 = $tmp2762->methods[0];
frost$core$Int64 $tmp2765 = $tmp2763(((frost$collections$CollectionView*) $tmp2761));
frost$core$Bit $tmp2766 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2767 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2760, $tmp2765, $tmp2766);
frost$core$Int64 $tmp2768 = $tmp2767.min;
*(&local3) = $tmp2768;
frost$core$Int64 $tmp2769 = $tmp2767.max;
frost$core$Bit $tmp2770 = $tmp2767.inclusive;
bool $tmp2771 = $tmp2770.value;
frost$core$Int64 $tmp2772 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2773 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2772);
if ($tmp2771) goto block4; else goto block5;
block4:;
int64_t $tmp2774 = $tmp2768.value;
int64_t $tmp2775 = $tmp2769.value;
bool $tmp2776 = $tmp2774 <= $tmp2775;
frost$core$Bit $tmp2777 = (frost$core$Bit) {$tmp2776};
bool $tmp2778 = $tmp2777.value;
if ($tmp2778) goto block1; else goto block2;
block5:;
int64_t $tmp2779 = $tmp2768.value;
int64_t $tmp2780 = $tmp2769.value;
bool $tmp2781 = $tmp2779 < $tmp2780;
frost$core$Bit $tmp2782 = (frost$core$Bit) {$tmp2781};
bool $tmp2783 = $tmp2782.value;
if ($tmp2783) goto block1; else goto block2;
block1:;
// line 805
frost$collections$ListView* $tmp2784 = *(&local2);
frost$core$Int64 $tmp2785 = *(&local3);
ITable* $tmp2786 = $tmp2784->$class->itable;
while ($tmp2786->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2786 = $tmp2786->next;
}
$fn2788 $tmp2787 = $tmp2786->methods[0];
frost$core$Object* $tmp2789 = $tmp2787($tmp2784, $tmp2785);
bool $tmp2790 = ((org$frostlang$frostc$MethodDecl*) $tmp2789) == param2;
frost$core$Bit $tmp2791 = frost$core$Bit$init$builtin_bit($tmp2790);
bool $tmp2792 = $tmp2791.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2789);
if ($tmp2792) goto block6; else goto block7;
block6:;
// line 806
frost$core$Int64 $tmp2793 = *(&local3);
*(&local1) = $tmp2793;
// line 807
goto block2;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp2794 = *(&local3);
int64_t $tmp2795 = $tmp2769.value;
int64_t $tmp2796 = $tmp2794.value;
int64_t $tmp2797 = $tmp2795 - $tmp2796;
frost$core$Int64 $tmp2798 = (frost$core$Int64) {$tmp2797};
frost$core$UInt64 $tmp2799 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2798);
if ($tmp2771) goto block9; else goto block10;
block9:;
uint64_t $tmp2800 = $tmp2799.value;
uint64_t $tmp2801 = $tmp2773.value;
bool $tmp2802 = $tmp2800 >= $tmp2801;
frost$core$Bit $tmp2803 = (frost$core$Bit) {$tmp2802};
bool $tmp2804 = $tmp2803.value;
if ($tmp2804) goto block8; else goto block2;
block10:;
uint64_t $tmp2805 = $tmp2799.value;
uint64_t $tmp2806 = $tmp2773.value;
bool $tmp2807 = $tmp2805 > $tmp2806;
frost$core$Bit $tmp2808 = (frost$core$Bit) {$tmp2807};
bool $tmp2809 = $tmp2808.value;
if ($tmp2809) goto block8; else goto block2;
block8:;
int64_t $tmp2810 = $tmp2794.value;
int64_t $tmp2811 = $tmp2772.value;
int64_t $tmp2812 = $tmp2810 + $tmp2811;
frost$core$Int64 $tmp2813 = (frost$core$Int64) {$tmp2812};
*(&local3) = $tmp2813;
goto block1;
block2:;
// line 810
frost$core$Int64 $tmp2814 = *(&local1);
frost$core$Int64 $tmp2815 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2816 = $tmp2814.value;
int64_t $tmp2817 = $tmp2815.value;
bool $tmp2818 = $tmp2816 != $tmp2817;
frost$core$Bit $tmp2819 = (frost$core$Bit) {$tmp2818};
bool $tmp2820 = $tmp2819.value;
if ($tmp2820) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2821 = (frost$core$Int64) {810};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2822, $tmp2821);
abort(); // unreachable
block11:;
// line 811
frost$core$Weak** $tmp2823 = &param0->compiler;
frost$core$Weak* $tmp2824 = *$tmp2823;
frost$core$Object* $tmp2825 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2824);
org$frostlang$frostc$Type* $tmp2826 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp2825), param2);
frost$core$String* $tmp2827 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, $tmp2826, ((org$frostlang$frostc$Type*) NULL));
frost$core$String* $tmp2828 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2829, $tmp2827);
frost$core$String* $tmp2830 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2828, &$s2831);
frost$core$String* $tmp2832 = frost$core$String$get_asString$R$frost$core$String(param1);
frost$core$String* $tmp2833 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2832, &$s2834);
frost$core$Int64 $tmp2835 = *(&local1);
frost$core$Int64$wrapper* $tmp2836;
$tmp2836 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2836->value = $tmp2835;
frost$core$String* $tmp2837 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2833, ((frost$core$Object*) $tmp2836));
frost$core$String* $tmp2838 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2837, &$s2839);
frost$core$String* $tmp2840 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2830, $tmp2838);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
frost$core$Frost$unref$frost$core$Object$Q($tmp2825);
frost$collections$ListView* $tmp2841 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
*(&local2) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2842 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
*(&local0) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
return $tmp2840;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getInterfaceMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$MethodDecl* param2, frost$io$IndentedOutputStream* param3) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$Int64 local3;
frost$collections$ListView* local4 = NULL;
frost$core$Int64 local5;
frost$core$String* local6 = NULL;
frost$core$String* local7 = NULL;
// line 817
*(&local0) = ((frost$core$Error*) NULL);
// line 818
frost$core$Weak** $tmp2843 = &param2->owner;
frost$core$Weak* $tmp2844 = *$tmp2843;
frost$core$Object* $tmp2845 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2844);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2846 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, ((org$frostlang$frostc$ClassDecl*) $tmp2845));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2847 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
*(&local1) = $tmp2846;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
frost$core$Frost$unref$frost$core$Object$Q($tmp2845);
// line 819
frost$core$String* $tmp2848 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2848));
frost$core$String* $tmp2849 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2849));
*(&local2) = $tmp2848;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2848));
// line 820
frost$core$String* $tmp2850 = *(&local2);
frost$core$String* $tmp2851 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2852, $tmp2850);
frost$core$String* $tmp2853 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2851, &$s2854);
frost$core$String* $tmp2855 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2853, param1);
frost$core$String* $tmp2856 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2855, &$s2857);
$fn2859 $tmp2858 = ($fn2859) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2860 = $tmp2858(((frost$io$OutputStream*) param3), $tmp2856);
if ($tmp2860 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
*(&local0) = $tmp2860;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
frost$core$String* $tmp2861 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2862 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2862));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
// line 821
frost$core$String* $tmp2863 = *(&local2);
frost$core$String* $tmp2864 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2865, $tmp2863);
frost$core$String* $tmp2866 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2864, &$s2867);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2868 = *(&local1);
frost$core$String** $tmp2869 = &$tmp2868->name;
frost$core$String* $tmp2870 = *$tmp2869;
frost$core$String* $tmp2871 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2866, $tmp2870);
frost$core$String* $tmp2872 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2871, &$s2873);
$fn2875 $tmp2874 = ($fn2875) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2876 = $tmp2874(((frost$io$OutputStream*) param3), $tmp2872);
if ($tmp2876 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
*(&local0) = $tmp2876;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
frost$core$String* $tmp2877 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2877));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2878 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
// line 822
frost$core$Int64* $tmp2879 = &param3->level;
frost$core$Int64 $tmp2880 = *$tmp2879;
frost$core$Int64 $tmp2881 = (frost$core$Int64) {1};
int64_t $tmp2882 = $tmp2880.value;
int64_t $tmp2883 = $tmp2881.value;
int64_t $tmp2884 = $tmp2882 + $tmp2883;
frost$core$Int64 $tmp2885 = (frost$core$Int64) {$tmp2884};
frost$core$Int64* $tmp2886 = &param3->level;
*$tmp2886 = $tmp2885;
// line 823
frost$core$String* $tmp2887 = *(&local2);
frost$core$String* $tmp2888 = frost$core$String$get_asString$R$frost$core$String($tmp2887);
frost$core$String* $tmp2889 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2888, &$s2890);
frost$core$String* $tmp2891 = *(&local2);
frost$core$String* $tmp2892 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2889, $tmp2891);
frost$core$String* $tmp2893 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2892, &$s2894);
$fn2896 $tmp2895 = ($fn2896) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2897 = $tmp2895(((frost$io$OutputStream*) param3), $tmp2893);
if ($tmp2897 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
*(&local0) = $tmp2897;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2888));
frost$core$String* $tmp2898 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2899 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2888));
// line 824
frost$core$Int64* $tmp2900 = &param3->level;
frost$core$Int64 $tmp2901 = *$tmp2900;
frost$core$Int64 $tmp2902 = (frost$core$Int64) {1};
int64_t $tmp2903 = $tmp2901.value;
int64_t $tmp2904 = $tmp2902.value;
int64_t $tmp2905 = $tmp2903 - $tmp2904;
frost$core$Int64 $tmp2906 = (frost$core$Int64) {$tmp2905};
frost$core$Int64* $tmp2907 = &param3->level;
*$tmp2907 = $tmp2906;
// line 825
$fn2909 $tmp2908 = ($fn2909) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2910 = $tmp2908(((frost$io$OutputStream*) param3), &$s2911);
if ($tmp2910 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
*(&local0) = $tmp2910;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
frost$core$String* $tmp2912 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2913 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
// line 826
frost$core$Int64 $tmp2914 = (frost$core$Int64) {18446744073709551615};
*(&local3) = $tmp2914;
// line 827
frost$core$Weak** $tmp2915 = &param0->compiler;
frost$core$Weak* $tmp2916 = *$tmp2915;
frost$core$Object* $tmp2917 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2916);
frost$core$Weak** $tmp2918 = &param2->owner;
frost$core$Weak* $tmp2919 = *$tmp2918;
frost$core$Object* $tmp2920 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2919);
frost$collections$ListView* $tmp2921 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2917), ((org$frostlang$frostc$ClassDecl*) $tmp2920));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
frost$collections$ListView* $tmp2922 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
*(&local4) = $tmp2921;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
frost$core$Frost$unref$frost$core$Object$Q($tmp2920);
frost$core$Frost$unref$frost$core$Object$Q($tmp2917);
// line 828
frost$core$Int64 $tmp2923 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2924 = *(&local4);
ITable* $tmp2925 = ((frost$collections$CollectionView*) $tmp2924)->$class->itable;
while ($tmp2925->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2925 = $tmp2925->next;
}
$fn2927 $tmp2926 = $tmp2925->methods[0];
frost$core$Int64 $tmp2928 = $tmp2926(((frost$collections$CollectionView*) $tmp2924));
frost$core$Bit $tmp2929 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2930 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2923, $tmp2928, $tmp2929);
frost$core$Int64 $tmp2931 = $tmp2930.min;
*(&local5) = $tmp2931;
frost$core$Int64 $tmp2932 = $tmp2930.max;
frost$core$Bit $tmp2933 = $tmp2930.inclusive;
bool $tmp2934 = $tmp2933.value;
frost$core$Int64 $tmp2935 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2936 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2935);
if ($tmp2934) goto block14; else goto block15;
block14:;
int64_t $tmp2937 = $tmp2931.value;
int64_t $tmp2938 = $tmp2932.value;
bool $tmp2939 = $tmp2937 <= $tmp2938;
frost$core$Bit $tmp2940 = (frost$core$Bit) {$tmp2939};
bool $tmp2941 = $tmp2940.value;
if ($tmp2941) goto block11; else goto block12;
block15:;
int64_t $tmp2942 = $tmp2931.value;
int64_t $tmp2943 = $tmp2932.value;
bool $tmp2944 = $tmp2942 < $tmp2943;
frost$core$Bit $tmp2945 = (frost$core$Bit) {$tmp2944};
bool $tmp2946 = $tmp2945.value;
if ($tmp2946) goto block11; else goto block12;
block11:;
// line 829
frost$collections$ListView* $tmp2947 = *(&local4);
frost$core$Int64 $tmp2948 = *(&local5);
ITable* $tmp2949 = $tmp2947->$class->itable;
while ($tmp2949->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2949 = $tmp2949->next;
}
$fn2951 $tmp2950 = $tmp2949->methods[0];
frost$core$Object* $tmp2952 = $tmp2950($tmp2947, $tmp2948);
bool $tmp2953 = ((org$frostlang$frostc$MethodDecl*) $tmp2952) == param2;
frost$core$Bit $tmp2954 = frost$core$Bit$init$builtin_bit($tmp2953);
bool $tmp2955 = $tmp2954.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2952);
if ($tmp2955) goto block16; else goto block17;
block16:;
// line 830
frost$core$Int64 $tmp2956 = *(&local5);
*(&local3) = $tmp2956;
// line 831
goto block12;
block17:;
goto block13;
block13:;
frost$core$Int64 $tmp2957 = *(&local5);
int64_t $tmp2958 = $tmp2932.value;
int64_t $tmp2959 = $tmp2957.value;
int64_t $tmp2960 = $tmp2958 - $tmp2959;
frost$core$Int64 $tmp2961 = (frost$core$Int64) {$tmp2960};
frost$core$UInt64 $tmp2962 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2961);
if ($tmp2934) goto block19; else goto block20;
block19:;
uint64_t $tmp2963 = $tmp2962.value;
uint64_t $tmp2964 = $tmp2936.value;
bool $tmp2965 = $tmp2963 >= $tmp2964;
frost$core$Bit $tmp2966 = (frost$core$Bit) {$tmp2965};
bool $tmp2967 = $tmp2966.value;
if ($tmp2967) goto block18; else goto block12;
block20:;
uint64_t $tmp2968 = $tmp2962.value;
uint64_t $tmp2969 = $tmp2936.value;
bool $tmp2970 = $tmp2968 > $tmp2969;
frost$core$Bit $tmp2971 = (frost$core$Bit) {$tmp2970};
bool $tmp2972 = $tmp2971.value;
if ($tmp2972) goto block18; else goto block12;
block18:;
int64_t $tmp2973 = $tmp2957.value;
int64_t $tmp2974 = $tmp2935.value;
int64_t $tmp2975 = $tmp2973 + $tmp2974;
frost$core$Int64 $tmp2976 = (frost$core$Int64) {$tmp2975};
*(&local5) = $tmp2976;
goto block11;
block12:;
// line 834
frost$core$Int64 $tmp2977 = *(&local3);
frost$core$Weak** $tmp2978 = &param0->compiler;
frost$core$Weak* $tmp2979 = *$tmp2978;
frost$core$Object* $tmp2980 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2979);
frost$core$Weak** $tmp2981 = &param0->compiler;
frost$core$Weak* $tmp2982 = *$tmp2981;
frost$core$Object* $tmp2983 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2982);
org$frostlang$frostc$Type* $tmp2984 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2985 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2983), $tmp2984);
frost$collections$ListView* $tmp2986 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2980), $tmp2985);
ITable* $tmp2987 = ((frost$collections$CollectionView*) $tmp2986)->$class->itable;
while ($tmp2987->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2987 = $tmp2987->next;
}
$fn2989 $tmp2988 = $tmp2987->methods[0];
frost$core$Int64 $tmp2990 = $tmp2988(((frost$collections$CollectionView*) $tmp2986));
int64_t $tmp2991 = $tmp2977.value;
int64_t $tmp2992 = $tmp2990.value;
int64_t $tmp2993 = $tmp2991 - $tmp2992;
frost$core$Int64 $tmp2994 = (frost$core$Int64) {$tmp2993};
*(&local3) = $tmp2994;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2984));
frost$core$Frost$unref$frost$core$Object$Q($tmp2983);
frost$core$Frost$unref$frost$core$Object$Q($tmp2980);
// line 835
frost$core$Int64 $tmp2995 = *(&local3);
frost$core$Int64 $tmp2996 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2997 = $tmp2995.value;
int64_t $tmp2998 = $tmp2996.value;
bool $tmp2999 = $tmp2997 != $tmp2998;
frost$core$Bit $tmp3000 = (frost$core$Bit) {$tmp2999};
bool $tmp3001 = $tmp3000.value;
if ($tmp3001) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp3002 = (frost$core$Int64) {835};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3003, $tmp3002);
abort(); // unreachable
block21:;
// line 836
frost$core$String* $tmp3004 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3004));
frost$core$String* $tmp3005 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3005));
*(&local6) = $tmp3004;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3004));
// line 837
frost$core$Weak** $tmp3006 = &param0->compiler;
frost$core$Weak* $tmp3007 = *$tmp3006;
frost$core$Object* $tmp3008 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3007);
org$frostlang$frostc$Type* $tmp3009 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp3008), param2);
frost$core$String* $tmp3010 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, $tmp3009, ((org$frostlang$frostc$Type*) NULL));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3010));
frost$core$String* $tmp3011 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
*(&local7) = $tmp3010;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3009));
frost$core$Frost$unref$frost$core$Object$Q($tmp3008);
// line 838
frost$core$String* $tmp3012 = *(&local7);
frost$core$String* $tmp3013 = frost$core$String$get_asString$R$frost$core$String($tmp3012);
frost$core$String* $tmp3014 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3013, &$s3015);
frost$core$String* $tmp3016 = *(&local6);
frost$core$String* $tmp3017 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3014, $tmp3016);
frost$core$String* $tmp3018 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3017, &$s3019);
frost$core$String* $tmp3020 = *(&local2);
frost$core$String* $tmp3021 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3018, $tmp3020);
frost$core$String* $tmp3022 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3021, &$s3023);
frost$core$Int64 $tmp3024 = *(&local3);
frost$core$Int64$wrapper* $tmp3025;
$tmp3025 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3025->value = $tmp3024;
frost$core$String* $tmp3026 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3022, ((frost$core$Object*) $tmp3025));
frost$core$String* $tmp3027 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3026, &$s3028);
$fn3030 $tmp3029 = ($fn3030) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp3031 = $tmp3029(((frost$io$OutputStream*) param3), $tmp3027);
if ($tmp3031 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
*(&local0) = $tmp3031;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
frost$core$String* $tmp3032 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3032));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp3033 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3033));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp3034 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp3035 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3035));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp3036 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
// line 839
frost$core$String* $tmp3037 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3037));
frost$core$String* $tmp3038 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp3039 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp3040 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp3041 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp3042 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp3043 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3043));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3037;
block1:;
// line 842
frost$core$Int64 $tmp3044 = (frost$core$Int64) {842};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3045, $tmp3044);
abort(); // unreachable
block2:;
frost$core$Error* $tmp3046 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
*(&local0) = ((frost$core$Error*) NULL);
goto block25;
block25:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getMethodReference$frost$core$String$Q$org$frostlang$frostc$MethodDecl$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$MethodDecl* param2, frost$core$Bit param3, frost$io$IndentedOutputStream* param4) {

// line 848
frost$core$Bit $tmp3047 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp3048 = $tmp3047.value;
if ($tmp3048) goto block4; else goto block3;
block4:;
frost$core$Bit $tmp3049 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit(param2);
bool $tmp3050 = $tmp3049.value;
if ($tmp3050) goto block1; else goto block3;
block1:;
// line 849
frost$core$Bit $tmp3051 = frost$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp3052 = $tmp3051.value;
if ($tmp3052) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp3053 = (frost$core$Int64) {849};
frost$core$String* $tmp3054 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param2);
frost$core$String* $tmp3055 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3056, $tmp3054);
frost$core$String* $tmp3057 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3055, &$s3058);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3059, $tmp3053, $tmp3057);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
abort(); // unreachable
block5:;
// line 850
frost$core$Weak** $tmp3060 = &param2->owner;
frost$core$Weak* $tmp3061 = *$tmp3060;
frost$core$Object* $tmp3062 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3061);
org$frostlang$frostc$ClassDecl$Kind* $tmp3063 = &((org$frostlang$frostc$ClassDecl*) $tmp3062)->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp3064 = *$tmp3063;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3065;
$tmp3065 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3065->value = $tmp3064;
frost$core$Int64 $tmp3066 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp3067 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp3066);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3068;
$tmp3068 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3068->value = $tmp3067;
ITable* $tmp3069 = ((frost$core$Equatable*) $tmp3065)->$class->itable;
while ($tmp3069->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3069 = $tmp3069->next;
}
$fn3071 $tmp3070 = $tmp3069->methods[0];
frost$core$Bit $tmp3072 = $tmp3070(((frost$core$Equatable*) $tmp3065), ((frost$core$Equatable*) $tmp3068));
bool $tmp3073 = $tmp3072.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3068)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3065)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3062);
if ($tmp3073) goto block7; else goto block9;
block7:;
// line 851
frost$core$String* $tmp3074 = org$frostlang$frostc$CCodeGenerator$getInterfaceMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
return $tmp3074;
block9:;
// line 1
// line 854
frost$core$String* $tmp3075 = org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
return $tmp3075;
block8:;
goto block2;
block3:;
// line 1
// line 858
frost$core$Weak** $tmp3076 = &param2->owner;
frost$core$Weak* $tmp3077 = *$tmp3076;
frost$core$Object* $tmp3078 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3077);
frost$core$Bit $tmp3079 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp3078));
bool $tmp3080 = $tmp3079.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3078);
if ($tmp3080) goto block10; else goto block11;
block10:;
// line 859
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param2);
goto block11;
block11:;
// line 861
frost$core$String* $tmp3081 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3081));
return $tmp3081;
block2:;
goto block12;
block12:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 866
*(&local0) = ((frost$core$Error*) NULL);
// line 867
org$frostlang$frostc$Type$Kind* $tmp3082 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3083 = *$tmp3082;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3084;
$tmp3084 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3084->value = $tmp3083;
frost$core$Int64 $tmp3085 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3086 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3085);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3087;
$tmp3087 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3087->value = $tmp3086;
ITable* $tmp3088 = ((frost$core$Equatable*) $tmp3084)->$class->itable;
while ($tmp3088->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3088 = $tmp3088->next;
}
$fn3090 $tmp3089 = $tmp3088->methods[0];
frost$core$Bit $tmp3091 = $tmp3089(((frost$core$Equatable*) $tmp3084), ((frost$core$Equatable*) $tmp3087));
bool $tmp3092 = $tmp3091.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3087)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3084)));
if ($tmp3092) goto block3; else goto block4;
block3:;
// line 869
frost$core$String* $tmp3093 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
frost$core$String* $tmp3094 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
*(&local1) = $tmp3093;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
// line 870
frost$core$String* $tmp3095 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3096 = frost$core$String$get_asString$R$frost$core$String($tmp3095);
frost$core$String* $tmp3097 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3096, &$s3098);
frost$core$String* $tmp3099 = *(&local1);
frost$core$String* $tmp3100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3097, $tmp3099);
frost$core$String* $tmp3101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3100, &$s3102);
$fn3104 $tmp3103 = ($fn3104) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3105 = $tmp3103(((frost$io$OutputStream*) param4), $tmp3101);
if ($tmp3105 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
*(&local0) = $tmp3105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
frost$core$String* $tmp3106 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
// line 871
frost$core$String* $tmp3107 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3108, param1);
frost$core$String* $tmp3109 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3107, &$s3110);
$fn3112 $tmp3111 = ($fn3112) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3113 = $tmp3111(((frost$io$OutputStream*) param4), $tmp3109);
if ($tmp3113 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
*(&local0) = $tmp3113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
frost$core$String* $tmp3114 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3114));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
// line 872
frost$core$Int64* $tmp3115 = &param4->level;
frost$core$Int64 $tmp3116 = *$tmp3115;
frost$core$Int64 $tmp3117 = (frost$core$Int64) {1};
int64_t $tmp3118 = $tmp3116.value;
int64_t $tmp3119 = $tmp3117.value;
int64_t $tmp3120 = $tmp3118 + $tmp3119;
frost$core$Int64 $tmp3121 = (frost$core$Int64) {$tmp3120};
frost$core$Int64* $tmp3122 = &param4->level;
*$tmp3122 = $tmp3121;
// line 873
org$frostlang$frostc$FixedArray** $tmp3123 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp3124 = *$tmp3123;
frost$core$Int64 $tmp3125 = (frost$core$Int64) {0};
frost$core$Object* $tmp3126 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3124, $tmp3125);
frost$core$String* $tmp3127 = org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, ((org$frostlang$frostc$Type*) $tmp3126), param4);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
frost$core$String* $tmp3128 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3128));
*(&local2) = $tmp3127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
frost$core$Frost$unref$frost$core$Object$Q($tmp3126);
// line 874
frost$core$String* $tmp3129 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp3130 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp3131 = *$tmp3130;
frost$core$Int64 $tmp3132 = (frost$core$Int64) {0};
frost$core$Object* $tmp3133 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3131, $tmp3132);
frost$core$String* $tmp3134 = org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, $tmp3129, ((org$frostlang$frostc$Type*) $tmp3133), param3, param4);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3134));
frost$core$String* $tmp3135 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3135));
*(&local3) = $tmp3134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3134));
frost$core$Frost$unref$frost$core$Object$Q($tmp3133);
// line 875
frost$core$String* $tmp3136 = *(&local1);
frost$core$String* $tmp3137 = frost$core$String$get_asString$R$frost$core$String($tmp3136);
frost$core$String* $tmp3138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3137, &$s3139);
frost$core$String* $tmp3140 = *(&local3);
frost$core$String* $tmp3141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3138, $tmp3140);
frost$core$String* $tmp3142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3141, &$s3143);
$fn3145 $tmp3144 = ($fn3145) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3146 = $tmp3144(((frost$io$OutputStream*) param4), $tmp3142);
if ($tmp3146 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
*(&local0) = $tmp3146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
frost$core$String* $tmp3147 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3148 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3148));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3149 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3149));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
// line 876
frost$core$Int64* $tmp3150 = &param4->level;
frost$core$Int64 $tmp3151 = *$tmp3150;
frost$core$Int64 $tmp3152 = (frost$core$Int64) {1};
int64_t $tmp3153 = $tmp3151.value;
int64_t $tmp3154 = $tmp3152.value;
int64_t $tmp3155 = $tmp3153 - $tmp3154;
frost$core$Int64 $tmp3156 = (frost$core$Int64) {$tmp3155};
frost$core$Int64* $tmp3157 = &param4->level;
*$tmp3157 = $tmp3156;
// line 877
$fn3159 $tmp3158 = ($fn3159) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3160 = $tmp3158(((frost$io$OutputStream*) param4), &$s3161);
if ($tmp3160 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
*(&local0) = $tmp3160;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
frost$core$String* $tmp3162 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3163 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3164 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
// line 878
$fn3166 $tmp3165 = ($fn3166) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3167 = $tmp3165(((frost$io$OutputStream*) param4), &$s3168);
if ($tmp3167 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3167));
*(&local0) = $tmp3167;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3167));
frost$core$String* $tmp3169 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3169));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3170 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3171 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3171));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3167));
// line 879
frost$core$Int64* $tmp3172 = &param4->level;
frost$core$Int64 $tmp3173 = *$tmp3172;
frost$core$Int64 $tmp3174 = (frost$core$Int64) {1};
int64_t $tmp3175 = $tmp3173.value;
int64_t $tmp3176 = $tmp3174.value;
int64_t $tmp3177 = $tmp3175 + $tmp3176;
frost$core$Int64 $tmp3178 = (frost$core$Int64) {$tmp3177};
frost$core$Int64* $tmp3179 = &param4->level;
*$tmp3179 = $tmp3178;
// line 880
frost$core$String* $tmp3180 = *(&local1);
frost$core$String* $tmp3181 = frost$core$String$get_asString$R$frost$core$String($tmp3180);
frost$core$String* $tmp3182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3181, &$s3183);
$fn3185 $tmp3184 = ($fn3185) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3186 = $tmp3184(((frost$io$OutputStream*) param4), $tmp3182);
if ($tmp3186 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
*(&local0) = $tmp3186;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3181));
frost$core$String* $tmp3187 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3188 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3188));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3189 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3181));
// line 881
frost$core$Int64* $tmp3190 = &param4->level;
frost$core$Int64 $tmp3191 = *$tmp3190;
frost$core$Int64 $tmp3192 = (frost$core$Int64) {1};
int64_t $tmp3193 = $tmp3191.value;
int64_t $tmp3194 = $tmp3192.value;
int64_t $tmp3195 = $tmp3193 - $tmp3194;
frost$core$Int64 $tmp3196 = (frost$core$Int64) {$tmp3195};
frost$core$Int64* $tmp3197 = &param4->level;
*$tmp3197 = $tmp3196;
// line 882
$fn3199 $tmp3198 = ($fn3199) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3200 = $tmp3198(((frost$io$OutputStream*) param4), &$s3201);
if ($tmp3200 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
*(&local0) = $tmp3200;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
frost$core$String* $tmp3202 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3202));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3203 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3203));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3204 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
// line 883
frost$core$String* $tmp3205 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
frost$core$String* $tmp3206 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3206));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3207 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3207));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3208 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3208));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3209 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3209));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3205;
block4:;
// line 885
frost$core$String* $tmp3210 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3210));
frost$core$String* $tmp3211 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3211));
*(&local4) = $tmp3210;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3210));
// line 886
frost$core$String* $tmp3212 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$String* $tmp3213 = frost$core$String$get_asString$R$frost$core$String($tmp3212);
frost$core$String* $tmp3214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3213, &$s3215);
frost$core$String* $tmp3216 = *(&local4);
frost$core$String* $tmp3217 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3214, $tmp3216);
frost$core$String* $tmp3218 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3217, &$s3219);
$fn3221 $tmp3220 = ($fn3221) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3222 = $tmp3220(((frost$io$OutputStream*) param4), $tmp3218);
if ($tmp3222 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
*(&local0) = $tmp3222;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
frost$core$String* $tmp3223 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
// line 887
org$frostlang$frostc$Type$Kind* $tmp3224 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3225 = *$tmp3224;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3226;
$tmp3226 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3226->value = $tmp3225;
frost$core$Int64 $tmp3227 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3228 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3227);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3229;
$tmp3229 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3229->value = $tmp3228;
ITable* $tmp3230 = ((frost$core$Equatable*) $tmp3226)->$class->itable;
while ($tmp3230->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3230 = $tmp3230->next;
}
$fn3232 $tmp3231 = $tmp3230->methods[0];
frost$core$Bit $tmp3233 = $tmp3231(((frost$core$Equatable*) $tmp3226), ((frost$core$Equatable*) $tmp3229));
bool $tmp3234 = $tmp3233.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3229)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3226)));
if ($tmp3234) goto block21; else goto block22;
block21:;
// line 888
frost$core$String* $tmp3235 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3236, param1);
frost$core$String* $tmp3237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3235, &$s3238);
$fn3240 $tmp3239 = ($fn3240) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3241 = $tmp3239(((frost$io$OutputStream*) param4), $tmp3237);
if ($tmp3241 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3241));
*(&local0) = $tmp3241;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
frost$core$String* $tmp3242 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3242));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
// line 889
frost$core$Int64* $tmp3243 = &param4->level;
frost$core$Int64 $tmp3244 = *$tmp3243;
frost$core$Int64 $tmp3245 = (frost$core$Int64) {1};
int64_t $tmp3246 = $tmp3244.value;
int64_t $tmp3247 = $tmp3245.value;
int64_t $tmp3248 = $tmp3246 + $tmp3247;
frost$core$Int64 $tmp3249 = (frost$core$Int64) {$tmp3248};
frost$core$Int64* $tmp3250 = &param4->level;
*$tmp3250 = $tmp3249;
goto block22;
block22:;
// line 891
frost$core$String* $tmp3251 = *(&local4);
frost$core$String* $tmp3252 = frost$core$String$get_asString$R$frost$core$String($tmp3251);
frost$core$String* $tmp3253 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3252, &$s3254);
frost$core$String* $tmp3255 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$String* $tmp3256 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3253, $tmp3255);
frost$core$String* $tmp3257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3256, &$s3258);
frost$core$Int64 $tmp3259 = org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param2);
frost$core$Int64$wrapper* $tmp3260;
$tmp3260 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3260->value = $tmp3259;
frost$core$String* $tmp3261 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3262, ((frost$core$Object*) $tmp3260));
frost$core$String* $tmp3263 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3261, &$s3264);
frost$core$String* $tmp3265 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3257, $tmp3263);
frost$core$String** $tmp3266 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp3267 = *$tmp3266;
frost$core$String* $tmp3268 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp3267);
frost$core$String* $tmp3269 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3270, $tmp3268);
frost$core$String* $tmp3271 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3269, &$s3272);
frost$core$String* $tmp3273 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3265, $tmp3271);
$fn3275 $tmp3274 = ($fn3275) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3276 = $tmp3274(((frost$io$OutputStream*) param4), $tmp3273);
if ($tmp3276 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3276));
*(&local0) = $tmp3276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
frost$core$String* $tmp3277 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3277));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
// line 894
frost$core$String* $tmp3278 = *(&local4);
frost$core$String* $tmp3279 = frost$core$String$get_asString$R$frost$core$String($tmp3278);
frost$core$String* $tmp3280 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3279, &$s3281);
frost$core$String* $tmp3282 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3280, param1);
frost$core$String* $tmp3283 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3282, &$s3284);
$fn3286 $tmp3285 = ($fn3286) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3287 = $tmp3285(((frost$io$OutputStream*) param4), $tmp3283);
if ($tmp3287 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3287));
*(&local0) = $tmp3287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3279));
frost$core$String* $tmp3288 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3288));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3279));
// line 895
org$frostlang$frostc$Type$Kind* $tmp3289 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3290 = *$tmp3289;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3291;
$tmp3291 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3291->value = $tmp3290;
frost$core$Int64 $tmp3292 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3293 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3292);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3294;
$tmp3294 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3294->value = $tmp3293;
ITable* $tmp3295 = ((frost$core$Equatable*) $tmp3291)->$class->itable;
while ($tmp3295->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3295 = $tmp3295->next;
}
$fn3297 $tmp3296 = $tmp3295->methods[0];
frost$core$Bit $tmp3298 = $tmp3296(((frost$core$Equatable*) $tmp3291), ((frost$core$Equatable*) $tmp3294));
bool $tmp3299 = $tmp3298.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3294)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3291)));
if ($tmp3299) goto block29; else goto block30;
block29:;
// line 896
frost$core$Int64* $tmp3300 = &param4->level;
frost$core$Int64 $tmp3301 = *$tmp3300;
frost$core$Int64 $tmp3302 = (frost$core$Int64) {1};
int64_t $tmp3303 = $tmp3301.value;
int64_t $tmp3304 = $tmp3302.value;
int64_t $tmp3305 = $tmp3303 - $tmp3304;
frost$core$Int64 $tmp3306 = (frost$core$Int64) {$tmp3305};
frost$core$Int64* $tmp3307 = &param4->level;
*$tmp3307 = $tmp3306;
// line 897
$fn3309 $tmp3308 = ($fn3309) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3310 = $tmp3308(((frost$io$OutputStream*) param4), &$s3311);
if ($tmp3310 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3310));
*(&local0) = $tmp3310;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3310));
frost$core$String* $tmp3312 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3312));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3310));
// line 898
$fn3314 $tmp3313 = ($fn3314) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3315 = $tmp3313(((frost$io$OutputStream*) param4), &$s3316);
if ($tmp3315 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3315));
*(&local0) = $tmp3315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3315));
frost$core$String* $tmp3317 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3317));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3315));
// line 899
frost$core$Int64* $tmp3318 = &param4->level;
frost$core$Int64 $tmp3319 = *$tmp3318;
frost$core$Int64 $tmp3320 = (frost$core$Int64) {1};
int64_t $tmp3321 = $tmp3319.value;
int64_t $tmp3322 = $tmp3320.value;
int64_t $tmp3323 = $tmp3321 + $tmp3322;
frost$core$Int64 $tmp3324 = (frost$core$Int64) {$tmp3323};
frost$core$Int64* $tmp3325 = &param4->level;
*$tmp3325 = $tmp3324;
// line 900
frost$core$String* $tmp3326 = *(&local4);
frost$core$String* $tmp3327 = frost$core$String$get_asString$R$frost$core$String($tmp3326);
frost$core$String* $tmp3328 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3327, &$s3329);
$fn3331 $tmp3330 = ($fn3331) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3332 = $tmp3330(((frost$io$OutputStream*) param4), $tmp3328);
if ($tmp3332 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3332));
*(&local0) = $tmp3332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3327));
frost$core$String* $tmp3333 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3333));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3327));
// line 901
frost$core$Int64* $tmp3334 = &param4->level;
frost$core$Int64 $tmp3335 = *$tmp3334;
frost$core$Int64 $tmp3336 = (frost$core$Int64) {1};
int64_t $tmp3337 = $tmp3335.value;
int64_t $tmp3338 = $tmp3336.value;
int64_t $tmp3339 = $tmp3337 - $tmp3338;
frost$core$Int64 $tmp3340 = (frost$core$Int64) {$tmp3339};
frost$core$Int64* $tmp3341 = &param4->level;
*$tmp3341 = $tmp3340;
// line 902
$fn3343 $tmp3342 = ($fn3343) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3344 = $tmp3342(((frost$io$OutputStream*) param4), &$s3345);
if ($tmp3344 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3344));
*(&local0) = $tmp3344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3344));
frost$core$String* $tmp3346 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3346));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3344));
goto block30;
block30:;
// line 904
frost$core$String* $tmp3347 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3348 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3349, $tmp3347);
frost$core$String* $tmp3350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3348, &$s3351);
frost$core$String* $tmp3352 = *(&local4);
frost$core$String* $tmp3353 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3350, $tmp3352);
frost$core$String* $tmp3354 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3353, &$s3355);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3347));
frost$core$String* $tmp3356 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3356));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3357 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3354;
block1:;
// line 907
frost$core$Int64 $tmp3358 = (frost$core$Int64) {907};
frost$core$Error* $tmp3359 = *(&local0);
$fn3361 $tmp3360 = ($fn3361) ((frost$core$Object*) $tmp3359)->$class->vtable[0];
frost$core$String* $tmp3362 = $tmp3360(((frost$core$Object*) $tmp3359));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3363, $tmp3358, $tmp3362);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3362));
abort(); // unreachable
block2:;
frost$core$Error* $tmp3364 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3364));
*(&local0) = ((frost$core$Error*) NULL);
goto block39;
block39:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 912
frost$core$String* $tmp3365 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3366 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3367, $tmp3365);
frost$core$String* $tmp3368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3366, &$s3369);
frost$core$String* $tmp3370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3368, param1);
frost$core$String* $tmp3371 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3370, &$s3372);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3371));
frost$core$String* $tmp3373 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3373));
*(&local0) = $tmp3371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3365));
// line 913
org$frostlang$frostc$Type$Kind* $tmp3374 = &param3->typeKind;
org$frostlang$frostc$Type$Kind $tmp3375 = *$tmp3374;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3376;
$tmp3376 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3376->value = $tmp3375;
frost$core$Int64 $tmp3377 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3378 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3377);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3379;
$tmp3379 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3379->value = $tmp3378;
ITable* $tmp3380 = ((frost$core$Equatable*) $tmp3376)->$class->itable;
while ($tmp3380->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3380 = $tmp3380->next;
}
$fn3382 $tmp3381 = $tmp3380->methods[0];
frost$core$Bit $tmp3383 = $tmp3381(((frost$core$Equatable*) $tmp3376), ((frost$core$Equatable*) $tmp3379));
bool $tmp3384 = $tmp3383.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3379)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3376)));
if ($tmp3384) goto block1; else goto block2;
block1:;
// line 915
org$frostlang$frostc$FixedArray** $tmp3385 = &param3->subtypes;
org$frostlang$frostc$FixedArray* $tmp3386 = *$tmp3385;
frost$core$Int64 $tmp3387 = (frost$core$Int64) {0};
frost$core$Object* $tmp3388 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3386, $tmp3387);
frost$core$String* $tmp3389 = org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, ((org$frostlang$frostc$Type*) $tmp3388), param4);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3389));
frost$core$String* $tmp3390 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3390));
*(&local1) = $tmp3389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3389));
frost$core$Frost$unref$frost$core$Object$Q($tmp3388);
// line 916
frost$core$String* $tmp3391 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp3392 = &param3->subtypes;
org$frostlang$frostc$FixedArray* $tmp3393 = *$tmp3392;
frost$core$Int64 $tmp3394 = (frost$core$Int64) {0};
frost$core$Object* $tmp3395 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3393, $tmp3394);
frost$core$String* $tmp3396 = org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, $tmp3391, ((org$frostlang$frostc$Type*) $tmp3395), param3, param4);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3396));
frost$core$String* $tmp3397 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3397));
*(&local2) = $tmp3396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3396));
frost$core$Frost$unref$frost$core$Object$Q($tmp3395);
// line 917
frost$core$String* $tmp3398 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3399, param1);
frost$core$String* $tmp3400 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3398, &$s3401);
frost$core$String* $tmp3402 = *(&local2);
frost$core$String* $tmp3403 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3400, $tmp3402);
frost$core$String* $tmp3404 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3403, &$s3405);
frost$core$String* $tmp3406 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3404, $tmp3406);
frost$core$String* $tmp3408 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3407, &$s3409);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3398));
frost$core$String* $tmp3410 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3410));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3411 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3411));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3412 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3412));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3408;
block2:;
// line 919
frost$core$String* $tmp3413 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3413));
frost$core$String* $tmp3414 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3414));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3413;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

// line 924
frost$core$String* $tmp3415 = org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3417, $tmp3415);
frost$core$String* $tmp3418 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3416, &$s3419);
frost$core$String* $tmp3420 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3418, param1);
frost$core$String* $tmp3421 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3420, &$s3422);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3415));
return $tmp3421;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

// line 929
frost$core$String* $tmp3423 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3424 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3425, $tmp3423);
frost$core$String* $tmp3426 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3424, &$s3427);
frost$core$String* $tmp3428 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3426, param1);
frost$core$String* $tmp3429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3428, &$s3430);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
return $tmp3429;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 933
frost$core$Bit $tmp3431 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param3);
bool $tmp3432 = $tmp3431.value;
if ($tmp3432) goto block1; else goto block3;
block1:;
// line 934
frost$core$Bit $tmp3433 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param2);
bool $tmp3434 = $tmp3433.value;
if ($tmp3434) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp3435 = (frost$core$Int64) {934};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3436, $tmp3435);
abort(); // unreachable
block4:;
// line 935
frost$core$String* $tmp3437 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3438 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3439, $tmp3437);
frost$core$String* $tmp3440 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3438, &$s3441);
frost$core$String* $tmp3442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3440, param1);
frost$core$String* $tmp3443 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3442, &$s3444);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3437));
return $tmp3443;
block3:;
// line 1
// line 938
frost$core$Weak** $tmp3445 = &param0->compiler;
frost$core$Weak* $tmp3446 = *$tmp3445;
frost$core$Object* $tmp3447 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3446);
org$frostlang$frostc$ClassDecl* $tmp3448 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3447), param2);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3448));
org$frostlang$frostc$ClassDecl* $tmp3449 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3449));
*(&local0) = $tmp3448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3448));
frost$core$Frost$unref$frost$core$Object$Q($tmp3447);
// line 939
org$frostlang$frostc$ClassDecl* $tmp3450 = *(&local0);
frost$core$Bit $tmp3451 = frost$core$Bit$init$builtin_bit($tmp3450 != NULL);
bool $tmp3452 = $tmp3451.value;
if ($tmp3452) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3453 = (frost$core$Int64) {939};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3454, $tmp3453);
abort(); // unreachable
block6:;
// line 940
frost$core$Weak** $tmp3455 = &param0->compiler;
frost$core$Weak* $tmp3456 = *$tmp3455;
frost$core$Object* $tmp3457 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3456);
org$frostlang$frostc$ClassDecl* $tmp3458 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3457), param3);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3458));
org$frostlang$frostc$ClassDecl* $tmp3459 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3459));
*(&local1) = $tmp3458;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3458));
frost$core$Frost$unref$frost$core$Object$Q($tmp3457);
// line 941
org$frostlang$frostc$ClassDecl* $tmp3460 = *(&local1);
frost$core$Bit $tmp3461 = frost$core$Bit$init$builtin_bit($tmp3460 != NULL);
bool $tmp3462 = $tmp3461.value;
if ($tmp3462) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3463 = (frost$core$Int64) {941};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3464, $tmp3463);
abort(); // unreachable
block8:;
// line 942
frost$core$Weak** $tmp3465 = &param0->compiler;
frost$core$Weak* $tmp3466 = *$tmp3465;
frost$core$Object* $tmp3467 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3466);
org$frostlang$frostc$ClassDecl* $tmp3468 = *(&local0);
frost$core$Bit $tmp3469 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3467), $tmp3468);
bool $tmp3470 = $tmp3469.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3467);
if ($tmp3470) goto block13; else goto block12;
block13:;
frost$core$Weak** $tmp3471 = &param0->compiler;
frost$core$Weak* $tmp3472 = *$tmp3471;
frost$core$Object* $tmp3473 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3472);
org$frostlang$frostc$ClassDecl* $tmp3474 = *(&local1);
frost$core$Bit $tmp3475 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3473), $tmp3474);
frost$core$Bit $tmp3476 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3475);
bool $tmp3477 = $tmp3476.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3473);
if ($tmp3477) goto block10; else goto block12;
block10:;
// line 943
frost$io$IndentedOutputStream** $tmp3478 = &param0->out;
frost$io$IndentedOutputStream* $tmp3479 = *$tmp3478;
frost$core$String* $tmp3480 = org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3479);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3480));
org$frostlang$frostc$ClassDecl* $tmp3481 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3482 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3482));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3480;
block12:;
// line 945
frost$core$Weak** $tmp3483 = &param0->compiler;
frost$core$Weak* $tmp3484 = *$tmp3483;
frost$core$Object* $tmp3485 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3484);
org$frostlang$frostc$ClassDecl* $tmp3486 = *(&local0);
frost$core$Bit $tmp3487 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3485), $tmp3486);
frost$core$Bit $tmp3488 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3487);
bool $tmp3489 = $tmp3488.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3485);
if ($tmp3489) goto block17; else goto block16;
block17:;
frost$core$Weak** $tmp3490 = &param0->compiler;
frost$core$Weak* $tmp3491 = *$tmp3490;
frost$core$Object* $tmp3492 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3491);
org$frostlang$frostc$ClassDecl* $tmp3493 = *(&local1);
frost$core$Bit $tmp3494 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3492), $tmp3493);
bool $tmp3495 = $tmp3494.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3492);
if ($tmp3495) goto block14; else goto block16;
block14:;
// line 946
frost$io$IndentedOutputStream** $tmp3496 = &param0->out;
frost$io$IndentedOutputStream* $tmp3497 = *$tmp3496;
frost$core$String* $tmp3498 = org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3497);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3498));
org$frostlang$frostc$ClassDecl* $tmp3499 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3499));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3500 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3500));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3498;
block16:;
// line 948
frost$core$Weak** $tmp3501 = &param0->compiler;
frost$core$Weak* $tmp3502 = *$tmp3501;
frost$core$Object* $tmp3503 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3502);
org$frostlang$frostc$ClassDecl* $tmp3504 = *(&local0);
frost$core$Bit $tmp3505 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3503), $tmp3504);
bool $tmp3506 = $tmp3505.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3503);
if ($tmp3506) goto block22; else goto block20;
block22:;
org$frostlang$frostc$Type$Kind* $tmp3507 = &param3->typeKind;
org$frostlang$frostc$Type$Kind $tmp3508 = *$tmp3507;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3509;
$tmp3509 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3509->value = $tmp3508;
frost$core$Int64 $tmp3510 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3511 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3510);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3512;
$tmp3512 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3512->value = $tmp3511;
ITable* $tmp3513 = ((frost$core$Equatable*) $tmp3509)->$class->itable;
while ($tmp3513->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3513 = $tmp3513->next;
}
$fn3515 $tmp3514 = $tmp3513->methods[0];
frost$core$Bit $tmp3516 = $tmp3514(((frost$core$Equatable*) $tmp3509), ((frost$core$Equatable*) $tmp3512));
bool $tmp3517 = $tmp3516.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3512)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3509)));
if ($tmp3517) goto block21; else goto block20;
block21:;
org$frostlang$frostc$FixedArray** $tmp3518 = &param3->subtypes;
org$frostlang$frostc$FixedArray* $tmp3519 = *$tmp3518;
frost$core$Int64 $tmp3520 = (frost$core$Int64) {0};
frost$core$Object* $tmp3521 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3519, $tmp3520);
frost$core$Bit $tmp3522 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp3521), param2);
bool $tmp3523 = $tmp3522.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3521);
if ($tmp3523) goto block18; else goto block20;
block18:;
// line 950
frost$io$IndentedOutputStream** $tmp3524 = &param0->out;
frost$io$IndentedOutputStream* $tmp3525 = *$tmp3524;
frost$core$String* $tmp3526 = org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3525);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3526));
org$frostlang$frostc$ClassDecl* $tmp3527 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3527));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3528 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3528));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3526;
block20:;
// line 952
frost$core$Weak** $tmp3529 = &param0->compiler;
frost$core$Weak* $tmp3530 = *$tmp3529;
frost$core$Object* $tmp3531 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3530);
org$frostlang$frostc$ClassDecl* $tmp3532 = *(&local1);
frost$core$Bit $tmp3533 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3531), $tmp3532);
bool $tmp3534 = $tmp3533.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3531);
if ($tmp3534) goto block26; else goto block24;
block26:;
org$frostlang$frostc$Type$Kind* $tmp3535 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3536 = *$tmp3535;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3537;
$tmp3537 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3537->value = $tmp3536;
frost$core$Int64 $tmp3538 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3539 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3538);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3540;
$tmp3540 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3540->value = $tmp3539;
ITable* $tmp3541 = ((frost$core$Equatable*) $tmp3537)->$class->itable;
while ($tmp3541->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3541 = $tmp3541->next;
}
$fn3543 $tmp3542 = $tmp3541->methods[0];
frost$core$Bit $tmp3544 = $tmp3542(((frost$core$Equatable*) $tmp3537), ((frost$core$Equatable*) $tmp3540));
bool $tmp3545 = $tmp3544.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3540)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3537)));
if ($tmp3545) goto block25; else goto block24;
block25:;
org$frostlang$frostc$FixedArray** $tmp3546 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp3547 = *$tmp3546;
frost$core$Int64 $tmp3548 = (frost$core$Int64) {0};
frost$core$Object* $tmp3549 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3547, $tmp3548);
frost$core$Bit $tmp3550 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp3549), param3);
bool $tmp3551 = $tmp3550.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3549);
if ($tmp3551) goto block23; else goto block24;
block23:;
// line 954
frost$io$IndentedOutputStream** $tmp3552 = &param0->out;
frost$io$IndentedOutputStream* $tmp3553 = *$tmp3552;
frost$core$String* $tmp3554 = org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3553);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3554));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3554));
org$frostlang$frostc$ClassDecl* $tmp3555 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3555));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3556 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3556));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3554;
block24:;
goto block19;
block19:;
goto block15;
block15:;
goto block11;
block11:;
org$frostlang$frostc$ClassDecl* $tmp3557 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3558 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3558));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block2:;
// line 957
frost$core$String* $tmp3559 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3559));
frost$core$String* $tmp3560 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3560));
*(&local2) = $tmp3559;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3559));
// line 958
frost$core$String* $tmp3561 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3561));
frost$core$String* $tmp3562 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3562));
*(&local3) = $tmp3561;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3561));
// line 959
frost$core$String* $tmp3563 = *(&local2);
frost$core$String* $tmp3564 = *(&local3);
frost$core$Bit $tmp3565 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3563, $tmp3564);
bool $tmp3566 = $tmp3565.value;
if ($tmp3566) goto block27; else goto block28;
block27:;
// line 960
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String* $tmp3567 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3567));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3568 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3568));
*(&local2) = ((frost$core$String*) NULL);
return param1;
block28:;
// line 962
frost$core$String* $tmp3569 = *(&local3);
frost$core$String* $tmp3570 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3571, $tmp3569);
frost$core$String* $tmp3572 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3570, &$s3573);
frost$core$String* $tmp3574 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3572, param1);
frost$core$String* $tmp3575 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3574, &$s3576);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3572));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3570));
frost$core$String* $tmp3577 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3577));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3578 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3578));
*(&local2) = ((frost$core$String*) NULL);
return $tmp3575;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getIntReference$frost$core$UInt64$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$UInt64 param1) {

// line 966
frost$core$Int64 $tmp3579 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp3580 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3579);
uint64_t $tmp3581 = param1.value;
uint64_t $tmp3582 = $tmp3580.value;
bool $tmp3583 = $tmp3581 > $tmp3582;
frost$core$Bit $tmp3584 = (frost$core$Bit) {$tmp3583};
bool $tmp3585 = $tmp3584.value;
if ($tmp3585) goto block1; else goto block2;
block1:;
// line 967
frost$core$UInt64$wrapper* $tmp3586;
$tmp3586 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3586->value = param1;
frost$core$String* $tmp3587 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp3586), &$s3588);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3586));
return $tmp3587;
block2:;
// line 969
frost$core$UInt64$wrapper* $tmp3589;
$tmp3589 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3589->value = param1;
$fn3591 $tmp3590 = ($fn3591) ((frost$core$Object*) $tmp3589)->$class->vtable[0];
frost$core$String* $tmp3592 = $tmp3590(((frost$core$Object*) $tmp3589));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3589));
return $tmp3592;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$Real64 param2) {

frost$core$String* local0 = NULL;
// line 973
frost$core$Real64$wrapper* $tmp3593;
$tmp3593 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp3593->value = param2;
$fn3595 $tmp3594 = ($fn3595) ((frost$core$Object*) $tmp3593)->$class->vtable[0];
frost$core$String* $tmp3596 = $tmp3594(((frost$core$Object*) $tmp3593));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3596));
frost$core$String* $tmp3597 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3597));
*(&local0) = $tmp3596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3593));
// line 974
frost$core$String* $tmp3598 = *(&local0);
frost$core$Bit $tmp3599 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp3598, &$s3600);
bool $tmp3601 = $tmp3599.value;
if ($tmp3601) goto block1; else goto block2;
block1:;
// line 975
frost$core$String* $tmp3602 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3602));
frost$core$String* $tmp3603 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3603));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3602;
block2:;
// line 977
frost$core$String* $tmp3604 = *(&local0);
frost$core$String* $tmp3605 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3604, &$s3606);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3605));
frost$core$String* $tmp3607 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3607));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3605;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getBitReference$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$Bit param1, frost$io$IndentedOutputStream* param2) {

// line 981
bool $tmp3608 = param1.value;
if ($tmp3608) goto block1; else goto block2;
block1:;
// line 982
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3609));
return &$s3610;
block2:;
// line 984
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3611));
return &$s3612;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Char8 local2;
// line 988
*(&local0) = ((frost$core$Error*) NULL);
// line 989
frost$core$Int64* $tmp3613 = &param0->varCount;
frost$core$Int64 $tmp3614 = *$tmp3613;
frost$core$Int64 $tmp3615 = (frost$core$Int64) {1};
int64_t $tmp3616 = $tmp3614.value;
int64_t $tmp3617 = $tmp3615.value;
int64_t $tmp3618 = $tmp3616 + $tmp3617;
frost$core$Int64 $tmp3619 = (frost$core$Int64) {$tmp3618};
frost$core$Int64* $tmp3620 = &param0->varCount;
*$tmp3620 = $tmp3619;
// line 990
frost$core$Int64* $tmp3621 = &param0->varCount;
frost$core$Int64 $tmp3622 = *$tmp3621;
frost$core$Int64$wrapper* $tmp3623;
$tmp3623 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3623->value = $tmp3622;
frost$core$String* $tmp3624 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3625, ((frost$core$Object*) $tmp3623));
frost$core$String* $tmp3626 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3624, &$s3627);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
frost$core$String* $tmp3628 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3628));
*(&local1) = $tmp3626;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3623));
// line 991
org$frostlang$frostc$Type* $tmp3629 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$String* $tmp3630 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3629);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
// line 992
frost$io$MemoryOutputStream** $tmp3631 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3632 = *$tmp3631;
frost$core$String* $tmp3633 = *(&local1);
frost$core$String* $tmp3634 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3635, $tmp3633);
frost$core$String* $tmp3636 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3634, &$s3637);
frost$core$Int64 $tmp3638 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp3639;
$tmp3639 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3639->value = $tmp3638;
frost$core$String* $tmp3640 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3641, ((frost$core$Object*) $tmp3639));
frost$core$String* $tmp3642 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3640, &$s3643);
frost$core$String* $tmp3644 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3636, $tmp3642);
frost$core$String* $tmp3645 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3644, &$s3646);
$fn3648 $tmp3647 = ($fn3648) ((frost$io$OutputStream*) $tmp3632)->$class->vtable[17];
frost$core$Error* $tmp3649 = $tmp3647(((frost$io$OutputStream*) $tmp3632), $tmp3645);
if ($tmp3649 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3649));
*(&local0) = $tmp3649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3634));
frost$core$String* $tmp3650 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3650));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3634));
// line 995
frost$collections$ListView* $tmp3651 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(param1);
ITable* $tmp3652 = ((frost$collections$Iterable*) $tmp3651)->$class->itable;
while ($tmp3652->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3652 = $tmp3652->next;
}
$fn3654 $tmp3653 = $tmp3652->methods[0];
frost$collections$Iterator* $tmp3655 = $tmp3653(((frost$collections$Iterable*) $tmp3651));
goto block5;
block5:;
ITable* $tmp3656 = $tmp3655->$class->itable;
while ($tmp3656->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3656 = $tmp3656->next;
}
$fn3658 $tmp3657 = $tmp3656->methods[0];
frost$core$Bit $tmp3659 = $tmp3657($tmp3655);
bool $tmp3660 = $tmp3659.value;
if ($tmp3660) goto block7; else goto block6;
block6:;
ITable* $tmp3661 = $tmp3655->$class->itable;
while ($tmp3661->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3661 = $tmp3661->next;
}
$fn3663 $tmp3662 = $tmp3661->methods[1];
frost$core$Object* $tmp3664 = $tmp3662($tmp3655);
*(&local2) = ((frost$core$Char8$wrapper*) $tmp3664)->value;
// line 996
frost$io$MemoryOutputStream** $tmp3665 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3666 = *$tmp3665;
frost$core$Char8 $tmp3667 = *(&local2);
frost$core$UInt8 $tmp3668 = frost$core$Char8$get_asUInt8$R$frost$core$UInt8($tmp3667);
frost$core$UInt8$wrapper* $tmp3669;
$tmp3669 = (frost$core$UInt8$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp3669->value = $tmp3668;
ITable* $tmp3670 = ((frost$core$Formattable*) $tmp3669)->$class->itable;
while ($tmp3670->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp3670 = $tmp3670->next;
}
$fn3672 $tmp3671 = $tmp3670->methods[0];
frost$core$String* $tmp3673 = $tmp3671(((frost$core$Formattable*) $tmp3669), &$s3674);
frost$core$String* $tmp3675 = frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String($tmp3673, &$s3676);
frost$core$String* $tmp3677 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3678, $tmp3675);
frost$core$String* $tmp3679 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3677, &$s3680);
$fn3682 $tmp3681 = ($fn3682) ((frost$io$OutputStream*) $tmp3666)->$class->vtable[17];
frost$core$Error* $tmp3683 = $tmp3681(((frost$io$OutputStream*) $tmp3666), $tmp3679);
if ($tmp3683 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3683));
*(&local0) = $tmp3683;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3669)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3664);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3651));
frost$core$String* $tmp3684 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3684));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3669)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3664);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3651));
// line 998
frost$io$MemoryOutputStream** $tmp3685 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3686 = *$tmp3685;
frost$collections$ListView* $tmp3687 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(param1);
ITable* $tmp3688 = ((frost$collections$CollectionView*) $tmp3687)->$class->itable;
while ($tmp3688->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3688 = $tmp3688->next;
}
$fn3690 $tmp3689 = $tmp3688->methods[0];
frost$core$Int64 $tmp3691 = $tmp3689(((frost$collections$CollectionView*) $tmp3687));
frost$core$Int64$wrapper* $tmp3692;
$tmp3692 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3692->value = $tmp3691;
frost$core$String* $tmp3693 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3694, ((frost$core$Object*) $tmp3692));
frost$core$String* $tmp3695 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3693, &$s3696);
ITable* $tmp3697 = ((frost$collections$Key*) param1)->$class->itable;
while ($tmp3697->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp3697 = $tmp3697->next;
}
$fn3699 $tmp3698 = $tmp3697->methods[0];
frost$core$Int64 $tmp3700 = $tmp3698(((frost$collections$Key*) param1));
frost$core$Int64$wrapper* $tmp3701;
$tmp3701 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3701->value = $tmp3700;
frost$core$String* $tmp3702 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3695, ((frost$core$Object*) $tmp3701));
frost$core$String* $tmp3703 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3702, &$s3704);
$fn3706 $tmp3705 = ($fn3706) ((frost$io$OutputStream*) $tmp3686)->$class->vtable[19];
frost$core$Error* $tmp3707 = $tmp3705(((frost$io$OutputStream*) $tmp3686), $tmp3703);
if ($tmp3707 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3707));
*(&local0) = $tmp3707;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3687));
frost$core$String* $tmp3708 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3708));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3687));
// line 999
frost$core$String* $tmp3709 = *(&local1);
frost$core$String* $tmp3710 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3711, $tmp3709);
frost$core$String* $tmp3712 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3710, &$s3713);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
frost$core$String* $tmp3714 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3714));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3715 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3715));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3712;
block1:;
// line 1002
frost$core$Int64 $tmp3716 = (frost$core$Int64) {1002};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3717, $tmp3716);
abort(); // unreachable
block2:;
frost$core$Error* $tmp3718 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3718));
*(&local0) = ((frost$core$Error*) NULL);
goto block12;
block12:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 1007
org$frostlang$frostc$Type$Kind* $tmp3719 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp3720 = *$tmp3719;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3721;
$tmp3721 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3721->value = $tmp3720;
frost$core$Int64 $tmp3722 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3723 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3722);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3724;
$tmp3724 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3724->value = $tmp3723;
ITable* $tmp3725 = ((frost$core$Equatable*) $tmp3721)->$class->itable;
while ($tmp3725->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3725 = $tmp3725->next;
}
$fn3727 $tmp3726 = $tmp3725->methods[0];
frost$core$Bit $tmp3728 = $tmp3726(((frost$core$Equatable*) $tmp3721), ((frost$core$Equatable*) $tmp3724));
bool $tmp3729 = $tmp3728.value;
if ($tmp3729) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3730 = (frost$core$Int64) {1007};
frost$core$String* $tmp3731 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3732, ((frost$core$Object*) param1));
frost$core$String* $tmp3733 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3731, &$s3734);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3735, $tmp3730, $tmp3733);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3731));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3724)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3721)));
// line 1008
frost$core$Weak** $tmp3736 = &param0->compiler;
frost$core$Weak* $tmp3737 = *$tmp3736;
frost$core$Object* $tmp3738 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3737);
org$frostlang$frostc$FixedArray** $tmp3739 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp3740 = *$tmp3739;
frost$core$Int64 $tmp3741 = (frost$core$Int64) {0};
frost$core$Object* $tmp3742 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3740, $tmp3741);
org$frostlang$frostc$ClassDecl* $tmp3743 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3738), ((org$frostlang$frostc$Type*) $tmp3742));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3743));
org$frostlang$frostc$ClassDecl* $tmp3744 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3744));
*(&local0) = $tmp3743;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3743));
frost$core$Frost$unref$frost$core$Object$Q($tmp3742);
frost$core$Frost$unref$frost$core$Object$Q($tmp3738);
// line 1009
org$frostlang$frostc$ClassDecl* $tmp3745 = *(&local0);
frost$core$Bit $tmp3746 = frost$core$Bit$init$builtin_bit($tmp3745 != NULL);
bool $tmp3747 = $tmp3746.value;
if ($tmp3747) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp3748 = (frost$core$Int64) {1009};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3749, $tmp3748);
abort(); // unreachable
block3:;
// line 1010
frost$core$Weak** $tmp3750 = &param0->compiler;
frost$core$Weak* $tmp3751 = *$tmp3750;
frost$core$Object* $tmp3752 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3751);
org$frostlang$frostc$ClassDecl* $tmp3753 = *(&local0);
frost$core$Bit $tmp3754 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3752), $tmp3753);
bool $tmp3755 = $tmp3754.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3752);
if ($tmp3755) goto block5; else goto block7;
block5:;
// line 1011
frost$core$String* $tmp3756 = org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp3757 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3758, $tmp3756);
frost$core$String* $tmp3759 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3757, &$s3760);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3757));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3756));
org$frostlang$frostc$ClassDecl* $tmp3761 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3761));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3759;
block7:;
// line 1
// line 1014
frost$core$String* $tmp3762 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp3763 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3764, $tmp3762);
frost$core$String* $tmp3765 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3763, &$s3766);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3762));
org$frostlang$frostc$ClassDecl* $tmp3767 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3767));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3765;
block6:;
goto block8;
block8:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Bit local0;
frost$core$UInt64 local1;
frost$core$Int64 local2;
org$frostlang$frostc$MethodDecl* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Int64 local5;
frost$core$Real64 local6;
org$frostlang$frostc$Type* local7 = NULL;
org$frostlang$frostc$IR$Statement$ID local8;
frost$core$String* local9 = NULL;
// line 1019
frost$core$Int64* $tmp3768 = &param1->$rawValue;
frost$core$Int64 $tmp3769 = *$tmp3768;
frost$core$Int64 $tmp3770 = (frost$core$Int64) {0};
frost$core$Bit $tmp3771 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3769, $tmp3770);
bool $tmp3772 = $tmp3771.value;
if ($tmp3772) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp3773 = (frost$core$Bit*) (param1->$data + 0);
frost$core$Bit $tmp3774 = *$tmp3773;
*(&local0) = $tmp3774;
// line 1021
frost$core$Bit $tmp3775 = *(&local0);
frost$core$Bit$wrapper* $tmp3776;
$tmp3776 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp3776->value = $tmp3775;
$fn3778 $tmp3777 = ($fn3778) ((frost$core$Object*) $tmp3776)->$class->vtable[0];
frost$core$String* $tmp3779 = $tmp3777(((frost$core$Object*) $tmp3776));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3776));
return $tmp3779;
block3:;
frost$core$Int64 $tmp3780 = (frost$core$Int64) {1};
frost$core$Bit $tmp3781 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3769, $tmp3780);
bool $tmp3782 = $tmp3781.value;
if ($tmp3782) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp3783 = (frost$core$UInt64*) (param1->$data + 0);
frost$core$UInt64 $tmp3784 = *$tmp3783;
*(&local1) = $tmp3784;
org$frostlang$frostc$Type** $tmp3785 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3786 = *$tmp3785;
// line 1024
frost$core$UInt64 $tmp3787 = *(&local1);
frost$core$UInt64$wrapper* $tmp3788;
$tmp3788 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3788->value = $tmp3787;
$fn3790 $tmp3789 = ($fn3790) ((frost$core$Object*) $tmp3788)->$class->vtable[0];
frost$core$String* $tmp3791 = $tmp3789(((frost$core$Object*) $tmp3788));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3788));
return $tmp3791;
block5:;
frost$core$Int64 $tmp3792 = (frost$core$Int64) {2};
frost$core$Bit $tmp3793 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3769, $tmp3792);
bool $tmp3794 = $tmp3793.value;
if ($tmp3794) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp3795 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp3796 = *$tmp3795;
*(&local2) = $tmp3796;
org$frostlang$frostc$Type** $tmp3797 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3798 = *$tmp3797;
// line 1027
frost$core$Int64 $tmp3799 = *(&local2);
frost$core$Int64$wrapper* $tmp3800;
$tmp3800 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3800->value = $tmp3799;
frost$core$String* $tmp3801 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3802, ((frost$core$Object*) $tmp3800));
frost$core$String* $tmp3803 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3801, &$s3804);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3800));
return $tmp3803;
block7:;
frost$core$Int64 $tmp3805 = (frost$core$Int64) {3};
frost$core$Bit $tmp3806 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3769, $tmp3805);
bool $tmp3807 = $tmp3806.value;
if ($tmp3807) goto block8; else goto block9;
block8:;
org$frostlang$frostc$MethodDecl** $tmp3808 = (org$frostlang$frostc$MethodDecl**) (param1->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp3809 = *$tmp3808;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3809));
org$frostlang$frostc$MethodDecl* $tmp3810 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3810));
*(&local3) = $tmp3809;
org$frostlang$frostc$Type** $tmp3811 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3812 = *$tmp3811;
// line 1030
org$frostlang$frostc$MethodDecl* $tmp3813 = *(&local3);
frost$core$Weak** $tmp3814 = &$tmp3813->owner;
frost$core$Weak* $tmp3815 = *$tmp3814;
frost$core$Object* $tmp3816 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3815);
frost$core$Bit* $tmp3817 = &((org$frostlang$frostc$ClassDecl*) $tmp3816)->external;
frost$core$Bit $tmp3818 = *$tmp3817;
bool $tmp3819 = $tmp3818.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3816);
if ($tmp3819) goto block10; else goto block11;
block10:;
// line 1031
org$frostlang$frostc$MethodDecl* $tmp3820 = *(&local3);
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, $tmp3820);
goto block11;
block11:;
// line 1033
org$frostlang$frostc$MethodDecl* $tmp3821 = *(&local3);
frost$core$String* $tmp3822 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp3821);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3822));
org$frostlang$frostc$MethodDecl* $tmp3823 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp3822;
block9:;
frost$core$Int64 $tmp3824 = (frost$core$Int64) {4};
frost$core$Bit $tmp3825 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3769, $tmp3824);
bool $tmp3826 = $tmp3825.value;
if ($tmp3826) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Type** $tmp3827 = (org$frostlang$frostc$Type**) (param1->$data + 0);
org$frostlang$frostc$Type* $tmp3828 = *$tmp3827;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3828));
org$frostlang$frostc$Type* $tmp3829 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3829));
*(&local4) = $tmp3828;
// line 1036
org$frostlang$frostc$Type* $tmp3830 = *(&local4);
frost$core$String* $tmp3831 = org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3830);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3831));
org$frostlang$frostc$Type* $tmp3832 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3832));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp3831;
block13:;
frost$core$Int64 $tmp3833 = (frost$core$Int64) {5};
frost$core$Bit $tmp3834 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3769, $tmp3833);
bool $tmp3835 = $tmp3834.value;
if ($tmp3835) goto block14; else goto block15;
block14:;
frost$core$Int64* $tmp3836 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp3837 = *$tmp3836;
*(&local5) = $tmp3837;
org$frostlang$frostc$Type** $tmp3838 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3839 = *$tmp3838;
// line 1039
frost$core$Int64 $tmp3840 = *(&local5);
frost$core$Int64$wrapper* $tmp3841;
$tmp3841 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3841->value = $tmp3840;
frost$core$String* $tmp3842 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3843, ((frost$core$Object*) $tmp3841));
frost$core$String* $tmp3844 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3842, &$s3845);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3842));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3841));
return $tmp3844;
block15:;
frost$core$Int64 $tmp3846 = (frost$core$Int64) {6};
frost$core$Bit $tmp3847 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3769, $tmp3846);
bool $tmp3848 = $tmp3847.value;
if ($tmp3848) goto block16; else goto block17;
block16:;
frost$core$Real64* $tmp3849 = (frost$core$Real64*) (param1->$data + 0);
frost$core$Real64 $tmp3850 = *$tmp3849;
*(&local6) = $tmp3850;
org$frostlang$frostc$Type** $tmp3851 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3852 = *$tmp3851;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3852));
org$frostlang$frostc$Type* $tmp3853 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
*(&local7) = $tmp3852;
// line 1042
org$frostlang$frostc$Type* $tmp3854 = *(&local7);
frost$core$Real64 $tmp3855 = *(&local6);
frost$core$String* $tmp3856 = org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String(param0, $tmp3854, $tmp3855);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3856));
org$frostlang$frostc$Type* $tmp3857 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3857));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp3856;
block17:;
frost$core$Int64 $tmp3858 = (frost$core$Int64) {7};
frost$core$Bit $tmp3859 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3769, $tmp3858);
bool $tmp3860 = $tmp3859.value;
if ($tmp3860) goto block18; else goto block19;
block18:;
org$frostlang$frostc$IR$Statement$ID* $tmp3861 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp3862 = *$tmp3861;
*(&local8) = $tmp3862;
org$frostlang$frostc$Type** $tmp3863 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3864 = *$tmp3863;
// line 1045
frost$collections$HashMap** $tmp3865 = &param0->refs;
frost$collections$HashMap* $tmp3866 = *$tmp3865;
org$frostlang$frostc$IR$Statement$ID $tmp3867 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3868;
$tmp3868 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3868->value = $tmp3867;
frost$core$Object* $tmp3869 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3866, ((frost$collections$Key*) $tmp3868));
frost$core$Bit $tmp3870 = frost$core$Bit$init$builtin_bit(((frost$core$String*) $tmp3869) != NULL);
bool $tmp3871 = $tmp3870.value;
if ($tmp3871) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp3872 = (frost$core$Int64) {1045};
org$frostlang$frostc$IR$Statement$ID $tmp3873 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3874;
$tmp3874 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3874->value = $tmp3873;
frost$core$String* $tmp3875 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3876, ((frost$core$Object*) $tmp3874));
frost$core$String* $tmp3877 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3875, &$s3878);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3879, $tmp3872, $tmp3877);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3874));
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3869);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3868)));
// line 1046
frost$collections$HashMap** $tmp3880 = &param0->refs;
frost$collections$HashMap* $tmp3881 = *$tmp3880;
org$frostlang$frostc$IR$Statement$ID $tmp3882 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3883;
$tmp3883 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3883->value = $tmp3882;
frost$core$Object* $tmp3884 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3881, ((frost$collections$Key*) $tmp3883));
frost$core$Bit $tmp3885 = frost$core$Bit$init$builtin_bit(((frost$core$String*) $tmp3884) == NULL);
bool $tmp3886 = $tmp3885.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3884);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3883)));
if ($tmp3886) goto block22; else goto block23;
block22:;
// line 1047
org$frostlang$frostc$IR$Statement$ID $tmp3887 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3888;
$tmp3888 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3888->value = $tmp3887;
frost$core$String* $tmp3889 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3890, ((frost$core$Object*) $tmp3888));
frost$core$String* $tmp3891 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3889, &$s3892);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3888));
return $tmp3891;
block23:;
// line 1049
frost$collections$HashMap** $tmp3893 = &param0->refs;
frost$collections$HashMap* $tmp3894 = *$tmp3893;
org$frostlang$frostc$IR$Statement$ID $tmp3895 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3896;
$tmp3896 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3896->value = $tmp3895;
frost$core$Object* $tmp3897 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3894, ((frost$collections$Key*) $tmp3896));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp3897)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3897);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3896)));
return ((frost$core$String*) $tmp3897);
block19:;
frost$core$Int64 $tmp3898 = (frost$core$Int64) {8};
frost$core$Bit $tmp3899 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3769, $tmp3898);
bool $tmp3900 = $tmp3899.value;
if ($tmp3900) goto block24; else goto block25;
block24:;
frost$core$String** $tmp3901 = (frost$core$String**) (param1->$data + 0);
frost$core$String* $tmp3902 = *$tmp3901;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3902));
frost$core$String* $tmp3903 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3903));
*(&local9) = $tmp3902;
// line 1052
frost$core$String* $tmp3904 = *(&local9);
frost$core$String* $tmp3905 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp3904);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3905));
frost$core$String* $tmp3906 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3906));
*(&local9) = ((frost$core$String*) NULL);
return $tmp3905;
block25:;
// line 1055
frost$core$Int64 $tmp3907 = (frost$core$Int64) {1055};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3908, $tmp3907);
abort(); // unreachable
block1:;
goto block26;
block26:;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ChoiceCase* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 1061
frost$core$Int64 $tmp3909 = (frost$core$Int64) {0};
*(&local0) = $tmp3909;
// line 1062
frost$core$Int64 $tmp3910 = (frost$core$Int64) {0};
frost$core$Bit $tmp3911 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3912 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3910, param2, $tmp3911);
frost$core$Int64 $tmp3913 = $tmp3912.min;
*(&local1) = $tmp3913;
frost$core$Int64 $tmp3914 = $tmp3912.max;
frost$core$Bit $tmp3915 = $tmp3912.inclusive;
bool $tmp3916 = $tmp3915.value;
frost$core$Int64 $tmp3917 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3918 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3917);
if ($tmp3916) goto block4; else goto block5;
block4:;
int64_t $tmp3919 = $tmp3913.value;
int64_t $tmp3920 = $tmp3914.value;
bool $tmp3921 = $tmp3919 <= $tmp3920;
frost$core$Bit $tmp3922 = (frost$core$Bit) {$tmp3921};
bool $tmp3923 = $tmp3922.value;
if ($tmp3923) goto block1; else goto block2;
block5:;
int64_t $tmp3924 = $tmp3913.value;
int64_t $tmp3925 = $tmp3914.value;
bool $tmp3926 = $tmp3924 < $tmp3925;
frost$core$Bit $tmp3927 = (frost$core$Bit) {$tmp3926};
bool $tmp3928 = $tmp3927.value;
if ($tmp3928) goto block1; else goto block2;
block1:;
// line 1064
frost$core$Int64 $tmp3929 = *(&local0);
frost$collections$Array** $tmp3930 = &param1->fields;
frost$collections$Array* $tmp3931 = *$tmp3930;
frost$core$Int64 $tmp3932 = *(&local1);
frost$core$Object* $tmp3933 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3931, $tmp3932);
frost$core$Int64 $tmp3934 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, ((org$frostlang$frostc$Type*) $tmp3933));
int64_t $tmp3935 = $tmp3929.value;
int64_t $tmp3936 = $tmp3934.value;
int64_t $tmp3937 = $tmp3935 + $tmp3936;
frost$core$Int64 $tmp3938 = (frost$core$Int64) {$tmp3937};
*(&local0) = $tmp3938;
frost$core$Frost$unref$frost$core$Object$Q($tmp3933);
goto block3;
block3:;
frost$core$Int64 $tmp3939 = *(&local1);
int64_t $tmp3940 = $tmp3914.value;
int64_t $tmp3941 = $tmp3939.value;
int64_t $tmp3942 = $tmp3940 - $tmp3941;
frost$core$Int64 $tmp3943 = (frost$core$Int64) {$tmp3942};
frost$core$UInt64 $tmp3944 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3943);
if ($tmp3916) goto block7; else goto block8;
block7:;
uint64_t $tmp3945 = $tmp3944.value;
uint64_t $tmp3946 = $tmp3918.value;
bool $tmp3947 = $tmp3945 >= $tmp3946;
frost$core$Bit $tmp3948 = (frost$core$Bit) {$tmp3947};
bool $tmp3949 = $tmp3948.value;
if ($tmp3949) goto block6; else goto block2;
block8:;
uint64_t $tmp3950 = $tmp3944.value;
uint64_t $tmp3951 = $tmp3918.value;
bool $tmp3952 = $tmp3950 > $tmp3951;
frost$core$Bit $tmp3953 = (frost$core$Bit) {$tmp3952};
bool $tmp3954 = $tmp3953.value;
if ($tmp3954) goto block6; else goto block2;
block6:;
int64_t $tmp3955 = $tmp3939.value;
int64_t $tmp3956 = $tmp3917.value;
int64_t $tmp3957 = $tmp3955 + $tmp3956;
frost$core$Int64 $tmp3958 = (frost$core$Int64) {$tmp3957};
*(&local1) = $tmp3958;
goto block1;
block2:;
// line 1066
frost$core$Int64 $tmp3959 = *(&local0);
return $tmp3959;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
// line 1070
frost$core$Weak** $tmp3960 = &param1->owner;
frost$core$Weak* $tmp3961 = *$tmp3960;
frost$core$Object* $tmp3962 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3961);
org$frostlang$frostc$Type** $tmp3963 = &((org$frostlang$frostc$ClassDecl*) $tmp3962)->type;
org$frostlang$frostc$Type* $tmp3964 = *$tmp3963;
frost$core$String* $tmp3965 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3964);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3965));
frost$core$String* $tmp3966 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3966));
*(&local0) = $tmp3965;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3965));
frost$core$Frost$unref$frost$core$Object$Q($tmp3962);
// line 1071
org$frostlang$frostc$MethodDecl$Kind* $tmp3967 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3968 = *$tmp3967;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3969;
$tmp3969 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3969->value = $tmp3968;
frost$core$Int64 $tmp3970 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3971 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3970);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3972;
$tmp3972 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3972->value = $tmp3971;
ITable* $tmp3973 = ((frost$core$Equatable*) $tmp3969)->$class->itable;
while ($tmp3973->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3973 = $tmp3973->next;
}
$fn3975 $tmp3974 = $tmp3973->methods[0];
frost$core$Bit $tmp3976 = $tmp3974(((frost$core$Equatable*) $tmp3969), ((frost$core$Equatable*) $tmp3972));
bool $tmp3977 = $tmp3976.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3972)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3969)));
if ($tmp3977) goto block3; else goto block2;
block3:;
frost$core$String* $tmp3978 = *(&local0);
frost$core$Bit $tmp3979 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp3978, &$s3980);
frost$core$Bit $tmp3981 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3979);
bool $tmp3982 = $tmp3981.value;
if ($tmp3982) goto block1; else goto block2;
block1:;
// line 1072
frost$core$String* $tmp3983 = *(&local0);
frost$core$String* $tmp3984 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3983, &$s3985);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3984));
frost$core$String* $tmp3986 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3986));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3984;
block2:;
// line 1074
frost$core$String* $tmp3987 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
frost$core$String* $tmp3988 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3988));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3987;

}
void org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1078
frost$core$String* $tmp3989 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3989));
frost$core$String* $tmp3990 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3990));
*(&local0) = $tmp3989;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3989));
// line 1079
frost$core$Weak** $tmp3991 = &param0->compiler;
frost$core$Weak* $tmp3992 = *$tmp3991;
frost$core$Object* $tmp3993 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3992);
$fn3995 $tmp3994 = ($fn3995) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3996 = $tmp3994(param2);
org$frostlang$frostc$ClassDecl* $tmp3997 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3993), $tmp3996);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3997));
org$frostlang$frostc$ClassDecl* $tmp3998 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3998));
*(&local1) = $tmp3997;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3996));
frost$core$Frost$unref$frost$core$Object$Q($tmp3993);
// line 1080
org$frostlang$frostc$ClassDecl* $tmp3999 = *(&local1);
frost$core$Bit $tmp4000 = frost$core$Bit$init$builtin_bit($tmp3999 != NULL);
bool $tmp4001 = $tmp4000.value;
if ($tmp4001) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp4002 = (frost$core$Int64) {1080};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4003, $tmp4002);
abort(); // unreachable
block1:;
// line 1081
*(&local2) = ((frost$core$String*) NULL);
// line 1082
frost$core$Weak** $tmp4004 = &param0->compiler;
frost$core$Weak* $tmp4005 = *$tmp4004;
frost$core$Object* $tmp4006 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4005);
org$frostlang$frostc$ClassDecl* $tmp4007 = *(&local1);
frost$core$Bit $tmp4008 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4006), $tmp4007);
bool $tmp4009 = $tmp4008.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp4006);
if ($tmp4009) goto block3; else goto block5;
block3:;
// line 1083
$fn4011 $tmp4010 = ($fn4011) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4012 = $tmp4010(param2);
org$frostlang$frostc$Type$Kind* $tmp4013 = &$tmp4012->typeKind;
org$frostlang$frostc$Type$Kind $tmp4014 = *$tmp4013;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4015;
$tmp4015 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4015->value = $tmp4014;
frost$core$Int64 $tmp4016 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp4017 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp4016);
org$frostlang$frostc$Type$Kind$wrapper* $tmp4018;
$tmp4018 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4018->value = $tmp4017;
ITable* $tmp4019 = ((frost$core$Equatable*) $tmp4015)->$class->itable;
while ($tmp4019->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4019 = $tmp4019->next;
}
$fn4021 $tmp4020 = $tmp4019->methods[1];
frost$core$Bit $tmp4022 = $tmp4020(((frost$core$Equatable*) $tmp4015), ((frost$core$Equatable*) $tmp4018));
bool $tmp4023 = $tmp4022.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4018)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4015)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4012));
if ($tmp4023) goto block6; else goto block8;
block6:;
// line 1084
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4024));
frost$core$String* $tmp4025 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4025));
*(&local2) = &$s4026;
goto block7;
block8:;
// line 1
// line 1087
frost$core$String* $tmp4027 = *(&local0);
frost$core$String* $tmp4028 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4029, $tmp4027);
frost$core$String* $tmp4030 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4028, &$s4031);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4030));
frost$core$String* $tmp4032 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4032));
*(&local2) = $tmp4030;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4028));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1091
frost$core$String* $tmp4033 = *(&local0);
frost$core$String* $tmp4034 = frost$core$String$get_asString$R$frost$core$String($tmp4033);
frost$core$String* $tmp4035 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4034, &$s4036);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4035));
frost$core$String* $tmp4037 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4037));
*(&local2) = $tmp4035;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4034));
goto block4;
block4:;
// line 1093
frost$collections$HashMap** $tmp4038 = &param0->refs;
frost$collections$HashMap* $tmp4039 = *$tmp4038;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4040;
$tmp4040 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4040->value = param1;
frost$core$String* $tmp4041 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4039, ((frost$collections$Key*) $tmp4040), ((frost$core$Object*) $tmp4041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4040)));
frost$core$String* $tmp4042 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4042));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4043 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4043));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp4044 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4044));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1097
frost$core$String* $tmp4045 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4045));
frost$core$String* $tmp4046 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4046));
*(&local0) = $tmp4045;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4045));
// line 1098
frost$core$Weak** $tmp4047 = &param0->compiler;
frost$core$Weak* $tmp4048 = *$tmp4047;
frost$core$Object* $tmp4049 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4048);
$fn4051 $tmp4050 = ($fn4051) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4052 = $tmp4050(param2);
org$frostlang$frostc$ClassDecl* $tmp4053 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp4049), $tmp4052);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4053));
org$frostlang$frostc$ClassDecl* $tmp4054 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4054));
*(&local1) = $tmp4053;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4052));
frost$core$Frost$unref$frost$core$Object$Q($tmp4049);
// line 1099
org$frostlang$frostc$ClassDecl* $tmp4055 = *(&local1);
frost$core$Bit $tmp4056 = frost$core$Bit$init$builtin_bit($tmp4055 != NULL);
bool $tmp4057 = $tmp4056.value;
if ($tmp4057) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp4058 = (frost$core$Int64) {1099};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4059, $tmp4058);
abort(); // unreachable
block1:;
// line 1100
*(&local2) = ((frost$core$String*) NULL);
// line 1101
frost$core$Weak** $tmp4060 = &param0->compiler;
frost$core$Weak* $tmp4061 = *$tmp4060;
frost$core$Object* $tmp4062 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4061);
org$frostlang$frostc$ClassDecl* $tmp4063 = *(&local1);
frost$core$Bit $tmp4064 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4062), $tmp4063);
bool $tmp4065 = $tmp4064.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp4062);
if ($tmp4065) goto block3; else goto block5;
block3:;
// line 1102
$fn4067 $tmp4066 = ($fn4067) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4068 = $tmp4066(param2);
org$frostlang$frostc$Type$Kind* $tmp4069 = &$tmp4068->typeKind;
org$frostlang$frostc$Type$Kind $tmp4070 = *$tmp4069;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4071;
$tmp4071 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4071->value = $tmp4070;
frost$core$Int64 $tmp4072 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp4073 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp4072);
org$frostlang$frostc$Type$Kind$wrapper* $tmp4074;
$tmp4074 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4074->value = $tmp4073;
ITable* $tmp4075 = ((frost$core$Equatable*) $tmp4071)->$class->itable;
while ($tmp4075->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4075 = $tmp4075->next;
}
$fn4077 $tmp4076 = $tmp4075->methods[1];
frost$core$Bit $tmp4078 = $tmp4076(((frost$core$Equatable*) $tmp4071), ((frost$core$Equatable*) $tmp4074));
bool $tmp4079 = $tmp4078.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4074)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4071)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4068));
if ($tmp4079) goto block6; else goto block8;
block6:;
// line 1103
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4080));
frost$core$String* $tmp4081 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4081));
*(&local2) = &$s4082;
goto block7;
block8:;
// line 1
// line 1106
frost$core$String* $tmp4083 = *(&local0);
frost$core$String* $tmp4084 = frost$core$String$get_asString$R$frost$core$String($tmp4083);
frost$core$String* $tmp4085 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4084, &$s4086);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4085));
frost$core$String* $tmp4087 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4087));
*(&local2) = $tmp4085;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4084));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1110
frost$core$String* $tmp4088 = *(&local0);
frost$core$String* $tmp4089 = frost$core$String$get_asString$R$frost$core$String($tmp4088);
frost$core$String* $tmp4090 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4089, &$s4091);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4090));
frost$core$String* $tmp4092 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4092));
*(&local2) = $tmp4090;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4089));
goto block4;
block4:;
// line 1112
frost$collections$HashMap** $tmp4093 = &param0->refs;
frost$collections$HashMap* $tmp4094 = *$tmp4093;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4095;
$tmp4095 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4095->value = param1;
frost$core$String* $tmp4096 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4094, ((frost$collections$Key*) $tmp4095), ((frost$core$Object*) $tmp4096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4095)));
frost$core$String* $tmp4097 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4097));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4098 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4098));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp4099 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4099));
*(&local0) = ((frost$core$String*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

// line 1116
frost$core$Int64* $tmp4100 = &param1->$rawValue;
frost$core$Int64 $tmp4101 = *$tmp4100;
frost$core$Int64 $tmp4102 = (frost$core$Int64) {4};
frost$core$Bit $tmp4103 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4101, $tmp4102);
bool $tmp4104 = $tmp4103.value;
if ($tmp4104) goto block2; else goto block1;
block2:;
// line 1118
frost$core$Bit $tmp4105 = frost$core$Bit$init$builtin_bit(true);
return $tmp4105;
block1:;
// line 1121
frost$core$Bit $tmp4106 = frost$core$Bit$init$builtin_bit(false);
return $tmp4106;

}
void org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$expression$Binary$Operator param3, org$frostlang$frostc$IR$Value* param4, org$frostlang$frostc$Type* param5) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$Error* local4 = NULL;
// line 1126
frost$core$String* $tmp4107 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4107));
frost$core$String* $tmp4108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4108));
*(&local0) = $tmp4107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4107));
// line 1127
frost$core$String* $tmp4109 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param4);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4109));
frost$core$String* $tmp4110 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4110));
*(&local1) = $tmp4109;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4109));
// line 1128
$fn4112 $tmp4111 = ($fn4112) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4113 = $tmp4111(param2);
frost$core$Bit $tmp4114 = org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit($tmp4113);
bool $tmp4115 = $tmp4114.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4113));
if ($tmp4115) goto block1; else goto block2;
block1:;
// line 1129
frost$core$Int64 $tmp4116 = param3.$rawValue;
frost$core$Int64 $tmp4117 = (frost$core$Int64) {21};
frost$core$Bit $tmp4118 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4116, $tmp4117);
bool $tmp4119 = $tmp4118.value;
if ($tmp4119) goto block4; else goto block5;
block4:;
// line 1131
frost$core$Bit $tmp4120 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param2);
bool $tmp4121 = $tmp4120.value;
if ($tmp4121) goto block6; else goto block7;
block6:;
// line 1132
org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param4);
// line 1133
frost$core$String* $tmp4122 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4122));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4123 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4123));
*(&local0) = ((frost$core$String*) NULL);
return;
block7:;
// line 1135
frost$core$Bit $tmp4124 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param4);
bool $tmp4125 = $tmp4124.value;
if ($tmp4125) goto block8; else goto block9;
block8:;
// line 1136
org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param2);
// line 1137
frost$core$String* $tmp4126 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4126));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4127 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4127));
*(&local0) = ((frost$core$String*) NULL);
return;
block9:;
goto block3;
block5:;
frost$core$Int64 $tmp4128 = (frost$core$Int64) {22};
frost$core$Bit $tmp4129 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4116, $tmp4128);
bool $tmp4130 = $tmp4129.value;
if ($tmp4130) goto block10; else goto block3;
block10:;
// line 1141
frost$core$Bit $tmp4131 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param2);
bool $tmp4132 = $tmp4131.value;
if ($tmp4132) goto block11; else goto block12;
block11:;
// line 1142
org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param4);
// line 1143
frost$core$String* $tmp4133 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4133));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4134 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4134));
*(&local0) = ((frost$core$String*) NULL);
return;
block12:;
// line 1145
frost$core$Bit $tmp4135 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param4);
bool $tmp4136 = $tmp4135.value;
if ($tmp4136) goto block13; else goto block14;
block13:;
// line 1146
org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param2);
// line 1147
frost$core$String* $tmp4137 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4137));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4138 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4138));
*(&local0) = ((frost$core$String*) NULL);
return;
block14:;
goto block3;
block3:;
goto block2;
block2:;
// line 1152
*(&local2) = ((frost$core$String*) NULL);
// line 1153
frost$core$Int64 $tmp4139 = param3.$rawValue;
frost$core$Int64 $tmp4140 = (frost$core$Int64) {0};
frost$core$Bit $tmp4141 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4140);
bool $tmp4142 = $tmp4141.value;
if ($tmp4142) goto block16; else goto block17;
block16:;
// line 1155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4143));
frost$core$String* $tmp4144 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4144));
*(&local2) = &$s4145;
goto block15;
block17:;
frost$core$Int64 $tmp4146 = (frost$core$Int64) {1};
frost$core$Bit $tmp4147 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4146);
bool $tmp4148 = $tmp4147.value;
if ($tmp4148) goto block18; else goto block19;
block18:;
// line 1158
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4149));
frost$core$String* $tmp4150 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4150));
*(&local2) = &$s4151;
goto block15;
block19:;
frost$core$Int64 $tmp4152 = (frost$core$Int64) {2};
frost$core$Bit $tmp4153 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4152);
bool $tmp4154 = $tmp4153.value;
if ($tmp4154) goto block20; else goto block21;
block20:;
// line 1161
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4155));
frost$core$String* $tmp4156 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4156));
*(&local2) = &$s4157;
goto block15;
block21:;
frost$core$Int64 $tmp4158 = (frost$core$Int64) {3};
frost$core$Bit $tmp4159 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4158);
bool $tmp4160 = $tmp4159.value;
if ($tmp4160) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp4161 = (frost$core$Int64) {4};
frost$core$Bit $tmp4162 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4161);
bool $tmp4163 = $tmp4162.value;
if ($tmp4163) goto block22; else goto block24;
block22:;
// line 1164
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4164));
frost$core$String* $tmp4165 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4165));
*(&local2) = &$s4166;
goto block15;
block24:;
frost$core$Int64 $tmp4167 = (frost$core$Int64) {5};
frost$core$Bit $tmp4168 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4167);
bool $tmp4169 = $tmp4168.value;
if ($tmp4169) goto block25; else goto block26;
block25:;
// line 1167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4170));
frost$core$String* $tmp4171 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4171));
*(&local2) = &$s4172;
goto block15;
block26:;
frost$core$Int64 $tmp4173 = (frost$core$Int64) {18};
frost$core$Bit $tmp4174 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4173);
bool $tmp4175 = $tmp4174.value;
if ($tmp4175) goto block27; else goto block28;
block27:;
// line 1170
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4176));
frost$core$String* $tmp4177 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4177));
*(&local2) = &$s4178;
goto block15;
block28:;
frost$core$Int64 $tmp4179 = (frost$core$Int64) {19};
frost$core$Bit $tmp4180 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4179);
bool $tmp4181 = $tmp4180.value;
if ($tmp4181) goto block29; else goto block30;
block29:;
// line 1173
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4182));
frost$core$String* $tmp4183 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4183));
*(&local2) = &$s4184;
goto block15;
block30:;
frost$core$Int64 $tmp4185 = (frost$core$Int64) {14};
frost$core$Bit $tmp4186 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4185);
bool $tmp4187 = $tmp4186.value;
if ($tmp4187) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp4188 = (frost$core$Int64) {15};
frost$core$Bit $tmp4189 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4188);
bool $tmp4190 = $tmp4189.value;
if ($tmp4190) goto block31; else goto block33;
block31:;
// line 1176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4191));
frost$core$String* $tmp4192 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4192));
*(&local2) = &$s4193;
goto block15;
block33:;
frost$core$Int64 $tmp4194 = (frost$core$Int64) {12};
frost$core$Bit $tmp4195 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4194);
bool $tmp4196 = $tmp4195.value;
if ($tmp4196) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp4197 = (frost$core$Int64) {13};
frost$core$Bit $tmp4198 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4197);
bool $tmp4199 = $tmp4198.value;
if ($tmp4199) goto block34; else goto block36;
block34:;
// line 1179
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4200));
frost$core$String* $tmp4201 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4201));
*(&local2) = &$s4202;
goto block15;
block36:;
frost$core$Int64 $tmp4203 = (frost$core$Int64) {16};
frost$core$Bit $tmp4204 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4203);
bool $tmp4205 = $tmp4204.value;
if ($tmp4205) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp4206 = (frost$core$Int64) {17};
frost$core$Bit $tmp4207 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4206);
bool $tmp4208 = $tmp4207.value;
if ($tmp4208) goto block37; else goto block39;
block37:;
// line 1182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4209));
frost$core$String* $tmp4210 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4210));
*(&local2) = &$s4211;
goto block15;
block39:;
frost$core$Int64 $tmp4212 = (frost$core$Int64) {6};
frost$core$Bit $tmp4213 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4212);
bool $tmp4214 = $tmp4213.value;
if ($tmp4214) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp4215 = (frost$core$Int64) {21};
frost$core$Bit $tmp4216 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4215);
bool $tmp4217 = $tmp4216.value;
if ($tmp4217) goto block40; else goto block42;
block40:;
// line 1185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4218));
frost$core$String* $tmp4219 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4219));
*(&local2) = &$s4220;
goto block15;
block42:;
frost$core$Int64 $tmp4221 = (frost$core$Int64) {7};
frost$core$Bit $tmp4222 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4221);
bool $tmp4223 = $tmp4222.value;
if ($tmp4223) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp4224 = (frost$core$Int64) {22};
frost$core$Bit $tmp4225 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4224);
bool $tmp4226 = $tmp4225.value;
if ($tmp4226) goto block43; else goto block45;
block43:;
// line 1188
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4227));
frost$core$String* $tmp4228 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4228));
*(&local2) = &$s4229;
goto block15;
block45:;
frost$core$Int64 $tmp4230 = (frost$core$Int64) {8};
frost$core$Bit $tmp4231 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4230);
bool $tmp4232 = $tmp4231.value;
if ($tmp4232) goto block46; else goto block47;
block46:;
// line 1191
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4233));
frost$core$String* $tmp4234 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4234));
*(&local2) = &$s4235;
goto block15;
block47:;
frost$core$Int64 $tmp4236 = (frost$core$Int64) {9};
frost$core$Bit $tmp4237 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4236);
bool $tmp4238 = $tmp4237.value;
if ($tmp4238) goto block48; else goto block49;
block48:;
// line 1194
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4239));
frost$core$String* $tmp4240 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4240));
*(&local2) = &$s4241;
goto block15;
block49:;
frost$core$Int64 $tmp4242 = (frost$core$Int64) {10};
frost$core$Bit $tmp4243 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4242);
bool $tmp4244 = $tmp4243.value;
if ($tmp4244) goto block50; else goto block51;
block50:;
// line 1197
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4245));
frost$core$String* $tmp4246 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4246));
*(&local2) = &$s4247;
goto block15;
block51:;
frost$core$Int64 $tmp4248 = (frost$core$Int64) {11};
frost$core$Bit $tmp4249 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4139, $tmp4248);
bool $tmp4250 = $tmp4249.value;
if ($tmp4250) goto block52; else goto block53;
block52:;
// line 1200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4251));
frost$core$String* $tmp4252 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4252));
*(&local2) = &$s4253;
goto block15;
block53:;
// line 1203
frost$core$Int64 $tmp4254 = (frost$core$Int64) {1203};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4255, $tmp4254);
abort(); // unreachable
block15:;
// line 1206
frost$core$String* $tmp4256 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4256));
frost$core$String* $tmp4257 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4257));
*(&local3) = $tmp4256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4256));
// line 1207
*(&local4) = ((frost$core$Error*) NULL);
// line 1208
frost$io$IndentedOutputStream** $tmp4258 = &param0->out;
frost$io$IndentedOutputStream* $tmp4259 = *$tmp4258;
frost$core$String* $tmp4260 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param5);
frost$core$String* $tmp4261 = frost$core$String$get_asString$R$frost$core$String($tmp4260);
frost$core$String* $tmp4262 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4261, &$s4263);
frost$core$String* $tmp4264 = *(&local3);
frost$core$String* $tmp4265 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4262, $tmp4264);
frost$core$String* $tmp4266 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4265, &$s4267);
frost$core$String* $tmp4268 = *(&local0);
frost$core$String* $tmp4269 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4266, $tmp4268);
frost$core$String* $tmp4270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4269, &$s4271);
frost$core$String* $tmp4272 = *(&local2);
frost$core$String* $tmp4273 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4270, $tmp4272);
frost$core$String* $tmp4274 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4273, &$s4275);
frost$core$String* $tmp4276 = *(&local1);
frost$core$String* $tmp4277 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4274, $tmp4276);
frost$core$String* $tmp4278 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4277, &$s4279);
$fn4281 $tmp4280 = ($fn4281) ((frost$io$OutputStream*) $tmp4259)->$class->vtable[19];
frost$core$Error* $tmp4282 = $tmp4280(((frost$io$OutputStream*) $tmp4259), $tmp4278);
if ($tmp4282 == NULL) goto block56; else goto block57;
block57:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4282));
*(&local4) = $tmp4282;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4260));
goto block54;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4260));
goto block55;
block54:;
// line 1211
frost$core$Int64 $tmp4283 = (frost$core$Int64) {1211};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4284, $tmp4283);
abort(); // unreachable
block55:;
frost$core$Error* $tmp4285 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4285));
*(&local4) = ((frost$core$Error*) NULL);
// line 1213
frost$collections$HashMap** $tmp4286 = &param0->refs;
frost$collections$HashMap* $tmp4287 = *$tmp4286;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4288;
$tmp4288 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4288->value = param1;
frost$core$String* $tmp4289 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4287, ((frost$collections$Key*) $tmp4288), ((frost$core$Object*) $tmp4289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4288)));
frost$core$String* $tmp4290 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4290));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4291 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4291));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4292 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4292));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4293 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4293));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Block$ID param1) {

frost$core$Error* local0 = NULL;
// line 1217
*(&local0) = ((frost$core$Error*) NULL);
// line 1218
frost$io$IndentedOutputStream** $tmp4294 = &param0->out;
frost$io$IndentedOutputStream* $tmp4295 = *$tmp4294;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4296;
$tmp4296 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4296->value = param1;
frost$core$String* $tmp4297 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4298, ((frost$core$Object*) $tmp4296));
frost$core$String* $tmp4299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4297, &$s4300);
$fn4302 $tmp4301 = ($fn4302) ((frost$io$OutputStream*) $tmp4295)->$class->vtable[19];
frost$core$Error* $tmp4303 = $tmp4301(((frost$io$OutputStream*) $tmp4295), $tmp4299);
if ($tmp4303 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4303));
*(&local0) = $tmp4303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4296));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4296));
goto block2;
block1:;
// line 1221
frost$core$Int64 $tmp4304 = (frost$core$Int64) {1221};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4305, $tmp4304);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4306 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4306));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$Type* param3) {

// line 1226
frost$collections$HashMap** $tmp4307 = &param0->refs;
frost$collections$HashMap* $tmp4308 = *$tmp4307;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4309;
$tmp4309 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4309->value = param1;
frost$core$String* $tmp4310 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
$fn4312 $tmp4311 = ($fn4312) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4313 = $tmp4311(param2);
frost$core$String* $tmp4314 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4310, $tmp4313, param3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4308, ((frost$collections$Key*) $tmp4309), ((frost$core$Object*) $tmp4314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4309)));
return;

}
void org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Block$ID param2, org$frostlang$frostc$IR$Block$ID param3) {

frost$core$Error* local0 = NULL;
// line 1230
*(&local0) = ((frost$core$Error*) NULL);
// line 1231
frost$io$IndentedOutputStream** $tmp4315 = &param0->out;
frost$io$IndentedOutputStream* $tmp4316 = *$tmp4315;
frost$core$String* $tmp4317 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp4318 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4319, $tmp4317);
frost$core$String* $tmp4320 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4318, &$s4321);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4322;
$tmp4322 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4322->value = param2;
frost$core$String* $tmp4323 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4320, ((frost$core$Object*) $tmp4322));
frost$core$String* $tmp4324 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4323, &$s4325);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4326;
$tmp4326 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4326->value = param3;
frost$core$String* $tmp4327 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4324, ((frost$core$Object*) $tmp4326));
frost$core$String* $tmp4328 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4327, &$s4329);
$fn4331 $tmp4330 = ($fn4331) ((frost$io$OutputStream*) $tmp4316)->$class->vtable[19];
frost$core$Error* $tmp4332 = $tmp4330(((frost$io$OutputStream*) $tmp4316), $tmp4328);
if ($tmp4332 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4332));
*(&local0) = $tmp4332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4317));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4317));
goto block2;
block1:;
// line 1234
frost$core$Int64 $tmp4333 = (frost$core$Int64) {1234};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4334, $tmp4333);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4335 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4335));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$ClassDecl* param2) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
// line 1239
*(&local0) = ((frost$core$Error*) NULL);
// line 1240
frost$core$Weak** $tmp4336 = &param0->compiler;
frost$core$Weak* $tmp4337 = *$tmp4336;
frost$core$Object* $tmp4338 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4337);
frost$core$Bit $tmp4339 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4338), param2);
frost$core$Bit $tmp4340 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp4339);
bool $tmp4341 = $tmp4340.value;
if ($tmp4341) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4342 = (frost$core$Int64) {1240};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4343, $tmp4342);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4338);
// line 1241
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4344 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param2);
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4344));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4345 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4345));
*(&local1) = $tmp4344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4344));
// line 1242
*(&local2) = ((frost$core$String*) NULL);
// line 1243
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4346 = *(&local1);
frost$core$String** $tmp4347 = &$tmp4346->type;
frost$core$String* $tmp4348 = *$tmp4347;
ITable* $tmp4350 = ((frost$core$Equatable*) $tmp4348)->$class->itable;
while ($tmp4350->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4350 = $tmp4350->next;
}
$fn4352 $tmp4351 = $tmp4350->methods[1];
frost$core$Bit $tmp4353 = $tmp4351(((frost$core$Equatable*) $tmp4348), ((frost$core$Equatable*) &$s4349));
bool $tmp4354 = $tmp4353.value;
if ($tmp4354) goto block5; else goto block7;
block5:;
// line 1244
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4355 = *(&local1);
frost$core$String** $tmp4356 = &$tmp4355->name;
frost$core$String* $tmp4357 = *$tmp4356;
frost$core$String* $tmp4358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4359, $tmp4357);
frost$core$String* $tmp4360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4358, &$s4361);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4360));
frost$core$String* $tmp4362 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4362));
*(&local2) = $tmp4360;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4358));
goto block6;
block7:;
// line 1
// line 1247
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4363 = *(&local1);
frost$core$String** $tmp4364 = &$tmp4363->name;
frost$core$String* $tmp4365 = *$tmp4364;
frost$core$String* $tmp4366 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4367, $tmp4365);
frost$core$String* $tmp4368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4366, &$s4369);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4368));
frost$core$String* $tmp4370 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4370));
*(&local2) = $tmp4368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4366));
goto block6;
block6:;
// line 1249
frost$core$String* $tmp4371 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4371));
frost$core$String* $tmp4372 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4372));
*(&local3) = $tmp4371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4371));
// line 1250
org$frostlang$frostc$Type** $tmp4373 = &param2->type;
org$frostlang$frostc$Type* $tmp4374 = *$tmp4373;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4374));
org$frostlang$frostc$Type* $tmp4375 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4375));
*(&local4) = $tmp4374;
// line 1251
frost$io$IndentedOutputStream** $tmp4376 = &param0->out;
frost$io$IndentedOutputStream* $tmp4377 = *$tmp4376;
org$frostlang$frostc$Type* $tmp4378 = *(&local4);
frost$core$String* $tmp4379 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4378);
frost$core$String* $tmp4380 = frost$core$String$get_asString$R$frost$core$String($tmp4379);
frost$core$String* $tmp4381 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4380, &$s4382);
frost$core$String* $tmp4383 = *(&local3);
frost$core$String* $tmp4384 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4381, $tmp4383);
frost$core$String* $tmp4385 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4384, &$s4386);
org$frostlang$frostc$Type* $tmp4387 = *(&local4);
frost$core$String* $tmp4388 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4387);
frost$core$String* $tmp4389 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4385, $tmp4388);
frost$core$String* $tmp4390 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4389, &$s4391);
org$frostlang$frostc$Type* $tmp4392 = *(&local4);
frost$core$Int64 $tmp4393 = org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp4392);
frost$core$String* $tmp4394 = frost$core$Int64$get_asString$R$frost$core$String($tmp4393);
frost$core$String* $tmp4395 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4394, &$s4396);
frost$core$String* $tmp4397 = *(&local2);
frost$core$String* $tmp4398 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4395, $tmp4397);
frost$core$String* $tmp4399 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4398, &$s4400);
frost$core$String* $tmp4401 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4390, $tmp4399);
$fn4403 $tmp4402 = ($fn4403) ((frost$io$OutputStream*) $tmp4377)->$class->vtable[19];
frost$core$Error* $tmp4404 = $tmp4402(((frost$io$OutputStream*) $tmp4377), $tmp4401);
if ($tmp4404 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4404));
*(&local0) = $tmp4404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4379));
org$frostlang$frostc$Type* $tmp4405 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4405));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4406 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4406));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4407 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4407));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4408 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4408));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4379));
// line 1253
frost$collections$HashMap** $tmp4409 = &param0->refs;
frost$collections$HashMap* $tmp4410 = *$tmp4409;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4411;
$tmp4411 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4411->value = param1;
frost$core$String* $tmp4412 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4410, ((frost$collections$Key*) $tmp4411), ((frost$core$Object*) $tmp4412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4411)));
org$frostlang$frostc$Type* $tmp4413 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4413));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4414 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4414));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4415 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4415));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4416 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4416));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block2;
block1:;
// line 1256
frost$core$Int64 $tmp4417 = (frost$core$Int64) {1256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4418, $tmp4417);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4419 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4419));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$ClassDecl* param2, org$frostlang$frostc$FixedArray* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
// line 1261
*(&local0) = ((frost$core$Error*) NULL);
// line 1262
frost$core$Weak** $tmp4420 = &param0->compiler;
frost$core$Weak* $tmp4421 = *$tmp4420;
frost$core$Object* $tmp4422 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4421);
frost$core$Bit $tmp4423 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4422), param2);
bool $tmp4424 = $tmp4423.value;
if ($tmp4424) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4425 = (frost$core$Int64) {1262};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4426, $tmp4425);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4422);
// line 1263
frost$core$String* $tmp4427 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4427));
frost$core$String* $tmp4428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4428));
*(&local1) = $tmp4427;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4427));
// line 1264
org$frostlang$frostc$Type** $tmp4429 = &param2->type;
org$frostlang$frostc$Type* $tmp4430 = *$tmp4429;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4430));
org$frostlang$frostc$Type* $tmp4431 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4431));
*(&local2) = $tmp4430;
// line 1265
frost$io$IndentedOutputStream** $tmp4432 = &param0->out;
frost$io$IndentedOutputStream* $tmp4433 = *$tmp4432;
org$frostlang$frostc$Type* $tmp4434 = *(&local2);
frost$core$String* $tmp4435 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4434);
frost$core$String* $tmp4436 = frost$core$String$get_asString$R$frost$core$String($tmp4435);
frost$core$String* $tmp4437 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4436, &$s4438);
frost$core$String* $tmp4439 = *(&local1);
frost$core$String* $tmp4440 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4437, $tmp4439);
frost$core$String* $tmp4441 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4440, &$s4442);
org$frostlang$frostc$Type* $tmp4443 = *(&local2);
frost$core$String* $tmp4444 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4443);
frost$core$String* $tmp4445 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4441, $tmp4444);
frost$core$String* $tmp4446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4445, &$s4447);
$fn4449 $tmp4448 = ($fn4449) ((frost$io$OutputStream*) $tmp4433)->$class->vtable[17];
frost$core$Error* $tmp4450 = $tmp4448(((frost$io$OutputStream*) $tmp4433), $tmp4446);
if ($tmp4450 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4450));
*(&local0) = $tmp4450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4435));
org$frostlang$frostc$Type* $tmp4451 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4451));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4452 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4452));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4435));
// line 1266
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4453));
frost$core$String* $tmp4454 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4454));
*(&local3) = &$s4455;
// line 1267
ITable* $tmp4456 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp4456->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4456 = $tmp4456->next;
}
$fn4458 $tmp4457 = $tmp4456->methods[0];
frost$collections$Iterator* $tmp4459 = $tmp4457(((frost$collections$Iterable*) param3));
goto block7;
block7:;
ITable* $tmp4460 = $tmp4459->$class->itable;
while ($tmp4460->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4460 = $tmp4460->next;
}
$fn4462 $tmp4461 = $tmp4460->methods[0];
frost$core$Bit $tmp4463 = $tmp4461($tmp4459);
bool $tmp4464 = $tmp4463.value;
if ($tmp4464) goto block9; else goto block8;
block8:;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp4465 = $tmp4459->$class->itable;
while ($tmp4465->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4465 = $tmp4465->next;
}
$fn4467 $tmp4466 = $tmp4465->methods[1];
frost$core$Object* $tmp4468 = $tmp4466($tmp4459);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp4468)));
org$frostlang$frostc$IR$Value* $tmp4469 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4469));
*(&local4) = ((org$frostlang$frostc$IR$Value*) $tmp4468);
// line 1268
frost$io$IndentedOutputStream** $tmp4470 = &param0->out;
frost$io$IndentedOutputStream* $tmp4471 = *$tmp4470;
frost$core$String* $tmp4472 = *(&local3);
frost$core$String* $tmp4473 = frost$core$String$get_asString$R$frost$core$String($tmp4472);
frost$core$String* $tmp4474 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4473, &$s4475);
org$frostlang$frostc$IR$Value* $tmp4476 = *(&local4);
frost$core$String* $tmp4477 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp4476);
frost$core$String* $tmp4478 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4474, $tmp4477);
frost$core$String* $tmp4479 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4478, &$s4480);
$fn4482 $tmp4481 = ($fn4482) ((frost$io$OutputStream*) $tmp4471)->$class->vtable[17];
frost$core$Error* $tmp4483 = $tmp4481(((frost$io$OutputStream*) $tmp4471), $tmp4479);
if ($tmp4483 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4483));
*(&local0) = $tmp4483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4473));
frost$core$Frost$unref$frost$core$Object$Q($tmp4468);
org$frostlang$frostc$IR$Value* $tmp4484 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4484));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4459));
frost$core$String* $tmp4485 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4485));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4486 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4486));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4487 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4487));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4473));
// line 1269
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4488));
frost$core$String* $tmp4489 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4489));
*(&local3) = &$s4490;
frost$core$Frost$unref$frost$core$Object$Q($tmp4468);
org$frostlang$frostc$IR$Value* $tmp4491 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4491));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4459));
// line 1271
frost$io$IndentedOutputStream** $tmp4492 = &param0->out;
frost$io$IndentedOutputStream* $tmp4493 = *$tmp4492;
$fn4495 $tmp4494 = ($fn4495) ((frost$io$OutputStream*) $tmp4493)->$class->vtable[19];
frost$core$Error* $tmp4496 = $tmp4494(((frost$io$OutputStream*) $tmp4493), &$s4497);
if ($tmp4496 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4496));
*(&local0) = $tmp4496;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4496));
frost$core$String* $tmp4498 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4498));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4499 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4499));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4500 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4500));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4496));
// line 1272
frost$collections$HashMap** $tmp4501 = &param0->refs;
frost$collections$HashMap* $tmp4502 = *$tmp4501;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4503;
$tmp4503 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4503->value = param1;
frost$core$String* $tmp4504 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4502, ((frost$collections$Key*) $tmp4503), ((frost$core$Object*) $tmp4504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4503)));
frost$core$String* $tmp4505 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4505));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4506 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4506));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4507 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4507));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1275
frost$core$Int64 $tmp4508 = (frost$core$Int64) {1275};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4509, $tmp4508);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4510 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4510));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeDynamicCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, frost$collections$ListView* param3) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
// line 1280
*(&local0) = ((frost$core$Error*) NULL);
// line 1281
$fn4512 $tmp4511 = ($fn4512) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4513 = $tmp4511(param2);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4513));
org$frostlang$frostc$Type* $tmp4514 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4514));
*(&local1) = $tmp4513;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4513));
// line 1282
org$frostlang$frostc$Type* $tmp4515 = *(&local1);
frost$core$Bit $tmp4516 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp4515);
bool $tmp4517 = $tmp4516.value;
if ($tmp4517) goto block3; else goto block4;
block3:;
// line 1283
org$frostlang$frostc$Type* $tmp4518 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp4519 = &$tmp4518->subtypes;
org$frostlang$frostc$FixedArray* $tmp4520 = *$tmp4519;
frost$core$Int64 $tmp4521 = (frost$core$Int64) {1};
frost$core$Object* $tmp4522 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp4520, $tmp4521);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp4522)));
org$frostlang$frostc$Type* $tmp4523 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4523));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp4522);
frost$core$Frost$unref$frost$core$Object$Q($tmp4522);
goto block4;
block4:;
// line 1285
org$frostlang$frostc$Type* $tmp4524 = *(&local1);
org$frostlang$frostc$Type* $tmp4525 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp4524);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4525));
org$frostlang$frostc$Type* $tmp4526 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4526));
*(&local2) = $tmp4525;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4525));
// line 1286
org$frostlang$frostc$Type* $tmp4527 = *(&local2);
org$frostlang$frostc$Type* $tmp4528 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp4529 = ((frost$core$Equatable*) $tmp4527)->$class->itable;
while ($tmp4529->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4529 = $tmp4529->next;
}
$fn4531 $tmp4530 = $tmp4529->methods[1];
frost$core$Bit $tmp4532 = $tmp4530(((frost$core$Equatable*) $tmp4527), ((frost$core$Equatable*) $tmp4528));
bool $tmp4533 = $tmp4532.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4528));
if ($tmp4533) goto block5; else goto block6;
block5:;
// line 1287
frost$core$String* $tmp4534 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4534));
frost$core$String* $tmp4535 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4535));
*(&local3) = $tmp4534;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4534));
// line 1288
frost$io$IndentedOutputStream** $tmp4536 = &param0->out;
frost$io$IndentedOutputStream* $tmp4537 = *$tmp4536;
org$frostlang$frostc$Type* $tmp4538 = *(&local2);
frost$core$String* $tmp4539 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4538);
frost$core$String* $tmp4540 = frost$core$String$get_asString$R$frost$core$String($tmp4539);
frost$core$String* $tmp4541 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4540, &$s4542);
frost$core$String* $tmp4543 = *(&local3);
frost$core$String* $tmp4544 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4541, $tmp4543);
frost$core$String* $tmp4545 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4544, &$s4546);
$fn4548 $tmp4547 = ($fn4548) ((frost$io$OutputStream*) $tmp4537)->$class->vtable[17];
frost$core$Error* $tmp4549 = $tmp4547(((frost$io$OutputStream*) $tmp4537), $tmp4545);
if ($tmp4549 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4549));
*(&local0) = $tmp4549;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4541));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4540));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4539));
frost$core$String* $tmp4550 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4550));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4551 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4551));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4552 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4552));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4541));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4540));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4539));
// line 1289
frost$collections$HashMap** $tmp4553 = &param0->refs;
frost$collections$HashMap* $tmp4554 = *$tmp4553;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4555;
$tmp4555 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4555->value = param1;
frost$core$String* $tmp4556 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4554, ((frost$collections$Key*) $tmp4555), ((frost$core$Object*) $tmp4556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4555)));
frost$core$String* $tmp4557 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4557));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block6:;
// line 1291
frost$io$IndentedOutputStream** $tmp4558 = &param0->out;
frost$io$IndentedOutputStream* $tmp4559 = *$tmp4558;
frost$core$String* $tmp4560 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4561 = frost$core$String$get_asString$R$frost$core$String($tmp4560);
frost$core$String* $tmp4562 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4561, &$s4563);
$fn4565 $tmp4564 = ($fn4565) ((frost$io$OutputStream*) $tmp4559)->$class->vtable[17];
frost$core$Error* $tmp4566 = $tmp4564(((frost$io$OutputStream*) $tmp4559), $tmp4562);
if ($tmp4566 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4566));
*(&local0) = $tmp4566;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4566));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4560));
org$frostlang$frostc$Type* $tmp4567 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4567));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4568 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4568));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4566));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4560));
// line 1292
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4569));
frost$core$String* $tmp4570 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4570));
*(&local4) = &$s4571;
// line 1293
ITable* $tmp4572 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp4572->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4572 = $tmp4572->next;
}
$fn4574 $tmp4573 = $tmp4572->methods[0];
frost$collections$Iterator* $tmp4575 = $tmp4573(((frost$collections$Iterable*) param3));
goto block11;
block11:;
ITable* $tmp4576 = $tmp4575->$class->itable;
while ($tmp4576->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4576 = $tmp4576->next;
}
$fn4578 $tmp4577 = $tmp4576->methods[0];
frost$core$Bit $tmp4579 = $tmp4577($tmp4575);
bool $tmp4580 = $tmp4579.value;
if ($tmp4580) goto block13; else goto block12;
block12:;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp4581 = $tmp4575->$class->itable;
while ($tmp4581->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4581 = $tmp4581->next;
}
$fn4583 $tmp4582 = $tmp4581->methods[1];
frost$core$Object* $tmp4584 = $tmp4582($tmp4575);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp4584)));
org$frostlang$frostc$IR$Value* $tmp4585 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4585));
*(&local5) = ((org$frostlang$frostc$IR$Value*) $tmp4584);
// line 1294
frost$io$IndentedOutputStream** $tmp4586 = &param0->out;
frost$io$IndentedOutputStream* $tmp4587 = *$tmp4586;
frost$core$String* $tmp4588 = *(&local4);
$fn4590 $tmp4589 = ($fn4590) ((frost$io$OutputStream*) $tmp4587)->$class->vtable[17];
frost$core$Error* $tmp4591 = $tmp4589(((frost$io$OutputStream*) $tmp4587), $tmp4588);
if ($tmp4591 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4591));
*(&local0) = $tmp4591;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4591));
frost$core$Frost$unref$frost$core$Object$Q($tmp4584);
org$frostlang$frostc$IR$Value* $tmp4592 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4592));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4575));
frost$core$String* $tmp4593 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4593));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4594 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4594));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4595 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4595));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4591));
// line 1295
frost$io$IndentedOutputStream** $tmp4596 = &param0->out;
frost$io$IndentedOutputStream* $tmp4597 = *$tmp4596;
org$frostlang$frostc$IR$Value* $tmp4598 = *(&local5);
frost$core$String* $tmp4599 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp4598);
$fn4601 $tmp4600 = ($fn4601) ((frost$io$OutputStream*) $tmp4597)->$class->vtable[17];
frost$core$Error* $tmp4602 = $tmp4600(((frost$io$OutputStream*) $tmp4597), $tmp4599);
if ($tmp4602 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4602));
*(&local0) = $tmp4602;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4599));
frost$core$Frost$unref$frost$core$Object$Q($tmp4584);
org$frostlang$frostc$IR$Value* $tmp4603 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4603));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4575));
frost$core$String* $tmp4604 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4604));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4605 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4605));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4606 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4606));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4599));
// line 1296
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4607));
frost$core$String* $tmp4608 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4608));
*(&local4) = &$s4609;
frost$core$Frost$unref$frost$core$Object$Q($tmp4584);
org$frostlang$frostc$IR$Value* $tmp4610 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4610));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4575));
// line 1298
frost$io$IndentedOutputStream** $tmp4611 = &param0->out;
frost$io$IndentedOutputStream* $tmp4612 = *$tmp4611;
$fn4614 $tmp4613 = ($fn4614) ((frost$io$OutputStream*) $tmp4612)->$class->vtable[19];
frost$core$Error* $tmp4615 = $tmp4613(((frost$io$OutputStream*) $tmp4612), &$s4616);
if ($tmp4615 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4615));
*(&local0) = $tmp4615;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4615));
frost$core$String* $tmp4617 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4617));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4618 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4618));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4619 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4619));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4615));
frost$core$String* $tmp4620 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4620));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4621 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4621));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4622 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4622));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block2;
block1:;
// line 1301
frost$core$Int64 $tmp4623 = (frost$core$Int64) {1301};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4624, $tmp4623);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4625 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4625));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FieldDecl* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1306
*(&local0) = ((frost$core$Error*) NULL);
// line 1307
frost$core$Weak** $tmp4626 = &param0->compiler;
frost$core$Weak* $tmp4627 = *$tmp4626;
frost$core$Object* $tmp4628 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4627);
frost$core$Bit $tmp4629 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4628), param3);
frost$core$Frost$unref$frost$core$Object$Q($tmp4628);
// line 1308
frost$core$String* $tmp4630 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4630));
frost$core$String* $tmp4631 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4631));
*(&local1) = $tmp4630;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4630));
// line 1309
frost$core$String* $tmp4632 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4632));
frost$core$String* $tmp4633 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4633));
*(&local2) = $tmp4632;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4632));
// line 1310
frost$io$IndentedOutputStream** $tmp4634 = &param0->out;
frost$io$IndentedOutputStream* $tmp4635 = *$tmp4634;
org$frostlang$frostc$Type** $tmp4636 = &param3->type;
org$frostlang$frostc$Type* $tmp4637 = *$tmp4636;
frost$core$String* $tmp4638 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4637);
frost$core$String* $tmp4639 = frost$core$String$get_asString$R$frost$core$String($tmp4638);
frost$core$String* $tmp4640 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4639, &$s4641);
frost$core$String* $tmp4642 = *(&local2);
frost$core$String* $tmp4643 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4640, $tmp4642);
frost$core$String* $tmp4644 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4643, &$s4645);
frost$core$String* $tmp4646 = *(&local1);
frost$core$String* $tmp4647 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4644, $tmp4646);
frost$core$String* $tmp4648 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4647, &$s4649);
frost$core$String** $tmp4650 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp4651 = *$tmp4650;
frost$core$String* $tmp4652 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4648, $tmp4651);
frost$core$String* $tmp4653 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4652, &$s4654);
$fn4656 $tmp4655 = ($fn4656) ((frost$io$OutputStream*) $tmp4635)->$class->vtable[19];
frost$core$Error* $tmp4657 = $tmp4655(((frost$io$OutputStream*) $tmp4635), $tmp4653);
if ($tmp4657 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4657));
*(&local0) = $tmp4657;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4638));
frost$core$String* $tmp4658 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4658));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4659 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4659));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4638));
// line 1311
frost$collections$HashMap** $tmp4660 = &param0->refs;
frost$collections$HashMap* $tmp4661 = *$tmp4660;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4662;
$tmp4662 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4662->value = param1;
frost$core$String* $tmp4663 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4661, ((frost$collections$Key*) $tmp4662), ((frost$core$Object*) $tmp4663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4662)));
frost$core$String* $tmp4664 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4664));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4665 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4665));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1314
frost$core$Int64 $tmp4666 = (frost$core$Int64) {1314};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4667, $tmp4666);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4668 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4668));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetChoiceFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$ChoiceCase* param3, frost$core$Int64 param4) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$FieldDecl* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$Int64 local3;
frost$core$String* local4 = NULL;
frost$core$String* local5 = NULL;
// line 1320
*(&local0) = ((frost$core$Error*) NULL);
// line 1321
frost$core$Weak** $tmp4669 = &param3->owner;
frost$core$Weak* $tmp4670 = *$tmp4669;
frost$core$Object* $tmp4671 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4670);
frost$collections$Array** $tmp4672 = &((org$frostlang$frostc$ClassDecl*) $tmp4671)->fields;
frost$collections$Array* $tmp4673 = *$tmp4672;
frost$core$Int64 $tmp4674 = (frost$core$Int64) {1};
frost$core$Object* $tmp4675 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4673, $tmp4674);
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp4675)));
org$frostlang$frostc$FieldDecl* $tmp4676 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4676));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) $tmp4675);
frost$core$Frost$unref$frost$core$Object$Q($tmp4675);
frost$core$Frost$unref$frost$core$Object$Q($tmp4671);
// line 1322
org$frostlang$frostc$FieldDecl* $tmp4677 = *(&local1);
frost$core$String** $tmp4678 = &((org$frostlang$frostc$Symbol*) $tmp4677)->name;
frost$core$String* $tmp4679 = *$tmp4678;
frost$core$Bit $tmp4680 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp4679, &$s4681);
bool $tmp4682 = $tmp4680.value;
if ($tmp4682) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4683 = (frost$core$Int64) {1322};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4684, $tmp4683);
abort(); // unreachable
block3:;
// line 1323
frost$core$String* $tmp4685 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4685));
frost$core$String* $tmp4686 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4686));
*(&local2) = $tmp4685;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4685));
// line 1324
frost$core$Weak** $tmp4687 = &param0->compiler;
frost$core$Weak* $tmp4688 = *$tmp4687;
frost$core$Object* $tmp4689 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4688);
org$frostlang$frostc$FieldDecl* $tmp4690 = *(&local1);
frost$core$Int64 $tmp4691 = org$frostlang$frostc$Compiler$getIndex$org$frostlang$frostc$FieldDecl$R$frost$core$Int64(((org$frostlang$frostc$Compiler*) $tmp4689), $tmp4690);
*(&local3) = $tmp4691;
frost$core$Frost$unref$frost$core$Object$Q($tmp4689);
// line 1325
frost$core$String* $tmp4692 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4692));
frost$core$String* $tmp4693 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4693));
*(&local4) = $tmp4692;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4692));
// line 1326
frost$collections$Array** $tmp4694 = &param3->fields;
frost$collections$Array* $tmp4695 = *$tmp4694;
frost$core$Object* $tmp4696 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4695, param4);
frost$core$String* $tmp4697 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp4696));
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4697));
frost$core$String* $tmp4698 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4698));
*(&local5) = $tmp4697;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4697));
frost$core$Frost$unref$frost$core$Object$Q($tmp4696);
// line 1327
frost$io$IndentedOutputStream** $tmp4699 = &param0->out;
frost$io$IndentedOutputStream* $tmp4700 = *$tmp4699;
frost$core$String* $tmp4701 = *(&local5);
frost$core$String* $tmp4702 = frost$core$String$get_asString$R$frost$core$String($tmp4701);
frost$core$String* $tmp4703 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4702, &$s4704);
frost$core$String* $tmp4705 = *(&local4);
frost$core$String* $tmp4706 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4703, $tmp4705);
frost$core$String* $tmp4707 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4706, &$s4708);
frost$core$String* $tmp4709 = *(&local5);
frost$core$String* $tmp4710 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4707, $tmp4709);
frost$core$String* $tmp4711 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4710, &$s4712);
frost$core$String* $tmp4713 = *(&local2);
frost$core$String* $tmp4714 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4711, $tmp4713);
frost$core$String* $tmp4715 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4714, &$s4716);
frost$core$Int64 $tmp4717 = org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64(param0, param3, param4);
frost$core$Int64$wrapper* $tmp4718;
$tmp4718 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4718->value = $tmp4717;
frost$core$String* $tmp4719 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4720, ((frost$core$Object*) $tmp4718));
frost$core$String* $tmp4721 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4719, &$s4722);
frost$core$String* $tmp4723 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4715, $tmp4721);
$fn4725 $tmp4724 = ($fn4725) ((frost$io$OutputStream*) $tmp4700)->$class->vtable[19];
frost$core$Error* $tmp4726 = $tmp4724(((frost$io$OutputStream*) $tmp4700), $tmp4723);
if ($tmp4726 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4726));
*(&local0) = $tmp4726;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4702));
frost$core$String* $tmp4727 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4727));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp4728 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4728));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4729 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4729));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$FieldDecl* $tmp4730 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4730));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4702));
// line 1329
frost$collections$HashMap** $tmp4731 = &param0->refs;
frost$collections$HashMap* $tmp4732 = *$tmp4731;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4733;
$tmp4733 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4733->value = param1;
frost$core$String* $tmp4734 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4732, ((frost$collections$Key*) $tmp4733), ((frost$core$Object*) $tmp4734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4733)));
frost$core$String* $tmp4735 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4735));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp4736 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4736));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4737 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4737));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$FieldDecl* $tmp4738 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4738));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block2;
block1:;
// line 1332
frost$core$Int64 $tmp4739 = (frost$core$Int64) {1332};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4740, $tmp4739);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4741 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4741));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FieldDecl* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1337
*(&local0) = ((frost$core$Error*) NULL);
// line 1338
frost$core$String* $tmp4742 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4742));
frost$core$String* $tmp4743 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4743));
*(&local1) = $tmp4742;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4742));
// line 1339
frost$core$String* $tmp4744 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4744));
frost$core$String* $tmp4745 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4745));
*(&local2) = $tmp4744;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4744));
// line 1340
frost$io$IndentedOutputStream** $tmp4746 = &param0->out;
frost$io$IndentedOutputStream* $tmp4747 = *$tmp4746;
org$frostlang$frostc$Type** $tmp4748 = &param3->type;
org$frostlang$frostc$Type* $tmp4749 = *$tmp4748;
frost$core$String* $tmp4750 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4749);
frost$core$String* $tmp4751 = frost$core$String$get_asString$R$frost$core$String($tmp4750);
frost$core$String* $tmp4752 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4751, &$s4753);
frost$core$String* $tmp4754 = *(&local2);
frost$core$String* $tmp4755 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4752, $tmp4754);
frost$core$String* $tmp4756 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4755, &$s4757);
frost$core$String* $tmp4758 = *(&local1);
frost$core$String* $tmp4759 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4756, $tmp4758);
frost$core$String* $tmp4760 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4759, &$s4761);
frost$core$String** $tmp4762 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp4763 = *$tmp4762;
frost$core$String* $tmp4764 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4760, $tmp4763);
frost$core$String* $tmp4765 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4764, &$s4766);
$fn4768 $tmp4767 = ($fn4768) ((frost$io$OutputStream*) $tmp4747)->$class->vtable[19];
frost$core$Error* $tmp4769 = $tmp4767(((frost$io$OutputStream*) $tmp4747), $tmp4765);
if ($tmp4769 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4769));
*(&local0) = $tmp4769;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4750));
frost$core$String* $tmp4770 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4770));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4771 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4771));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4750));
// line 1341
frost$collections$HashMap** $tmp4772 = &param0->refs;
frost$collections$HashMap* $tmp4773 = *$tmp4772;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4774;
$tmp4774 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4774->value = param1;
frost$core$String* $tmp4775 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4773, ((frost$collections$Key*) $tmp4774), ((frost$core$Object*) $tmp4775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4774)));
frost$core$String* $tmp4776 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4776));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4777 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4777));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1344
frost$core$Int64 $tmp4778 = (frost$core$Int64) {1344};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4779, $tmp4778);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4780 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4780));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$ClassDecl* param3, frost$core$Int64 param4, org$frostlang$frostc$Type* param5) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 1350
*(&local0) = ((frost$core$Error*) NULL);
// line 1351
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4781 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param3);
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4781));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4782 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4782));
*(&local1) = $tmp4781;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4781));
// line 1352
frost$core$String* $tmp4783 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4783));
frost$core$String* $tmp4784 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4784));
*(&local2) = $tmp4783;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4783));
// line 1353
frost$io$IndentedOutputStream** $tmp4785 = &param0->out;
frost$io$IndentedOutputStream* $tmp4786 = *$tmp4785;
frost$core$String* $tmp4787 = *(&local2);
frost$core$String* $tmp4788 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4789, $tmp4787);
frost$core$String* $tmp4790 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4788, &$s4791);
frost$core$String* $tmp4792 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4793 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4790, $tmp4792);
frost$core$String* $tmp4794 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4793, &$s4795);
$fn4797 $tmp4796 = ($fn4797) ((frost$io$OutputStream*) $tmp4786)->$class->vtable[19];
frost$core$Error* $tmp4798 = $tmp4796(((frost$io$OutputStream*) $tmp4786), $tmp4794);
if ($tmp4798 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4798));
*(&local0) = $tmp4798;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4788));
frost$core$String* $tmp4799 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4799));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4800 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4800));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4788));
// line 1354
frost$io$IndentedOutputStream** $tmp4801 = &param0->out;
frost$io$IndentedOutputStream* $tmp4802 = *$tmp4801;
frost$core$String* $tmp4803 = *(&local2);
frost$core$String* $tmp4804 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4805, $tmp4803);
frost$core$String* $tmp4806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4804, &$s4807);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4808 = *(&local1);
frost$core$String** $tmp4809 = &$tmp4808->name;
frost$core$String* $tmp4810 = *$tmp4809;
frost$core$String* $tmp4811 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4806, $tmp4810);
frost$core$String* $tmp4812 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4811, &$s4813);
$fn4815 $tmp4814 = ($fn4815) ((frost$io$OutputStream*) $tmp4802)->$class->vtable[19];
frost$core$Error* $tmp4816 = $tmp4814(((frost$io$OutputStream*) $tmp4802), $tmp4812);
if ($tmp4816 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4816));
*(&local0) = $tmp4816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4804));
frost$core$String* $tmp4817 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4817));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4818 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4818));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4804));
// line 1355
frost$io$IndentedOutputStream** $tmp4819 = &param0->out;
frost$io$IndentedOutputStream* $tmp4820 = *$tmp4819;
frost$core$Int64* $tmp4821 = &$tmp4820->level;
frost$core$Int64 $tmp4822 = *$tmp4821;
frost$core$Int64 $tmp4823 = (frost$core$Int64) {1};
int64_t $tmp4824 = $tmp4822.value;
int64_t $tmp4825 = $tmp4823.value;
int64_t $tmp4826 = $tmp4824 + $tmp4825;
frost$core$Int64 $tmp4827 = (frost$core$Int64) {$tmp4826};
frost$core$Int64* $tmp4828 = &$tmp4820->level;
*$tmp4828 = $tmp4827;
// line 1356
frost$io$IndentedOutputStream** $tmp4829 = &param0->out;
frost$io$IndentedOutputStream* $tmp4830 = *$tmp4829;
frost$core$String* $tmp4831 = *(&local2);
frost$core$String* $tmp4832 = frost$core$String$get_asString$R$frost$core$String($tmp4831);
frost$core$String* $tmp4833 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4832, &$s4834);
frost$core$String* $tmp4835 = *(&local2);
frost$core$String* $tmp4836 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4833, $tmp4835);
frost$core$String* $tmp4837 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4836, &$s4838);
$fn4840 $tmp4839 = ($fn4840) ((frost$io$OutputStream*) $tmp4830)->$class->vtable[19];
frost$core$Error* $tmp4841 = $tmp4839(((frost$io$OutputStream*) $tmp4830), $tmp4837);
if ($tmp4841 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4841));
*(&local0) = $tmp4841;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4832));
frost$core$String* $tmp4842 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4842));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4843 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4843));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4832));
// line 1357
frost$io$IndentedOutputStream** $tmp4844 = &param0->out;
frost$io$IndentedOutputStream* $tmp4845 = *$tmp4844;
frost$core$Int64* $tmp4846 = &$tmp4845->level;
frost$core$Int64 $tmp4847 = *$tmp4846;
frost$core$Int64 $tmp4848 = (frost$core$Int64) {1};
int64_t $tmp4849 = $tmp4847.value;
int64_t $tmp4850 = $tmp4848.value;
int64_t $tmp4851 = $tmp4849 - $tmp4850;
frost$core$Int64 $tmp4852 = (frost$core$Int64) {$tmp4851};
frost$core$Int64* $tmp4853 = &$tmp4845->level;
*$tmp4853 = $tmp4852;
// line 1358
frost$io$IndentedOutputStream** $tmp4854 = &param0->out;
frost$io$IndentedOutputStream* $tmp4855 = *$tmp4854;
$fn4857 $tmp4856 = ($fn4857) ((frost$io$OutputStream*) $tmp4855)->$class->vtable[19];
frost$core$Error* $tmp4858 = $tmp4856(((frost$io$OutputStream*) $tmp4855), &$s4859);
if ($tmp4858 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4858));
*(&local0) = $tmp4858;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4858));
frost$core$String* $tmp4860 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4860));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4861 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4861));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4858));
// line 1359
frost$core$String* $tmp4862 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4862));
frost$core$String* $tmp4863 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4863));
*(&local3) = $tmp4862;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4862));
// line 1360
frost$core$String* $tmp4864 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, param5, ((org$frostlang$frostc$Type*) NULL));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4864));
frost$core$String* $tmp4865 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4865));
*(&local4) = $tmp4864;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4864));
// line 1361
frost$io$IndentedOutputStream** $tmp4866 = &param0->out;
frost$io$IndentedOutputStream* $tmp4867 = *$tmp4866;
frost$core$String* $tmp4868 = *(&local4);
frost$core$String* $tmp4869 = frost$core$String$get_asString$R$frost$core$String($tmp4868);
frost$core$String* $tmp4870 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4869, &$s4871);
frost$core$String* $tmp4872 = *(&local3);
frost$core$String* $tmp4873 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4870, $tmp4872);
frost$core$String* $tmp4874 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4873, &$s4875);
frost$core$String* $tmp4876 = *(&local2);
frost$core$String* $tmp4877 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4874, $tmp4876);
frost$core$String* $tmp4878 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4877, &$s4879);
frost$core$Int64$wrapper* $tmp4880;
$tmp4880 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4880->value = param4;
frost$core$String* $tmp4881 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4878, ((frost$core$Object*) $tmp4880));
frost$core$String* $tmp4882 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4881, &$s4883);
$fn4885 $tmp4884 = ($fn4885) ((frost$io$OutputStream*) $tmp4867)->$class->vtable[19];
frost$core$Error* $tmp4886 = $tmp4884(((frost$io$OutputStream*) $tmp4867), $tmp4882);
if ($tmp4886 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4886));
*(&local0) = $tmp4886;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4881));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4869));
frost$core$String* $tmp4887 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4887));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4888 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4888));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4889 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4889));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4890 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4890));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4881));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4869));
// line 1362
frost$collections$HashMap** $tmp4891 = &param0->refs;
frost$collections$HashMap* $tmp4892 = *$tmp4891;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4893;
$tmp4893 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4893->value = param1;
frost$core$String* $tmp4894 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4892, ((frost$collections$Key*) $tmp4893), ((frost$core$Object*) $tmp4894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4893)));
frost$core$String* $tmp4895 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4895));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4896 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4896));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4897 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4897));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4898 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4898));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block2;
block1:;
// line 1365
frost$core$Int64 $tmp4899 = (frost$core$Int64) {1365};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4900, $tmp4899);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4901 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4901));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, frost$core$Int64 param3, org$frostlang$frostc$Type* param4) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1370
*(&local0) = ((frost$core$Error*) NULL);
// line 1371
frost$core$String* $tmp4902 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4902));
frost$core$String* $tmp4903 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4903));
*(&local1) = $tmp4902;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4902));
// line 1372
frost$core$String* $tmp4904 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, param4, ((org$frostlang$frostc$Type*) NULL));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4904));
frost$core$String* $tmp4905 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4905));
*(&local2) = $tmp4904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4904));
// line 1373
frost$io$IndentedOutputStream** $tmp4906 = &param0->out;
frost$io$IndentedOutputStream* $tmp4907 = *$tmp4906;
frost$core$String* $tmp4908 = *(&local2);
frost$core$String* $tmp4909 = frost$core$String$get_asString$R$frost$core$String($tmp4908);
frost$core$String* $tmp4910 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4909, &$s4911);
frost$core$String* $tmp4912 = *(&local1);
frost$core$String* $tmp4913 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4910, $tmp4912);
frost$core$String* $tmp4914 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4913, &$s4915);
frost$core$String* $tmp4916 = *(&local2);
frost$core$String* $tmp4917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4914, $tmp4916);
frost$core$String* $tmp4918 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4917, &$s4919);
frost$core$String* $tmp4920 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4921 = frost$core$String$get_asString$R$frost$core$String($tmp4920);
frost$core$String* $tmp4922 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4921, &$s4923);
frost$core$Int64$wrapper* $tmp4924;
$tmp4924 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4924->value = param3;
frost$core$String* $tmp4925 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4922, ((frost$core$Object*) $tmp4924));
frost$core$String* $tmp4926 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4925, &$s4927);
frost$core$String* $tmp4928 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4918, $tmp4926);
$fn4930 $tmp4929 = ($fn4930) ((frost$io$OutputStream*) $tmp4907)->$class->vtable[19];
frost$core$Error* $tmp4931 = $tmp4929(((frost$io$OutputStream*) $tmp4907), $tmp4928);
if ($tmp4931 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4931));
*(&local0) = $tmp4931;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4920));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4909));
frost$core$String* $tmp4932 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4932));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4933 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4933));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4920));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4909));
// line 1375
frost$collections$HashMap** $tmp4934 = &param0->refs;
frost$collections$HashMap* $tmp4935 = *$tmp4934;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4936;
$tmp4936 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4936->value = param1;
frost$core$String* $tmp4937 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4935, ((frost$collections$Key*) $tmp4936), ((frost$core$Object*) $tmp4937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4936)));
frost$core$String* $tmp4938 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4938));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4939 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4939));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1378
frost$core$Int64 $tmp4940 = (frost$core$Int64) {1378};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4941, $tmp4940);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4942 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4942));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1383
*(&local0) = ((frost$core$Error*) NULL);
// line 1384
frost$core$String* $tmp4943 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4943));
frost$core$String* $tmp4944 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4944));
*(&local1) = $tmp4943;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4943));
// line 1385
frost$io$IndentedOutputStream** $tmp4945 = &param0->out;
frost$io$IndentedOutputStream* $tmp4946 = *$tmp4945;
$fn4948 $tmp4947 = ($fn4948) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4949 = $tmp4947(param2);
frost$core$String* $tmp4950 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4949);
frost$core$String* $tmp4951 = frost$core$String$get_asString$R$frost$core$String($tmp4950);
frost$core$String* $tmp4952 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4951, &$s4953);
frost$core$String* $tmp4954 = *(&local1);
frost$core$String* $tmp4955 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4952, $tmp4954);
frost$core$String* $tmp4956 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4955, &$s4957);
frost$core$String* $tmp4958 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4959 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4956, $tmp4958);
frost$core$String* $tmp4960 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4959, &$s4961);
$fn4963 $tmp4962 = ($fn4963) ((frost$io$OutputStream*) $tmp4946)->$class->vtable[19];
frost$core$Error* $tmp4964 = $tmp4962(((frost$io$OutputStream*) $tmp4946), $tmp4960);
if ($tmp4964 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4964));
*(&local0) = $tmp4964;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4952));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4950));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4949));
frost$core$String* $tmp4965 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4965));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4952));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4950));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4949));
// line 1386
frost$collections$HashMap** $tmp4966 = &param0->refs;
frost$collections$HashMap* $tmp4967 = *$tmp4966;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4968;
$tmp4968 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4968->value = param1;
frost$core$String* $tmp4969 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4967, ((frost$collections$Key*) $tmp4968), ((frost$core$Object*) $tmp4969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4968)));
frost$core$String* $tmp4970 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4970));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1389
frost$core$Int64 $tmp4971 = (frost$core$Int64) {1389};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4972, $tmp4971);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4973 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4973));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1394
*(&local0) = ((frost$core$Error*) NULL);
// line 1395
frost$core$String* $tmp4974 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4974));
frost$core$String* $tmp4975 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4975));
*(&local1) = $tmp4974;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4974));
// line 1396
frost$io$IndentedOutputStream** $tmp4976 = &param0->out;
frost$io$IndentedOutputStream* $tmp4977 = *$tmp4976;
$fn4979 $tmp4978 = ($fn4979) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4980 = $tmp4978(param2);
frost$core$String* $tmp4981 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4980);
frost$core$String* $tmp4982 = frost$core$String$get_asString$R$frost$core$String($tmp4981);
frost$core$String* $tmp4983 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4982, &$s4984);
frost$core$String* $tmp4985 = *(&local1);
frost$core$String* $tmp4986 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4983, $tmp4985);
frost$core$String* $tmp4987 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4986, &$s4988);
frost$core$String* $tmp4989 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4990 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4987, $tmp4989);
frost$core$String* $tmp4991 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4990, &$s4992);
$fn4994 $tmp4993 = ($fn4994) ((frost$io$OutputStream*) $tmp4977)->$class->vtable[19];
frost$core$Error* $tmp4995 = $tmp4993(((frost$io$OutputStream*) $tmp4977), $tmp4991);
if ($tmp4995 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4995));
*(&local0) = $tmp4995;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4991));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4983));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4980));
frost$core$String* $tmp4996 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4996));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4991));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4983));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4980));
// line 1397
frost$collections$HashMap** $tmp4997 = &param0->refs;
frost$collections$HashMap* $tmp4998 = *$tmp4997;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4999;
$tmp4999 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4999->value = param1;
frost$core$String* $tmp5000 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4998, ((frost$collections$Key*) $tmp4999), ((frost$core$Object*) $tmp5000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4999)));
frost$core$String* $tmp5001 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5001));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1400
frost$core$Int64 $tmp5002 = (frost$core$Int64) {1400};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5003, $tmp5002);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5004 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5004));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1405
*(&local0) = ((frost$core$Error*) NULL);
// line 1406
frost$core$String* $tmp5005 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5005));
frost$core$String* $tmp5006 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5006));
*(&local1) = $tmp5005;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5005));
// line 1407
frost$io$IndentedOutputStream** $tmp5007 = &param0->out;
frost$io$IndentedOutputStream* $tmp5008 = *$tmp5007;
$fn5010 $tmp5009 = ($fn5010) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5011 = $tmp5009(param2);
frost$core$String* $tmp5012 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5011);
frost$core$String* $tmp5013 = frost$core$String$get_asString$R$frost$core$String($tmp5012);
frost$core$String* $tmp5014 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5013, &$s5015);
frost$core$String* $tmp5016 = *(&local1);
frost$core$String* $tmp5017 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5014, $tmp5016);
frost$core$String* $tmp5018 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5017, &$s5019);
frost$core$String* $tmp5020 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp5021 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5018, $tmp5020);
frost$core$String* $tmp5022 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5021, &$s5023);
$fn5025 $tmp5024 = ($fn5025) ((frost$io$OutputStream*) $tmp5008)->$class->vtable[19];
frost$core$Error* $tmp5026 = $tmp5024(((frost$io$OutputStream*) $tmp5008), $tmp5022);
if ($tmp5026 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5026));
*(&local0) = $tmp5026;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5011));
frost$core$String* $tmp5027 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5027));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5011));
// line 1408
frost$collections$HashMap** $tmp5028 = &param0->refs;
frost$collections$HashMap* $tmp5029 = *$tmp5028;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5030;
$tmp5030 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5030->value = param1;
frost$core$String* $tmp5031 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5029, ((frost$collections$Key*) $tmp5030), ((frost$core$Object*) $tmp5031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5030)));
frost$core$String* $tmp5032 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5032));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1411
frost$core$Int64 $tmp5033 = (frost$core$Int64) {1411};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5034, $tmp5033);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5035 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5035));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$Type* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 1416
*(&local0) = ((frost$core$Error*) NULL);
// line 1417
frost$core$String* $tmp5036 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5036));
frost$core$String* $tmp5037 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5037));
*(&local1) = $tmp5036;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5036));
// line 1418
frost$core$Int64 $tmp5038 = org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param3);
*(&local2) = $tmp5038;
// line 1419
frost$core$String* $tmp5039 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5039));
frost$core$String* $tmp5040 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5040));
*(&local3) = $tmp5039;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5039));
// line 1420
frost$core$String* $tmp5041 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5041));
frost$core$String* $tmp5042 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5042));
*(&local4) = $tmp5041;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5041));
// line 1421
frost$io$IndentedOutputStream** $tmp5043 = &param0->out;
frost$io$IndentedOutputStream* $tmp5044 = *$tmp5043;
frost$core$String* $tmp5045 = *(&local3);
frost$core$String* $tmp5046 = frost$core$String$get_asString$R$frost$core$String($tmp5045);
frost$core$String* $tmp5047 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5046, &$s5048);
frost$core$String* $tmp5049 = *(&local4);
frost$core$String* $tmp5050 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5047, $tmp5049);
frost$core$String* $tmp5051 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5050, &$s5052);
frost$core$String* $tmp5053 = *(&local3);
frost$core$String* $tmp5054 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5051, $tmp5053);
frost$core$String* $tmp5055 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5054, &$s5056);
frost$core$String* $tmp5057 = *(&local1);
frost$core$String* $tmp5058 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5055, $tmp5057);
frost$core$String* $tmp5059 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5058, &$s5060);
frost$core$Int64 $tmp5061 = *(&local2);
frost$core$String* $tmp5062 = frost$core$Int64$get_asString$R$frost$core$String($tmp5061);
frost$core$String* $tmp5063 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5062, &$s5064);
frost$core$String* $tmp5065 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5059, $tmp5063);
$fn5067 $tmp5066 = ($fn5067) ((frost$io$OutputStream*) $tmp5044)->$class->vtable[19];
frost$core$Error* $tmp5068 = $tmp5066(((frost$io$OutputStream*) $tmp5044), $tmp5065);
if ($tmp5068 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5068));
*(&local0) = $tmp5068;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5058));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5046));
frost$core$String* $tmp5069 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5069));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5070 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5070));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5071 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5071));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5058));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5046));
// line 1423
frost$collections$HashMap** $tmp5072 = &param0->refs;
frost$collections$HashMap* $tmp5073 = *$tmp5072;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5074;
$tmp5074 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5074->value = param1;
frost$core$String* $tmp5075 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5073, ((frost$collections$Key*) $tmp5074), ((frost$core$Object*) $tmp5075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5074)));
frost$core$String* $tmp5076 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5076));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5077 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5077));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5078 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5078));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1426
frost$core$Int64 $tmp5079 = (frost$core$Int64) {1426};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5080, $tmp5079);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5081 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5081));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1431
*(&local0) = ((frost$core$Error*) NULL);
// line 1432
frost$core$String* $tmp5082 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5082));
frost$core$String* $tmp5083 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5083));
*(&local1) = $tmp5082;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5082));
// line 1433
frost$io$IndentedOutputStream** $tmp5084 = &param0->out;
frost$io$IndentedOutputStream* $tmp5085 = *$tmp5084;
frost$core$String* $tmp5086 = *(&local1);
frost$core$String* $tmp5087 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5088, $tmp5086);
frost$core$String* $tmp5089 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5087, &$s5090);
$fn5092 $tmp5091 = ($fn5092) ((frost$io$OutputStream*) $tmp5085)->$class->vtable[19];
frost$core$Error* $tmp5093 = $tmp5091(((frost$io$OutputStream*) $tmp5085), $tmp5089);
if ($tmp5093 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5093));
*(&local0) = $tmp5093;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5087));
frost$core$String* $tmp5094 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5094));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5087));
frost$core$String* $tmp5095 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5095));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1436
frost$core$Int64 $tmp5096 = (frost$core$Int64) {1436};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5097, $tmp5096);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5098 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5098));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 1441
*(&local0) = ((frost$core$Error*) NULL);
// line 1442
frost$core$String* $tmp5099 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5099));
frost$core$String* $tmp5100 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5100));
*(&local1) = $tmp5099;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5099));
// line 1443
frost$core$String* $tmp5101 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5101));
frost$core$String* $tmp5102 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5102));
*(&local2) = $tmp5101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5101));
// line 1444
frost$core$String* $tmp5103 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5103));
frost$core$String* $tmp5104 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5104));
*(&local3) = $tmp5103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5103));
// line 1445
frost$io$IndentedOutputStream** $tmp5105 = &param0->out;
frost$io$IndentedOutputStream* $tmp5106 = *$tmp5105;
$fn5108 $tmp5107 = ($fn5108) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5109 = $tmp5107(param2);
org$frostlang$frostc$FixedArray** $tmp5110 = &$tmp5109->subtypes;
org$frostlang$frostc$FixedArray* $tmp5111 = *$tmp5110;
frost$core$Int64 $tmp5112 = (frost$core$Int64) {1};
frost$core$Object* $tmp5113 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp5111, $tmp5112);
frost$core$String* $tmp5114 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp5113));
frost$core$String* $tmp5115 = frost$core$String$get_asString$R$frost$core$String($tmp5114);
frost$core$String* $tmp5116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5115, &$s5117);
frost$core$String* $tmp5118 = *(&local3);
frost$core$String* $tmp5119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5116, $tmp5118);
frost$core$String* $tmp5120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5119, &$s5121);
frost$core$String* $tmp5122 = *(&local1);
frost$core$String* $tmp5123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5120, $tmp5122);
frost$core$String* $tmp5124 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5123, &$s5125);
frost$core$String* $tmp5126 = *(&local2);
frost$core$String* $tmp5127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5124, $tmp5126);
frost$core$String* $tmp5128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5127, &$s5129);
$fn5131 $tmp5130 = ($fn5131) ((frost$io$OutputStream*) $tmp5106)->$class->vtable[19];
frost$core$Error* $tmp5132 = $tmp5130(((frost$io$OutputStream*) $tmp5106), $tmp5128);
if ($tmp5132 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5132));
*(&local0) = $tmp5132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5114));
frost$core$Frost$unref$frost$core$Object$Q($tmp5113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5109));
frost$core$String* $tmp5133 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5133));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5134 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5134));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5135 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5135));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5114));
frost$core$Frost$unref$frost$core$Object$Q($tmp5113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5109));
// line 1446
frost$collections$HashMap** $tmp5136 = &param0->refs;
frost$collections$HashMap* $tmp5137 = *$tmp5136;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5138;
$tmp5138 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5138->value = param1;
frost$core$String* $tmp5139 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5137, ((frost$collections$Key*) $tmp5138), ((frost$core$Object*) $tmp5139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5138)));
frost$core$String* $tmp5140 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5140));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5141 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5141));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5142 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5142));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1449
frost$core$Int64 $tmp5143 = (frost$core$Int64) {1449};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5144, $tmp5143);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5145 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5145));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 1454
*(&local0) = ((frost$core$Error*) NULL);
// line 1455
frost$core$String* $tmp5146 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5146));
frost$core$String* $tmp5147 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5147));
*(&local1) = $tmp5146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5146));
// line 1456
frost$core$String* $tmp5148 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5148));
frost$core$String* $tmp5149 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5149));
*(&local2) = $tmp5148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5148));
// line 1457
frost$core$String* $tmp5150 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5150));
frost$core$String* $tmp5151 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5151));
*(&local3) = $tmp5150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5150));
// line 1458
frost$io$IndentedOutputStream** $tmp5152 = &param0->out;
frost$io$IndentedOutputStream* $tmp5153 = *$tmp5152;
$fn5155 $tmp5154 = ($fn5155) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5156 = $tmp5154(param2);
frost$core$String* $tmp5157 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5156);
frost$core$String* $tmp5158 = frost$core$String$get_asString$R$frost$core$String($tmp5157);
frost$core$String* $tmp5159 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5158, &$s5160);
frost$core$String* $tmp5161 = *(&local3);
frost$core$String* $tmp5162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5159, $tmp5161);
frost$core$String* $tmp5163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5162, &$s5164);
frost$core$String* $tmp5165 = *(&local1);
frost$core$String* $tmp5166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5163, $tmp5165);
frost$core$String* $tmp5167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5166, &$s5168);
frost$core$String* $tmp5169 = *(&local2);
frost$core$String* $tmp5170 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5167, $tmp5169);
frost$core$String* $tmp5171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5170, &$s5172);
$fn5174 $tmp5173 = ($fn5174) ((frost$io$OutputStream*) $tmp5153)->$class->vtable[19];
frost$core$Error* $tmp5175 = $tmp5173(((frost$io$OutputStream*) $tmp5153), $tmp5171);
if ($tmp5175 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5175));
*(&local0) = $tmp5175;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5156));
frost$core$String* $tmp5176 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5176));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5177 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5177));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5178 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5178));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5156));
// line 1459
frost$collections$HashMap** $tmp5179 = &param0->refs;
frost$collections$HashMap* $tmp5180 = *$tmp5179;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5181;
$tmp5181 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5181->value = param1;
frost$core$String* $tmp5182 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5180, ((frost$collections$Key*) $tmp5181), ((frost$core$Object*) $tmp5182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5181)));
frost$core$String* $tmp5183 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5183));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5184 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5184));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5185 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5185));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1462
frost$core$Int64 $tmp5186 = (frost$core$Int64) {1462};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5187, $tmp5186);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5188 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5188));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerRealloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$IR$Value* param4) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$Int64 local4;
frost$core$String* local5 = NULL;
// line 1468
*(&local0) = ((frost$core$Error*) NULL);
// line 1469
frost$core$String* $tmp5189 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5189));
frost$core$String* $tmp5190 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5190));
*(&local1) = $tmp5189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5189));
// line 1470
frost$core$String* $tmp5191 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5191));
frost$core$String* $tmp5192 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5192));
*(&local2) = $tmp5191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5191));
// line 1471
frost$core$String* $tmp5193 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param4);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5193));
frost$core$String* $tmp5194 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5194));
*(&local3) = $tmp5193;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5193));
// line 1472
$fn5196 $tmp5195 = ($fn5196) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5197 = $tmp5195(param2);
frost$core$Int64 $tmp5198 = org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp5197);
*(&local4) = $tmp5198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5197));
// line 1473
frost$core$Int64 $tmp5199 = *(&local4);
frost$core$Int64 $tmp5200 = (frost$core$Int64) {0};
int64_t $tmp5201 = $tmp5199.value;
int64_t $tmp5202 = $tmp5200.value;
bool $tmp5203 = $tmp5201 > $tmp5202;
frost$core$Bit $tmp5204 = (frost$core$Bit) {$tmp5203};
bool $tmp5205 = $tmp5204.value;
if ($tmp5205) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp5206 = (frost$core$Int64) {1473};
$fn5208 $tmp5207 = ($fn5208) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5209 = $tmp5207(param2);
frost$core$String* $tmp5210 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s5211, ((frost$core$Object*) $tmp5209));
frost$core$String* $tmp5212 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5210, &$s5213);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5214, $tmp5206, $tmp5212);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5209));
abort(); // unreachable
block3:;
// line 1474
frost$core$String* $tmp5215 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5215));
frost$core$String* $tmp5216 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5216));
*(&local5) = $tmp5215;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5215));
// line 1475
frost$io$IndentedOutputStream** $tmp5217 = &param0->out;
frost$io$IndentedOutputStream* $tmp5218 = *$tmp5217;
$fn5220 $tmp5219 = ($fn5220) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5221 = $tmp5219(param2);
frost$core$String* $tmp5222 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5221);
frost$core$String* $tmp5223 = frost$core$String$get_asString$R$frost$core$String($tmp5222);
frost$core$String* $tmp5224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5223, &$s5225);
frost$core$String* $tmp5226 = *(&local5);
frost$core$String* $tmp5227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5224, $tmp5226);
frost$core$String* $tmp5228 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5227, &$s5229);
$fn5231 $tmp5230 = ($fn5231) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5232 = $tmp5230(param2);
frost$core$String* $tmp5233 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5232);
frost$core$String* $tmp5234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5228, $tmp5233);
frost$core$String* $tmp5235 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5234, &$s5236);
frost$core$String* $tmp5237 = *(&local1);
frost$core$String* $tmp5238 = frost$core$String$get_asString$R$frost$core$String($tmp5237);
frost$core$String* $tmp5239 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5238, &$s5240);
frost$core$String* $tmp5241 = *(&local2);
frost$core$String* $tmp5242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5239, $tmp5241);
frost$core$String* $tmp5243 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5242, &$s5244);
frost$core$Int64 $tmp5245 = *(&local4);
frost$core$Int64$wrapper* $tmp5246;
$tmp5246 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5246->value = $tmp5245;
frost$core$String* $tmp5247 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5243, ((frost$core$Object*) $tmp5246));
frost$core$String* $tmp5248 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5247, &$s5249);
frost$core$String* $tmp5250 = *(&local3);
frost$core$String* $tmp5251 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5248, $tmp5250);
frost$core$String* $tmp5252 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5251, &$s5253);
frost$core$Int64 $tmp5254 = *(&local4);
frost$core$Int64$wrapper* $tmp5255;
$tmp5255 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5255->value = $tmp5254;
frost$core$String* $tmp5256 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5252, ((frost$core$Object*) $tmp5255));
frost$core$String* $tmp5257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5256, &$s5258);
frost$core$String* $tmp5259 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5235, $tmp5257);
$fn5261 $tmp5260 = ($fn5261) ((frost$io$OutputStream*) $tmp5218)->$class->vtable[19];
frost$core$Error* $tmp5262 = $tmp5260(((frost$io$OutputStream*) $tmp5218), $tmp5259);
if ($tmp5262 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5262));
*(&local0) = $tmp5262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5221));
frost$core$String* $tmp5263 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5263));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp5264 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5264));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5265 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5265));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5266 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5266));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5221));
// line 1477
frost$collections$HashMap** $tmp5267 = &param0->refs;
frost$collections$HashMap* $tmp5268 = *$tmp5267;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5269;
$tmp5269 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5269->value = param1;
frost$core$String* $tmp5270 = *(&local5);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5268, ((frost$collections$Key*) $tmp5269), ((frost$core$Object*) $tmp5270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5269)));
frost$core$String* $tmp5271 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5271));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp5272 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5272));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5273 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5273));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5274 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5274));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1480
frost$core$Int64 $tmp5275 = (frost$core$Int64) {1480};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5276, $tmp5275);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5277 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5277));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 1485
*(&local0) = ((frost$core$Error*) NULL);
// line 1486
frost$core$String* $tmp5278 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5278));
frost$core$String* $tmp5279 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5279));
*(&local1) = $tmp5278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5278));
// line 1487
frost$core$String* $tmp5280 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5280));
frost$core$String* $tmp5281 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5281));
*(&local2) = $tmp5280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5280));
// line 1488
frost$core$String* $tmp5282 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5282));
frost$core$String* $tmp5283 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5283));
*(&local3) = $tmp5282;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5282));
// line 1489
frost$io$IndentedOutputStream** $tmp5284 = &param0->out;
frost$io$IndentedOutputStream* $tmp5285 = *$tmp5284;
frost$core$String* $tmp5286 = *(&local1);
frost$core$String* $tmp5287 = frost$core$String$get_asString$R$frost$core$String($tmp5286);
frost$core$String* $tmp5288 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5287, &$s5289);
frost$core$String* $tmp5290 = *(&local2);
frost$core$String* $tmp5291 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5288, $tmp5290);
frost$core$String* $tmp5292 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5291, &$s5293);
frost$core$String* $tmp5294 = *(&local3);
frost$core$String* $tmp5295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5292, $tmp5294);
frost$core$String* $tmp5296 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5295, &$s5297);
$fn5299 $tmp5298 = ($fn5299) ((frost$io$OutputStream*) $tmp5285)->$class->vtable[19];
frost$core$Error* $tmp5300 = $tmp5298(((frost$io$OutputStream*) $tmp5285), $tmp5296);
if ($tmp5300 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5300));
*(&local0) = $tmp5300;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5287));
frost$core$String* $tmp5301 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5301));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5302 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5302));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5303 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5303));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5287));
frost$core$String* $tmp5304 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5304));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5305 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5305));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5306 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5306));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1492
frost$core$Int64 $tmp5307 = (frost$core$Int64) {1492};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5308, $tmp5307);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5309));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Error* local0 = NULL;
// line 1497
*(&local0) = ((frost$core$Error*) NULL);
// line 1498
frost$core$Bit $tmp5310 = frost$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp5311 = $tmp5310.value;
if ($tmp5311) goto block3; else goto block5;
block3:;
// line 1499
frost$io$IndentedOutputStream** $tmp5312 = &param0->out;
frost$io$IndentedOutputStream* $tmp5313 = *$tmp5312;
frost$core$String* $tmp5314 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp5315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5316, $tmp5314);
frost$core$String* $tmp5317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5315, &$s5318);
$fn5320 $tmp5319 = ($fn5320) ((frost$io$OutputStream*) $tmp5313)->$class->vtable[19];
frost$core$Error* $tmp5321 = $tmp5319(((frost$io$OutputStream*) $tmp5313), $tmp5317);
if ($tmp5321 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5321));
*(&local0) = $tmp5321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5314));
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5314));
goto block4;
block5:;
// line 1
// line 1502
frost$io$IndentedOutputStream** $tmp5322 = &param0->out;
frost$io$IndentedOutputStream* $tmp5323 = *$tmp5322;
$fn5325 $tmp5324 = ($fn5325) ((frost$io$OutputStream*) $tmp5323)->$class->vtable[19];
frost$core$Error* $tmp5326 = $tmp5324(((frost$io$OutputStream*) $tmp5323), &$s5327);
if ($tmp5326 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5326));
*(&local0) = $tmp5326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5326));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5326));
goto block4;
block4:;
goto block2;
block1:;
// line 1506
frost$core$Int64 $tmp5328 = (frost$core$Int64) {1506};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5329, $tmp5328);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5330 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5330));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeStaticCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$MethodDecl* param2, frost$collections$ListView* param3) {

frost$core$Error* local0 = NULL;
frost$core$Bit local1;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
// line 1511
*(&local0) = ((frost$core$Error*) NULL);
// line 1512
frost$core$Weak** $tmp5331 = &param2->owner;
frost$core$Weak* $tmp5332 = *$tmp5331;
frost$core$Object* $tmp5333 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5332);
frost$core$Bit* $tmp5334 = &((org$frostlang$frostc$ClassDecl*) $tmp5333)->external;
frost$core$Bit $tmp5335 = *$tmp5334;
bool $tmp5336 = $tmp5335.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp5333);
if ($tmp5336) goto block3; else goto block4;
block3:;
// line 1513
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param2);
goto block4;
block4:;
// line 1515
frost$core$Bit $tmp5337 = org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param2);
*(&local1) = $tmp5337;
// line 1516
org$frostlang$frostc$Type** $tmp5338 = &param2->returnType;
org$frostlang$frostc$Type* $tmp5339 = *$tmp5338;
frost$core$String* $tmp5340 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5339);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5340));
frost$core$String* $tmp5341 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5341));
*(&local2) = $tmp5340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5340));
// line 1517
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5342));
frost$core$String* $tmp5343 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5343));
*(&local3) = &$s5344;
// line 1518
*(&local4) = ((frost$core$String*) NULL);
// line 1519
org$frostlang$frostc$Type** $tmp5345 = &param2->returnType;
org$frostlang$frostc$Type* $tmp5346 = *$tmp5345;
org$frostlang$frostc$Type* $tmp5347 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp5348 = ((frost$core$Equatable*) $tmp5346)->$class->itable;
while ($tmp5348->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5348 = $tmp5348->next;
}
$fn5350 $tmp5349 = $tmp5348->methods[1];
frost$core$Bit $tmp5351 = $tmp5349(((frost$core$Equatable*) $tmp5346), ((frost$core$Equatable*) $tmp5347));
bool $tmp5352 = $tmp5351.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5347));
if ($tmp5352) goto block5; else goto block6;
block5:;
// line 1520
frost$core$String* $tmp5353 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5353));
frost$core$String* $tmp5354 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5354));
*(&local4) = $tmp5353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5353));
// line 1521
frost$core$Bit $tmp5355 = *(&local1);
bool $tmp5356 = $tmp5355.value;
if ($tmp5356) goto block7; else goto block9;
block7:;
// line 1522
frost$io$IndentedOutputStream** $tmp5357 = &param0->out;
frost$io$IndentedOutputStream* $tmp5358 = *$tmp5357;
frost$core$String* $tmp5359 = *(&local2);
frost$core$String* $tmp5360 = frost$core$String$get_asString$R$frost$core$String($tmp5359);
frost$core$String* $tmp5361 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5360, &$s5362);
frost$core$String* $tmp5363 = *(&local4);
frost$core$String* $tmp5364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5361, $tmp5363);
frost$core$String* $tmp5365 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5364, &$s5366);
$fn5368 $tmp5367 = ($fn5368) ((frost$io$OutputStream*) $tmp5358)->$class->vtable[19];
frost$core$Error* $tmp5369 = $tmp5367(((frost$io$OutputStream*) $tmp5358), $tmp5365);
if ($tmp5369 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5369));
*(&local0) = $tmp5369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5360));
frost$core$String* $tmp5370 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5370));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5371 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5371));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5372 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5372));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5360));
goto block8;
block9:;
// line 1
// line 1525
frost$io$IndentedOutputStream** $tmp5373 = &param0->out;
frost$io$IndentedOutputStream* $tmp5374 = *$tmp5373;
frost$core$String* $tmp5375 = *(&local2);
frost$core$String* $tmp5376 = frost$core$String$get_asString$R$frost$core$String($tmp5375);
frost$core$String* $tmp5377 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5376, &$s5378);
frost$core$String* $tmp5379 = *(&local4);
frost$core$String* $tmp5380 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5377, $tmp5379);
frost$core$String* $tmp5381 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5380, &$s5382);
$fn5384 $tmp5383 = ($fn5384) ((frost$io$OutputStream*) $tmp5374)->$class->vtable[17];
frost$core$Error* $tmp5385 = $tmp5383(((frost$io$OutputStream*) $tmp5374), $tmp5381);
if ($tmp5385 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5385));
*(&local0) = $tmp5385;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5376));
frost$core$String* $tmp5386 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5386));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5387 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5387));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5388 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5388));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5376));
goto block8;
block8:;
// line 1527
frost$collections$HashMap** $tmp5389 = &param0->refs;
frost$collections$HashMap* $tmp5390 = *$tmp5389;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5391;
$tmp5391 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5391->value = param1;
frost$core$String* $tmp5392 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5390, ((frost$collections$Key*) $tmp5391), ((frost$core$Object*) $tmp5392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5391)));
goto block6;
block6:;
// line 1529
frost$io$IndentedOutputStream** $tmp5393 = &param0->out;
frost$io$IndentedOutputStream* $tmp5394 = *$tmp5393;
frost$core$String* $tmp5395 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param2);
frost$core$String* $tmp5396 = frost$core$String$get_asString$R$frost$core$String($tmp5395);
frost$core$String* $tmp5397 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5396, &$s5398);
$fn5400 $tmp5399 = ($fn5400) ((frost$io$OutputStream*) $tmp5394)->$class->vtable[17];
frost$core$Error* $tmp5401 = $tmp5399(((frost$io$OutputStream*) $tmp5394), $tmp5397);
if ($tmp5401 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5401));
*(&local0) = $tmp5401;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5395));
frost$core$String* $tmp5402 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5402));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5403 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5403));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5404 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5404));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5395));
// line 1530
frost$core$Bit $tmp5405 = *(&local1);
bool $tmp5406 = $tmp5405.value;
if ($tmp5406) goto block16; else goto block17;
block16:;
// line 1531
frost$io$IndentedOutputStream** $tmp5407 = &param0->out;
frost$io$IndentedOutputStream* $tmp5408 = *$tmp5407;
frost$core$String* $tmp5409 = *(&local4);
frost$core$String* $tmp5410 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5411, $tmp5409);
frost$core$String* $tmp5412 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5410, &$s5413);
$fn5415 $tmp5414 = ($fn5415) ((frost$io$OutputStream*) $tmp5408)->$class->vtable[17];
frost$core$Error* $tmp5416 = $tmp5414(((frost$io$OutputStream*) $tmp5408), $tmp5412);
if ($tmp5416 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5416));
*(&local0) = $tmp5416;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5410));
frost$core$String* $tmp5417 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5417));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5418 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5418));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5419 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5419));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5410));
// line 1532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5420));
frost$core$String* $tmp5421 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5421));
*(&local3) = &$s5422;
goto block17;
block17:;
// line 1534
ITable* $tmp5423 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp5423->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp5423 = $tmp5423->next;
}
$fn5425 $tmp5424 = $tmp5423->methods[0];
frost$collections$Iterator* $tmp5426 = $tmp5424(((frost$collections$Iterable*) param3));
goto block20;
block20:;
ITable* $tmp5427 = $tmp5426->$class->itable;
while ($tmp5427->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5427 = $tmp5427->next;
}
$fn5429 $tmp5428 = $tmp5427->methods[0];
frost$core$Bit $tmp5430 = $tmp5428($tmp5426);
bool $tmp5431 = $tmp5430.value;
if ($tmp5431) goto block22; else goto block21;
block21:;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp5432 = $tmp5426->$class->itable;
while ($tmp5432->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5432 = $tmp5432->next;
}
$fn5434 $tmp5433 = $tmp5432->methods[1];
frost$core$Object* $tmp5435 = $tmp5433($tmp5426);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp5435)));
org$frostlang$frostc$IR$Value* $tmp5436 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5436));
*(&local5) = ((org$frostlang$frostc$IR$Value*) $tmp5435);
// line 1535
frost$io$IndentedOutputStream** $tmp5437 = &param0->out;
frost$io$IndentedOutputStream* $tmp5438 = *$tmp5437;
frost$core$String* $tmp5439 = *(&local3);
$fn5441 $tmp5440 = ($fn5441) ((frost$io$OutputStream*) $tmp5438)->$class->vtable[17];
frost$core$Error* $tmp5442 = $tmp5440(((frost$io$OutputStream*) $tmp5438), $tmp5439);
if ($tmp5442 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5442));
*(&local0) = $tmp5442;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5442));
frost$core$Frost$unref$frost$core$Object$Q($tmp5435);
org$frostlang$frostc$IR$Value* $tmp5443 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5443));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5426));
frost$core$String* $tmp5444 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5444));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5445 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5445));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5446 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5446));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5442));
// line 1536
frost$io$IndentedOutputStream** $tmp5447 = &param0->out;
frost$io$IndentedOutputStream* $tmp5448 = *$tmp5447;
org$frostlang$frostc$IR$Value* $tmp5449 = *(&local5);
frost$core$String* $tmp5450 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp5449);
$fn5452 $tmp5451 = ($fn5452) ((frost$io$OutputStream*) $tmp5448)->$class->vtable[17];
frost$core$Error* $tmp5453 = $tmp5451(((frost$io$OutputStream*) $tmp5448), $tmp5450);
if ($tmp5453 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5453));
*(&local0) = $tmp5453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5450));
frost$core$Frost$unref$frost$core$Object$Q($tmp5435);
org$frostlang$frostc$IR$Value* $tmp5454 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5454));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5426));
frost$core$String* $tmp5455 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5455));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5456 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5456));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5457 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5457));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5450));
// line 1537
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5458));
frost$core$String* $tmp5459 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5459));
*(&local3) = &$s5460;
frost$core$Frost$unref$frost$core$Object$Q($tmp5435);
org$frostlang$frostc$IR$Value* $tmp5461 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5461));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5426));
// line 1539
frost$io$IndentedOutputStream** $tmp5462 = &param0->out;
frost$io$IndentedOutputStream* $tmp5463 = *$tmp5462;
$fn5465 $tmp5464 = ($fn5465) ((frost$io$OutputStream*) $tmp5463)->$class->vtable[19];
frost$core$Error* $tmp5466 = $tmp5464(((frost$io$OutputStream*) $tmp5463), &$s5467);
if ($tmp5466 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5466));
*(&local0) = $tmp5466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5466));
frost$core$String* $tmp5468 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5468));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5469 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5469));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5470 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5470));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5466));
frost$core$String* $tmp5471 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5471));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5472 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5472));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5473 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5473));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1542
frost$core$Int64 $tmp5474 = (frost$core$Int64) {1542};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5475, $tmp5474);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5476 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5476));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
// line 1547
*(&local0) = ((frost$core$Error*) NULL);
// line 1548
frost$io$IndentedOutputStream** $tmp5477 = &param0->out;
frost$io$IndentedOutputStream* $tmp5478 = *$tmp5477;
frost$core$String* $tmp5479 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp5480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5481, $tmp5479);
frost$core$String* $tmp5482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5480, &$s5483);
frost$core$String* $tmp5484 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp5485 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5482, $tmp5484);
frost$core$String* $tmp5486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5485, &$s5487);
$fn5489 $tmp5488 = ($fn5489) ((frost$io$OutputStream*) $tmp5478)->$class->vtable[19];
frost$core$Error* $tmp5490 = $tmp5488(((frost$io$OutputStream*) $tmp5478), $tmp5486);
if ($tmp5490 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5490));
*(&local0) = $tmp5490;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5479));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5479));
goto block2;
block1:;
// line 1551
frost$core$Int64 $tmp5491 = (frost$core$Int64) {1551};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5492, $tmp5491);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5493 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5493));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Statement* param2) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$Position local1;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$expression$Binary$Operator local3;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Position local6;
org$frostlang$frostc$IR$Block$ID local7;
org$frostlang$frostc$Position local8;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
frost$core$String* local11 = NULL;
org$frostlang$frostc$Position local12;
org$frostlang$frostc$IR$Value* local13 = NULL;
org$frostlang$frostc$IR$Block$ID local14;
org$frostlang$frostc$IR$Block$ID local15;
org$frostlang$frostc$Position local16;
org$frostlang$frostc$ClassDecl* local17 = NULL;
org$frostlang$frostc$Position local18;
org$frostlang$frostc$ClassDecl* local19 = NULL;
org$frostlang$frostc$FixedArray* local20 = NULL;
org$frostlang$frostc$Position local21;
org$frostlang$frostc$IR$Value* local22 = NULL;
org$frostlang$frostc$FixedArray* local23 = NULL;
org$frostlang$frostc$Position local24;
org$frostlang$frostc$IR$Value* local25 = NULL;
org$frostlang$frostc$FieldDecl* local26 = NULL;
org$frostlang$frostc$Position local27;
org$frostlang$frostc$IR$Value* local28 = NULL;
org$frostlang$frostc$ChoiceCase* local29 = NULL;
frost$core$Int64 local30;
org$frostlang$frostc$Position local31;
org$frostlang$frostc$IR$Value* local32 = NULL;
org$frostlang$frostc$FieldDecl* local33 = NULL;
org$frostlang$frostc$Position local34;
org$frostlang$frostc$IR$Value* local35 = NULL;
org$frostlang$frostc$ClassDecl* local36 = NULL;
frost$core$Int64 local37;
org$frostlang$frostc$Type* local38 = NULL;
org$frostlang$frostc$Position local39;
org$frostlang$frostc$IR$Value* local40 = NULL;
frost$core$Int64 local41;
org$frostlang$frostc$Type* local42 = NULL;
org$frostlang$frostc$Position local43;
org$frostlang$frostc$IR$Value* local44 = NULL;
org$frostlang$frostc$Position local45;
org$frostlang$frostc$IR$Value* local46 = NULL;
org$frostlang$frostc$Position local47;
org$frostlang$frostc$IR$Value* local48 = NULL;
org$frostlang$frostc$Position local49;
org$frostlang$frostc$IR$Value* local50 = NULL;
org$frostlang$frostc$Type* local51 = NULL;
org$frostlang$frostc$Position local52;
org$frostlang$frostc$IR$Value* local53 = NULL;
org$frostlang$frostc$Position local54;
org$frostlang$frostc$IR$Value* local55 = NULL;
org$frostlang$frostc$IR$Value* local56 = NULL;
org$frostlang$frostc$Position local57;
org$frostlang$frostc$IR$Value* local58 = NULL;
org$frostlang$frostc$IR$Value* local59 = NULL;
org$frostlang$frostc$Position local60;
org$frostlang$frostc$IR$Value* local61 = NULL;
org$frostlang$frostc$IR$Value* local62 = NULL;
org$frostlang$frostc$IR$Value* local63 = NULL;
org$frostlang$frostc$Position local64;
org$frostlang$frostc$IR$Value* local65 = NULL;
org$frostlang$frostc$IR$Value* local66 = NULL;
org$frostlang$frostc$IR$Value* local67 = NULL;
org$frostlang$frostc$Position local68;
org$frostlang$frostc$IR$Value* local69 = NULL;
org$frostlang$frostc$Position local70;
org$frostlang$frostc$MethodDecl* local71 = NULL;
org$frostlang$frostc$FixedArray* local72 = NULL;
org$frostlang$frostc$Position local73;
org$frostlang$frostc$IR$Value* local74 = NULL;
org$frostlang$frostc$IR$Value* local75 = NULL;
org$frostlang$frostc$Position local76;
// line 1556
*(&local0) = ((frost$core$Error*) NULL);
// line 1557
frost$core$Int64* $tmp5494 = &param2->$rawValue;
frost$core$Int64 $tmp5495 = *$tmp5494;
frost$core$Int64 $tmp5496 = (frost$core$Int64) {0};
frost$core$Bit $tmp5497 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5496);
bool $tmp5498 = $tmp5497.value;
if ($tmp5498) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp5499 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5500 = *$tmp5499;
*(&local1) = $tmp5500;
org$frostlang$frostc$IR$Value** $tmp5501 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5502 = *$tmp5501;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5502));
org$frostlang$frostc$IR$Value* $tmp5503 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5503));
*(&local2) = $tmp5502;
org$frostlang$frostc$expression$Binary$Operator* $tmp5504 = (org$frostlang$frostc$expression$Binary$Operator*) (param2->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp5505 = *$tmp5504;
*(&local3) = $tmp5505;
org$frostlang$frostc$IR$Value** $tmp5506 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5507 = *$tmp5506;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5507));
org$frostlang$frostc$IR$Value* $tmp5508 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5508));
*(&local4) = $tmp5507;
org$frostlang$frostc$Type** $tmp5509 = (org$frostlang$frostc$Type**) (param2->$data + 40);
org$frostlang$frostc$Type* $tmp5510 = *$tmp5509;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5510));
org$frostlang$frostc$Type* $tmp5511 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5511));
*(&local5) = $tmp5510;
// line 1559
org$frostlang$frostc$IR$Value* $tmp5512 = *(&local2);
org$frostlang$frostc$expression$Binary$Operator $tmp5513 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp5514 = *(&local4);
org$frostlang$frostc$Type* $tmp5515 = *(&local5);
org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5512, $tmp5513, $tmp5514, $tmp5515);
org$frostlang$frostc$Type* $tmp5516 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5516));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5517 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5517));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5518 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5518));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block5:;
frost$core$Int64 $tmp5519 = (frost$core$Int64) {1};
frost$core$Bit $tmp5520 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5519);
bool $tmp5521 = $tmp5520.value;
if ($tmp5521) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp5522 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5523 = *$tmp5522;
*(&local6) = $tmp5523;
org$frostlang$frostc$IR$Block$ID* $tmp5524 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp5525 = *$tmp5524;
*(&local7) = $tmp5525;
// line 1562
org$frostlang$frostc$IR$Block$ID $tmp5526 = *(&local7);
org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID(param0, $tmp5526);
goto block3;
block7:;
frost$core$Int64 $tmp5527 = (frost$core$Int64) {2};
frost$core$Bit $tmp5528 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5527);
bool $tmp5529 = $tmp5528.value;
if ($tmp5529) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp5530 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5531 = *$tmp5530;
*(&local8) = $tmp5531;
org$frostlang$frostc$IR$Value** $tmp5532 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5533 = *$tmp5532;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5533));
org$frostlang$frostc$IR$Value* $tmp5534 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5534));
*(&local9) = $tmp5533;
org$frostlang$frostc$Type** $tmp5535 = (org$frostlang$frostc$Type**) (param2->$data + 24);
org$frostlang$frostc$Type* $tmp5536 = *$tmp5535;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5536));
org$frostlang$frostc$Type* $tmp5537 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5537));
*(&local10) = $tmp5536;
frost$core$Bit* $tmp5538 = (frost$core$Bit*) (param2->$data + 32);
frost$core$Bit $tmp5539 = *$tmp5538;
// line 1565
org$frostlang$frostc$IR$Value* $tmp5540 = *(&local9);
org$frostlang$frostc$Type* $tmp5541 = *(&local10);
org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5540, $tmp5541);
org$frostlang$frostc$Type* $tmp5542 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5542));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5543 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5543));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block9:;
frost$core$Int64 $tmp5544 = (frost$core$Int64) {3};
frost$core$Bit $tmp5545 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5544);
bool $tmp5546 = $tmp5545.value;
if ($tmp5546) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp5547 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5548 = *$tmp5547;
frost$core$String** $tmp5549 = (frost$core$String**) (param2->$data + 16);
frost$core$String* $tmp5550 = *$tmp5549;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5550));
frost$core$String* $tmp5551 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5551));
*(&local11) = $tmp5550;
// line 1568
frost$io$IndentedOutputStream** $tmp5552 = &param0->out;
frost$io$IndentedOutputStream* $tmp5553 = *$tmp5552;
frost$core$String* $tmp5554 = *(&local11);
frost$core$String* $tmp5555 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5556, $tmp5554);
frost$core$String* $tmp5557 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5555, &$s5558);
$fn5560 $tmp5559 = ($fn5560) ((frost$io$OutputStream*) $tmp5553)->$class->vtable[19];
frost$core$Error* $tmp5561 = $tmp5559(((frost$io$OutputStream*) $tmp5553), $tmp5557);
if ($tmp5561 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5561));
*(&local0) = $tmp5561;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5555));
frost$core$String* $tmp5562 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5562));
*(&local11) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5555));
frost$core$String* $tmp5563 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5563));
*(&local11) = ((frost$core$String*) NULL);
goto block3;
block11:;
frost$core$Int64 $tmp5564 = (frost$core$Int64) {5};
frost$core$Bit $tmp5565 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5564);
bool $tmp5566 = $tmp5565.value;
if ($tmp5566) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp5567 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5568 = *$tmp5567;
*(&local12) = $tmp5568;
org$frostlang$frostc$IR$Value** $tmp5569 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5570 = *$tmp5569;
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5570));
org$frostlang$frostc$IR$Value* $tmp5571 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5571));
*(&local13) = $tmp5570;
org$frostlang$frostc$IR$Block$ID* $tmp5572 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp5573 = *$tmp5572;
*(&local14) = $tmp5573;
org$frostlang$frostc$IR$Block$ID* $tmp5574 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp5575 = *$tmp5574;
*(&local15) = $tmp5575;
// line 1571
org$frostlang$frostc$IR$Value* $tmp5576 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp5577 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp5578 = *(&local15);
org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, $tmp5576, $tmp5577, $tmp5578);
org$frostlang$frostc$IR$Value* $tmp5579 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5579));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block15:;
frost$core$Int64 $tmp5580 = (frost$core$Int64) {6};
frost$core$Bit $tmp5581 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5580);
bool $tmp5582 = $tmp5581.value;
if ($tmp5582) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp5583 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5584 = *$tmp5583;
*(&local16) = $tmp5584;
org$frostlang$frostc$ClassDecl** $tmp5585 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp5586 = *$tmp5585;
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5586));
org$frostlang$frostc$ClassDecl* $tmp5587 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5587));
*(&local17) = $tmp5586;
// line 1574
org$frostlang$frostc$ClassDecl* $tmp5588 = *(&local17);
org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl(param0, param1, $tmp5588);
org$frostlang$frostc$ClassDecl* $tmp5589 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5589));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block3;
block17:;
frost$core$Int64 $tmp5590 = (frost$core$Int64) {7};
frost$core$Bit $tmp5591 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5590);
bool $tmp5592 = $tmp5591.value;
if ($tmp5592) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp5593 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5594 = *$tmp5593;
*(&local18) = $tmp5594;
org$frostlang$frostc$ClassDecl** $tmp5595 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp5596 = *$tmp5595;
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5596));
org$frostlang$frostc$ClassDecl* $tmp5597 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5597));
*(&local19) = $tmp5596;
org$frostlang$frostc$FixedArray** $tmp5598 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5599 = *$tmp5598;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5599));
org$frostlang$frostc$FixedArray* $tmp5600 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5600));
*(&local20) = $tmp5599;
// line 1577
org$frostlang$frostc$ClassDecl* $tmp5601 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp5602 = *(&local20);
org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5601, $tmp5602);
org$frostlang$frostc$FixedArray* $tmp5603 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5603));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp5604 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5604));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block3;
block19:;
frost$core$Int64 $tmp5605 = (frost$core$Int64) {8};
frost$core$Bit $tmp5606 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5605);
bool $tmp5607 = $tmp5606.value;
if ($tmp5607) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp5608 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5609 = *$tmp5608;
*(&local21) = $tmp5609;
org$frostlang$frostc$IR$Value** $tmp5610 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5611 = *$tmp5610;
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5611));
org$frostlang$frostc$IR$Value* $tmp5612 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5612));
*(&local22) = $tmp5611;
org$frostlang$frostc$FixedArray** $tmp5613 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5614 = *$tmp5613;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5614));
org$frostlang$frostc$FixedArray* $tmp5615 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5615));
*(&local23) = $tmp5614;
// line 1580
org$frostlang$frostc$IR$Value* $tmp5616 = *(&local22);
org$frostlang$frostc$FixedArray* $tmp5617 = *(&local23);
org$frostlang$frostc$CCodeGenerator$writeDynamicCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5616, ((frost$collections$ListView*) $tmp5617));
org$frostlang$frostc$FixedArray* $tmp5618 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5618));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp5619 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5619));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block21:;
frost$core$Int64 $tmp5620 = (frost$core$Int64) {9};
frost$core$Bit $tmp5621 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5620);
bool $tmp5622 = $tmp5621.value;
if ($tmp5622) goto block22; else goto block23;
block22:;
goto block3;
block23:;
frost$core$Int64 $tmp5623 = (frost$core$Int64) {10};
frost$core$Bit $tmp5624 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5623);
bool $tmp5625 = $tmp5624.value;
if ($tmp5625) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp5626 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5627 = *$tmp5626;
*(&local24) = $tmp5627;
org$frostlang$frostc$IR$Value** $tmp5628 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5629 = *$tmp5628;
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5629));
org$frostlang$frostc$IR$Value* $tmp5630 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5630));
*(&local25) = $tmp5629;
org$frostlang$frostc$FieldDecl** $tmp5631 = (org$frostlang$frostc$FieldDecl**) (param2->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp5632 = *$tmp5631;
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5632));
org$frostlang$frostc$FieldDecl* $tmp5633 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5633));
*(&local26) = $tmp5632;
// line 1585
org$frostlang$frostc$IR$Value* $tmp5634 = *(&local25);
org$frostlang$frostc$FieldDecl* $tmp5635 = *(&local26);
org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(param0, param1, $tmp5634, $tmp5635);
org$frostlang$frostc$FieldDecl* $tmp5636 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5636));
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5637 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5637));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block25:;
frost$core$Int64 $tmp5638 = (frost$core$Int64) {4};
frost$core$Bit $tmp5639 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5638);
bool $tmp5640 = $tmp5639.value;
if ($tmp5640) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp5641 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5642 = *$tmp5641;
*(&local27) = $tmp5642;
org$frostlang$frostc$IR$Value** $tmp5643 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5644 = *$tmp5643;
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5644));
org$frostlang$frostc$IR$Value* $tmp5645 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5645));
*(&local28) = $tmp5644;
org$frostlang$frostc$ChoiceCase** $tmp5646 = (org$frostlang$frostc$ChoiceCase**) (param2->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp5647 = *$tmp5646;
*(&local29) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5647));
org$frostlang$frostc$ChoiceCase* $tmp5648 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5648));
*(&local29) = $tmp5647;
frost$core$Int64* $tmp5649 = (frost$core$Int64*) (param2->$data + 32);
frost$core$Int64 $tmp5650 = *$tmp5649;
*(&local30) = $tmp5650;
// line 1588
org$frostlang$frostc$IR$Value* $tmp5651 = *(&local28);
org$frostlang$frostc$ChoiceCase* $tmp5652 = *(&local29);
frost$core$Int64 $tmp5653 = *(&local30);
org$frostlang$frostc$CCodeGenerator$writeGetChoiceFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64(param0, param1, $tmp5651, $tmp5652, $tmp5653);
org$frostlang$frostc$ChoiceCase* $tmp5654 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5654));
*(&local29) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$IR$Value* $tmp5655 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5655));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block27:;
frost$core$Int64 $tmp5656 = (frost$core$Int64) {11};
frost$core$Bit $tmp5657 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5656);
bool $tmp5658 = $tmp5657.value;
if ($tmp5658) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp5659 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5660 = *$tmp5659;
*(&local31) = $tmp5660;
org$frostlang$frostc$IR$Value** $tmp5661 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5662 = *$tmp5661;
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5662));
org$frostlang$frostc$IR$Value* $tmp5663 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5663));
*(&local32) = $tmp5662;
org$frostlang$frostc$FieldDecl** $tmp5664 = (org$frostlang$frostc$FieldDecl**) (param2->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp5665 = *$tmp5664;
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5665));
org$frostlang$frostc$FieldDecl* $tmp5666 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5666));
*(&local33) = $tmp5665;
// line 1591
org$frostlang$frostc$IR$Value* $tmp5667 = *(&local32);
org$frostlang$frostc$FieldDecl* $tmp5668 = *(&local33);
org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(param0, param1, $tmp5667, $tmp5668);
org$frostlang$frostc$FieldDecl* $tmp5669 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5669));
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5670 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5670));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block29:;
frost$core$Int64 $tmp5671 = (frost$core$Int64) {13};
frost$core$Bit $tmp5672 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5671);
bool $tmp5673 = $tmp5672.value;
if ($tmp5673) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp5674 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5675 = *$tmp5674;
*(&local34) = $tmp5675;
org$frostlang$frostc$IR$Value** $tmp5676 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5677 = *$tmp5676;
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5677));
org$frostlang$frostc$IR$Value* $tmp5678 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5678));
*(&local35) = $tmp5677;
org$frostlang$frostc$ClassDecl** $tmp5679 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp5680 = *$tmp5679;
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5680));
org$frostlang$frostc$ClassDecl* $tmp5681 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5681));
*(&local36) = $tmp5680;
frost$core$Int64* $tmp5682 = (frost$core$Int64*) (param2->$data + 32);
frost$core$Int64 $tmp5683 = *$tmp5682;
*(&local37) = $tmp5683;
org$frostlang$frostc$Type** $tmp5684 = (org$frostlang$frostc$Type**) (param2->$data + 40);
org$frostlang$frostc$Type* $tmp5685 = *$tmp5684;
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5685));
org$frostlang$frostc$Type* $tmp5686 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5686));
*(&local38) = $tmp5685;
// line 1594
org$frostlang$frostc$IR$Value* $tmp5687 = *(&local35);
org$frostlang$frostc$ClassDecl* $tmp5688 = *(&local36);
frost$core$Int64 $tmp5689 = *(&local37);
org$frostlang$frostc$Type* $tmp5690 = *(&local38);
org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type(param0, param1, $tmp5687, $tmp5688, $tmp5689, $tmp5690);
org$frostlang$frostc$Type* $tmp5691 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5691));
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp5692 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5692));
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5693 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5693));
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block31:;
frost$core$Int64 $tmp5694 = (frost$core$Int64) {12};
frost$core$Bit $tmp5695 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5694);
bool $tmp5696 = $tmp5695.value;
if ($tmp5696) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp5697 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5698 = *$tmp5697;
*(&local39) = $tmp5698;
org$frostlang$frostc$IR$Value** $tmp5699 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5700 = *$tmp5699;
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5700));
org$frostlang$frostc$IR$Value* $tmp5701 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5701));
*(&local40) = $tmp5700;
frost$core$Int64* $tmp5702 = (frost$core$Int64*) (param2->$data + 24);
frost$core$Int64 $tmp5703 = *$tmp5702;
*(&local41) = $tmp5703;
org$frostlang$frostc$Type** $tmp5704 = (org$frostlang$frostc$Type**) (param2->$data + 32);
org$frostlang$frostc$Type* $tmp5705 = *$tmp5704;
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5705));
org$frostlang$frostc$Type* $tmp5706 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5706));
*(&local42) = $tmp5705;
// line 1597
org$frostlang$frostc$IR$Value* $tmp5707 = *(&local40);
frost$core$Int64 $tmp5708 = *(&local41);
org$frostlang$frostc$Type* $tmp5709 = *(&local42);
org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type(param0, param1, $tmp5707, $tmp5708, $tmp5709);
org$frostlang$frostc$Type* $tmp5710 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5710));
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5711 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5711));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block33:;
frost$core$Int64 $tmp5712 = (frost$core$Int64) {14};
frost$core$Bit $tmp5713 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5712);
bool $tmp5714 = $tmp5713.value;
if ($tmp5714) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp5715 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5716 = *$tmp5715;
*(&local43) = $tmp5716;
org$frostlang$frostc$IR$Value** $tmp5717 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5718 = *$tmp5717;
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5718));
org$frostlang$frostc$IR$Value* $tmp5719 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5719));
*(&local44) = $tmp5718;
// line 1600
org$frostlang$frostc$IR$Value* $tmp5720 = *(&local44);
org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5720);
org$frostlang$frostc$IR$Value* $tmp5721 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5721));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block35:;
frost$core$Int64 $tmp5722 = (frost$core$Int64) {15};
frost$core$Bit $tmp5723 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5722);
bool $tmp5724 = $tmp5723.value;
if ($tmp5724) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp5725 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5726 = *$tmp5725;
*(&local45) = $tmp5726;
org$frostlang$frostc$IR$Value** $tmp5727 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5728 = *$tmp5727;
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5728));
org$frostlang$frostc$IR$Value* $tmp5729 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5729));
*(&local46) = $tmp5728;
// line 1603
org$frostlang$frostc$IR$Value* $tmp5730 = *(&local46);
org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5730);
org$frostlang$frostc$IR$Value* $tmp5731 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5731));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block37:;
frost$core$Int64 $tmp5732 = (frost$core$Int64) {16};
frost$core$Bit $tmp5733 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5732);
bool $tmp5734 = $tmp5733.value;
if ($tmp5734) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp5735 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5736 = *$tmp5735;
*(&local47) = $tmp5736;
org$frostlang$frostc$IR$Value** $tmp5737 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5738 = *$tmp5737;
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5738));
org$frostlang$frostc$IR$Value* $tmp5739 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5739));
*(&local48) = $tmp5738;
// line 1606
org$frostlang$frostc$IR$Value* $tmp5740 = *(&local48);
org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5740);
org$frostlang$frostc$IR$Value* $tmp5741 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5741));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block39:;
frost$core$Int64 $tmp5742 = (frost$core$Int64) {17};
frost$core$Bit $tmp5743 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5742);
bool $tmp5744 = $tmp5743.value;
if ($tmp5744) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Position* $tmp5745 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5746 = *$tmp5745;
*(&local49) = $tmp5746;
org$frostlang$frostc$IR$Value** $tmp5747 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5748 = *$tmp5747;
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5748));
org$frostlang$frostc$IR$Value* $tmp5749 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5749));
*(&local50) = $tmp5748;
org$frostlang$frostc$Type** $tmp5750 = (org$frostlang$frostc$Type**) (param2->$data + 24);
org$frostlang$frostc$Type* $tmp5751 = *$tmp5750;
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5751));
org$frostlang$frostc$Type* $tmp5752 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5752));
*(&local51) = $tmp5751;
// line 1609
org$frostlang$frostc$IR$Value* $tmp5753 = *(&local50);
org$frostlang$frostc$Type* $tmp5754 = *(&local51);
org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5753, $tmp5754);
org$frostlang$frostc$Type* $tmp5755 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5755));
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5756 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5756));
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block41:;
frost$core$Int64 $tmp5757 = (frost$core$Int64) {18};
frost$core$Bit $tmp5758 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5757);
bool $tmp5759 = $tmp5758.value;
if ($tmp5759) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp5760 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5761 = *$tmp5760;
*(&local52) = $tmp5761;
org$frostlang$frostc$IR$Value** $tmp5762 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5763 = *$tmp5762;
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5763));
org$frostlang$frostc$IR$Value* $tmp5764 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5764));
*(&local53) = $tmp5763;
// line 1612
org$frostlang$frostc$IR$Value* $tmp5765 = *(&local53);
org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value(param0, $tmp5765);
org$frostlang$frostc$IR$Value* $tmp5766 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5766));
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block43:;
frost$core$Int64 $tmp5767 = (frost$core$Int64) {20};
frost$core$Bit $tmp5768 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5767);
bool $tmp5769 = $tmp5768.value;
if ($tmp5769) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp5770 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5771 = *$tmp5770;
*(&local54) = $tmp5771;
org$frostlang$frostc$IR$Value** $tmp5772 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5773 = *$tmp5772;
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5773));
org$frostlang$frostc$IR$Value* $tmp5774 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5774));
*(&local55) = $tmp5773;
org$frostlang$frostc$IR$Value** $tmp5775 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5776 = *$tmp5775;
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5776));
org$frostlang$frostc$IR$Value* $tmp5777 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5777));
*(&local56) = $tmp5776;
// line 1615
org$frostlang$frostc$IR$Value* $tmp5778 = *(&local55);
org$frostlang$frostc$IR$Value* $tmp5779 = *(&local56);
org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp5778, $tmp5779);
org$frostlang$frostc$IR$Value* $tmp5780 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5780));
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5781 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5781));
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block45:;
frost$core$Int64 $tmp5782 = (frost$core$Int64) {21};
frost$core$Bit $tmp5783 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5782);
bool $tmp5784 = $tmp5783.value;
if ($tmp5784) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp5785 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5786 = *$tmp5785;
*(&local57) = $tmp5786;
org$frostlang$frostc$IR$Value** $tmp5787 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5788 = *$tmp5787;
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5788));
org$frostlang$frostc$IR$Value* $tmp5789 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5789));
*(&local58) = $tmp5788;
org$frostlang$frostc$IR$Value** $tmp5790 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5791 = *$tmp5790;
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5791));
org$frostlang$frostc$IR$Value* $tmp5792 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5792));
*(&local59) = $tmp5791;
// line 1618
org$frostlang$frostc$IR$Value* $tmp5793 = *(&local58);
org$frostlang$frostc$IR$Value* $tmp5794 = *(&local59);
org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp5793, $tmp5794);
org$frostlang$frostc$IR$Value* $tmp5795 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5795));
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5796 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5796));
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block47:;
frost$core$Int64 $tmp5797 = (frost$core$Int64) {22};
frost$core$Bit $tmp5798 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5797);
bool $tmp5799 = $tmp5798.value;
if ($tmp5799) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp5800 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5801 = *$tmp5800;
*(&local60) = $tmp5801;
org$frostlang$frostc$IR$Value** $tmp5802 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5803 = *$tmp5802;
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5803));
org$frostlang$frostc$IR$Value* $tmp5804 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5804));
*(&local61) = $tmp5803;
org$frostlang$frostc$IR$Value** $tmp5805 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5806 = *$tmp5805;
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5806));
org$frostlang$frostc$IR$Value* $tmp5807 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5807));
*(&local62) = $tmp5806;
org$frostlang$frostc$IR$Value** $tmp5808 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5809 = *$tmp5808;
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5809));
org$frostlang$frostc$IR$Value* $tmp5810 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5810));
*(&local63) = $tmp5809;
// line 1621
org$frostlang$frostc$IR$Value* $tmp5811 = *(&local61);
org$frostlang$frostc$IR$Value* $tmp5812 = *(&local62);
org$frostlang$frostc$IR$Value* $tmp5813 = *(&local63);
org$frostlang$frostc$CCodeGenerator$writePointerRealloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp5811, $tmp5812, $tmp5813);
org$frostlang$frostc$IR$Value* $tmp5814 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5814));
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5815 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5815));
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5816 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5816));
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block49:;
frost$core$Int64 $tmp5817 = (frost$core$Int64) {24};
frost$core$Bit $tmp5818 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5817);
bool $tmp5819 = $tmp5818.value;
if ($tmp5819) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp5820 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5821 = *$tmp5820;
*(&local64) = $tmp5821;
org$frostlang$frostc$IR$Value** $tmp5822 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5823 = *$tmp5822;
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5823));
org$frostlang$frostc$IR$Value* $tmp5824 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5824));
*(&local65) = $tmp5823;
org$frostlang$frostc$IR$Value** $tmp5825 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5826 = *$tmp5825;
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5826));
org$frostlang$frostc$IR$Value* $tmp5827 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5827));
*(&local66) = $tmp5826;
org$frostlang$frostc$IR$Value** $tmp5828 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5829 = *$tmp5828;
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5829));
org$frostlang$frostc$IR$Value* $tmp5830 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5830));
*(&local67) = $tmp5829;
// line 1624
org$frostlang$frostc$IR$Value* $tmp5831 = *(&local65);
org$frostlang$frostc$IR$Value* $tmp5832 = *(&local66);
org$frostlang$frostc$IR$Value* $tmp5833 = *(&local67);
org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, $tmp5831, $tmp5832, $tmp5833);
org$frostlang$frostc$IR$Value* $tmp5834 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5834));
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5835 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5835));
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5836 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5836));
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block51:;
frost$core$Int64 $tmp5837 = (frost$core$Int64) {25};
frost$core$Bit $tmp5838 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5837);
bool $tmp5839 = $tmp5838.value;
if ($tmp5839) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp5840 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5841 = *$tmp5840;
*(&local68) = $tmp5841;
org$frostlang$frostc$IR$Value** $tmp5842 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5843 = *$tmp5842;
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5843));
org$frostlang$frostc$IR$Value* $tmp5844 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5844));
*(&local69) = $tmp5843;
// line 1627
org$frostlang$frostc$IR$Value* $tmp5845 = *(&local69);
org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q(param0, $tmp5845);
org$frostlang$frostc$IR$Value* $tmp5846 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5846));
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block53:;
frost$core$Int64 $tmp5847 = (frost$core$Int64) {26};
frost$core$Bit $tmp5848 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5847);
bool $tmp5849 = $tmp5848.value;
if ($tmp5849) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp5850 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5851 = *$tmp5850;
*(&local70) = $tmp5851;
org$frostlang$frostc$MethodDecl** $tmp5852 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 16);
org$frostlang$frostc$MethodDecl* $tmp5853 = *$tmp5852;
*(&local71) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5853));
org$frostlang$frostc$MethodDecl* $tmp5854 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5854));
*(&local71) = $tmp5853;
org$frostlang$frostc$FixedArray** $tmp5855 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5856 = *$tmp5855;
*(&local72) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5856));
org$frostlang$frostc$FixedArray* $tmp5857 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5857));
*(&local72) = $tmp5856;
// line 1630
org$frostlang$frostc$MethodDecl* $tmp5858 = *(&local71);
org$frostlang$frostc$FixedArray* $tmp5859 = *(&local72);
org$frostlang$frostc$CCodeGenerator$writeStaticCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5858, ((frost$collections$ListView*) $tmp5859));
org$frostlang$frostc$FixedArray* $tmp5860 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5860));
*(&local72) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp5861 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5861));
*(&local71) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block55:;
frost$core$Int64 $tmp5862 = (frost$core$Int64) {27};
frost$core$Bit $tmp5863 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5862);
bool $tmp5864 = $tmp5863.value;
if ($tmp5864) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp5865 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5866 = *$tmp5865;
*(&local73) = $tmp5866;
org$frostlang$frostc$IR$Value** $tmp5867 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5868 = *$tmp5867;
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5868));
org$frostlang$frostc$IR$Value* $tmp5869 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5869));
*(&local74) = $tmp5868;
org$frostlang$frostc$IR$Value** $tmp5870 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5871 = *$tmp5870;
*(&local75) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5871));
org$frostlang$frostc$IR$Value* $tmp5872 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5872));
*(&local75) = $tmp5871;
// line 1633
org$frostlang$frostc$IR$Value* $tmp5873 = *(&local74);
org$frostlang$frostc$IR$Value* $tmp5874 = *(&local75);
org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, $tmp5873, $tmp5874);
org$frostlang$frostc$IR$Value* $tmp5875 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5875));
*(&local75) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5876 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5876));
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block57:;
frost$core$Int64 $tmp5877 = (frost$core$Int64) {28};
frost$core$Bit $tmp5878 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5495, $tmp5877);
bool $tmp5879 = $tmp5878.value;
if ($tmp5879) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp5880 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5881 = *$tmp5880;
*(&local76) = $tmp5881;
// line 1636
frost$io$IndentedOutputStream** $tmp5882 = &param0->out;
frost$io$IndentedOutputStream* $tmp5883 = *$tmp5882;
$fn5885 $tmp5884 = ($fn5885) ((frost$io$OutputStream*) $tmp5883)->$class->vtable[19];
frost$core$Error* $tmp5886 = $tmp5884(((frost$io$OutputStream*) $tmp5883), &$s5887);
if ($tmp5886 == NULL) goto block60; else goto block61;
block61:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5886));
*(&local0) = $tmp5886;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5886));
goto block1;
block60:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5886));
goto block3;
block59:;
// line 1639
frost$core$Int64 $tmp5888 = (frost$core$Int64) {1639};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5889, $tmp5888);
abort(); // unreachable
block3:;
goto block2;
block1:;
// line 1644
frost$core$Int64 $tmp5890 = (frost$core$Int64) {1644};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5891, $tmp5890);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5892 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5892));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 1650
frost$core$Weak** $tmp5893 = &param1->owner;
frost$core$Weak* $tmp5894 = *$tmp5893;
frost$core$Object* $tmp5895 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5894);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, ((org$frostlang$frostc$ClassDecl*) $tmp5895));
frost$core$Frost$unref$frost$core$Object$Q($tmp5895);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeIR$org$frostlang$frostc$IR(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR* param1) {

frost$core$Error* local0 = NULL;
frost$core$Int64 local1;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$Int64 local4;
org$frostlang$frostc$IR$Block* local5 = NULL;
frost$core$Int64 local6;
// line 1654
*(&local0) = ((frost$core$Error*) NULL);
// line 1655
frost$core$Int64 $tmp5896 = (frost$core$Int64) {0};
frost$collections$Array** $tmp5897 = &param1->locals;
frost$collections$Array* $tmp5898 = *$tmp5897;
ITable* $tmp5899 = ((frost$collections$CollectionView*) $tmp5898)->$class->itable;
while ($tmp5899->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5899 = $tmp5899->next;
}
$fn5901 $tmp5900 = $tmp5899->methods[0];
frost$core$Int64 $tmp5902 = $tmp5900(((frost$collections$CollectionView*) $tmp5898));
frost$core$Bit $tmp5903 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp5904 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp5896, $tmp5902, $tmp5903);
frost$core$Int64 $tmp5905 = $tmp5904.min;
*(&local1) = $tmp5905;
frost$core$Int64 $tmp5906 = $tmp5904.max;
frost$core$Bit $tmp5907 = $tmp5904.inclusive;
bool $tmp5908 = $tmp5907.value;
frost$core$Int64 $tmp5909 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp5910 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5909);
if ($tmp5908) goto block6; else goto block7;
block6:;
int64_t $tmp5911 = $tmp5905.value;
int64_t $tmp5912 = $tmp5906.value;
bool $tmp5913 = $tmp5911 <= $tmp5912;
frost$core$Bit $tmp5914 = (frost$core$Bit) {$tmp5913};
bool $tmp5915 = $tmp5914.value;
if ($tmp5915) goto block3; else goto block4;
block7:;
int64_t $tmp5916 = $tmp5905.value;
int64_t $tmp5917 = $tmp5906.value;
bool $tmp5918 = $tmp5916 < $tmp5917;
frost$core$Bit $tmp5919 = (frost$core$Bit) {$tmp5918};
bool $tmp5920 = $tmp5919.value;
if ($tmp5920) goto block3; else goto block4;
block3:;
// line 1656
frost$core$Int64 $tmp5921 = *(&local1);
frost$core$Int64$wrapper* $tmp5922;
$tmp5922 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5922->value = $tmp5921;
frost$core$String* $tmp5923 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s5924, ((frost$core$Object*) $tmp5922));
frost$core$String* $tmp5925 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5923, &$s5926);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5925));
frost$core$String* $tmp5927 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5927));
*(&local2) = $tmp5925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5923));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5922));
// line 1657
frost$collections$Array** $tmp5928 = &param1->locals;
frost$collections$Array* $tmp5929 = *$tmp5928;
frost$core$Int64 $tmp5930 = *(&local1);
frost$core$Object* $tmp5931 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5929, $tmp5930);
frost$core$String* $tmp5932 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp5931));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5932));
frost$core$String* $tmp5933 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5933));
*(&local3) = $tmp5932;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5932));
frost$core$Frost$unref$frost$core$Object$Q($tmp5931);
// line 1658
frost$io$IndentedOutputStream** $tmp5934 = &param0->out;
frost$io$IndentedOutputStream* $tmp5935 = *$tmp5934;
frost$core$String* $tmp5936 = *(&local3);
frost$core$String* $tmp5937 = frost$core$String$get_asString$R$frost$core$String($tmp5936);
frost$core$String* $tmp5938 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5937, &$s5939);
frost$core$String* $tmp5940 = *(&local2);
frost$core$String* $tmp5941 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5938, $tmp5940);
frost$core$String* $tmp5942 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5941, &$s5943);
$fn5945 $tmp5944 = ($fn5945) ((frost$io$OutputStream*) $tmp5935)->$class->vtable[17];
frost$core$Error* $tmp5946 = $tmp5944(((frost$io$OutputStream*) $tmp5935), $tmp5942);
if ($tmp5946 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5946));
*(&local0) = $tmp5946;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5937));
frost$core$String* $tmp5947 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5947));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5948 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5948));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5937));
// line 1659
frost$core$Weak** $tmp5949 = &param0->compiler;
frost$core$Weak* $tmp5950 = *$tmp5949;
frost$core$Object* $tmp5951 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5950);
frost$collections$Array** $tmp5952 = &param1->locals;
frost$collections$Array* $tmp5953 = *$tmp5952;
frost$core$Int64 $tmp5954 = *(&local1);
frost$core$Object* $tmp5955 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5953, $tmp5954);
frost$core$Bit $tmp5956 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp5951), ((org$frostlang$frostc$Type*) $tmp5955));
bool $tmp5957 = $tmp5956.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp5955);
frost$core$Frost$unref$frost$core$Object$Q($tmp5951);
if ($tmp5957) goto block10; else goto block11;
block10:;
// line 1660
frost$io$IndentedOutputStream** $tmp5958 = &param0->out;
frost$io$IndentedOutputStream* $tmp5959 = *$tmp5958;
$fn5961 $tmp5960 = ($fn5961) ((frost$io$OutputStream*) $tmp5959)->$class->vtable[17];
frost$core$Error* $tmp5962 = $tmp5960(((frost$io$OutputStream*) $tmp5959), &$s5963);
if ($tmp5962 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5962));
*(&local0) = $tmp5962;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5962));
frost$core$String* $tmp5964 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5964));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5965 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5965));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5962));
goto block11;
block11:;
// line 1662
frost$io$IndentedOutputStream** $tmp5966 = &param0->out;
frost$io$IndentedOutputStream* $tmp5967 = *$tmp5966;
$fn5969 $tmp5968 = ($fn5969) ((frost$io$OutputStream*) $tmp5967)->$class->vtable[19];
frost$core$Error* $tmp5970 = $tmp5968(((frost$io$OutputStream*) $tmp5967), &$s5971);
if ($tmp5970 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5970));
*(&local0) = $tmp5970;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5970));
frost$core$String* $tmp5972 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5972));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5973 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5973));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5970));
frost$core$String* $tmp5974 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5974));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5975 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5975));
*(&local2) = ((frost$core$String*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp5976 = *(&local1);
int64_t $tmp5977 = $tmp5906.value;
int64_t $tmp5978 = $tmp5976.value;
int64_t $tmp5979 = $tmp5977 - $tmp5978;
frost$core$Int64 $tmp5980 = (frost$core$Int64) {$tmp5979};
frost$core$UInt64 $tmp5981 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5980);
if ($tmp5908) goto block17; else goto block18;
block17:;
uint64_t $tmp5982 = $tmp5981.value;
uint64_t $tmp5983 = $tmp5910.value;
bool $tmp5984 = $tmp5982 >= $tmp5983;
frost$core$Bit $tmp5985 = (frost$core$Bit) {$tmp5984};
bool $tmp5986 = $tmp5985.value;
if ($tmp5986) goto block16; else goto block4;
block18:;
uint64_t $tmp5987 = $tmp5981.value;
uint64_t $tmp5988 = $tmp5910.value;
bool $tmp5989 = $tmp5987 > $tmp5988;
frost$core$Bit $tmp5990 = (frost$core$Bit) {$tmp5989};
bool $tmp5991 = $tmp5990.value;
if ($tmp5991) goto block16; else goto block4;
block16:;
int64_t $tmp5992 = $tmp5976.value;
int64_t $tmp5993 = $tmp5909.value;
int64_t $tmp5994 = $tmp5992 + $tmp5993;
frost$core$Int64 $tmp5995 = (frost$core$Int64) {$tmp5994};
*(&local1) = $tmp5995;
goto block3;
block4:;
// line 1664
frost$core$Int64 $tmp5996 = (frost$core$Int64) {0};
frost$collections$Array** $tmp5997 = &param1->blocks;
frost$collections$Array* $tmp5998 = *$tmp5997;
ITable* $tmp5999 = ((frost$collections$CollectionView*) $tmp5998)->$class->itable;
while ($tmp5999->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5999 = $tmp5999->next;
}
$fn6001 $tmp6000 = $tmp5999->methods[0];
frost$core$Int64 $tmp6002 = $tmp6000(((frost$collections$CollectionView*) $tmp5998));
frost$core$Bit $tmp6003 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp6004 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp5996, $tmp6002, $tmp6003);
frost$core$Int64 $tmp6005 = $tmp6004.min;
*(&local4) = $tmp6005;
frost$core$Int64 $tmp6006 = $tmp6004.max;
frost$core$Bit $tmp6007 = $tmp6004.inclusive;
bool $tmp6008 = $tmp6007.value;
frost$core$Int64 $tmp6009 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp6010 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6009);
if ($tmp6008) goto block22; else goto block23;
block22:;
int64_t $tmp6011 = $tmp6005.value;
int64_t $tmp6012 = $tmp6006.value;
bool $tmp6013 = $tmp6011 <= $tmp6012;
frost$core$Bit $tmp6014 = (frost$core$Bit) {$tmp6013};
bool $tmp6015 = $tmp6014.value;
if ($tmp6015) goto block19; else goto block20;
block23:;
int64_t $tmp6016 = $tmp6005.value;
int64_t $tmp6017 = $tmp6006.value;
bool $tmp6018 = $tmp6016 < $tmp6017;
frost$core$Bit $tmp6019 = (frost$core$Bit) {$tmp6018};
bool $tmp6020 = $tmp6019.value;
if ($tmp6020) goto block19; else goto block20;
block19:;
// line 1665
frost$collections$Array** $tmp6021 = &param1->blocks;
frost$collections$Array* $tmp6022 = *$tmp6021;
frost$core$Int64 $tmp6023 = *(&local4);
frost$core$Object* $tmp6024 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp6022, $tmp6023);
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp6024)));
org$frostlang$frostc$IR$Block* $tmp6025 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6025));
*(&local5) = ((org$frostlang$frostc$IR$Block*) $tmp6024);
frost$core$Frost$unref$frost$core$Object$Q($tmp6024);
// line 1666
frost$core$Int64 $tmp6026 = *(&local4);
frost$core$Int64 $tmp6027 = (frost$core$Int64) {0};
int64_t $tmp6028 = $tmp6026.value;
int64_t $tmp6029 = $tmp6027.value;
bool $tmp6030 = $tmp6028 != $tmp6029;
frost$core$Bit $tmp6031 = (frost$core$Bit) {$tmp6030};
bool $tmp6032 = $tmp6031.value;
if ($tmp6032) goto block24; else goto block26;
block24:;
// line 1667
org$frostlang$frostc$IR$Block* $tmp6033 = *(&local5);
org$frostlang$frostc$IR$Block$ID* $tmp6034 = &$tmp6033->id;
org$frostlang$frostc$IR$Block$ID $tmp6035 = *$tmp6034;
frost$core$String* $tmp6036 = org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String($tmp6035);
frost$core$String* $tmp6037 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6036, &$s6038);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6037));
frost$core$String** $tmp6039 = &param0->currentBlock;
frost$core$String* $tmp6040 = *$tmp6039;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6040));
frost$core$String** $tmp6041 = &param0->currentBlock;
*$tmp6041 = $tmp6037;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6036));
// line 1668
frost$io$IndentedOutputStream** $tmp6042 = &param0->out;
frost$io$IndentedOutputStream* $tmp6043 = *$tmp6042;
frost$core$String** $tmp6044 = &param0->currentBlock;
frost$core$String* $tmp6045 = *$tmp6044;
frost$core$String* $tmp6046 = frost$core$String$get_asString$R$frost$core$String($tmp6045);
frost$core$String* $tmp6047 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6046, &$s6048);
$fn6050 $tmp6049 = ($fn6050) ((frost$io$OutputStream*) $tmp6043)->$class->vtable[19];
frost$core$Error* $tmp6051 = $tmp6049(((frost$io$OutputStream*) $tmp6043), $tmp6047);
if ($tmp6051 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6051));
*(&local0) = $tmp6051;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6046));
org$frostlang$frostc$IR$Block* $tmp6052 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6052));
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6046));
goto block25;
block26:;
// line 1
// line 1671
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6053));
frost$core$String** $tmp6054 = &param0->currentBlock;
frost$core$String* $tmp6055 = *$tmp6054;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6055));
frost$core$String** $tmp6056 = &param0->currentBlock;
*$tmp6056 = &$s6057;
goto block25;
block25:;
// line 1673
frost$core$Int64 $tmp6058 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block* $tmp6059 = *(&local5);
frost$collections$Array** $tmp6060 = &$tmp6059->statements;
frost$collections$Array* $tmp6061 = *$tmp6060;
ITable* $tmp6062 = ((frost$collections$CollectionView*) $tmp6061)->$class->itable;
while ($tmp6062->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6062 = $tmp6062->next;
}
$fn6064 $tmp6063 = $tmp6062->methods[0];
frost$core$Int64 $tmp6065 = $tmp6063(((frost$collections$CollectionView*) $tmp6061));
frost$core$Bit $tmp6066 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp6067 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp6058, $tmp6065, $tmp6066);
frost$core$Int64 $tmp6068 = $tmp6067.min;
*(&local6) = $tmp6068;
frost$core$Int64 $tmp6069 = $tmp6067.max;
frost$core$Bit $tmp6070 = $tmp6067.inclusive;
bool $tmp6071 = $tmp6070.value;
frost$core$Int64 $tmp6072 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp6073 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6072);
if ($tmp6071) goto block32; else goto block33;
block32:;
int64_t $tmp6074 = $tmp6068.value;
int64_t $tmp6075 = $tmp6069.value;
bool $tmp6076 = $tmp6074 <= $tmp6075;
frost$core$Bit $tmp6077 = (frost$core$Bit) {$tmp6076};
bool $tmp6078 = $tmp6077.value;
if ($tmp6078) goto block29; else goto block30;
block33:;
int64_t $tmp6079 = $tmp6068.value;
int64_t $tmp6080 = $tmp6069.value;
bool $tmp6081 = $tmp6079 < $tmp6080;
frost$core$Bit $tmp6082 = (frost$core$Bit) {$tmp6081};
bool $tmp6083 = $tmp6082.value;
if ($tmp6083) goto block29; else goto block30;
block29:;
// line 1674
org$frostlang$frostc$IR$Block* $tmp6084 = *(&local5);
frost$collections$Array** $tmp6085 = &$tmp6084->ids;
frost$collections$Array* $tmp6086 = *$tmp6085;
frost$core$Int64 $tmp6087 = *(&local6);
frost$core$Object* $tmp6088 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp6086, $tmp6087);
org$frostlang$frostc$IR$Block* $tmp6089 = *(&local5);
frost$collections$Array** $tmp6090 = &$tmp6089->statements;
frost$collections$Array* $tmp6091 = *$tmp6090;
frost$core$Int64 $tmp6092 = *(&local6);
frost$core$Object* $tmp6093 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp6091, $tmp6092);
org$frostlang$frostc$CCodeGenerator$writeStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement(param0, ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp6088)->value, ((org$frostlang$frostc$IR$Statement*) $tmp6093));
frost$core$Frost$unref$frost$core$Object$Q($tmp6093);
frost$core$Frost$unref$frost$core$Object$Q($tmp6088);
goto block31;
block31:;
frost$core$Int64 $tmp6094 = *(&local6);
int64_t $tmp6095 = $tmp6069.value;
int64_t $tmp6096 = $tmp6094.value;
int64_t $tmp6097 = $tmp6095 - $tmp6096;
frost$core$Int64 $tmp6098 = (frost$core$Int64) {$tmp6097};
frost$core$UInt64 $tmp6099 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6098);
if ($tmp6071) goto block35; else goto block36;
block35:;
uint64_t $tmp6100 = $tmp6099.value;
uint64_t $tmp6101 = $tmp6073.value;
bool $tmp6102 = $tmp6100 >= $tmp6101;
frost$core$Bit $tmp6103 = (frost$core$Bit) {$tmp6102};
bool $tmp6104 = $tmp6103.value;
if ($tmp6104) goto block34; else goto block30;
block36:;
uint64_t $tmp6105 = $tmp6099.value;
uint64_t $tmp6106 = $tmp6073.value;
bool $tmp6107 = $tmp6105 > $tmp6106;
frost$core$Bit $tmp6108 = (frost$core$Bit) {$tmp6107};
bool $tmp6109 = $tmp6108.value;
if ($tmp6109) goto block34; else goto block30;
block34:;
int64_t $tmp6110 = $tmp6094.value;
int64_t $tmp6111 = $tmp6072.value;
int64_t $tmp6112 = $tmp6110 + $tmp6111;
frost$core$Int64 $tmp6113 = (frost$core$Int64) {$tmp6112};
*(&local6) = $tmp6113;
goto block29;
block30:;
org$frostlang$frostc$IR$Block* $tmp6114 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6114));
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block21;
block21:;
frost$core$Int64 $tmp6115 = *(&local4);
int64_t $tmp6116 = $tmp6006.value;
int64_t $tmp6117 = $tmp6115.value;
int64_t $tmp6118 = $tmp6116 - $tmp6117;
frost$core$Int64 $tmp6119 = (frost$core$Int64) {$tmp6118};
frost$core$UInt64 $tmp6120 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6119);
if ($tmp6008) goto block38; else goto block39;
block38:;
uint64_t $tmp6121 = $tmp6120.value;
uint64_t $tmp6122 = $tmp6010.value;
bool $tmp6123 = $tmp6121 >= $tmp6122;
frost$core$Bit $tmp6124 = (frost$core$Bit) {$tmp6123};
bool $tmp6125 = $tmp6124.value;
if ($tmp6125) goto block37; else goto block20;
block39:;
uint64_t $tmp6126 = $tmp6120.value;
uint64_t $tmp6127 = $tmp6010.value;
bool $tmp6128 = $tmp6126 > $tmp6127;
frost$core$Bit $tmp6129 = (frost$core$Bit) {$tmp6128};
bool $tmp6130 = $tmp6129.value;
if ($tmp6130) goto block37; else goto block20;
block37:;
int64_t $tmp6131 = $tmp6115.value;
int64_t $tmp6132 = $tmp6009.value;
int64_t $tmp6133 = $tmp6131 + $tmp6132;
frost$core$Int64 $tmp6134 = (frost$core$Int64) {$tmp6133};
*(&local4) = $tmp6134;
goto block19;
block20:;
goto block2;
block1:;
// line 1679
frost$core$Int64 $tmp6135 = (frost$core$Int64) {1679};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s6136, $tmp6135);
abort(); // unreachable
block2:;
frost$core$Error* $tmp6137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6137));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$IR* param2) {

frost$core$Error* local0 = NULL;
frost$io$IndentedOutputStream* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$Int64 local3;
org$frostlang$frostc$MethodDecl$Parameter* local4 = NULL;
frost$io$MemoryOutputStream* local5 = NULL;
frost$io$IndentedOutputStream** $tmp6138 = &param0->out;
frost$io$IndentedOutputStream* $tmp6139 = *$tmp6138;
// line 1686
*(&local0) = ((frost$core$Error*) NULL);
// line 1687
frost$io$IndentedOutputStream** $tmp6140 = &param0->out;
frost$io$IndentedOutputStream* $tmp6141 = *$tmp6140;
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6141));
frost$io$IndentedOutputStream* $tmp6142 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6142));
*(&local1) = $tmp6141;
// line 1688
frost$io$IndentedOutputStream** $tmp6143 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6144 = *$tmp6143;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6144));
frost$io$IndentedOutputStream** $tmp6145 = &param0->out;
frost$io$IndentedOutputStream* $tmp6146 = *$tmp6145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6146));
frost$io$IndentedOutputStream** $tmp6147 = &param0->out;
*$tmp6147 = $tmp6144;
// line 1689
frost$io$MemoryOutputStream** $tmp6148 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6149 = *$tmp6148;
frost$io$MemoryOutputStream$clear($tmp6149);
// line 1690
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR** $tmp6150 = &param0->ir;
org$frostlang$frostc$IR* $tmp6151 = *$tmp6150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6151));
org$frostlang$frostc$IR** $tmp6152 = &param0->ir;
*$tmp6152 = param2;
// line 1691
frost$io$IndentedOutputStream** $tmp6153 = &param0->out;
frost$io$IndentedOutputStream* $tmp6154 = *$tmp6153;
org$frostlang$frostc$Type** $tmp6155 = &param1->returnType;
org$frostlang$frostc$Type* $tmp6156 = *$tmp6155;
frost$core$String* $tmp6157 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp6156);
frost$core$String* $tmp6158 = frost$core$String$get_asString$R$frost$core$String($tmp6157);
frost$core$String* $tmp6159 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6158, &$s6160);
frost$core$String* $tmp6161 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp6162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6159, $tmp6161);
frost$core$String* $tmp6163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6162, &$s6164);
$fn6166 $tmp6165 = ($fn6166) ((frost$io$OutputStream*) $tmp6154)->$class->vtable[17];
frost$core$Error* $tmp6167 = $tmp6165(((frost$io$OutputStream*) $tmp6154), $tmp6163);
if ($tmp6167 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6167));
*(&local0) = $tmp6167;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6157));
frost$io$IndentedOutputStream* $tmp6168 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6168));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6157));
// line 1692
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6169));
frost$core$String* $tmp6170 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6170));
*(&local2) = &$s6171;
// line 1693
frost$core$Int64 $tmp6172 = (frost$core$Int64) {0};
*(&local3) = $tmp6172;
// line 1694
frost$core$Weak** $tmp6173 = &param0->compiler;
frost$core$Weak* $tmp6174 = *$tmp6173;
frost$core$Object* $tmp6175 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6174);
frost$core$Bit $tmp6176 = org$frostlang$frostc$Compiler$hasSelfParam$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp6175), param1);
bool $tmp6177 = $tmp6176.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp6175);
if ($tmp6177) goto block8; else goto block9;
block8:;
// line 1695
frost$io$IndentedOutputStream** $tmp6178 = &param0->out;
frost$io$IndentedOutputStream* $tmp6179 = *$tmp6178;
frost$core$String* $tmp6180 = org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp6181 = frost$core$String$get_asString$R$frost$core$String($tmp6180);
frost$core$String* $tmp6182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6181, &$s6183);
frost$core$Int64 $tmp6184 = *(&local3);
frost$core$Int64$wrapper* $tmp6185;
$tmp6185 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp6185->value = $tmp6184;
frost$core$String* $tmp6186 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp6182, ((frost$core$Object*) $tmp6185));
frost$core$String* $tmp6187 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6186, &$s6188);
$fn6190 $tmp6189 = ($fn6190) ((frost$io$OutputStream*) $tmp6179)->$class->vtable[17];
frost$core$Error* $tmp6191 = $tmp6189(((frost$io$OutputStream*) $tmp6179), $tmp6187);
if ($tmp6191 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6191));
*(&local0) = $tmp6191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6180));
frost$core$String* $tmp6192 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6192));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6193 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6193));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6180));
// line 1696
frost$core$Int64 $tmp6194 = *(&local3);
frost$core$Int64 $tmp6195 = (frost$core$Int64) {1};
int64_t $tmp6196 = $tmp6194.value;
int64_t $tmp6197 = $tmp6195.value;
int64_t $tmp6198 = $tmp6196 + $tmp6197;
frost$core$Int64 $tmp6199 = (frost$core$Int64) {$tmp6198};
*(&local3) = $tmp6199;
// line 1697
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6200));
frost$core$String* $tmp6201 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6201));
*(&local2) = &$s6202;
goto block9;
block9:;
// line 1699
frost$collections$Array** $tmp6203 = &param1->parameters;
frost$collections$Array* $tmp6204 = *$tmp6203;
ITable* $tmp6205 = ((frost$collections$Iterable*) $tmp6204)->$class->itable;
while ($tmp6205->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp6205 = $tmp6205->next;
}
$fn6207 $tmp6206 = $tmp6205->methods[0];
frost$collections$Iterator* $tmp6208 = $tmp6206(((frost$collections$Iterable*) $tmp6204));
goto block12;
block12:;
ITable* $tmp6209 = $tmp6208->$class->itable;
while ($tmp6209->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6209 = $tmp6209->next;
}
$fn6211 $tmp6210 = $tmp6209->methods[0];
frost$core$Bit $tmp6212 = $tmp6210($tmp6208);
bool $tmp6213 = $tmp6212.value;
if ($tmp6213) goto block14; else goto block13;
block13:;
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp6214 = $tmp6208->$class->itable;
while ($tmp6214->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6214 = $tmp6214->next;
}
$fn6216 $tmp6215 = $tmp6214->methods[1];
frost$core$Object* $tmp6217 = $tmp6215($tmp6208);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp6217)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp6218 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6218));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp6217);
// line 1700
frost$io$IndentedOutputStream** $tmp6219 = &param0->out;
frost$io$IndentedOutputStream* $tmp6220 = *$tmp6219;
frost$core$String* $tmp6221 = *(&local2);
frost$core$String* $tmp6222 = frost$core$String$get_asString$R$frost$core$String($tmp6221);
frost$core$String* $tmp6223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6222, &$s6224);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6225 = *(&local4);
org$frostlang$frostc$Type** $tmp6226 = &$tmp6225->type;
org$frostlang$frostc$Type* $tmp6227 = *$tmp6226;
frost$core$String* $tmp6228 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp6227);
frost$core$String* $tmp6229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6223, $tmp6228);
frost$core$String* $tmp6230 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6229, &$s6231);
frost$core$Int64 $tmp6232 = *(&local3);
frost$core$Int64$wrapper* $tmp6233;
$tmp6233 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp6233->value = $tmp6232;
frost$core$String* $tmp6234 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp6230, ((frost$core$Object*) $tmp6233));
frost$core$String* $tmp6235 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6234, &$s6236);
$fn6238 $tmp6237 = ($fn6238) ((frost$io$OutputStream*) $tmp6220)->$class->vtable[17];
frost$core$Error* $tmp6239 = $tmp6237(((frost$io$OutputStream*) $tmp6220), $tmp6235);
if ($tmp6239 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6239));
*(&local0) = $tmp6239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6222));
frost$core$Frost$unref$frost$core$Object$Q($tmp6217);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6240 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6240));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6208));
frost$core$String* $tmp6241 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6241));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6242 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6242));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6222));
// line 1701
frost$core$Int64 $tmp6243 = *(&local3);
frost$core$Int64 $tmp6244 = (frost$core$Int64) {1};
int64_t $tmp6245 = $tmp6243.value;
int64_t $tmp6246 = $tmp6244.value;
int64_t $tmp6247 = $tmp6245 + $tmp6246;
frost$core$Int64 $tmp6248 = (frost$core$Int64) {$tmp6247};
*(&local3) = $tmp6248;
// line 1702
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6249));
frost$core$String* $tmp6250 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6250));
*(&local2) = &$s6251;
frost$core$Frost$unref$frost$core$Object$Q($tmp6217);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6252 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6252));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6208));
// line 1704
frost$io$IndentedOutputStream** $tmp6253 = &param0->out;
frost$io$IndentedOutputStream* $tmp6254 = *$tmp6253;
$fn6256 $tmp6255 = ($fn6256) ((frost$io$OutputStream*) $tmp6254)->$class->vtable[19];
frost$core$Error* $tmp6257 = $tmp6255(((frost$io$OutputStream*) $tmp6254), &$s6258);
if ($tmp6257 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6257));
*(&local0) = $tmp6257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6257));
frost$core$String* $tmp6259 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6259));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6260 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6260));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6257));
// line 1705
frost$io$MemoryOutputStream* $tmp6261 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp6261);
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6261));
frost$io$MemoryOutputStream* $tmp6262 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6262));
*(&local5) = $tmp6261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6261));
// line 1706
frost$io$IndentedOutputStream* $tmp6263 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp6264 = *(&local5);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp6263, ((frost$io$OutputStream*) $tmp6264));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6263));
frost$io$IndentedOutputStream** $tmp6265 = &param0->out;
frost$io$IndentedOutputStream* $tmp6266 = *$tmp6265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6266));
frost$io$IndentedOutputStream** $tmp6267 = &param0->out;
*$tmp6267 = $tmp6263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6263));
// line 1707
org$frostlang$frostc$CCodeGenerator$writeIR$org$frostlang$frostc$IR(param0, param2);
// line 1708
frost$io$IndentedOutputStream** $tmp6268 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6269 = *$tmp6268;
frost$io$MemoryOutputStream** $tmp6270 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6271 = *$tmp6270;
$fn6273 $tmp6272 = ($fn6273) ((frost$io$OutputStream*) $tmp6269)->$class->vtable[20];
frost$core$Error* $tmp6274 = $tmp6272(((frost$io$OutputStream*) $tmp6269), ((frost$core$Object*) $tmp6271));
if ($tmp6274 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6274));
*(&local0) = $tmp6274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6274));
frost$io$MemoryOutputStream* $tmp6275 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6275));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6276 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6276));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6277 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6277));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6274));
// line 1709
frost$io$IndentedOutputStream** $tmp6278 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6279 = *$tmp6278;
frost$io$MemoryOutputStream* $tmp6280 = *(&local5);
$fn6282 $tmp6281 = ($fn6282) ((frost$io$OutputStream*) $tmp6279)->$class->vtable[20];
frost$core$Error* $tmp6283 = $tmp6281(((frost$io$OutputStream*) $tmp6279), ((frost$core$Object*) $tmp6280));
if ($tmp6283 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6283));
*(&local0) = $tmp6283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6283));
frost$io$MemoryOutputStream* $tmp6284 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6284));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6285 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6285));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6286 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6286));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6283));
// line 1710
frost$io$IndentedOutputStream** $tmp6287 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6288 = *$tmp6287;
$fn6290 $tmp6289 = ($fn6290) ((frost$io$OutputStream*) $tmp6288)->$class->vtable[19];
frost$core$Error* $tmp6291 = $tmp6289(((frost$io$OutputStream*) $tmp6288), &$s6292);
if ($tmp6291 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6291));
*(&local0) = $tmp6291;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6291));
frost$io$MemoryOutputStream* $tmp6293 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6293));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6294 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6294));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6295 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6295));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6291));
// line 1711
frost$io$IndentedOutputStream* $tmp6296 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6296));
frost$io$IndentedOutputStream** $tmp6297 = &param0->out;
frost$io$IndentedOutputStream* $tmp6298 = *$tmp6297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6298));
frost$io$IndentedOutputStream** $tmp6299 = &param0->out;
*$tmp6299 = $tmp6296;
frost$io$MemoryOutputStream* $tmp6300 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6300));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6301 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6301));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6302 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6302));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block5;
block4:;
// line 1714
frost$core$Int64 $tmp6303 = (frost$core$Int64) {1714};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s6304, $tmp6303);
abort(); // unreachable
block5:;
frost$core$Error* $tmp6305 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6305));
*(&local0) = ((frost$core$Error*) NULL);
goto block1;
block1:;
frost$io$IndentedOutputStream** $tmp6306 = &param0->out;
frost$io$IndentedOutputStream* $tmp6307 = *$tmp6306;
bool $tmp6308 = $tmp6307 == $tmp6139;
frost$core$Bit $tmp6309 = frost$core$Bit$init$builtin_bit($tmp6308);
bool $tmp6310 = $tmp6309.value;
if ($tmp6310) goto block2; else goto block3;
block2:;
return;
block3:;
frost$core$Int64 $tmp6311 = (frost$core$Int64) {1685};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s6312, $tmp6311, &$s6313);
abort(); // unreachable

}
void org$frostlang$frostc$CCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
// line 1720
*(&local0) = ((frost$core$Error*) NULL);
// line 1721
org$frostlang$frostc$ClassDecl** $tmp6314 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6315 = *$tmp6314;
frost$core$Bit $tmp6316 = frost$core$Bit$init$builtin_bit($tmp6315 == NULL);
bool $tmp6317 = $tmp6316.value;
if ($tmp6317) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp6318 = (frost$core$Int64) {1721};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s6319, $tmp6318);
abort(); // unreachable
block3:;
// line 1722
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$ClassDecl** $tmp6320 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6321 = *$tmp6320;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6321));
org$frostlang$frostc$ClassDecl** $tmp6322 = &param0->currentClass;
*$tmp6322 = param1;
// line 1723
frost$collections$HashSet** $tmp6323 = &param0->imports;
frost$collections$HashSet* $tmp6324 = *$tmp6323;
frost$collections$HashSet$clear($tmp6324);
// line 1724
frost$io$MemoryOutputStream** $tmp6325 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6326 = *$tmp6325;
frost$io$MemoryOutputStream$clear($tmp6326);
// line 1725
frost$io$MemoryOutputStream** $tmp6327 = &param0->declarations;
frost$io$MemoryOutputStream* $tmp6328 = *$tmp6327;
frost$io$MemoryOutputStream$clear($tmp6328);
// line 1726
frost$io$MemoryOutputStream** $tmp6329 = &param0->types;
frost$io$MemoryOutputStream* $tmp6330 = *$tmp6329;
frost$io$MemoryOutputStream$clear($tmp6330);
// line 1727
frost$io$MemoryOutputStream** $tmp6331 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6332 = *$tmp6331;
frost$io$MemoryOutputStream$clear($tmp6332);
// line 1728
frost$io$MemoryOutputStream** $tmp6333 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6334 = *$tmp6333;
frost$io$MemoryOutputStream$clear($tmp6334);
// line 1729
frost$collections$HashSet** $tmp6335 = &param0->declared;
frost$collections$HashSet* $tmp6336 = *$tmp6335;
frost$collections$HashSet$clear($tmp6336);
// line 1730
frost$collections$HashSet** $tmp6337 = &param0->writtenTypes;
frost$collections$HashSet* $tmp6338 = *$tmp6337;
frost$collections$HashSet$clear($tmp6338);
// line 1731
frost$collections$HashSet** $tmp6339 = &param0->writtenWrappers;
frost$collections$HashSet* $tmp6340 = *$tmp6339;
frost$collections$HashSet$clear($tmp6340);
// line 1732
frost$collections$HashMap** $tmp6341 = &param0->classConstants;
frost$collections$HashMap* $tmp6342 = *$tmp6341;
frost$collections$HashMap$clear($tmp6342);
// line 1733
frost$collections$IdentityMap** $tmp6343 = &param0->variableNames;
frost$collections$IdentityMap* $tmp6344 = *$tmp6343;
frost$collections$IdentityMap$clear($tmp6344);
// line 1734
frost$core$Int64 $tmp6345 = (frost$core$Int64) {0};
frost$core$Int64* $tmp6346 = &param0->varCount;
*$tmp6346 = $tmp6345;
// line 1735
frost$collections$IdentityMap** $tmp6347 = &param0->methodShims;
frost$collections$IdentityMap* $tmp6348 = *$tmp6347;
frost$collections$IdentityMap$clear($tmp6348);
// line 1736
frost$core$Weak** $tmp6349 = &param0->hCodeGen;
frost$core$Weak* $tmp6350 = *$tmp6349;
frost$core$Object* $tmp6351 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6350);
frost$io$File* $tmp6352 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(((org$frostlang$frostc$HCodeGenerator*) $tmp6351), param1, &$s6353);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6352));
frost$io$File* $tmp6354 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6354));
*(&local1) = $tmp6352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6352));
frost$core$Frost$unref$frost$core$Object$Q($tmp6351);
// line 1737
frost$io$File* $tmp6355 = *(&local1);
frost$io$File* $tmp6356 = frost$io$File$get_parent$R$frost$io$File$Q($tmp6355);
frost$core$Error* $tmp6357 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp6356);
if ($tmp6357 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6357));
*(&local0) = $tmp6357;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6356));
frost$io$File* $tmp6358 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6358));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6356));
// line 1738
frost$io$IndentedOutputStream* $tmp6359 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp6360 = *(&local1);
frost$core$Maybe* $tmp6361 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp6360);
frost$core$Int64* $tmp6362 = &$tmp6361->$rawValue;
frost$core$Int64 $tmp6363 = *$tmp6362;
int64_t $tmp6364 = $tmp6363.value;
bool $tmp6365 = $tmp6364 == 0;
if ($tmp6365) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp6366 = (frost$core$Error**) ($tmp6361->$data + 0);
frost$core$Error* $tmp6367 = *$tmp6366;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6367));
*(&local0) = $tmp6367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6359));
frost$io$File* $tmp6368 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6368));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block7:;
frost$core$Object** $tmp6369 = (frost$core$Object**) ($tmp6361->$data + 0);
frost$core$Object* $tmp6370 = *$tmp6369;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp6359, ((frost$io$OutputStream*) $tmp6370));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6359));
frost$io$IndentedOutputStream** $tmp6371 = &param0->out;
frost$io$IndentedOutputStream* $tmp6372 = *$tmp6371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6372));
frost$io$IndentedOutputStream** $tmp6373 = &param0->out;
*$tmp6373 = $tmp6359;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6359));
// line 1739
frost$io$IndentedOutputStream** $tmp6374 = &param0->out;
frost$io$IndentedOutputStream* $tmp6375 = *$tmp6374;
$fn6377 $tmp6376 = ($fn6377) ((frost$io$OutputStream*) $tmp6375)->$class->vtable[22];
frost$core$Error* $tmp6378 = $tmp6376(((frost$io$OutputStream*) $tmp6375));
if ($tmp6378 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6378));
*(&local0) = $tmp6378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6378));
frost$io$File* $tmp6379 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6379));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6378));
// line 1740
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp6380 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6380));
// line 1741
frost$core$Weak** $tmp6381 = &param0->compiler;
frost$core$Weak* $tmp6382 = *$tmp6381;
frost$core$Object* $tmp6383 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6382);
frost$core$Bit $tmp6384 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp6383), param1);
bool $tmp6385 = $tmp6384.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp6383);
if ($tmp6385) goto block11; else goto block12;
block11:;
// line 1742
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp6386 = org$frostlang$frostc$CCodeGenerator$getWrapperClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6386));
goto block12;
block12:;
frost$io$File* $tmp6387 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6387));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// line 1746
frost$core$Weak** $tmp6388 = &param0->compiler;
frost$core$Weak* $tmp6389 = *$tmp6388;
frost$core$Object* $tmp6390 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6389);
org$frostlang$frostc$Position* $tmp6391 = &param1->position;
org$frostlang$frostc$Position $tmp6392 = *$tmp6391;
frost$core$Error* $tmp6393 = *(&local0);
frost$core$String** $tmp6394 = &$tmp6393->message;
frost$core$String* $tmp6395 = *$tmp6394;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp6390), $tmp6392, $tmp6395);
frost$core$Frost$unref$frost$core$Object$Q($tmp6390);
goto block2;
block2:;
frost$core$Error* $tmp6396 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6396));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// line 1752
org$frostlang$frostc$CCodeGenerator$finish(param0);
// line 1753
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl** $tmp6397 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6398 = *$tmp6397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6398));
org$frostlang$frostc$ClassDecl** $tmp6399 = &param0->currentClass;
*$tmp6399 = ((org$frostlang$frostc$ClassDecl*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$finish(org$frostlang$frostc$CCodeGenerator* param0) {

frost$core$Error* local0 = NULL;
// line 1758
*(&local0) = ((frost$core$Error*) NULL);
// line 1759
frost$io$IndentedOutputStream** $tmp6400 = &param0->out;
frost$io$IndentedOutputStream* $tmp6401 = *$tmp6400;
frost$io$MemoryOutputStream** $tmp6402 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6403 = *$tmp6402;
$fn6405 $tmp6404 = ($fn6405) ((frost$io$OutputStream*) $tmp6401)->$class->vtable[20];
frost$core$Error* $tmp6406 = $tmp6404(((frost$io$OutputStream*) $tmp6401), ((frost$core$Object*) $tmp6403));
if ($tmp6406 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6406));
*(&local0) = $tmp6406;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6406));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6406));
// line 1760
frost$io$MemoryOutputStream** $tmp6407 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6408 = *$tmp6407;
frost$io$MemoryOutputStream$clear($tmp6408);
// line 1761
frost$io$IndentedOutputStream** $tmp6409 = &param0->out;
frost$io$IndentedOutputStream* $tmp6410 = *$tmp6409;
frost$io$MemoryOutputStream** $tmp6411 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6412 = *$tmp6411;
$fn6414 $tmp6413 = ($fn6414) ((frost$io$OutputStream*) $tmp6410)->$class->vtable[20];
frost$core$Error* $tmp6415 = $tmp6413(((frost$io$OutputStream*) $tmp6410), ((frost$core$Object*) $tmp6412));
if ($tmp6415 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6415));
*(&local0) = $tmp6415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6415));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6415));
// line 1762
frost$io$MemoryOutputStream** $tmp6416 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6417 = *$tmp6416;
frost$io$MemoryOutputStream$clear($tmp6417);
// line 1763
frost$io$IndentedOutputStream** $tmp6418 = &param0->out;
frost$io$IndentedOutputStream* $tmp6419 = *$tmp6418;
frost$io$MemoryOutputStream** $tmp6420 = &param0->types;
frost$io$MemoryOutputStream* $tmp6421 = *$tmp6420;
$fn6423 $tmp6422 = ($fn6423) ((frost$io$OutputStream*) $tmp6419)->$class->vtable[20];
frost$core$Error* $tmp6424 = $tmp6422(((frost$io$OutputStream*) $tmp6419), ((frost$core$Object*) $tmp6421));
if ($tmp6424 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6424));
*(&local0) = $tmp6424;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6424));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6424));
// line 1764
frost$io$MemoryOutputStream** $tmp6425 = &param0->types;
frost$io$MemoryOutputStream* $tmp6426 = *$tmp6425;
frost$io$MemoryOutputStream$clear($tmp6426);
// line 1765
frost$io$IndentedOutputStream** $tmp6427 = &param0->out;
frost$io$IndentedOutputStream* $tmp6428 = *$tmp6427;
frost$io$MemoryOutputStream** $tmp6429 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6430 = *$tmp6429;
$fn6432 $tmp6431 = ($fn6432) ((frost$io$OutputStream*) $tmp6428)->$class->vtable[20];
frost$core$Error* $tmp6433 = $tmp6431(((frost$io$OutputStream*) $tmp6428), ((frost$core$Object*) $tmp6430));
if ($tmp6433 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6433));
*(&local0) = $tmp6433;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6433));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6433));
// line 1766
frost$io$MemoryOutputStream** $tmp6434 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6435 = *$tmp6434;
frost$io$MemoryOutputStream$clear($tmp6435);
// line 1767
frost$io$IndentedOutputStream** $tmp6436 = &param0->out;
frost$io$IndentedOutputStream* $tmp6437 = *$tmp6436;
frost$io$MemoryOutputStream** $tmp6438 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6439 = *$tmp6438;
$fn6441 $tmp6440 = ($fn6441) ((frost$io$OutputStream*) $tmp6437)->$class->vtable[20];
frost$core$Error* $tmp6442 = $tmp6440(((frost$io$OutputStream*) $tmp6437), ((frost$core$Object*) $tmp6439));
if ($tmp6442 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6442));
*(&local0) = $tmp6442;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6442));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6442));
// line 1768
frost$io$MemoryOutputStream** $tmp6443 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6444 = *$tmp6443;
frost$io$MemoryOutputStream$clear($tmp6444);
goto block2;
block1:;
// line 1771
frost$core$Error* $tmp6445 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp6445));
// line 1772
frost$core$Int64 $tmp6446 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp6446);
goto block2;
block2:;
frost$core$Error* $tmp6447 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6447));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$cleanup(org$frostlang$frostc$CCodeGenerator* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp6448 = &param0->compiler;
frost$core$Weak* $tmp6449 = *$tmp6448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6449));
frost$io$File** $tmp6450 = &param0->outDir;
frost$io$File* $tmp6451 = *$tmp6450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6451));
frost$io$IndentedOutputStream** $tmp6452 = &param0->out;
frost$io$IndentedOutputStream* $tmp6453 = *$tmp6452;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6453));
frost$io$MemoryOutputStream** $tmp6454 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6455 = *$tmp6454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6455));
frost$collections$HashSet** $tmp6456 = &param0->imports;
frost$collections$HashSet* $tmp6457 = *$tmp6456;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6457));
frost$core$Weak** $tmp6458 = &param0->hCodeGen;
frost$core$Weak* $tmp6459 = *$tmp6458;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6459));
org$frostlang$frostc$HCodeGenerator** $tmp6460 = &param0->hCodeGenRetain;
org$frostlang$frostc$HCodeGenerator* $tmp6461 = *$tmp6460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6461));
org$frostlang$frostc$ClassDecl** $tmp6462 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6463 = *$tmp6462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6463));
frost$io$MemoryOutputStream** $tmp6464 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6465 = *$tmp6464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6465));
frost$io$MemoryOutputStream** $tmp6466 = &param0->declarations;
frost$io$MemoryOutputStream* $tmp6467 = *$tmp6466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6467));
frost$io$MemoryOutputStream** $tmp6468 = &param0->types;
frost$io$MemoryOutputStream* $tmp6469 = *$tmp6468;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6469));
frost$io$MemoryOutputStream** $tmp6470 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6471 = *$tmp6470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6471));
frost$io$IndentedOutputStream** $tmp6472 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6473 = *$tmp6472;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6473));
frost$io$MemoryOutputStream** $tmp6474 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6475 = *$tmp6474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6475));
frost$io$IndentedOutputStream** $tmp6476 = &param0->methodHeader;
frost$io$IndentedOutputStream* $tmp6477 = *$tmp6476;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6477));
frost$io$MemoryOutputStream** $tmp6478 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6479 = *$tmp6478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6479));
frost$io$IndentedOutputStream** $tmp6480 = &param0->shims;
frost$io$IndentedOutputStream* $tmp6481 = *$tmp6480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6481));
frost$collections$HashSet** $tmp6482 = &param0->declared;
frost$collections$HashSet* $tmp6483 = *$tmp6482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6483));
frost$collections$HashSet** $tmp6484 = &param0->writtenTypes;
frost$collections$HashSet* $tmp6485 = *$tmp6484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6485));
frost$collections$HashSet** $tmp6486 = &param0->writtenWrappers;
frost$collections$HashSet* $tmp6487 = *$tmp6486;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6487));
frost$collections$HashMap** $tmp6488 = &param0->classConstants;
frost$collections$HashMap* $tmp6489 = *$tmp6488;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6489));
frost$collections$IdentityMap** $tmp6490 = &param0->variableNames;
frost$collections$IdentityMap* $tmp6491 = *$tmp6490;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6491));
frost$core$String** $tmp6492 = &param0->currentBlock;
frost$core$String* $tmp6493 = *$tmp6492;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6493));
org$frostlang$frostc$MethodDecl** $tmp6494 = &param0->currentMethod;
org$frostlang$frostc$MethodDecl* $tmp6495 = *$tmp6494;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6495));
frost$core$String** $tmp6496 = &param0->returnValueVar;
frost$core$String* $tmp6497 = *$tmp6496;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6497));
frost$collections$Stack** $tmp6498 = &param0->enclosingContexts;
frost$collections$Stack* $tmp6499 = *$tmp6498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6499));
frost$collections$IdentityMap** $tmp6500 = &param0->methodShims;
frost$collections$IdentityMap* $tmp6501 = *$tmp6500;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6501));
frost$collections$IdentityMap** $tmp6502 = &param0->choiceDataSizes;
frost$collections$IdentityMap* $tmp6503 = *$tmp6502;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6503));
frost$collections$HashMap** $tmp6504 = &param0->refs;
frost$collections$HashMap* $tmp6505 = *$tmp6504;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6505));
org$frostlang$frostc$IR** $tmp6506 = &param0->ir;
org$frostlang$frostc$IR* $tmp6507 = *$tmp6506;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6507));
return;

}

