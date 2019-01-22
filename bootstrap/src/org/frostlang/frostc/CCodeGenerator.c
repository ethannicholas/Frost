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
typedef frost$core$String* (*$fn169)(frost$core$Object*);
typedef frost$core$Bit (*$fn251)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn262)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn274)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn286)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn319)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn349)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn412)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn419)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn475)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn479)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn484)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn497)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn501)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn506)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn597)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn601)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn606)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn686)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn748)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn752)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn757)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn831)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn870)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn934)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1002)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1031)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1035)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1040)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1082)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1113)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1117)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1122)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1148)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1155)(frost$core$Object*);
typedef frost$core$Int64 (*$fn1205)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1211)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1248)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1266)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1317)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1354)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1385)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1446)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1485)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1529)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1541)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1559)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1578)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1616)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1653)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1669)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Bit (*$fn1685)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1700)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1724)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1749)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1782)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1808)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1812)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1817)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1859)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1895)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1899)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1904)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1930)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1963)(frost$core$Object*);
typedef frost$core$Bit (*$fn2017)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2197)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2201)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2206)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn2232)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn2275)(frost$core$Object*);
typedef frost$core$Error* (*$fn2312)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2440)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2469)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn2505)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn2542)(frost$core$Object*);
typedef frost$core$Error* (*$fn2756)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2766)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2785)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn2798)(frost$core$Object*);
typedef frost$core$Int64 (*$fn2820)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2844)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn2915)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2931)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2952)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2965)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2983)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn3007)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn3045)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn3086)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn3105)(frost$core$Object*);
typedef frost$core$Bit (*$fn3134)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3153)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3167)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3175)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3208)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3222)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3229)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3248)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3262)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3284)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3295)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3303)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3338)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3349)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3360)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3372)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3377)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3394)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3406)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn3426)(frost$core$Object*);
typedef frost$core$Bit (*$fn3447)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3582)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3612)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3662)(frost$core$Object*);
typedef frost$core$String* (*$fn3666)(frost$core$Object*);
typedef frost$core$Error* (*$fn3719)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn3725)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3729)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3734)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn3743)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Error* (*$fn3753)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn3761)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3770)(frost$collections$Key*);
typedef frost$core$Error* (*$fn3777)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn3792)(frost$core$Object*);
typedef frost$core$Bit (*$fn3804)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3855)(frost$core$Object*);
typedef frost$core$String* (*$fn3867)(frost$core$Object*);
typedef frost$core$Bit (*$fn4058)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn4079)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn4095)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4105)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn4135)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn4151)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4161)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn4196)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4372)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn4379)(frost$core$Object*);
typedef frost$core$Error* (*$fn4399)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn4406)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn4415)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4434)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn4441)(frost$core$Object*);
typedef frost$core$Bit (*$fn4461)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn4512)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn4531)(frost$core$Object*);
typedef frost$core$Error* (*$fn4564)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn4573)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4577)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4582)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn4597)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4610)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn4628)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn4633)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4652)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn4669)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4686)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn4695)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4699)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4704)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn4711)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4722)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4735)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn4749)(frost$core$Object*);
typedef frost$core$Error* (*$fn4783)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn4798)(frost$core$Object*);
typedef frost$core$Error* (*$fn4858)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn4877)(frost$core$Object*);
typedef frost$core$Error* (*$fn4907)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn4922)(frost$core$Object*);
typedef frost$core$Error* (*$fn4942)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4960)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4985)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5002)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5030)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn5049)(frost$core$Object*);
typedef frost$core$Error* (*$fn5081)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn5096)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn5105)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5120)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn5133)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn5142)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5157)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn5170)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn5179)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5194)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn5207)(frost$core$Object*);
typedef frost$core$Error* (*$fn5242)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn5259)(frost$core$Object*);
typedef frost$core$Error* (*$fn5273)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn5282)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn5295)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5318)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn5335)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn5348)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5367)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn5384)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn5395)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn5407)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn5419)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn5430)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5460)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn5479)(frost$core$Object*);
typedef frost$core$Error* (*$fn5504)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn5517)(frost$core$Object*);
typedef frost$core$Error* (*$fn5531)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5536)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn5544)(frost$core$Object*);
typedef frost$core$Bit (*$fn5567)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn5585)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5601)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5617)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5632)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn5642)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn5646)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5651)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn5658)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5669)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5682)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn5696)(frost$core$Object*);
typedef frost$core$Error* (*$fn5712)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn5719)(frost$core$Object*);
typedef frost$core$Error* (*$fn5789)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6114)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn6130)(frost$core$Object*);
typedef frost$core$Int64 (*$fn6142)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn6186)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6202)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6210)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn6242)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn6291)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn6305)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn6381)(frost$core$Object*);
typedef frost$core$Error* (*$fn6413)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6437)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn6454)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn6458)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn6463)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn6485)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6503)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6520)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6529)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6537)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn6555)(frost$core$Object*);
typedef frost$core$Error* (*$fn6630)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn6658)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6667)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6676)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6685)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6694)(frost$io$OutputStream*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 35, -2345644890872423107, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x74\x79\x70\x65\x20", 16, 7914278075631058822, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x63\x4d\x65\x74\x68\x6f\x64\x54\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x73\x65\x6c\x66\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 163, 3276100450823531157, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x28", 2, 14382, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s461 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x38", 1, 157, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31\x36", 2, 15204, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x33\x32", 2, 15402, NULL };
static frost$core$String $s554 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s670 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s884 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static frost$core$String $s888 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s901 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s915 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s925 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static frost$core$String $s927 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s960 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s989 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static frost$core$String $s1008 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x73\x20\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 16, 538313452881261501, NULL };
static frost$core$String $s1009 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1017 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static frost$core$String $s1025 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1027 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1063 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static frost$core$String $s1070 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1076 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static frost$core$String $s1078 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static frost$core$String $s1086 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static frost$core$String $s1088 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1092 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s1098 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s1100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s1107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s1157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static frost$core$String $s1163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static frost$core$String $s1240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x5f\x61\x74\x74\x72\x69\x62\x75\x74\x65\x5f\x5f\x28\x28\x77\x65\x61\x6b\x29\x29\x20", 22, 985746977287669079, NULL };
static frost$core$String $s1242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x70", 2, 13545, NULL };
static frost$core$String $s1315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1327 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s1375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static frost$core$String $s1413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70", 1, 213, NULL };
static frost$core$String $s1415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x2a\x29\x20", 21, 439094005818830454, NULL };
static frost$core$String $s1481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x46\x72\x6f\x73\x74\x24\x75\x6e\x72\x65\x66\x24\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x24\x51\x28", 43, 2176290240124383769, NULL };
static frost$core$String $s1539 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static frost$core$String $s1557 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1570 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1608 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1629 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1694 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static frost$core$String $s1696 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s1698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s1726 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1784 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1793 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1794 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x63\x72\x65\x61\x74\x65\x4d\x65\x74\x68\x6f\x64\x53\x68\x69\x6d\x28\x72\x61\x77\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x65\x66\x66\x65\x63\x74\x69\x76\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4d\x65\x74\x68\x6f\x64\x53\x68\x69\x6d", 206, -7873525039119771459, NULL };
static frost$core$String $s1802 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1804 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1840 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static frost$core$String $s1847 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static frost$core$String $s1855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static frost$core$String $s1863 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static frost$core$String $s1865 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1869 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s1874 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1876 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static frost$core$String $s1882 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1886 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s1889 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1891 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1909 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1918 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1924 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s1943 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static frost$core$String $s1945 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1965 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2058 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static frost$core$String $s2059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s2092 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static frost$core$String $s2093 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s2116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s2123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s2137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s2150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static frost$core$String $s2156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static frost$core$String $s2162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s2168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s2191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s2221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s2253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static frost$core$String $s2298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s2300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s2306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static frost$core$String $s2310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2340 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static frost$core$String $s2341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s2360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2390 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s2392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static frost$core$String $s2398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static frost$core$String $s2404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s2410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s2433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2474 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static frost$core$String $s2544 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2556 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s2558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2578 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2596 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2605 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24", 1, 137, NULL };
static frost$core$String $s2610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2639 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s2641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s2645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s2647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s2651 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s2653 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s2657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2659 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2663 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2665 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2669 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s2671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s2675 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s2677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s2681 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2693 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s2695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s2702 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s2704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s2708 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s2710 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s2715 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s2717 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s2722 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2724 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2729 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s2731 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s2736 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s2746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s2750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2758 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static frost$core$String $s2764 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2773 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2776 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2780 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2783 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s2800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2878 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2885 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s2887 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s2890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static frost$core$String $s2895 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static frost$core$String $s2908 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static frost$core$String $s2910 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2913 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static frost$core$String $s2921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static frost$core$String $s2923 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, -2219903404419143126, NULL };
static frost$core$String $s2929 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s2946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2950 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static frost$core$String $s2967 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3071 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3075 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s3079 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static frost$core$String $s3084 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s3107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6c\x6c\x69\x6e\x67\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 17, 6273213310080951380, NULL };
static frost$core$String $s3121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x61\x20\x74\x61\x72\x67\x65\x74", 17, 4566770767977439161, NULL };
static frost$core$String $s3122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s3173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static frost$core$String $s3202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s3206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static frost$core$String $s3246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static frost$core$String $s3264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3299 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s3301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static frost$core$String $s3317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s3321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 17, 6191911388433222465, NULL };
static frost$core$String $s3327 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 22, -4321982028467046391, NULL };
static frost$core$String $s3333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x29\x3b", 15, -9084967859609473468, NULL };
static frost$core$String $s3344 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static frost$core$String $s3347 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static frost$core$String $s3392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x3b", 8, 14324500803727928, NULL };
static frost$core$String $s3408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3434 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3437 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static frost$core$String $s3464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s3466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static frost$core$String $s3470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static frost$core$String $s3474 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static frost$core$String $s3482 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3484 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static frost$core$String $s3487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static frost$core$String $s3490 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3492 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static frost$core$String $s3501 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3504 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3506 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3509 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3519 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3642 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3659 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75", 1, 218, NULL };
static frost$core$String $s3671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s3677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static frost$core$String $s3680 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3681 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3696 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73", 2, 13952, NULL };
static frost$core$String $s3698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3706 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s3708 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s3712 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -2509429713584291557, NULL };
static frost$core$String $s3714 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s3717 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 309785060753825527, NULL };
static frost$core$String $s3745 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x78", 1, 221, NULL };
static frost$core$String $s3747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static frost$core$String $s3749 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static frost$core$String $s3751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3765 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static frost$core$String $s3767 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s3775 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static frost$core$String $s3782 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3784 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3794 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3809 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3a\x20", 14, 4299600041167827879, NULL };
static frost$core$String $s3811 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3812 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static frost$core$String $s3841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x4e\x55\x4c\x4c\x29", 7, 151080389671230, NULL };
static frost$core$String $s3879 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x26\x6c\x6f\x63\x61\x6c", 7, 150085078960302, NULL };
static frost$core$String $s3881 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3920 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static frost$core$String $s3922 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3953 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x64\x20", 3, 2111538, NULL };
static frost$core$String $s3955 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x68\x61\x73\x20\x6e\x6f\x74\x20\x62\x65\x65\x6e\x20\x64\x65\x66\x69\x6e\x65\x64", 21, -4672138024147032761, NULL };
static frost$core$String $s3956 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3967 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x20\x72\x65\x66\x3a\x20", 15, -4631094845120441450, NULL };
static frost$core$String $s3969 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3988 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20", 18, -3453142811018688841, NULL };
static frost$core$String $s3990 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3991 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4063 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s4069 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s4087 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s4110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s4113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21", 1, 134, NULL };
static frost$core$String $s4115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static frost$core$String $s4120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static frost$core$String $s4143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s4166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s4170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static frost$core$String $s4175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static frost$core$String $s4227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s4229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s4233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s4235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s4239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s4241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s4248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s4250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s4254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s4256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s4260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s4262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s4266 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s4268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s4275 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s4277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s4284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s4286 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s4293 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s4295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s4302 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s4304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s4311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s4313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s4317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s4319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s4323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s4325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s4329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s4331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s4335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s4337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s4343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a\x20", 22, 2546911445157482260, NULL };
static frost$core$String $s4345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static frost$core$String $s4397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s4424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static frost$core$String $s4428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static frost$core$String $s4432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 16, -1641588070395923110, NULL };
static frost$core$String $s4468 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s4470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s4478 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x66\x72\x6f\x73\x74\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 19, 1107787609391233434, NULL };
static frost$core$String $s4505 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4509 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4541 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4557 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4562 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s4568 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4570 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4590 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4595 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4605 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x3b", 2, 22885, NULL };
static frost$core$String $s4630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4663 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s4690 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4692 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4728 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4730 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4737 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4768 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4772 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4776 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4781 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4814 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static frost$core$String $s4817 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s4841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x29\x20\x28", 4, 147754556, NULL };
static frost$core$String $s4849 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x64\x61\x74\x61\x20", 8, 15719379260890086, NULL };
static frost$core$String $s4853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b\x20", 2, 14576, NULL };
static frost$core$String $s4855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4879 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4892 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s4896 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x26", 4, 137655564, NULL };
static frost$core$String $s4900 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s4905 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4924 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4934 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static frost$core$String $s4936 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4940 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static frost$core$String $s4950 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static frost$core$String $s4952 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, -2219903404419143126, NULL };
static frost$core$String $s4958 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s4979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4983 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static frost$core$String $s5004 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s5016 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5020 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5024 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static frost$core$String $s5028 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s5051 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5062 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5066 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s5070 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s5074 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static frost$core$String $s5078 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s5098 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x2a", 4, 137655568, NULL };
static frost$core$String $s5118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x2d", 4, 137655571, NULL };
static frost$core$String $s5155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x21", 4, 137655559, NULL };
static frost$core$String $s5192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s5227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static frost$core$String $s5231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x29\x20\x66\x72\x6f\x73\x74\x41\x6c\x6c\x6f\x63\x28", 14, 1479774152278083113, NULL };
static frost$core$String $s5235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static frost$core$String $s5261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x46\x72\x65\x65\x28", 10, 1903662118626742793, NULL };
static frost$core$String $s5271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s5316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s5337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5353 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static frost$core$String $s5365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x66\x6f\x72\x20\x74\x79\x70\x65\x20", 22, 6026307984013519672, NULL };
static frost$core$String $s5412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s5435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x66\x72\x6f\x73\x74\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, -7010250365195627110, NULL };
static frost$core$String $s5439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5494 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s5498 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x20\x3d\x20", 4, 200211019, NULL };
static frost$core$String $s5502 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5519 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5527 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s5529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5538 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static frost$core$String $s5546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5559 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5561 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5579 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5583 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5595 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5599 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s5628 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s5630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5637 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5639 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5675 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s5706 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5710 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5721 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5785 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f\x20", 3, 1514527, NULL };
static frost$core$String $s5787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x62\x6f\x72\x74\x28\x29\x3b\x20\x2f\x2f\x20\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 23, 8273563093259754029, NULL };
static frost$core$String $s6121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x20", 22, 6964540114321148707, NULL };
static frost$core$String $s6123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static frost$core$String $s6167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s6184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c", 7, 141826707331641, NULL };
static frost$core$String $s6212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s6279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static frost$core$String $s6294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30", 1, 149, NULL };
static frost$core$String $s6298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30", 1, 149, NULL };
static frost$core$String $s6383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s6411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s6416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static frost$core$String $s6435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6478 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static frost$core$String $s6483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6498 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6505 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s6539 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s6557 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6565 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6566 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x77\x72\x69\x74\x65\x28\x6d\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x69\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x29", 137, -8068718440467774474, NULL };
static frost$core$String $s6572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6606 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x63", 2, 14946, NULL };

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
// line 191
frost$io$MemoryOutputStream* $tmp23 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp23);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$io$MemoryOutputStream** $tmp24 = &param0->includes;
frost$io$MemoryOutputStream* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$io$MemoryOutputStream** $tmp26 = &param0->includes;
*$tmp26 = $tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// line 193
frost$io$MemoryOutputStream* $tmp27 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp27);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$io$MemoryOutputStream** $tmp28 = &param0->declarations;
frost$io$MemoryOutputStream* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$io$MemoryOutputStream** $tmp30 = &param0->declarations;
*$tmp30 = $tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// line 195
frost$io$MemoryOutputStream* $tmp31 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp31);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$io$MemoryOutputStream** $tmp32 = &param0->types;
frost$io$MemoryOutputStream* $tmp33 = *$tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$io$MemoryOutputStream** $tmp34 = &param0->types;
*$tmp34 = $tmp31;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// line 197
frost$io$MemoryOutputStream* $tmp35 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp35);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$io$MemoryOutputStream** $tmp36 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp37 = *$tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$io$MemoryOutputStream** $tmp38 = &param0->methodsBuffer;
*$tmp38 = $tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// line 199
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
// line 201
frost$io$MemoryOutputStream* $tmp45 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp45);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$io$MemoryOutputStream** $tmp46 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp47 = *$tmp46;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$io$MemoryOutputStream** $tmp48 = &param0->methodHeaderBuffer;
*$tmp48 = $tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// line 203
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
// line 205
frost$io$MemoryOutputStream* $tmp55 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp55);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$io$MemoryOutputStream** $tmp56 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp57 = *$tmp56;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$io$MemoryOutputStream** $tmp58 = &param0->shimsBuffer;
*$tmp58 = $tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// line 207
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
// line 209
frost$collections$HashSet* $tmp65 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp65);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$collections$HashSet** $tmp66 = &param0->declared;
frost$collections$HashSet* $tmp67 = *$tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$collections$HashSet** $tmp68 = &param0->declared;
*$tmp68 = $tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// line 211
frost$collections$HashSet* $tmp69 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp69);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$collections$HashSet** $tmp70 = &param0->writtenTypes;
frost$collections$HashSet* $tmp71 = *$tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$collections$HashSet** $tmp72 = &param0->writtenTypes;
*$tmp72 = $tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// line 213
frost$collections$HashSet* $tmp73 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp73);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$collections$HashSet** $tmp74 = &param0->writtenWrappers;
frost$collections$HashSet* $tmp75 = *$tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$collections$HashSet** $tmp76 = &param0->writtenWrappers;
*$tmp76 = $tmp73;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// line 215
frost$collections$HashMap* $tmp77 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp77);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$collections$HashMap** $tmp78 = &param0->classConstants;
frost$collections$HashMap* $tmp79 = *$tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$collections$HashMap** $tmp80 = &param0->classConstants;
*$tmp80 = $tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// line 217
frost$collections$IdentityMap* $tmp81 = (frost$collections$IdentityMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init($tmp81);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$collections$IdentityMap** $tmp82 = &param0->variableNames;
frost$collections$IdentityMap* $tmp83 = *$tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$collections$IdentityMap** $tmp84 = &param0->variableNames;
*$tmp84 = $tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// line 225
frost$collections$Stack* $tmp85 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp85);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$collections$Stack** $tmp86 = &param0->enclosingContexts;
frost$collections$Stack* $tmp87 = *$tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$collections$Stack** $tmp88 = &param0->enclosingContexts;
*$tmp88 = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// line 227
frost$core$Int64 $tmp89 = (frost$core$Int64) {0};
frost$core$Int64* $tmp90 = &param0->varCount;
*$tmp90 = $tmp89;
// line 229
frost$collections$IdentityMap* $tmp91 = (frost$collections$IdentityMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init($tmp91);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$collections$IdentityMap** $tmp92 = &param0->methodShims;
frost$collections$IdentityMap* $tmp93 = *$tmp92;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$collections$IdentityMap** $tmp94 = &param0->methodShims;
*$tmp94 = $tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// line 231
frost$collections$IdentityMap* $tmp95 = (frost$collections$IdentityMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init($tmp95);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$collections$IdentityMap** $tmp96 = &param0->choiceDataSizes;
frost$collections$IdentityMap* $tmp97 = *$tmp96;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$collections$IdentityMap** $tmp98 = &param0->choiceDataSizes;
*$tmp98 = $tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// line 233
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
frost$core$Bit $tmp164 = frost$core$Bit$init$builtin_bit(false);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp166 = (frost$core$Int64) {97};
frost$core$Error* $tmp167 = *(&local0);
$fn169 $tmp168 = ($fn169) ((frost$core$Object*) $tmp167)->$class->vtable[0];
frost$core$String* $tmp170 = $tmp168(((frost$core$Object*) $tmp167));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s171, $tmp166, $tmp170);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
abort(); // unreachable
block9:;
// line 98
goto block11;
block11:;
goto block11;
block12:;
goto block2;
block2:;
frost$core$Error* $tmp172 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
frost$core$Bit local1;
// line 103
frost$core$Bit* $tmp173 = &param1->resolved;
frost$core$Bit $tmp174 = *$tmp173;
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp176 = (frost$core$Int64) {103};
frost$core$String* $tmp177 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s178, ((frost$core$Object*) param1));
frost$core$String* $tmp179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp177, &$s180);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s181, $tmp176, $tmp179);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
abort(); // unreachable
block1:;
// line 104
frost$core$Bit $tmp182 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(param1);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block3; else goto block4;
block3:;
// line 105
frost$core$Weak** $tmp184 = &param0->compiler;
frost$core$Weak* $tmp185 = *$tmp184;
frost$core$Object* $tmp186 = frost$core$Weak$get$R$frost$core$Weak$T($tmp185);
org$frostlang$frostc$ClassDecl* $tmp187 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp186), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
org$frostlang$frostc$ClassDecl* $tmp188 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local0) = $tmp187;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q($tmp186);
// line 106
org$frostlang$frostc$ClassDecl* $tmp189 = *(&local0);
frost$core$Bit $tmp190 = frost$core$Bit$init$builtin_bit($tmp189 != NULL);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp192 = (frost$core$Int64) {106};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s193, $tmp192);
abort(); // unreachable
block5:;
// line 107
org$frostlang$frostc$ClassDecl* $tmp194 = *(&local0);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, $tmp194);
org$frostlang$frostc$ClassDecl* $tmp195 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block4;
block4:;
// line 109
org$frostlang$frostc$Type$Kind* $tmp196 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp197 = *$tmp196;
frost$core$Int64 $tmp198 = $tmp197.$rawValue;
frost$core$Int64 $tmp199 = (frost$core$Int64) {15};
frost$core$Bit $tmp200 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp199);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {14};
frost$core$Bit $tmp203 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block8; else goto block10;
block8:;
// line 111
org$frostlang$frostc$Type* $tmp205 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$String* $tmp206 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp205);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
return $tmp206;
block10:;
frost$core$Int64 $tmp207 = (frost$core$Int64) {17};
frost$core$Bit $tmp208 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp210 = (frost$core$Int64) {16};
frost$core$Bit $tmp211 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp210);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block11; else goto block13;
block11:;
// line 114
org$frostlang$frostc$Type* $tmp213 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$String* $tmp214 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp213);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
return $tmp214;
block13:;
frost$core$Int64 $tmp215 = (frost$core$Int64) {10};
frost$core$Bit $tmp216 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block14; else goto block7;
block14:;
// line 117
org$frostlang$frostc$FixedArray** $tmp218 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp219 = *$tmp218;
frost$core$Int64 $tmp220 = (frost$core$Int64) {0};
frost$core$Object* $tmp221 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp219, $tmp220);
frost$core$String** $tmp222 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp221))->name;
frost$core$String* $tmp223 = *$tmp222;
frost$core$Bit $tmp224 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp223, &$s225);
bool $tmp226 = $tmp224.value;
if ($tmp226) goto block17; else goto block18;
block17:;
org$frostlang$frostc$FixedArray** $tmp227 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp228 = *$tmp227;
frost$core$Int64 $tmp229 = (frost$core$Int64) {1};
frost$core$Object* $tmp230 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp228, $tmp229);
frost$core$Bit $tmp231 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp230));
frost$core$Frost$unref$frost$core$Object$Q($tmp230);
*(&local1) = $tmp231;
goto block19;
block18:;
*(&local1) = $tmp224;
goto block19;
block19:;
frost$core$Bit $tmp232 = *(&local1);
bool $tmp233 = $tmp232.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp221);
if ($tmp233) goto block15; else goto block16;
block15:;
// line 118
org$frostlang$frostc$FixedArray** $tmp234 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp235 = *$tmp234;
frost$core$Int64 $tmp236 = (frost$core$Int64) {1};
frost$core$Object* $tmp237 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp235, $tmp236);
frost$core$String* $tmp238 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp237), ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$Frost$unref$frost$core$Object$Q($tmp237);
return $tmp238;
block16:;
goto block7;
block7:;
// line 122
frost$core$Weak** $tmp239 = &param0->hCodeGen;
frost$core$Weak* $tmp240 = *$tmp239;
frost$core$Object* $tmp241 = frost$core$Weak$get$R$frost$core$Weak$T($tmp240);
frost$core$String* $tmp242 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp241), param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$core$Frost$unref$frost$core$Object$Q($tmp241);
return $tmp242;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$Type* param2) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$String* local3 = NULL;
frost$core$MutableString* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$Int64 local6;
frost$core$Error* local7 = NULL;
org$frostlang$frostc$Type$Kind* $tmp243 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp244 = *$tmp243;
org$frostlang$frostc$Type$Kind$wrapper* $tmp245;
$tmp245 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp245->value = $tmp244;
frost$core$Int64 $tmp246 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp247 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp246);
org$frostlang$frostc$Type$Kind$wrapper* $tmp248;
$tmp248 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp248->value = $tmp247;
ITable* $tmp249 = ((frost$core$Equatable*) $tmp245)->$class->itable;
while ($tmp249->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[0];
frost$core$Bit $tmp252 = $tmp250(((frost$core$Equatable*) $tmp245), ((frost$core$Equatable*) $tmp248));
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block1; else goto block2;
block1:;
*(&local2) = $tmp252;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp254 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp255 = *$tmp254;
org$frostlang$frostc$Type$Kind$wrapper* $tmp256;
$tmp256 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp256->value = $tmp255;
frost$core$Int64 $tmp257 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp258 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp257);
org$frostlang$frostc$Type$Kind$wrapper* $tmp259;
$tmp259 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp259->value = $tmp258;
ITable* $tmp260 = ((frost$core$Equatable*) $tmp256)->$class->itable;
while ($tmp260->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp260 = $tmp260->next;
}
$fn262 $tmp261 = $tmp260->methods[0];
frost$core$Bit $tmp263 = $tmp261(((frost$core$Equatable*) $tmp256), ((frost$core$Equatable*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp259)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp256)));
*(&local2) = $tmp263;
goto block3;
block3:;
frost$core$Bit $tmp264 = *(&local2);
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block4; else goto block5;
block4:;
*(&local1) = $tmp264;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp266 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp267 = *$tmp266;
org$frostlang$frostc$Type$Kind$wrapper* $tmp268;
$tmp268 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp268->value = $tmp267;
frost$core$Int64 $tmp269 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp270 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp269);
org$frostlang$frostc$Type$Kind$wrapper* $tmp271;
$tmp271 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp271->value = $tmp270;
ITable* $tmp272 = ((frost$core$Equatable*) $tmp268)->$class->itable;
while ($tmp272->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp272 = $tmp272->next;
}
$fn274 $tmp273 = $tmp272->methods[0];
frost$core$Bit $tmp275 = $tmp273(((frost$core$Equatable*) $tmp268), ((frost$core$Equatable*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp271)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp268)));
*(&local1) = $tmp275;
goto block6;
block6:;
frost$core$Bit $tmp276 = *(&local1);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block7; else goto block8;
block7:;
*(&local0) = $tmp276;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp278 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp279 = *$tmp278;
org$frostlang$frostc$Type$Kind$wrapper* $tmp280;
$tmp280 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp280->value = $tmp279;
frost$core$Int64 $tmp281 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp282 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp281);
org$frostlang$frostc$Type$Kind$wrapper* $tmp283;
$tmp283 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp283->value = $tmp282;
ITable* $tmp284 = ((frost$core$Equatable*) $tmp280)->$class->itable;
while ($tmp284->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp284 = $tmp284->next;
}
$fn286 $tmp285 = $tmp284->methods[0];
frost$core$Bit $tmp287 = $tmp285(((frost$core$Equatable*) $tmp280), ((frost$core$Equatable*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp283)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp280)));
*(&local0) = $tmp287;
goto block9;
block9:;
frost$core$Bit $tmp288 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp248)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp245)));
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp290 = (frost$core$Int64) {127};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s291, $tmp290, &$s292);
abort(); // unreachable
block10:;
// line 128
frost$core$Int64* $tmp293 = &param0->varCount;
frost$core$Int64 $tmp294 = *$tmp293;
frost$core$Int64 $tmp295 = (frost$core$Int64) {1};
int64_t $tmp296 = $tmp294.value;
int64_t $tmp297 = $tmp295.value;
int64_t $tmp298 = $tmp296 + $tmp297;
frost$core$Int64 $tmp299 = (frost$core$Int64) {$tmp298};
frost$core$Int64* $tmp300 = &param0->varCount;
*$tmp300 = $tmp299;
// line 129
frost$core$Int64* $tmp301 = &param0->varCount;
frost$core$Int64 $tmp302 = *$tmp301;
frost$core$Int64$wrapper* $tmp303;
$tmp303 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp303->value = $tmp302;
frost$core$String* $tmp304 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s305, ((frost$core$Object*) $tmp303));
frost$core$String* $tmp306 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp304, &$s307);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$String* $tmp308 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local3) = $tmp306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// line 130
frost$core$MutableString* $tmp309 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp309, &$s310);
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
frost$core$MutableString* $tmp311 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local4) = $tmp309;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// line 131
frost$core$MutableString* $tmp312 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp313 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp314 = *$tmp313;
org$frostlang$frostc$FixedArray** $tmp315 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp316 = *$tmp315;
ITable* $tmp317 = ((frost$collections$CollectionView*) $tmp316)->$class->itable;
while ($tmp317->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp317 = $tmp317->next;
}
$fn319 $tmp318 = $tmp317->methods[0];
frost$core$Int64 $tmp320 = $tmp318(((frost$collections$CollectionView*) $tmp316));
frost$core$Int64 $tmp321 = (frost$core$Int64) {1};
int64_t $tmp322 = $tmp320.value;
int64_t $tmp323 = $tmp321.value;
int64_t $tmp324 = $tmp322 - $tmp323;
frost$core$Int64 $tmp325 = (frost$core$Int64) {$tmp324};
frost$core$Object* $tmp326 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp314, $tmp325);
frost$core$String* $tmp327 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp326));
frost$core$MutableString$append$frost$core$String($tmp312, $tmp327);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Frost$unref$frost$core$Object$Q($tmp326);
// line 132
frost$core$MutableString* $tmp328 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp328, &$s329);
// line 133
frost$core$MutableString* $tmp330 = *(&local4);
frost$core$String* $tmp331 = *(&local3);
frost$core$MutableString$append$frost$core$String($tmp330, $tmp331);
// line 134
frost$core$MutableString* $tmp332 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp332, &$s333);
// line 135
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s334));
frost$core$String* $tmp335 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local5) = &$s336;
// line 136
frost$core$Bit $tmp337 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block12; else goto block13;
block12:;
// line 137
frost$core$MutableString* $tmp339 = *(&local4);
frost$core$String* $tmp340 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$MutableString$append$frost$core$String($tmp339, $tmp340);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// line 138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s341));
frost$core$String* $tmp342 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local5) = &$s343;
goto block13;
block13:;
// line 140
frost$core$Int64 $tmp344 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp345 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp346 = *$tmp345;
ITable* $tmp347 = ((frost$collections$CollectionView*) $tmp346)->$class->itable;
while ($tmp347->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp347 = $tmp347->next;
}
$fn349 $tmp348 = $tmp347->methods[0];
frost$core$Int64 $tmp350 = $tmp348(((frost$collections$CollectionView*) $tmp346));
frost$core$Int64 $tmp351 = (frost$core$Int64) {1};
int64_t $tmp352 = $tmp350.value;
int64_t $tmp353 = $tmp351.value;
int64_t $tmp354 = $tmp352 - $tmp353;
frost$core$Int64 $tmp355 = (frost$core$Int64) {$tmp354};
frost$core$Bit $tmp356 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp357 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp344, $tmp355, $tmp356);
frost$core$Int64 $tmp358 = $tmp357.min;
*(&local6) = $tmp358;
frost$core$Int64 $tmp359 = $tmp357.max;
frost$core$Bit $tmp360 = $tmp357.inclusive;
bool $tmp361 = $tmp360.value;
frost$core$Int64 $tmp362 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp363 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp362);
if ($tmp361) goto block17; else goto block18;
block17:;
int64_t $tmp364 = $tmp358.value;
int64_t $tmp365 = $tmp359.value;
bool $tmp366 = $tmp364 <= $tmp365;
frost$core$Bit $tmp367 = (frost$core$Bit) {$tmp366};
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block14; else goto block15;
block18:;
int64_t $tmp369 = $tmp358.value;
int64_t $tmp370 = $tmp359.value;
bool $tmp371 = $tmp369 < $tmp370;
frost$core$Bit $tmp372 = (frost$core$Bit) {$tmp371};
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block14; else goto block15;
block14:;
// line 141
frost$core$MutableString* $tmp374 = *(&local4);
frost$core$String* $tmp375 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp374, $tmp375);
// line 142
frost$core$MutableString* $tmp376 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp377 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp378 = *$tmp377;
frost$core$Int64 $tmp379 = *(&local6);
frost$core$Object* $tmp380 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp378, $tmp379);
frost$core$String* $tmp381 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp380));
frost$core$MutableString$append$frost$core$String($tmp376, $tmp381);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
frost$core$Frost$unref$frost$core$Object$Q($tmp380);
// line 143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s382));
frost$core$String* $tmp383 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local5) = &$s384;
goto block16;
block16:;
frost$core$Int64 $tmp385 = *(&local6);
int64_t $tmp386 = $tmp359.value;
int64_t $tmp387 = $tmp385.value;
int64_t $tmp388 = $tmp386 - $tmp387;
frost$core$Int64 $tmp389 = (frost$core$Int64) {$tmp388};
frost$core$UInt64 $tmp390 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp389);
if ($tmp361) goto block20; else goto block21;
block20:;
uint64_t $tmp391 = $tmp390.value;
uint64_t $tmp392 = $tmp363.value;
bool $tmp393 = $tmp391 >= $tmp392;
frost$core$Bit $tmp394 = (frost$core$Bit) {$tmp393};
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block19; else goto block15;
block21:;
uint64_t $tmp396 = $tmp390.value;
uint64_t $tmp397 = $tmp363.value;
bool $tmp398 = $tmp396 > $tmp397;
frost$core$Bit $tmp399 = (frost$core$Bit) {$tmp398};
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block19; else goto block15;
block19:;
int64_t $tmp401 = $tmp385.value;
int64_t $tmp402 = $tmp362.value;
int64_t $tmp403 = $tmp401 + $tmp402;
frost$core$Int64 $tmp404 = (frost$core$Int64) {$tmp403};
*(&local6) = $tmp404;
goto block14;
block15:;
// line 145
frost$core$MutableString* $tmp405 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp405, &$s406);
// line 146
*(&local7) = ((frost$core$Error*) NULL);
// line 147
frost$io$MemoryOutputStream** $tmp407 = &param0->types;
frost$io$MemoryOutputStream* $tmp408 = *$tmp407;
frost$core$MutableString* $tmp409 = *(&local4);
frost$core$String* $tmp410 = frost$core$MutableString$finish$R$frost$core$String($tmp409);
$fn412 $tmp411 = ($fn412) ((frost$io$OutputStream*) $tmp408)->$class->vtable[19];
frost$core$Error* $tmp413 = $tmp411(((frost$io$OutputStream*) $tmp408), $tmp410);
if ($tmp413 == NULL) goto block24; else goto block25;
block25:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local7) = $tmp413;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
goto block22;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
goto block23;
block22:;
// line 150
frost$core$Bit $tmp414 = frost$core$Bit$init$builtin_bit(false);
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp416 = (frost$core$Int64) {150};
frost$core$Error* $tmp417 = *(&local7);
$fn419 $tmp418 = ($fn419) ((frost$core$Object*) $tmp417)->$class->vtable[0];
frost$core$String* $tmp420 = $tmp418(((frost$core$Object*) $tmp417));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s421, $tmp416, $tmp420);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
abort(); // unreachable
block26:;
// line 151
goto block28;
block28:;
goto block28;
block29:;
goto block23;
block23:;
frost$core$Error* $tmp422 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local7) = ((frost$core$Error*) NULL);
// line 153
frost$core$String* $tmp423 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$String* $tmp424 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local5) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp425 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp426 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
*(&local3) = ((frost$core$String*) NULL);
return $tmp423;

}
void org$frostlang$frostc$CCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// line 158
frost$core$Weak* $tmp427 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp427, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
frost$core$Weak** $tmp428 = &param0->compiler;
frost$core$Weak* $tmp429 = *$tmp428;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$core$Weak** $tmp430 = &param0->compiler;
*$tmp430 = $tmp427;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
// line 159
frost$core$Weak** $tmp431 = &param0->hCodeGen;
frost$core$Weak* $tmp432 = *$tmp431;
frost$core$Object* $tmp433 = frost$core$Weak$get$R$frost$core$Weak$T($tmp432);
org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(((org$frostlang$frostc$HCodeGenerator*) $tmp433), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp433);
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0) {

// line 238
frost$core$Int64* $tmp434 = &param0->varCount;
frost$core$Int64 $tmp435 = *$tmp434;
frost$core$Int64 $tmp436 = (frost$core$Int64) {1};
int64_t $tmp437 = $tmp435.value;
int64_t $tmp438 = $tmp436.value;
int64_t $tmp439 = $tmp437 + $tmp438;
frost$core$Int64 $tmp440 = (frost$core$Int64) {$tmp439};
frost$core$Int64* $tmp441 = &param0->varCount;
*$tmp441 = $tmp440;
// line 239
frost$core$Int64* $tmp442 = &param0->varCount;
frost$core$Int64 $tmp443 = *$tmp442;
frost$core$Int64$wrapper* $tmp444;
$tmp444 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp444->value = $tmp443;
frost$core$String* $tmp445 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s446, ((frost$core$Object*) $tmp444));
frost$core$String* $tmp447 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp445, &$s448);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
return $tmp447;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nextLabel$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0) {

// line 243
frost$core$Int64* $tmp449 = &param0->varCount;
frost$core$Int64 $tmp450 = *$tmp449;
frost$core$Int64 $tmp451 = (frost$core$Int64) {1};
int64_t $tmp452 = $tmp450.value;
int64_t $tmp453 = $tmp451.value;
int64_t $tmp454 = $tmp452 + $tmp453;
frost$core$Int64 $tmp455 = (frost$core$Int64) {$tmp454};
frost$core$Int64* $tmp456 = &param0->varCount;
*$tmp456 = $tmp455;
// line 244
frost$core$Int64* $tmp457 = &param0->varCount;
frost$core$Int64 $tmp458 = *$tmp457;
frost$core$Int64$wrapper* $tmp459;
$tmp459 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp459->value = $tmp458;
frost$core$String* $tmp460 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s461, ((frost$core$Object*) $tmp459));
frost$core$String* $tmp462 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp460, &$s463);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
return $tmp462;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Int64$nullable local0;
org$frostlang$frostc$ChoiceCase* local1 = NULL;
frost$core$Int64 local2;
org$frostlang$frostc$Type* local3 = NULL;
// line 248
frost$collections$IdentityMap** $tmp464 = &param0->choiceDataSizes;
frost$collections$IdentityMap* $tmp465 = *$tmp464;
frost$core$Object* $tmp466 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp465, ((frost$core$Object*) param1));
*(&local0) = ($tmp466 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp466)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp466);
// line 249
frost$core$Int64$nullable $tmp467 = *(&local0);
frost$core$Bit $tmp468 = frost$core$Bit$init$builtin_bit(!$tmp467.nonnull);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block1; else goto block2;
block1:;
// line 250
frost$core$Int64 $tmp470 = (frost$core$Int64) {0};
*(&local0) = ((frost$core$Int64$nullable) { $tmp470, true });
// line 251
frost$collections$Array** $tmp471 = &param1->choiceCases;
frost$collections$Array* $tmp472 = *$tmp471;
ITable* $tmp473 = ((frost$collections$Iterable*) $tmp472)->$class->itable;
while ($tmp473->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp473 = $tmp473->next;
}
$fn475 $tmp474 = $tmp473->methods[0];
frost$collections$Iterator* $tmp476 = $tmp474(((frost$collections$Iterable*) $tmp472));
goto block3;
block3:;
ITable* $tmp477 = $tmp476->$class->itable;
while ($tmp477->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp477 = $tmp477->next;
}
$fn479 $tmp478 = $tmp477->methods[0];
frost$core$Bit $tmp480 = $tmp478($tmp476);
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp482 = $tmp476->$class->itable;
while ($tmp482->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp482 = $tmp482->next;
}
$fn484 $tmp483 = $tmp482->methods[1];
frost$core$Object* $tmp485 = $tmp483($tmp476);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp485)));
org$frostlang$frostc$ChoiceCase* $tmp486 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local1) = ((org$frostlang$frostc$ChoiceCase*) $tmp485);
// line 252
frost$core$Weak** $tmp487 = &param0->compiler;
frost$core$Weak* $tmp488 = *$tmp487;
frost$core$Object* $tmp489 = frost$core$Weak$get$R$frost$core$Weak$T($tmp488);
org$frostlang$frostc$ChoiceCase* $tmp490 = *(&local1);
org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ChoiceCase(((org$frostlang$frostc$Compiler*) $tmp489), $tmp490);
frost$core$Frost$unref$frost$core$Object$Q($tmp489);
// line 253
frost$core$Int64 $tmp491 = (frost$core$Int64) {0};
*(&local2) = $tmp491;
// line 254
org$frostlang$frostc$ChoiceCase* $tmp492 = *(&local1);
frost$collections$Array** $tmp493 = &$tmp492->fields;
frost$collections$Array* $tmp494 = *$tmp493;
ITable* $tmp495 = ((frost$collections$Iterable*) $tmp494)->$class->itable;
while ($tmp495->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp495 = $tmp495->next;
}
$fn497 $tmp496 = $tmp495->methods[0];
frost$collections$Iterator* $tmp498 = $tmp496(((frost$collections$Iterable*) $tmp494));
goto block6;
block6:;
ITable* $tmp499 = $tmp498->$class->itable;
while ($tmp499->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp499 = $tmp499->next;
}
$fn501 $tmp500 = $tmp499->methods[0];
frost$core$Bit $tmp502 = $tmp500($tmp498);
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block8; else goto block7;
block7:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp504 = $tmp498->$class->itable;
while ($tmp504->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp504 = $tmp504->next;
}
$fn506 $tmp505 = $tmp504->methods[1];
frost$core$Object* $tmp507 = $tmp505($tmp498);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp507)));
org$frostlang$frostc$Type* $tmp508 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp507);
// line 256
frost$core$Int64 $tmp509 = *(&local2);
org$frostlang$frostc$Type* $tmp510 = *(&local3);
frost$core$Int64 $tmp511 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp510);
int64_t $tmp512 = $tmp509.value;
int64_t $tmp513 = $tmp511.value;
int64_t $tmp514 = $tmp512 + $tmp513;
frost$core$Int64 $tmp515 = (frost$core$Int64) {$tmp514};
*(&local2) = $tmp515;
frost$core$Frost$unref$frost$core$Object$Q($tmp507);
org$frostlang$frostc$Type* $tmp516 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
// line 258
frost$core$Int64$nullable $tmp517 = *(&local0);
frost$core$Int64 $tmp518 = *(&local2);
frost$core$Int64 $tmp519 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64) $tmp517.value), $tmp518);
*(&local0) = ((frost$core$Int64$nullable) { $tmp519, true });
frost$core$Frost$unref$frost$core$Object$Q($tmp485);
org$frostlang$frostc$ChoiceCase* $tmp520 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local1) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
// line 260
frost$collections$IdentityMap** $tmp521 = &param0->choiceDataSizes;
frost$collections$IdentityMap* $tmp522 = *$tmp521;
frost$core$Int64$nullable $tmp523 = *(&local0);
frost$core$Int64$wrapper* $tmp524;
$tmp524 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp524->value = ((frost$core$Int64) $tmp523.value);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp522, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
goto block2;
block2:;
// line 262
frost$core$Int64$nullable $tmp525 = *(&local0);
return ((frost$core$Int64) $tmp525.value);

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
frost$core$Bit local1;
frost$core$Int64 local2;
org$frostlang$frostc$FieldDecl* local3 = NULL;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 266
frost$core$Bit* $tmp526 = &param1->resolved;
frost$core$Bit $tmp527 = *$tmp526;
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp529 = (frost$core$Int64) {266};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s530, $tmp529);
abort(); // unreachable
block1:;
// line 267
frost$core$Bit $tmp531 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param1);
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block3; else goto block4;
block3:;
// line 268
frost$core$String** $tmp533 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp534 = *$tmp533;
frost$core$Bit $tmp535 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp534, &$s536);
bool $tmp537 = $tmp535.value;
if ($tmp537) goto block5; else goto block6;
block5:;
// line 269
frost$core$Int64 $tmp538 = (frost$core$Int64) {1};
return $tmp538;
block6:;
// line 271
frost$core$String** $tmp539 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp540 = *$tmp539;
frost$core$Bit $tmp541 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp540, &$s542);
bool $tmp543 = $tmp541.value;
if ($tmp543) goto block7; else goto block8;
block7:;
// line 272
frost$core$Int64 $tmp544 = (frost$core$Int64) {2};
return $tmp544;
block8:;
// line 274
frost$core$String** $tmp545 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp546 = *$tmp545;
frost$core$Bit $tmp547 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp546, &$s548);
bool $tmp549 = $tmp547.value;
if ($tmp549) goto block9; else goto block10;
block9:;
// line 275
frost$core$Int64 $tmp550 = (frost$core$Int64) {4};
return $tmp550;
block10:;
// line 277
frost$core$String** $tmp551 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp552 = *$tmp551;
frost$core$Bit $tmp553 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp552, &$s554);
bool $tmp555 = $tmp553.value;
if ($tmp555) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp556 = (frost$core$Int64) {277};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s557, $tmp556);
abort(); // unreachable
block11:;
// line 278
frost$core$Int64 $tmp558 = (frost$core$Int64) {8};
return $tmp558;
block4:;
// line 280
org$frostlang$frostc$Type* $tmp559 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp560 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param1, $tmp559);
bool $tmp561 = $tmp560.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
if ($tmp561) goto block13; else goto block14;
block13:;
// line 281
frost$core$Int64 $tmp562 = (frost$core$Int64) {1};
return $tmp562;
block14:;
// line 283
frost$core$Weak** $tmp563 = &param0->compiler;
frost$core$Weak* $tmp564 = *$tmp563;
frost$core$Object* $tmp565 = frost$core$Weak$get$R$frost$core$Weak$T($tmp564);
org$frostlang$frostc$ClassDecl* $tmp566 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp565), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
org$frostlang$frostc$ClassDecl* $tmp567 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local0) = $tmp566;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$core$Frost$unref$frost$core$Object$Q($tmp565);
// line 284
org$frostlang$frostc$ClassDecl* $tmp568 = *(&local0);
frost$core$Bit $tmp569 = frost$core$Bit$init$builtin_bit($tmp568 != NULL);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp571 = (frost$core$Int64) {284};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s572, $tmp571);
abort(); // unreachable
block15:;
// line 285
frost$core$Weak** $tmp573 = &param0->compiler;
frost$core$Weak* $tmp574 = *$tmp573;
frost$core$Object* $tmp575 = frost$core$Weak$get$R$frost$core$Weak$T($tmp574);
org$frostlang$frostc$ClassDecl* $tmp576 = *(&local0);
frost$core$Bit $tmp577 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp575), $tmp576);
frost$core$Bit $tmp578 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp577);
bool $tmp579 = $tmp578.value;
if ($tmp579) goto block19; else goto block20;
block19:;
*(&local1) = $tmp578;
goto block21;
block20:;
org$frostlang$frostc$ClassDecl* $tmp580 = *(&local0);
frost$core$String** $tmp581 = &$tmp580->name;
frost$core$String* $tmp582 = *$tmp581;
frost$core$Bit $tmp583 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp582, &$s584);
*(&local1) = $tmp583;
goto block21;
block21:;
frost$core$Bit $tmp585 = *(&local1);
bool $tmp586 = $tmp585.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp575);
if ($tmp586) goto block17; else goto block18;
block17:;
// line 286
frost$core$Int64 $tmp587 = (frost$core$Int64) {8};
org$frostlang$frostc$ClassDecl* $tmp588 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp587;
block18:;
// line 288
frost$core$Int64 $tmp589 = (frost$core$Int64) {0};
*(&local2) = $tmp589;
// line 289
frost$core$Weak** $tmp590 = &param0->compiler;
frost$core$Weak* $tmp591 = *$tmp590;
frost$core$Object* $tmp592 = frost$core$Weak$get$R$frost$core$Weak$T($tmp591);
org$frostlang$frostc$ClassDecl* $tmp593 = *(&local0);
frost$collections$ListView* $tmp594 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp592), $tmp593);
ITable* $tmp595 = ((frost$collections$Iterable*) $tmp594)->$class->itable;
while ($tmp595->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp595 = $tmp595->next;
}
$fn597 $tmp596 = $tmp595->methods[0];
frost$collections$Iterator* $tmp598 = $tmp596(((frost$collections$Iterable*) $tmp594));
goto block22;
block22:;
ITable* $tmp599 = $tmp598->$class->itable;
while ($tmp599->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp599 = $tmp599->next;
}
$fn601 $tmp600 = $tmp599->methods[0];
frost$core$Bit $tmp602 = $tmp600($tmp598);
bool $tmp603 = $tmp602.value;
if ($tmp603) goto block24; else goto block23;
block23:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp604 = $tmp598->$class->itable;
while ($tmp604->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp604 = $tmp604->next;
}
$fn606 $tmp605 = $tmp604->methods[1];
frost$core$Object* $tmp607 = $tmp605($tmp598);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp607)));
org$frostlang$frostc$FieldDecl* $tmp608 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) $tmp607);
// line 290
org$frostlang$frostc$FieldDecl* $tmp609 = *(&local3);
org$frostlang$frostc$Annotations** $tmp610 = &$tmp609->annotations;
org$frostlang$frostc$Annotations* $tmp611 = *$tmp610;
frost$core$Bit $tmp612 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp611);
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block25; else goto block26;
block25:;
// line 291
frost$core$Frost$unref$frost$core$Object$Q($tmp607);
org$frostlang$frostc$FieldDecl* $tmp614 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block22;
block26:;
// line 293
frost$core$Weak** $tmp615 = &param0->compiler;
frost$core$Weak* $tmp616 = *$tmp615;
frost$core$Object* $tmp617 = frost$core$Weak$get$R$frost$core$Weak$T($tmp616);
org$frostlang$frostc$FieldDecl* $tmp618 = *(&local3);
frost$core$Bit $tmp619 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp617), $tmp618);
frost$core$Frost$unref$frost$core$Object$Q($tmp617);
// line 294
org$frostlang$frostc$FieldDecl* $tmp620 = *(&local3);
org$frostlang$frostc$Type** $tmp621 = &$tmp620->type;
org$frostlang$frostc$Type* $tmp622 = *$tmp621;
org$frostlang$frostc$Type* $tmp623 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp624 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp622, $tmp623);
bool $tmp625 = $tmp624.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
if ($tmp625) goto block27; else goto block29;
block27:;
// line 296
frost$core$Int64 $tmp626 = *(&local2);
frost$core$Weak** $tmp627 = &param0->hCodeGen;
frost$core$Weak* $tmp628 = *$tmp627;
frost$core$Object* $tmp629 = frost$core$Weak$get$R$frost$core$Weak$T($tmp628);
org$frostlang$frostc$LLVMCodeGenerator** $tmp630 = &((org$frostlang$frostc$HCodeGenerator*) $tmp629)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp631 = *$tmp630;
org$frostlang$frostc$ClassDecl* $tmp632 = *(&local0);
frost$core$Int64 $tmp633 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp631, $tmp632);
int64_t $tmp634 = $tmp626.value;
int64_t $tmp635 = $tmp633.value;
int64_t $tmp636 = $tmp634 + $tmp635;
frost$core$Int64 $tmp637 = (frost$core$Int64) {$tmp636};
*(&local2) = $tmp637;
frost$core$Frost$unref$frost$core$Object$Q($tmp629);
goto block28;
block29:;
// line 1
// line 299
org$frostlang$frostc$FieldDecl* $tmp638 = *(&local3);
org$frostlang$frostc$Type** $tmp639 = &$tmp638->type;
org$frostlang$frostc$Type* $tmp640 = *$tmp639;
frost$core$Int64 $tmp641 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp640);
*(&local4) = $tmp641;
// line 300
frost$core$Int64 $tmp642 = *(&local2);
frost$core$Int64 $tmp643 = *(&local4);
frost$core$Int64 $tmp644 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp642, $tmp643);
*(&local5) = $tmp644;
// line 301
frost$core$Int64 $tmp645 = *(&local5);
frost$core$Int64 $tmp646 = (frost$core$Int64) {0};
int64_t $tmp647 = $tmp645.value;
int64_t $tmp648 = $tmp646.value;
bool $tmp649 = $tmp647 != $tmp648;
frost$core$Bit $tmp650 = (frost$core$Bit) {$tmp649};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block30; else goto block31;
block30:;
// line 302
frost$core$Int64 $tmp652 = *(&local2);
frost$core$Int64 $tmp653 = *(&local4);
frost$core$Int64 $tmp654 = *(&local5);
int64_t $tmp655 = $tmp653.value;
int64_t $tmp656 = $tmp654.value;
int64_t $tmp657 = $tmp655 - $tmp656;
frost$core$Int64 $tmp658 = (frost$core$Int64) {$tmp657};
int64_t $tmp659 = $tmp652.value;
int64_t $tmp660 = $tmp658.value;
int64_t $tmp661 = $tmp659 + $tmp660;
frost$core$Int64 $tmp662 = (frost$core$Int64) {$tmp661};
*(&local2) = $tmp662;
goto block31;
block31:;
// line 304
frost$core$Int64 $tmp663 = *(&local2);
frost$core$Int64 $tmp664 = *(&local4);
frost$core$Int64 $tmp665 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp663, $tmp664);
frost$core$Int64 $tmp666 = (frost$core$Int64) {0};
frost$core$Bit $tmp667 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp665, $tmp666);
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp669 = (frost$core$Int64) {304};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s670, $tmp669);
abort(); // unreachable
block32:;
// line 305
frost$core$Int64 $tmp671 = *(&local2);
frost$core$Int64 $tmp672 = *(&local4);
int64_t $tmp673 = $tmp671.value;
int64_t $tmp674 = $tmp672.value;
int64_t $tmp675 = $tmp673 + $tmp674;
frost$core$Int64 $tmp676 = (frost$core$Int64) {$tmp675};
*(&local2) = $tmp676;
goto block28;
block28:;
frost$core$Frost$unref$frost$core$Object$Q($tmp607);
org$frostlang$frostc$FieldDecl* $tmp677 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block22;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q($tmp592);
// line 308
org$frostlang$frostc$Type$Kind* $tmp678 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp679 = *$tmp678;
org$frostlang$frostc$Type$Kind$wrapper* $tmp680;
$tmp680 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp680->value = $tmp679;
frost$core$Int64 $tmp681 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp682 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp681);
org$frostlang$frostc$Type$Kind$wrapper* $tmp683;
$tmp683 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp683->value = $tmp682;
ITable* $tmp684 = ((frost$core$Equatable*) $tmp680)->$class->itable;
while ($tmp684->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp684 = $tmp684->next;
}
$fn686 $tmp685 = $tmp684->methods[0];
frost$core$Bit $tmp687 = $tmp685(((frost$core$Equatable*) $tmp680), ((frost$core$Equatable*) $tmp683));
bool $tmp688 = $tmp687.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp683)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp680)));
if ($tmp688) goto block34; else goto block35;
block34:;
// line 309
frost$core$Int64 $tmp689 = *(&local2);
frost$core$Int64 $tmp690 = (frost$core$Int64) {1};
int64_t $tmp691 = $tmp689.value;
int64_t $tmp692 = $tmp690.value;
int64_t $tmp693 = $tmp691 + $tmp692;
frost$core$Int64 $tmp694 = (frost$core$Int64) {$tmp693};
*(&local2) = $tmp694;
goto block35;
block35:;
// line 311
frost$core$Int64 $tmp695 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp696 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp695;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 315
frost$core$Int64 $tmp697 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp698 = (frost$core$Int64) {8};
frost$core$Int64 $tmp699 = frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64($tmp697, $tmp698);
return $tmp699;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 319
frost$core$Int64 $tmp700 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp700;
// line 320
frost$core$Int64 $tmp701 = org$frostlang$frostc$CCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
*(&local1) = $tmp701;
// line 321
frost$core$Int64 $tmp702 = *(&local0);
frost$core$Int64 $tmp703 = *(&local1);
frost$core$Int64 $tmp704 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp702, $tmp703);
frost$core$Int64 $tmp705 = (frost$core$Int64) {0};
frost$core$Bit $tmp706 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp704, $tmp705);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block1; else goto block2;
block1:;
// line 322
frost$core$Int64 $tmp708 = *(&local0);
return $tmp708;
block2:;
// line 324
frost$core$Int64 $tmp709 = *(&local0);
frost$core$Int64 $tmp710 = *(&local1);
int64_t $tmp711 = $tmp709.value;
int64_t $tmp712 = $tmp710.value;
int64_t $tmp713 = $tmp711 + $tmp712;
frost$core$Int64 $tmp714 = (frost$core$Int64) {$tmp713};
frost$core$Int64 $tmp715 = *(&local0);
frost$core$Int64 $tmp716 = *(&local1);
frost$core$Int64 $tmp717 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp715, $tmp716);
int64_t $tmp718 = $tmp714.value;
int64_t $tmp719 = $tmp717.value;
int64_t $tmp720 = $tmp718 - $tmp719;
frost$core$Int64 $tmp721 = (frost$core$Int64) {$tmp720};
return $tmp721;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
frost$core$Bit local1;
frost$core$Int64 local2;
org$frostlang$frostc$FieldDecl* local3 = NULL;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 328
frost$core$Weak** $tmp722 = &param0->compiler;
frost$core$Weak* $tmp723 = *$tmp722;
frost$core$Object* $tmp724 = frost$core$Weak$get$R$frost$core$Weak$T($tmp723);
org$frostlang$frostc$ClassDecl* $tmp725 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp724), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
org$frostlang$frostc$ClassDecl* $tmp726 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local0) = $tmp725;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Frost$unref$frost$core$Object$Q($tmp724);
// line 329
org$frostlang$frostc$ClassDecl* $tmp727 = *(&local0);
frost$core$Bit $tmp728 = frost$core$Bit$init$builtin_bit($tmp727 != NULL);
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block1; else goto block2;
block1:;
frost$core$Weak** $tmp730 = &param0->compiler;
frost$core$Weak* $tmp731 = *$tmp730;
frost$core$Object* $tmp732 = frost$core$Weak$get$R$frost$core$Weak$T($tmp731);
org$frostlang$frostc$ClassDecl* $tmp733 = *(&local0);
frost$core$Bit $tmp734 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp732), $tmp733);
frost$core$Frost$unref$frost$core$Object$Q($tmp732);
*(&local1) = $tmp734;
goto block3;
block2:;
*(&local1) = $tmp728;
goto block3;
block3:;
frost$core$Bit $tmp735 = *(&local1);
bool $tmp736 = $tmp735.value;
if ($tmp736) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp737 = (frost$core$Int64) {329};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s738, $tmp737);
abort(); // unreachable
block4:;
// line 330
org$frostlang$frostc$Type* $tmp739 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Int64 $tmp740 = org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp739);
*(&local2) = $tmp740;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
// line 331
frost$core$Weak** $tmp741 = &param0->compiler;
frost$core$Weak* $tmp742 = *$tmp741;
frost$core$Object* $tmp743 = frost$core$Weak$get$R$frost$core$Weak$T($tmp742);
org$frostlang$frostc$ClassDecl* $tmp744 = *(&local0);
frost$collections$ListView* $tmp745 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp743), $tmp744);
ITable* $tmp746 = ((frost$collections$Iterable*) $tmp745)->$class->itable;
while ($tmp746->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp746 = $tmp746->next;
}
$fn748 $tmp747 = $tmp746->methods[0];
frost$collections$Iterator* $tmp749 = $tmp747(((frost$collections$Iterable*) $tmp745));
goto block6;
block6:;
ITable* $tmp750 = $tmp749->$class->itable;
while ($tmp750->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp750 = $tmp750->next;
}
$fn752 $tmp751 = $tmp750->methods[0];
frost$core$Bit $tmp753 = $tmp751($tmp749);
bool $tmp754 = $tmp753.value;
if ($tmp754) goto block8; else goto block7;
block7:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp755 = $tmp749->$class->itable;
while ($tmp755->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp755 = $tmp755->next;
}
$fn757 $tmp756 = $tmp755->methods[1];
frost$core$Object* $tmp758 = $tmp756($tmp749);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp758)));
org$frostlang$frostc$FieldDecl* $tmp759 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) $tmp758);
// line 332
frost$core$Weak** $tmp760 = &param0->compiler;
frost$core$Weak* $tmp761 = *$tmp760;
frost$core$Object* $tmp762 = frost$core$Weak$get$R$frost$core$Weak$T($tmp761);
org$frostlang$frostc$FieldDecl* $tmp763 = *(&local3);
frost$core$Bit $tmp764 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp762), $tmp763);
frost$core$Frost$unref$frost$core$Object$Q($tmp762);
// line 333
org$frostlang$frostc$FieldDecl* $tmp765 = *(&local3);
org$frostlang$frostc$Type** $tmp766 = &$tmp765->type;
org$frostlang$frostc$Type* $tmp767 = *$tmp766;
org$frostlang$frostc$Type* $tmp768 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp769 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp767, $tmp768);
bool $tmp770 = $tmp769.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
if ($tmp770) goto block9; else goto block11;
block9:;
// line 335
frost$core$Int64 $tmp771 = *(&local2);
frost$core$Weak** $tmp772 = &param0->hCodeGen;
frost$core$Weak* $tmp773 = *$tmp772;
frost$core$Object* $tmp774 = frost$core$Weak$get$R$frost$core$Weak$T($tmp773);
org$frostlang$frostc$LLVMCodeGenerator** $tmp775 = &((org$frostlang$frostc$HCodeGenerator*) $tmp774)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp776 = *$tmp775;
org$frostlang$frostc$ClassDecl* $tmp777 = *(&local0);
frost$core$Int64 $tmp778 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp776, $tmp777);
int64_t $tmp779 = $tmp771.value;
int64_t $tmp780 = $tmp778.value;
int64_t $tmp781 = $tmp779 + $tmp780;
frost$core$Int64 $tmp782 = (frost$core$Int64) {$tmp781};
*(&local2) = $tmp782;
frost$core$Frost$unref$frost$core$Object$Q($tmp774);
goto block10;
block11:;
// line 1
// line 338
org$frostlang$frostc$FieldDecl* $tmp783 = *(&local3);
org$frostlang$frostc$Type** $tmp784 = &$tmp783->type;
org$frostlang$frostc$Type* $tmp785 = *$tmp784;
frost$core$Int64 $tmp786 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp785);
*(&local4) = $tmp786;
// line 339
frost$core$Int64 $tmp787 = *(&local2);
frost$core$Int64 $tmp788 = *(&local4);
frost$core$Int64 $tmp789 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp787, $tmp788);
*(&local5) = $tmp789;
// line 340
frost$core$Int64 $tmp790 = *(&local5);
frost$core$Int64 $tmp791 = (frost$core$Int64) {0};
int64_t $tmp792 = $tmp790.value;
int64_t $tmp793 = $tmp791.value;
bool $tmp794 = $tmp792 != $tmp793;
frost$core$Bit $tmp795 = (frost$core$Bit) {$tmp794};
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block12; else goto block13;
block12:;
// line 341
frost$core$Int64 $tmp797 = *(&local2);
frost$core$Int64 $tmp798 = *(&local4);
frost$core$Int64 $tmp799 = *(&local5);
int64_t $tmp800 = $tmp798.value;
int64_t $tmp801 = $tmp799.value;
int64_t $tmp802 = $tmp800 - $tmp801;
frost$core$Int64 $tmp803 = (frost$core$Int64) {$tmp802};
int64_t $tmp804 = $tmp797.value;
int64_t $tmp805 = $tmp803.value;
int64_t $tmp806 = $tmp804 + $tmp805;
frost$core$Int64 $tmp807 = (frost$core$Int64) {$tmp806};
*(&local2) = $tmp807;
goto block13;
block13:;
// line 343
frost$core$Int64 $tmp808 = *(&local2);
frost$core$Int64 $tmp809 = *(&local4);
frost$core$Int64 $tmp810 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp808, $tmp809);
frost$core$Int64 $tmp811 = (frost$core$Int64) {0};
frost$core$Bit $tmp812 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp810, $tmp811);
bool $tmp813 = $tmp812.value;
if ($tmp813) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp814 = (frost$core$Int64) {343};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s815, $tmp814);
abort(); // unreachable
block14:;
// line 344
frost$core$Int64 $tmp816 = *(&local2);
frost$core$Int64 $tmp817 = *(&local4);
int64_t $tmp818 = $tmp816.value;
int64_t $tmp819 = $tmp817.value;
int64_t $tmp820 = $tmp818 + $tmp819;
frost$core$Int64 $tmp821 = (frost$core$Int64) {$tmp820};
*(&local2) = $tmp821;
goto block10;
block10:;
frost$core$Frost$unref$frost$core$Object$Q($tmp758);
org$frostlang$frostc$FieldDecl* $tmp822 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
frost$core$Frost$unref$frost$core$Object$Q($tmp743);
// line 347
org$frostlang$frostc$Type$Kind* $tmp823 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp824 = *$tmp823;
org$frostlang$frostc$Type$Kind$wrapper* $tmp825;
$tmp825 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp825->value = $tmp824;
frost$core$Int64 $tmp826 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp827 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp826);
org$frostlang$frostc$Type$Kind$wrapper* $tmp828;
$tmp828 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp828->value = $tmp827;
ITable* $tmp829 = ((frost$core$Equatable*) $tmp825)->$class->itable;
while ($tmp829->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp829 = $tmp829->next;
}
$fn831 $tmp830 = $tmp829->methods[0];
frost$core$Bit $tmp832 = $tmp830(((frost$core$Equatable*) $tmp825), ((frost$core$Equatable*) $tmp828));
bool $tmp833 = $tmp832.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp828)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp825)));
if ($tmp833) goto block16; else goto block17;
block16:;
// line 348
frost$core$Int64 $tmp834 = *(&local2);
frost$core$Int64 $tmp835 = (frost$core$Int64) {1};
int64_t $tmp836 = $tmp834.value;
int64_t $tmp837 = $tmp835.value;
int64_t $tmp838 = $tmp836 + $tmp837;
frost$core$Int64 $tmp839 = (frost$core$Int64) {$tmp838};
*(&local2) = $tmp839;
goto block17;
block17:;
// line 350
frost$core$Int64 $tmp840 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp841 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp840;

}
void org$frostlang$frostc$CCodeGenerator$writeType$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 354
frost$collections$HashSet** $tmp842 = &param0->writtenTypes;
frost$collections$HashSet* $tmp843 = *$tmp842;
frost$core$String** $tmp844 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp845 = *$tmp844;
frost$core$Bit $tmp846 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp843, ((frost$collections$Key*) $tmp845));
bool $tmp847 = $tmp846.value;
if ($tmp847) goto block1; else goto block2;
block1:;
// line 355
return;
block2:;
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$typeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 360
frost$core$String** $tmp848 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp849 = *$tmp848;
frost$core$String* $tmp850 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp849);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
return $tmp850;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 364
frost$core$Weak** $tmp851 = &param0->compiler;
frost$core$Weak* $tmp852 = *$tmp851;
frost$core$Object* $tmp853 = frost$core$Weak$get$R$frost$core$Weak$T($tmp852);
org$frostlang$frostc$ClassDecl* $tmp854 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp853), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
org$frostlang$frostc$ClassDecl* $tmp855 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
*(&local0) = $tmp854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
frost$core$Frost$unref$frost$core$Object$Q($tmp853);
// line 365
org$frostlang$frostc$ClassDecl* $tmp856 = *(&local0);
frost$core$Bit $tmp857 = frost$core$Bit$init$builtin_bit($tmp856 != NULL);
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp859 = (frost$core$Int64) {365};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s860, $tmp859);
abort(); // unreachable
block1:;
// line 366
org$frostlang$frostc$ClassDecl* $tmp861 = *(&local0);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, $tmp861);
// line 367
org$frostlang$frostc$Type$Kind* $tmp862 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp863 = *$tmp862;
org$frostlang$frostc$Type$Kind$wrapper* $tmp864;
$tmp864 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp864->value = $tmp863;
frost$core$Int64 $tmp865 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp866 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp865);
org$frostlang$frostc$Type$Kind$wrapper* $tmp867;
$tmp867 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp867->value = $tmp866;
ITable* $tmp868 = ((frost$core$Equatable*) $tmp864)->$class->itable;
while ($tmp868->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp868 = $tmp868->next;
}
$fn870 $tmp869 = $tmp868->methods[0];
frost$core$Bit $tmp871 = $tmp869(((frost$core$Equatable*) $tmp864), ((frost$core$Equatable*) $tmp867));
bool $tmp872 = $tmp871.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp867)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp864)));
if ($tmp872) goto block3; else goto block4;
block3:;
// line 368
org$frostlang$frostc$FixedArray** $tmp873 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp874 = *$tmp873;
frost$core$Int64 $tmp875 = (frost$core$Int64) {0};
frost$core$Object* $tmp876 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp874, $tmp875);
frost$core$String* $tmp877 = org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp876));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
frost$core$Frost$unref$frost$core$Object$Q($tmp876);
org$frostlang$frostc$ClassDecl* $tmp878 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp877;
block4:;
// line 370
frost$core$String** $tmp879 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp880 = *$tmp879;
frost$core$String* $tmp881 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp880);
frost$core$String* $tmp882 = frost$core$String$get_asString$R$frost$core$String($tmp881);
frost$core$String* $tmp883 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp882, &$s884);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
org$frostlang$frostc$ClassDecl* $tmp885 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp883;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 374
frost$core$String* $tmp886 = org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp887 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp886, &$s888);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
return $tmp887;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
// line 378
frost$core$Weak** $tmp889 = &param0->compiler;
frost$core$Weak* $tmp890 = *$tmp889;
frost$core$Object* $tmp891 = frost$core$Weak$get$R$frost$core$Weak$T($tmp890);
org$frostlang$frostc$Type* $tmp892 = org$frostlang$frostc$Compiler$inheritedType$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp891), param1);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
org$frostlang$frostc$Type* $tmp893 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
*(&local0) = $tmp892;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
frost$core$Frost$unref$frost$core$Object$Q($tmp891);
// line 379
frost$core$MutableString* $tmp894 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp894);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
frost$core$MutableString* $tmp895 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local1) = $tmp894;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
// line 380
frost$core$MutableString* $tmp896 = *(&local1);
org$frostlang$frostc$Type* $tmp897 = *(&local0);
org$frostlang$frostc$Type* $tmp898 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp897);
frost$core$String* $tmp899 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp898);
frost$core$MutableString$append$frost$core$String($tmp896, $tmp899);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
// line 381
frost$core$MutableString* $tmp900 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp900, &$s901);
// line 382
frost$core$Bit $tmp902 = org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(param1);
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp904 = (frost$core$Int64) {382};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s905, $tmp904);
abort(); // unreachable
block1:;
// line 383
frost$core$MutableString* $tmp906 = *(&local1);
frost$core$Weak** $tmp907 = &param1->owner;
frost$core$Weak* $tmp908 = *$tmp907;
frost$core$Object* $tmp909 = frost$core$Weak$get$R$frost$core$Weak$T($tmp908);
frost$core$String** $tmp910 = &((org$frostlang$frostc$ClassDecl*) $tmp909)->name;
frost$core$String* $tmp911 = *$tmp910;
frost$core$String* $tmp912 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp911);
frost$core$String* $tmp913 = frost$core$String$get_asString$R$frost$core$String($tmp912);
frost$core$String* $tmp914 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp913, &$s915);
frost$core$MutableString$append$frost$core$String($tmp906, $tmp914);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
frost$core$Frost$unref$frost$core$Object$Q($tmp909);
// line 384
frost$core$Weak** $tmp916 = &param0->compiler;
frost$core$Weak* $tmp917 = *$tmp916;
frost$core$Object* $tmp918 = frost$core$Weak$get$R$frost$core$Weak$T($tmp917);
frost$core$Weak** $tmp919 = &param1->owner;
frost$core$Weak* $tmp920 = *$tmp919;
frost$core$Object* $tmp921 = frost$core$Weak$get$R$frost$core$Weak$T($tmp920);
frost$core$Bit $tmp922 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp918), ((org$frostlang$frostc$ClassDecl*) $tmp921));
bool $tmp923 = $tmp922.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp921);
frost$core$Frost$unref$frost$core$Object$Q($tmp918);
if ($tmp923) goto block3; else goto block4;
block3:;
// line 385
frost$core$MutableString* $tmp924 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp924, &$s925);
goto block4;
block4:;
// line 387
frost$core$MutableString* $tmp926 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp926, &$s927);
// line 388
frost$core$Int64 $tmp928 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp929 = *(&local0);
org$frostlang$frostc$FixedArray** $tmp930 = &$tmp929->subtypes;
org$frostlang$frostc$FixedArray* $tmp931 = *$tmp930;
ITable* $tmp932 = ((frost$collections$CollectionView*) $tmp931)->$class->itable;
while ($tmp932->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp932 = $tmp932->next;
}
$fn934 $tmp933 = $tmp932->methods[0];
frost$core$Int64 $tmp935 = $tmp933(((frost$collections$CollectionView*) $tmp931));
frost$core$Int64 $tmp936 = (frost$core$Int64) {1};
int64_t $tmp937 = $tmp935.value;
int64_t $tmp938 = $tmp936.value;
int64_t $tmp939 = $tmp937 - $tmp938;
frost$core$Int64 $tmp940 = (frost$core$Int64) {$tmp939};
frost$core$Bit $tmp941 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp942 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp928, $tmp940, $tmp941);
frost$core$Int64 $tmp943 = $tmp942.min;
*(&local2) = $tmp943;
frost$core$Int64 $tmp944 = $tmp942.max;
frost$core$Bit $tmp945 = $tmp942.inclusive;
bool $tmp946 = $tmp945.value;
frost$core$Int64 $tmp947 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp948 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp947);
if ($tmp946) goto block8; else goto block9;
block8:;
int64_t $tmp949 = $tmp943.value;
int64_t $tmp950 = $tmp944.value;
bool $tmp951 = $tmp949 <= $tmp950;
frost$core$Bit $tmp952 = (frost$core$Bit) {$tmp951};
bool $tmp953 = $tmp952.value;
if ($tmp953) goto block5; else goto block6;
block9:;
int64_t $tmp954 = $tmp943.value;
int64_t $tmp955 = $tmp944.value;
bool $tmp956 = $tmp954 < $tmp955;
frost$core$Bit $tmp957 = (frost$core$Bit) {$tmp956};
bool $tmp958 = $tmp957.value;
if ($tmp958) goto block5; else goto block6;
block5:;
// line 389
frost$core$MutableString* $tmp959 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp959, &$s960);
// line 390
frost$core$MutableString* $tmp961 = *(&local1);
org$frostlang$frostc$Type* $tmp962 = *(&local0);
org$frostlang$frostc$FixedArray** $tmp963 = &$tmp962->subtypes;
org$frostlang$frostc$FixedArray* $tmp964 = *$tmp963;
frost$core$Int64 $tmp965 = *(&local2);
frost$core$Object* $tmp966 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp964, $tmp965);
frost$core$String* $tmp967 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp966));
frost$core$MutableString$append$frost$core$String($tmp961, $tmp967);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
frost$core$Frost$unref$frost$core$Object$Q($tmp966);
goto block7;
block7:;
frost$core$Int64 $tmp968 = *(&local2);
int64_t $tmp969 = $tmp944.value;
int64_t $tmp970 = $tmp968.value;
int64_t $tmp971 = $tmp969 - $tmp970;
frost$core$Int64 $tmp972 = (frost$core$Int64) {$tmp971};
frost$core$UInt64 $tmp973 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp972);
if ($tmp946) goto block11; else goto block12;
block11:;
uint64_t $tmp974 = $tmp973.value;
uint64_t $tmp975 = $tmp948.value;
bool $tmp976 = $tmp974 >= $tmp975;
frost$core$Bit $tmp977 = (frost$core$Bit) {$tmp976};
bool $tmp978 = $tmp977.value;
if ($tmp978) goto block10; else goto block6;
block12:;
uint64_t $tmp979 = $tmp973.value;
uint64_t $tmp980 = $tmp948.value;
bool $tmp981 = $tmp979 > $tmp980;
frost$core$Bit $tmp982 = (frost$core$Bit) {$tmp981};
bool $tmp983 = $tmp982.value;
if ($tmp983) goto block10; else goto block6;
block10:;
int64_t $tmp984 = $tmp968.value;
int64_t $tmp985 = $tmp947.value;
int64_t $tmp986 = $tmp984 + $tmp985;
frost$core$Int64 $tmp987 = (frost$core$Int64) {$tmp986};
*(&local2) = $tmp987;
goto block5;
block6:;
// line 392
frost$core$MutableString* $tmp988 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp988, &$s989);
// line 393
frost$core$MutableString* $tmp990 = *(&local1);
frost$core$String* $tmp991 = frost$core$MutableString$finish$R$frost$core$String($tmp990);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
frost$core$MutableString* $tmp992 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
*(&local1) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$Type* $tmp993 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp991;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 397
org$frostlang$frostc$Type$Kind* $tmp994 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp995 = *$tmp994;
org$frostlang$frostc$Type$Kind$wrapper* $tmp996;
$tmp996 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp996->value = $tmp995;
frost$core$Int64 $tmp997 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp998 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp997);
org$frostlang$frostc$Type$Kind$wrapper* $tmp999;
$tmp999 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp999->value = $tmp998;
ITable* $tmp1000 = ((frost$core$Equatable*) $tmp996)->$class->itable;
while ($tmp1000->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1000 = $tmp1000->next;
}
$fn1002 $tmp1001 = $tmp1000->methods[0];
frost$core$Bit $tmp1003 = $tmp1001(((frost$core$Equatable*) $tmp996), ((frost$core$Equatable*) $tmp999));
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1005 = (frost$core$Int64) {397};
frost$core$String* $tmp1006 = org$frostlang$frostc$Type$get_asString$R$frost$core$String(param1);
frost$core$String* $tmp1007 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1006, &$s1008);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1009, $tmp1005, $tmp1007);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp999)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp996)));
// line 398
org$frostlang$frostc$FixedArray** $tmp1010 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp1011 = *$tmp1010;
frost$core$Int64 $tmp1012 = (frost$core$Int64) {0};
frost$core$Object* $tmp1013 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1011, $tmp1012);
frost$core$String* $tmp1014 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp1013));
frost$core$String* $tmp1015 = frost$core$String$get_asString$R$frost$core$String($tmp1014);
frost$core$String* $tmp1016 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1015, &$s1017);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
frost$core$Frost$unref$frost$core$Object$Q($tmp1013);
return $tmp1016;

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
// line 402
frost$core$Weak** $tmp1018 = &param0->compiler;
frost$core$Weak* $tmp1019 = *$tmp1018;
frost$core$Object* $tmp1020 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1019);
org$frostlang$frostc$Type** $tmp1021 = &param1->type;
org$frostlang$frostc$Type* $tmp1022 = *$tmp1021;
frost$collections$HashSet* $tmp1023 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(((org$frostlang$frostc$Compiler*) $tmp1020), $tmp1022);
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$collections$HashSet* $tmp1024 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
*(&local0) = $tmp1023;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$core$Frost$unref$frost$core$Object$Q($tmp1020);
// line 403
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1025));
frost$core$String* $tmp1026 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
*(&local1) = &$s1027;
// line 404
frost$collections$HashSet* $tmp1028 = *(&local0);
ITable* $tmp1029 = ((frost$collections$Iterable*) $tmp1028)->$class->itable;
while ($tmp1029->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1029 = $tmp1029->next;
}
$fn1031 $tmp1030 = $tmp1029->methods[0];
frost$collections$Iterator* $tmp1032 = $tmp1030(((frost$collections$Iterable*) $tmp1028));
goto block1;
block1:;
ITable* $tmp1033 = $tmp1032->$class->itable;
while ($tmp1033->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1033 = $tmp1033->next;
}
$fn1035 $tmp1034 = $tmp1033->methods[0];
frost$core$Bit $tmp1036 = $tmp1034($tmp1032);
bool $tmp1037 = $tmp1036.value;
if ($tmp1037) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1038 = $tmp1032->$class->itable;
while ($tmp1038->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1038 = $tmp1038->next;
}
$fn1040 $tmp1039 = $tmp1038->methods[1];
frost$core$Object* $tmp1041 = $tmp1039($tmp1032);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1041)));
org$frostlang$frostc$Type* $tmp1042 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1041);
// line 405
frost$core$Weak** $tmp1043 = &param0->compiler;
frost$core$Weak* $tmp1044 = *$tmp1043;
frost$core$Object* $tmp1045 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1044);
org$frostlang$frostc$Type* $tmp1046 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp1047 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1045), $tmp1046);
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
org$frostlang$frostc$ClassDecl* $tmp1048 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
*(&local3) = $tmp1047;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
frost$core$Frost$unref$frost$core$Object$Q($tmp1045);
// line 406
org$frostlang$frostc$ClassDecl* $tmp1049 = *(&local3);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1050 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp1049);
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1051 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
*(&local4) = $tmp1050;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
// line 407
frost$core$Weak** $tmp1052 = &param0->compiler;
frost$core$Weak* $tmp1053 = *$tmp1052;
frost$core$Object* $tmp1054 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1053);
org$frostlang$frostc$Type* $tmp1055 = *(&local2);
frost$collections$ListView* $tmp1056 = org$frostlang$frostc$Compiler$interfaceMethods$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1054), param1, $tmp1055);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
frost$collections$ListView* $tmp1057 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
*(&local5) = $tmp1056;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
frost$core$Frost$unref$frost$core$Object$Q($tmp1054);
// line 408
frost$core$String** $tmp1058 = &param1->name;
frost$core$String* $tmp1059 = *$tmp1058;
frost$core$String* $tmp1060 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1059);
frost$core$String* $tmp1061 = frost$core$String$get_asString$R$frost$core$String($tmp1060);
frost$core$String* $tmp1062 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1061, &$s1063);
org$frostlang$frostc$ClassDecl* $tmp1064 = *(&local3);
frost$core$String** $tmp1065 = &$tmp1064->name;
frost$core$String* $tmp1066 = *$tmp1065;
frost$core$String* $tmp1067 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1066);
frost$core$String* $tmp1068 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1062, $tmp1067);
frost$core$String* $tmp1069 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1068, &$s1070);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$String* $tmp1071 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
*(&local6) = $tmp1069;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
// line 409
frost$core$MutableString* $tmp1072 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp1073 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1074 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1073);
frost$core$String* $tmp1075 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1076, $tmp1074);
frost$core$String* $tmp1077 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1075, &$s1078);
frost$collections$ListView* $tmp1079 = *(&local5);
ITable* $tmp1080 = ((frost$collections$CollectionView*) $tmp1079)->$class->itable;
while ($tmp1080->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1080 = $tmp1080->next;
}
$fn1082 $tmp1081 = $tmp1080->methods[0];
frost$core$Int64 $tmp1083 = $tmp1081(((frost$collections$CollectionView*) $tmp1079));
frost$core$Int64$wrapper* $tmp1084;
$tmp1084 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1084->value = $tmp1083;
frost$core$String* $tmp1085 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1086, ((frost$core$Object*) $tmp1084));
frost$core$String* $tmp1087 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1085, &$s1088);
frost$core$String* $tmp1089 = *(&local6);
frost$core$String* $tmp1090 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1087, $tmp1089);
frost$core$String* $tmp1091 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1090, &$s1092);
frost$core$String* $tmp1093 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1077, $tmp1091);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1094 = *(&local4);
frost$core$String** $tmp1095 = &$tmp1094->name;
frost$core$String* $tmp1096 = *$tmp1095;
frost$core$String* $tmp1097 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1098, $tmp1096);
frost$core$String* $tmp1099 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1097, &$s1100);
frost$core$String* $tmp1101 = *(&local1);
frost$core$String* $tmp1102 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1099, $tmp1101);
frost$core$String* $tmp1103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1102, &$s1104);
frost$core$String* $tmp1105 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1093, $tmp1103);
frost$core$MutableString$init$frost$core$String($tmp1072, $tmp1105);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
frost$core$MutableString* $tmp1106 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
*(&local7) = $tmp1072;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
// line 412
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1107));
frost$core$String* $tmp1108 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
*(&local8) = &$s1109;
// line 413
frost$collections$ListView* $tmp1110 = *(&local5);
ITable* $tmp1111 = ((frost$collections$Iterable*) $tmp1110)->$class->itable;
while ($tmp1111->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1111 = $tmp1111->next;
}
$fn1113 $tmp1112 = $tmp1111->methods[0];
frost$collections$Iterator* $tmp1114 = $tmp1112(((frost$collections$Iterable*) $tmp1110));
goto block4;
block4:;
ITable* $tmp1115 = $tmp1114->$class->itable;
while ($tmp1115->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1115 = $tmp1115->next;
}
$fn1117 $tmp1116 = $tmp1115->methods[0];
frost$core$Bit $tmp1118 = $tmp1116($tmp1114);
bool $tmp1119 = $tmp1118.value;
if ($tmp1119) goto block6; else goto block5;
block5:;
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1120 = $tmp1114->$class->itable;
while ($tmp1120->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1120 = $tmp1120->next;
}
$fn1122 $tmp1121 = $tmp1120->methods[1];
frost$core$Object* $tmp1123 = $tmp1121($tmp1114);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1123)));
org$frostlang$frostc$MethodDecl* $tmp1124 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) $tmp1123);
// line 414
frost$core$MutableString* $tmp1125 = *(&local7);
frost$core$String* $tmp1126 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1125, $tmp1126);
// line 415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1127));
frost$core$String* $tmp1128 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
*(&local8) = &$s1129;
// line 416
org$frostlang$frostc$MethodDecl* $tmp1130 = *(&local9);
org$frostlang$frostc$Annotations** $tmp1131 = &$tmp1130->annotations;
org$frostlang$frostc$Annotations* $tmp1132 = *$tmp1131;
frost$core$Bit $tmp1133 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp1132);
bool $tmp1134 = $tmp1133.value;
if ($tmp1134) goto block7; else goto block9;
block7:;
// line 417
frost$core$MutableString* $tmp1135 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1135, &$s1136);
goto block8;
block9:;
// line 1
// line 420
frost$core$MutableString* $tmp1137 = *(&local7);
org$frostlang$frostc$MethodDecl* $tmp1138 = *(&local9);
frost$core$String* $tmp1139 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp1138);
frost$core$MutableString$append$frost$core$String($tmp1137, $tmp1139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
goto block8;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1123);
org$frostlang$frostc$MethodDecl* $tmp1140 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
// line 423
frost$core$MutableString* $tmp1141 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1141, &$s1142);
// line 424
*(&local10) = ((frost$core$Error*) NULL);
// line 425
frost$io$MemoryOutputStream** $tmp1143 = &param0->types;
frost$io$MemoryOutputStream* $tmp1144 = *$tmp1143;
frost$core$MutableString* $tmp1145 = *(&local7);
frost$core$String* $tmp1146 = frost$core$MutableString$finish$R$frost$core$String($tmp1145);
$fn1148 $tmp1147 = ($fn1148) ((frost$io$OutputStream*) $tmp1144)->$class->vtable[19];
frost$core$Error* $tmp1149 = $tmp1147(((frost$io$OutputStream*) $tmp1144), $tmp1146);
if ($tmp1149 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local10) = $tmp1149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
goto block10;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
goto block11;
block10:;
// line 428
frost$core$Bit $tmp1150 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1151 = $tmp1150.value;
if ($tmp1151) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp1152 = (frost$core$Int64) {428};
frost$core$Error* $tmp1153 = *(&local10);
$fn1155 $tmp1154 = ($fn1155) ((frost$core$Object*) $tmp1153)->$class->vtable[0];
frost$core$String* $tmp1156 = $tmp1154(((frost$core$Object*) $tmp1153));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1157, $tmp1152, $tmp1156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
abort(); // unreachable
block14:;
// line 429
goto block16;
block16:;
goto block16;
block17:;
goto block11;
block11:;
frost$core$Error* $tmp1158 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
*(&local10) = ((frost$core$Error*) NULL);
// line 431
frost$core$String* $tmp1159 = *(&local6);
frost$core$String* $tmp1160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1161, $tmp1159);
frost$core$String* $tmp1162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1160, &$s1163);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$String* $tmp1164 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
*(&local1) = $tmp1162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$String* $tmp1165 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1166 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1167 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1168 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1169 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1170 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1041);
org$frostlang$frostc$Type* $tmp1171 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
// line 433
frost$core$String* $tmp1172 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$core$String* $tmp1173 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
*(&local1) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1174 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
*(&local0) = ((frost$collections$HashSet*) NULL);
return $tmp1172;

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
frost$core$Bit local17;
frost$core$Int64 local18;
org$frostlang$frostc$CCodeGenerator$MethodShim* local19 = NULL;
frost$io$IndentedOutputStream** $tmp1175 = &param0->out;
frost$io$IndentedOutputStream* $tmp1176 = *$tmp1175;
// line 438
*(&local1) = ((frost$core$Error*) NULL);
// line 439
frost$collections$IdentityMap** $tmp1177 = &param0->methodShims;
frost$collections$IdentityMap* $tmp1178 = *$tmp1177;
frost$core$Object* $tmp1179 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp1178, ((frost$core$Object*) param1));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$MethodShim*) $tmp1179)));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1180 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) $tmp1179);
frost$core$Frost$unref$frost$core$Object$Q($tmp1179);
// line 440
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1181 = *(&local2);
frost$core$Bit $tmp1182 = frost$core$Bit$init$builtin_bit($tmp1181 != NULL);
bool $tmp1183 = $tmp1182.value;
if ($tmp1183) goto block6; else goto block7;
block6:;
// line 441
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1184 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1185 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Error* $tmp1186 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
*(&local1) = ((frost$core$Error*) NULL);
*(&local0) = $tmp1184;
goto block1;
block7:;
// line 443
frost$io$IndentedOutputStream** $tmp1187 = &param0->out;
frost$io$IndentedOutputStream* $tmp1188 = *$tmp1187;
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
frost$io$IndentedOutputStream* $tmp1189 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
*(&local3) = $tmp1188;
// line 444
frost$io$MemoryOutputStream* $tmp1190 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp1190);
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$io$MemoryOutputStream* $tmp1191 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
*(&local4) = $tmp1190;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
// line 445
frost$io$IndentedOutputStream* $tmp1192 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp1193 = *(&local4);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp1192, ((frost$io$OutputStream*) $tmp1193));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
frost$io$IndentedOutputStream** $tmp1194 = &param0->out;
frost$io$IndentedOutputStream* $tmp1195 = *$tmp1194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$io$IndentedOutputStream** $tmp1196 = &param0->out;
*$tmp1196 = $tmp1192;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
// line 446
frost$core$Bit $tmp1197 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(param2);
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp1199 = (frost$core$Int64) {446};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1200, $tmp1199);
abort(); // unreachable
block8:;
// line 447
org$frostlang$frostc$FixedArray** $tmp1201 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1202 = *$tmp1201;
ITable* $tmp1203 = ((frost$collections$CollectionView*) $tmp1202)->$class->itable;
while ($tmp1203->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1203 = $tmp1203->next;
}
$fn1205 $tmp1204 = $tmp1203->methods[0];
frost$core$Int64 $tmp1206 = $tmp1204(((frost$collections$CollectionView*) $tmp1202));
frost$collections$Array** $tmp1207 = &param1->parameters;
frost$collections$Array* $tmp1208 = *$tmp1207;
ITable* $tmp1209 = ((frost$collections$CollectionView*) $tmp1208)->$class->itable;
while ($tmp1209->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1209 = $tmp1209->next;
}
$fn1211 $tmp1210 = $tmp1209->methods[0];
frost$core$Int64 $tmp1212 = $tmp1210(((frost$collections$CollectionView*) $tmp1208));
frost$core$Int64 $tmp1213 = (frost$core$Int64) {2};
int64_t $tmp1214 = $tmp1212.value;
int64_t $tmp1215 = $tmp1213.value;
int64_t $tmp1216 = $tmp1214 + $tmp1215;
frost$core$Int64 $tmp1217 = (frost$core$Int64) {$tmp1216};
frost$core$Bit $tmp1218 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1206, $tmp1217);
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1220 = (frost$core$Int64) {447};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1221, $tmp1220);
abort(); // unreachable
block10:;
// line 448
frost$core$Bit $tmp1222 = org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(param1);
bool $tmp1223 = $tmp1222.value;
if ($tmp1223) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1224 = (frost$core$Int64) {448};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1225, $tmp1224);
abort(); // unreachable
block12:;
// line 449
org$frostlang$frostc$Type* $tmp1226 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(param2);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
org$frostlang$frostc$Type* $tmp1227 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
*(&local5) = $tmp1226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
// line 450
frost$core$String* $tmp1228 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1228, &$s1230);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
frost$core$String* $tmp1231 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local6) = $tmp1229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
// line 451
frost$core$MutableString* $tmp1232 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp1233 = *(&local5);
frost$core$String* $tmp1234 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1233);
frost$core$MutableString$init$frost$core$String($tmp1232, $tmp1234);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
frost$core$MutableString* $tmp1235 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
*(&local7) = $tmp1232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
// line 452
frost$io$IndentedOutputStream** $tmp1236 = &param0->out;
frost$io$IndentedOutputStream* $tmp1237 = *$tmp1236;
frost$core$MutableString* $tmp1238 = *(&local7);
frost$core$String* $tmp1239 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1240, ((frost$core$Object*) $tmp1238));
frost$core$String* $tmp1241 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1239, &$s1242);
frost$core$String* $tmp1243 = *(&local6);
frost$core$String* $tmp1244 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1241, $tmp1243);
frost$core$String* $tmp1245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1244, &$s1246);
$fn1248 $tmp1247 = ($fn1248) ((frost$io$OutputStream*) $tmp1237)->$class->vtable[17];
frost$core$Error* $tmp1249 = $tmp1247(((frost$io$OutputStream*) $tmp1237), $tmp1245);
if ($tmp1249 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local1) = $tmp1249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
frost$core$MutableString* $tmp1250 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1251 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1252 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1253 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1254 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1255 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
// line 453
frost$core$MutableString* $tmp1256 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1256, &$s1257);
// line 454
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1258));
frost$core$String* $tmp1259 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local8) = &$s1260;
// line 455
frost$core$Int64 $tmp1261 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1262 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1263 = *$tmp1262;
ITable* $tmp1264 = ((frost$collections$CollectionView*) $tmp1263)->$class->itable;
while ($tmp1264->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1264 = $tmp1264->next;
}
$fn1266 $tmp1265 = $tmp1264->methods[0];
frost$core$Int64 $tmp1267 = $tmp1265(((frost$collections$CollectionView*) $tmp1263));
frost$core$Int64 $tmp1268 = (frost$core$Int64) {1};
int64_t $tmp1269 = $tmp1267.value;
int64_t $tmp1270 = $tmp1268.value;
int64_t $tmp1271 = $tmp1269 - $tmp1270;
frost$core$Int64 $tmp1272 = (frost$core$Int64) {$tmp1271};
frost$core$Bit $tmp1273 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1274 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1261, $tmp1272, $tmp1273);
frost$core$Int64 $tmp1275 = $tmp1274.min;
*(&local9) = $tmp1275;
frost$core$Int64 $tmp1276 = $tmp1274.max;
frost$core$Bit $tmp1277 = $tmp1274.inclusive;
bool $tmp1278 = $tmp1277.value;
frost$core$Int64 $tmp1279 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1280 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1279);
if ($tmp1278) goto block19; else goto block20;
block19:;
int64_t $tmp1281 = $tmp1275.value;
int64_t $tmp1282 = $tmp1276.value;
bool $tmp1283 = $tmp1281 <= $tmp1282;
frost$core$Bit $tmp1284 = (frost$core$Bit) {$tmp1283};
bool $tmp1285 = $tmp1284.value;
if ($tmp1285) goto block16; else goto block17;
block20:;
int64_t $tmp1286 = $tmp1275.value;
int64_t $tmp1287 = $tmp1276.value;
bool $tmp1288 = $tmp1286 < $tmp1287;
frost$core$Bit $tmp1289 = (frost$core$Bit) {$tmp1288};
bool $tmp1290 = $tmp1289.value;
if ($tmp1290) goto block16; else goto block17;
block16:;
// line 456
org$frostlang$frostc$FixedArray** $tmp1291 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1292 = *$tmp1291;
frost$core$Int64 $tmp1293 = *(&local9);
frost$core$Object* $tmp1294 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1292, $tmp1293);
frost$core$String* $tmp1295 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp1294));
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
frost$core$String* $tmp1296 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
*(&local10) = $tmp1295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
frost$core$Frost$unref$frost$core$Object$Q($tmp1294);
// line 457
frost$core$MutableString* $tmp1297 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1297, &$s1298);
// line 458
frost$core$MutableString* $tmp1299 = *(&local7);
frost$core$String* $tmp1300 = *(&local10);
frost$core$MutableString$append$frost$core$String($tmp1299, $tmp1300);
// line 459
frost$io$IndentedOutputStream** $tmp1301 = &param0->out;
frost$io$IndentedOutputStream* $tmp1302 = *$tmp1301;
frost$core$String* $tmp1303 = *(&local8);
frost$core$String* $tmp1304 = frost$core$String$get_asString$R$frost$core$String($tmp1303);
frost$core$String* $tmp1305 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1304, &$s1306);
frost$core$String* $tmp1307 = *(&local10);
frost$core$String* $tmp1308 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1305, $tmp1307);
frost$core$String* $tmp1309 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1308, &$s1310);
frost$core$Int64 $tmp1311 = *(&local9);
frost$core$Int64$wrapper* $tmp1312;
$tmp1312 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1312->value = $tmp1311;
frost$core$String* $tmp1313 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1309, ((frost$core$Object*) $tmp1312));
frost$core$String* $tmp1314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1313, &$s1315);
$fn1317 $tmp1316 = ($fn1317) ((frost$io$OutputStream*) $tmp1302)->$class->vtable[17];
frost$core$Error* $tmp1318 = $tmp1316(((frost$io$OutputStream*) $tmp1302), $tmp1314);
if ($tmp1318 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
*(&local1) = $tmp1318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$String* $tmp1319 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local10) = ((frost$core$String*) NULL);
frost$core$String* $tmp1320 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1321 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1322 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1323 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1324 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1325 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1326 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
// line 460
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1327));
frost$core$String* $tmp1328 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
*(&local8) = &$s1329;
frost$core$String* $tmp1330 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local10) = ((frost$core$String*) NULL);
goto block18;
block18:;
frost$core$Int64 $tmp1331 = *(&local9);
int64_t $tmp1332 = $tmp1276.value;
int64_t $tmp1333 = $tmp1331.value;
int64_t $tmp1334 = $tmp1332 - $tmp1333;
frost$core$Int64 $tmp1335 = (frost$core$Int64) {$tmp1334};
frost$core$UInt64 $tmp1336 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1335);
if ($tmp1278) goto block24; else goto block25;
block24:;
uint64_t $tmp1337 = $tmp1336.value;
uint64_t $tmp1338 = $tmp1280.value;
bool $tmp1339 = $tmp1337 >= $tmp1338;
frost$core$Bit $tmp1340 = (frost$core$Bit) {$tmp1339};
bool $tmp1341 = $tmp1340.value;
if ($tmp1341) goto block23; else goto block17;
block25:;
uint64_t $tmp1342 = $tmp1336.value;
uint64_t $tmp1343 = $tmp1280.value;
bool $tmp1344 = $tmp1342 > $tmp1343;
frost$core$Bit $tmp1345 = (frost$core$Bit) {$tmp1344};
bool $tmp1346 = $tmp1345.value;
if ($tmp1346) goto block23; else goto block17;
block23:;
int64_t $tmp1347 = $tmp1331.value;
int64_t $tmp1348 = $tmp1279.value;
int64_t $tmp1349 = $tmp1347 + $tmp1348;
frost$core$Int64 $tmp1350 = (frost$core$Int64) {$tmp1349};
*(&local9) = $tmp1350;
goto block16;
block17:;
// line 462
frost$io$IndentedOutputStream** $tmp1351 = &param0->out;
frost$io$IndentedOutputStream* $tmp1352 = *$tmp1351;
$fn1354 $tmp1353 = ($fn1354) ((frost$io$OutputStream*) $tmp1352)->$class->vtable[19];
frost$core$Error* $tmp1355 = $tmp1353(((frost$io$OutputStream*) $tmp1352), &$s1356);
if ($tmp1355 == NULL) goto block26; else goto block27;
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
*(&local1) = $tmp1355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$core$String* $tmp1357 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1358 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1359 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1360 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1361 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1362 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1363 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
// line 463
frost$io$IndentedOutputStream** $tmp1364 = &param0->out;
frost$io$IndentedOutputStream* $tmp1365 = *$tmp1364;
frost$core$Int64* $tmp1366 = &$tmp1365->level;
frost$core$Int64 $tmp1367 = *$tmp1366;
frost$core$Int64 $tmp1368 = (frost$core$Int64) {1};
int64_t $tmp1369 = $tmp1367.value;
int64_t $tmp1370 = $tmp1368.value;
int64_t $tmp1371 = $tmp1369 + $tmp1370;
frost$core$Int64 $tmp1372 = (frost$core$Int64) {$tmp1371};
frost$core$Int64* $tmp1373 = &$tmp1365->level;
*$tmp1373 = $tmp1372;
// line 464
frost$core$MutableString* $tmp1374 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1374, &$s1375);
// line 465
frost$io$MemoryOutputStream* $tmp1376 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp1376);
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
frost$io$MemoryOutputStream* $tmp1377 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
*(&local11) = $tmp1376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
// line 466
frost$collections$Array* $tmp1378 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1378);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$collections$Array* $tmp1379 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
*(&local12) = $tmp1378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
// line 467
frost$core$Int64 $tmp1380 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1381 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1382 = *$tmp1381;
ITable* $tmp1383 = ((frost$collections$CollectionView*) $tmp1382)->$class->itable;
while ($tmp1383->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1383 = $tmp1383->next;
}
$fn1385 $tmp1384 = $tmp1383->methods[0];
frost$core$Int64 $tmp1386 = $tmp1384(((frost$collections$CollectionView*) $tmp1382));
frost$core$Int64 $tmp1387 = (frost$core$Int64) {1};
int64_t $tmp1388 = $tmp1386.value;
int64_t $tmp1389 = $tmp1387.value;
int64_t $tmp1390 = $tmp1388 - $tmp1389;
frost$core$Int64 $tmp1391 = (frost$core$Int64) {$tmp1390};
frost$core$Bit $tmp1392 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1393 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1380, $tmp1391, $tmp1392);
frost$core$Int64 $tmp1394 = $tmp1393.min;
*(&local13) = $tmp1394;
frost$core$Int64 $tmp1395 = $tmp1393.max;
frost$core$Bit $tmp1396 = $tmp1393.inclusive;
bool $tmp1397 = $tmp1396.value;
frost$core$Int64 $tmp1398 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1399 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1398);
if ($tmp1397) goto block31; else goto block32;
block31:;
int64_t $tmp1400 = $tmp1394.value;
int64_t $tmp1401 = $tmp1395.value;
bool $tmp1402 = $tmp1400 <= $tmp1401;
frost$core$Bit $tmp1403 = (frost$core$Bit) {$tmp1402};
bool $tmp1404 = $tmp1403.value;
if ($tmp1404) goto block28; else goto block29;
block32:;
int64_t $tmp1405 = $tmp1394.value;
int64_t $tmp1406 = $tmp1395.value;
bool $tmp1407 = $tmp1405 < $tmp1406;
frost$core$Bit $tmp1408 = (frost$core$Bit) {$tmp1407};
bool $tmp1409 = $tmp1408.value;
if ($tmp1409) goto block28; else goto block29;
block28:;
// line 468
frost$core$Int64 $tmp1410 = *(&local13);
frost$core$Int64$wrapper* $tmp1411;
$tmp1411 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1411->value = $tmp1410;
frost$core$String* $tmp1412 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1413, ((frost$core$Object*) $tmp1411));
frost$core$String* $tmp1414 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1412, &$s1415);
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
frost$core$String* $tmp1416 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local14) = $tmp1414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
// line 469
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
// line 470
frost$core$Int64 $tmp1417 = *(&local13);
frost$core$Int64 $tmp1418 = (frost$core$Int64) {0};
frost$core$Bit $tmp1419 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1417, $tmp1418);
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block33; else goto block35;
block33:;
// line 471
frost$core$Weak** $tmp1421 = &param1->owner;
frost$core$Weak* $tmp1422 = *$tmp1421;
frost$core$Object* $tmp1423 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1422);
org$frostlang$frostc$Type** $tmp1424 = &((org$frostlang$frostc$ClassDecl*) $tmp1423)->type;
org$frostlang$frostc$Type* $tmp1425 = *$tmp1424;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
org$frostlang$frostc$Type* $tmp1426 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
*(&local15) = $tmp1425;
frost$core$Frost$unref$frost$core$Object$Q($tmp1423);
goto block34;
block35:;
// line 1
// line 474
frost$collections$Array** $tmp1427 = &param1->parameters;
frost$collections$Array* $tmp1428 = *$tmp1427;
frost$core$Int64 $tmp1429 = *(&local13);
frost$core$Int64 $tmp1430 = (frost$core$Int64) {1};
int64_t $tmp1431 = $tmp1429.value;
int64_t $tmp1432 = $tmp1430.value;
int64_t $tmp1433 = $tmp1431 - $tmp1432;
frost$core$Int64 $tmp1434 = (frost$core$Int64) {$tmp1433};
frost$core$Object* $tmp1435 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1428, $tmp1434);
org$frostlang$frostc$Type** $tmp1436 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1435)->type;
org$frostlang$frostc$Type* $tmp1437 = *$tmp1436;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
org$frostlang$frostc$Type* $tmp1438 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
*(&local15) = $tmp1437;
frost$core$Frost$unref$frost$core$Object$Q($tmp1435);
goto block34;
block34:;
// line 476
org$frostlang$frostc$Type* $tmp1439 = *(&local15);
org$frostlang$frostc$FixedArray** $tmp1440 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1441 = *$tmp1440;
frost$core$Int64 $tmp1442 = *(&local13);
frost$core$Object* $tmp1443 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1441, $tmp1442);
ITable* $tmp1444 = ((frost$core$Equatable*) $tmp1439)->$class->itable;
while ($tmp1444->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1444 = $tmp1444->next;
}
$fn1446 $tmp1445 = $tmp1444->methods[1];
frost$core$Bit $tmp1447 = $tmp1445(((frost$core$Equatable*) $tmp1439), ((frost$core$Equatable*) ((org$frostlang$frostc$Type*) $tmp1443)));
bool $tmp1448 = $tmp1447.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1443);
if ($tmp1448) goto block36; else goto block38;
block36:;
// line 477
frost$core$String* $tmp1449 = *(&local14);
org$frostlang$frostc$FixedArray** $tmp1450 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1451 = *$tmp1450;
frost$core$Int64 $tmp1452 = *(&local13);
frost$core$Object* $tmp1453 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1451, $tmp1452);
org$frostlang$frostc$Type* $tmp1454 = *(&local15);
frost$core$String* $tmp1455 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1449, ((org$frostlang$frostc$Type*) $tmp1453), $tmp1454);
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
frost$core$String* $tmp1456 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
*(&local16) = $tmp1455;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
frost$core$Frost$unref$frost$core$Object$Q($tmp1453);
// line 478
frost$collections$Array* $tmp1457 = *(&local12);
frost$core$String* $tmp1458 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp1457, ((frost$core$Object*) $tmp1458));
// line 479
frost$core$Weak** $tmp1459 = &param0->compiler;
frost$core$Weak* $tmp1460 = *$tmp1459;
frost$core$Object* $tmp1461 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1460);
org$frostlang$frostc$FixedArray** $tmp1462 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1463 = *$tmp1462;
frost$core$Int64 $tmp1464 = *(&local13);
frost$core$Object* $tmp1465 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1463, $tmp1464);
frost$core$Bit $tmp1466 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1461), ((org$frostlang$frostc$Type*) $tmp1465));
bool $tmp1467 = $tmp1466.value;
if ($tmp1467) goto block41; else goto block42;
block41:;
frost$core$Weak** $tmp1468 = &param0->compiler;
frost$core$Weak* $tmp1469 = *$tmp1468;
frost$core$Object* $tmp1470 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1469);
org$frostlang$frostc$Type* $tmp1471 = *(&local15);
frost$core$Bit $tmp1472 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1470), $tmp1471);
frost$core$Bit $tmp1473 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1472);
frost$core$Frost$unref$frost$core$Object$Q($tmp1470);
*(&local17) = $tmp1473;
goto block43;
block42:;
*(&local17) = $tmp1466;
goto block43;
block43:;
frost$core$Bit $tmp1474 = *(&local17);
bool $tmp1475 = $tmp1474.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1465);
frost$core$Frost$unref$frost$core$Object$Q($tmp1461);
if ($tmp1475) goto block39; else goto block40;
block39:;
// line 480
frost$io$MemoryOutputStream* $tmp1476 = *(&local11);
frost$core$String* $tmp1477 = *(&local16);
frost$core$String* $tmp1478 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1479, $tmp1477);
frost$core$String* $tmp1480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1478, &$s1481);
frost$core$String* $tmp1482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1483, $tmp1480);
$fn1485 $tmp1484 = ($fn1485) ((frost$io$OutputStream*) $tmp1476)->$class->vtable[19];
frost$core$Error* $tmp1486 = $tmp1484(((frost$io$OutputStream*) $tmp1476), $tmp1482);
if ($tmp1486 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
*(&local1) = $tmp1486;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
frost$core$String* $tmp1487 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
*(&local16) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1488 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1489 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
*(&local14) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp1490 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1491 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1492 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1493 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1494 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1495 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1496 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1497 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1498 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
goto block40;
block40:;
frost$core$String* $tmp1499 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
*(&local16) = ((frost$core$String*) NULL);
goto block37;
block38:;
// line 1
// line 485
frost$collections$Array* $tmp1500 = *(&local12);
frost$core$String* $tmp1501 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp1500, ((frost$core$Object*) $tmp1501));
goto block37;
block37:;
org$frostlang$frostc$Type* $tmp1502 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1503 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
*(&local14) = ((frost$core$String*) NULL);
goto block30;
block30:;
frost$core$Int64 $tmp1504 = *(&local13);
int64_t $tmp1505 = $tmp1395.value;
int64_t $tmp1506 = $tmp1504.value;
int64_t $tmp1507 = $tmp1505 - $tmp1506;
frost$core$Int64 $tmp1508 = (frost$core$Int64) {$tmp1507};
frost$core$UInt64 $tmp1509 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1508);
if ($tmp1397) goto block47; else goto block48;
block47:;
uint64_t $tmp1510 = $tmp1509.value;
uint64_t $tmp1511 = $tmp1399.value;
bool $tmp1512 = $tmp1510 >= $tmp1511;
frost$core$Bit $tmp1513 = (frost$core$Bit) {$tmp1512};
bool $tmp1514 = $tmp1513.value;
if ($tmp1514) goto block46; else goto block29;
block48:;
uint64_t $tmp1515 = $tmp1509.value;
uint64_t $tmp1516 = $tmp1399.value;
bool $tmp1517 = $tmp1515 > $tmp1516;
frost$core$Bit $tmp1518 = (frost$core$Bit) {$tmp1517};
bool $tmp1519 = $tmp1518.value;
if ($tmp1519) goto block46; else goto block29;
block46:;
int64_t $tmp1520 = $tmp1504.value;
int64_t $tmp1521 = $tmp1398.value;
int64_t $tmp1522 = $tmp1520 + $tmp1521;
frost$core$Int64 $tmp1523 = (frost$core$Int64) {$tmp1522};
*(&local13) = $tmp1523;
goto block28;
block29:;
// line 488
org$frostlang$frostc$Type** $tmp1524 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1525 = *$tmp1524;
org$frostlang$frostc$Type* $tmp1526 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp1527 = ((frost$core$Equatable*) $tmp1525)->$class->itable;
while ($tmp1527->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1527 = $tmp1527->next;
}
$fn1529 $tmp1528 = $tmp1527->methods[1];
frost$core$Bit $tmp1530 = $tmp1528(((frost$core$Equatable*) $tmp1525), ((frost$core$Equatable*) $tmp1526));
bool $tmp1531 = $tmp1530.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
if ($tmp1531) goto block49; else goto block50;
block49:;
// line 489
frost$io$IndentedOutputStream** $tmp1532 = &param0->out;
frost$io$IndentedOutputStream* $tmp1533 = *$tmp1532;
org$frostlang$frostc$Type** $tmp1534 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1535 = *$tmp1534;
frost$core$String* $tmp1536 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1535);
frost$core$String* $tmp1537 = frost$core$String$get_asString$R$frost$core$String($tmp1536);
frost$core$String* $tmp1538 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1537, &$s1539);
$fn1541 $tmp1540 = ($fn1541) ((frost$io$OutputStream*) $tmp1533)->$class->vtable[17];
frost$core$Error* $tmp1542 = $tmp1540(((frost$io$OutputStream*) $tmp1533), $tmp1538);
if ($tmp1542 == NULL) goto block51; else goto block52;
block52:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
*(&local1) = $tmp1542;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
frost$collections$Array* $tmp1543 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1544 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1545 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1546 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1547 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1548 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1549 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1549));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1550 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1550));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1551 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
goto block50;
block50:;
// line 491
frost$io$IndentedOutputStream** $tmp1552 = &param0->out;
frost$io$IndentedOutputStream* $tmp1553 = *$tmp1552;
frost$core$String* $tmp1554 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1555 = frost$core$String$get_asString$R$frost$core$String($tmp1554);
frost$core$String* $tmp1556 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1555, &$s1557);
$fn1559 $tmp1558 = ($fn1559) ((frost$io$OutputStream*) $tmp1553)->$class->vtable[17];
frost$core$Error* $tmp1560 = $tmp1558(((frost$io$OutputStream*) $tmp1553), $tmp1556);
if ($tmp1560 == NULL) goto block53; else goto block54;
block54:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
*(&local1) = $tmp1560;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
frost$collections$Array* $tmp1561 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1562 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1563 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1564 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1565 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1566 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1567 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1568 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1569 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block53:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
// line 492
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1570));
frost$core$String* $tmp1571 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
*(&local8) = &$s1572;
// line 493
frost$core$Int64 $tmp1573 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1574 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1575 = *$tmp1574;
ITable* $tmp1576 = ((frost$collections$CollectionView*) $tmp1575)->$class->itable;
while ($tmp1576->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1576 = $tmp1576->next;
}
$fn1578 $tmp1577 = $tmp1576->methods[0];
frost$core$Int64 $tmp1579 = $tmp1577(((frost$collections$CollectionView*) $tmp1575));
frost$core$Int64 $tmp1580 = (frost$core$Int64) {1};
int64_t $tmp1581 = $tmp1579.value;
int64_t $tmp1582 = $tmp1580.value;
int64_t $tmp1583 = $tmp1581 - $tmp1582;
frost$core$Int64 $tmp1584 = (frost$core$Int64) {$tmp1583};
frost$core$Bit $tmp1585 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1586 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1573, $tmp1584, $tmp1585);
frost$core$Int64 $tmp1587 = $tmp1586.min;
*(&local18) = $tmp1587;
frost$core$Int64 $tmp1588 = $tmp1586.max;
frost$core$Bit $tmp1589 = $tmp1586.inclusive;
bool $tmp1590 = $tmp1589.value;
frost$core$Int64 $tmp1591 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1592 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1591);
if ($tmp1590) goto block58; else goto block59;
block58:;
int64_t $tmp1593 = $tmp1587.value;
int64_t $tmp1594 = $tmp1588.value;
bool $tmp1595 = $tmp1593 <= $tmp1594;
frost$core$Bit $tmp1596 = (frost$core$Bit) {$tmp1595};
bool $tmp1597 = $tmp1596.value;
if ($tmp1597) goto block55; else goto block56;
block59:;
int64_t $tmp1598 = $tmp1587.value;
int64_t $tmp1599 = $tmp1588.value;
bool $tmp1600 = $tmp1598 < $tmp1599;
frost$core$Bit $tmp1601 = (frost$core$Bit) {$tmp1600};
bool $tmp1602 = $tmp1601.value;
if ($tmp1602) goto block55; else goto block56;
block55:;
// line 494
frost$io$IndentedOutputStream** $tmp1603 = &param0->out;
frost$io$IndentedOutputStream* $tmp1604 = *$tmp1603;
frost$core$String* $tmp1605 = *(&local8);
frost$core$String* $tmp1606 = frost$core$String$get_asString$R$frost$core$String($tmp1605);
frost$core$String* $tmp1607 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1606, &$s1608);
frost$collections$Array* $tmp1609 = *(&local12);
frost$core$Int64 $tmp1610 = *(&local18);
frost$core$Object* $tmp1611 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1609, $tmp1610);
frost$core$String* $tmp1612 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1607, ((frost$core$String*) $tmp1611));
frost$core$String* $tmp1613 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1612, &$s1614);
$fn1616 $tmp1615 = ($fn1616) ((frost$io$OutputStream*) $tmp1604)->$class->vtable[17];
frost$core$Error* $tmp1617 = $tmp1615(((frost$io$OutputStream*) $tmp1604), $tmp1613);
if ($tmp1617 == NULL) goto block60; else goto block61;
block61:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
*(&local1) = $tmp1617;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
frost$core$Frost$unref$frost$core$Object$Q($tmp1611);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
frost$collections$Array* $tmp1618 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1619 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1620 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1621 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1622 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1622));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1623 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1624 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1625 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1626 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block60:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
frost$core$Frost$unref$frost$core$Object$Q($tmp1611);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
// line 495
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1627));
frost$core$String* $tmp1628 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
*(&local8) = &$s1629;
goto block57;
block57:;
frost$core$Int64 $tmp1630 = *(&local18);
int64_t $tmp1631 = $tmp1588.value;
int64_t $tmp1632 = $tmp1630.value;
int64_t $tmp1633 = $tmp1631 - $tmp1632;
frost$core$Int64 $tmp1634 = (frost$core$Int64) {$tmp1633};
frost$core$UInt64 $tmp1635 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1634);
if ($tmp1590) goto block63; else goto block64;
block63:;
uint64_t $tmp1636 = $tmp1635.value;
uint64_t $tmp1637 = $tmp1592.value;
bool $tmp1638 = $tmp1636 >= $tmp1637;
frost$core$Bit $tmp1639 = (frost$core$Bit) {$tmp1638};
bool $tmp1640 = $tmp1639.value;
if ($tmp1640) goto block62; else goto block56;
block64:;
uint64_t $tmp1641 = $tmp1635.value;
uint64_t $tmp1642 = $tmp1592.value;
bool $tmp1643 = $tmp1641 > $tmp1642;
frost$core$Bit $tmp1644 = (frost$core$Bit) {$tmp1643};
bool $tmp1645 = $tmp1644.value;
if ($tmp1645) goto block62; else goto block56;
block62:;
int64_t $tmp1646 = $tmp1630.value;
int64_t $tmp1647 = $tmp1591.value;
int64_t $tmp1648 = $tmp1646 + $tmp1647;
frost$core$Int64 $tmp1649 = (frost$core$Int64) {$tmp1648};
*(&local18) = $tmp1649;
goto block55;
block56:;
// line 497
frost$io$IndentedOutputStream** $tmp1650 = &param0->out;
frost$io$IndentedOutputStream* $tmp1651 = *$tmp1650;
$fn1653 $tmp1652 = ($fn1653) ((frost$io$OutputStream*) $tmp1651)->$class->vtable[19];
frost$core$Error* $tmp1654 = $tmp1652(((frost$io$OutputStream*) $tmp1651), &$s1655);
if ($tmp1654 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
*(&local1) = $tmp1654;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
frost$collections$Array* $tmp1656 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1657 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1658 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1659 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1660 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1661 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1662 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1663 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1664 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
// line 498
frost$io$IndentedOutputStream** $tmp1665 = &param0->out;
frost$io$IndentedOutputStream* $tmp1666 = *$tmp1665;
frost$io$MemoryOutputStream* $tmp1667 = *(&local11);
$fn1669 $tmp1668 = ($fn1669) ((frost$io$OutputStream*) $tmp1666)->$class->vtable[20];
frost$core$Error* $tmp1670 = $tmp1668(((frost$io$OutputStream*) $tmp1666), ((frost$core$Object*) $tmp1667));
if ($tmp1670 == NULL) goto block67; else goto block68;
block68:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
*(&local1) = $tmp1670;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
frost$collections$Array* $tmp1671 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1672 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1673 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1674 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1675 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1676 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1677 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1678 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1679 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block67:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
// line 499
org$frostlang$frostc$Type** $tmp1680 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1681 = *$tmp1680;
org$frostlang$frostc$Type* $tmp1682 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp1683 = ((frost$core$Equatable*) $tmp1681)->$class->itable;
while ($tmp1683->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1683 = $tmp1683->next;
}
$fn1685 $tmp1684 = $tmp1683->methods[1];
frost$core$Bit $tmp1686 = $tmp1684(((frost$core$Equatable*) $tmp1681), ((frost$core$Equatable*) $tmp1682));
bool $tmp1687 = $tmp1686.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
if ($tmp1687) goto block69; else goto block70;
block69:;
// line 500
frost$io$IndentedOutputStream** $tmp1688 = &param0->out;
frost$io$IndentedOutputStream* $tmp1689 = *$tmp1688;
org$frostlang$frostc$Type** $tmp1690 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1691 = *$tmp1690;
org$frostlang$frostc$Type* $tmp1692 = *(&local5);
frost$core$String* $tmp1693 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, &$s1694, $tmp1691, $tmp1692);
frost$core$String* $tmp1695 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1696, $tmp1693);
frost$core$String* $tmp1697 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1695, &$s1698);
$fn1700 $tmp1699 = ($fn1700) ((frost$io$OutputStream*) $tmp1689)->$class->vtable[19];
frost$core$Error* $tmp1701 = $tmp1699(((frost$io$OutputStream*) $tmp1689), $tmp1697);
if ($tmp1701 == NULL) goto block71; else goto block72;
block72:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
*(&local1) = $tmp1701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
frost$collections$Array* $tmp1702 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1703 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1704 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1705 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1706 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1707 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1708 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1709 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1710 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block71:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
goto block70;
block70:;
// line 503
frost$io$IndentedOutputStream** $tmp1711 = &param0->out;
frost$io$IndentedOutputStream* $tmp1712 = *$tmp1711;
frost$core$Int64* $tmp1713 = &$tmp1712->level;
frost$core$Int64 $tmp1714 = *$tmp1713;
frost$core$Int64 $tmp1715 = (frost$core$Int64) {1};
int64_t $tmp1716 = $tmp1714.value;
int64_t $tmp1717 = $tmp1715.value;
int64_t $tmp1718 = $tmp1716 - $tmp1717;
frost$core$Int64 $tmp1719 = (frost$core$Int64) {$tmp1718};
frost$core$Int64* $tmp1720 = &$tmp1712->level;
*$tmp1720 = $tmp1719;
// line 504
frost$io$IndentedOutputStream** $tmp1721 = &param0->out;
frost$io$IndentedOutputStream* $tmp1722 = *$tmp1721;
$fn1724 $tmp1723 = ($fn1724) ((frost$io$OutputStream*) $tmp1722)->$class->vtable[19];
frost$core$Error* $tmp1725 = $tmp1723(((frost$io$OutputStream*) $tmp1722), &$s1726);
if ($tmp1725 == NULL) goto block73; else goto block74;
block74:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
*(&local1) = $tmp1725;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
frost$collections$Array* $tmp1727 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1728 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1729 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1730 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1731 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1732 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1733 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1734 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1735 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
// line 505
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1736 = (org$frostlang$frostc$CCodeGenerator$MethodShim*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$MethodShim$class);
frost$core$String* $tmp1737 = *(&local6);
frost$core$MutableString* $tmp1738 = *(&local7);
frost$core$String* $tmp1739 = frost$core$MutableString$finish$R$frost$core$String($tmp1738);
org$frostlang$frostc$CCodeGenerator$MethodShim$init$frost$core$String$frost$core$String($tmp1736, $tmp1737, $tmp1739);
*(&local19) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1740 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1740));
*(&local19) = $tmp1736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
// line 506
frost$collections$IdentityMap** $tmp1741 = &param0->methodShims;
frost$collections$IdentityMap* $tmp1742 = *$tmp1741;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1743 = *(&local19);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp1742, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp1743));
// line 507
frost$io$IndentedOutputStream** $tmp1744 = &param0->shims;
frost$io$IndentedOutputStream* $tmp1745 = *$tmp1744;
frost$io$MemoryOutputStream* $tmp1746 = *(&local4);
frost$core$String* $tmp1747 = frost$io$MemoryOutputStream$finish$R$frost$core$String($tmp1746);
$fn1749 $tmp1748 = ($fn1749) ((frost$io$OutputStream*) $tmp1745)->$class->vtable[17];
frost$core$Error* $tmp1750 = $tmp1748(((frost$io$OutputStream*) $tmp1745), $tmp1747);
if ($tmp1750 == NULL) goto block75; else goto block76;
block76:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
*(&local1) = $tmp1750;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1751 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
*(&local19) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$collections$Array* $tmp1752 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1753 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1754 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1755 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1756 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1757 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1757));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1758 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1759 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1760 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block75:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
// line 508
frost$io$IndentedOutputStream* $tmp1761 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
frost$io$IndentedOutputStream** $tmp1762 = &param0->out;
frost$io$IndentedOutputStream* $tmp1763 = *$tmp1762;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
frost$io$IndentedOutputStream** $tmp1764 = &param0->out;
*$tmp1764 = $tmp1761;
// line 509
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1765 = *(&local19);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1766 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
*(&local19) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$collections$Array* $tmp1767 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1768 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1769 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1770 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1771 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1772 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1773 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1774 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1775 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Error* $tmp1776 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
*(&local1) = ((frost$core$Error*) NULL);
*(&local0) = $tmp1765;
goto block1;
block4:;
// line 512
frost$core$Bit $tmp1777 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1778 = $tmp1777.value;
if ($tmp1778) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp1779 = (frost$core$Int64) {512};
frost$core$Error* $tmp1780 = *(&local1);
$fn1782 $tmp1781 = ($fn1782) ((frost$core$Object*) $tmp1780)->$class->vtable[0];
frost$core$String* $tmp1783 = $tmp1781(((frost$core$Object*) $tmp1780));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1784, $tmp1779, $tmp1783);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
abort(); // unreachable
block77:;
// line 513
goto block79;
block79:;
goto block79;
block80:;
goto block5;
block5:;
frost$core$Error* $tmp1785 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1785));
*(&local1) = ((frost$core$Error*) NULL);
goto block81;
block81:;
block1:;
frost$io$IndentedOutputStream** $tmp1786 = &param0->out;
frost$io$IndentedOutputStream* $tmp1787 = *$tmp1786;
bool $tmp1788 = $tmp1787 == $tmp1176;
frost$core$Bit $tmp1789 = frost$core$Bit$init$builtin_bit($tmp1788);
bool $tmp1790 = $tmp1789.value;
if ($tmp1790) goto block2; else goto block3;
block2:;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1791 = *(&local0);
return $tmp1791;
block3:;
frost$core$Int64 $tmp1792 = (frost$core$Int64) {437};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1793, $tmp1792, &$s1794);
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
// line 518
*(&local0) = ((frost$core$Error*) NULL);
// line 519
frost$core$Weak** $tmp1795 = &param0->compiler;
frost$core$Weak* $tmp1796 = *$tmp1795;
frost$core$Object* $tmp1797 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1796);
org$frostlang$frostc$Type** $tmp1798 = &param1->type;
org$frostlang$frostc$Type* $tmp1799 = *$tmp1798;
frost$collections$HashSet* $tmp1800 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(((org$frostlang$frostc$Compiler*) $tmp1797), $tmp1799);
*(&local1) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
frost$collections$HashSet* $tmp1801 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
*(&local1) = $tmp1800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
frost$core$Frost$unref$frost$core$Object$Q($tmp1797);
// line 520
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1802));
frost$core$String* $tmp1803 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
*(&local2) = &$s1804;
// line 521
frost$collections$HashSet* $tmp1805 = *(&local1);
ITable* $tmp1806 = ((frost$collections$Iterable*) $tmp1805)->$class->itable;
while ($tmp1806->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1806 = $tmp1806->next;
}
$fn1808 $tmp1807 = $tmp1806->methods[0];
frost$collections$Iterator* $tmp1809 = $tmp1807(((frost$collections$Iterable*) $tmp1805));
goto block3;
block3:;
ITable* $tmp1810 = $tmp1809->$class->itable;
while ($tmp1810->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1810 = $tmp1810->next;
}
$fn1812 $tmp1811 = $tmp1810->methods[0];
frost$core$Bit $tmp1813 = $tmp1811($tmp1809);
bool $tmp1814 = $tmp1813.value;
if ($tmp1814) goto block5; else goto block4;
block4:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1815 = $tmp1809->$class->itable;
while ($tmp1815->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1815 = $tmp1815->next;
}
$fn1817 $tmp1816 = $tmp1815->methods[1];
frost$core$Object* $tmp1818 = $tmp1816($tmp1809);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1818)));
org$frostlang$frostc$Type* $tmp1819 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp1818);
// line 522
frost$core$Weak** $tmp1820 = &param0->compiler;
frost$core$Weak* $tmp1821 = *$tmp1820;
frost$core$Object* $tmp1822 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1821);
org$frostlang$frostc$Type* $tmp1823 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1824 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1822), $tmp1823);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
org$frostlang$frostc$ClassDecl* $tmp1825 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
*(&local4) = $tmp1824;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
frost$core$Frost$unref$frost$core$Object$Q($tmp1822);
// line 523
org$frostlang$frostc$ClassDecl* $tmp1826 = *(&local4);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1827 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp1826);
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1828 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
*(&local5) = $tmp1827;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
// line 524
frost$core$Weak** $tmp1829 = &param0->compiler;
frost$core$Weak* $tmp1830 = *$tmp1829;
frost$core$Object* $tmp1831 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1830);
org$frostlang$frostc$Type* $tmp1832 = *(&local3);
frost$collections$ListView* $tmp1833 = org$frostlang$frostc$Compiler$interfaceMethods$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1831), param1, $tmp1832);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
frost$collections$ListView* $tmp1834 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
*(&local6) = $tmp1833;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
frost$core$Frost$unref$frost$core$Object$Q($tmp1831);
// line 525
frost$core$String** $tmp1835 = &param1->name;
frost$core$String* $tmp1836 = *$tmp1835;
frost$core$String* $tmp1837 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1836);
frost$core$String* $tmp1838 = frost$core$String$get_asString$R$frost$core$String($tmp1837);
frost$core$String* $tmp1839 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1838, &$s1840);
org$frostlang$frostc$ClassDecl* $tmp1841 = *(&local4);
frost$core$String** $tmp1842 = &$tmp1841->name;
frost$core$String* $tmp1843 = *$tmp1842;
frost$core$String* $tmp1844 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1843);
frost$core$String* $tmp1845 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1839, $tmp1844);
frost$core$String* $tmp1846 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1845, &$s1847);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
frost$core$String* $tmp1848 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
*(&local7) = $tmp1846;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
// line 526
frost$core$MutableString* $tmp1849 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp1850 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1851 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1850);
frost$core$String* $tmp1852 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1853, $tmp1851);
frost$core$String* $tmp1854 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1852, &$s1855);
frost$collections$ListView* $tmp1856 = *(&local6);
ITable* $tmp1857 = ((frost$collections$CollectionView*) $tmp1856)->$class->itable;
while ($tmp1857->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1857 = $tmp1857->next;
}
$fn1859 $tmp1858 = $tmp1857->methods[0];
frost$core$Int64 $tmp1860 = $tmp1858(((frost$collections$CollectionView*) $tmp1856));
frost$core$Int64$wrapper* $tmp1861;
$tmp1861 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1861->value = $tmp1860;
frost$core$String* $tmp1862 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1863, ((frost$core$Object*) $tmp1861));
frost$core$String* $tmp1864 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1862, &$s1865);
frost$core$String* $tmp1866 = *(&local7);
frost$core$String* $tmp1867 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1864, $tmp1866);
frost$core$String* $tmp1868 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1867, &$s1869);
frost$core$String* $tmp1870 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1854, $tmp1868);
org$frostlang$frostc$Type* $tmp1871 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1872 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1871);
frost$core$String* $tmp1873 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1874, $tmp1872);
frost$core$String* $tmp1875 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1873, &$s1876);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1877 = *(&local5);
frost$core$String** $tmp1878 = &$tmp1877->name;
frost$core$String* $tmp1879 = *$tmp1878;
frost$core$String* $tmp1880 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1875, $tmp1879);
frost$core$String* $tmp1881 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1880, &$s1882);
frost$core$String* $tmp1883 = *(&local2);
frost$core$String* $tmp1884 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1881, $tmp1883);
frost$core$String* $tmp1885 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1884, &$s1886);
frost$core$String* $tmp1887 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1870, $tmp1885);
frost$core$MutableString$init$frost$core$String($tmp1849, $tmp1887);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
frost$core$MutableString* $tmp1888 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
*(&local8) = $tmp1849;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
// line 529
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1889));
frost$core$String* $tmp1890 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
*(&local9) = &$s1891;
// line 530
frost$collections$ListView* $tmp1892 = *(&local6);
ITable* $tmp1893 = ((frost$collections$Iterable*) $tmp1892)->$class->itable;
while ($tmp1893->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1893 = $tmp1893->next;
}
$fn1895 $tmp1894 = $tmp1893->methods[0];
frost$collections$Iterator* $tmp1896 = $tmp1894(((frost$collections$Iterable*) $tmp1892));
goto block6;
block6:;
ITable* $tmp1897 = $tmp1896->$class->itable;
while ($tmp1897->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1897 = $tmp1897->next;
}
$fn1899 $tmp1898 = $tmp1897->methods[0];
frost$core$Bit $tmp1900 = $tmp1898($tmp1896);
bool $tmp1901 = $tmp1900.value;
if ($tmp1901) goto block8; else goto block7;
block7:;
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1902 = $tmp1896->$class->itable;
while ($tmp1902->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1902 = $tmp1902->next;
}
$fn1904 $tmp1903 = $tmp1902->methods[1];
frost$core$Object* $tmp1905 = $tmp1903($tmp1896);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1905)));
org$frostlang$frostc$MethodDecl* $tmp1906 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) $tmp1905);
// line 531
frost$core$MutableString* $tmp1907 = *(&local8);
frost$core$String* $tmp1908 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp1907, $tmp1908);
// line 532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1909));
frost$core$String* $tmp1910 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
*(&local9) = &$s1911;
// line 533
org$frostlang$frostc$MethodDecl* $tmp1912 = *(&local10);
org$frostlang$frostc$Annotations** $tmp1913 = &$tmp1912->annotations;
org$frostlang$frostc$Annotations* $tmp1914 = *$tmp1913;
frost$core$Bit $tmp1915 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp1914);
bool $tmp1916 = $tmp1915.value;
if ($tmp1916) goto block9; else goto block11;
block9:;
// line 534
frost$core$MutableString* $tmp1917 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1917, &$s1918);
goto block10;
block11:;
// line 1
// line 537
frost$core$MutableString* $tmp1919 = *(&local8);
org$frostlang$frostc$MethodDecl* $tmp1920 = *(&local10);
frost$core$String* $tmp1921 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp1920);
frost$core$MutableString$append$frost$core$String($tmp1919, $tmp1921);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
goto block10;
block10:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1905);
org$frostlang$frostc$MethodDecl* $tmp1922 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
// line 540
frost$core$MutableString* $tmp1923 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1923, &$s1924);
// line 541
frost$io$MemoryOutputStream** $tmp1925 = &param0->types;
frost$io$MemoryOutputStream* $tmp1926 = *$tmp1925;
frost$core$MutableString* $tmp1927 = *(&local8);
frost$core$String* $tmp1928 = frost$core$MutableString$finish$R$frost$core$String($tmp1927);
$fn1930 $tmp1929 = ($fn1930) ((frost$io$OutputStream*) $tmp1926)->$class->vtable[19];
frost$core$Error* $tmp1931 = $tmp1929(((frost$io$OutputStream*) $tmp1926), $tmp1928);
if ($tmp1931 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
*(&local0) = $tmp1931;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
frost$core$String* $tmp1932 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1933 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1934 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1935 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1936 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1937 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1818);
org$frostlang$frostc$Type* $tmp1938 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
frost$core$String* $tmp1939 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1940 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
*(&local1) = ((frost$collections$HashSet*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
// line 542
frost$core$String* $tmp1941 = *(&local7);
frost$core$String* $tmp1942 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1943, $tmp1941);
frost$core$String* $tmp1944 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1942, &$s1945);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
frost$core$String* $tmp1946 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
*(&local2) = $tmp1944;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1942));
frost$core$String* $tmp1947 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1948 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1949 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1950 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1951 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1951));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1952 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1818);
org$frostlang$frostc$Type* $tmp1953 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
// line 544
frost$core$String* $tmp1954 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
frost$core$String* $tmp1955 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1955));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1956 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
*(&local1) = ((frost$collections$HashSet*) NULL);
frost$core$Error* $tmp1957 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1957));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp1954;
block1:;
// line 547
frost$core$Bit $tmp1958 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1959 = $tmp1958.value;
if ($tmp1959) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp1960 = (frost$core$Int64) {547};
frost$core$Error* $tmp1961 = *(&local0);
$fn1963 $tmp1962 = ($fn1963) ((frost$core$Object*) $tmp1961)->$class->vtable[0];
frost$core$String* $tmp1964 = $tmp1962(((frost$core$Object*) $tmp1961));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1965, $tmp1960, $tmp1964);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
abort(); // unreachable
block14:;
// line 548
goto block16;
block16:;
goto block16;
block17:;
goto block2;
block2:;
frost$core$Error* $tmp1966 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
*(&local0) = ((frost$core$Error*) NULL);
goto block18;
block18:;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 553
frost$core$Weak** $tmp1967 = &param0->hCodeGen;
frost$core$Weak* $tmp1968 = *$tmp1967;
frost$core$Object* $tmp1969 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1968);
frost$core$Bit $tmp1970 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$HCodeGenerator*) $tmp1969), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp1969);
return $tmp1970;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$CCodeGenerator$MethodShim* local4 = NULL;
// line 557
frost$core$Weak** $tmp1971 = &param0->compiler;
frost$core$Weak* $tmp1972 = *$tmp1971;
frost$core$Object* $tmp1973 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1972);
frost$core$Bit $tmp1974 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1973), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp1973);
// line 558
frost$core$Weak** $tmp1975 = &param1->owner;
frost$core$Weak* $tmp1976 = *$tmp1975;
frost$core$Object* $tmp1977 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1976);
frost$core$Bit $tmp1978 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp1977));
bool $tmp1979 = $tmp1978.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1977);
if ($tmp1979) goto block1; else goto block2;
block1:;
// line 559
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param1);
goto block2;
block2:;
// line 561
*(&local0) = ((frost$core$String*) NULL);
// line 562
frost$core$Weak** $tmp1980 = &param0->compiler;
frost$core$Weak* $tmp1981 = *$tmp1980;
frost$core$Object* $tmp1982 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1981);
frost$core$Weak** $tmp1983 = &param1->owner;
frost$core$Weak* $tmp1984 = *$tmp1983;
frost$core$Object* $tmp1985 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1984);
org$frostlang$frostc$Type** $tmp1986 = &((org$frostlang$frostc$ClassDecl*) $tmp1985)->type;
org$frostlang$frostc$Type* $tmp1987 = *$tmp1986;
frost$core$Bit $tmp1988 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp1989 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp1982), param1, $tmp1987, $tmp1988);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
org$frostlang$frostc$Type* $tmp1990 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
*(&local1) = $tmp1989;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
frost$core$Frost$unref$frost$core$Object$Q($tmp1985);
frost$core$Frost$unref$frost$core$Object$Q($tmp1982);
// line 563
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
// line 564
frost$core$Weak** $tmp1991 = &param0->compiler;
frost$core$Weak* $tmp1992 = *$tmp1991;
frost$core$Object* $tmp1993 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1992);
frost$core$Weak** $tmp1994 = &param1->owner;
frost$core$Weak* $tmp1995 = *$tmp1994;
frost$core$Object* $tmp1996 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1995);
frost$core$Bit $tmp1997 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1993), ((org$frostlang$frostc$ClassDecl*) $tmp1996));
bool $tmp1998 = $tmp1997.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1996);
frost$core$Frost$unref$frost$core$Object$Q($tmp1993);
if ($tmp1998) goto block3; else goto block5;
block3:;
// line 565
org$frostlang$frostc$Type* $tmp1999 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
org$frostlang$frostc$Type* $tmp2000 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
*(&local2) = $tmp1999;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
goto block4;
block5:;
// line 1
// line 568
frost$core$Weak** $tmp2001 = &param1->owner;
frost$core$Weak* $tmp2002 = *$tmp2001;
frost$core$Object* $tmp2003 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2002);
org$frostlang$frostc$Type** $tmp2004 = &((org$frostlang$frostc$ClassDecl*) $tmp2003)->type;
org$frostlang$frostc$Type* $tmp2005 = *$tmp2004;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
org$frostlang$frostc$Type* $tmp2006 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
*(&local2) = $tmp2005;
frost$core$Frost$unref$frost$core$Object$Q($tmp2003);
goto block4;
block4:;
// line 570
frost$core$Weak** $tmp2007 = &param0->compiler;
frost$core$Weak* $tmp2008 = *$tmp2007;
frost$core$Object* $tmp2009 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2008);
org$frostlang$frostc$Type* $tmp2010 = *(&local2);
org$frostlang$frostc$Type* $tmp2011 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp2009), param1, $tmp2010);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
org$frostlang$frostc$Type* $tmp2012 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
*(&local3) = $tmp2011;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
frost$core$Frost$unref$frost$core$Object$Q($tmp2009);
// line 571
org$frostlang$frostc$Type* $tmp2013 = *(&local1);
org$frostlang$frostc$Type* $tmp2014 = *(&local3);
ITable* $tmp2015 = ((frost$core$Equatable*) $tmp2013)->$class->itable;
while ($tmp2015->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2015 = $tmp2015->next;
}
$fn2017 $tmp2016 = $tmp2015->methods[1];
frost$core$Bit $tmp2018 = $tmp2016(((frost$core$Equatable*) $tmp2013), ((frost$core$Equatable*) $tmp2014));
bool $tmp2019 = $tmp2018.value;
if ($tmp2019) goto block6; else goto block8;
block6:;
// line 572
org$frostlang$frostc$Type* $tmp2020 = *(&local3);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp2021 = org$frostlang$frostc$CCodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$MethodShim(param0, param1, $tmp2020);
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp2022 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
*(&local4) = $tmp2021;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
// line 573
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp2023 = *(&local4);
frost$core$String** $tmp2024 = &$tmp2023->name;
frost$core$String* $tmp2025 = *$tmp2024;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2025));
frost$core$String* $tmp2026 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2026));
*(&local0) = $tmp2025;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp2027 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block7;
block8:;
// line 1
// line 576
frost$core$String* $tmp2028 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
frost$core$String* $tmp2029 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
*(&local0) = $tmp2028;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
goto block7;
block7:;
// line 578
frost$core$String* $tmp2030 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
org$frostlang$frostc$Type* $tmp2031 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2032 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2033 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2034 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
*(&local0) = ((frost$core$String*) NULL);
return $tmp2030;

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
// line 582
*(&local0) = ((frost$core$Error*) NULL);
// line 583
frost$collections$HashMap** $tmp2035 = &param0->classConstants;
frost$collections$HashMap* $tmp2036 = *$tmp2035;
frost$core$String** $tmp2037 = &param1->name;
frost$core$String* $tmp2038 = *$tmp2037;
frost$core$Object* $tmp2039 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2036, ((frost$collections$Key*) $tmp2038));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2039)));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2040 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2039);
frost$core$Frost$unref$frost$core$Object$Q($tmp2039);
// line 584
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2041 = *(&local1);
frost$core$Bit $tmp2042 = frost$core$Bit$init$builtin_bit($tmp2041 == NULL);
bool $tmp2043 = $tmp2042.value;
if ($tmp2043) goto block3; else goto block4;
block3:;
// line 585
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, param1);
// line 586
frost$core$Weak** $tmp2044 = &param0->compiler;
frost$core$Weak* $tmp2045 = *$tmp2044;
frost$core$Object* $tmp2046 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2045);
frost$core$Bit $tmp2047 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp2046), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp2046);
// line 587
*(&local2) = ((frost$core$String*) NULL);
// line 588
frost$core$Bit $tmp2048 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, param1);
bool $tmp2049 = $tmp2048.value;
if ($tmp2049) goto block5; else goto block6;
block5:;
// line 589
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2050 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
org$frostlang$frostc$Type** $tmp2051 = &param1->type;
org$frostlang$frostc$Type* $tmp2052 = *$tmp2051;
frost$core$String** $tmp2053 = &((org$frostlang$frostc$Symbol*) $tmp2052)->name;
frost$core$String* $tmp2054 = *$tmp2053;
frost$core$String* $tmp2055 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2054);
frost$core$String* $tmp2056 = frost$core$String$get_asString$R$frost$core$String($tmp2055);
frost$core$String* $tmp2057 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2056, &$s2058);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2050, $tmp2057, &$s2059);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2060 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
*(&local1) = $tmp2050;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
// line 591
frost$collections$HashMap** $tmp2061 = &param0->classConstants;
frost$collections$HashMap* $tmp2062 = *$tmp2061;
frost$core$String** $tmp2063 = &param1->name;
frost$core$String* $tmp2064 = *$tmp2063;
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2065 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2062, ((frost$collections$Key*) $tmp2064), ((frost$core$Object*) $tmp2065));
// line 592
frost$collections$HashMap** $tmp2066 = &param0->classConstants;
frost$collections$HashMap* $tmp2067 = *$tmp2066;
frost$core$String** $tmp2068 = &param1->name;
frost$core$String* $tmp2069 = *$tmp2068;
frost$core$Object* $tmp2070 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2067, ((frost$collections$Key*) $tmp2069));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2070)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2070);
frost$core$String* $tmp2071 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2072 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp2073 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
*(&local0) = ((frost$core$Error*) NULL);
return ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2070);
block6:;
// line 594
frost$core$Weak** $tmp2074 = &param0->compiler;
frost$core$Weak* $tmp2075 = *$tmp2074;
frost$core$Object* $tmp2076 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2075);
frost$collections$Stack** $tmp2077 = &((org$frostlang$frostc$Compiler*) $tmp2076)->currentClass;
frost$collections$Stack* $tmp2078 = *$tmp2077;
frost$collections$Stack$push$frost$collections$Stack$T($tmp2078, ((frost$core$Object*) param1));
frost$core$Frost$unref$frost$core$Object$Q($tmp2076);
// line 595
frost$core$Weak** $tmp2079 = &param0->compiler;
frost$core$Weak* $tmp2080 = *$tmp2079;
frost$core$Object* $tmp2081 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2080);
frost$collections$ListView* $tmp2082 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2081), param1);
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
frost$collections$ListView* $tmp2083 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
*(&local3) = $tmp2082;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
frost$core$Frost$unref$frost$core$Object$Q($tmp2081);
// line 596
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2084 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
org$frostlang$frostc$Type** $tmp2085 = &param1->type;
org$frostlang$frostc$Type* $tmp2086 = *$tmp2085;
frost$core$String** $tmp2087 = &((org$frostlang$frostc$Symbol*) $tmp2086)->name;
frost$core$String* $tmp2088 = *$tmp2087;
frost$core$String* $tmp2089 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2088);
frost$core$String* $tmp2090 = frost$core$String$get_asString$R$frost$core$String($tmp2089);
frost$core$String* $tmp2091 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2090, &$s2092);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2084, $tmp2091, &$s2093);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2094 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
*(&local1) = $tmp2084;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
// line 597
frost$collections$HashMap** $tmp2095 = &param0->classConstants;
frost$collections$HashMap* $tmp2096 = *$tmp2095;
frost$core$String** $tmp2097 = &param1->name;
frost$core$String* $tmp2098 = *$tmp2097;
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2099 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2096, ((frost$collections$Key*) $tmp2098), ((frost$core$Object*) $tmp2099));
// line 598
*(&local4) = ((frost$core$String*) NULL);
// line 599
org$frostlang$frostc$Type** $tmp2100 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp2101 = *$tmp2100;
frost$core$Bit $tmp2102 = frost$core$Bit$init$builtin_bit($tmp2101 != NULL);
bool $tmp2103 = $tmp2102.value;
if ($tmp2103) goto block7; else goto block9;
block7:;
// line 600
frost$core$Weak** $tmp2104 = &param0->compiler;
frost$core$Weak* $tmp2105 = *$tmp2104;
frost$core$Object* $tmp2106 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2105);
org$frostlang$frostc$Type** $tmp2107 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp2108 = *$tmp2107;
org$frostlang$frostc$ClassDecl* $tmp2109 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2106), $tmp2108);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2110 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2109);
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2111 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
*(&local5) = $tmp2110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
frost$core$Frost$unref$frost$core$Object$Q($tmp2106);
// line 601
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2112 = *(&local5);
frost$core$String** $tmp2113 = &$tmp2112->name;
frost$core$String* $tmp2114 = *$tmp2113;
frost$core$String* $tmp2115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2116, $tmp2114);
frost$core$String* $tmp2117 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2115, &$s2118);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
frost$core$String* $tmp2119 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
*(&local4) = $tmp2117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2120 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block8;
block9:;
// line 1
// line 604
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2121));
frost$core$String* $tmp2122 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
*(&local4) = &$s2123;
goto block8;
block8:;
// line 606
frost$core$Weak** $tmp2124 = &param0->compiler;
frost$core$Weak* $tmp2125 = *$tmp2124;
frost$core$Object* $tmp2126 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2125);
org$frostlang$frostc$Type* $tmp2127 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2128 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2126), $tmp2127);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2129 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2128);
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2130 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
*(&local6) = $tmp2129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
frost$core$Frost$unref$frost$core$Object$Q($tmp2126);
// line 607
frost$core$String** $tmp2131 = &param1->name;
frost$core$String* $tmp2132 = *$tmp2131;
frost$core$String* $tmp2133 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp2132);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
frost$core$String* $tmp2134 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
*(&local7) = $tmp2133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
// line 608
frost$core$String* $tmp2135 = *(&local7);
frost$core$Bit $tmp2136 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2135, &$s2137);
bool $tmp2138 = $tmp2136.value;
if ($tmp2138) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2139 = (frost$core$Int64) {608};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2140, $tmp2139);
abort(); // unreachable
block10:;
// line 609
frost$core$MutableString* $tmp2141 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp2142 = *(&local7);
frost$core$Int64 $tmp2143 = (frost$core$Int64) {1};
frost$core$Bit $tmp2144 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp2145 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp2143, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp2144);
frost$core$String* $tmp2146 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp2142, $tmp2145);
frost$core$String* $tmp2147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2148, $tmp2146);
frost$core$String* $tmp2149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2147, &$s2150);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2151 = *(&local1);
frost$core$String** $tmp2152 = &$tmp2151->name;
frost$core$String* $tmp2153 = *$tmp2152;
frost$core$String* $tmp2154 = frost$core$String$get_asString$R$frost$core$String($tmp2153);
frost$core$String* $tmp2155 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2154, &$s2156);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2157 = *(&local1);
frost$core$String** $tmp2158 = &$tmp2157->name;
frost$core$String* $tmp2159 = *$tmp2158;
frost$core$String* $tmp2160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2155, $tmp2159);
frost$core$String* $tmp2161 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2160, &$s2162);
frost$core$String* $tmp2163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2149, $tmp2161);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2164 = *(&local6);
frost$core$String** $tmp2165 = &$tmp2164->name;
frost$core$String* $tmp2166 = *$tmp2165;
frost$core$String* $tmp2167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2168, $tmp2166);
frost$core$String* $tmp2169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2167, &$s2170);
frost$core$Int64 $tmp2171 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp2172;
$tmp2172 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2172->value = $tmp2171;
frost$core$String* $tmp2173 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2169, ((frost$core$Object*) $tmp2172));
frost$core$String* $tmp2174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2173, &$s2175);
frost$core$String* $tmp2176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2163, $tmp2174);
frost$core$String* $tmp2177 = *(&local7);
frost$core$String* $tmp2178 = frost$core$String$get_asString$R$frost$core$String($tmp2177);
frost$core$String* $tmp2179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2178, &$s2180);
frost$core$String* $tmp2181 = *(&local4);
frost$core$String* $tmp2182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2179, $tmp2181);
frost$core$String* $tmp2183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2182, &$s2184);
frost$core$String* $tmp2185 = org$frostlang$frostc$CCodeGenerator$getITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp2186 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2183, $tmp2185);
frost$core$String* $tmp2187 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2186, &$s2188);
frost$core$String* $tmp2189 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2176, $tmp2187);
frost$core$MutableString$init$frost$core$String($tmp2141, $tmp2189);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
frost$core$MutableString* $tmp2190 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
*(&local8) = $tmp2141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
// line 613
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2191));
frost$core$String* $tmp2192 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
*(&local9) = &$s2193;
// line 614
frost$collections$ListView* $tmp2194 = *(&local3);
ITable* $tmp2195 = ((frost$collections$Iterable*) $tmp2194)->$class->itable;
while ($tmp2195->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2195 = $tmp2195->next;
}
$fn2197 $tmp2196 = $tmp2195->methods[0];
frost$collections$Iterator* $tmp2198 = $tmp2196(((frost$collections$Iterable*) $tmp2194));
goto block12;
block12:;
ITable* $tmp2199 = $tmp2198->$class->itable;
while ($tmp2199->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2199 = $tmp2199->next;
}
$fn2201 $tmp2200 = $tmp2199->methods[0];
frost$core$Bit $tmp2202 = $tmp2200($tmp2198);
bool $tmp2203 = $tmp2202.value;
if ($tmp2203) goto block14; else goto block13;
block13:;
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp2204 = $tmp2198->$class->itable;
while ($tmp2204->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2204 = $tmp2204->next;
}
$fn2206 $tmp2205 = $tmp2204->methods[1];
frost$core$Object* $tmp2207 = $tmp2205($tmp2198);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2207)));
org$frostlang$frostc$MethodDecl* $tmp2208 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) $tmp2207);
// line 615
frost$core$MutableString* $tmp2209 = *(&local8);
frost$core$String* $tmp2210 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp2209, $tmp2210);
// line 616
org$frostlang$frostc$MethodDecl* $tmp2211 = *(&local10);
org$frostlang$frostc$Annotations** $tmp2212 = &$tmp2211->annotations;
org$frostlang$frostc$Annotations* $tmp2213 = *$tmp2212;
frost$core$Bit $tmp2214 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp2213);
bool $tmp2215 = $tmp2214.value;
if ($tmp2215) goto block15; else goto block17;
block15:;
// line 617
frost$core$MutableString* $tmp2216 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp2216, &$s2217);
goto block16;
block17:;
// line 1
// line 620
frost$core$MutableString* $tmp2218 = *(&local8);
org$frostlang$frostc$MethodDecl* $tmp2219 = *(&local10);
frost$core$String* $tmp2220 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp2219);
frost$core$MutableString$append$frost$core$String($tmp2218, $tmp2220);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
goto block16;
block16:;
// line 622
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2221));
frost$core$String* $tmp2222 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
*(&local9) = &$s2223;
frost$core$Frost$unref$frost$core$Object$Q($tmp2207);
org$frostlang$frostc$MethodDecl* $tmp2224 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
// line 624
frost$core$MutableString* $tmp2225 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp2225, &$s2226);
// line 625
frost$io$MemoryOutputStream** $tmp2227 = &param0->types;
frost$io$MemoryOutputStream* $tmp2228 = *$tmp2227;
frost$core$MutableString* $tmp2229 = *(&local8);
frost$core$String* $tmp2230 = frost$core$MutableString$finish$R$frost$core$String($tmp2229);
$fn2232 $tmp2231 = ($fn2232) ((frost$io$OutputStream*) $tmp2228)->$class->vtable[19];
frost$core$Error* $tmp2233 = $tmp2231(((frost$io$OutputStream*) $tmp2228), $tmp2230);
if ($tmp2233 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
*(&local0) = $tmp2233;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
frost$core$String* $tmp2234 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2235 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2236 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2237 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2238 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
*(&local4) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp2239 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp2240 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
// line 626
frost$core$Weak** $tmp2242 = &param0->compiler;
frost$core$Weak* $tmp2243 = *$tmp2242;
frost$core$Object* $tmp2244 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2243);
frost$collections$Stack** $tmp2245 = &((org$frostlang$frostc$Compiler*) $tmp2244)->currentClass;
frost$collections$Stack* $tmp2246 = *$tmp2245;
frost$core$Int64 $tmp2247 = (frost$core$Int64) {0};
frost$core$Object* $tmp2248 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2246, $tmp2247);
bool $tmp2249 = ((org$frostlang$frostc$ClassDecl*) $tmp2248) == param1;
frost$core$Bit $tmp2250 = frost$core$Bit$init$builtin_bit($tmp2249);
bool $tmp2251 = $tmp2250.value;
if ($tmp2251) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp2252 = (frost$core$Int64) {626};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2253, $tmp2252);
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2248);
frost$core$Frost$unref$frost$core$Object$Q($tmp2244);
// line 627
frost$core$Weak** $tmp2254 = &param0->compiler;
frost$core$Weak* $tmp2255 = *$tmp2254;
frost$core$Object* $tmp2256 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2255);
frost$collections$Stack** $tmp2257 = &((org$frostlang$frostc$Compiler*) $tmp2256)->currentClass;
frost$collections$Stack* $tmp2258 = *$tmp2257;
frost$core$Object* $tmp2259 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2258);
frost$core$Frost$unref$frost$core$Object$Q($tmp2259);
frost$core$Frost$unref$frost$core$Object$Q($tmp2256);
frost$core$String* $tmp2260 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2261 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2262 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2263 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2263));
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2264 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
*(&local4) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp2265 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp2266 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block4:;
// line 629
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2267 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2268 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp2269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2267;
block1:;
// line 632
frost$core$Bit $tmp2270 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2271 = $tmp2270.value;
if ($tmp2271) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2272 = (frost$core$Int64) {632};
frost$core$Error* $tmp2273 = *(&local0);
$fn2275 $tmp2274 = ($fn2275) ((frost$core$Object*) $tmp2273)->$class->vtable[0];
frost$core$String* $tmp2276 = $tmp2274(((frost$core$Object*) $tmp2273));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2277, $tmp2272, $tmp2276);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
abort(); // unreachable
block22:;
// line 633
goto block24;
block24:;
goto block24;
block25:;
goto block2;
block2:;
frost$core$Error* $tmp2278 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
*(&local0) = ((frost$core$Error*) NULL);
goto block26;
block26:;

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
// line 638
*(&local0) = ((frost$core$Error*) NULL);
// line 639
frost$core$String** $tmp2279 = &param1->name;
frost$core$String* $tmp2280 = *$tmp2279;
frost$core$String* $tmp2281 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2280);
frost$core$String* $tmp2282 = frost$core$String$get_asString$R$frost$core$String($tmp2281);
frost$core$String* $tmp2283 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2282, &$s2284);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
frost$core$String* $tmp2285 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
*(&local1) = $tmp2283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
// line 640
frost$collections$HashMap** $tmp2286 = &param0->classConstants;
frost$collections$HashMap* $tmp2287 = *$tmp2286;
frost$core$String* $tmp2288 = *(&local1);
frost$core$Object* $tmp2289 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2287, ((frost$collections$Key*) $tmp2288));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2289)));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2290 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2289);
frost$core$Frost$unref$frost$core$Object$Q($tmp2289);
// line 641
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2291 = *(&local2);
frost$core$Bit $tmp2292 = frost$core$Bit$init$builtin_bit($tmp2291 == NULL);
bool $tmp2293 = $tmp2292.value;
if ($tmp2293) goto block3; else goto block4;
block3:;
// line 642
frost$core$Bit $tmp2294 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, param1);
bool $tmp2295 = $tmp2294.value;
if ($tmp2295) goto block5; else goto block7;
block5:;
// line 643
org$frostlang$frostc$Type* $tmp2296 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp2297 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp2296);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2296));
// line 644
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2298));
frost$core$String* $tmp2299 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
*(&local3) = &$s2300;
// line 645
frost$io$MemoryOutputStream** $tmp2301 = &param0->types;
frost$io$MemoryOutputStream* $tmp2302 = *$tmp2301;
frost$core$String* $tmp2303 = *(&local1);
frost$core$String* $tmp2304 = frost$core$String$get_asString$R$frost$core$String($tmp2303);
frost$core$String* $tmp2305 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2304, &$s2306);
frost$core$String* $tmp2307 = *(&local3);
frost$core$String* $tmp2308 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2305, $tmp2307);
frost$core$String* $tmp2309 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2308, &$s2310);
$fn2312 $tmp2311 = ($fn2312) ((frost$io$OutputStream*) $tmp2302)->$class->vtable[19];
frost$core$Error* $tmp2313 = $tmp2311(((frost$io$OutputStream*) $tmp2302), $tmp2309);
if ($tmp2313 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
*(&local0) = $tmp2313;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
frost$core$String* $tmp2314 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2314));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2315 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2316 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
// line 646
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2317 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
frost$core$String* $tmp2318 = *(&local1);
frost$core$String* $tmp2319 = *(&local3);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2317, $tmp2318, $tmp2319);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2320 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
*(&local2) = $tmp2317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
frost$core$String* $tmp2321 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block7:;
// line 1
// line 649
frost$core$Weak** $tmp2322 = &param0->compiler;
frost$core$Weak* $tmp2323 = *$tmp2322;
frost$core$Object* $tmp2324 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2323);
org$frostlang$frostc$Type* $tmp2325 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2326 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2324), $tmp2325);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
org$frostlang$frostc$ClassDecl* $tmp2327 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
*(&local4) = $tmp2326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
frost$core$Frost$unref$frost$core$Object$Q($tmp2324);
// line 650
frost$core$Weak** $tmp2328 = &param0->compiler;
frost$core$Weak* $tmp2329 = *$tmp2328;
frost$core$Object* $tmp2330 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2329);
org$frostlang$frostc$ClassDecl* $tmp2331 = *(&local4);
frost$collections$ListView* $tmp2332 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2330), $tmp2331);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
frost$collections$ListView* $tmp2333 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
*(&local5) = $tmp2332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
frost$core$Frost$unref$frost$core$Object$Q($tmp2330);
// line 651
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2334 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
frost$core$String** $tmp2335 = &param1->name;
frost$core$String* $tmp2336 = *$tmp2335;
frost$core$String* $tmp2337 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2336);
frost$core$String* $tmp2338 = frost$core$String$get_asString$R$frost$core$String($tmp2337);
frost$core$String* $tmp2339 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2338, &$s2340);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2334, $tmp2339, &$s2341);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2334));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2342 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
*(&local2) = $tmp2334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2334));
// line 652
frost$core$Weak** $tmp2343 = &param0->compiler;
frost$core$Weak* $tmp2344 = *$tmp2343;
frost$core$Object* $tmp2345 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2344);
frost$collections$ListView* $tmp2346 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2345), param1);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
frost$collections$ListView* $tmp2347 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
*(&local6) = $tmp2346;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
frost$core$Frost$unref$frost$core$Object$Q($tmp2345);
// line 653
frost$core$Weak** $tmp2348 = &param0->compiler;
frost$core$Weak* $tmp2349 = *$tmp2348;
frost$core$Object* $tmp2350 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2349);
org$frostlang$frostc$Type** $tmp2351 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp2352 = *$tmp2351;
org$frostlang$frostc$ClassDecl* $tmp2353 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2350), $tmp2352);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2354 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2353);
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2354));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2355 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2355));
*(&local7) = $tmp2354;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2353));
frost$core$Frost$unref$frost$core$Object$Q($tmp2350);
// line 654
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2356 = *(&local7);
frost$core$String** $tmp2357 = &$tmp2356->name;
frost$core$String* $tmp2358 = *$tmp2357;
frost$core$String* $tmp2359 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2360, $tmp2358);
frost$core$String* $tmp2361 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2359, &$s2362);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
frost$core$String* $tmp2363 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
*(&local8) = $tmp2361;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
// line 655
frost$core$String* $tmp2364 = org$frostlang$frostc$CCodeGenerator$getWrapperITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(param0, param1);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
frost$core$String* $tmp2365 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2365));
*(&local9) = $tmp2364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
// line 656
frost$core$Weak** $tmp2366 = &param0->compiler;
frost$core$Weak* $tmp2367 = *$tmp2366;
frost$core$Object* $tmp2368 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2367);
org$frostlang$frostc$Type* $tmp2369 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2370 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2368), $tmp2369);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2371 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2370);
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2372 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
*(&local10) = $tmp2371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2369));
frost$core$Frost$unref$frost$core$Object$Q($tmp2368);
// line 657
frost$core$String** $tmp2373 = &param1->name;
frost$core$String* $tmp2374 = *$tmp2373;
frost$core$String* $tmp2375 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp2374);
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
frost$core$String* $tmp2376 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
*(&local11) = $tmp2375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
// line 658
frost$core$String* $tmp2377 = *(&local11);
frost$core$Bit $tmp2378 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2377, &$s2379);
bool $tmp2380 = $tmp2378.value;
if ($tmp2380) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2381 = (frost$core$Int64) {658};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2382, $tmp2381);
abort(); // unreachable
block10:;
// line 659
frost$core$MutableString* $tmp2383 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp2384 = *(&local11);
frost$core$Int64 $tmp2385 = (frost$core$Int64) {1};
frost$core$Bit $tmp2386 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp2387 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp2385, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp2386);
frost$core$String* $tmp2388 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp2384, $tmp2387);
frost$core$String* $tmp2389 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2390, $tmp2388);
frost$core$String* $tmp2391 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2389, &$s2392);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2393 = *(&local2);
frost$core$String** $tmp2394 = &$tmp2393->name;
frost$core$String* $tmp2395 = *$tmp2394;
frost$core$String* $tmp2396 = frost$core$String$get_asString$R$frost$core$String($tmp2395);
frost$core$String* $tmp2397 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2396, &$s2398);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2399 = *(&local2);
frost$core$String** $tmp2400 = &$tmp2399->name;
frost$core$String* $tmp2401 = *$tmp2400;
frost$core$String* $tmp2402 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2397, $tmp2401);
frost$core$String* $tmp2403 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2402, &$s2404);
frost$core$String* $tmp2405 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2391, $tmp2403);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2406 = *(&local10);
frost$core$String** $tmp2407 = &$tmp2406->name;
frost$core$String* $tmp2408 = *$tmp2407;
frost$core$String* $tmp2409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2410, $tmp2408);
frost$core$String* $tmp2411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2409, &$s2412);
frost$core$Int64 $tmp2413 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp2414;
$tmp2414 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2414->value = $tmp2413;
frost$core$String* $tmp2415 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2411, ((frost$core$Object*) $tmp2414));
frost$core$String* $tmp2416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2415, &$s2417);
frost$core$String* $tmp2418 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2405, $tmp2416);
frost$core$String* $tmp2419 = *(&local11);
frost$core$String* $tmp2420 = frost$core$String$get_asString$R$frost$core$String($tmp2419);
frost$core$String* $tmp2421 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2420, &$s2422);
frost$core$String* $tmp2423 = *(&local8);
frost$core$String* $tmp2424 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2421, $tmp2423);
frost$core$String* $tmp2425 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2424, &$s2426);
frost$core$String* $tmp2427 = *(&local9);
frost$core$String* $tmp2428 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2425, $tmp2427);
frost$core$String* $tmp2429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2428, &$s2430);
frost$core$String* $tmp2431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2418, $tmp2429);
frost$core$MutableString$init$frost$core$String($tmp2383, $tmp2431);
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2383));
frost$core$MutableString* $tmp2432 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
*(&local12) = $tmp2383;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2383));
// line 663
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2433));
frost$core$String* $tmp2434 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
*(&local13) = &$s2435;
// line 664
frost$core$Int64 $tmp2436 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2437 = *(&local5);
ITable* $tmp2438 = ((frost$collections$CollectionView*) $tmp2437)->$class->itable;
while ($tmp2438->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2438 = $tmp2438->next;
}
$fn2440 $tmp2439 = $tmp2438->methods[0];
frost$core$Int64 $tmp2441 = $tmp2439(((frost$collections$CollectionView*) $tmp2437));
frost$core$Bit $tmp2442 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2443 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2436, $tmp2441, $tmp2442);
frost$core$Int64 $tmp2444 = $tmp2443.min;
*(&local14) = $tmp2444;
frost$core$Int64 $tmp2445 = $tmp2443.max;
frost$core$Bit $tmp2446 = $tmp2443.inclusive;
bool $tmp2447 = $tmp2446.value;
frost$core$Int64 $tmp2448 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2449 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2448);
if ($tmp2447) goto block15; else goto block16;
block15:;
int64_t $tmp2450 = $tmp2444.value;
int64_t $tmp2451 = $tmp2445.value;
bool $tmp2452 = $tmp2450 <= $tmp2451;
frost$core$Bit $tmp2453 = (frost$core$Bit) {$tmp2452};
bool $tmp2454 = $tmp2453.value;
if ($tmp2454) goto block12; else goto block13;
block16:;
int64_t $tmp2455 = $tmp2444.value;
int64_t $tmp2456 = $tmp2445.value;
bool $tmp2457 = $tmp2455 < $tmp2456;
frost$core$Bit $tmp2458 = (frost$core$Bit) {$tmp2457};
bool $tmp2459 = $tmp2458.value;
if ($tmp2459) goto block12; else goto block13;
block12:;
// line 665
frost$core$MutableString* $tmp2460 = *(&local12);
frost$core$String* $tmp2461 = *(&local13);
frost$core$String* $tmp2462 = frost$core$String$get_asString$R$frost$core$String($tmp2461);
frost$core$String* $tmp2463 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2462, &$s2464);
frost$collections$ListView* $tmp2465 = *(&local6);
frost$core$Int64 $tmp2466 = *(&local14);
ITable* $tmp2467 = $tmp2465->$class->itable;
while ($tmp2467->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2467 = $tmp2467->next;
}
$fn2469 $tmp2468 = $tmp2467->methods[0];
frost$core$Object* $tmp2470 = $tmp2468($tmp2465, $tmp2466);
frost$core$String* $tmp2471 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, ((org$frostlang$frostc$MethodDecl*) $tmp2470));
frost$core$String* $tmp2472 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2463, $tmp2471);
frost$core$String* $tmp2473 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2472, &$s2474);
frost$core$MutableString$append$frost$core$String($tmp2460, $tmp2473);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
frost$core$Frost$unref$frost$core$Object$Q($tmp2470);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
// line 666
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2475));
frost$core$String* $tmp2476 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
*(&local13) = &$s2477;
goto block14;
block14:;
frost$core$Int64 $tmp2478 = *(&local14);
int64_t $tmp2479 = $tmp2445.value;
int64_t $tmp2480 = $tmp2478.value;
int64_t $tmp2481 = $tmp2479 - $tmp2480;
frost$core$Int64 $tmp2482 = (frost$core$Int64) {$tmp2481};
frost$core$UInt64 $tmp2483 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2482);
if ($tmp2447) goto block18; else goto block19;
block18:;
uint64_t $tmp2484 = $tmp2483.value;
uint64_t $tmp2485 = $tmp2449.value;
bool $tmp2486 = $tmp2484 >= $tmp2485;
frost$core$Bit $tmp2487 = (frost$core$Bit) {$tmp2486};
bool $tmp2488 = $tmp2487.value;
if ($tmp2488) goto block17; else goto block13;
block19:;
uint64_t $tmp2489 = $tmp2483.value;
uint64_t $tmp2490 = $tmp2449.value;
bool $tmp2491 = $tmp2489 > $tmp2490;
frost$core$Bit $tmp2492 = (frost$core$Bit) {$tmp2491};
bool $tmp2493 = $tmp2492.value;
if ($tmp2493) goto block17; else goto block13;
block17:;
int64_t $tmp2494 = $tmp2478.value;
int64_t $tmp2495 = $tmp2448.value;
int64_t $tmp2496 = $tmp2494 + $tmp2495;
frost$core$Int64 $tmp2497 = (frost$core$Int64) {$tmp2496};
*(&local14) = $tmp2497;
goto block12;
block13:;
// line 668
frost$core$MutableString* $tmp2498 = *(&local12);
frost$core$MutableString$append$frost$core$String($tmp2498, &$s2499);
// line 669
frost$io$MemoryOutputStream** $tmp2500 = &param0->types;
frost$io$MemoryOutputStream* $tmp2501 = *$tmp2500;
frost$core$MutableString* $tmp2502 = *(&local12);
frost$core$String* $tmp2503 = frost$core$MutableString$finish$R$frost$core$String($tmp2502);
$fn2505 $tmp2504 = ($fn2505) ((frost$io$OutputStream*) $tmp2501)->$class->vtable[17];
frost$core$Error* $tmp2506 = $tmp2504(((frost$io$OutputStream*) $tmp2501), $tmp2503);
if ($tmp2506 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
*(&local0) = $tmp2506;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
frost$core$String* $tmp2507 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
*(&local13) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2508 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2509 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2510 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2511 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2511));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp2512 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2513 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$collections$ListView* $tmp2514 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp2515 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2516 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2517 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2518 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
frost$core$String* $tmp2519 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
*(&local13) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2520 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2521 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2522 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2523 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp2524 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2525 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2525));
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$collections$ListView* $tmp2526 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp2527 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2528 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block6;
block6:;
// line 671
frost$collections$HashMap** $tmp2529 = &param0->classConstants;
frost$collections$HashMap* $tmp2530 = *$tmp2529;
frost$core$String* $tmp2531 = *(&local1);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2532 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2530, ((frost$collections$Key*) $tmp2531), ((frost$core$Object*) $tmp2532));
goto block4;
block4:;
// line 673
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2533 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2534 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2535 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2536 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2533;
block1:;
// line 676
frost$core$Bit $tmp2537 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2538 = $tmp2537.value;
if ($tmp2538) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2539 = (frost$core$Int64) {676};
frost$core$Error* $tmp2540 = *(&local0);
$fn2542 $tmp2541 = ($fn2542) ((frost$core$Object*) $tmp2540)->$class->vtable[0];
frost$core$String* $tmp2543 = $tmp2541(((frost$core$Object*) $tmp2540));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2544, $tmp2539, $tmp2543);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2543));
abort(); // unreachable
block22:;
// line 677
goto block24;
block24:;
goto block24;
block25:;
goto block2;
block2:;
frost$core$Error* $tmp2545 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2545));
*(&local0) = ((frost$core$Error*) NULL);
goto block26;
block26:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$Variable$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Variable* param1) {

frost$core$String* local0 = NULL;
// line 682
org$frostlang$frostc$Variable$Storage** $tmp2546 = &param1->storage;
org$frostlang$frostc$Variable$Storage* $tmp2547 = *$tmp2546;
frost$core$Int64* $tmp2548 = &$tmp2547->$rawValue;
frost$core$Int64 $tmp2549 = *$tmp2548;
frost$core$Int64 $tmp2550 = (frost$core$Int64) {1};
frost$core$Bit $tmp2551 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2549, $tmp2550);
bool $tmp2552 = $tmp2551.value;
if ($tmp2552) goto block2; else goto block1;
block2:;
// line 684
frost$core$String** $tmp2553 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2554 = *$tmp2553;
frost$core$String* $tmp2555 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2556, $tmp2554);
frost$core$String* $tmp2557 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2555, &$s2558);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
return $tmp2557;
block1:;
// line 687
frost$collections$IdentityMap** $tmp2559 = &param0->variableNames;
frost$collections$IdentityMap* $tmp2560 = *$tmp2559;
frost$core$Object* $tmp2561 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp2560, ((frost$core$Object*) param1));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp2561)));
frost$core$String* $tmp2562 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2562));
*(&local0) = ((frost$core$String*) $tmp2561);
frost$core$Frost$unref$frost$core$Object$Q($tmp2561);
// line 688
frost$core$String* $tmp2563 = *(&local0);
frost$core$Bit $tmp2564 = frost$core$Bit$init$builtin_bit($tmp2563 == NULL);
bool $tmp2565 = $tmp2564.value;
if ($tmp2565) goto block3; else goto block4;
block3:;
// line 689
frost$core$Int64* $tmp2566 = &param0->varCount;
frost$core$Int64 $tmp2567 = *$tmp2566;
frost$core$Int64 $tmp2568 = (frost$core$Int64) {1};
int64_t $tmp2569 = $tmp2567.value;
int64_t $tmp2570 = $tmp2568.value;
int64_t $tmp2571 = $tmp2569 + $tmp2570;
frost$core$Int64 $tmp2572 = (frost$core$Int64) {$tmp2571};
frost$core$Int64* $tmp2573 = &param0->varCount;
*$tmp2573 = $tmp2572;
// line 690
frost$core$String** $tmp2574 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2575 = *$tmp2574;
frost$core$String* $tmp2576 = frost$core$String$get_asString$R$frost$core$String($tmp2575);
frost$core$String* $tmp2577 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2576, &$s2578);
frost$core$Int64* $tmp2579 = &param0->varCount;
frost$core$Int64 $tmp2580 = *$tmp2579;
frost$core$Int64$wrapper* $tmp2581;
$tmp2581 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2581->value = $tmp2580;
frost$core$String* $tmp2582 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2577, ((frost$core$Object*) $tmp2581));
frost$core$String* $tmp2583 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2582, &$s2584);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
frost$core$String* $tmp2585 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
*(&local0) = $tmp2583;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
// line 691
frost$collections$IdentityMap** $tmp2586 = &param0->variableNames;
frost$collections$IdentityMap* $tmp2587 = *$tmp2586;
frost$core$String* $tmp2588 = *(&local0);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp2587, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp2588));
goto block4;
block4:;
// line 693
frost$core$String* $tmp2589 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
frost$core$String* $tmp2590 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
*(&local0) = ((frost$core$String*) NULL);
return $tmp2589;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$FieldDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$FieldDecl* param1) {

// line 697
org$frostlang$frostc$Annotations** $tmp2591 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2592 = *$tmp2591;
frost$core$Bit $tmp2593 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2592);
bool $tmp2594 = $tmp2593.value;
if ($tmp2594) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2595 = (frost$core$Int64) {697};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2596, $tmp2595);
abort(); // unreachable
block1:;
// line 698
frost$core$Weak** $tmp2597 = &param1->owner;
frost$core$Weak* $tmp2598 = *$tmp2597;
frost$core$Object* $tmp2599 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2598);
frost$core$String** $tmp2600 = &((org$frostlang$frostc$ClassDecl*) $tmp2599)->name;
frost$core$String* $tmp2601 = *$tmp2600;
frost$core$String* $tmp2602 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2601);
frost$core$String* $tmp2603 = frost$core$String$get_asString$R$frost$core$String($tmp2602);
frost$core$String* $tmp2604 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2603, &$s2605);
frost$core$String** $tmp2606 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2607 = *$tmp2606;
frost$core$String* $tmp2608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2604, $tmp2607);
frost$core$String* $tmp2609 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2608, &$s2610);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
frost$core$Frost$unref$frost$core$Object$Q($tmp2599);
return $tmp2609;

}
org$frostlang$frostc$CCodeGenerator$OpClass org$frostlang$frostc$CCodeGenerator$opClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$OpClass(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 709
org$frostlang$frostc$Type$Kind* $tmp2611 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp2612 = *$tmp2611;
frost$core$Int64 $tmp2613 = $tmp2612.$rawValue;
frost$core$Int64 $tmp2614 = (frost$core$Int64) {2};
frost$core$Bit $tmp2615 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2613, $tmp2614);
bool $tmp2616 = $tmp2615.value;
if ($tmp2616) goto block2; else goto block3;
block2:;
// line 711
frost$core$Int64 $tmp2617 = (frost$core$Int64) {0};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2618 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2617);
return $tmp2618;
block3:;
frost$core$Int64 $tmp2619 = (frost$core$Int64) {3};
frost$core$Bit $tmp2620 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2613, $tmp2619);
bool $tmp2621 = $tmp2620.value;
if ($tmp2621) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp2622 = (frost$core$Int64) {8};
frost$core$Bit $tmp2623 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2613, $tmp2622);
bool $tmp2624 = $tmp2623.value;
if ($tmp2624) goto block4; else goto block6;
block4:;
// line 714
frost$core$Int64 $tmp2625 = (frost$core$Int64) {1};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2626 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2625);
return $tmp2626;
block6:;
frost$core$Int64 $tmp2627 = (frost$core$Int64) {9};
frost$core$Bit $tmp2628 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2613, $tmp2627);
bool $tmp2629 = $tmp2628.value;
if ($tmp2629) goto block7; else goto block8;
block7:;
// line 717
frost$core$Int64 $tmp2630 = (frost$core$Int64) {2};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2631 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2630);
return $tmp2631;
block8:;
// line 720
frost$core$Int64 $tmp2632 = (frost$core$Int64) {3};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2633 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2632);
return $tmp2633;
block1:;
goto block9;
block9:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getBinaryReference$org$frostlang$frostc$Type$frost$core$String$org$frostlang$frostc$expression$Binary$Operator$frost$core$String$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2, org$frostlang$frostc$expression$Binary$Operator param3, frost$core$String* param4, frost$io$IndentedOutputStream* param5) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Bit local2;
frost$core$String* local3 = NULL;
// line 727
*(&local0) = ((frost$core$Error*) NULL);
// line 728
*(&local1) = ((frost$core$String*) NULL);
// line 729
frost$core$Bit $tmp2634 = frost$core$Bit$init$builtin_bit(false);
*(&local2) = $tmp2634;
// line 730
frost$core$Int64 $tmp2635 = param3.$rawValue;
frost$core$Int64 $tmp2636 = (frost$core$Int64) {0};
frost$core$Bit $tmp2637 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2636);
bool $tmp2638 = $tmp2637.value;
if ($tmp2638) goto block4; else goto block5;
block4:;
// line 732
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2639));
frost$core$String* $tmp2640 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
*(&local1) = &$s2641;
goto block3;
block5:;
frost$core$Int64 $tmp2642 = (frost$core$Int64) {1};
frost$core$Bit $tmp2643 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2642);
bool $tmp2644 = $tmp2643.value;
if ($tmp2644) goto block6; else goto block7;
block6:;
// line 735
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2645));
frost$core$String* $tmp2646 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
*(&local1) = &$s2647;
goto block3;
block7:;
frost$core$Int64 $tmp2648 = (frost$core$Int64) {2};
frost$core$Bit $tmp2649 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2648);
bool $tmp2650 = $tmp2649.value;
if ($tmp2650) goto block8; else goto block9;
block8:;
// line 738
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2651));
frost$core$String* $tmp2652 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2652));
*(&local1) = &$s2653;
goto block3;
block9:;
frost$core$Int64 $tmp2654 = (frost$core$Int64) {4};
frost$core$Bit $tmp2655 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2654);
bool $tmp2656 = $tmp2655.value;
if ($tmp2656) goto block10; else goto block11;
block10:;
// line 741
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2657));
frost$core$String* $tmp2658 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
*(&local1) = &$s2659;
goto block3;
block11:;
frost$core$Int64 $tmp2660 = (frost$core$Int64) {3};
frost$core$Bit $tmp2661 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2660);
bool $tmp2662 = $tmp2661.value;
if ($tmp2662) goto block12; else goto block13;
block12:;
// line 744
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2663));
frost$core$String* $tmp2664 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
*(&local1) = &$s2665;
goto block3;
block13:;
frost$core$Int64 $tmp2666 = (frost$core$Int64) {5};
frost$core$Bit $tmp2667 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2666);
bool $tmp2668 = $tmp2667.value;
if ($tmp2668) goto block14; else goto block15;
block14:;
// line 747
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2669));
frost$core$String* $tmp2670 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2670));
*(&local1) = &$s2671;
goto block3;
block15:;
frost$core$Int64 $tmp2672 = (frost$core$Int64) {18};
frost$core$Bit $tmp2673 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2672);
bool $tmp2674 = $tmp2673.value;
if ($tmp2674) goto block16; else goto block17;
block16:;
// line 750
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2675));
frost$core$String* $tmp2676 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
*(&local1) = &$s2677;
goto block3;
block17:;
frost$core$Int64 $tmp2678 = (frost$core$Int64) {19};
frost$core$Bit $tmp2679 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2678);
bool $tmp2680 = $tmp2679.value;
if ($tmp2680) goto block18; else goto block19;
block18:;
// line 753
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2681));
frost$core$String* $tmp2682 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
*(&local1) = &$s2683;
goto block3;
block19:;
frost$core$Int64 $tmp2684 = (frost$core$Int64) {15};
frost$core$Bit $tmp2685 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2684);
bool $tmp2686 = $tmp2685.value;
if ($tmp2686) goto block20; else goto block21;
block20:;
// line 756
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2687));
frost$core$String* $tmp2688 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
*(&local1) = &$s2689;
goto block3;
block21:;
frost$core$Int64 $tmp2690 = (frost$core$Int64) {13};
frost$core$Bit $tmp2691 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2690);
bool $tmp2692 = $tmp2691.value;
if ($tmp2692) goto block22; else goto block23;
block22:;
// line 759
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2693));
frost$core$String* $tmp2694 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
*(&local1) = &$s2695;
goto block3;
block23:;
frost$core$Int64 $tmp2696 = (frost$core$Int64) {16};
frost$core$Bit $tmp2697 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2696);
bool $tmp2698 = $tmp2697.value;
if ($tmp2698) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp2699 = (frost$core$Int64) {17};
frost$core$Bit $tmp2700 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2699);
bool $tmp2701 = $tmp2700.value;
if ($tmp2701) goto block24; else goto block26;
block24:;
// line 762
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2702));
frost$core$String* $tmp2703 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
*(&local1) = &$s2704;
goto block3;
block26:;
frost$core$Int64 $tmp2705 = (frost$core$Int64) {6};
frost$core$Bit $tmp2706 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2705);
bool $tmp2707 = $tmp2706.value;
if ($tmp2707) goto block27; else goto block28;
block27:;
// line 765
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2708));
frost$core$String* $tmp2709 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
*(&local1) = &$s2710;
// line 766
frost$core$Bit $tmp2711 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2711;
goto block3;
block28:;
frost$core$Int64 $tmp2712 = (frost$core$Int64) {7};
frost$core$Bit $tmp2713 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2712);
bool $tmp2714 = $tmp2713.value;
if ($tmp2714) goto block29; else goto block30;
block29:;
// line 769
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2715));
frost$core$String* $tmp2716 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
*(&local1) = &$s2717;
// line 770
frost$core$Bit $tmp2718 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2718;
goto block3;
block30:;
frost$core$Int64 $tmp2719 = (frost$core$Int64) {8};
frost$core$Bit $tmp2720 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2719);
bool $tmp2721 = $tmp2720.value;
if ($tmp2721) goto block31; else goto block32;
block31:;
// line 773
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2722));
frost$core$String* $tmp2723 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
*(&local1) = &$s2724;
// line 774
frost$core$Bit $tmp2725 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2725;
goto block3;
block32:;
frost$core$Int64 $tmp2726 = (frost$core$Int64) {9};
frost$core$Bit $tmp2727 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2726);
bool $tmp2728 = $tmp2727.value;
if ($tmp2728) goto block33; else goto block34;
block33:;
// line 777
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2729));
frost$core$String* $tmp2730 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
*(&local1) = &$s2731;
// line 778
frost$core$Bit $tmp2732 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2732;
goto block3;
block34:;
frost$core$Int64 $tmp2733 = (frost$core$Int64) {10};
frost$core$Bit $tmp2734 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2733);
bool $tmp2735 = $tmp2734.value;
if ($tmp2735) goto block35; else goto block36;
block35:;
// line 781
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2736));
frost$core$String* $tmp2737 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
*(&local1) = &$s2738;
// line 782
frost$core$Bit $tmp2739 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2739;
goto block3;
block36:;
frost$core$Int64 $tmp2740 = (frost$core$Int64) {11};
frost$core$Bit $tmp2741 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2635, $tmp2740);
bool $tmp2742 = $tmp2741.value;
if ($tmp2742) goto block37; else goto block38;
block37:;
// line 785
frost$core$Bit $tmp2743 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2743;
// line 786
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2744));
frost$core$String* $tmp2745 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
*(&local1) = &$s2746;
goto block3;
block38:;
// line 789
frost$core$Bit $tmp2747 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2748 = $tmp2747.value;
if ($tmp2748) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp2749 = (frost$core$Int64) {789};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2750, $tmp2749);
abort(); // unreachable
block39:;
goto block3;
block3:;
// line 792
frost$core$String* $tmp2751 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
frost$core$String* $tmp2752 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
*(&local3) = $tmp2751;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
// line 793
frost$core$Bit $tmp2753 = *(&local2);
bool $tmp2754 = $tmp2753.value;
if ($tmp2754) goto block41; else goto block43;
block41:;
// line 794
$fn2756 $tmp2755 = ($fn2756) ((frost$io$OutputStream*) param5)->$class->vtable[17];
frost$core$Error* $tmp2757 = $tmp2755(((frost$io$OutputStream*) param5), &$s2758);
if ($tmp2757 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
*(&local0) = $tmp2757;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
frost$core$String* $tmp2759 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2760 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
goto block42;
block43:;
// line 1
// line 797
frost$core$String* $tmp2761 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp2762 = frost$core$String$get_asString$R$frost$core$String($tmp2761);
frost$core$String* $tmp2763 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2762, &$s2764);
$fn2766 $tmp2765 = ($fn2766) ((frost$io$OutputStream*) param5)->$class->vtable[17];
frost$core$Error* $tmp2767 = $tmp2765(((frost$io$OutputStream*) param5), $tmp2763);
if ($tmp2767 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2767));
*(&local0) = $tmp2767;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
frost$core$String* $tmp2768 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2768));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2769 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2769));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
goto block42;
block42:;
// line 799
frost$core$String* $tmp2770 = *(&local3);
frost$core$String* $tmp2771 = frost$core$String$get_asString$R$frost$core$String($tmp2770);
frost$core$String* $tmp2772 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2771, &$s2773);
frost$core$String* $tmp2774 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2772, param2);
frost$core$String* $tmp2775 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2774, &$s2776);
frost$core$String* $tmp2777 = *(&local1);
frost$core$String* $tmp2778 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2775, $tmp2777);
frost$core$String* $tmp2779 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2778, &$s2780);
frost$core$String* $tmp2781 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2779, param4);
frost$core$String* $tmp2782 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2781, &$s2783);
$fn2785 $tmp2784 = ($fn2785) ((frost$io$OutputStream*) param5)->$class->vtable[19];
frost$core$Error* $tmp2786 = $tmp2784(((frost$io$OutputStream*) param5), $tmp2782);
if ($tmp2786 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
*(&local0) = $tmp2786;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
frost$core$String* $tmp2787 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2787));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2788 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2788));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
// line 800
frost$core$String* $tmp2789 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
frost$core$String* $tmp2790 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2791 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2792 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2789;
block1:;
// line 803
frost$core$Bit $tmp2793 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2794 = $tmp2793.value;
if ($tmp2794) goto block50; else goto block51;
block51:;
frost$core$Int64 $tmp2795 = (frost$core$Int64) {803};
frost$core$Error* $tmp2796 = *(&local0);
$fn2798 $tmp2797 = ($fn2798) ((frost$core$Object*) $tmp2796)->$class->vtable[0];
frost$core$String* $tmp2799 = $tmp2797(((frost$core$Object*) $tmp2796));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2800, $tmp2795, $tmp2799);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
abort(); // unreachable
block50:;
// line 804
goto block52;
block52:;
goto block52;
block53:;
goto block2;
block2:;
frost$core$Error* $tmp2801 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
*(&local0) = ((frost$core$Error*) NULL);
goto block54;
block54:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$MethodDecl* param2, frost$io$IndentedOutputStream* param3) {

org$frostlang$frostc$CCodeGenerator$ClassConstant* local0 = NULL;
frost$core$Int64 local1;
frost$collections$ListView* local2 = NULL;
frost$core$Int64 local3;
// line 809
frost$core$Weak** $tmp2802 = &param2->owner;
frost$core$Weak* $tmp2803 = *$tmp2802;
frost$core$Object* $tmp2804 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2803);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2805 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, ((org$frostlang$frostc$ClassDecl*) $tmp2804));
*(&local0) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2806 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
*(&local0) = $tmp2805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
frost$core$Frost$unref$frost$core$Object$Q($tmp2804);
// line 810
frost$core$Int64 $tmp2807 = (frost$core$Int64) {18446744073709551615};
*(&local1) = $tmp2807;
// line 811
frost$core$Weak** $tmp2808 = &param0->compiler;
frost$core$Weak* $tmp2809 = *$tmp2808;
frost$core$Object* $tmp2810 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2809);
frost$core$Weak** $tmp2811 = &param2->owner;
frost$core$Weak* $tmp2812 = *$tmp2811;
frost$core$Object* $tmp2813 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2812);
frost$collections$ListView* $tmp2814 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2810), ((org$frostlang$frostc$ClassDecl*) $tmp2813));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
frost$collections$ListView* $tmp2815 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
*(&local2) = $tmp2814;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
frost$core$Frost$unref$frost$core$Object$Q($tmp2813);
frost$core$Frost$unref$frost$core$Object$Q($tmp2810);
// line 812
frost$core$Int64 $tmp2816 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2817 = *(&local2);
ITable* $tmp2818 = ((frost$collections$CollectionView*) $tmp2817)->$class->itable;
while ($tmp2818->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2818 = $tmp2818->next;
}
$fn2820 $tmp2819 = $tmp2818->methods[0];
frost$core$Int64 $tmp2821 = $tmp2819(((frost$collections$CollectionView*) $tmp2817));
frost$core$Bit $tmp2822 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2823 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2816, $tmp2821, $tmp2822);
frost$core$Int64 $tmp2824 = $tmp2823.min;
*(&local3) = $tmp2824;
frost$core$Int64 $tmp2825 = $tmp2823.max;
frost$core$Bit $tmp2826 = $tmp2823.inclusive;
bool $tmp2827 = $tmp2826.value;
frost$core$Int64 $tmp2828 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2829 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2828);
if ($tmp2827) goto block4; else goto block5;
block4:;
int64_t $tmp2830 = $tmp2824.value;
int64_t $tmp2831 = $tmp2825.value;
bool $tmp2832 = $tmp2830 <= $tmp2831;
frost$core$Bit $tmp2833 = (frost$core$Bit) {$tmp2832};
bool $tmp2834 = $tmp2833.value;
if ($tmp2834) goto block1; else goto block2;
block5:;
int64_t $tmp2835 = $tmp2824.value;
int64_t $tmp2836 = $tmp2825.value;
bool $tmp2837 = $tmp2835 < $tmp2836;
frost$core$Bit $tmp2838 = (frost$core$Bit) {$tmp2837};
bool $tmp2839 = $tmp2838.value;
if ($tmp2839) goto block1; else goto block2;
block1:;
// line 813
frost$collections$ListView* $tmp2840 = *(&local2);
frost$core$Int64 $tmp2841 = *(&local3);
ITable* $tmp2842 = $tmp2840->$class->itable;
while ($tmp2842->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2842 = $tmp2842->next;
}
$fn2844 $tmp2843 = $tmp2842->methods[0];
frost$core$Object* $tmp2845 = $tmp2843($tmp2840, $tmp2841);
bool $tmp2846 = ((org$frostlang$frostc$MethodDecl*) $tmp2845) == param2;
frost$core$Bit $tmp2847 = frost$core$Bit$init$builtin_bit($tmp2846);
bool $tmp2848 = $tmp2847.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2845);
if ($tmp2848) goto block6; else goto block7;
block6:;
// line 814
frost$core$Int64 $tmp2849 = *(&local3);
*(&local1) = $tmp2849;
// line 815
goto block2;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp2850 = *(&local3);
int64_t $tmp2851 = $tmp2825.value;
int64_t $tmp2852 = $tmp2850.value;
int64_t $tmp2853 = $tmp2851 - $tmp2852;
frost$core$Int64 $tmp2854 = (frost$core$Int64) {$tmp2853};
frost$core$UInt64 $tmp2855 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2854);
if ($tmp2827) goto block9; else goto block10;
block9:;
uint64_t $tmp2856 = $tmp2855.value;
uint64_t $tmp2857 = $tmp2829.value;
bool $tmp2858 = $tmp2856 >= $tmp2857;
frost$core$Bit $tmp2859 = (frost$core$Bit) {$tmp2858};
bool $tmp2860 = $tmp2859.value;
if ($tmp2860) goto block8; else goto block2;
block10:;
uint64_t $tmp2861 = $tmp2855.value;
uint64_t $tmp2862 = $tmp2829.value;
bool $tmp2863 = $tmp2861 > $tmp2862;
frost$core$Bit $tmp2864 = (frost$core$Bit) {$tmp2863};
bool $tmp2865 = $tmp2864.value;
if ($tmp2865) goto block8; else goto block2;
block8:;
int64_t $tmp2866 = $tmp2850.value;
int64_t $tmp2867 = $tmp2828.value;
int64_t $tmp2868 = $tmp2866 + $tmp2867;
frost$core$Int64 $tmp2869 = (frost$core$Int64) {$tmp2868};
*(&local3) = $tmp2869;
goto block1;
block2:;
// line 818
frost$core$Int64 $tmp2870 = *(&local1);
frost$core$Int64 $tmp2871 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2872 = $tmp2870.value;
int64_t $tmp2873 = $tmp2871.value;
bool $tmp2874 = $tmp2872 != $tmp2873;
frost$core$Bit $tmp2875 = (frost$core$Bit) {$tmp2874};
bool $tmp2876 = $tmp2875.value;
if ($tmp2876) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2877 = (frost$core$Int64) {818};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2878, $tmp2877);
abort(); // unreachable
block11:;
// line 819
frost$core$Weak** $tmp2879 = &param0->compiler;
frost$core$Weak* $tmp2880 = *$tmp2879;
frost$core$Object* $tmp2881 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2880);
org$frostlang$frostc$Type* $tmp2882 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp2881), param2);
frost$core$String* $tmp2883 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, $tmp2882, ((org$frostlang$frostc$Type*) NULL));
frost$core$String* $tmp2884 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2885, $tmp2883);
frost$core$String* $tmp2886 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2884, &$s2887);
frost$core$String* $tmp2888 = frost$core$String$get_asString$R$frost$core$String(param1);
frost$core$String* $tmp2889 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2888, &$s2890);
frost$core$Int64 $tmp2891 = *(&local1);
frost$core$Int64$wrapper* $tmp2892;
$tmp2892 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2892->value = $tmp2891;
frost$core$String* $tmp2893 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2889, ((frost$core$Object*) $tmp2892));
frost$core$String* $tmp2894 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2893, &$s2895);
frost$core$String* $tmp2896 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2886, $tmp2894);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2888));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
frost$core$Frost$unref$frost$core$Object$Q($tmp2881);
frost$collections$ListView* $tmp2897 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
*(&local2) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2898 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
*(&local0) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
return $tmp2896;

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
// line 825
*(&local0) = ((frost$core$Error*) NULL);
// line 826
frost$core$Weak** $tmp2899 = &param2->owner;
frost$core$Weak* $tmp2900 = *$tmp2899;
frost$core$Object* $tmp2901 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2900);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2902 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, ((org$frostlang$frostc$ClassDecl*) $tmp2901));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2903 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2903));
*(&local1) = $tmp2902;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
frost$core$Frost$unref$frost$core$Object$Q($tmp2901);
// line 827
frost$core$String* $tmp2904 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
frost$core$String* $tmp2905 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
*(&local2) = $tmp2904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
// line 828
frost$core$String* $tmp2906 = *(&local2);
frost$core$String* $tmp2907 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2908, $tmp2906);
frost$core$String* $tmp2909 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2907, &$s2910);
frost$core$String* $tmp2911 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2909, param1);
frost$core$String* $tmp2912 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2911, &$s2913);
$fn2915 $tmp2914 = ($fn2915) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2916 = $tmp2914(((frost$io$OutputStream*) param3), $tmp2912);
if ($tmp2916 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
*(&local0) = $tmp2916;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
frost$core$String* $tmp2917 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2918 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2918));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
// line 829
frost$core$String* $tmp2919 = *(&local2);
frost$core$String* $tmp2920 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2921, $tmp2919);
frost$core$String* $tmp2922 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2920, &$s2923);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2924 = *(&local1);
frost$core$String** $tmp2925 = &$tmp2924->name;
frost$core$String* $tmp2926 = *$tmp2925;
frost$core$String* $tmp2927 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2922, $tmp2926);
frost$core$String* $tmp2928 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2927, &$s2929);
$fn2931 $tmp2930 = ($fn2931) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2932 = $tmp2930(((frost$io$OutputStream*) param3), $tmp2928);
if ($tmp2932 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
*(&local0) = $tmp2932;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
frost$core$String* $tmp2933 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2933));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2934 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2934));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
// line 830
frost$core$Int64* $tmp2935 = &param3->level;
frost$core$Int64 $tmp2936 = *$tmp2935;
frost$core$Int64 $tmp2937 = (frost$core$Int64) {1};
int64_t $tmp2938 = $tmp2936.value;
int64_t $tmp2939 = $tmp2937.value;
int64_t $tmp2940 = $tmp2938 + $tmp2939;
frost$core$Int64 $tmp2941 = (frost$core$Int64) {$tmp2940};
frost$core$Int64* $tmp2942 = &param3->level;
*$tmp2942 = $tmp2941;
// line 831
frost$core$String* $tmp2943 = *(&local2);
frost$core$String* $tmp2944 = frost$core$String$get_asString$R$frost$core$String($tmp2943);
frost$core$String* $tmp2945 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2944, &$s2946);
frost$core$String* $tmp2947 = *(&local2);
frost$core$String* $tmp2948 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2945, $tmp2947);
frost$core$String* $tmp2949 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2948, &$s2950);
$fn2952 $tmp2951 = ($fn2952) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2953 = $tmp2951(((frost$io$OutputStream*) param3), $tmp2949);
if ($tmp2953 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
*(&local0) = $tmp2953;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
frost$core$String* $tmp2954 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2955 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
// line 832
frost$core$Int64* $tmp2956 = &param3->level;
frost$core$Int64 $tmp2957 = *$tmp2956;
frost$core$Int64 $tmp2958 = (frost$core$Int64) {1};
int64_t $tmp2959 = $tmp2957.value;
int64_t $tmp2960 = $tmp2958.value;
int64_t $tmp2961 = $tmp2959 - $tmp2960;
frost$core$Int64 $tmp2962 = (frost$core$Int64) {$tmp2961};
frost$core$Int64* $tmp2963 = &param3->level;
*$tmp2963 = $tmp2962;
// line 833
$fn2965 $tmp2964 = ($fn2965) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2966 = $tmp2964(((frost$io$OutputStream*) param3), &$s2967);
if ($tmp2966 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
*(&local0) = $tmp2966;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
frost$core$String* $tmp2968 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2969 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
// line 834
frost$core$Int64 $tmp2970 = (frost$core$Int64) {18446744073709551615};
*(&local3) = $tmp2970;
// line 835
frost$core$Weak** $tmp2971 = &param0->compiler;
frost$core$Weak* $tmp2972 = *$tmp2971;
frost$core$Object* $tmp2973 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2972);
frost$core$Weak** $tmp2974 = &param2->owner;
frost$core$Weak* $tmp2975 = *$tmp2974;
frost$core$Object* $tmp2976 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2975);
frost$collections$ListView* $tmp2977 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2973), ((org$frostlang$frostc$ClassDecl*) $tmp2976));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
frost$collections$ListView* $tmp2978 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
*(&local4) = $tmp2977;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
frost$core$Frost$unref$frost$core$Object$Q($tmp2976);
frost$core$Frost$unref$frost$core$Object$Q($tmp2973);
// line 836
frost$core$Int64 $tmp2979 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2980 = *(&local4);
ITable* $tmp2981 = ((frost$collections$CollectionView*) $tmp2980)->$class->itable;
while ($tmp2981->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2981 = $tmp2981->next;
}
$fn2983 $tmp2982 = $tmp2981->methods[0];
frost$core$Int64 $tmp2984 = $tmp2982(((frost$collections$CollectionView*) $tmp2980));
frost$core$Bit $tmp2985 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2986 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2979, $tmp2984, $tmp2985);
frost$core$Int64 $tmp2987 = $tmp2986.min;
*(&local5) = $tmp2987;
frost$core$Int64 $tmp2988 = $tmp2986.max;
frost$core$Bit $tmp2989 = $tmp2986.inclusive;
bool $tmp2990 = $tmp2989.value;
frost$core$Int64 $tmp2991 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2992 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2991);
if ($tmp2990) goto block14; else goto block15;
block14:;
int64_t $tmp2993 = $tmp2987.value;
int64_t $tmp2994 = $tmp2988.value;
bool $tmp2995 = $tmp2993 <= $tmp2994;
frost$core$Bit $tmp2996 = (frost$core$Bit) {$tmp2995};
bool $tmp2997 = $tmp2996.value;
if ($tmp2997) goto block11; else goto block12;
block15:;
int64_t $tmp2998 = $tmp2987.value;
int64_t $tmp2999 = $tmp2988.value;
bool $tmp3000 = $tmp2998 < $tmp2999;
frost$core$Bit $tmp3001 = (frost$core$Bit) {$tmp3000};
bool $tmp3002 = $tmp3001.value;
if ($tmp3002) goto block11; else goto block12;
block11:;
// line 837
frost$collections$ListView* $tmp3003 = *(&local4);
frost$core$Int64 $tmp3004 = *(&local5);
ITable* $tmp3005 = $tmp3003->$class->itable;
while ($tmp3005->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp3005 = $tmp3005->next;
}
$fn3007 $tmp3006 = $tmp3005->methods[0];
frost$core$Object* $tmp3008 = $tmp3006($tmp3003, $tmp3004);
bool $tmp3009 = ((org$frostlang$frostc$MethodDecl*) $tmp3008) == param2;
frost$core$Bit $tmp3010 = frost$core$Bit$init$builtin_bit($tmp3009);
bool $tmp3011 = $tmp3010.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3008);
if ($tmp3011) goto block16; else goto block17;
block16:;
// line 838
frost$core$Int64 $tmp3012 = *(&local5);
*(&local3) = $tmp3012;
// line 839
goto block12;
block17:;
goto block13;
block13:;
frost$core$Int64 $tmp3013 = *(&local5);
int64_t $tmp3014 = $tmp2988.value;
int64_t $tmp3015 = $tmp3013.value;
int64_t $tmp3016 = $tmp3014 - $tmp3015;
frost$core$Int64 $tmp3017 = (frost$core$Int64) {$tmp3016};
frost$core$UInt64 $tmp3018 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3017);
if ($tmp2990) goto block19; else goto block20;
block19:;
uint64_t $tmp3019 = $tmp3018.value;
uint64_t $tmp3020 = $tmp2992.value;
bool $tmp3021 = $tmp3019 >= $tmp3020;
frost$core$Bit $tmp3022 = (frost$core$Bit) {$tmp3021};
bool $tmp3023 = $tmp3022.value;
if ($tmp3023) goto block18; else goto block12;
block20:;
uint64_t $tmp3024 = $tmp3018.value;
uint64_t $tmp3025 = $tmp2992.value;
bool $tmp3026 = $tmp3024 > $tmp3025;
frost$core$Bit $tmp3027 = (frost$core$Bit) {$tmp3026};
bool $tmp3028 = $tmp3027.value;
if ($tmp3028) goto block18; else goto block12;
block18:;
int64_t $tmp3029 = $tmp3013.value;
int64_t $tmp3030 = $tmp2991.value;
int64_t $tmp3031 = $tmp3029 + $tmp3030;
frost$core$Int64 $tmp3032 = (frost$core$Int64) {$tmp3031};
*(&local5) = $tmp3032;
goto block11;
block12:;
// line 842
frost$core$Int64 $tmp3033 = *(&local3);
frost$core$Weak** $tmp3034 = &param0->compiler;
frost$core$Weak* $tmp3035 = *$tmp3034;
frost$core$Object* $tmp3036 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3035);
frost$core$Weak** $tmp3037 = &param0->compiler;
frost$core$Weak* $tmp3038 = *$tmp3037;
frost$core$Object* $tmp3039 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3038);
org$frostlang$frostc$Type* $tmp3040 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp3041 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3039), $tmp3040);
frost$collections$ListView* $tmp3042 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp3036), $tmp3041);
ITable* $tmp3043 = ((frost$collections$CollectionView*) $tmp3042)->$class->itable;
while ($tmp3043->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3043 = $tmp3043->next;
}
$fn3045 $tmp3044 = $tmp3043->methods[0];
frost$core$Int64 $tmp3046 = $tmp3044(((frost$collections$CollectionView*) $tmp3042));
int64_t $tmp3047 = $tmp3033.value;
int64_t $tmp3048 = $tmp3046.value;
int64_t $tmp3049 = $tmp3047 - $tmp3048;
frost$core$Int64 $tmp3050 = (frost$core$Int64) {$tmp3049};
*(&local3) = $tmp3050;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
frost$core$Frost$unref$frost$core$Object$Q($tmp3039);
frost$core$Frost$unref$frost$core$Object$Q($tmp3036);
// line 843
frost$core$Int64 $tmp3051 = *(&local3);
frost$core$Int64 $tmp3052 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp3053 = $tmp3051.value;
int64_t $tmp3054 = $tmp3052.value;
bool $tmp3055 = $tmp3053 != $tmp3054;
frost$core$Bit $tmp3056 = (frost$core$Bit) {$tmp3055};
bool $tmp3057 = $tmp3056.value;
if ($tmp3057) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp3058 = (frost$core$Int64) {843};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3059, $tmp3058);
abort(); // unreachable
block21:;
// line 844
frost$core$String* $tmp3060 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3060));
frost$core$String* $tmp3061 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3061));
*(&local6) = $tmp3060;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3060));
// line 845
frost$core$Weak** $tmp3062 = &param0->compiler;
frost$core$Weak* $tmp3063 = *$tmp3062;
frost$core$Object* $tmp3064 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3063);
org$frostlang$frostc$Type* $tmp3065 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp3064), param2);
frost$core$String* $tmp3066 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, $tmp3065, ((org$frostlang$frostc$Type*) NULL));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3066));
frost$core$String* $tmp3067 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3067));
*(&local7) = $tmp3066;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3065));
frost$core$Frost$unref$frost$core$Object$Q($tmp3064);
// line 846
frost$core$String* $tmp3068 = *(&local7);
frost$core$String* $tmp3069 = frost$core$String$get_asString$R$frost$core$String($tmp3068);
frost$core$String* $tmp3070 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3069, &$s3071);
frost$core$String* $tmp3072 = *(&local6);
frost$core$String* $tmp3073 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3070, $tmp3072);
frost$core$String* $tmp3074 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3073, &$s3075);
frost$core$String* $tmp3076 = *(&local2);
frost$core$String* $tmp3077 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3074, $tmp3076);
frost$core$String* $tmp3078 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3077, &$s3079);
frost$core$Int64 $tmp3080 = *(&local3);
frost$core$Int64$wrapper* $tmp3081;
$tmp3081 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3081->value = $tmp3080;
frost$core$String* $tmp3082 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3078, ((frost$core$Object*) $tmp3081));
frost$core$String* $tmp3083 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3082, &$s3084);
$fn3086 $tmp3085 = ($fn3086) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp3087 = $tmp3085(((frost$io$OutputStream*) param3), $tmp3083);
if ($tmp3087 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
*(&local0) = $tmp3087;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
frost$core$String* $tmp3088 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp3089 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3089));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp3090 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp3091 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp3092 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3092));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
// line 847
frost$core$String* $tmp3093 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
frost$core$String* $tmp3094 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp3095 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp3096 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3096));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp3097 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp3098 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp3099 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3093;
block1:;
// line 850
frost$core$Bit $tmp3100 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3101 = $tmp3100.value;
if ($tmp3101) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp3102 = (frost$core$Int64) {850};
frost$core$Error* $tmp3103 = *(&local0);
$fn3105 $tmp3104 = ($fn3105) ((frost$core$Object*) $tmp3103)->$class->vtable[0];
frost$core$String* $tmp3106 = $tmp3104(((frost$core$Object*) $tmp3103));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3107, $tmp3102, $tmp3106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
abort(); // unreachable
block25:;
// line 851
goto block27;
block27:;
goto block27;
block28:;
goto block2;
block2:;
frost$core$Error* $tmp3108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3108));
*(&local0) = ((frost$core$Error*) NULL);
goto block29;
block29:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getMethodReference$frost$core$String$Q$org$frostlang$frostc$MethodDecl$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$MethodDecl* param2, frost$core$Bit param3, frost$io$IndentedOutputStream* param4) {

frost$core$Bit local0;
// line 857
frost$core$Bit $tmp3109 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp3110 = $tmp3109.value;
if ($tmp3110) goto block3; else goto block4;
block3:;
frost$core$Bit $tmp3111 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit(param2);
*(&local0) = $tmp3111;
goto block5;
block4:;
*(&local0) = $tmp3109;
goto block5;
block5:;
frost$core$Bit $tmp3112 = *(&local0);
bool $tmp3113 = $tmp3112.value;
if ($tmp3113) goto block1; else goto block6;
block1:;
// line 858
frost$core$Bit $tmp3114 = frost$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp3115 = $tmp3114.value;
if ($tmp3115) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp3116 = (frost$core$Int64) {858};
frost$core$String* $tmp3117 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param2);
frost$core$String* $tmp3118 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3119, $tmp3117);
frost$core$String* $tmp3120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3118, &$s3121);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3122, $tmp3116, $tmp3120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3117));
abort(); // unreachable
block7:;
// line 859
frost$core$Weak** $tmp3123 = &param2->owner;
frost$core$Weak* $tmp3124 = *$tmp3123;
frost$core$Object* $tmp3125 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3124);
org$frostlang$frostc$ClassDecl$Kind* $tmp3126 = &((org$frostlang$frostc$ClassDecl*) $tmp3125)->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp3127 = *$tmp3126;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3128;
$tmp3128 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3128->value = $tmp3127;
frost$core$Int64 $tmp3129 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp3130 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp3129);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3131;
$tmp3131 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3131->value = $tmp3130;
ITable* $tmp3132 = ((frost$core$Equatable*) $tmp3128)->$class->itable;
while ($tmp3132->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3132 = $tmp3132->next;
}
$fn3134 $tmp3133 = $tmp3132->methods[0];
frost$core$Bit $tmp3135 = $tmp3133(((frost$core$Equatable*) $tmp3128), ((frost$core$Equatable*) $tmp3131));
bool $tmp3136 = $tmp3135.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3131)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3128)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3125);
if ($tmp3136) goto block9; else goto block11;
block9:;
// line 860
frost$core$String* $tmp3137 = org$frostlang$frostc$CCodeGenerator$getInterfaceMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
return $tmp3137;
block11:;
// line 1
// line 863
frost$core$String* $tmp3138 = org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
return $tmp3138;
block10:;
goto block2;
block6:;
// line 1
// line 867
frost$core$Weak** $tmp3139 = &param2->owner;
frost$core$Weak* $tmp3140 = *$tmp3139;
frost$core$Object* $tmp3141 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3140);
frost$core$Bit $tmp3142 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp3141));
bool $tmp3143 = $tmp3142.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3141);
if ($tmp3143) goto block12; else goto block13;
block12:;
// line 868
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param2);
goto block13;
block13:;
// line 870
frost$core$String* $tmp3144 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3144));
return $tmp3144;
block2:;
goto block14;
block14:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 875
*(&local0) = ((frost$core$Error*) NULL);
// line 876
org$frostlang$frostc$Type$Kind* $tmp3145 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3146 = *$tmp3145;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3147;
$tmp3147 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3147->value = $tmp3146;
frost$core$Int64 $tmp3148 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3149 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3148);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3150;
$tmp3150 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3150->value = $tmp3149;
ITable* $tmp3151 = ((frost$core$Equatable*) $tmp3147)->$class->itable;
while ($tmp3151->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3151 = $tmp3151->next;
}
$fn3153 $tmp3152 = $tmp3151->methods[0];
frost$core$Bit $tmp3154 = $tmp3152(((frost$core$Equatable*) $tmp3147), ((frost$core$Equatable*) $tmp3150));
bool $tmp3155 = $tmp3154.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3150)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3147)));
if ($tmp3155) goto block3; else goto block4;
block3:;
// line 878
frost$core$String* $tmp3156 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3156));
frost$core$String* $tmp3157 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
*(&local1) = $tmp3156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3156));
// line 879
frost$core$String* $tmp3158 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3159 = frost$core$String$get_asString$R$frost$core$String($tmp3158);
frost$core$String* $tmp3160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3159, &$s3161);
frost$core$String* $tmp3162 = *(&local1);
frost$core$String* $tmp3163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3160, $tmp3162);
frost$core$String* $tmp3164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3163, &$s3165);
$fn3167 $tmp3166 = ($fn3167) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3168 = $tmp3166(((frost$io$OutputStream*) param4), $tmp3164);
if ($tmp3168 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
*(&local0) = $tmp3168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
frost$core$String* $tmp3169 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3169));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
// line 880
frost$core$String* $tmp3170 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3171, param1);
frost$core$String* $tmp3172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3170, &$s3173);
$fn3175 $tmp3174 = ($fn3175) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3176 = $tmp3174(((frost$io$OutputStream*) param4), $tmp3172);
if ($tmp3176 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3176));
*(&local0) = $tmp3176;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
frost$core$String* $tmp3177 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
// line 881
frost$core$Int64* $tmp3178 = &param4->level;
frost$core$Int64 $tmp3179 = *$tmp3178;
frost$core$Int64 $tmp3180 = (frost$core$Int64) {1};
int64_t $tmp3181 = $tmp3179.value;
int64_t $tmp3182 = $tmp3180.value;
int64_t $tmp3183 = $tmp3181 + $tmp3182;
frost$core$Int64 $tmp3184 = (frost$core$Int64) {$tmp3183};
frost$core$Int64* $tmp3185 = &param4->level;
*$tmp3185 = $tmp3184;
// line 882
org$frostlang$frostc$FixedArray** $tmp3186 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp3187 = *$tmp3186;
frost$core$Int64 $tmp3188 = (frost$core$Int64) {0};
frost$core$Object* $tmp3189 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3187, $tmp3188);
frost$core$String* $tmp3190 = org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, ((org$frostlang$frostc$Type*) $tmp3189), param4);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
frost$core$String* $tmp3191 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
*(&local2) = $tmp3190;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
frost$core$Frost$unref$frost$core$Object$Q($tmp3189);
// line 883
frost$core$String* $tmp3192 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp3193 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp3194 = *$tmp3193;
frost$core$Int64 $tmp3195 = (frost$core$Int64) {0};
frost$core$Object* $tmp3196 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3194, $tmp3195);
frost$core$String* $tmp3197 = org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, $tmp3192, ((org$frostlang$frostc$Type*) $tmp3196), param3, param4);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3197));
frost$core$String* $tmp3198 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3198));
*(&local3) = $tmp3197;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3197));
frost$core$Frost$unref$frost$core$Object$Q($tmp3196);
// line 884
frost$core$String* $tmp3199 = *(&local1);
frost$core$String* $tmp3200 = frost$core$String$get_asString$R$frost$core$String($tmp3199);
frost$core$String* $tmp3201 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3200, &$s3202);
frost$core$String* $tmp3203 = *(&local3);
frost$core$String* $tmp3204 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3201, $tmp3203);
frost$core$String* $tmp3205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3204, &$s3206);
$fn3208 $tmp3207 = ($fn3208) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3209 = $tmp3207(((frost$io$OutputStream*) param4), $tmp3205);
if ($tmp3209 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3209));
*(&local0) = $tmp3209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
frost$core$String* $tmp3210 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3210));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3211 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3211));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3212 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
// line 885
frost$core$Int64* $tmp3213 = &param4->level;
frost$core$Int64 $tmp3214 = *$tmp3213;
frost$core$Int64 $tmp3215 = (frost$core$Int64) {1};
int64_t $tmp3216 = $tmp3214.value;
int64_t $tmp3217 = $tmp3215.value;
int64_t $tmp3218 = $tmp3216 - $tmp3217;
frost$core$Int64 $tmp3219 = (frost$core$Int64) {$tmp3218};
frost$core$Int64* $tmp3220 = &param4->level;
*$tmp3220 = $tmp3219;
// line 886
$fn3222 $tmp3221 = ($fn3222) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3223 = $tmp3221(((frost$io$OutputStream*) param4), &$s3224);
if ($tmp3223 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
*(&local0) = $tmp3223;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
frost$core$String* $tmp3225 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3226 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3226));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3227 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3227));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
// line 887
$fn3229 $tmp3228 = ($fn3229) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3230 = $tmp3228(((frost$io$OutputStream*) param4), &$s3231);
if ($tmp3230 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3230));
*(&local0) = $tmp3230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3230));
frost$core$String* $tmp3232 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3232));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3233 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3233));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3234 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3230));
// line 888
frost$core$Int64* $tmp3235 = &param4->level;
frost$core$Int64 $tmp3236 = *$tmp3235;
frost$core$Int64 $tmp3237 = (frost$core$Int64) {1};
int64_t $tmp3238 = $tmp3236.value;
int64_t $tmp3239 = $tmp3237.value;
int64_t $tmp3240 = $tmp3238 + $tmp3239;
frost$core$Int64 $tmp3241 = (frost$core$Int64) {$tmp3240};
frost$core$Int64* $tmp3242 = &param4->level;
*$tmp3242 = $tmp3241;
// line 889
frost$core$String* $tmp3243 = *(&local1);
frost$core$String* $tmp3244 = frost$core$String$get_asString$R$frost$core$String($tmp3243);
frost$core$String* $tmp3245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3244, &$s3246);
$fn3248 $tmp3247 = ($fn3248) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3249 = $tmp3247(((frost$io$OutputStream*) param4), $tmp3245);
if ($tmp3249 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3249));
*(&local0) = $tmp3249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3244));
frost$core$String* $tmp3250 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3250));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3251 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3251));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3252 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3244));
// line 890
frost$core$Int64* $tmp3253 = &param4->level;
frost$core$Int64 $tmp3254 = *$tmp3253;
frost$core$Int64 $tmp3255 = (frost$core$Int64) {1};
int64_t $tmp3256 = $tmp3254.value;
int64_t $tmp3257 = $tmp3255.value;
int64_t $tmp3258 = $tmp3256 - $tmp3257;
frost$core$Int64 $tmp3259 = (frost$core$Int64) {$tmp3258};
frost$core$Int64* $tmp3260 = &param4->level;
*$tmp3260 = $tmp3259;
// line 891
$fn3262 $tmp3261 = ($fn3262) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3263 = $tmp3261(((frost$io$OutputStream*) param4), &$s3264);
if ($tmp3263 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
*(&local0) = $tmp3263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
frost$core$String* $tmp3265 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3265));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3266 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3266));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3267 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3267));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
// line 892
frost$core$String* $tmp3268 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3268));
frost$core$String* $tmp3269 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3269));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3270 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3270));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3271 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3271));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3272 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3272));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3268;
block4:;
// line 894
frost$core$String* $tmp3273 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3273));
frost$core$String* $tmp3274 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3274));
*(&local4) = $tmp3273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3273));
// line 895
frost$core$String* $tmp3275 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$String* $tmp3276 = frost$core$String$get_asString$R$frost$core$String($tmp3275);
frost$core$String* $tmp3277 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3276, &$s3278);
frost$core$String* $tmp3279 = *(&local4);
frost$core$String* $tmp3280 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3277, $tmp3279);
frost$core$String* $tmp3281 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3280, &$s3282);
$fn3284 $tmp3283 = ($fn3284) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3285 = $tmp3283(((frost$io$OutputStream*) param4), $tmp3281);
if ($tmp3285 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3285));
*(&local0) = $tmp3285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3275));
frost$core$String* $tmp3286 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3286));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3275));
// line 896
org$frostlang$frostc$Type$Kind* $tmp3287 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3288 = *$tmp3287;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3289;
$tmp3289 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3289->value = $tmp3288;
frost$core$Int64 $tmp3290 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3291 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3290);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3292;
$tmp3292 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3292->value = $tmp3291;
ITable* $tmp3293 = ((frost$core$Equatable*) $tmp3289)->$class->itable;
while ($tmp3293->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3293 = $tmp3293->next;
}
$fn3295 $tmp3294 = $tmp3293->methods[0];
frost$core$Bit $tmp3296 = $tmp3294(((frost$core$Equatable*) $tmp3289), ((frost$core$Equatable*) $tmp3292));
bool $tmp3297 = $tmp3296.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3292)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3289)));
if ($tmp3297) goto block21; else goto block22;
block21:;
// line 897
frost$core$String* $tmp3298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3299, param1);
frost$core$String* $tmp3300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3298, &$s3301);
$fn3303 $tmp3302 = ($fn3303) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3304 = $tmp3302(((frost$io$OutputStream*) param4), $tmp3300);
if ($tmp3304 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3304));
*(&local0) = $tmp3304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3298));
frost$core$String* $tmp3305 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3305));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3298));
// line 898
frost$core$Int64* $tmp3306 = &param4->level;
frost$core$Int64 $tmp3307 = *$tmp3306;
frost$core$Int64 $tmp3308 = (frost$core$Int64) {1};
int64_t $tmp3309 = $tmp3307.value;
int64_t $tmp3310 = $tmp3308.value;
int64_t $tmp3311 = $tmp3309 + $tmp3310;
frost$core$Int64 $tmp3312 = (frost$core$Int64) {$tmp3311};
frost$core$Int64* $tmp3313 = &param4->level;
*$tmp3313 = $tmp3312;
goto block22;
block22:;
// line 900
frost$core$String* $tmp3314 = *(&local4);
frost$core$String* $tmp3315 = frost$core$String$get_asString$R$frost$core$String($tmp3314);
frost$core$String* $tmp3316 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3315, &$s3317);
frost$core$String* $tmp3318 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$String* $tmp3319 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3316, $tmp3318);
frost$core$String* $tmp3320 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3319, &$s3321);
frost$core$Int64 $tmp3322 = org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param2);
frost$core$Int64$wrapper* $tmp3323;
$tmp3323 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3323->value = $tmp3322;
frost$core$String* $tmp3324 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3325, ((frost$core$Object*) $tmp3323));
frost$core$String* $tmp3326 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3324, &$s3327);
frost$core$String* $tmp3328 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3320, $tmp3326);
frost$core$String** $tmp3329 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp3330 = *$tmp3329;
frost$core$String* $tmp3331 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp3330);
frost$core$String* $tmp3332 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3333, $tmp3331);
frost$core$String* $tmp3334 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3332, &$s3335);
frost$core$String* $tmp3336 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3328, $tmp3334);
$fn3338 $tmp3337 = ($fn3338) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3339 = $tmp3337(((frost$io$OutputStream*) param4), $tmp3336);
if ($tmp3339 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3339));
*(&local0) = $tmp3339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3315));
frost$core$String* $tmp3340 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3340));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3315));
// line 903
frost$core$String* $tmp3341 = *(&local4);
frost$core$String* $tmp3342 = frost$core$String$get_asString$R$frost$core$String($tmp3341);
frost$core$String* $tmp3343 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3342, &$s3344);
frost$core$String* $tmp3345 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3343, param1);
frost$core$String* $tmp3346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3345, &$s3347);
$fn3349 $tmp3348 = ($fn3349) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3350 = $tmp3348(((frost$io$OutputStream*) param4), $tmp3346);
if ($tmp3350 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3350));
*(&local0) = $tmp3350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3342));
frost$core$String* $tmp3351 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3351));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3342));
// line 904
org$frostlang$frostc$Type$Kind* $tmp3352 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3353 = *$tmp3352;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3354;
$tmp3354 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3354->value = $tmp3353;
frost$core$Int64 $tmp3355 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3356 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3355);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3357;
$tmp3357 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3357->value = $tmp3356;
ITable* $tmp3358 = ((frost$core$Equatable*) $tmp3354)->$class->itable;
while ($tmp3358->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3358 = $tmp3358->next;
}
$fn3360 $tmp3359 = $tmp3358->methods[0];
frost$core$Bit $tmp3361 = $tmp3359(((frost$core$Equatable*) $tmp3354), ((frost$core$Equatable*) $tmp3357));
bool $tmp3362 = $tmp3361.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3357)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3354)));
if ($tmp3362) goto block29; else goto block30;
block29:;
// line 905
frost$core$Int64* $tmp3363 = &param4->level;
frost$core$Int64 $tmp3364 = *$tmp3363;
frost$core$Int64 $tmp3365 = (frost$core$Int64) {1};
int64_t $tmp3366 = $tmp3364.value;
int64_t $tmp3367 = $tmp3365.value;
int64_t $tmp3368 = $tmp3366 - $tmp3367;
frost$core$Int64 $tmp3369 = (frost$core$Int64) {$tmp3368};
frost$core$Int64* $tmp3370 = &param4->level;
*$tmp3370 = $tmp3369;
// line 906
$fn3372 $tmp3371 = ($fn3372) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3373 = $tmp3371(((frost$io$OutputStream*) param4), &$s3374);
if ($tmp3373 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3373));
*(&local0) = $tmp3373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3373));
frost$core$String* $tmp3375 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3375));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3373));
// line 907
$fn3377 $tmp3376 = ($fn3377) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3378 = $tmp3376(((frost$io$OutputStream*) param4), &$s3379);
if ($tmp3378 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3378));
*(&local0) = $tmp3378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3378));
frost$core$String* $tmp3380 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3380));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3378));
// line 908
frost$core$Int64* $tmp3381 = &param4->level;
frost$core$Int64 $tmp3382 = *$tmp3381;
frost$core$Int64 $tmp3383 = (frost$core$Int64) {1};
int64_t $tmp3384 = $tmp3382.value;
int64_t $tmp3385 = $tmp3383.value;
int64_t $tmp3386 = $tmp3384 + $tmp3385;
frost$core$Int64 $tmp3387 = (frost$core$Int64) {$tmp3386};
frost$core$Int64* $tmp3388 = &param4->level;
*$tmp3388 = $tmp3387;
// line 909
frost$core$String* $tmp3389 = *(&local4);
frost$core$String* $tmp3390 = frost$core$String$get_asString$R$frost$core$String($tmp3389);
frost$core$String* $tmp3391 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3390, &$s3392);
$fn3394 $tmp3393 = ($fn3394) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3395 = $tmp3393(((frost$io$OutputStream*) param4), $tmp3391);
if ($tmp3395 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3395));
*(&local0) = $tmp3395;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3390));
frost$core$String* $tmp3396 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3396));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3390));
// line 910
frost$core$Int64* $tmp3397 = &param4->level;
frost$core$Int64 $tmp3398 = *$tmp3397;
frost$core$Int64 $tmp3399 = (frost$core$Int64) {1};
int64_t $tmp3400 = $tmp3398.value;
int64_t $tmp3401 = $tmp3399.value;
int64_t $tmp3402 = $tmp3400 - $tmp3401;
frost$core$Int64 $tmp3403 = (frost$core$Int64) {$tmp3402};
frost$core$Int64* $tmp3404 = &param4->level;
*$tmp3404 = $tmp3403;
// line 911
$fn3406 $tmp3405 = ($fn3406) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3407 = $tmp3405(((frost$io$OutputStream*) param4), &$s3408);
if ($tmp3407 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
*(&local0) = $tmp3407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
frost$core$String* $tmp3409 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
goto block30;
block30:;
// line 913
frost$core$String* $tmp3410 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3412, $tmp3410);
frost$core$String* $tmp3413 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3411, &$s3414);
frost$core$String* $tmp3415 = *(&local4);
frost$core$String* $tmp3416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3413, $tmp3415);
frost$core$String* $tmp3417 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3416, &$s3418);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3410));
frost$core$String* $tmp3419 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3419));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3420 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3420));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3417;
block1:;
// line 916
frost$core$Bit $tmp3421 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3422 = $tmp3421.value;
if ($tmp3422) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp3423 = (frost$core$Int64) {916};
frost$core$Error* $tmp3424 = *(&local0);
$fn3426 $tmp3425 = ($fn3426) ((frost$core$Object*) $tmp3424)->$class->vtable[0];
frost$core$String* $tmp3427 = $tmp3425(((frost$core$Object*) $tmp3424));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3428, $tmp3423, $tmp3427);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3427));
abort(); // unreachable
block39:;
// line 917
goto block41;
block41:;
goto block41;
block42:;
goto block2;
block2:;
frost$core$Error* $tmp3429 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3429));
*(&local0) = ((frost$core$Error*) NULL);
goto block43;
block43:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 922
frost$core$String* $tmp3430 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3432, $tmp3430);
frost$core$String* $tmp3433 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3431, &$s3434);
frost$core$String* $tmp3435 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3433, param1);
frost$core$String* $tmp3436 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3435, &$s3437);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3436));
frost$core$String* $tmp3438 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3438));
*(&local0) = $tmp3436;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3430));
// line 923
org$frostlang$frostc$Type$Kind* $tmp3439 = &param3->typeKind;
org$frostlang$frostc$Type$Kind $tmp3440 = *$tmp3439;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3441;
$tmp3441 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3441->value = $tmp3440;
frost$core$Int64 $tmp3442 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3443 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3442);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3444;
$tmp3444 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3444->value = $tmp3443;
ITable* $tmp3445 = ((frost$core$Equatable*) $tmp3441)->$class->itable;
while ($tmp3445->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3445 = $tmp3445->next;
}
$fn3447 $tmp3446 = $tmp3445->methods[0];
frost$core$Bit $tmp3448 = $tmp3446(((frost$core$Equatable*) $tmp3441), ((frost$core$Equatable*) $tmp3444));
bool $tmp3449 = $tmp3448.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3444)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3441)));
if ($tmp3449) goto block1; else goto block2;
block1:;
// line 925
org$frostlang$frostc$FixedArray** $tmp3450 = &param3->subtypes;
org$frostlang$frostc$FixedArray* $tmp3451 = *$tmp3450;
frost$core$Int64 $tmp3452 = (frost$core$Int64) {0};
frost$core$Object* $tmp3453 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3451, $tmp3452);
frost$core$String* $tmp3454 = org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, ((org$frostlang$frostc$Type*) $tmp3453), param4);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3454));
frost$core$String* $tmp3455 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3455));
*(&local1) = $tmp3454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3454));
frost$core$Frost$unref$frost$core$Object$Q($tmp3453);
// line 926
frost$core$String* $tmp3456 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp3457 = &param3->subtypes;
org$frostlang$frostc$FixedArray* $tmp3458 = *$tmp3457;
frost$core$Int64 $tmp3459 = (frost$core$Int64) {0};
frost$core$Object* $tmp3460 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3458, $tmp3459);
frost$core$String* $tmp3461 = org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, $tmp3456, ((org$frostlang$frostc$Type*) $tmp3460), param3, param4);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3461));
frost$core$String* $tmp3462 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3462));
*(&local2) = $tmp3461;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3461));
frost$core$Frost$unref$frost$core$Object$Q($tmp3460);
// line 927
frost$core$String* $tmp3463 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3464, param1);
frost$core$String* $tmp3465 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3463, &$s3466);
frost$core$String* $tmp3467 = *(&local2);
frost$core$String* $tmp3468 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3465, $tmp3467);
frost$core$String* $tmp3469 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3468, &$s3470);
frost$core$String* $tmp3471 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3472 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3469, $tmp3471);
frost$core$String* $tmp3473 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3472, &$s3474);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3463));
frost$core$String* $tmp3475 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3475));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3476 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3476));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3477 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3477));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3473;
block2:;
// line 929
frost$core$String* $tmp3478 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3478));
frost$core$String* $tmp3479 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3479));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3478;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

// line 934
frost$core$String* $tmp3480 = org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3481 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3482, $tmp3480);
frost$core$String* $tmp3483 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3481, &$s3484);
frost$core$String* $tmp3485 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3483, param1);
frost$core$String* $tmp3486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3485, &$s3487);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3480));
return $tmp3486;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

// line 939
frost$core$String* $tmp3488 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3489 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3490, $tmp3488);
frost$core$String* $tmp3491 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3489, &$s3492);
frost$core$String* $tmp3493 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3491, param1);
frost$core$String* $tmp3494 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3493, &$s3495);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3488));
return $tmp3494;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
frost$core$Bit local6;
frost$core$Bit local7;
frost$core$String* local8 = NULL;
frost$core$String* local9 = NULL;
// line 943
frost$core$Bit $tmp3496 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param3);
bool $tmp3497 = $tmp3496.value;
if ($tmp3497) goto block1; else goto block3;
block1:;
// line 944
frost$core$Bit $tmp3498 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param2);
bool $tmp3499 = $tmp3498.value;
if ($tmp3499) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp3500 = (frost$core$Int64) {944};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3501, $tmp3500);
abort(); // unreachable
block4:;
// line 945
frost$core$String* $tmp3502 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3503 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3504, $tmp3502);
frost$core$String* $tmp3505 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3503, &$s3506);
frost$core$String* $tmp3507 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3505, param1);
frost$core$String* $tmp3508 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3507, &$s3509);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3502));
return $tmp3508;
block3:;
// line 1
// line 948
frost$core$Weak** $tmp3510 = &param0->compiler;
frost$core$Weak* $tmp3511 = *$tmp3510;
frost$core$Object* $tmp3512 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3511);
org$frostlang$frostc$ClassDecl* $tmp3513 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3512), param2);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3513));
org$frostlang$frostc$ClassDecl* $tmp3514 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3514));
*(&local0) = $tmp3513;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3513));
frost$core$Frost$unref$frost$core$Object$Q($tmp3512);
// line 949
org$frostlang$frostc$ClassDecl* $tmp3515 = *(&local0);
frost$core$Bit $tmp3516 = frost$core$Bit$init$builtin_bit($tmp3515 != NULL);
bool $tmp3517 = $tmp3516.value;
if ($tmp3517) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3518 = (frost$core$Int64) {949};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3519, $tmp3518);
abort(); // unreachable
block6:;
// line 950
frost$core$Weak** $tmp3520 = &param0->compiler;
frost$core$Weak* $tmp3521 = *$tmp3520;
frost$core$Object* $tmp3522 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3521);
org$frostlang$frostc$ClassDecl* $tmp3523 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3522), param3);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3523));
org$frostlang$frostc$ClassDecl* $tmp3524 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3524));
*(&local1) = $tmp3523;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3523));
frost$core$Frost$unref$frost$core$Object$Q($tmp3522);
// line 951
org$frostlang$frostc$ClassDecl* $tmp3525 = *(&local1);
frost$core$Bit $tmp3526 = frost$core$Bit$init$builtin_bit($tmp3525 != NULL);
bool $tmp3527 = $tmp3526.value;
if ($tmp3527) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3528 = (frost$core$Int64) {951};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3529, $tmp3528);
abort(); // unreachable
block8:;
// line 952
frost$core$Weak** $tmp3530 = &param0->compiler;
frost$core$Weak* $tmp3531 = *$tmp3530;
frost$core$Object* $tmp3532 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3531);
org$frostlang$frostc$ClassDecl* $tmp3533 = *(&local0);
frost$core$Bit $tmp3534 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3532), $tmp3533);
bool $tmp3535 = $tmp3534.value;
if ($tmp3535) goto block12; else goto block13;
block12:;
frost$core$Weak** $tmp3536 = &param0->compiler;
frost$core$Weak* $tmp3537 = *$tmp3536;
frost$core$Object* $tmp3538 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3537);
org$frostlang$frostc$ClassDecl* $tmp3539 = *(&local1);
frost$core$Bit $tmp3540 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3538), $tmp3539);
frost$core$Bit $tmp3541 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3540);
frost$core$Frost$unref$frost$core$Object$Q($tmp3538);
*(&local2) = $tmp3541;
goto block14;
block13:;
*(&local2) = $tmp3534;
goto block14;
block14:;
frost$core$Bit $tmp3542 = *(&local2);
bool $tmp3543 = $tmp3542.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3532);
if ($tmp3543) goto block10; else goto block15;
block10:;
// line 953
frost$io$IndentedOutputStream** $tmp3544 = &param0->out;
frost$io$IndentedOutputStream* $tmp3545 = *$tmp3544;
frost$core$String* $tmp3546 = org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3545);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3546));
org$frostlang$frostc$ClassDecl* $tmp3547 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3547));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3548 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3548));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3546;
block15:;
// line 955
frost$core$Weak** $tmp3549 = &param0->compiler;
frost$core$Weak* $tmp3550 = *$tmp3549;
frost$core$Object* $tmp3551 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3550);
org$frostlang$frostc$ClassDecl* $tmp3552 = *(&local0);
frost$core$Bit $tmp3553 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3551), $tmp3552);
frost$core$Bit $tmp3554 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3553);
bool $tmp3555 = $tmp3554.value;
if ($tmp3555) goto block18; else goto block19;
block18:;
frost$core$Weak** $tmp3556 = &param0->compiler;
frost$core$Weak* $tmp3557 = *$tmp3556;
frost$core$Object* $tmp3558 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3557);
org$frostlang$frostc$ClassDecl* $tmp3559 = *(&local1);
frost$core$Bit $tmp3560 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3558), $tmp3559);
frost$core$Frost$unref$frost$core$Object$Q($tmp3558);
*(&local3) = $tmp3560;
goto block20;
block19:;
*(&local3) = $tmp3554;
goto block20;
block20:;
frost$core$Bit $tmp3561 = *(&local3);
bool $tmp3562 = $tmp3561.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3551);
if ($tmp3562) goto block16; else goto block21;
block16:;
// line 956
frost$io$IndentedOutputStream** $tmp3563 = &param0->out;
frost$io$IndentedOutputStream* $tmp3564 = *$tmp3563;
frost$core$String* $tmp3565 = org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3564);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3565));
org$frostlang$frostc$ClassDecl* $tmp3566 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3566));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3567 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3567));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3565;
block21:;
// line 958
frost$core$Weak** $tmp3568 = &param0->compiler;
frost$core$Weak* $tmp3569 = *$tmp3568;
frost$core$Object* $tmp3570 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3569);
org$frostlang$frostc$ClassDecl* $tmp3571 = *(&local0);
frost$core$Bit $tmp3572 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3570), $tmp3571);
bool $tmp3573 = $tmp3572.value;
if ($tmp3573) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Type$Kind* $tmp3574 = &param3->typeKind;
org$frostlang$frostc$Type$Kind $tmp3575 = *$tmp3574;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3576;
$tmp3576 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3576->value = $tmp3575;
frost$core$Int64 $tmp3577 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3578 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3577);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3579;
$tmp3579 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3579->value = $tmp3578;
ITable* $tmp3580 = ((frost$core$Equatable*) $tmp3576)->$class->itable;
while ($tmp3580->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3580 = $tmp3580->next;
}
$fn3582 $tmp3581 = $tmp3580->methods[0];
frost$core$Bit $tmp3583 = $tmp3581(((frost$core$Equatable*) $tmp3576), ((frost$core$Equatable*) $tmp3579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3579)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3576)));
*(&local5) = $tmp3583;
goto block26;
block25:;
*(&local5) = $tmp3572;
goto block26;
block26:;
frost$core$Bit $tmp3584 = *(&local5);
bool $tmp3585 = $tmp3584.value;
if ($tmp3585) goto block27; else goto block28;
block27:;
org$frostlang$frostc$FixedArray** $tmp3586 = &param3->subtypes;
org$frostlang$frostc$FixedArray* $tmp3587 = *$tmp3586;
frost$core$Int64 $tmp3588 = (frost$core$Int64) {0};
frost$core$Object* $tmp3589 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3587, $tmp3588);
frost$core$Bit $tmp3590 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp3589), param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp3589);
*(&local4) = $tmp3590;
goto block29;
block28:;
*(&local4) = $tmp3584;
goto block29;
block29:;
frost$core$Bit $tmp3591 = *(&local4);
bool $tmp3592 = $tmp3591.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3570);
if ($tmp3592) goto block22; else goto block30;
block22:;
// line 960
frost$io$IndentedOutputStream** $tmp3593 = &param0->out;
frost$io$IndentedOutputStream* $tmp3594 = *$tmp3593;
frost$core$String* $tmp3595 = org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3594);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3595));
org$frostlang$frostc$ClassDecl* $tmp3596 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3596));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3597 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3597));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3595;
block30:;
// line 962
frost$core$Weak** $tmp3598 = &param0->compiler;
frost$core$Weak* $tmp3599 = *$tmp3598;
frost$core$Object* $tmp3600 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3599);
org$frostlang$frostc$ClassDecl* $tmp3601 = *(&local1);
frost$core$Bit $tmp3602 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3600), $tmp3601);
bool $tmp3603 = $tmp3602.value;
if ($tmp3603) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Type$Kind* $tmp3604 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3605 = *$tmp3604;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3606;
$tmp3606 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3606->value = $tmp3605;
frost$core$Int64 $tmp3607 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3608 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3607);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3609;
$tmp3609 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3609->value = $tmp3608;
ITable* $tmp3610 = ((frost$core$Equatable*) $tmp3606)->$class->itable;
while ($tmp3610->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3610 = $tmp3610->next;
}
$fn3612 $tmp3611 = $tmp3610->methods[0];
frost$core$Bit $tmp3613 = $tmp3611(((frost$core$Equatable*) $tmp3606), ((frost$core$Equatable*) $tmp3609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3609)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3606)));
*(&local7) = $tmp3613;
goto block35;
block34:;
*(&local7) = $tmp3602;
goto block35;
block35:;
frost$core$Bit $tmp3614 = *(&local7);
bool $tmp3615 = $tmp3614.value;
if ($tmp3615) goto block36; else goto block37;
block36:;
org$frostlang$frostc$FixedArray** $tmp3616 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp3617 = *$tmp3616;
frost$core$Int64 $tmp3618 = (frost$core$Int64) {0};
frost$core$Object* $tmp3619 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3617, $tmp3618);
frost$core$Bit $tmp3620 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp3619), param3);
frost$core$Frost$unref$frost$core$Object$Q($tmp3619);
*(&local6) = $tmp3620;
goto block38;
block37:;
*(&local6) = $tmp3614;
goto block38;
block38:;
frost$core$Bit $tmp3621 = *(&local6);
bool $tmp3622 = $tmp3621.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3600);
if ($tmp3622) goto block31; else goto block32;
block31:;
// line 964
frost$io$IndentedOutputStream** $tmp3623 = &param0->out;
frost$io$IndentedOutputStream* $tmp3624 = *$tmp3623;
frost$core$String* $tmp3625 = org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3624);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3625));
org$frostlang$frostc$ClassDecl* $tmp3626 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3627 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3627));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3625;
block32:;
goto block23;
block23:;
goto block17;
block17:;
goto block11;
block11:;
org$frostlang$frostc$ClassDecl* $tmp3628 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3628));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3629 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block2:;
// line 967
frost$core$String* $tmp3630 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3630));
frost$core$String* $tmp3631 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3631));
*(&local8) = $tmp3630;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3630));
// line 968
frost$core$String* $tmp3632 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3632));
frost$core$String* $tmp3633 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3633));
*(&local9) = $tmp3632;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3632));
// line 969
frost$core$String* $tmp3634 = *(&local8);
frost$core$String* $tmp3635 = *(&local9);
frost$core$Bit $tmp3636 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3634, $tmp3635);
bool $tmp3637 = $tmp3636.value;
if ($tmp3637) goto block39; else goto block40;
block39:;
// line 970
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String* $tmp3638 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3638));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp3639 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3639));
*(&local8) = ((frost$core$String*) NULL);
return param1;
block40:;
// line 972
frost$core$String* $tmp3640 = *(&local9);
frost$core$String* $tmp3641 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3642, $tmp3640);
frost$core$String* $tmp3643 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3641, &$s3644);
frost$core$String* $tmp3645 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3643, param1);
frost$core$String* $tmp3646 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3645, &$s3647);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3641));
frost$core$String* $tmp3648 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3648));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp3649 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3649));
*(&local8) = ((frost$core$String*) NULL);
return $tmp3646;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getIntReference$frost$core$UInt64$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$UInt64 param1) {

// line 976
frost$core$Int64 $tmp3650 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp3651 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3650);
uint64_t $tmp3652 = param1.value;
uint64_t $tmp3653 = $tmp3651.value;
bool $tmp3654 = $tmp3652 > $tmp3653;
frost$core$Bit $tmp3655 = (frost$core$Bit) {$tmp3654};
bool $tmp3656 = $tmp3655.value;
if ($tmp3656) goto block1; else goto block2;
block1:;
// line 977
frost$core$UInt64$wrapper* $tmp3657;
$tmp3657 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3657->value = param1;
frost$core$String* $tmp3658 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp3657), &$s3659);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3657));
return $tmp3658;
block2:;
// line 979
frost$core$UInt64$wrapper* $tmp3660;
$tmp3660 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3660->value = param1;
$fn3662 $tmp3661 = ($fn3662) ((frost$core$Object*) $tmp3660)->$class->vtable[0];
frost$core$String* $tmp3663 = $tmp3661(((frost$core$Object*) $tmp3660));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3660));
return $tmp3663;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$Real64 param2) {

frost$core$String* local0 = NULL;
// line 983
frost$core$Real64$wrapper* $tmp3664;
$tmp3664 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp3664->value = param2;
$fn3666 $tmp3665 = ($fn3666) ((frost$core$Object*) $tmp3664)->$class->vtable[0];
frost$core$String* $tmp3667 = $tmp3665(((frost$core$Object*) $tmp3664));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
frost$core$String* $tmp3668 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3668));
*(&local0) = $tmp3667;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3664));
// line 984
frost$core$String* $tmp3669 = *(&local0);
frost$core$Bit $tmp3670 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp3669, &$s3671);
bool $tmp3672 = $tmp3670.value;
if ($tmp3672) goto block1; else goto block2;
block1:;
// line 985
frost$core$String* $tmp3673 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
frost$core$String* $tmp3674 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3674));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3673;
block2:;
// line 987
frost$core$String* $tmp3675 = *(&local0);
frost$core$String* $tmp3676 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3675, &$s3677);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3676));
frost$core$String* $tmp3678 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3678));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3676;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getBitReference$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$Bit param1, frost$io$IndentedOutputStream* param2) {

// line 991
bool $tmp3679 = param1.value;
if ($tmp3679) goto block1; else goto block2;
block1:;
// line 992
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3680));
return &$s3681;
block2:;
// line 994
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3682));
return &$s3683;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Char8 local2;
// line 998
*(&local0) = ((frost$core$Error*) NULL);
// line 999
frost$core$Int64* $tmp3684 = &param0->varCount;
frost$core$Int64 $tmp3685 = *$tmp3684;
frost$core$Int64 $tmp3686 = (frost$core$Int64) {1};
int64_t $tmp3687 = $tmp3685.value;
int64_t $tmp3688 = $tmp3686.value;
int64_t $tmp3689 = $tmp3687 + $tmp3688;
frost$core$Int64 $tmp3690 = (frost$core$Int64) {$tmp3689};
frost$core$Int64* $tmp3691 = &param0->varCount;
*$tmp3691 = $tmp3690;
// line 1000
frost$core$Int64* $tmp3692 = &param0->varCount;
frost$core$Int64 $tmp3693 = *$tmp3692;
frost$core$Int64$wrapper* $tmp3694;
$tmp3694 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3694->value = $tmp3693;
frost$core$String* $tmp3695 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3696, ((frost$core$Object*) $tmp3694));
frost$core$String* $tmp3697 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3695, &$s3698);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3697));
frost$core$String* $tmp3699 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3699));
*(&local1) = $tmp3697;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3694));
// line 1001
org$frostlang$frostc$Type* $tmp3700 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$String* $tmp3701 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3700);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3700));
// line 1002
frost$io$MemoryOutputStream** $tmp3702 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3703 = *$tmp3702;
frost$core$String* $tmp3704 = *(&local1);
frost$core$String* $tmp3705 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3706, $tmp3704);
frost$core$String* $tmp3707 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3705, &$s3708);
frost$core$Int64 $tmp3709 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp3710;
$tmp3710 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3710->value = $tmp3709;
frost$core$String* $tmp3711 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3712, ((frost$core$Object*) $tmp3710));
frost$core$String* $tmp3713 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3711, &$s3714);
frost$core$String* $tmp3715 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3707, $tmp3713);
frost$core$String* $tmp3716 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3715, &$s3717);
$fn3719 $tmp3718 = ($fn3719) ((frost$io$OutputStream*) $tmp3703)->$class->vtable[17];
frost$core$Error* $tmp3720 = $tmp3718(((frost$io$OutputStream*) $tmp3703), $tmp3716);
if ($tmp3720 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3720));
*(&local0) = $tmp3720;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3705));
frost$core$String* $tmp3721 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3721));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3705));
// line 1005
frost$collections$ListView* $tmp3722 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(param1);
ITable* $tmp3723 = ((frost$collections$Iterable*) $tmp3722)->$class->itable;
while ($tmp3723->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3723 = $tmp3723->next;
}
$fn3725 $tmp3724 = $tmp3723->methods[0];
frost$collections$Iterator* $tmp3726 = $tmp3724(((frost$collections$Iterable*) $tmp3722));
goto block5;
block5:;
ITable* $tmp3727 = $tmp3726->$class->itable;
while ($tmp3727->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3727 = $tmp3727->next;
}
$fn3729 $tmp3728 = $tmp3727->methods[0];
frost$core$Bit $tmp3730 = $tmp3728($tmp3726);
bool $tmp3731 = $tmp3730.value;
if ($tmp3731) goto block7; else goto block6;
block6:;
ITable* $tmp3732 = $tmp3726->$class->itable;
while ($tmp3732->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3732 = $tmp3732->next;
}
$fn3734 $tmp3733 = $tmp3732->methods[1];
frost$core$Object* $tmp3735 = $tmp3733($tmp3726);
*(&local2) = ((frost$core$Char8$wrapper*) $tmp3735)->value;
// line 1006
frost$io$MemoryOutputStream** $tmp3736 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3737 = *$tmp3736;
frost$core$Char8 $tmp3738 = *(&local2);
frost$core$UInt8 $tmp3739 = frost$core$Char8$get_asUInt8$R$frost$core$UInt8($tmp3738);
frost$core$UInt8$wrapper* $tmp3740;
$tmp3740 = (frost$core$UInt8$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp3740->value = $tmp3739;
ITable* $tmp3741 = ((frost$core$Formattable*) $tmp3740)->$class->itable;
while ($tmp3741->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp3741 = $tmp3741->next;
}
$fn3743 $tmp3742 = $tmp3741->methods[0];
frost$core$String* $tmp3744 = $tmp3742(((frost$core$Formattable*) $tmp3740), &$s3745);
frost$core$String* $tmp3746 = frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String($tmp3744, &$s3747);
frost$core$String* $tmp3748 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3749, $tmp3746);
frost$core$String* $tmp3750 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3748, &$s3751);
$fn3753 $tmp3752 = ($fn3753) ((frost$io$OutputStream*) $tmp3737)->$class->vtable[17];
frost$core$Error* $tmp3754 = $tmp3752(((frost$io$OutputStream*) $tmp3737), $tmp3750);
if ($tmp3754 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3754));
*(&local0) = $tmp3754;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3740)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3735);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3722));
frost$core$String* $tmp3755 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3755));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3740)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3735);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3722));
// line 1008
frost$io$MemoryOutputStream** $tmp3756 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3757 = *$tmp3756;
frost$collections$ListView* $tmp3758 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(param1);
ITable* $tmp3759 = ((frost$collections$CollectionView*) $tmp3758)->$class->itable;
while ($tmp3759->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3759 = $tmp3759->next;
}
$fn3761 $tmp3760 = $tmp3759->methods[0];
frost$core$Int64 $tmp3762 = $tmp3760(((frost$collections$CollectionView*) $tmp3758));
frost$core$Int64$wrapper* $tmp3763;
$tmp3763 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3763->value = $tmp3762;
frost$core$String* $tmp3764 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3765, ((frost$core$Object*) $tmp3763));
frost$core$String* $tmp3766 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3764, &$s3767);
ITable* $tmp3768 = ((frost$collections$Key*) param1)->$class->itable;
while ($tmp3768->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp3768 = $tmp3768->next;
}
$fn3770 $tmp3769 = $tmp3768->methods[0];
frost$core$Int64 $tmp3771 = $tmp3769(((frost$collections$Key*) param1));
frost$core$Int64$wrapper* $tmp3772;
$tmp3772 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3772->value = $tmp3771;
frost$core$String* $tmp3773 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3766, ((frost$core$Object*) $tmp3772));
frost$core$String* $tmp3774 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3773, &$s3775);
$fn3777 $tmp3776 = ($fn3777) ((frost$io$OutputStream*) $tmp3757)->$class->vtable[19];
frost$core$Error* $tmp3778 = $tmp3776(((frost$io$OutputStream*) $tmp3757), $tmp3774);
if ($tmp3778 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3778));
*(&local0) = $tmp3778;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3758));
frost$core$String* $tmp3779 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3779));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3758));
// line 1009
frost$core$String* $tmp3780 = *(&local1);
frost$core$String* $tmp3781 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3782, $tmp3780);
frost$core$String* $tmp3783 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3781, &$s3784);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3781));
frost$core$String* $tmp3785 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3785));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3786 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3786));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3783;
block1:;
// line 1012
frost$core$Bit $tmp3787 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3788 = $tmp3787.value;
if ($tmp3788) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp3789 = (frost$core$Int64) {1012};
frost$core$Error* $tmp3790 = *(&local0);
$fn3792 $tmp3791 = ($fn3792) ((frost$core$Object*) $tmp3790)->$class->vtable[0];
frost$core$String* $tmp3793 = $tmp3791(((frost$core$Object*) $tmp3790));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3794, $tmp3789, $tmp3793);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3793));
abort(); // unreachable
block12:;
// line 1013
goto block14;
block14:;
goto block14;
block15:;
goto block2;
block2:;
frost$core$Error* $tmp3795 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3795));
*(&local0) = ((frost$core$Error*) NULL);
goto block16;
block16:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 1018
org$frostlang$frostc$Type$Kind* $tmp3796 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp3797 = *$tmp3796;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3798;
$tmp3798 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3798->value = $tmp3797;
frost$core$Int64 $tmp3799 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3800 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3799);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3801;
$tmp3801 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3801->value = $tmp3800;
ITable* $tmp3802 = ((frost$core$Equatable*) $tmp3798)->$class->itable;
while ($tmp3802->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3802 = $tmp3802->next;
}
$fn3804 $tmp3803 = $tmp3802->methods[0];
frost$core$Bit $tmp3805 = $tmp3803(((frost$core$Equatable*) $tmp3798), ((frost$core$Equatable*) $tmp3801));
bool $tmp3806 = $tmp3805.value;
if ($tmp3806) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3807 = (frost$core$Int64) {1018};
frost$core$String* $tmp3808 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3809, ((frost$core$Object*) param1));
frost$core$String* $tmp3810 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3808, &$s3811);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3812, $tmp3807, $tmp3810);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3808));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3801)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3798)));
// line 1019
frost$core$Weak** $tmp3813 = &param0->compiler;
frost$core$Weak* $tmp3814 = *$tmp3813;
frost$core$Object* $tmp3815 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3814);
org$frostlang$frostc$FixedArray** $tmp3816 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp3817 = *$tmp3816;
frost$core$Int64 $tmp3818 = (frost$core$Int64) {0};
frost$core$Object* $tmp3819 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3817, $tmp3818);
org$frostlang$frostc$ClassDecl* $tmp3820 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3815), ((org$frostlang$frostc$Type*) $tmp3819));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3820));
org$frostlang$frostc$ClassDecl* $tmp3821 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3821));
*(&local0) = $tmp3820;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3820));
frost$core$Frost$unref$frost$core$Object$Q($tmp3819);
frost$core$Frost$unref$frost$core$Object$Q($tmp3815);
// line 1020
org$frostlang$frostc$ClassDecl* $tmp3822 = *(&local0);
frost$core$Bit $tmp3823 = frost$core$Bit$init$builtin_bit($tmp3822 != NULL);
bool $tmp3824 = $tmp3823.value;
if ($tmp3824) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp3825 = (frost$core$Int64) {1020};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3826, $tmp3825);
abort(); // unreachable
block3:;
// line 1021
frost$core$Weak** $tmp3827 = &param0->compiler;
frost$core$Weak* $tmp3828 = *$tmp3827;
frost$core$Object* $tmp3829 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3828);
org$frostlang$frostc$ClassDecl* $tmp3830 = *(&local0);
frost$core$Bit $tmp3831 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3829), $tmp3830);
bool $tmp3832 = $tmp3831.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3829);
if ($tmp3832) goto block5; else goto block7;
block5:;
// line 1022
frost$core$String* $tmp3833 = org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp3834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3835, $tmp3833);
frost$core$String* $tmp3836 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3834, &$s3837);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3833));
org$frostlang$frostc$ClassDecl* $tmp3838 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3838));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3836;
block7:;
// line 1
// line 1025
frost$core$String* $tmp3839 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp3840 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3841, $tmp3839);
frost$core$String* $tmp3842 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3840, &$s3843);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3842));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3842));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3839));
org$frostlang$frostc$ClassDecl* $tmp3844 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3844));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3842;
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
// line 1030
frost$core$Int64* $tmp3845 = &param1->$rawValue;
frost$core$Int64 $tmp3846 = *$tmp3845;
frost$core$Int64 $tmp3847 = (frost$core$Int64) {0};
frost$core$Bit $tmp3848 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3846, $tmp3847);
bool $tmp3849 = $tmp3848.value;
if ($tmp3849) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp3850 = (frost$core$Bit*) (param1->$data + 0);
frost$core$Bit $tmp3851 = *$tmp3850;
*(&local0) = $tmp3851;
// line 1032
frost$core$Bit $tmp3852 = *(&local0);
frost$core$Bit$wrapper* $tmp3853;
$tmp3853 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp3853->value = $tmp3852;
$fn3855 $tmp3854 = ($fn3855) ((frost$core$Object*) $tmp3853)->$class->vtable[0];
frost$core$String* $tmp3856 = $tmp3854(((frost$core$Object*) $tmp3853));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
return $tmp3856;
block3:;
frost$core$Int64 $tmp3857 = (frost$core$Int64) {1};
frost$core$Bit $tmp3858 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3846, $tmp3857);
bool $tmp3859 = $tmp3858.value;
if ($tmp3859) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp3860 = (frost$core$UInt64*) (param1->$data + 0);
frost$core$UInt64 $tmp3861 = *$tmp3860;
*(&local1) = $tmp3861;
org$frostlang$frostc$Type** $tmp3862 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3863 = *$tmp3862;
// line 1035
frost$core$UInt64 $tmp3864 = *(&local1);
frost$core$UInt64$wrapper* $tmp3865;
$tmp3865 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3865->value = $tmp3864;
$fn3867 $tmp3866 = ($fn3867) ((frost$core$Object*) $tmp3865)->$class->vtable[0];
frost$core$String* $tmp3868 = $tmp3866(((frost$core$Object*) $tmp3865));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3865));
return $tmp3868;
block5:;
frost$core$Int64 $tmp3869 = (frost$core$Int64) {2};
frost$core$Bit $tmp3870 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3846, $tmp3869);
bool $tmp3871 = $tmp3870.value;
if ($tmp3871) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp3872 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp3873 = *$tmp3872;
*(&local2) = $tmp3873;
org$frostlang$frostc$Type** $tmp3874 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3875 = *$tmp3874;
// line 1038
frost$core$Int64 $tmp3876 = *(&local2);
frost$core$Int64$wrapper* $tmp3877;
$tmp3877 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3877->value = $tmp3876;
frost$core$String* $tmp3878 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3879, ((frost$core$Object*) $tmp3877));
frost$core$String* $tmp3880 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3878, &$s3881);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3877));
return $tmp3880;
block7:;
frost$core$Int64 $tmp3882 = (frost$core$Int64) {3};
frost$core$Bit $tmp3883 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3846, $tmp3882);
bool $tmp3884 = $tmp3883.value;
if ($tmp3884) goto block8; else goto block9;
block8:;
org$frostlang$frostc$MethodDecl** $tmp3885 = (org$frostlang$frostc$MethodDecl**) (param1->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp3886 = *$tmp3885;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3886));
org$frostlang$frostc$MethodDecl* $tmp3887 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3887));
*(&local3) = $tmp3886;
org$frostlang$frostc$Type** $tmp3888 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3889 = *$tmp3888;
// line 1041
org$frostlang$frostc$MethodDecl* $tmp3890 = *(&local3);
frost$core$Weak** $tmp3891 = &$tmp3890->owner;
frost$core$Weak* $tmp3892 = *$tmp3891;
frost$core$Object* $tmp3893 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3892);
frost$core$Bit* $tmp3894 = &((org$frostlang$frostc$ClassDecl*) $tmp3893)->external;
frost$core$Bit $tmp3895 = *$tmp3894;
bool $tmp3896 = $tmp3895.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3893);
if ($tmp3896) goto block10; else goto block11;
block10:;
// line 1042
org$frostlang$frostc$MethodDecl* $tmp3897 = *(&local3);
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, $tmp3897);
goto block11;
block11:;
// line 1044
org$frostlang$frostc$MethodDecl* $tmp3898 = *(&local3);
frost$core$String* $tmp3899 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp3898);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3899));
org$frostlang$frostc$MethodDecl* $tmp3900 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3900));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp3899;
block9:;
frost$core$Int64 $tmp3901 = (frost$core$Int64) {4};
frost$core$Bit $tmp3902 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3846, $tmp3901);
bool $tmp3903 = $tmp3902.value;
if ($tmp3903) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Type** $tmp3904 = (org$frostlang$frostc$Type**) (param1->$data + 0);
org$frostlang$frostc$Type* $tmp3905 = *$tmp3904;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3905));
org$frostlang$frostc$Type* $tmp3906 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3906));
*(&local4) = $tmp3905;
// line 1047
org$frostlang$frostc$Type* $tmp3907 = *(&local4);
frost$core$String* $tmp3908 = org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3907);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3908));
org$frostlang$frostc$Type* $tmp3909 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3909));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp3908;
block13:;
frost$core$Int64 $tmp3910 = (frost$core$Int64) {5};
frost$core$Bit $tmp3911 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3846, $tmp3910);
bool $tmp3912 = $tmp3911.value;
if ($tmp3912) goto block14; else goto block15;
block14:;
frost$core$Int64* $tmp3913 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp3914 = *$tmp3913;
*(&local5) = $tmp3914;
org$frostlang$frostc$Type** $tmp3915 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3916 = *$tmp3915;
// line 1050
frost$core$Int64 $tmp3917 = *(&local5);
frost$core$Int64$wrapper* $tmp3918;
$tmp3918 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3918->value = $tmp3917;
frost$core$String* $tmp3919 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3920, ((frost$core$Object*) $tmp3918));
frost$core$String* $tmp3921 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3919, &$s3922);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3918));
return $tmp3921;
block15:;
frost$core$Int64 $tmp3923 = (frost$core$Int64) {6};
frost$core$Bit $tmp3924 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3846, $tmp3923);
bool $tmp3925 = $tmp3924.value;
if ($tmp3925) goto block16; else goto block17;
block16:;
frost$core$Real64* $tmp3926 = (frost$core$Real64*) (param1->$data + 0);
frost$core$Real64 $tmp3927 = *$tmp3926;
*(&local6) = $tmp3927;
org$frostlang$frostc$Type** $tmp3928 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3929 = *$tmp3928;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3929));
org$frostlang$frostc$Type* $tmp3930 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3930));
*(&local7) = $tmp3929;
// line 1053
org$frostlang$frostc$Type* $tmp3931 = *(&local7);
frost$core$Real64 $tmp3932 = *(&local6);
frost$core$String* $tmp3933 = org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String(param0, $tmp3931, $tmp3932);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3933));
org$frostlang$frostc$Type* $tmp3934 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3934));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp3933;
block17:;
frost$core$Int64 $tmp3935 = (frost$core$Int64) {7};
frost$core$Bit $tmp3936 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3846, $tmp3935);
bool $tmp3937 = $tmp3936.value;
if ($tmp3937) goto block18; else goto block19;
block18:;
org$frostlang$frostc$IR$Statement$ID* $tmp3938 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp3939 = *$tmp3938;
*(&local8) = $tmp3939;
org$frostlang$frostc$Type** $tmp3940 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3941 = *$tmp3940;
// line 1056
frost$collections$HashMap** $tmp3942 = &param0->refs;
frost$collections$HashMap* $tmp3943 = *$tmp3942;
org$frostlang$frostc$IR$Statement$ID $tmp3944 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3945;
$tmp3945 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3945->value = $tmp3944;
frost$core$Object* $tmp3946 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3943, ((frost$collections$Key*) $tmp3945));
frost$core$Bit $tmp3947 = frost$core$Bit$init$builtin_bit(((frost$core$String*) $tmp3946) != NULL);
bool $tmp3948 = $tmp3947.value;
if ($tmp3948) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp3949 = (frost$core$Int64) {1056};
org$frostlang$frostc$IR$Statement$ID $tmp3950 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3951;
$tmp3951 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3951->value = $tmp3950;
frost$core$String* $tmp3952 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3953, ((frost$core$Object*) $tmp3951));
frost$core$String* $tmp3954 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3952, &$s3955);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3956, $tmp3949, $tmp3954);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3952));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3951));
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3946);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3945)));
// line 1057
frost$collections$HashMap** $tmp3957 = &param0->refs;
frost$collections$HashMap* $tmp3958 = *$tmp3957;
org$frostlang$frostc$IR$Statement$ID $tmp3959 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3960;
$tmp3960 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3960->value = $tmp3959;
frost$core$Object* $tmp3961 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3958, ((frost$collections$Key*) $tmp3960));
frost$core$Bit $tmp3962 = frost$core$Bit$init$builtin_bit(((frost$core$String*) $tmp3961) == NULL);
bool $tmp3963 = $tmp3962.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3961);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3960)));
if ($tmp3963) goto block22; else goto block23;
block22:;
// line 1058
org$frostlang$frostc$IR$Statement$ID $tmp3964 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3965;
$tmp3965 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3965->value = $tmp3964;
frost$core$String* $tmp3966 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3967, ((frost$core$Object*) $tmp3965));
frost$core$String* $tmp3968 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3966, &$s3969);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3965));
return $tmp3968;
block23:;
// line 1060
frost$collections$HashMap** $tmp3970 = &param0->refs;
frost$collections$HashMap* $tmp3971 = *$tmp3970;
org$frostlang$frostc$IR$Statement$ID $tmp3972 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3973;
$tmp3973 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3973->value = $tmp3972;
frost$core$Object* $tmp3974 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3971, ((frost$collections$Key*) $tmp3973));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp3974)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3974);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3973)));
return ((frost$core$String*) $tmp3974);
block19:;
frost$core$Int64 $tmp3975 = (frost$core$Int64) {8};
frost$core$Bit $tmp3976 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3846, $tmp3975);
bool $tmp3977 = $tmp3976.value;
if ($tmp3977) goto block24; else goto block25;
block24:;
frost$core$String** $tmp3978 = (frost$core$String**) (param1->$data + 0);
frost$core$String* $tmp3979 = *$tmp3978;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
frost$core$String* $tmp3980 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3980));
*(&local9) = $tmp3979;
// line 1063
frost$core$String* $tmp3981 = *(&local9);
frost$core$String* $tmp3982 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp3981);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3982));
frost$core$String* $tmp3983 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3983));
*(&local9) = ((frost$core$String*) NULL);
return $tmp3982;
block25:;
// line 1066
frost$core$Bit $tmp3984 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3985 = $tmp3984.value;
if ($tmp3985) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp3986 = (frost$core$Int64) {1066};
frost$core$String* $tmp3987 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3988, ((frost$core$Object*) param1));
frost$core$String* $tmp3989 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3987, &$s3990);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3991, $tmp3986, $tmp3989);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
abort(); // unreachable
block26:;
// line 1067
goto block28;
block28:;
goto block28;
block29:;
goto block1;
block1:;
goto block30;
block30:;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ChoiceCase* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 1073
frost$core$Int64 $tmp3992 = (frost$core$Int64) {0};
*(&local0) = $tmp3992;
// line 1074
frost$core$Int64 $tmp3993 = (frost$core$Int64) {0};
frost$core$Bit $tmp3994 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3995 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3993, param2, $tmp3994);
frost$core$Int64 $tmp3996 = $tmp3995.min;
*(&local1) = $tmp3996;
frost$core$Int64 $tmp3997 = $tmp3995.max;
frost$core$Bit $tmp3998 = $tmp3995.inclusive;
bool $tmp3999 = $tmp3998.value;
frost$core$Int64 $tmp4000 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp4001 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp4000);
if ($tmp3999) goto block4; else goto block5;
block4:;
int64_t $tmp4002 = $tmp3996.value;
int64_t $tmp4003 = $tmp3997.value;
bool $tmp4004 = $tmp4002 <= $tmp4003;
frost$core$Bit $tmp4005 = (frost$core$Bit) {$tmp4004};
bool $tmp4006 = $tmp4005.value;
if ($tmp4006) goto block1; else goto block2;
block5:;
int64_t $tmp4007 = $tmp3996.value;
int64_t $tmp4008 = $tmp3997.value;
bool $tmp4009 = $tmp4007 < $tmp4008;
frost$core$Bit $tmp4010 = (frost$core$Bit) {$tmp4009};
bool $tmp4011 = $tmp4010.value;
if ($tmp4011) goto block1; else goto block2;
block1:;
// line 1076
frost$core$Int64 $tmp4012 = *(&local0);
frost$collections$Array** $tmp4013 = &param1->fields;
frost$collections$Array* $tmp4014 = *$tmp4013;
frost$core$Int64 $tmp4015 = *(&local1);
frost$core$Object* $tmp4016 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4014, $tmp4015);
frost$core$Int64 $tmp4017 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, ((org$frostlang$frostc$Type*) $tmp4016));
int64_t $tmp4018 = $tmp4012.value;
int64_t $tmp4019 = $tmp4017.value;
int64_t $tmp4020 = $tmp4018 + $tmp4019;
frost$core$Int64 $tmp4021 = (frost$core$Int64) {$tmp4020};
*(&local0) = $tmp4021;
frost$core$Frost$unref$frost$core$Object$Q($tmp4016);
goto block3;
block3:;
frost$core$Int64 $tmp4022 = *(&local1);
int64_t $tmp4023 = $tmp3997.value;
int64_t $tmp4024 = $tmp4022.value;
int64_t $tmp4025 = $tmp4023 - $tmp4024;
frost$core$Int64 $tmp4026 = (frost$core$Int64) {$tmp4025};
frost$core$UInt64 $tmp4027 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp4026);
if ($tmp3999) goto block7; else goto block8;
block7:;
uint64_t $tmp4028 = $tmp4027.value;
uint64_t $tmp4029 = $tmp4001.value;
bool $tmp4030 = $tmp4028 >= $tmp4029;
frost$core$Bit $tmp4031 = (frost$core$Bit) {$tmp4030};
bool $tmp4032 = $tmp4031.value;
if ($tmp4032) goto block6; else goto block2;
block8:;
uint64_t $tmp4033 = $tmp4027.value;
uint64_t $tmp4034 = $tmp4001.value;
bool $tmp4035 = $tmp4033 > $tmp4034;
frost$core$Bit $tmp4036 = (frost$core$Bit) {$tmp4035};
bool $tmp4037 = $tmp4036.value;
if ($tmp4037) goto block6; else goto block2;
block6:;
int64_t $tmp4038 = $tmp4022.value;
int64_t $tmp4039 = $tmp4000.value;
int64_t $tmp4040 = $tmp4038 + $tmp4039;
frost$core$Int64 $tmp4041 = (frost$core$Int64) {$tmp4040};
*(&local1) = $tmp4041;
goto block1;
block2:;
// line 1078
frost$core$Int64 $tmp4042 = *(&local0);
return $tmp4042;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$Bit local1;
// line 1082
frost$core$Weak** $tmp4043 = &param1->owner;
frost$core$Weak* $tmp4044 = *$tmp4043;
frost$core$Object* $tmp4045 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4044);
org$frostlang$frostc$Type** $tmp4046 = &((org$frostlang$frostc$ClassDecl*) $tmp4045)->type;
org$frostlang$frostc$Type* $tmp4047 = *$tmp4046;
frost$core$String* $tmp4048 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4047);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
frost$core$String* $tmp4049 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4049));
*(&local0) = $tmp4048;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
frost$core$Frost$unref$frost$core$Object$Q($tmp4045);
// line 1083
org$frostlang$frostc$MethodDecl$Kind* $tmp4050 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp4051 = *$tmp4050;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp4052;
$tmp4052 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp4052->value = $tmp4051;
frost$core$Int64 $tmp4053 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp4054 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4053);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp4055;
$tmp4055 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp4055->value = $tmp4054;
ITable* $tmp4056 = ((frost$core$Equatable*) $tmp4052)->$class->itable;
while ($tmp4056->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4056 = $tmp4056->next;
}
$fn4058 $tmp4057 = $tmp4056->methods[0];
frost$core$Bit $tmp4059 = $tmp4057(((frost$core$Equatable*) $tmp4052), ((frost$core$Equatable*) $tmp4055));
bool $tmp4060 = $tmp4059.value;
if ($tmp4060) goto block3; else goto block4;
block3:;
frost$core$String* $tmp4061 = *(&local0);
frost$core$Bit $tmp4062 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp4061, &$s4063);
frost$core$Bit $tmp4064 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp4062);
*(&local1) = $tmp4064;
goto block5;
block4:;
*(&local1) = $tmp4059;
goto block5;
block5:;
frost$core$Bit $tmp4065 = *(&local1);
bool $tmp4066 = $tmp4065.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4055)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4052)));
if ($tmp4066) goto block1; else goto block2;
block1:;
// line 1084
frost$core$String* $tmp4067 = *(&local0);
frost$core$String* $tmp4068 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4067, &$s4069);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4068));
frost$core$String* $tmp4070 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4070));
*(&local0) = ((frost$core$String*) NULL);
return $tmp4068;
block2:;
// line 1086
frost$core$String* $tmp4071 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4071));
frost$core$String* $tmp4072 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4072));
*(&local0) = ((frost$core$String*) NULL);
return $tmp4071;

}
void org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1090
frost$core$String* $tmp4073 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4073));
frost$core$String* $tmp4074 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4074));
*(&local0) = $tmp4073;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4073));
// line 1091
frost$core$Weak** $tmp4075 = &param0->compiler;
frost$core$Weak* $tmp4076 = *$tmp4075;
frost$core$Object* $tmp4077 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4076);
$fn4079 $tmp4078 = ($fn4079) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4080 = $tmp4078(param2);
org$frostlang$frostc$ClassDecl* $tmp4081 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp4077), $tmp4080);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4081));
org$frostlang$frostc$ClassDecl* $tmp4082 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4082));
*(&local1) = $tmp4081;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4080));
frost$core$Frost$unref$frost$core$Object$Q($tmp4077);
// line 1092
org$frostlang$frostc$ClassDecl* $tmp4083 = *(&local1);
frost$core$Bit $tmp4084 = frost$core$Bit$init$builtin_bit($tmp4083 != NULL);
bool $tmp4085 = $tmp4084.value;
if ($tmp4085) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp4086 = (frost$core$Int64) {1092};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4087, $tmp4086);
abort(); // unreachable
block1:;
// line 1093
*(&local2) = ((frost$core$String*) NULL);
// line 1094
frost$core$Weak** $tmp4088 = &param0->compiler;
frost$core$Weak* $tmp4089 = *$tmp4088;
frost$core$Object* $tmp4090 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4089);
org$frostlang$frostc$ClassDecl* $tmp4091 = *(&local1);
frost$core$Bit $tmp4092 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4090), $tmp4091);
bool $tmp4093 = $tmp4092.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp4090);
if ($tmp4093) goto block3; else goto block5;
block3:;
// line 1095
$fn4095 $tmp4094 = ($fn4095) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4096 = $tmp4094(param2);
org$frostlang$frostc$Type$Kind* $tmp4097 = &$tmp4096->typeKind;
org$frostlang$frostc$Type$Kind $tmp4098 = *$tmp4097;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4099;
$tmp4099 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4099->value = $tmp4098;
frost$core$Int64 $tmp4100 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp4101 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp4100);
org$frostlang$frostc$Type$Kind$wrapper* $tmp4102;
$tmp4102 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4102->value = $tmp4101;
ITable* $tmp4103 = ((frost$core$Equatable*) $tmp4099)->$class->itable;
while ($tmp4103->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4103 = $tmp4103->next;
}
$fn4105 $tmp4104 = $tmp4103->methods[1];
frost$core$Bit $tmp4106 = $tmp4104(((frost$core$Equatable*) $tmp4099), ((frost$core$Equatable*) $tmp4102));
bool $tmp4107 = $tmp4106.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4102)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4099)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4096));
if ($tmp4107) goto block6; else goto block8;
block6:;
// line 1096
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4108));
frost$core$String* $tmp4109 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4109));
*(&local2) = &$s4110;
goto block7;
block8:;
// line 1
// line 1099
frost$core$String* $tmp4111 = *(&local0);
frost$core$String* $tmp4112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4113, $tmp4111);
frost$core$String* $tmp4114 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4112, &$s4115);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4114));
frost$core$String* $tmp4116 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4116));
*(&local2) = $tmp4114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4112));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1103
frost$core$String* $tmp4117 = *(&local0);
frost$core$String* $tmp4118 = frost$core$String$get_asString$R$frost$core$String($tmp4117);
frost$core$String* $tmp4119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4118, &$s4120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4119));
frost$core$String* $tmp4121 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4121));
*(&local2) = $tmp4119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4118));
goto block4;
block4:;
// line 1105
frost$collections$HashMap** $tmp4122 = &param0->refs;
frost$collections$HashMap* $tmp4123 = *$tmp4122;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4124;
$tmp4124 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4124->value = param1;
frost$core$String* $tmp4125 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4123, ((frost$collections$Key*) $tmp4124), ((frost$core$Object*) $tmp4125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4124)));
frost$core$String* $tmp4126 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4126));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4127 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4127));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp4128 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4128));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1109
frost$core$String* $tmp4129 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4129));
frost$core$String* $tmp4130 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4130));
*(&local0) = $tmp4129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4129));
// line 1110
frost$core$Weak** $tmp4131 = &param0->compiler;
frost$core$Weak* $tmp4132 = *$tmp4131;
frost$core$Object* $tmp4133 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4132);
$fn4135 $tmp4134 = ($fn4135) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4136 = $tmp4134(param2);
org$frostlang$frostc$ClassDecl* $tmp4137 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp4133), $tmp4136);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4137));
org$frostlang$frostc$ClassDecl* $tmp4138 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4138));
*(&local1) = $tmp4137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4136));
frost$core$Frost$unref$frost$core$Object$Q($tmp4133);
// line 1111
org$frostlang$frostc$ClassDecl* $tmp4139 = *(&local1);
frost$core$Bit $tmp4140 = frost$core$Bit$init$builtin_bit($tmp4139 != NULL);
bool $tmp4141 = $tmp4140.value;
if ($tmp4141) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp4142 = (frost$core$Int64) {1111};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4143, $tmp4142);
abort(); // unreachable
block1:;
// line 1112
*(&local2) = ((frost$core$String*) NULL);
// line 1113
frost$core$Weak** $tmp4144 = &param0->compiler;
frost$core$Weak* $tmp4145 = *$tmp4144;
frost$core$Object* $tmp4146 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4145);
org$frostlang$frostc$ClassDecl* $tmp4147 = *(&local1);
frost$core$Bit $tmp4148 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4146), $tmp4147);
bool $tmp4149 = $tmp4148.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp4146);
if ($tmp4149) goto block3; else goto block5;
block3:;
// line 1114
$fn4151 $tmp4150 = ($fn4151) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4152 = $tmp4150(param2);
org$frostlang$frostc$Type$Kind* $tmp4153 = &$tmp4152->typeKind;
org$frostlang$frostc$Type$Kind $tmp4154 = *$tmp4153;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4155;
$tmp4155 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4155->value = $tmp4154;
frost$core$Int64 $tmp4156 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp4157 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp4156);
org$frostlang$frostc$Type$Kind$wrapper* $tmp4158;
$tmp4158 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4158->value = $tmp4157;
ITable* $tmp4159 = ((frost$core$Equatable*) $tmp4155)->$class->itable;
while ($tmp4159->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4159 = $tmp4159->next;
}
$fn4161 $tmp4160 = $tmp4159->methods[1];
frost$core$Bit $tmp4162 = $tmp4160(((frost$core$Equatable*) $tmp4155), ((frost$core$Equatable*) $tmp4158));
bool $tmp4163 = $tmp4162.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4158)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4155)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4152));
if ($tmp4163) goto block6; else goto block8;
block6:;
// line 1115
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4164));
frost$core$String* $tmp4165 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4165));
*(&local2) = &$s4166;
goto block7;
block8:;
// line 1
// line 1118
frost$core$String* $tmp4167 = *(&local0);
frost$core$String* $tmp4168 = frost$core$String$get_asString$R$frost$core$String($tmp4167);
frost$core$String* $tmp4169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4168, &$s4170);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4169));
frost$core$String* $tmp4171 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4171));
*(&local2) = $tmp4169;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4168));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1122
frost$core$String* $tmp4172 = *(&local0);
frost$core$String* $tmp4173 = frost$core$String$get_asString$R$frost$core$String($tmp4172);
frost$core$String* $tmp4174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4173, &$s4175);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4174));
frost$core$String* $tmp4176 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4176));
*(&local2) = $tmp4174;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4173));
goto block4;
block4:;
// line 1124
frost$collections$HashMap** $tmp4177 = &param0->refs;
frost$collections$HashMap* $tmp4178 = *$tmp4177;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4179;
$tmp4179 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4179->value = param1;
frost$core$String* $tmp4180 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4178, ((frost$collections$Key*) $tmp4179), ((frost$core$Object*) $tmp4180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4179)));
frost$core$String* $tmp4181 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4181));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4182 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4182));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp4183 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4183));
*(&local0) = ((frost$core$String*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

// line 1128
frost$core$Int64* $tmp4184 = &param1->$rawValue;
frost$core$Int64 $tmp4185 = *$tmp4184;
frost$core$Int64 $tmp4186 = (frost$core$Int64) {4};
frost$core$Bit $tmp4187 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4185, $tmp4186);
bool $tmp4188 = $tmp4187.value;
if ($tmp4188) goto block2; else goto block1;
block2:;
// line 1130
frost$core$Bit $tmp4189 = frost$core$Bit$init$builtin_bit(true);
return $tmp4189;
block1:;
// line 1133
frost$core$Bit $tmp4190 = frost$core$Bit$init$builtin_bit(false);
return $tmp4190;

}
void org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$expression$Binary$Operator param3, org$frostlang$frostc$IR$Value* param4, org$frostlang$frostc$Type* param5) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$Error* local4 = NULL;
// line 1138
frost$core$String* $tmp4191 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4191));
frost$core$String* $tmp4192 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4192));
*(&local0) = $tmp4191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4191));
// line 1139
frost$core$String* $tmp4193 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param4);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4193));
frost$core$String* $tmp4194 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4194));
*(&local1) = $tmp4193;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4193));
// line 1140
$fn4196 $tmp4195 = ($fn4196) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4197 = $tmp4195(param2);
frost$core$Bit $tmp4198 = org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit($tmp4197);
bool $tmp4199 = $tmp4198.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4197));
if ($tmp4199) goto block1; else goto block2;
block1:;
// line 1141
frost$core$Int64 $tmp4200 = param3.$rawValue;
frost$core$Int64 $tmp4201 = (frost$core$Int64) {21};
frost$core$Bit $tmp4202 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4200, $tmp4201);
bool $tmp4203 = $tmp4202.value;
if ($tmp4203) goto block4; else goto block5;
block4:;
// line 1143
frost$core$Bit $tmp4204 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param2);
bool $tmp4205 = $tmp4204.value;
if ($tmp4205) goto block6; else goto block7;
block6:;
// line 1144
org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param4);
// line 1145
frost$core$String* $tmp4206 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4206));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4207 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4207));
*(&local0) = ((frost$core$String*) NULL);
return;
block7:;
// line 1147
frost$core$Bit $tmp4208 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param4);
bool $tmp4209 = $tmp4208.value;
if ($tmp4209) goto block8; else goto block9;
block8:;
// line 1148
org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param2);
// line 1149
frost$core$String* $tmp4210 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4210));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4211 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4211));
*(&local0) = ((frost$core$String*) NULL);
return;
block9:;
goto block3;
block5:;
frost$core$Int64 $tmp4212 = (frost$core$Int64) {22};
frost$core$Bit $tmp4213 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4200, $tmp4212);
bool $tmp4214 = $tmp4213.value;
if ($tmp4214) goto block10; else goto block3;
block10:;
// line 1153
frost$core$Bit $tmp4215 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param2);
bool $tmp4216 = $tmp4215.value;
if ($tmp4216) goto block11; else goto block12;
block11:;
// line 1154
org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param4);
// line 1155
frost$core$String* $tmp4217 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4217));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4218 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4218));
*(&local0) = ((frost$core$String*) NULL);
return;
block12:;
// line 1157
frost$core$Bit $tmp4219 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param4);
bool $tmp4220 = $tmp4219.value;
if ($tmp4220) goto block13; else goto block14;
block13:;
// line 1158
org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param2);
// line 1159
frost$core$String* $tmp4221 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4221));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4222 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4222));
*(&local0) = ((frost$core$String*) NULL);
return;
block14:;
goto block3;
block3:;
goto block2;
block2:;
// line 1164
*(&local2) = ((frost$core$String*) NULL);
// line 1165
frost$core$Int64 $tmp4223 = param3.$rawValue;
frost$core$Int64 $tmp4224 = (frost$core$Int64) {0};
frost$core$Bit $tmp4225 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4224);
bool $tmp4226 = $tmp4225.value;
if ($tmp4226) goto block16; else goto block17;
block16:;
// line 1167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4227));
frost$core$String* $tmp4228 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4228));
*(&local2) = &$s4229;
goto block15;
block17:;
frost$core$Int64 $tmp4230 = (frost$core$Int64) {1};
frost$core$Bit $tmp4231 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4230);
bool $tmp4232 = $tmp4231.value;
if ($tmp4232) goto block18; else goto block19;
block18:;
// line 1170
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4233));
frost$core$String* $tmp4234 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4234));
*(&local2) = &$s4235;
goto block15;
block19:;
frost$core$Int64 $tmp4236 = (frost$core$Int64) {2};
frost$core$Bit $tmp4237 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4236);
bool $tmp4238 = $tmp4237.value;
if ($tmp4238) goto block20; else goto block21;
block20:;
// line 1173
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4239));
frost$core$String* $tmp4240 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4240));
*(&local2) = &$s4241;
goto block15;
block21:;
frost$core$Int64 $tmp4242 = (frost$core$Int64) {3};
frost$core$Bit $tmp4243 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4242);
bool $tmp4244 = $tmp4243.value;
if ($tmp4244) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp4245 = (frost$core$Int64) {4};
frost$core$Bit $tmp4246 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4245);
bool $tmp4247 = $tmp4246.value;
if ($tmp4247) goto block22; else goto block24;
block22:;
// line 1176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4248));
frost$core$String* $tmp4249 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4249));
*(&local2) = &$s4250;
goto block15;
block24:;
frost$core$Int64 $tmp4251 = (frost$core$Int64) {5};
frost$core$Bit $tmp4252 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4251);
bool $tmp4253 = $tmp4252.value;
if ($tmp4253) goto block25; else goto block26;
block25:;
// line 1179
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4254));
frost$core$String* $tmp4255 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4255));
*(&local2) = &$s4256;
goto block15;
block26:;
frost$core$Int64 $tmp4257 = (frost$core$Int64) {18};
frost$core$Bit $tmp4258 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4257);
bool $tmp4259 = $tmp4258.value;
if ($tmp4259) goto block27; else goto block28;
block27:;
// line 1182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4260));
frost$core$String* $tmp4261 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4261));
*(&local2) = &$s4262;
goto block15;
block28:;
frost$core$Int64 $tmp4263 = (frost$core$Int64) {19};
frost$core$Bit $tmp4264 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4263);
bool $tmp4265 = $tmp4264.value;
if ($tmp4265) goto block29; else goto block30;
block29:;
// line 1185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4266));
frost$core$String* $tmp4267 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4267));
*(&local2) = &$s4268;
goto block15;
block30:;
frost$core$Int64 $tmp4269 = (frost$core$Int64) {14};
frost$core$Bit $tmp4270 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4269);
bool $tmp4271 = $tmp4270.value;
if ($tmp4271) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp4272 = (frost$core$Int64) {15};
frost$core$Bit $tmp4273 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4272);
bool $tmp4274 = $tmp4273.value;
if ($tmp4274) goto block31; else goto block33;
block31:;
// line 1188
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4275));
frost$core$String* $tmp4276 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4276));
*(&local2) = &$s4277;
goto block15;
block33:;
frost$core$Int64 $tmp4278 = (frost$core$Int64) {12};
frost$core$Bit $tmp4279 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4278);
bool $tmp4280 = $tmp4279.value;
if ($tmp4280) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp4281 = (frost$core$Int64) {13};
frost$core$Bit $tmp4282 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4281);
bool $tmp4283 = $tmp4282.value;
if ($tmp4283) goto block34; else goto block36;
block34:;
// line 1191
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4284));
frost$core$String* $tmp4285 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4285));
*(&local2) = &$s4286;
goto block15;
block36:;
frost$core$Int64 $tmp4287 = (frost$core$Int64) {16};
frost$core$Bit $tmp4288 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4287);
bool $tmp4289 = $tmp4288.value;
if ($tmp4289) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp4290 = (frost$core$Int64) {17};
frost$core$Bit $tmp4291 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4290);
bool $tmp4292 = $tmp4291.value;
if ($tmp4292) goto block37; else goto block39;
block37:;
// line 1194
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4293));
frost$core$String* $tmp4294 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4294));
*(&local2) = &$s4295;
goto block15;
block39:;
frost$core$Int64 $tmp4296 = (frost$core$Int64) {6};
frost$core$Bit $tmp4297 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4296);
bool $tmp4298 = $tmp4297.value;
if ($tmp4298) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp4299 = (frost$core$Int64) {21};
frost$core$Bit $tmp4300 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4299);
bool $tmp4301 = $tmp4300.value;
if ($tmp4301) goto block40; else goto block42;
block40:;
// line 1197
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4302));
frost$core$String* $tmp4303 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4303));
*(&local2) = &$s4304;
goto block15;
block42:;
frost$core$Int64 $tmp4305 = (frost$core$Int64) {7};
frost$core$Bit $tmp4306 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4305);
bool $tmp4307 = $tmp4306.value;
if ($tmp4307) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp4308 = (frost$core$Int64) {22};
frost$core$Bit $tmp4309 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4308);
bool $tmp4310 = $tmp4309.value;
if ($tmp4310) goto block43; else goto block45;
block43:;
// line 1200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4311));
frost$core$String* $tmp4312 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4312));
*(&local2) = &$s4313;
goto block15;
block45:;
frost$core$Int64 $tmp4314 = (frost$core$Int64) {8};
frost$core$Bit $tmp4315 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4314);
bool $tmp4316 = $tmp4315.value;
if ($tmp4316) goto block46; else goto block47;
block46:;
// line 1203
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4317));
frost$core$String* $tmp4318 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4318));
*(&local2) = &$s4319;
goto block15;
block47:;
frost$core$Int64 $tmp4320 = (frost$core$Int64) {9};
frost$core$Bit $tmp4321 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4320);
bool $tmp4322 = $tmp4321.value;
if ($tmp4322) goto block48; else goto block49;
block48:;
// line 1206
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4323));
frost$core$String* $tmp4324 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4324));
*(&local2) = &$s4325;
goto block15;
block49:;
frost$core$Int64 $tmp4326 = (frost$core$Int64) {10};
frost$core$Bit $tmp4327 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4326);
bool $tmp4328 = $tmp4327.value;
if ($tmp4328) goto block50; else goto block51;
block50:;
// line 1209
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4329));
frost$core$String* $tmp4330 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4330));
*(&local2) = &$s4331;
goto block15;
block51:;
frost$core$Int64 $tmp4332 = (frost$core$Int64) {11};
frost$core$Bit $tmp4333 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4223, $tmp4332);
bool $tmp4334 = $tmp4333.value;
if ($tmp4334) goto block52; else goto block53;
block52:;
// line 1212
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4335));
frost$core$String* $tmp4336 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4336));
*(&local2) = &$s4337;
goto block15;
block53:;
// line 1215
frost$core$Bit $tmp4338 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4339 = $tmp4338.value;
if ($tmp4339) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp4340 = (frost$core$Int64) {1215};
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp4341;
$tmp4341 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp4341->value = param3;
frost$core$String* $tmp4342 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4343, ((frost$core$Object*) $tmp4341));
frost$core$String* $tmp4344 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4342, &$s4345);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4346, $tmp4340, $tmp4344);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4341));
abort(); // unreachable
block54:;
// line 1216
goto block56;
block56:;
goto block56;
block57:;
goto block15;
block15:;
// line 1219
frost$core$String* $tmp4347 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4347));
frost$core$String* $tmp4348 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4348));
*(&local3) = $tmp4347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4347));
// line 1220
*(&local4) = ((frost$core$Error*) NULL);
// line 1221
frost$io$IndentedOutputStream** $tmp4349 = &param0->out;
frost$io$IndentedOutputStream* $tmp4350 = *$tmp4349;
frost$core$String* $tmp4351 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param5);
frost$core$String* $tmp4352 = frost$core$String$get_asString$R$frost$core$String($tmp4351);
frost$core$String* $tmp4353 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4352, &$s4354);
frost$core$String* $tmp4355 = *(&local3);
frost$core$String* $tmp4356 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4353, $tmp4355);
frost$core$String* $tmp4357 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4356, &$s4358);
frost$core$String* $tmp4359 = *(&local0);
frost$core$String* $tmp4360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4357, $tmp4359);
frost$core$String* $tmp4361 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4360, &$s4362);
frost$core$String* $tmp4363 = *(&local2);
frost$core$String* $tmp4364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4361, $tmp4363);
frost$core$String* $tmp4365 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4364, &$s4366);
frost$core$String* $tmp4367 = *(&local1);
frost$core$String* $tmp4368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4365, $tmp4367);
frost$core$String* $tmp4369 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4368, &$s4370);
$fn4372 $tmp4371 = ($fn4372) ((frost$io$OutputStream*) $tmp4350)->$class->vtable[19];
frost$core$Error* $tmp4373 = $tmp4371(((frost$io$OutputStream*) $tmp4350), $tmp4369);
if ($tmp4373 == NULL) goto block60; else goto block61;
block61:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4373));
*(&local4) = $tmp4373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4351));
goto block58;
block60:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4351));
goto block59;
block58:;
// line 1224
frost$core$Bit $tmp4374 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4375 = $tmp4374.value;
if ($tmp4375) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp4376 = (frost$core$Int64) {1224};
frost$core$Error* $tmp4377 = *(&local4);
$fn4379 $tmp4378 = ($fn4379) ((frost$core$Object*) $tmp4377)->$class->vtable[0];
frost$core$String* $tmp4380 = $tmp4378(((frost$core$Object*) $tmp4377));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4381, $tmp4376, $tmp4380);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4380));
abort(); // unreachable
block62:;
// line 1225
goto block64;
block64:;
goto block64;
block65:;
goto block59;
block59:;
frost$core$Error* $tmp4382 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4382));
*(&local4) = ((frost$core$Error*) NULL);
// line 1227
frost$collections$HashMap** $tmp4383 = &param0->refs;
frost$collections$HashMap* $tmp4384 = *$tmp4383;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4385;
$tmp4385 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4385->value = param1;
frost$core$String* $tmp4386 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4384, ((frost$collections$Key*) $tmp4385), ((frost$core$Object*) $tmp4386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4385)));
frost$core$String* $tmp4387 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4387));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4388 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4388));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4389 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4389));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4390 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4390));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Block$ID param1) {

frost$core$Error* local0 = NULL;
// line 1231
*(&local0) = ((frost$core$Error*) NULL);
// line 1232
frost$io$IndentedOutputStream** $tmp4391 = &param0->out;
frost$io$IndentedOutputStream* $tmp4392 = *$tmp4391;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4393;
$tmp4393 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4393->value = param1;
frost$core$String* $tmp4394 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4395, ((frost$core$Object*) $tmp4393));
frost$core$String* $tmp4396 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4394, &$s4397);
$fn4399 $tmp4398 = ($fn4399) ((frost$io$OutputStream*) $tmp4392)->$class->vtable[19];
frost$core$Error* $tmp4400 = $tmp4398(((frost$io$OutputStream*) $tmp4392), $tmp4396);
if ($tmp4400 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4400));
*(&local0) = $tmp4400;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4393));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4393));
goto block2;
block1:;
// line 1235
frost$core$Bit $tmp4401 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4402 = $tmp4401.value;
if ($tmp4402) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp4403 = (frost$core$Int64) {1235};
frost$core$Error* $tmp4404 = *(&local0);
$fn4406 $tmp4405 = ($fn4406) ((frost$core$Object*) $tmp4404)->$class->vtable[0];
frost$core$String* $tmp4407 = $tmp4405(((frost$core$Object*) $tmp4404));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4408, $tmp4403, $tmp4407);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4407));
abort(); // unreachable
block5:;
// line 1236
goto block7;
block7:;
goto block7;
block8:;
goto block2;
block2:;
frost$core$Error* $tmp4409 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4409));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$Type* param3) {

// line 1241
frost$collections$HashMap** $tmp4410 = &param0->refs;
frost$collections$HashMap* $tmp4411 = *$tmp4410;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4412;
$tmp4412 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4412->value = param1;
frost$core$String* $tmp4413 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
$fn4415 $tmp4414 = ($fn4415) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4416 = $tmp4414(param2);
frost$core$String* $tmp4417 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4413, $tmp4416, param3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4411, ((frost$collections$Key*) $tmp4412), ((frost$core$Object*) $tmp4417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4412)));
return;

}
void org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Block$ID param2, org$frostlang$frostc$IR$Block$ID param3) {

frost$core$Error* local0 = NULL;
// line 1245
*(&local0) = ((frost$core$Error*) NULL);
// line 1246
frost$io$IndentedOutputStream** $tmp4418 = &param0->out;
frost$io$IndentedOutputStream* $tmp4419 = *$tmp4418;
frost$core$String* $tmp4420 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp4421 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4422, $tmp4420);
frost$core$String* $tmp4423 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4421, &$s4424);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4425;
$tmp4425 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4425->value = param2;
frost$core$String* $tmp4426 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4423, ((frost$core$Object*) $tmp4425));
frost$core$String* $tmp4427 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4426, &$s4428);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4429;
$tmp4429 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4429->value = param3;
frost$core$String* $tmp4430 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4427, ((frost$core$Object*) $tmp4429));
frost$core$String* $tmp4431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4430, &$s4432);
$fn4434 $tmp4433 = ($fn4434) ((frost$io$OutputStream*) $tmp4419)->$class->vtable[19];
frost$core$Error* $tmp4435 = $tmp4433(((frost$io$OutputStream*) $tmp4419), $tmp4431);
if ($tmp4435 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4435));
*(&local0) = $tmp4435;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4420));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4420));
goto block2;
block1:;
// line 1249
frost$core$Bit $tmp4436 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4437 = $tmp4436.value;
if ($tmp4437) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp4438 = (frost$core$Int64) {1249};
frost$core$Error* $tmp4439 = *(&local0);
$fn4441 $tmp4440 = ($fn4441) ((frost$core$Object*) $tmp4439)->$class->vtable[0];
frost$core$String* $tmp4442 = $tmp4440(((frost$core$Object*) $tmp4439));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4443, $tmp4438, $tmp4442);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4442));
abort(); // unreachable
block5:;
// line 1250
goto block7;
block7:;
goto block7;
block8:;
goto block2;
block2:;
frost$core$Error* $tmp4444 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4444));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$ClassDecl* param2) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
// line 1255
*(&local0) = ((frost$core$Error*) NULL);
// line 1256
frost$core$Weak** $tmp4445 = &param0->compiler;
frost$core$Weak* $tmp4446 = *$tmp4445;
frost$core$Object* $tmp4447 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4446);
frost$core$Bit $tmp4448 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4447), param2);
frost$core$Bit $tmp4449 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp4448);
bool $tmp4450 = $tmp4449.value;
if ($tmp4450) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4451 = (frost$core$Int64) {1256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4452, $tmp4451);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4447);
// line 1257
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4453 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param2);
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4453));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4454 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4454));
*(&local1) = $tmp4453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4453));
// line 1258
*(&local2) = ((frost$core$String*) NULL);
// line 1259
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4455 = *(&local1);
frost$core$String** $tmp4456 = &$tmp4455->type;
frost$core$String* $tmp4457 = *$tmp4456;
ITable* $tmp4459 = ((frost$core$Equatable*) $tmp4457)->$class->itable;
while ($tmp4459->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4459 = $tmp4459->next;
}
$fn4461 $tmp4460 = $tmp4459->methods[1];
frost$core$Bit $tmp4462 = $tmp4460(((frost$core$Equatable*) $tmp4457), ((frost$core$Equatable*) &$s4458));
bool $tmp4463 = $tmp4462.value;
if ($tmp4463) goto block5; else goto block7;
block5:;
// line 1260
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4464 = *(&local1);
frost$core$String** $tmp4465 = &$tmp4464->name;
frost$core$String* $tmp4466 = *$tmp4465;
frost$core$String* $tmp4467 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4468, $tmp4466);
frost$core$String* $tmp4469 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4467, &$s4470);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4469));
frost$core$String* $tmp4471 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4471));
*(&local2) = $tmp4469;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4467));
goto block6;
block7:;
// line 1
// line 1263
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4472 = *(&local1);
frost$core$String** $tmp4473 = &$tmp4472->name;
frost$core$String* $tmp4474 = *$tmp4473;
frost$core$String* $tmp4475 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4476, $tmp4474);
frost$core$String* $tmp4477 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4475, &$s4478);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4477));
frost$core$String* $tmp4479 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4479));
*(&local2) = $tmp4477;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4475));
goto block6;
block6:;
// line 1265
frost$core$String* $tmp4480 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4480));
frost$core$String* $tmp4481 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4481));
*(&local3) = $tmp4480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4480));
// line 1266
org$frostlang$frostc$Type** $tmp4482 = &param2->type;
org$frostlang$frostc$Type* $tmp4483 = *$tmp4482;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4483));
org$frostlang$frostc$Type* $tmp4484 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4484));
*(&local4) = $tmp4483;
// line 1267
frost$io$IndentedOutputStream** $tmp4485 = &param0->out;
frost$io$IndentedOutputStream* $tmp4486 = *$tmp4485;
org$frostlang$frostc$Type* $tmp4487 = *(&local4);
frost$core$String* $tmp4488 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4487);
frost$core$String* $tmp4489 = frost$core$String$get_asString$R$frost$core$String($tmp4488);
frost$core$String* $tmp4490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4489, &$s4491);
frost$core$String* $tmp4492 = *(&local3);
frost$core$String* $tmp4493 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4490, $tmp4492);
frost$core$String* $tmp4494 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4493, &$s4495);
org$frostlang$frostc$Type* $tmp4496 = *(&local4);
frost$core$String* $tmp4497 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4496);
frost$core$String* $tmp4498 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4494, $tmp4497);
frost$core$String* $tmp4499 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4498, &$s4500);
org$frostlang$frostc$Type* $tmp4501 = *(&local4);
frost$core$Int64 $tmp4502 = org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp4501);
frost$core$String* $tmp4503 = frost$core$Int64$get_asString$R$frost$core$String($tmp4502);
frost$core$String* $tmp4504 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4503, &$s4505);
frost$core$String* $tmp4506 = *(&local2);
frost$core$String* $tmp4507 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4504, $tmp4506);
frost$core$String* $tmp4508 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4507, &$s4509);
frost$core$String* $tmp4510 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4499, $tmp4508);
$fn4512 $tmp4511 = ($fn4512) ((frost$io$OutputStream*) $tmp4486)->$class->vtable[19];
frost$core$Error* $tmp4513 = $tmp4511(((frost$io$OutputStream*) $tmp4486), $tmp4510);
if ($tmp4513 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4513));
*(&local0) = $tmp4513;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4488));
org$frostlang$frostc$Type* $tmp4514 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4514));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4515 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4515));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4516 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4516));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4517 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4517));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4488));
// line 1269
frost$collections$HashMap** $tmp4518 = &param0->refs;
frost$collections$HashMap* $tmp4519 = *$tmp4518;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4520;
$tmp4520 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4520->value = param1;
frost$core$String* $tmp4521 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4519, ((frost$collections$Key*) $tmp4520), ((frost$core$Object*) $tmp4521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4520)));
org$frostlang$frostc$Type* $tmp4522 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4522));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4523 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4523));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4524 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4524));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4525 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4525));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block2;
block1:;
// line 1272
frost$core$Bit $tmp4526 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4527 = $tmp4526.value;
if ($tmp4527) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp4528 = (frost$core$Int64) {1272};
frost$core$Error* $tmp4529 = *(&local0);
$fn4531 $tmp4530 = ($fn4531) ((frost$core$Object*) $tmp4529)->$class->vtable[0];
frost$core$String* $tmp4532 = $tmp4530(((frost$core$Object*) $tmp4529));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4533, $tmp4528, $tmp4532);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4532));
abort(); // unreachable
block10:;
// line 1273
goto block12;
block12:;
goto block12;
block13:;
goto block2;
block2:;
frost$core$Error* $tmp4534 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4534));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$ClassDecl* param2, org$frostlang$frostc$FixedArray* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
// line 1278
*(&local0) = ((frost$core$Error*) NULL);
// line 1279
frost$core$Weak** $tmp4535 = &param0->compiler;
frost$core$Weak* $tmp4536 = *$tmp4535;
frost$core$Object* $tmp4537 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4536);
frost$core$Bit $tmp4538 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4537), param2);
bool $tmp4539 = $tmp4538.value;
if ($tmp4539) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4540 = (frost$core$Int64) {1279};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4541, $tmp4540);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4537);
// line 1280
frost$core$String* $tmp4542 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4542));
frost$core$String* $tmp4543 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4543));
*(&local1) = $tmp4542;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4542));
// line 1281
org$frostlang$frostc$Type** $tmp4544 = &param2->type;
org$frostlang$frostc$Type* $tmp4545 = *$tmp4544;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4545));
org$frostlang$frostc$Type* $tmp4546 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4546));
*(&local2) = $tmp4545;
// line 1282
frost$io$IndentedOutputStream** $tmp4547 = &param0->out;
frost$io$IndentedOutputStream* $tmp4548 = *$tmp4547;
org$frostlang$frostc$Type* $tmp4549 = *(&local2);
frost$core$String* $tmp4550 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4549);
frost$core$String* $tmp4551 = frost$core$String$get_asString$R$frost$core$String($tmp4550);
frost$core$String* $tmp4552 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4551, &$s4553);
frost$core$String* $tmp4554 = *(&local1);
frost$core$String* $tmp4555 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4552, $tmp4554);
frost$core$String* $tmp4556 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4555, &$s4557);
org$frostlang$frostc$Type* $tmp4558 = *(&local2);
frost$core$String* $tmp4559 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4558);
frost$core$String* $tmp4560 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4556, $tmp4559);
frost$core$String* $tmp4561 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4560, &$s4562);
$fn4564 $tmp4563 = ($fn4564) ((frost$io$OutputStream*) $tmp4548)->$class->vtable[17];
frost$core$Error* $tmp4565 = $tmp4563(((frost$io$OutputStream*) $tmp4548), $tmp4561);
if ($tmp4565 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4565));
*(&local0) = $tmp4565;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4550));
org$frostlang$frostc$Type* $tmp4566 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4566));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4567 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4567));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4550));
// line 1283
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4568));
frost$core$String* $tmp4569 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4569));
*(&local3) = &$s4570;
// line 1284
ITable* $tmp4571 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp4571->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4571 = $tmp4571->next;
}
$fn4573 $tmp4572 = $tmp4571->methods[0];
frost$collections$Iterator* $tmp4574 = $tmp4572(((frost$collections$Iterable*) param3));
goto block7;
block7:;
ITable* $tmp4575 = $tmp4574->$class->itable;
while ($tmp4575->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4575 = $tmp4575->next;
}
$fn4577 $tmp4576 = $tmp4575->methods[0];
frost$core$Bit $tmp4578 = $tmp4576($tmp4574);
bool $tmp4579 = $tmp4578.value;
if ($tmp4579) goto block9; else goto block8;
block8:;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp4580 = $tmp4574->$class->itable;
while ($tmp4580->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4580 = $tmp4580->next;
}
$fn4582 $tmp4581 = $tmp4580->methods[1];
frost$core$Object* $tmp4583 = $tmp4581($tmp4574);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp4583)));
org$frostlang$frostc$IR$Value* $tmp4584 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4584));
*(&local4) = ((org$frostlang$frostc$IR$Value*) $tmp4583);
// line 1285
frost$io$IndentedOutputStream** $tmp4585 = &param0->out;
frost$io$IndentedOutputStream* $tmp4586 = *$tmp4585;
frost$core$String* $tmp4587 = *(&local3);
frost$core$String* $tmp4588 = frost$core$String$get_asString$R$frost$core$String($tmp4587);
frost$core$String* $tmp4589 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4588, &$s4590);
org$frostlang$frostc$IR$Value* $tmp4591 = *(&local4);
frost$core$String* $tmp4592 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp4591);
frost$core$String* $tmp4593 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4589, $tmp4592);
frost$core$String* $tmp4594 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4593, &$s4595);
$fn4597 $tmp4596 = ($fn4597) ((frost$io$OutputStream*) $tmp4586)->$class->vtable[17];
frost$core$Error* $tmp4598 = $tmp4596(((frost$io$OutputStream*) $tmp4586), $tmp4594);
if ($tmp4598 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4598));
*(&local0) = $tmp4598;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4588));
frost$core$Frost$unref$frost$core$Object$Q($tmp4583);
org$frostlang$frostc$IR$Value* $tmp4599 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4599));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4574));
frost$core$String* $tmp4600 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4600));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4601 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4601));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4602 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4602));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4588));
// line 1286
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4603));
frost$core$String* $tmp4604 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4604));
*(&local3) = &$s4605;
frost$core$Frost$unref$frost$core$Object$Q($tmp4583);
org$frostlang$frostc$IR$Value* $tmp4606 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4606));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4574));
// line 1288
frost$io$IndentedOutputStream** $tmp4607 = &param0->out;
frost$io$IndentedOutputStream* $tmp4608 = *$tmp4607;
$fn4610 $tmp4609 = ($fn4610) ((frost$io$OutputStream*) $tmp4608)->$class->vtable[19];
frost$core$Error* $tmp4611 = $tmp4609(((frost$io$OutputStream*) $tmp4608), &$s4612);
if ($tmp4611 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4611));
*(&local0) = $tmp4611;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4611));
frost$core$String* $tmp4613 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4613));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4614 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4614));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4615 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4615));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4611));
// line 1289
frost$collections$HashMap** $tmp4616 = &param0->refs;
frost$collections$HashMap* $tmp4617 = *$tmp4616;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4618;
$tmp4618 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4618->value = param1;
frost$core$String* $tmp4619 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4617, ((frost$collections$Key*) $tmp4618), ((frost$core$Object*) $tmp4619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4618)));
frost$core$String* $tmp4620 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4620));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4621 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4621));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4622 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4622));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1292
frost$core$Bit $tmp4623 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4624 = $tmp4623.value;
if ($tmp4624) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp4625 = (frost$core$Int64) {1292};
frost$core$Error* $tmp4626 = *(&local0);
$fn4628 $tmp4627 = ($fn4628) ((frost$core$Object*) $tmp4626)->$class->vtable[0];
frost$core$String* $tmp4629 = $tmp4627(((frost$core$Object*) $tmp4626));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4630, $tmp4625, $tmp4629);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4629));
abort(); // unreachable
block14:;
// line 1293
goto block16;
block16:;
goto block16;
block17:;
goto block2;
block2:;
frost$core$Error* $tmp4631 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4631));
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
// line 1298
*(&local0) = ((frost$core$Error*) NULL);
// line 1299
$fn4633 $tmp4632 = ($fn4633) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4634 = $tmp4632(param2);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4634));
org$frostlang$frostc$Type* $tmp4635 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4635));
*(&local1) = $tmp4634;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4634));
// line 1300
org$frostlang$frostc$Type* $tmp4636 = *(&local1);
frost$core$Bit $tmp4637 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp4636);
bool $tmp4638 = $tmp4637.value;
if ($tmp4638) goto block3; else goto block4;
block3:;
// line 1301
org$frostlang$frostc$Type* $tmp4639 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp4640 = &$tmp4639->subtypes;
org$frostlang$frostc$FixedArray* $tmp4641 = *$tmp4640;
frost$core$Int64 $tmp4642 = (frost$core$Int64) {1};
frost$core$Object* $tmp4643 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp4641, $tmp4642);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp4643)));
org$frostlang$frostc$Type* $tmp4644 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4644));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp4643);
frost$core$Frost$unref$frost$core$Object$Q($tmp4643);
goto block4;
block4:;
// line 1303
org$frostlang$frostc$Type* $tmp4645 = *(&local1);
org$frostlang$frostc$Type* $tmp4646 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp4645);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4646));
org$frostlang$frostc$Type* $tmp4647 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4647));
*(&local2) = $tmp4646;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4646));
// line 1304
org$frostlang$frostc$Type* $tmp4648 = *(&local2);
org$frostlang$frostc$Type* $tmp4649 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp4650 = ((frost$core$Equatable*) $tmp4648)->$class->itable;
while ($tmp4650->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4650 = $tmp4650->next;
}
$fn4652 $tmp4651 = $tmp4650->methods[1];
frost$core$Bit $tmp4653 = $tmp4651(((frost$core$Equatable*) $tmp4648), ((frost$core$Equatable*) $tmp4649));
bool $tmp4654 = $tmp4653.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4649));
if ($tmp4654) goto block5; else goto block6;
block5:;
// line 1305
frost$core$String* $tmp4655 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4655));
frost$core$String* $tmp4656 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4656));
*(&local3) = $tmp4655;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4655));
// line 1306
frost$io$IndentedOutputStream** $tmp4657 = &param0->out;
frost$io$IndentedOutputStream* $tmp4658 = *$tmp4657;
org$frostlang$frostc$Type* $tmp4659 = *(&local2);
frost$core$String* $tmp4660 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4659);
frost$core$String* $tmp4661 = frost$core$String$get_asString$R$frost$core$String($tmp4660);
frost$core$String* $tmp4662 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4661, &$s4663);
frost$core$String* $tmp4664 = *(&local3);
frost$core$String* $tmp4665 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4662, $tmp4664);
frost$core$String* $tmp4666 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4665, &$s4667);
$fn4669 $tmp4668 = ($fn4669) ((frost$io$OutputStream*) $tmp4658)->$class->vtable[17];
frost$core$Error* $tmp4670 = $tmp4668(((frost$io$OutputStream*) $tmp4658), $tmp4666);
if ($tmp4670 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4670));
*(&local0) = $tmp4670;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4660));
frost$core$String* $tmp4671 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4671));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4672 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4672));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4673 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4673));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4660));
// line 1307
frost$collections$HashMap** $tmp4674 = &param0->refs;
frost$collections$HashMap* $tmp4675 = *$tmp4674;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4676;
$tmp4676 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4676->value = param1;
frost$core$String* $tmp4677 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4675, ((frost$collections$Key*) $tmp4676), ((frost$core$Object*) $tmp4677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4676)));
frost$core$String* $tmp4678 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4678));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block6:;
// line 1309
frost$io$IndentedOutputStream** $tmp4679 = &param0->out;
frost$io$IndentedOutputStream* $tmp4680 = *$tmp4679;
frost$core$String* $tmp4681 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4682 = frost$core$String$get_asString$R$frost$core$String($tmp4681);
frost$core$String* $tmp4683 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4682, &$s4684);
$fn4686 $tmp4685 = ($fn4686) ((frost$io$OutputStream*) $tmp4680)->$class->vtable[17];
frost$core$Error* $tmp4687 = $tmp4685(((frost$io$OutputStream*) $tmp4680), $tmp4683);
if ($tmp4687 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4687));
*(&local0) = $tmp4687;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4681));
org$frostlang$frostc$Type* $tmp4688 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4688));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4689 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4689));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4681));
// line 1310
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4690));
frost$core$String* $tmp4691 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4691));
*(&local4) = &$s4692;
// line 1311
ITable* $tmp4693 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp4693->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4693 = $tmp4693->next;
}
$fn4695 $tmp4694 = $tmp4693->methods[0];
frost$collections$Iterator* $tmp4696 = $tmp4694(((frost$collections$Iterable*) param3));
goto block11;
block11:;
ITable* $tmp4697 = $tmp4696->$class->itable;
while ($tmp4697->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4697 = $tmp4697->next;
}
$fn4699 $tmp4698 = $tmp4697->methods[0];
frost$core$Bit $tmp4700 = $tmp4698($tmp4696);
bool $tmp4701 = $tmp4700.value;
if ($tmp4701) goto block13; else goto block12;
block12:;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp4702 = $tmp4696->$class->itable;
while ($tmp4702->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4702 = $tmp4702->next;
}
$fn4704 $tmp4703 = $tmp4702->methods[1];
frost$core$Object* $tmp4705 = $tmp4703($tmp4696);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp4705)));
org$frostlang$frostc$IR$Value* $tmp4706 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4706));
*(&local5) = ((org$frostlang$frostc$IR$Value*) $tmp4705);
// line 1312
frost$io$IndentedOutputStream** $tmp4707 = &param0->out;
frost$io$IndentedOutputStream* $tmp4708 = *$tmp4707;
frost$core$String* $tmp4709 = *(&local4);
$fn4711 $tmp4710 = ($fn4711) ((frost$io$OutputStream*) $tmp4708)->$class->vtable[17];
frost$core$Error* $tmp4712 = $tmp4710(((frost$io$OutputStream*) $tmp4708), $tmp4709);
if ($tmp4712 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4712));
*(&local0) = $tmp4712;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4712));
frost$core$Frost$unref$frost$core$Object$Q($tmp4705);
org$frostlang$frostc$IR$Value* $tmp4713 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4713));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4696));
frost$core$String* $tmp4714 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4714));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4715 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4715));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4716 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4716));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4712));
// line 1313
frost$io$IndentedOutputStream** $tmp4717 = &param0->out;
frost$io$IndentedOutputStream* $tmp4718 = *$tmp4717;
org$frostlang$frostc$IR$Value* $tmp4719 = *(&local5);
frost$core$String* $tmp4720 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp4719);
$fn4722 $tmp4721 = ($fn4722) ((frost$io$OutputStream*) $tmp4718)->$class->vtable[17];
frost$core$Error* $tmp4723 = $tmp4721(((frost$io$OutputStream*) $tmp4718), $tmp4720);
if ($tmp4723 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4723));
*(&local0) = $tmp4723;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4720));
frost$core$Frost$unref$frost$core$Object$Q($tmp4705);
org$frostlang$frostc$IR$Value* $tmp4724 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4724));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4696));
frost$core$String* $tmp4725 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4725));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4726 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4726));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4727 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4727));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4720));
// line 1314
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4728));
frost$core$String* $tmp4729 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4729));
*(&local4) = &$s4730;
frost$core$Frost$unref$frost$core$Object$Q($tmp4705);
org$frostlang$frostc$IR$Value* $tmp4731 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4731));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4696));
// line 1316
frost$io$IndentedOutputStream** $tmp4732 = &param0->out;
frost$io$IndentedOutputStream* $tmp4733 = *$tmp4732;
$fn4735 $tmp4734 = ($fn4735) ((frost$io$OutputStream*) $tmp4733)->$class->vtable[19];
frost$core$Error* $tmp4736 = $tmp4734(((frost$io$OutputStream*) $tmp4733), &$s4737);
if ($tmp4736 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4736));
*(&local0) = $tmp4736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4736));
frost$core$String* $tmp4738 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4738));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4739 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4739));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4740 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4740));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4736));
frost$core$String* $tmp4741 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4741));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4742 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4742));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4743 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4743));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block2;
block1:;
// line 1319
frost$core$Bit $tmp4744 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4745 = $tmp4744.value;
if ($tmp4745) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp4746 = (frost$core$Int64) {1319};
frost$core$Error* $tmp4747 = *(&local0);
$fn4749 $tmp4748 = ($fn4749) ((frost$core$Object*) $tmp4747)->$class->vtable[0];
frost$core$String* $tmp4750 = $tmp4748(((frost$core$Object*) $tmp4747));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4751, $tmp4746, $tmp4750);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4750));
abort(); // unreachable
block20:;
// line 1320
goto block22;
block22:;
goto block22;
block23:;
goto block2;
block2:;
frost$core$Error* $tmp4752 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4752));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FieldDecl* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1325
*(&local0) = ((frost$core$Error*) NULL);
// line 1326
frost$core$Weak** $tmp4753 = &param0->compiler;
frost$core$Weak* $tmp4754 = *$tmp4753;
frost$core$Object* $tmp4755 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4754);
frost$core$Bit $tmp4756 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4755), param3);
frost$core$Frost$unref$frost$core$Object$Q($tmp4755);
// line 1327
frost$core$String* $tmp4757 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4757));
frost$core$String* $tmp4758 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4758));
*(&local1) = $tmp4757;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4757));
// line 1328
frost$core$String* $tmp4759 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4759));
frost$core$String* $tmp4760 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4760));
*(&local2) = $tmp4759;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4759));
// line 1329
frost$io$IndentedOutputStream** $tmp4761 = &param0->out;
frost$io$IndentedOutputStream* $tmp4762 = *$tmp4761;
org$frostlang$frostc$Type** $tmp4763 = &param3->type;
org$frostlang$frostc$Type* $tmp4764 = *$tmp4763;
frost$core$String* $tmp4765 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4764);
frost$core$String* $tmp4766 = frost$core$String$get_asString$R$frost$core$String($tmp4765);
frost$core$String* $tmp4767 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4766, &$s4768);
frost$core$String* $tmp4769 = *(&local2);
frost$core$String* $tmp4770 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4767, $tmp4769);
frost$core$String* $tmp4771 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4770, &$s4772);
frost$core$String* $tmp4773 = *(&local1);
frost$core$String* $tmp4774 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4771, $tmp4773);
frost$core$String* $tmp4775 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4774, &$s4776);
frost$core$String** $tmp4777 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp4778 = *$tmp4777;
frost$core$String* $tmp4779 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4775, $tmp4778);
frost$core$String* $tmp4780 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4779, &$s4781);
$fn4783 $tmp4782 = ($fn4783) ((frost$io$OutputStream*) $tmp4762)->$class->vtable[19];
frost$core$Error* $tmp4784 = $tmp4782(((frost$io$OutputStream*) $tmp4762), $tmp4780);
if ($tmp4784 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4784));
*(&local0) = $tmp4784;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4765));
frost$core$String* $tmp4785 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4785));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4786 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4786));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4765));
// line 1330
frost$collections$HashMap** $tmp4787 = &param0->refs;
frost$collections$HashMap* $tmp4788 = *$tmp4787;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4789;
$tmp4789 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4789->value = param1;
frost$core$String* $tmp4790 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4788, ((frost$collections$Key*) $tmp4789), ((frost$core$Object*) $tmp4790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4789)));
frost$core$String* $tmp4791 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4791));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4792 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4792));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1333
frost$core$Bit $tmp4793 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4794 = $tmp4793.value;
if ($tmp4794) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp4795 = (frost$core$Int64) {1333};
frost$core$Error* $tmp4796 = *(&local0);
$fn4798 $tmp4797 = ($fn4798) ((frost$core$Object*) $tmp4796)->$class->vtable[0];
frost$core$String* $tmp4799 = $tmp4797(((frost$core$Object*) $tmp4796));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4800, $tmp4795, $tmp4799);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4799));
abort(); // unreachable
block5:;
// line 1334
goto block7;
block7:;
goto block7;
block8:;
goto block2;
block2:;
frost$core$Error* $tmp4801 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4801));
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
// line 1340
*(&local0) = ((frost$core$Error*) NULL);
// line 1341
frost$core$Weak** $tmp4802 = &param3->owner;
frost$core$Weak* $tmp4803 = *$tmp4802;
frost$core$Object* $tmp4804 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4803);
frost$collections$Array** $tmp4805 = &((org$frostlang$frostc$ClassDecl*) $tmp4804)->fields;
frost$collections$Array* $tmp4806 = *$tmp4805;
frost$core$Int64 $tmp4807 = (frost$core$Int64) {1};
frost$core$Object* $tmp4808 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4806, $tmp4807);
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp4808)));
org$frostlang$frostc$FieldDecl* $tmp4809 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4809));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) $tmp4808);
frost$core$Frost$unref$frost$core$Object$Q($tmp4808);
frost$core$Frost$unref$frost$core$Object$Q($tmp4804);
// line 1342
org$frostlang$frostc$FieldDecl* $tmp4810 = *(&local1);
frost$core$String** $tmp4811 = &((org$frostlang$frostc$Symbol*) $tmp4810)->name;
frost$core$String* $tmp4812 = *$tmp4811;
frost$core$Bit $tmp4813 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp4812, &$s4814);
bool $tmp4815 = $tmp4813.value;
if ($tmp4815) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4816 = (frost$core$Int64) {1342};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4817, $tmp4816);
abort(); // unreachable
block3:;
// line 1343
frost$core$String* $tmp4818 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4818));
frost$core$String* $tmp4819 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4819));
*(&local2) = $tmp4818;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4818));
// line 1344
frost$core$Weak** $tmp4820 = &param0->compiler;
frost$core$Weak* $tmp4821 = *$tmp4820;
frost$core$Object* $tmp4822 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4821);
org$frostlang$frostc$FieldDecl* $tmp4823 = *(&local1);
frost$core$Int64 $tmp4824 = org$frostlang$frostc$Compiler$getIndex$org$frostlang$frostc$FieldDecl$R$frost$core$Int64(((org$frostlang$frostc$Compiler*) $tmp4822), $tmp4823);
*(&local3) = $tmp4824;
frost$core$Frost$unref$frost$core$Object$Q($tmp4822);
// line 1345
frost$core$String* $tmp4825 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4825));
frost$core$String* $tmp4826 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4826));
*(&local4) = $tmp4825;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4825));
// line 1346
frost$collections$Array** $tmp4827 = &param3->fields;
frost$collections$Array* $tmp4828 = *$tmp4827;
frost$core$Object* $tmp4829 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4828, param4);
frost$core$String* $tmp4830 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp4829));
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4830));
frost$core$String* $tmp4831 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4831));
*(&local5) = $tmp4830;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4830));
frost$core$Frost$unref$frost$core$Object$Q($tmp4829);
// line 1347
frost$io$IndentedOutputStream** $tmp4832 = &param0->out;
frost$io$IndentedOutputStream* $tmp4833 = *$tmp4832;
frost$core$String* $tmp4834 = *(&local5);
frost$core$String* $tmp4835 = frost$core$String$get_asString$R$frost$core$String($tmp4834);
frost$core$String* $tmp4836 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4835, &$s4837);
frost$core$String* $tmp4838 = *(&local4);
frost$core$String* $tmp4839 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4836, $tmp4838);
frost$core$String* $tmp4840 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4839, &$s4841);
frost$core$String* $tmp4842 = *(&local5);
frost$core$String* $tmp4843 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4840, $tmp4842);
frost$core$String* $tmp4844 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4843, &$s4845);
frost$core$String* $tmp4846 = *(&local2);
frost$core$String* $tmp4847 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4844, $tmp4846);
frost$core$String* $tmp4848 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4847, &$s4849);
frost$core$Int64 $tmp4850 = org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64(param0, param3, param4);
frost$core$Int64$wrapper* $tmp4851;
$tmp4851 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4851->value = $tmp4850;
frost$core$String* $tmp4852 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4853, ((frost$core$Object*) $tmp4851));
frost$core$String* $tmp4854 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4852, &$s4855);
frost$core$String* $tmp4856 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4848, $tmp4854);
$fn4858 $tmp4857 = ($fn4858) ((frost$io$OutputStream*) $tmp4833)->$class->vtable[19];
frost$core$Error* $tmp4859 = $tmp4857(((frost$io$OutputStream*) $tmp4833), $tmp4856);
if ($tmp4859 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4859));
*(&local0) = $tmp4859;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4848));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4835));
frost$core$String* $tmp4860 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4860));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp4861 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4861));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4862 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4862));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$FieldDecl* $tmp4863 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4863));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4848));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4835));
// line 1349
frost$collections$HashMap** $tmp4864 = &param0->refs;
frost$collections$HashMap* $tmp4865 = *$tmp4864;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4866;
$tmp4866 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4866->value = param1;
frost$core$String* $tmp4867 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4865, ((frost$collections$Key*) $tmp4866), ((frost$core$Object*) $tmp4867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4866)));
frost$core$String* $tmp4868 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4868));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp4869 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4869));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4870 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4870));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$FieldDecl* $tmp4871 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4871));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block2;
block1:;
// line 1352
frost$core$Bit $tmp4872 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4873 = $tmp4872.value;
if ($tmp4873) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp4874 = (frost$core$Int64) {1352};
frost$core$Error* $tmp4875 = *(&local0);
$fn4877 $tmp4876 = ($fn4877) ((frost$core$Object*) $tmp4875)->$class->vtable[0];
frost$core$String* $tmp4878 = $tmp4876(((frost$core$Object*) $tmp4875));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4879, $tmp4874, $tmp4878);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4878));
abort(); // unreachable
block7:;
// line 1353
goto block9;
block9:;
goto block9;
block10:;
goto block2;
block2:;
frost$core$Error* $tmp4880 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4880));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FieldDecl* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1358
*(&local0) = ((frost$core$Error*) NULL);
// line 1359
frost$core$String* $tmp4881 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4881));
frost$core$String* $tmp4882 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4882));
*(&local1) = $tmp4881;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4881));
// line 1360
frost$core$String* $tmp4883 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4883));
frost$core$String* $tmp4884 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4884));
*(&local2) = $tmp4883;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4883));
// line 1361
frost$io$IndentedOutputStream** $tmp4885 = &param0->out;
frost$io$IndentedOutputStream* $tmp4886 = *$tmp4885;
org$frostlang$frostc$Type** $tmp4887 = &param3->type;
org$frostlang$frostc$Type* $tmp4888 = *$tmp4887;
frost$core$String* $tmp4889 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4888);
frost$core$String* $tmp4890 = frost$core$String$get_asString$R$frost$core$String($tmp4889);
frost$core$String* $tmp4891 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4890, &$s4892);
frost$core$String* $tmp4893 = *(&local2);
frost$core$String* $tmp4894 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4891, $tmp4893);
frost$core$String* $tmp4895 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4894, &$s4896);
frost$core$String* $tmp4897 = *(&local1);
frost$core$String* $tmp4898 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4895, $tmp4897);
frost$core$String* $tmp4899 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4898, &$s4900);
frost$core$String** $tmp4901 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp4902 = *$tmp4901;
frost$core$String* $tmp4903 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4899, $tmp4902);
frost$core$String* $tmp4904 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4903, &$s4905);
$fn4907 $tmp4906 = ($fn4907) ((frost$io$OutputStream*) $tmp4886)->$class->vtable[19];
frost$core$Error* $tmp4908 = $tmp4906(((frost$io$OutputStream*) $tmp4886), $tmp4904);
if ($tmp4908 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4908));
*(&local0) = $tmp4908;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4903));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4889));
frost$core$String* $tmp4909 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4909));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4910 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4910));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4903));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4889));
// line 1362
frost$collections$HashMap** $tmp4911 = &param0->refs;
frost$collections$HashMap* $tmp4912 = *$tmp4911;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4913;
$tmp4913 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4913->value = param1;
frost$core$String* $tmp4914 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4912, ((frost$collections$Key*) $tmp4913), ((frost$core$Object*) $tmp4914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4913)));
frost$core$String* $tmp4915 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4915));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4916 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4916));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1365
frost$core$Bit $tmp4917 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4918 = $tmp4917.value;
if ($tmp4918) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp4919 = (frost$core$Int64) {1365};
frost$core$Error* $tmp4920 = *(&local0);
$fn4922 $tmp4921 = ($fn4922) ((frost$core$Object*) $tmp4920)->$class->vtable[0];
frost$core$String* $tmp4923 = $tmp4921(((frost$core$Object*) $tmp4920));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4924, $tmp4919, $tmp4923);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4923));
abort(); // unreachable
block5:;
// line 1366
goto block7;
block7:;
goto block7;
block8:;
goto block2;
block2:;
frost$core$Error* $tmp4925 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4925));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$ClassDecl* param3, frost$core$Int64 param4, org$frostlang$frostc$Type* param5) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 1372
*(&local0) = ((frost$core$Error*) NULL);
// line 1373
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4926 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param3);
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4926));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4927 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4927));
*(&local1) = $tmp4926;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4926));
// line 1374
frost$core$String* $tmp4928 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4928));
frost$core$String* $tmp4929 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4929));
*(&local2) = $tmp4928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4928));
// line 1375
frost$io$IndentedOutputStream** $tmp4930 = &param0->out;
frost$io$IndentedOutputStream* $tmp4931 = *$tmp4930;
frost$core$String* $tmp4932 = *(&local2);
frost$core$String* $tmp4933 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4934, $tmp4932);
frost$core$String* $tmp4935 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4933, &$s4936);
frost$core$String* $tmp4937 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4938 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4935, $tmp4937);
frost$core$String* $tmp4939 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4938, &$s4940);
$fn4942 $tmp4941 = ($fn4942) ((frost$io$OutputStream*) $tmp4931)->$class->vtable[19];
frost$core$Error* $tmp4943 = $tmp4941(((frost$io$OutputStream*) $tmp4931), $tmp4939);
if ($tmp4943 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4943));
*(&local0) = $tmp4943;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4943));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4933));
frost$core$String* $tmp4944 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4944));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4945 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4945));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4943));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4933));
// line 1376
frost$io$IndentedOutputStream** $tmp4946 = &param0->out;
frost$io$IndentedOutputStream* $tmp4947 = *$tmp4946;
frost$core$String* $tmp4948 = *(&local2);
frost$core$String* $tmp4949 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4950, $tmp4948);
frost$core$String* $tmp4951 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4949, &$s4952);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4953 = *(&local1);
frost$core$String** $tmp4954 = &$tmp4953->name;
frost$core$String* $tmp4955 = *$tmp4954;
frost$core$String* $tmp4956 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4951, $tmp4955);
frost$core$String* $tmp4957 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4956, &$s4958);
$fn4960 $tmp4959 = ($fn4960) ((frost$io$OutputStream*) $tmp4947)->$class->vtable[19];
frost$core$Error* $tmp4961 = $tmp4959(((frost$io$OutputStream*) $tmp4947), $tmp4957);
if ($tmp4961 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4961));
*(&local0) = $tmp4961;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4949));
frost$core$String* $tmp4962 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4962));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4963 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4963));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4949));
// line 1377
frost$io$IndentedOutputStream** $tmp4964 = &param0->out;
frost$io$IndentedOutputStream* $tmp4965 = *$tmp4964;
frost$core$Int64* $tmp4966 = &$tmp4965->level;
frost$core$Int64 $tmp4967 = *$tmp4966;
frost$core$Int64 $tmp4968 = (frost$core$Int64) {1};
int64_t $tmp4969 = $tmp4967.value;
int64_t $tmp4970 = $tmp4968.value;
int64_t $tmp4971 = $tmp4969 + $tmp4970;
frost$core$Int64 $tmp4972 = (frost$core$Int64) {$tmp4971};
frost$core$Int64* $tmp4973 = &$tmp4965->level;
*$tmp4973 = $tmp4972;
// line 1378
frost$io$IndentedOutputStream** $tmp4974 = &param0->out;
frost$io$IndentedOutputStream* $tmp4975 = *$tmp4974;
frost$core$String* $tmp4976 = *(&local2);
frost$core$String* $tmp4977 = frost$core$String$get_asString$R$frost$core$String($tmp4976);
frost$core$String* $tmp4978 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4977, &$s4979);
frost$core$String* $tmp4980 = *(&local2);
frost$core$String* $tmp4981 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4978, $tmp4980);
frost$core$String* $tmp4982 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4981, &$s4983);
$fn4985 $tmp4984 = ($fn4985) ((frost$io$OutputStream*) $tmp4975)->$class->vtable[19];
frost$core$Error* $tmp4986 = $tmp4984(((frost$io$OutputStream*) $tmp4975), $tmp4982);
if ($tmp4986 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
*(&local0) = $tmp4986;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4977));
frost$core$String* $tmp4987 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4987));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4988 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4988));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4977));
// line 1379
frost$io$IndentedOutputStream** $tmp4989 = &param0->out;
frost$io$IndentedOutputStream* $tmp4990 = *$tmp4989;
frost$core$Int64* $tmp4991 = &$tmp4990->level;
frost$core$Int64 $tmp4992 = *$tmp4991;
frost$core$Int64 $tmp4993 = (frost$core$Int64) {1};
int64_t $tmp4994 = $tmp4992.value;
int64_t $tmp4995 = $tmp4993.value;
int64_t $tmp4996 = $tmp4994 - $tmp4995;
frost$core$Int64 $tmp4997 = (frost$core$Int64) {$tmp4996};
frost$core$Int64* $tmp4998 = &$tmp4990->level;
*$tmp4998 = $tmp4997;
// line 1380
frost$io$IndentedOutputStream** $tmp4999 = &param0->out;
frost$io$IndentedOutputStream* $tmp5000 = *$tmp4999;
$fn5002 $tmp5001 = ($fn5002) ((frost$io$OutputStream*) $tmp5000)->$class->vtable[19];
frost$core$Error* $tmp5003 = $tmp5001(((frost$io$OutputStream*) $tmp5000), &$s5004);
if ($tmp5003 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5003));
*(&local0) = $tmp5003;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5003));
frost$core$String* $tmp5005 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5005));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp5006 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5006));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5003));
// line 1381
frost$core$String* $tmp5007 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5007));
frost$core$String* $tmp5008 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5008));
*(&local3) = $tmp5007;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5007));
// line 1382
frost$core$String* $tmp5009 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, param5, ((org$frostlang$frostc$Type*) NULL));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5009));
frost$core$String* $tmp5010 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5010));
*(&local4) = $tmp5009;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5009));
// line 1383
frost$io$IndentedOutputStream** $tmp5011 = &param0->out;
frost$io$IndentedOutputStream* $tmp5012 = *$tmp5011;
frost$core$String* $tmp5013 = *(&local4);
frost$core$String* $tmp5014 = frost$core$String$get_asString$R$frost$core$String($tmp5013);
frost$core$String* $tmp5015 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5014, &$s5016);
frost$core$String* $tmp5017 = *(&local3);
frost$core$String* $tmp5018 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5015, $tmp5017);
frost$core$String* $tmp5019 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5018, &$s5020);
frost$core$String* $tmp5021 = *(&local2);
frost$core$String* $tmp5022 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5019, $tmp5021);
frost$core$String* $tmp5023 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5022, &$s5024);
frost$core$Int64$wrapper* $tmp5025;
$tmp5025 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5025->value = param4;
frost$core$String* $tmp5026 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5023, ((frost$core$Object*) $tmp5025));
frost$core$String* $tmp5027 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5026, &$s5028);
$fn5030 $tmp5029 = ($fn5030) ((frost$io$OutputStream*) $tmp5012)->$class->vtable[19];
frost$core$Error* $tmp5031 = $tmp5029(((frost$io$OutputStream*) $tmp5012), $tmp5027);
if ($tmp5031 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5031));
*(&local0) = $tmp5031;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5014));
frost$core$String* $tmp5032 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5032));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5033 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5033));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5034 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5034));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp5035 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5035));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5014));
// line 1384
frost$collections$HashMap** $tmp5036 = &param0->refs;
frost$collections$HashMap* $tmp5037 = *$tmp5036;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5038;
$tmp5038 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5038->value = param1;
frost$core$String* $tmp5039 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5037, ((frost$collections$Key*) $tmp5038), ((frost$core$Object*) $tmp5039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5038)));
frost$core$String* $tmp5040 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5040));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5041 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5041));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5042 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5042));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp5043 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5043));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block2;
block1:;
// line 1387
frost$core$Bit $tmp5044 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5045 = $tmp5044.value;
if ($tmp5045) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp5046 = (frost$core$Int64) {1387};
frost$core$Error* $tmp5047 = *(&local0);
$fn5049 $tmp5048 = ($fn5049) ((frost$core$Object*) $tmp5047)->$class->vtable[0];
frost$core$String* $tmp5050 = $tmp5048(((frost$core$Object*) $tmp5047));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5051, $tmp5046, $tmp5050);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5050));
abort(); // unreachable
block13:;
// line 1388
goto block15;
block15:;
goto block15;
block16:;
goto block2;
block2:;
frost$core$Error* $tmp5052 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5052));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, frost$core$Int64 param3, org$frostlang$frostc$Type* param4) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1393
*(&local0) = ((frost$core$Error*) NULL);
// line 1394
frost$core$String* $tmp5053 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5053));
frost$core$String* $tmp5054 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5054));
*(&local1) = $tmp5053;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5053));
// line 1395
frost$core$String* $tmp5055 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, param4, ((org$frostlang$frostc$Type*) NULL));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5055));
frost$core$String* $tmp5056 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5056));
*(&local2) = $tmp5055;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5055));
// line 1396
frost$io$IndentedOutputStream** $tmp5057 = &param0->out;
frost$io$IndentedOutputStream* $tmp5058 = *$tmp5057;
frost$core$String* $tmp5059 = *(&local2);
frost$core$String* $tmp5060 = frost$core$String$get_asString$R$frost$core$String($tmp5059);
frost$core$String* $tmp5061 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5060, &$s5062);
frost$core$String* $tmp5063 = *(&local1);
frost$core$String* $tmp5064 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5061, $tmp5063);
frost$core$String* $tmp5065 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5064, &$s5066);
frost$core$String* $tmp5067 = *(&local2);
frost$core$String* $tmp5068 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5065, $tmp5067);
frost$core$String* $tmp5069 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5068, &$s5070);
frost$core$String* $tmp5071 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp5072 = frost$core$String$get_asString$R$frost$core$String($tmp5071);
frost$core$String* $tmp5073 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5072, &$s5074);
frost$core$Int64$wrapper* $tmp5075;
$tmp5075 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5075->value = param3;
frost$core$String* $tmp5076 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5073, ((frost$core$Object*) $tmp5075));
frost$core$String* $tmp5077 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5076, &$s5078);
frost$core$String* $tmp5079 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5069, $tmp5077);
$fn5081 $tmp5080 = ($fn5081) ((frost$io$OutputStream*) $tmp5058)->$class->vtable[19];
frost$core$Error* $tmp5082 = $tmp5080(((frost$io$OutputStream*) $tmp5058), $tmp5079);
if ($tmp5082 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5082));
*(&local0) = $tmp5082;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5076));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5072));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5060));
frost$core$String* $tmp5083 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5083));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5084 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5084));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5076));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5072));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5060));
// line 1398
frost$collections$HashMap** $tmp5085 = &param0->refs;
frost$collections$HashMap* $tmp5086 = *$tmp5085;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5087;
$tmp5087 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5087->value = param1;
frost$core$String* $tmp5088 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5086, ((frost$collections$Key*) $tmp5087), ((frost$core$Object*) $tmp5088));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5087)));
frost$core$String* $tmp5089 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5089));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5090 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5090));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1401
frost$core$Bit $tmp5091 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5092 = $tmp5091.value;
if ($tmp5092) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp5093 = (frost$core$Int64) {1401};
frost$core$Error* $tmp5094 = *(&local0);
$fn5096 $tmp5095 = ($fn5096) ((frost$core$Object*) $tmp5094)->$class->vtable[0];
frost$core$String* $tmp5097 = $tmp5095(((frost$core$Object*) $tmp5094));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5098, $tmp5093, $tmp5097);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5097));
abort(); // unreachable
block5:;
// line 1402
goto block7;
block7:;
goto block7;
block8:;
goto block2;
block2:;
frost$core$Error* $tmp5099 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5099));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1407
*(&local0) = ((frost$core$Error*) NULL);
// line 1408
frost$core$String* $tmp5100 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5100));
frost$core$String* $tmp5101 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5101));
*(&local1) = $tmp5100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5100));
// line 1409
frost$io$IndentedOutputStream** $tmp5102 = &param0->out;
frost$io$IndentedOutputStream* $tmp5103 = *$tmp5102;
$fn5105 $tmp5104 = ($fn5105) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5106 = $tmp5104(param2);
frost$core$String* $tmp5107 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5106);
frost$core$String* $tmp5108 = frost$core$String$get_asString$R$frost$core$String($tmp5107);
frost$core$String* $tmp5109 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5108, &$s5110);
frost$core$String* $tmp5111 = *(&local1);
frost$core$String* $tmp5112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5109, $tmp5111);
frost$core$String* $tmp5113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5112, &$s5114);
frost$core$String* $tmp5115 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp5116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5113, $tmp5115);
frost$core$String* $tmp5117 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5116, &$s5118);
$fn5120 $tmp5119 = ($fn5120) ((frost$io$OutputStream*) $tmp5103)->$class->vtable[19];
frost$core$Error* $tmp5121 = $tmp5119(((frost$io$OutputStream*) $tmp5103), $tmp5117);
if ($tmp5121 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5121));
*(&local0) = $tmp5121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5106));
frost$core$String* $tmp5122 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5122));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5106));
// line 1410
frost$collections$HashMap** $tmp5123 = &param0->refs;
frost$collections$HashMap* $tmp5124 = *$tmp5123;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5125;
$tmp5125 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5125->value = param1;
frost$core$String* $tmp5126 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5124, ((frost$collections$Key*) $tmp5125), ((frost$core$Object*) $tmp5126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5125)));
frost$core$String* $tmp5127 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5127));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1413
frost$core$Bit $tmp5128 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5129 = $tmp5128.value;
if ($tmp5129) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp5130 = (frost$core$Int64) {1413};
frost$core$Error* $tmp5131 = *(&local0);
$fn5133 $tmp5132 = ($fn5133) ((frost$core$Object*) $tmp5131)->$class->vtable[0];
frost$core$String* $tmp5134 = $tmp5132(((frost$core$Object*) $tmp5131));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5135, $tmp5130, $tmp5134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5134));
abort(); // unreachable
block5:;
// line 1414
goto block7;
block7:;
goto block7;
block8:;
goto block2;
block2:;
frost$core$Error* $tmp5136 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5136));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1419
*(&local0) = ((frost$core$Error*) NULL);
// line 1420
frost$core$String* $tmp5137 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5137));
frost$core$String* $tmp5138 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5138));
*(&local1) = $tmp5137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5137));
// line 1421
frost$io$IndentedOutputStream** $tmp5139 = &param0->out;
frost$io$IndentedOutputStream* $tmp5140 = *$tmp5139;
$fn5142 $tmp5141 = ($fn5142) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5143 = $tmp5141(param2);
frost$core$String* $tmp5144 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5143);
frost$core$String* $tmp5145 = frost$core$String$get_asString$R$frost$core$String($tmp5144);
frost$core$String* $tmp5146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5145, &$s5147);
frost$core$String* $tmp5148 = *(&local1);
frost$core$String* $tmp5149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5146, $tmp5148);
frost$core$String* $tmp5150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5149, &$s5151);
frost$core$String* $tmp5152 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp5153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5150, $tmp5152);
frost$core$String* $tmp5154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5153, &$s5155);
$fn5157 $tmp5156 = ($fn5157) ((frost$io$OutputStream*) $tmp5140)->$class->vtable[19];
frost$core$Error* $tmp5158 = $tmp5156(((frost$io$OutputStream*) $tmp5140), $tmp5154);
if ($tmp5158 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5158));
*(&local0) = $tmp5158;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5143));
frost$core$String* $tmp5159 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5159));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5143));
// line 1422
frost$collections$HashMap** $tmp5160 = &param0->refs;
frost$collections$HashMap* $tmp5161 = *$tmp5160;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5162;
$tmp5162 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5162->value = param1;
frost$core$String* $tmp5163 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5161, ((frost$collections$Key*) $tmp5162), ((frost$core$Object*) $tmp5163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5162)));
frost$core$String* $tmp5164 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5164));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1425
frost$core$Bit $tmp5165 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5166 = $tmp5165.value;
if ($tmp5166) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp5167 = (frost$core$Int64) {1425};
frost$core$Error* $tmp5168 = *(&local0);
$fn5170 $tmp5169 = ($fn5170) ((frost$core$Object*) $tmp5168)->$class->vtable[0];
frost$core$String* $tmp5171 = $tmp5169(((frost$core$Object*) $tmp5168));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5172, $tmp5167, $tmp5171);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5171));
abort(); // unreachable
block5:;
// line 1426
goto block7;
block7:;
goto block7;
block8:;
goto block2;
block2:;
frost$core$Error* $tmp5173 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5173));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1431
*(&local0) = ((frost$core$Error*) NULL);
// line 1432
frost$core$String* $tmp5174 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5174));
frost$core$String* $tmp5175 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5175));
*(&local1) = $tmp5174;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5174));
// line 1433
frost$io$IndentedOutputStream** $tmp5176 = &param0->out;
frost$io$IndentedOutputStream* $tmp5177 = *$tmp5176;
$fn5179 $tmp5178 = ($fn5179) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5180 = $tmp5178(param2);
frost$core$String* $tmp5181 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5180);
frost$core$String* $tmp5182 = frost$core$String$get_asString$R$frost$core$String($tmp5181);
frost$core$String* $tmp5183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5182, &$s5184);
frost$core$String* $tmp5185 = *(&local1);
frost$core$String* $tmp5186 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5183, $tmp5185);
frost$core$String* $tmp5187 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5186, &$s5188);
frost$core$String* $tmp5189 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp5190 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5187, $tmp5189);
frost$core$String* $tmp5191 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5190, &$s5192);
$fn5194 $tmp5193 = ($fn5194) ((frost$io$OutputStream*) $tmp5177)->$class->vtable[19];
frost$core$Error* $tmp5195 = $tmp5193(((frost$io$OutputStream*) $tmp5177), $tmp5191);
if ($tmp5195 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5195));
*(&local0) = $tmp5195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5180));
frost$core$String* $tmp5196 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5196));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5180));
// line 1434
frost$collections$HashMap** $tmp5197 = &param0->refs;
frost$collections$HashMap* $tmp5198 = *$tmp5197;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5199;
$tmp5199 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5199->value = param1;
frost$core$String* $tmp5200 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5198, ((frost$collections$Key*) $tmp5199), ((frost$core$Object*) $tmp5200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5199)));
frost$core$String* $tmp5201 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5201));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1437
frost$core$Bit $tmp5202 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5203 = $tmp5202.value;
if ($tmp5203) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp5204 = (frost$core$Int64) {1437};
frost$core$Error* $tmp5205 = *(&local0);
$fn5207 $tmp5206 = ($fn5207) ((frost$core$Object*) $tmp5205)->$class->vtable[0];
frost$core$String* $tmp5208 = $tmp5206(((frost$core$Object*) $tmp5205));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5209, $tmp5204, $tmp5208);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5208));
abort(); // unreachable
block5:;
// line 1438
goto block7;
block7:;
goto block7;
block8:;
goto block2;
block2:;
frost$core$Error* $tmp5210 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5210));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$Type* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 1443
*(&local0) = ((frost$core$Error*) NULL);
// line 1444
frost$core$String* $tmp5211 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5211));
frost$core$String* $tmp5212 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5212));
*(&local1) = $tmp5211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5211));
// line 1445
frost$core$Int64 $tmp5213 = org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param3);
*(&local2) = $tmp5213;
// line 1446
frost$core$String* $tmp5214 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5214));
frost$core$String* $tmp5215 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5215));
*(&local3) = $tmp5214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5214));
// line 1447
frost$core$String* $tmp5216 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5216));
frost$core$String* $tmp5217 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5217));
*(&local4) = $tmp5216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5216));
// line 1448
frost$io$IndentedOutputStream** $tmp5218 = &param0->out;
frost$io$IndentedOutputStream* $tmp5219 = *$tmp5218;
frost$core$String* $tmp5220 = *(&local3);
frost$core$String* $tmp5221 = frost$core$String$get_asString$R$frost$core$String($tmp5220);
frost$core$String* $tmp5222 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5221, &$s5223);
frost$core$String* $tmp5224 = *(&local4);
frost$core$String* $tmp5225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5222, $tmp5224);
frost$core$String* $tmp5226 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5225, &$s5227);
frost$core$String* $tmp5228 = *(&local3);
frost$core$String* $tmp5229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5226, $tmp5228);
frost$core$String* $tmp5230 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5229, &$s5231);
frost$core$String* $tmp5232 = *(&local1);
frost$core$String* $tmp5233 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5230, $tmp5232);
frost$core$String* $tmp5234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5233, &$s5235);
frost$core$Int64 $tmp5236 = *(&local2);
frost$core$String* $tmp5237 = frost$core$Int64$get_asString$R$frost$core$String($tmp5236);
frost$core$String* $tmp5238 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5237, &$s5239);
frost$core$String* $tmp5240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5234, $tmp5238);
$fn5242 $tmp5241 = ($fn5242) ((frost$io$OutputStream*) $tmp5219)->$class->vtable[19];
frost$core$Error* $tmp5243 = $tmp5241(((frost$io$OutputStream*) $tmp5219), $tmp5240);
if ($tmp5243 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5243));
*(&local0) = $tmp5243;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5221));
frost$core$String* $tmp5244 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5244));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5245 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5245));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5246 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5246));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5221));
// line 1450
frost$collections$HashMap** $tmp5247 = &param0->refs;
frost$collections$HashMap* $tmp5248 = *$tmp5247;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5249;
$tmp5249 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5249->value = param1;
frost$core$String* $tmp5250 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5248, ((frost$collections$Key*) $tmp5249), ((frost$core$Object*) $tmp5250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5249)));
frost$core$String* $tmp5251 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5251));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5252 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5252));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5253 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5253));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1453
frost$core$Bit $tmp5254 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5255 = $tmp5254.value;
if ($tmp5255) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp5256 = (frost$core$Int64) {1453};
frost$core$Error* $tmp5257 = *(&local0);
$fn5259 $tmp5258 = ($fn5259) ((frost$core$Object*) $tmp5257)->$class->vtable[0];
frost$core$String* $tmp5260 = $tmp5258(((frost$core$Object*) $tmp5257));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5261, $tmp5256, $tmp5260);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5260));
abort(); // unreachable
block5:;
// line 1454
goto block7;
block7:;
goto block7;
block8:;
goto block2;
block2:;
frost$core$Error* $tmp5262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5262));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1459
*(&local0) = ((frost$core$Error*) NULL);
// line 1460
frost$core$String* $tmp5263 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5263));
frost$core$String* $tmp5264 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5264));
*(&local1) = $tmp5263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5263));
// line 1461
frost$io$IndentedOutputStream** $tmp5265 = &param0->out;
frost$io$IndentedOutputStream* $tmp5266 = *$tmp5265;
frost$core$String* $tmp5267 = *(&local1);
frost$core$String* $tmp5268 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5269, $tmp5267);
frost$core$String* $tmp5270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5268, &$s5271);
$fn5273 $tmp5272 = ($fn5273) ((frost$io$OutputStream*) $tmp5266)->$class->vtable[19];
frost$core$Error* $tmp5274 = $tmp5272(((frost$io$OutputStream*) $tmp5266), $tmp5270);
if ($tmp5274 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5274));
*(&local0) = $tmp5274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5268));
frost$core$String* $tmp5275 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5275));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5268));
frost$core$String* $tmp5276 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5276));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1464
frost$core$Bit $tmp5277 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5278 = $tmp5277.value;
if ($tmp5278) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp5279 = (frost$core$Int64) {1464};
frost$core$Error* $tmp5280 = *(&local0);
$fn5282 $tmp5281 = ($fn5282) ((frost$core$Object*) $tmp5280)->$class->vtable[0];
frost$core$String* $tmp5283 = $tmp5281(((frost$core$Object*) $tmp5280));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5284, $tmp5279, $tmp5283);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5283));
abort(); // unreachable
block5:;
// line 1465
goto block7;
block7:;
goto block7;
block8:;
goto block2;
block2:;
frost$core$Error* $tmp5285 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5285));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 1470
*(&local0) = ((frost$core$Error*) NULL);
// line 1471
frost$core$String* $tmp5286 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5286));
frost$core$String* $tmp5287 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5287));
*(&local1) = $tmp5286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5286));
// line 1472
frost$core$String* $tmp5288 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5288));
frost$core$String* $tmp5289 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5289));
*(&local2) = $tmp5288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5288));
// line 1473
frost$core$String* $tmp5290 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5290));
frost$core$String* $tmp5291 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5291));
*(&local3) = $tmp5290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5290));
// line 1474
frost$io$IndentedOutputStream** $tmp5292 = &param0->out;
frost$io$IndentedOutputStream* $tmp5293 = *$tmp5292;
$fn5295 $tmp5294 = ($fn5295) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5296 = $tmp5294(param2);
org$frostlang$frostc$FixedArray** $tmp5297 = &$tmp5296->subtypes;
org$frostlang$frostc$FixedArray* $tmp5298 = *$tmp5297;
frost$core$Int64 $tmp5299 = (frost$core$Int64) {1};
frost$core$Object* $tmp5300 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp5298, $tmp5299);
frost$core$String* $tmp5301 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp5300));
frost$core$String* $tmp5302 = frost$core$String$get_asString$R$frost$core$String($tmp5301);
frost$core$String* $tmp5303 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5302, &$s5304);
frost$core$String* $tmp5305 = *(&local3);
frost$core$String* $tmp5306 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5303, $tmp5305);
frost$core$String* $tmp5307 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5306, &$s5308);
frost$core$String* $tmp5309 = *(&local1);
frost$core$String* $tmp5310 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5307, $tmp5309);
frost$core$String* $tmp5311 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5310, &$s5312);
frost$core$String* $tmp5313 = *(&local2);
frost$core$String* $tmp5314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5311, $tmp5313);
frost$core$String* $tmp5315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5314, &$s5316);
$fn5318 $tmp5317 = ($fn5318) ((frost$io$OutputStream*) $tmp5293)->$class->vtable[19];
frost$core$Error* $tmp5319 = $tmp5317(((frost$io$OutputStream*) $tmp5293), $tmp5315);
if ($tmp5319 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5319));
*(&local0) = $tmp5319;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5301));
frost$core$Frost$unref$frost$core$Object$Q($tmp5300);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5296));
frost$core$String* $tmp5320 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5320));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5321 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5321));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5322 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5322));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5301));
frost$core$Frost$unref$frost$core$Object$Q($tmp5300);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5296));
// line 1475
frost$collections$HashMap** $tmp5323 = &param0->refs;
frost$collections$HashMap* $tmp5324 = *$tmp5323;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5325;
$tmp5325 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5325->value = param1;
frost$core$String* $tmp5326 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5324, ((frost$collections$Key*) $tmp5325), ((frost$core$Object*) $tmp5326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5325)));
frost$core$String* $tmp5327 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5327));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5328 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5328));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5329 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5329));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1478
frost$core$Bit $tmp5330 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5331 = $tmp5330.value;
if ($tmp5331) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp5332 = (frost$core$Int64) {1478};
frost$core$Error* $tmp5333 = *(&local0);
$fn5335 $tmp5334 = ($fn5335) ((frost$core$Object*) $tmp5333)->$class->vtable[0];
frost$core$String* $tmp5336 = $tmp5334(((frost$core$Object*) $tmp5333));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5337, $tmp5332, $tmp5336);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5336));
abort(); // unreachable
block5:;
// line 1479
goto block7;
block7:;
goto block7;
block8:;
goto block2;
block2:;
frost$core$Error* $tmp5338 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5338));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 1484
*(&local0) = ((frost$core$Error*) NULL);
// line 1485
frost$core$String* $tmp5339 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5339));
frost$core$String* $tmp5340 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5340));
*(&local1) = $tmp5339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5339));
// line 1486
frost$core$String* $tmp5341 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5341));
frost$core$String* $tmp5342 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5342));
*(&local2) = $tmp5341;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5341));
// line 1487
frost$core$String* $tmp5343 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5343));
frost$core$String* $tmp5344 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5344));
*(&local3) = $tmp5343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5343));
// line 1488
frost$io$IndentedOutputStream** $tmp5345 = &param0->out;
frost$io$IndentedOutputStream* $tmp5346 = *$tmp5345;
$fn5348 $tmp5347 = ($fn5348) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5349 = $tmp5347(param2);
frost$core$String* $tmp5350 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5349);
frost$core$String* $tmp5351 = frost$core$String$get_asString$R$frost$core$String($tmp5350);
frost$core$String* $tmp5352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5351, &$s5353);
frost$core$String* $tmp5354 = *(&local3);
frost$core$String* $tmp5355 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5352, $tmp5354);
frost$core$String* $tmp5356 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5355, &$s5357);
frost$core$String* $tmp5358 = *(&local1);
frost$core$String* $tmp5359 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5356, $tmp5358);
frost$core$String* $tmp5360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5359, &$s5361);
frost$core$String* $tmp5362 = *(&local2);
frost$core$String* $tmp5363 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5360, $tmp5362);
frost$core$String* $tmp5364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5363, &$s5365);
$fn5367 $tmp5366 = ($fn5367) ((frost$io$OutputStream*) $tmp5346)->$class->vtable[19];
frost$core$Error* $tmp5368 = $tmp5366(((frost$io$OutputStream*) $tmp5346), $tmp5364);
if ($tmp5368 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5368));
*(&local0) = $tmp5368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5349));
frost$core$String* $tmp5369 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5369));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5370 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5370));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5371 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5371));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5349));
// line 1489
frost$collections$HashMap** $tmp5372 = &param0->refs;
frost$collections$HashMap* $tmp5373 = *$tmp5372;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5374;
$tmp5374 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5374->value = param1;
frost$core$String* $tmp5375 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5373, ((frost$collections$Key*) $tmp5374), ((frost$core$Object*) $tmp5375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5374)));
frost$core$String* $tmp5376 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5376));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5377 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5377));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5378 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5378));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1492
frost$core$Bit $tmp5379 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5380 = $tmp5379.value;
if ($tmp5380) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp5381 = (frost$core$Int64) {1492};
frost$core$Error* $tmp5382 = *(&local0);
$fn5384 $tmp5383 = ($fn5384) ((frost$core$Object*) $tmp5382)->$class->vtable[0];
frost$core$String* $tmp5385 = $tmp5383(((frost$core$Object*) $tmp5382));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5386, $tmp5381, $tmp5385);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5385));
abort(); // unreachable
block5:;
// line 1493
goto block7;
block7:;
goto block7;
block8:;
goto block2;
block2:;
frost$core$Error* $tmp5387 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5387));
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
// line 1499
*(&local0) = ((frost$core$Error*) NULL);
// line 1500
frost$core$String* $tmp5388 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5388));
frost$core$String* $tmp5389 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5389));
*(&local1) = $tmp5388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5388));
// line 1501
frost$core$String* $tmp5390 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5390));
frost$core$String* $tmp5391 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5391));
*(&local2) = $tmp5390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5390));
// line 1502
frost$core$String* $tmp5392 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param4);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5392));
frost$core$String* $tmp5393 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5393));
*(&local3) = $tmp5392;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5392));
// line 1503
$fn5395 $tmp5394 = ($fn5395) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5396 = $tmp5394(param2);
frost$core$Int64 $tmp5397 = org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp5396);
*(&local4) = $tmp5397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5396));
// line 1504
frost$core$Int64 $tmp5398 = *(&local4);
frost$core$Int64 $tmp5399 = (frost$core$Int64) {0};
int64_t $tmp5400 = $tmp5398.value;
int64_t $tmp5401 = $tmp5399.value;
bool $tmp5402 = $tmp5400 > $tmp5401;
frost$core$Bit $tmp5403 = (frost$core$Bit) {$tmp5402};
bool $tmp5404 = $tmp5403.value;
if ($tmp5404) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp5405 = (frost$core$Int64) {1504};
$fn5407 $tmp5406 = ($fn5407) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5408 = $tmp5406(param2);
frost$core$String* $tmp5409 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s5410, ((frost$core$Object*) $tmp5408));
frost$core$String* $tmp5411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5409, &$s5412);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5413, $tmp5405, $tmp5411);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5408));
abort(); // unreachable
block3:;
// line 1505
frost$core$String* $tmp5414 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5414));
frost$core$String* $tmp5415 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5415));
*(&local5) = $tmp5414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5414));
// line 1506
frost$io$IndentedOutputStream** $tmp5416 = &param0->out;
frost$io$IndentedOutputStream* $tmp5417 = *$tmp5416;
$fn5419 $tmp5418 = ($fn5419) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5420 = $tmp5418(param2);
frost$core$String* $tmp5421 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5420);
frost$core$String* $tmp5422 = frost$core$String$get_asString$R$frost$core$String($tmp5421);
frost$core$String* $tmp5423 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5422, &$s5424);
frost$core$String* $tmp5425 = *(&local5);
frost$core$String* $tmp5426 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5423, $tmp5425);
frost$core$String* $tmp5427 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5426, &$s5428);
$fn5430 $tmp5429 = ($fn5430) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5431 = $tmp5429(param2);
frost$core$String* $tmp5432 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5431);
frost$core$String* $tmp5433 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5427, $tmp5432);
frost$core$String* $tmp5434 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5433, &$s5435);
frost$core$String* $tmp5436 = *(&local1);
frost$core$String* $tmp5437 = frost$core$String$get_asString$R$frost$core$String($tmp5436);
frost$core$String* $tmp5438 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5437, &$s5439);
frost$core$String* $tmp5440 = *(&local2);
frost$core$String* $tmp5441 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5438, $tmp5440);
frost$core$String* $tmp5442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5441, &$s5443);
frost$core$Int64 $tmp5444 = *(&local4);
frost$core$Int64$wrapper* $tmp5445;
$tmp5445 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5445->value = $tmp5444;
frost$core$String* $tmp5446 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5442, ((frost$core$Object*) $tmp5445));
frost$core$String* $tmp5447 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5446, &$s5448);
frost$core$String* $tmp5449 = *(&local3);
frost$core$String* $tmp5450 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5447, $tmp5449);
frost$core$String* $tmp5451 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5450, &$s5452);
frost$core$Int64 $tmp5453 = *(&local4);
frost$core$Int64$wrapper* $tmp5454;
$tmp5454 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5454->value = $tmp5453;
frost$core$String* $tmp5455 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5451, ((frost$core$Object*) $tmp5454));
frost$core$String* $tmp5456 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5455, &$s5457);
frost$core$String* $tmp5458 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5434, $tmp5456);
$fn5460 $tmp5459 = ($fn5460) ((frost$io$OutputStream*) $tmp5417)->$class->vtable[19];
frost$core$Error* $tmp5461 = $tmp5459(((frost$io$OutputStream*) $tmp5417), $tmp5458);
if ($tmp5461 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5461));
*(&local0) = $tmp5461;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5420));
frost$core$String* $tmp5462 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5462));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp5463 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5463));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5464 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5464));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5465 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5465));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5420));
// line 1508
frost$collections$HashMap** $tmp5466 = &param0->refs;
frost$collections$HashMap* $tmp5467 = *$tmp5466;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5468;
$tmp5468 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5468->value = param1;
frost$core$String* $tmp5469 = *(&local5);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5467, ((frost$collections$Key*) $tmp5468), ((frost$core$Object*) $tmp5469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5468)));
frost$core$String* $tmp5470 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5470));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp5471 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5471));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5472 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5472));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5473 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5473));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1511
frost$core$Bit $tmp5474 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5475 = $tmp5474.value;
if ($tmp5475) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp5476 = (frost$core$Int64) {1511};
frost$core$Error* $tmp5477 = *(&local0);
$fn5479 $tmp5478 = ($fn5479) ((frost$core$Object*) $tmp5477)->$class->vtable[0];
frost$core$String* $tmp5480 = $tmp5478(((frost$core$Object*) $tmp5477));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5481, $tmp5476, $tmp5480);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5480));
abort(); // unreachable
block7:;
// line 1512
goto block9;
block9:;
goto block9;
block10:;
goto block2;
block2:;
frost$core$Error* $tmp5482 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 1517
*(&local0) = ((frost$core$Error*) NULL);
// line 1518
frost$core$String* $tmp5483 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5483));
frost$core$String* $tmp5484 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5484));
*(&local1) = $tmp5483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5483));
// line 1519
frost$core$String* $tmp5485 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5485));
frost$core$String* $tmp5486 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5486));
*(&local2) = $tmp5485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5485));
// line 1520
frost$core$String* $tmp5487 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5487));
frost$core$String* $tmp5488 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5488));
*(&local3) = $tmp5487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5487));
// line 1521
frost$io$IndentedOutputStream** $tmp5489 = &param0->out;
frost$io$IndentedOutputStream* $tmp5490 = *$tmp5489;
frost$core$String* $tmp5491 = *(&local1);
frost$core$String* $tmp5492 = frost$core$String$get_asString$R$frost$core$String($tmp5491);
frost$core$String* $tmp5493 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5492, &$s5494);
frost$core$String* $tmp5495 = *(&local2);
frost$core$String* $tmp5496 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5493, $tmp5495);
frost$core$String* $tmp5497 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5496, &$s5498);
frost$core$String* $tmp5499 = *(&local3);
frost$core$String* $tmp5500 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5497, $tmp5499);
frost$core$String* $tmp5501 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5500, &$s5502);
$fn5504 $tmp5503 = ($fn5504) ((frost$io$OutputStream*) $tmp5490)->$class->vtable[19];
frost$core$Error* $tmp5505 = $tmp5503(((frost$io$OutputStream*) $tmp5490), $tmp5501);
if ($tmp5505 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5505));
*(&local0) = $tmp5505;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5492));
frost$core$String* $tmp5506 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5506));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5507 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5507));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5508 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5508));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5492));
frost$core$String* $tmp5509 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5509));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5510 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5510));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5511 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5511));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1524
frost$core$Bit $tmp5512 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5513 = $tmp5512.value;
if ($tmp5513) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp5514 = (frost$core$Int64) {1524};
frost$core$Error* $tmp5515 = *(&local0);
$fn5517 $tmp5516 = ($fn5517) ((frost$core$Object*) $tmp5515)->$class->vtable[0];
frost$core$String* $tmp5518 = $tmp5516(((frost$core$Object*) $tmp5515));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5519, $tmp5514, $tmp5518);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5518));
abort(); // unreachable
block5:;
// line 1525
goto block7;
block7:;
goto block7;
block8:;
goto block2;
block2:;
frost$core$Error* $tmp5520 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5520));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Error* local0 = NULL;
// line 1530
*(&local0) = ((frost$core$Error*) NULL);
// line 1531
frost$core$Bit $tmp5521 = frost$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp5522 = $tmp5521.value;
if ($tmp5522) goto block3; else goto block5;
block3:;
// line 1532
frost$io$IndentedOutputStream** $tmp5523 = &param0->out;
frost$io$IndentedOutputStream* $tmp5524 = *$tmp5523;
frost$core$String* $tmp5525 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp5526 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5527, $tmp5525);
frost$core$String* $tmp5528 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5526, &$s5529);
$fn5531 $tmp5530 = ($fn5531) ((frost$io$OutputStream*) $tmp5524)->$class->vtable[19];
frost$core$Error* $tmp5532 = $tmp5530(((frost$io$OutputStream*) $tmp5524), $tmp5528);
if ($tmp5532 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5532));
*(&local0) = $tmp5532;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5525));
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5525));
goto block4;
block5:;
// line 1
// line 1535
frost$io$IndentedOutputStream** $tmp5533 = &param0->out;
frost$io$IndentedOutputStream* $tmp5534 = *$tmp5533;
$fn5536 $tmp5535 = ($fn5536) ((frost$io$OutputStream*) $tmp5534)->$class->vtable[19];
frost$core$Error* $tmp5537 = $tmp5535(((frost$io$OutputStream*) $tmp5534), &$s5538);
if ($tmp5537 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5537));
*(&local0) = $tmp5537;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5537));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5537));
goto block4;
block4:;
goto block2;
block1:;
// line 1539
frost$core$Bit $tmp5539 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5540 = $tmp5539.value;
if ($tmp5540) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp5541 = (frost$core$Int64) {1539};
frost$core$Error* $tmp5542 = *(&local0);
$fn5544 $tmp5543 = ($fn5544) ((frost$core$Object*) $tmp5542)->$class->vtable[0];
frost$core$String* $tmp5545 = $tmp5543(((frost$core$Object*) $tmp5542));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5546, $tmp5541, $tmp5545);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5545));
abort(); // unreachable
block10:;
// line 1540
goto block12;
block12:;
goto block12;
block13:;
goto block2;
block2:;
frost$core$Error* $tmp5547 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5547));
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
// line 1545
*(&local0) = ((frost$core$Error*) NULL);
// line 1546
frost$core$Weak** $tmp5548 = &param2->owner;
frost$core$Weak* $tmp5549 = *$tmp5548;
frost$core$Object* $tmp5550 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5549);
frost$core$Bit* $tmp5551 = &((org$frostlang$frostc$ClassDecl*) $tmp5550)->external;
frost$core$Bit $tmp5552 = *$tmp5551;
bool $tmp5553 = $tmp5552.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp5550);
if ($tmp5553) goto block3; else goto block4;
block3:;
// line 1547
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param2);
goto block4;
block4:;
// line 1549
frost$core$Bit $tmp5554 = org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param2);
*(&local1) = $tmp5554;
// line 1550
org$frostlang$frostc$Type** $tmp5555 = &param2->returnType;
org$frostlang$frostc$Type* $tmp5556 = *$tmp5555;
frost$core$String* $tmp5557 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5556);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5557));
frost$core$String* $tmp5558 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5558));
*(&local2) = $tmp5557;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5557));
// line 1551
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5559));
frost$core$String* $tmp5560 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5560));
*(&local3) = &$s5561;
// line 1552
*(&local4) = ((frost$core$String*) NULL);
// line 1553
org$frostlang$frostc$Type** $tmp5562 = &param2->returnType;
org$frostlang$frostc$Type* $tmp5563 = *$tmp5562;
org$frostlang$frostc$Type* $tmp5564 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp5565 = ((frost$core$Equatable*) $tmp5563)->$class->itable;
while ($tmp5565->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5565 = $tmp5565->next;
}
$fn5567 $tmp5566 = $tmp5565->methods[1];
frost$core$Bit $tmp5568 = $tmp5566(((frost$core$Equatable*) $tmp5563), ((frost$core$Equatable*) $tmp5564));
bool $tmp5569 = $tmp5568.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5564));
if ($tmp5569) goto block5; else goto block6;
block5:;
// line 1554
frost$core$String* $tmp5570 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5570));
frost$core$String* $tmp5571 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5571));
*(&local4) = $tmp5570;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5570));
// line 1555
frost$core$Bit $tmp5572 = *(&local1);
bool $tmp5573 = $tmp5572.value;
if ($tmp5573) goto block7; else goto block9;
block7:;
// line 1556
frost$io$IndentedOutputStream** $tmp5574 = &param0->out;
frost$io$IndentedOutputStream* $tmp5575 = *$tmp5574;
frost$core$String* $tmp5576 = *(&local2);
frost$core$String* $tmp5577 = frost$core$String$get_asString$R$frost$core$String($tmp5576);
frost$core$String* $tmp5578 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5577, &$s5579);
frost$core$String* $tmp5580 = *(&local4);
frost$core$String* $tmp5581 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5578, $tmp5580);
frost$core$String* $tmp5582 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5581, &$s5583);
$fn5585 $tmp5584 = ($fn5585) ((frost$io$OutputStream*) $tmp5575)->$class->vtable[19];
frost$core$Error* $tmp5586 = $tmp5584(((frost$io$OutputStream*) $tmp5575), $tmp5582);
if ($tmp5586 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5586));
*(&local0) = $tmp5586;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5577));
frost$core$String* $tmp5587 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5587));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5588 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5588));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5589 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5589));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5577));
goto block8;
block9:;
// line 1
// line 1559
frost$io$IndentedOutputStream** $tmp5590 = &param0->out;
frost$io$IndentedOutputStream* $tmp5591 = *$tmp5590;
frost$core$String* $tmp5592 = *(&local2);
frost$core$String* $tmp5593 = frost$core$String$get_asString$R$frost$core$String($tmp5592);
frost$core$String* $tmp5594 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5593, &$s5595);
frost$core$String* $tmp5596 = *(&local4);
frost$core$String* $tmp5597 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5594, $tmp5596);
frost$core$String* $tmp5598 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5597, &$s5599);
$fn5601 $tmp5600 = ($fn5601) ((frost$io$OutputStream*) $tmp5591)->$class->vtable[17];
frost$core$Error* $tmp5602 = $tmp5600(((frost$io$OutputStream*) $tmp5591), $tmp5598);
if ($tmp5602 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5602));
*(&local0) = $tmp5602;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5593));
frost$core$String* $tmp5603 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5603));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5604 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5604));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5605 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5605));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5593));
goto block8;
block8:;
// line 1561
frost$collections$HashMap** $tmp5606 = &param0->refs;
frost$collections$HashMap* $tmp5607 = *$tmp5606;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5608;
$tmp5608 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5608->value = param1;
frost$core$String* $tmp5609 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5607, ((frost$collections$Key*) $tmp5608), ((frost$core$Object*) $tmp5609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5608)));
goto block6;
block6:;
// line 1563
frost$io$IndentedOutputStream** $tmp5610 = &param0->out;
frost$io$IndentedOutputStream* $tmp5611 = *$tmp5610;
frost$core$String* $tmp5612 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param2);
frost$core$String* $tmp5613 = frost$core$String$get_asString$R$frost$core$String($tmp5612);
frost$core$String* $tmp5614 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5613, &$s5615);
$fn5617 $tmp5616 = ($fn5617) ((frost$io$OutputStream*) $tmp5611)->$class->vtable[17];
frost$core$Error* $tmp5618 = $tmp5616(((frost$io$OutputStream*) $tmp5611), $tmp5614);
if ($tmp5618 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5618));
*(&local0) = $tmp5618;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5612));
frost$core$String* $tmp5619 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5619));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5620 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5620));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5621 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5621));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5612));
// line 1564
frost$core$Bit $tmp5622 = *(&local1);
bool $tmp5623 = $tmp5622.value;
if ($tmp5623) goto block16; else goto block17;
block16:;
// line 1565
frost$io$IndentedOutputStream** $tmp5624 = &param0->out;
frost$io$IndentedOutputStream* $tmp5625 = *$tmp5624;
frost$core$String* $tmp5626 = *(&local4);
frost$core$String* $tmp5627 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5628, $tmp5626);
frost$core$String* $tmp5629 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5627, &$s5630);
$fn5632 $tmp5631 = ($fn5632) ((frost$io$OutputStream*) $tmp5625)->$class->vtable[17];
frost$core$Error* $tmp5633 = $tmp5631(((frost$io$OutputStream*) $tmp5625), $tmp5629);
if ($tmp5633 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5633));
*(&local0) = $tmp5633;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5627));
frost$core$String* $tmp5634 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5634));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5635 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5635));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5636 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5636));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5627));
// line 1566
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5637));
frost$core$String* $tmp5638 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5638));
*(&local3) = &$s5639;
goto block17;
block17:;
// line 1568
ITable* $tmp5640 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp5640->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp5640 = $tmp5640->next;
}
$fn5642 $tmp5641 = $tmp5640->methods[0];
frost$collections$Iterator* $tmp5643 = $tmp5641(((frost$collections$Iterable*) param3));
goto block20;
block20:;
ITable* $tmp5644 = $tmp5643->$class->itable;
while ($tmp5644->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5644 = $tmp5644->next;
}
$fn5646 $tmp5645 = $tmp5644->methods[0];
frost$core$Bit $tmp5647 = $tmp5645($tmp5643);
bool $tmp5648 = $tmp5647.value;
if ($tmp5648) goto block22; else goto block21;
block21:;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp5649 = $tmp5643->$class->itable;
while ($tmp5649->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5649 = $tmp5649->next;
}
$fn5651 $tmp5650 = $tmp5649->methods[1];
frost$core$Object* $tmp5652 = $tmp5650($tmp5643);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp5652)));
org$frostlang$frostc$IR$Value* $tmp5653 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5653));
*(&local5) = ((org$frostlang$frostc$IR$Value*) $tmp5652);
// line 1569
frost$io$IndentedOutputStream** $tmp5654 = &param0->out;
frost$io$IndentedOutputStream* $tmp5655 = *$tmp5654;
frost$core$String* $tmp5656 = *(&local3);
$fn5658 $tmp5657 = ($fn5658) ((frost$io$OutputStream*) $tmp5655)->$class->vtable[17];
frost$core$Error* $tmp5659 = $tmp5657(((frost$io$OutputStream*) $tmp5655), $tmp5656);
if ($tmp5659 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5659));
*(&local0) = $tmp5659;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5659));
frost$core$Frost$unref$frost$core$Object$Q($tmp5652);
org$frostlang$frostc$IR$Value* $tmp5660 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5660));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5643));
frost$core$String* $tmp5661 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5661));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5662 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5662));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5663 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5663));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5659));
// line 1570
frost$io$IndentedOutputStream** $tmp5664 = &param0->out;
frost$io$IndentedOutputStream* $tmp5665 = *$tmp5664;
org$frostlang$frostc$IR$Value* $tmp5666 = *(&local5);
frost$core$String* $tmp5667 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp5666);
$fn5669 $tmp5668 = ($fn5669) ((frost$io$OutputStream*) $tmp5665)->$class->vtable[17];
frost$core$Error* $tmp5670 = $tmp5668(((frost$io$OutputStream*) $tmp5665), $tmp5667);
if ($tmp5670 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5670));
*(&local0) = $tmp5670;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5667));
frost$core$Frost$unref$frost$core$Object$Q($tmp5652);
org$frostlang$frostc$IR$Value* $tmp5671 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5671));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5643));
frost$core$String* $tmp5672 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5672));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5673 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5673));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5674 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5674));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5667));
// line 1571
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5675));
frost$core$String* $tmp5676 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5676));
*(&local3) = &$s5677;
frost$core$Frost$unref$frost$core$Object$Q($tmp5652);
org$frostlang$frostc$IR$Value* $tmp5678 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5678));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5643));
// line 1573
frost$io$IndentedOutputStream** $tmp5679 = &param0->out;
frost$io$IndentedOutputStream* $tmp5680 = *$tmp5679;
$fn5682 $tmp5681 = ($fn5682) ((frost$io$OutputStream*) $tmp5680)->$class->vtable[19];
frost$core$Error* $tmp5683 = $tmp5681(((frost$io$OutputStream*) $tmp5680), &$s5684);
if ($tmp5683 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5683));
*(&local0) = $tmp5683;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5683));
frost$core$String* $tmp5685 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5685));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5686 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5686));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5687 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5687));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5683));
frost$core$String* $tmp5688 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5688));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5689 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5689));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5690 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5690));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1576
frost$core$Bit $tmp5691 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5692 = $tmp5691.value;
if ($tmp5692) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp5693 = (frost$core$Int64) {1576};
frost$core$Error* $tmp5694 = *(&local0);
$fn5696 $tmp5695 = ($fn5696) ((frost$core$Object*) $tmp5694)->$class->vtable[0];
frost$core$String* $tmp5697 = $tmp5695(((frost$core$Object*) $tmp5694));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5698, $tmp5693, $tmp5697);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5697));
abort(); // unreachable
block29:;
// line 1577
goto block31;
block31:;
goto block31;
block32:;
goto block2;
block2:;
frost$core$Error* $tmp5699 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5699));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
// line 1582
*(&local0) = ((frost$core$Error*) NULL);
// line 1583
frost$io$IndentedOutputStream** $tmp5700 = &param0->out;
frost$io$IndentedOutputStream* $tmp5701 = *$tmp5700;
frost$core$String* $tmp5702 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp5703 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5704, $tmp5702);
frost$core$String* $tmp5705 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5703, &$s5706);
frost$core$String* $tmp5707 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp5708 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5705, $tmp5707);
frost$core$String* $tmp5709 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5708, &$s5710);
$fn5712 $tmp5711 = ($fn5712) ((frost$io$OutputStream*) $tmp5701)->$class->vtable[19];
frost$core$Error* $tmp5713 = $tmp5711(((frost$io$OutputStream*) $tmp5701), $tmp5709);
if ($tmp5713 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5713));
*(&local0) = $tmp5713;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5702));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5702));
goto block2;
block1:;
// line 1586
frost$core$Bit $tmp5714 = frost$core$Bit$init$builtin_bit(false);
bool $tmp5715 = $tmp5714.value;
if ($tmp5715) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp5716 = (frost$core$Int64) {1586};
frost$core$Error* $tmp5717 = *(&local0);
$fn5719 $tmp5718 = ($fn5719) ((frost$core$Object*) $tmp5717)->$class->vtable[0];
frost$core$String* $tmp5720 = $tmp5718(((frost$core$Object*) $tmp5717));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5721, $tmp5716, $tmp5720);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5720));
abort(); // unreachable
block5:;
// line 1587
goto block7;
block7:;
goto block7;
block8:;
goto block2;
block2:;
frost$core$Error* $tmp5722 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5722));
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
// line 1592
*(&local0) = ((frost$core$Error*) NULL);
// line 1593
frost$core$Int64* $tmp5723 = &param2->$rawValue;
frost$core$Int64 $tmp5724 = *$tmp5723;
frost$core$Int64 $tmp5725 = (frost$core$Int64) {0};
frost$core$Bit $tmp5726 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5725);
bool $tmp5727 = $tmp5726.value;
if ($tmp5727) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp5728 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5729 = *$tmp5728;
*(&local1) = $tmp5729;
org$frostlang$frostc$IR$Value** $tmp5730 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5731 = *$tmp5730;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5731));
org$frostlang$frostc$IR$Value* $tmp5732 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5732));
*(&local2) = $tmp5731;
org$frostlang$frostc$expression$Binary$Operator* $tmp5733 = (org$frostlang$frostc$expression$Binary$Operator*) (param2->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp5734 = *$tmp5733;
*(&local3) = $tmp5734;
org$frostlang$frostc$IR$Value** $tmp5735 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5736 = *$tmp5735;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5736));
org$frostlang$frostc$IR$Value* $tmp5737 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5737));
*(&local4) = $tmp5736;
org$frostlang$frostc$Type** $tmp5738 = (org$frostlang$frostc$Type**) (param2->$data + 40);
org$frostlang$frostc$Type* $tmp5739 = *$tmp5738;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5739));
org$frostlang$frostc$Type* $tmp5740 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5740));
*(&local5) = $tmp5739;
// line 1595
org$frostlang$frostc$IR$Value* $tmp5741 = *(&local2);
org$frostlang$frostc$expression$Binary$Operator $tmp5742 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp5743 = *(&local4);
org$frostlang$frostc$Type* $tmp5744 = *(&local5);
org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5741, $tmp5742, $tmp5743, $tmp5744);
org$frostlang$frostc$Type* $tmp5745 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5745));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5746 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5746));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5747 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5747));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block5:;
frost$core$Int64 $tmp5748 = (frost$core$Int64) {1};
frost$core$Bit $tmp5749 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5748);
bool $tmp5750 = $tmp5749.value;
if ($tmp5750) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp5751 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5752 = *$tmp5751;
*(&local6) = $tmp5752;
org$frostlang$frostc$IR$Block$ID* $tmp5753 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp5754 = *$tmp5753;
*(&local7) = $tmp5754;
// line 1598
org$frostlang$frostc$IR$Block$ID $tmp5755 = *(&local7);
org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID(param0, $tmp5755);
goto block3;
block7:;
frost$core$Int64 $tmp5756 = (frost$core$Int64) {2};
frost$core$Bit $tmp5757 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5756);
bool $tmp5758 = $tmp5757.value;
if ($tmp5758) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp5759 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5760 = *$tmp5759;
*(&local8) = $tmp5760;
org$frostlang$frostc$IR$Value** $tmp5761 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5762 = *$tmp5761;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5762));
org$frostlang$frostc$IR$Value* $tmp5763 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5763));
*(&local9) = $tmp5762;
org$frostlang$frostc$Type** $tmp5764 = (org$frostlang$frostc$Type**) (param2->$data + 24);
org$frostlang$frostc$Type* $tmp5765 = *$tmp5764;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5765));
org$frostlang$frostc$Type* $tmp5766 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5766));
*(&local10) = $tmp5765;
frost$core$Bit* $tmp5767 = (frost$core$Bit*) (param2->$data + 32);
frost$core$Bit $tmp5768 = *$tmp5767;
// line 1601
org$frostlang$frostc$IR$Value* $tmp5769 = *(&local9);
org$frostlang$frostc$Type* $tmp5770 = *(&local10);
org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5769, $tmp5770);
org$frostlang$frostc$Type* $tmp5771 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5771));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5772 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5772));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block9:;
frost$core$Int64 $tmp5773 = (frost$core$Int64) {3};
frost$core$Bit $tmp5774 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5773);
bool $tmp5775 = $tmp5774.value;
if ($tmp5775) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp5776 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5777 = *$tmp5776;
frost$core$String** $tmp5778 = (frost$core$String**) (param2->$data + 16);
frost$core$String* $tmp5779 = *$tmp5778;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5779));
frost$core$String* $tmp5780 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5780));
*(&local11) = $tmp5779;
// line 1604
frost$io$IndentedOutputStream** $tmp5781 = &param0->out;
frost$io$IndentedOutputStream* $tmp5782 = *$tmp5781;
frost$core$String* $tmp5783 = *(&local11);
frost$core$String* $tmp5784 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5785, $tmp5783);
frost$core$String* $tmp5786 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5784, &$s5787);
$fn5789 $tmp5788 = ($fn5789) ((frost$io$OutputStream*) $tmp5782)->$class->vtable[19];
frost$core$Error* $tmp5790 = $tmp5788(((frost$io$OutputStream*) $tmp5782), $tmp5786);
if ($tmp5790 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5790));
*(&local0) = $tmp5790;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5784));
frost$core$String* $tmp5791 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5791));
*(&local11) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5784));
frost$core$String* $tmp5792 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5792));
*(&local11) = ((frost$core$String*) NULL);
goto block3;
block11:;
frost$core$Int64 $tmp5793 = (frost$core$Int64) {5};
frost$core$Bit $tmp5794 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5793);
bool $tmp5795 = $tmp5794.value;
if ($tmp5795) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp5796 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5797 = *$tmp5796;
*(&local12) = $tmp5797;
org$frostlang$frostc$IR$Value** $tmp5798 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5799 = *$tmp5798;
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5799));
org$frostlang$frostc$IR$Value* $tmp5800 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5800));
*(&local13) = $tmp5799;
org$frostlang$frostc$IR$Block$ID* $tmp5801 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp5802 = *$tmp5801;
*(&local14) = $tmp5802;
org$frostlang$frostc$IR$Block$ID* $tmp5803 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp5804 = *$tmp5803;
*(&local15) = $tmp5804;
// line 1607
org$frostlang$frostc$IR$Value* $tmp5805 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp5806 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp5807 = *(&local15);
org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, $tmp5805, $tmp5806, $tmp5807);
org$frostlang$frostc$IR$Value* $tmp5808 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5808));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block15:;
frost$core$Int64 $tmp5809 = (frost$core$Int64) {6};
frost$core$Bit $tmp5810 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5809);
bool $tmp5811 = $tmp5810.value;
if ($tmp5811) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp5812 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5813 = *$tmp5812;
*(&local16) = $tmp5813;
org$frostlang$frostc$ClassDecl** $tmp5814 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp5815 = *$tmp5814;
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5815));
org$frostlang$frostc$ClassDecl* $tmp5816 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5816));
*(&local17) = $tmp5815;
// line 1610
org$frostlang$frostc$ClassDecl* $tmp5817 = *(&local17);
org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl(param0, param1, $tmp5817);
org$frostlang$frostc$ClassDecl* $tmp5818 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5818));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block3;
block17:;
frost$core$Int64 $tmp5819 = (frost$core$Int64) {7};
frost$core$Bit $tmp5820 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5819);
bool $tmp5821 = $tmp5820.value;
if ($tmp5821) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp5822 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5823 = *$tmp5822;
*(&local18) = $tmp5823;
org$frostlang$frostc$ClassDecl** $tmp5824 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp5825 = *$tmp5824;
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5825));
org$frostlang$frostc$ClassDecl* $tmp5826 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5826));
*(&local19) = $tmp5825;
org$frostlang$frostc$FixedArray** $tmp5827 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5828 = *$tmp5827;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5828));
org$frostlang$frostc$FixedArray* $tmp5829 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5829));
*(&local20) = $tmp5828;
// line 1613
org$frostlang$frostc$ClassDecl* $tmp5830 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp5831 = *(&local20);
org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5830, $tmp5831);
org$frostlang$frostc$FixedArray* $tmp5832 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5832));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp5833 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5833));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block3;
block19:;
frost$core$Int64 $tmp5834 = (frost$core$Int64) {8};
frost$core$Bit $tmp5835 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5834);
bool $tmp5836 = $tmp5835.value;
if ($tmp5836) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp5837 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5838 = *$tmp5837;
*(&local21) = $tmp5838;
org$frostlang$frostc$IR$Value** $tmp5839 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5840 = *$tmp5839;
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5840));
org$frostlang$frostc$IR$Value* $tmp5841 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5841));
*(&local22) = $tmp5840;
org$frostlang$frostc$FixedArray** $tmp5842 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5843 = *$tmp5842;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5843));
org$frostlang$frostc$FixedArray* $tmp5844 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5844));
*(&local23) = $tmp5843;
// line 1616
org$frostlang$frostc$IR$Value* $tmp5845 = *(&local22);
org$frostlang$frostc$FixedArray* $tmp5846 = *(&local23);
org$frostlang$frostc$CCodeGenerator$writeDynamicCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5845, ((frost$collections$ListView*) $tmp5846));
org$frostlang$frostc$FixedArray* $tmp5847 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5847));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp5848 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5848));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block21:;
frost$core$Int64 $tmp5849 = (frost$core$Int64) {9};
frost$core$Bit $tmp5850 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5849);
bool $tmp5851 = $tmp5850.value;
if ($tmp5851) goto block22; else goto block23;
block22:;
goto block3;
block23:;
frost$core$Int64 $tmp5852 = (frost$core$Int64) {10};
frost$core$Bit $tmp5853 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5852);
bool $tmp5854 = $tmp5853.value;
if ($tmp5854) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp5855 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5856 = *$tmp5855;
*(&local24) = $tmp5856;
org$frostlang$frostc$IR$Value** $tmp5857 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5858 = *$tmp5857;
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5858));
org$frostlang$frostc$IR$Value* $tmp5859 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5859));
*(&local25) = $tmp5858;
org$frostlang$frostc$FieldDecl** $tmp5860 = (org$frostlang$frostc$FieldDecl**) (param2->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp5861 = *$tmp5860;
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5861));
org$frostlang$frostc$FieldDecl* $tmp5862 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5862));
*(&local26) = $tmp5861;
// line 1621
org$frostlang$frostc$IR$Value* $tmp5863 = *(&local25);
org$frostlang$frostc$FieldDecl* $tmp5864 = *(&local26);
org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(param0, param1, $tmp5863, $tmp5864);
org$frostlang$frostc$FieldDecl* $tmp5865 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5865));
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5866 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5866));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block25:;
frost$core$Int64 $tmp5867 = (frost$core$Int64) {4};
frost$core$Bit $tmp5868 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5867);
bool $tmp5869 = $tmp5868.value;
if ($tmp5869) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp5870 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5871 = *$tmp5870;
*(&local27) = $tmp5871;
org$frostlang$frostc$IR$Value** $tmp5872 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5873 = *$tmp5872;
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5873));
org$frostlang$frostc$IR$Value* $tmp5874 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5874));
*(&local28) = $tmp5873;
org$frostlang$frostc$ChoiceCase** $tmp5875 = (org$frostlang$frostc$ChoiceCase**) (param2->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp5876 = *$tmp5875;
*(&local29) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5876));
org$frostlang$frostc$ChoiceCase* $tmp5877 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5877));
*(&local29) = $tmp5876;
frost$core$Int64* $tmp5878 = (frost$core$Int64*) (param2->$data + 32);
frost$core$Int64 $tmp5879 = *$tmp5878;
*(&local30) = $tmp5879;
// line 1624
org$frostlang$frostc$IR$Value* $tmp5880 = *(&local28);
org$frostlang$frostc$ChoiceCase* $tmp5881 = *(&local29);
frost$core$Int64 $tmp5882 = *(&local30);
org$frostlang$frostc$CCodeGenerator$writeGetChoiceFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64(param0, param1, $tmp5880, $tmp5881, $tmp5882);
org$frostlang$frostc$ChoiceCase* $tmp5883 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5883));
*(&local29) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$IR$Value* $tmp5884 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5884));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block27:;
frost$core$Int64 $tmp5885 = (frost$core$Int64) {11};
frost$core$Bit $tmp5886 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5885);
bool $tmp5887 = $tmp5886.value;
if ($tmp5887) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp5888 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5889 = *$tmp5888;
*(&local31) = $tmp5889;
org$frostlang$frostc$IR$Value** $tmp5890 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5891 = *$tmp5890;
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5891));
org$frostlang$frostc$IR$Value* $tmp5892 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5892));
*(&local32) = $tmp5891;
org$frostlang$frostc$FieldDecl** $tmp5893 = (org$frostlang$frostc$FieldDecl**) (param2->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp5894 = *$tmp5893;
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5894));
org$frostlang$frostc$FieldDecl* $tmp5895 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5895));
*(&local33) = $tmp5894;
// line 1627
org$frostlang$frostc$IR$Value* $tmp5896 = *(&local32);
org$frostlang$frostc$FieldDecl* $tmp5897 = *(&local33);
org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(param0, param1, $tmp5896, $tmp5897);
org$frostlang$frostc$FieldDecl* $tmp5898 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5898));
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5899 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5899));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block29:;
frost$core$Int64 $tmp5900 = (frost$core$Int64) {13};
frost$core$Bit $tmp5901 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5900);
bool $tmp5902 = $tmp5901.value;
if ($tmp5902) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp5903 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5904 = *$tmp5903;
*(&local34) = $tmp5904;
org$frostlang$frostc$IR$Value** $tmp5905 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5906 = *$tmp5905;
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5906));
org$frostlang$frostc$IR$Value* $tmp5907 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5907));
*(&local35) = $tmp5906;
org$frostlang$frostc$ClassDecl** $tmp5908 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp5909 = *$tmp5908;
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5909));
org$frostlang$frostc$ClassDecl* $tmp5910 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5910));
*(&local36) = $tmp5909;
frost$core$Int64* $tmp5911 = (frost$core$Int64*) (param2->$data + 32);
frost$core$Int64 $tmp5912 = *$tmp5911;
*(&local37) = $tmp5912;
org$frostlang$frostc$Type** $tmp5913 = (org$frostlang$frostc$Type**) (param2->$data + 40);
org$frostlang$frostc$Type* $tmp5914 = *$tmp5913;
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5914));
org$frostlang$frostc$Type* $tmp5915 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5915));
*(&local38) = $tmp5914;
// line 1630
org$frostlang$frostc$IR$Value* $tmp5916 = *(&local35);
org$frostlang$frostc$ClassDecl* $tmp5917 = *(&local36);
frost$core$Int64 $tmp5918 = *(&local37);
org$frostlang$frostc$Type* $tmp5919 = *(&local38);
org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type(param0, param1, $tmp5916, $tmp5917, $tmp5918, $tmp5919);
org$frostlang$frostc$Type* $tmp5920 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5920));
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp5921 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5921));
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5922 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5922));
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block31:;
frost$core$Int64 $tmp5923 = (frost$core$Int64) {12};
frost$core$Bit $tmp5924 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5923);
bool $tmp5925 = $tmp5924.value;
if ($tmp5925) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp5926 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5927 = *$tmp5926;
*(&local39) = $tmp5927;
org$frostlang$frostc$IR$Value** $tmp5928 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5929 = *$tmp5928;
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5929));
org$frostlang$frostc$IR$Value* $tmp5930 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5930));
*(&local40) = $tmp5929;
frost$core$Int64* $tmp5931 = (frost$core$Int64*) (param2->$data + 24);
frost$core$Int64 $tmp5932 = *$tmp5931;
*(&local41) = $tmp5932;
org$frostlang$frostc$Type** $tmp5933 = (org$frostlang$frostc$Type**) (param2->$data + 32);
org$frostlang$frostc$Type* $tmp5934 = *$tmp5933;
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5934));
org$frostlang$frostc$Type* $tmp5935 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5935));
*(&local42) = $tmp5934;
// line 1633
org$frostlang$frostc$IR$Value* $tmp5936 = *(&local40);
frost$core$Int64 $tmp5937 = *(&local41);
org$frostlang$frostc$Type* $tmp5938 = *(&local42);
org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type(param0, param1, $tmp5936, $tmp5937, $tmp5938);
org$frostlang$frostc$Type* $tmp5939 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5939));
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5940 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5940));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block33:;
frost$core$Int64 $tmp5941 = (frost$core$Int64) {14};
frost$core$Bit $tmp5942 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5941);
bool $tmp5943 = $tmp5942.value;
if ($tmp5943) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp5944 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5945 = *$tmp5944;
*(&local43) = $tmp5945;
org$frostlang$frostc$IR$Value** $tmp5946 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5947 = *$tmp5946;
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5947));
org$frostlang$frostc$IR$Value* $tmp5948 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5948));
*(&local44) = $tmp5947;
// line 1636
org$frostlang$frostc$IR$Value* $tmp5949 = *(&local44);
org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5949);
org$frostlang$frostc$IR$Value* $tmp5950 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5950));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block35:;
frost$core$Int64 $tmp5951 = (frost$core$Int64) {15};
frost$core$Bit $tmp5952 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5951);
bool $tmp5953 = $tmp5952.value;
if ($tmp5953) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp5954 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5955 = *$tmp5954;
*(&local45) = $tmp5955;
org$frostlang$frostc$IR$Value** $tmp5956 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5957 = *$tmp5956;
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5957));
org$frostlang$frostc$IR$Value* $tmp5958 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5958));
*(&local46) = $tmp5957;
// line 1639
org$frostlang$frostc$IR$Value* $tmp5959 = *(&local46);
org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5959);
org$frostlang$frostc$IR$Value* $tmp5960 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5960));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block37:;
frost$core$Int64 $tmp5961 = (frost$core$Int64) {16};
frost$core$Bit $tmp5962 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5961);
bool $tmp5963 = $tmp5962.value;
if ($tmp5963) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp5964 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5965 = *$tmp5964;
*(&local47) = $tmp5965;
org$frostlang$frostc$IR$Value** $tmp5966 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5967 = *$tmp5966;
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5967));
org$frostlang$frostc$IR$Value* $tmp5968 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5968));
*(&local48) = $tmp5967;
// line 1642
org$frostlang$frostc$IR$Value* $tmp5969 = *(&local48);
org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5969);
org$frostlang$frostc$IR$Value* $tmp5970 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5970));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block39:;
frost$core$Int64 $tmp5971 = (frost$core$Int64) {17};
frost$core$Bit $tmp5972 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5971);
bool $tmp5973 = $tmp5972.value;
if ($tmp5973) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Position* $tmp5974 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5975 = *$tmp5974;
*(&local49) = $tmp5975;
org$frostlang$frostc$IR$Value** $tmp5976 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5977 = *$tmp5976;
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5977));
org$frostlang$frostc$IR$Value* $tmp5978 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5978));
*(&local50) = $tmp5977;
org$frostlang$frostc$Type** $tmp5979 = (org$frostlang$frostc$Type**) (param2->$data + 24);
org$frostlang$frostc$Type* $tmp5980 = *$tmp5979;
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5980));
org$frostlang$frostc$Type* $tmp5981 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5981));
*(&local51) = $tmp5980;
// line 1645
org$frostlang$frostc$IR$Value* $tmp5982 = *(&local50);
org$frostlang$frostc$Type* $tmp5983 = *(&local51);
org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5982, $tmp5983);
org$frostlang$frostc$Type* $tmp5984 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5984));
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5985 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5985));
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block41:;
frost$core$Int64 $tmp5986 = (frost$core$Int64) {18};
frost$core$Bit $tmp5987 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5986);
bool $tmp5988 = $tmp5987.value;
if ($tmp5988) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp5989 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5990 = *$tmp5989;
*(&local52) = $tmp5990;
org$frostlang$frostc$IR$Value** $tmp5991 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5992 = *$tmp5991;
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5992));
org$frostlang$frostc$IR$Value* $tmp5993 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5993));
*(&local53) = $tmp5992;
// line 1648
org$frostlang$frostc$IR$Value* $tmp5994 = *(&local53);
org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value(param0, $tmp5994);
org$frostlang$frostc$IR$Value* $tmp5995 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5995));
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block43:;
frost$core$Int64 $tmp5996 = (frost$core$Int64) {20};
frost$core$Bit $tmp5997 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp5996);
bool $tmp5998 = $tmp5997.value;
if ($tmp5998) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp5999 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp6000 = *$tmp5999;
*(&local54) = $tmp6000;
org$frostlang$frostc$IR$Value** $tmp6001 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp6002 = *$tmp6001;
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6002));
org$frostlang$frostc$IR$Value* $tmp6003 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6003));
*(&local55) = $tmp6002;
org$frostlang$frostc$IR$Value** $tmp6004 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp6005 = *$tmp6004;
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6005));
org$frostlang$frostc$IR$Value* $tmp6006 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6006));
*(&local56) = $tmp6005;
// line 1651
org$frostlang$frostc$IR$Value* $tmp6007 = *(&local55);
org$frostlang$frostc$IR$Value* $tmp6008 = *(&local56);
org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp6007, $tmp6008);
org$frostlang$frostc$IR$Value* $tmp6009 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6009));
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp6010 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6010));
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block45:;
frost$core$Int64 $tmp6011 = (frost$core$Int64) {21};
frost$core$Bit $tmp6012 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp6011);
bool $tmp6013 = $tmp6012.value;
if ($tmp6013) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp6014 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp6015 = *$tmp6014;
*(&local57) = $tmp6015;
org$frostlang$frostc$IR$Value** $tmp6016 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp6017 = *$tmp6016;
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6017));
org$frostlang$frostc$IR$Value* $tmp6018 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6018));
*(&local58) = $tmp6017;
org$frostlang$frostc$IR$Value** $tmp6019 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp6020 = *$tmp6019;
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6020));
org$frostlang$frostc$IR$Value* $tmp6021 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6021));
*(&local59) = $tmp6020;
// line 1654
org$frostlang$frostc$IR$Value* $tmp6022 = *(&local58);
org$frostlang$frostc$IR$Value* $tmp6023 = *(&local59);
org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp6022, $tmp6023);
org$frostlang$frostc$IR$Value* $tmp6024 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6024));
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp6025 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6025));
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block47:;
frost$core$Int64 $tmp6026 = (frost$core$Int64) {22};
frost$core$Bit $tmp6027 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp6026);
bool $tmp6028 = $tmp6027.value;
if ($tmp6028) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp6029 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp6030 = *$tmp6029;
*(&local60) = $tmp6030;
org$frostlang$frostc$IR$Value** $tmp6031 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp6032 = *$tmp6031;
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6032));
org$frostlang$frostc$IR$Value* $tmp6033 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6033));
*(&local61) = $tmp6032;
org$frostlang$frostc$IR$Value** $tmp6034 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp6035 = *$tmp6034;
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6035));
org$frostlang$frostc$IR$Value* $tmp6036 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6036));
*(&local62) = $tmp6035;
org$frostlang$frostc$IR$Value** $tmp6037 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp6038 = *$tmp6037;
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6038));
org$frostlang$frostc$IR$Value* $tmp6039 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6039));
*(&local63) = $tmp6038;
// line 1657
org$frostlang$frostc$IR$Value* $tmp6040 = *(&local61);
org$frostlang$frostc$IR$Value* $tmp6041 = *(&local62);
org$frostlang$frostc$IR$Value* $tmp6042 = *(&local63);
org$frostlang$frostc$CCodeGenerator$writePointerRealloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp6040, $tmp6041, $tmp6042);
org$frostlang$frostc$IR$Value* $tmp6043 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6043));
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp6044 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6044));
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp6045 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6045));
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block49:;
frost$core$Int64 $tmp6046 = (frost$core$Int64) {24};
frost$core$Bit $tmp6047 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp6046);
bool $tmp6048 = $tmp6047.value;
if ($tmp6048) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp6049 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp6050 = *$tmp6049;
*(&local64) = $tmp6050;
org$frostlang$frostc$IR$Value** $tmp6051 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp6052 = *$tmp6051;
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6052));
org$frostlang$frostc$IR$Value* $tmp6053 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6053));
*(&local65) = $tmp6052;
org$frostlang$frostc$IR$Value** $tmp6054 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp6055 = *$tmp6054;
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6055));
org$frostlang$frostc$IR$Value* $tmp6056 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6056));
*(&local66) = $tmp6055;
org$frostlang$frostc$IR$Value** $tmp6057 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp6058 = *$tmp6057;
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6058));
org$frostlang$frostc$IR$Value* $tmp6059 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6059));
*(&local67) = $tmp6058;
// line 1660
org$frostlang$frostc$IR$Value* $tmp6060 = *(&local65);
org$frostlang$frostc$IR$Value* $tmp6061 = *(&local66);
org$frostlang$frostc$IR$Value* $tmp6062 = *(&local67);
org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, $tmp6060, $tmp6061, $tmp6062);
org$frostlang$frostc$IR$Value* $tmp6063 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6063));
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp6064 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6064));
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp6065 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6065));
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block51:;
frost$core$Int64 $tmp6066 = (frost$core$Int64) {25};
frost$core$Bit $tmp6067 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp6066);
bool $tmp6068 = $tmp6067.value;
if ($tmp6068) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp6069 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp6070 = *$tmp6069;
*(&local68) = $tmp6070;
org$frostlang$frostc$IR$Value** $tmp6071 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp6072 = *$tmp6071;
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6072));
org$frostlang$frostc$IR$Value* $tmp6073 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6073));
*(&local69) = $tmp6072;
// line 1663
org$frostlang$frostc$IR$Value* $tmp6074 = *(&local69);
org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q(param0, $tmp6074);
org$frostlang$frostc$IR$Value* $tmp6075 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6075));
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block53:;
frost$core$Int64 $tmp6076 = (frost$core$Int64) {26};
frost$core$Bit $tmp6077 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp6076);
bool $tmp6078 = $tmp6077.value;
if ($tmp6078) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp6079 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp6080 = *$tmp6079;
*(&local70) = $tmp6080;
org$frostlang$frostc$MethodDecl** $tmp6081 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 16);
org$frostlang$frostc$MethodDecl* $tmp6082 = *$tmp6081;
*(&local71) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6082));
org$frostlang$frostc$MethodDecl* $tmp6083 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6083));
*(&local71) = $tmp6082;
org$frostlang$frostc$FixedArray** $tmp6084 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp6085 = *$tmp6084;
*(&local72) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6085));
org$frostlang$frostc$FixedArray* $tmp6086 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6086));
*(&local72) = $tmp6085;
// line 1666
org$frostlang$frostc$MethodDecl* $tmp6087 = *(&local71);
org$frostlang$frostc$FixedArray* $tmp6088 = *(&local72);
org$frostlang$frostc$CCodeGenerator$writeStaticCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp6087, ((frost$collections$ListView*) $tmp6088));
org$frostlang$frostc$FixedArray* $tmp6089 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6089));
*(&local72) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp6090 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6090));
*(&local71) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block55:;
frost$core$Int64 $tmp6091 = (frost$core$Int64) {27};
frost$core$Bit $tmp6092 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp6091);
bool $tmp6093 = $tmp6092.value;
if ($tmp6093) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp6094 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp6095 = *$tmp6094;
*(&local73) = $tmp6095;
org$frostlang$frostc$IR$Value** $tmp6096 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp6097 = *$tmp6096;
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6097));
org$frostlang$frostc$IR$Value* $tmp6098 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6098));
*(&local74) = $tmp6097;
org$frostlang$frostc$IR$Value** $tmp6099 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp6100 = *$tmp6099;
*(&local75) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6100));
org$frostlang$frostc$IR$Value* $tmp6101 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6101));
*(&local75) = $tmp6100;
// line 1669
org$frostlang$frostc$IR$Value* $tmp6102 = *(&local74);
org$frostlang$frostc$IR$Value* $tmp6103 = *(&local75);
org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, $tmp6102, $tmp6103);
org$frostlang$frostc$IR$Value* $tmp6104 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6104));
*(&local75) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp6105 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6105));
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block57:;
frost$core$Int64 $tmp6106 = (frost$core$Int64) {28};
frost$core$Bit $tmp6107 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5724, $tmp6106);
bool $tmp6108 = $tmp6107.value;
if ($tmp6108) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp6109 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp6110 = *$tmp6109;
*(&local76) = $tmp6110;
// line 1672
frost$io$IndentedOutputStream** $tmp6111 = &param0->out;
frost$io$IndentedOutputStream* $tmp6112 = *$tmp6111;
$fn6114 $tmp6113 = ($fn6114) ((frost$io$OutputStream*) $tmp6112)->$class->vtable[19];
frost$core$Error* $tmp6115 = $tmp6113(((frost$io$OutputStream*) $tmp6112), &$s6116);
if ($tmp6115 == NULL) goto block60; else goto block61;
block61:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6115));
*(&local0) = $tmp6115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6115));
goto block1;
block60:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6115));
goto block3;
block59:;
// line 1675
frost$core$Bit $tmp6117 = frost$core$Bit$init$builtin_bit(false);
bool $tmp6118 = $tmp6117.value;
if ($tmp6118) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp6119 = (frost$core$Int64) {1675};
frost$core$String* $tmp6120 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s6121, ((frost$core$Object*) param2));
frost$core$String* $tmp6122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6120, &$s6123);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s6124, $tmp6119, $tmp6122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6120));
abort(); // unreachable
block62:;
// line 1676
goto block64;
block64:;
goto block64;
block65:;
goto block3;
block3:;
goto block2;
block1:;
// line 1681
frost$core$Bit $tmp6125 = frost$core$Bit$init$builtin_bit(false);
bool $tmp6126 = $tmp6125.value;
if ($tmp6126) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp6127 = (frost$core$Int64) {1681};
frost$core$Error* $tmp6128 = *(&local0);
$fn6130 $tmp6129 = ($fn6130) ((frost$core$Object*) $tmp6128)->$class->vtable[0];
frost$core$String* $tmp6131 = $tmp6129(((frost$core$Object*) $tmp6128));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s6132, $tmp6127, $tmp6131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6131));
abort(); // unreachable
block66:;
// line 1682
goto block68;
block68:;
goto block68;
block69:;
goto block2;
block2:;
frost$core$Error* $tmp6133 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6133));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 1688
frost$core$Weak** $tmp6134 = &param1->owner;
frost$core$Weak* $tmp6135 = *$tmp6134;
frost$core$Object* $tmp6136 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6135);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, ((org$frostlang$frostc$ClassDecl*) $tmp6136));
frost$core$Frost$unref$frost$core$Object$Q($tmp6136);
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
// line 1692
*(&local0) = ((frost$core$Error*) NULL);
// line 1693
frost$core$Int64 $tmp6137 = (frost$core$Int64) {0};
frost$collections$Array** $tmp6138 = &param1->locals;
frost$collections$Array* $tmp6139 = *$tmp6138;
ITable* $tmp6140 = ((frost$collections$CollectionView*) $tmp6139)->$class->itable;
while ($tmp6140->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6140 = $tmp6140->next;
}
$fn6142 $tmp6141 = $tmp6140->methods[0];
frost$core$Int64 $tmp6143 = $tmp6141(((frost$collections$CollectionView*) $tmp6139));
frost$core$Bit $tmp6144 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp6145 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp6137, $tmp6143, $tmp6144);
frost$core$Int64 $tmp6146 = $tmp6145.min;
*(&local1) = $tmp6146;
frost$core$Int64 $tmp6147 = $tmp6145.max;
frost$core$Bit $tmp6148 = $tmp6145.inclusive;
bool $tmp6149 = $tmp6148.value;
frost$core$Int64 $tmp6150 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp6151 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6150);
if ($tmp6149) goto block6; else goto block7;
block6:;
int64_t $tmp6152 = $tmp6146.value;
int64_t $tmp6153 = $tmp6147.value;
bool $tmp6154 = $tmp6152 <= $tmp6153;
frost$core$Bit $tmp6155 = (frost$core$Bit) {$tmp6154};
bool $tmp6156 = $tmp6155.value;
if ($tmp6156) goto block3; else goto block4;
block7:;
int64_t $tmp6157 = $tmp6146.value;
int64_t $tmp6158 = $tmp6147.value;
bool $tmp6159 = $tmp6157 < $tmp6158;
frost$core$Bit $tmp6160 = (frost$core$Bit) {$tmp6159};
bool $tmp6161 = $tmp6160.value;
if ($tmp6161) goto block3; else goto block4;
block3:;
// line 1694
frost$core$Int64 $tmp6162 = *(&local1);
frost$core$Int64$wrapper* $tmp6163;
$tmp6163 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp6163->value = $tmp6162;
frost$core$String* $tmp6164 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s6165, ((frost$core$Object*) $tmp6163));
frost$core$String* $tmp6166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6164, &$s6167);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6166));
frost$core$String* $tmp6168 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6168));
*(&local2) = $tmp6166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6163));
// line 1695
frost$collections$Array** $tmp6169 = &param1->locals;
frost$collections$Array* $tmp6170 = *$tmp6169;
frost$core$Int64 $tmp6171 = *(&local1);
frost$core$Object* $tmp6172 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp6170, $tmp6171);
frost$core$String* $tmp6173 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp6172));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6173));
frost$core$String* $tmp6174 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6174));
*(&local3) = $tmp6173;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6173));
frost$core$Frost$unref$frost$core$Object$Q($tmp6172);
// line 1696
frost$io$IndentedOutputStream** $tmp6175 = &param0->out;
frost$io$IndentedOutputStream* $tmp6176 = *$tmp6175;
frost$core$String* $tmp6177 = *(&local3);
frost$core$String* $tmp6178 = frost$core$String$get_asString$R$frost$core$String($tmp6177);
frost$core$String* $tmp6179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6178, &$s6180);
frost$core$String* $tmp6181 = *(&local2);
frost$core$String* $tmp6182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6179, $tmp6181);
frost$core$String* $tmp6183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6182, &$s6184);
$fn6186 $tmp6185 = ($fn6186) ((frost$io$OutputStream*) $tmp6176)->$class->vtable[17];
frost$core$Error* $tmp6187 = $tmp6185(((frost$io$OutputStream*) $tmp6176), $tmp6183);
if ($tmp6187 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6187));
*(&local0) = $tmp6187;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6178));
frost$core$String* $tmp6188 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6188));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp6189 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6189));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6178));
// line 1697
frost$core$Weak** $tmp6190 = &param0->compiler;
frost$core$Weak* $tmp6191 = *$tmp6190;
frost$core$Object* $tmp6192 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6191);
frost$collections$Array** $tmp6193 = &param1->locals;
frost$collections$Array* $tmp6194 = *$tmp6193;
frost$core$Int64 $tmp6195 = *(&local1);
frost$core$Object* $tmp6196 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp6194, $tmp6195);
frost$core$Bit $tmp6197 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp6192), ((org$frostlang$frostc$Type*) $tmp6196));
bool $tmp6198 = $tmp6197.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp6196);
frost$core$Frost$unref$frost$core$Object$Q($tmp6192);
if ($tmp6198) goto block10; else goto block11;
block10:;
// line 1698
frost$io$IndentedOutputStream** $tmp6199 = &param0->out;
frost$io$IndentedOutputStream* $tmp6200 = *$tmp6199;
$fn6202 $tmp6201 = ($fn6202) ((frost$io$OutputStream*) $tmp6200)->$class->vtable[17];
frost$core$Error* $tmp6203 = $tmp6201(((frost$io$OutputStream*) $tmp6200), &$s6204);
if ($tmp6203 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6203));
*(&local0) = $tmp6203;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6203));
frost$core$String* $tmp6205 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6205));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp6206 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6206));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6203));
goto block11;
block11:;
// line 1700
frost$io$IndentedOutputStream** $tmp6207 = &param0->out;
frost$io$IndentedOutputStream* $tmp6208 = *$tmp6207;
$fn6210 $tmp6209 = ($fn6210) ((frost$io$OutputStream*) $tmp6208)->$class->vtable[19];
frost$core$Error* $tmp6211 = $tmp6209(((frost$io$OutputStream*) $tmp6208), &$s6212);
if ($tmp6211 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6211));
*(&local0) = $tmp6211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6211));
frost$core$String* $tmp6213 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6213));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp6214 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6214));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6211));
frost$core$String* $tmp6215 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6215));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp6216 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6216));
*(&local2) = ((frost$core$String*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp6217 = *(&local1);
int64_t $tmp6218 = $tmp6147.value;
int64_t $tmp6219 = $tmp6217.value;
int64_t $tmp6220 = $tmp6218 - $tmp6219;
frost$core$Int64 $tmp6221 = (frost$core$Int64) {$tmp6220};
frost$core$UInt64 $tmp6222 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6221);
if ($tmp6149) goto block17; else goto block18;
block17:;
uint64_t $tmp6223 = $tmp6222.value;
uint64_t $tmp6224 = $tmp6151.value;
bool $tmp6225 = $tmp6223 >= $tmp6224;
frost$core$Bit $tmp6226 = (frost$core$Bit) {$tmp6225};
bool $tmp6227 = $tmp6226.value;
if ($tmp6227) goto block16; else goto block4;
block18:;
uint64_t $tmp6228 = $tmp6222.value;
uint64_t $tmp6229 = $tmp6151.value;
bool $tmp6230 = $tmp6228 > $tmp6229;
frost$core$Bit $tmp6231 = (frost$core$Bit) {$tmp6230};
bool $tmp6232 = $tmp6231.value;
if ($tmp6232) goto block16; else goto block4;
block16:;
int64_t $tmp6233 = $tmp6217.value;
int64_t $tmp6234 = $tmp6150.value;
int64_t $tmp6235 = $tmp6233 + $tmp6234;
frost$core$Int64 $tmp6236 = (frost$core$Int64) {$tmp6235};
*(&local1) = $tmp6236;
goto block3;
block4:;
// line 1702
frost$core$Int64 $tmp6237 = (frost$core$Int64) {0};
frost$collections$Array** $tmp6238 = &param1->blocks;
frost$collections$Array* $tmp6239 = *$tmp6238;
ITable* $tmp6240 = ((frost$collections$CollectionView*) $tmp6239)->$class->itable;
while ($tmp6240->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6240 = $tmp6240->next;
}
$fn6242 $tmp6241 = $tmp6240->methods[0];
frost$core$Int64 $tmp6243 = $tmp6241(((frost$collections$CollectionView*) $tmp6239));
frost$core$Bit $tmp6244 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp6245 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp6237, $tmp6243, $tmp6244);
frost$core$Int64 $tmp6246 = $tmp6245.min;
*(&local4) = $tmp6246;
frost$core$Int64 $tmp6247 = $tmp6245.max;
frost$core$Bit $tmp6248 = $tmp6245.inclusive;
bool $tmp6249 = $tmp6248.value;
frost$core$Int64 $tmp6250 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp6251 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6250);
if ($tmp6249) goto block22; else goto block23;
block22:;
int64_t $tmp6252 = $tmp6246.value;
int64_t $tmp6253 = $tmp6247.value;
bool $tmp6254 = $tmp6252 <= $tmp6253;
frost$core$Bit $tmp6255 = (frost$core$Bit) {$tmp6254};
bool $tmp6256 = $tmp6255.value;
if ($tmp6256) goto block19; else goto block20;
block23:;
int64_t $tmp6257 = $tmp6246.value;
int64_t $tmp6258 = $tmp6247.value;
bool $tmp6259 = $tmp6257 < $tmp6258;
frost$core$Bit $tmp6260 = (frost$core$Bit) {$tmp6259};
bool $tmp6261 = $tmp6260.value;
if ($tmp6261) goto block19; else goto block20;
block19:;
// line 1703
frost$collections$Array** $tmp6262 = &param1->blocks;
frost$collections$Array* $tmp6263 = *$tmp6262;
frost$core$Int64 $tmp6264 = *(&local4);
frost$core$Object* $tmp6265 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp6263, $tmp6264);
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp6265)));
org$frostlang$frostc$IR$Block* $tmp6266 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6266));
*(&local5) = ((org$frostlang$frostc$IR$Block*) $tmp6265);
frost$core$Frost$unref$frost$core$Object$Q($tmp6265);
// line 1704
frost$core$Int64 $tmp6267 = *(&local4);
frost$core$Int64 $tmp6268 = (frost$core$Int64) {0};
int64_t $tmp6269 = $tmp6267.value;
int64_t $tmp6270 = $tmp6268.value;
bool $tmp6271 = $tmp6269 != $tmp6270;
frost$core$Bit $tmp6272 = (frost$core$Bit) {$tmp6271};
bool $tmp6273 = $tmp6272.value;
if ($tmp6273) goto block24; else goto block26;
block24:;
// line 1705
org$frostlang$frostc$IR$Block* $tmp6274 = *(&local5);
org$frostlang$frostc$IR$Block$ID* $tmp6275 = &$tmp6274->id;
org$frostlang$frostc$IR$Block$ID $tmp6276 = *$tmp6275;
frost$core$String* $tmp6277 = org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String($tmp6276);
frost$core$String* $tmp6278 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6277, &$s6279);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6278));
frost$core$String** $tmp6280 = &param0->currentBlock;
frost$core$String* $tmp6281 = *$tmp6280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6281));
frost$core$String** $tmp6282 = &param0->currentBlock;
*$tmp6282 = $tmp6278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6277));
// line 1706
frost$io$IndentedOutputStream** $tmp6283 = &param0->out;
frost$io$IndentedOutputStream* $tmp6284 = *$tmp6283;
frost$core$String** $tmp6285 = &param0->currentBlock;
frost$core$String* $tmp6286 = *$tmp6285;
frost$core$String* $tmp6287 = frost$core$String$get_asString$R$frost$core$String($tmp6286);
frost$core$String* $tmp6288 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6287, &$s6289);
$fn6291 $tmp6290 = ($fn6291) ((frost$io$OutputStream*) $tmp6284)->$class->vtable[19];
frost$core$Error* $tmp6292 = $tmp6290(((frost$io$OutputStream*) $tmp6284), $tmp6288);
if ($tmp6292 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6292));
*(&local0) = $tmp6292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6287));
org$frostlang$frostc$IR$Block* $tmp6293 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6293));
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6287));
goto block25;
block26:;
// line 1
// line 1709
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6294));
frost$core$String** $tmp6295 = &param0->currentBlock;
frost$core$String* $tmp6296 = *$tmp6295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6296));
frost$core$String** $tmp6297 = &param0->currentBlock;
*$tmp6297 = &$s6298;
goto block25;
block25:;
// line 1711
frost$core$Int64 $tmp6299 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block* $tmp6300 = *(&local5);
frost$collections$Array** $tmp6301 = &$tmp6300->statements;
frost$collections$Array* $tmp6302 = *$tmp6301;
ITable* $tmp6303 = ((frost$collections$CollectionView*) $tmp6302)->$class->itable;
while ($tmp6303->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6303 = $tmp6303->next;
}
$fn6305 $tmp6304 = $tmp6303->methods[0];
frost$core$Int64 $tmp6306 = $tmp6304(((frost$collections$CollectionView*) $tmp6302));
frost$core$Bit $tmp6307 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp6308 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp6299, $tmp6306, $tmp6307);
frost$core$Int64 $tmp6309 = $tmp6308.min;
*(&local6) = $tmp6309;
frost$core$Int64 $tmp6310 = $tmp6308.max;
frost$core$Bit $tmp6311 = $tmp6308.inclusive;
bool $tmp6312 = $tmp6311.value;
frost$core$Int64 $tmp6313 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp6314 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6313);
if ($tmp6312) goto block32; else goto block33;
block32:;
int64_t $tmp6315 = $tmp6309.value;
int64_t $tmp6316 = $tmp6310.value;
bool $tmp6317 = $tmp6315 <= $tmp6316;
frost$core$Bit $tmp6318 = (frost$core$Bit) {$tmp6317};
bool $tmp6319 = $tmp6318.value;
if ($tmp6319) goto block29; else goto block30;
block33:;
int64_t $tmp6320 = $tmp6309.value;
int64_t $tmp6321 = $tmp6310.value;
bool $tmp6322 = $tmp6320 < $tmp6321;
frost$core$Bit $tmp6323 = (frost$core$Bit) {$tmp6322};
bool $tmp6324 = $tmp6323.value;
if ($tmp6324) goto block29; else goto block30;
block29:;
// line 1712
org$frostlang$frostc$IR$Block* $tmp6325 = *(&local5);
frost$collections$Array** $tmp6326 = &$tmp6325->ids;
frost$collections$Array* $tmp6327 = *$tmp6326;
frost$core$Int64 $tmp6328 = *(&local6);
frost$core$Object* $tmp6329 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp6327, $tmp6328);
org$frostlang$frostc$IR$Block* $tmp6330 = *(&local5);
frost$collections$Array** $tmp6331 = &$tmp6330->statements;
frost$collections$Array* $tmp6332 = *$tmp6331;
frost$core$Int64 $tmp6333 = *(&local6);
frost$core$Object* $tmp6334 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp6332, $tmp6333);
org$frostlang$frostc$CCodeGenerator$writeStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement(param0, ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp6329)->value, ((org$frostlang$frostc$IR$Statement*) $tmp6334));
frost$core$Frost$unref$frost$core$Object$Q($tmp6334);
frost$core$Frost$unref$frost$core$Object$Q($tmp6329);
goto block31;
block31:;
frost$core$Int64 $tmp6335 = *(&local6);
int64_t $tmp6336 = $tmp6310.value;
int64_t $tmp6337 = $tmp6335.value;
int64_t $tmp6338 = $tmp6336 - $tmp6337;
frost$core$Int64 $tmp6339 = (frost$core$Int64) {$tmp6338};
frost$core$UInt64 $tmp6340 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6339);
if ($tmp6312) goto block35; else goto block36;
block35:;
uint64_t $tmp6341 = $tmp6340.value;
uint64_t $tmp6342 = $tmp6314.value;
bool $tmp6343 = $tmp6341 >= $tmp6342;
frost$core$Bit $tmp6344 = (frost$core$Bit) {$tmp6343};
bool $tmp6345 = $tmp6344.value;
if ($tmp6345) goto block34; else goto block30;
block36:;
uint64_t $tmp6346 = $tmp6340.value;
uint64_t $tmp6347 = $tmp6314.value;
bool $tmp6348 = $tmp6346 > $tmp6347;
frost$core$Bit $tmp6349 = (frost$core$Bit) {$tmp6348};
bool $tmp6350 = $tmp6349.value;
if ($tmp6350) goto block34; else goto block30;
block34:;
int64_t $tmp6351 = $tmp6335.value;
int64_t $tmp6352 = $tmp6313.value;
int64_t $tmp6353 = $tmp6351 + $tmp6352;
frost$core$Int64 $tmp6354 = (frost$core$Int64) {$tmp6353};
*(&local6) = $tmp6354;
goto block29;
block30:;
org$frostlang$frostc$IR$Block* $tmp6355 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6355));
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block21;
block21:;
frost$core$Int64 $tmp6356 = *(&local4);
int64_t $tmp6357 = $tmp6247.value;
int64_t $tmp6358 = $tmp6356.value;
int64_t $tmp6359 = $tmp6357 - $tmp6358;
frost$core$Int64 $tmp6360 = (frost$core$Int64) {$tmp6359};
frost$core$UInt64 $tmp6361 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6360);
if ($tmp6249) goto block38; else goto block39;
block38:;
uint64_t $tmp6362 = $tmp6361.value;
uint64_t $tmp6363 = $tmp6251.value;
bool $tmp6364 = $tmp6362 >= $tmp6363;
frost$core$Bit $tmp6365 = (frost$core$Bit) {$tmp6364};
bool $tmp6366 = $tmp6365.value;
if ($tmp6366) goto block37; else goto block20;
block39:;
uint64_t $tmp6367 = $tmp6361.value;
uint64_t $tmp6368 = $tmp6251.value;
bool $tmp6369 = $tmp6367 > $tmp6368;
frost$core$Bit $tmp6370 = (frost$core$Bit) {$tmp6369};
bool $tmp6371 = $tmp6370.value;
if ($tmp6371) goto block37; else goto block20;
block37:;
int64_t $tmp6372 = $tmp6356.value;
int64_t $tmp6373 = $tmp6250.value;
int64_t $tmp6374 = $tmp6372 + $tmp6373;
frost$core$Int64 $tmp6375 = (frost$core$Int64) {$tmp6374};
*(&local4) = $tmp6375;
goto block19;
block20:;
goto block2;
block1:;
// line 1717
frost$core$Bit $tmp6376 = frost$core$Bit$init$builtin_bit(false);
bool $tmp6377 = $tmp6376.value;
if ($tmp6377) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp6378 = (frost$core$Int64) {1717};
frost$core$Error* $tmp6379 = *(&local0);
$fn6381 $tmp6380 = ($fn6381) ((frost$core$Object*) $tmp6379)->$class->vtable[0];
frost$core$String* $tmp6382 = $tmp6380(((frost$core$Object*) $tmp6379));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s6383, $tmp6378, $tmp6382);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6382));
abort(); // unreachable
block40:;
// line 1718
goto block42;
block42:;
goto block42;
block43:;
goto block2;
block2:;
frost$core$Error* $tmp6384 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6384));
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
frost$io$IndentedOutputStream** $tmp6385 = &param0->out;
frost$io$IndentedOutputStream* $tmp6386 = *$tmp6385;
// line 1725
*(&local0) = ((frost$core$Error*) NULL);
// line 1726
frost$io$IndentedOutputStream** $tmp6387 = &param0->out;
frost$io$IndentedOutputStream* $tmp6388 = *$tmp6387;
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6388));
frost$io$IndentedOutputStream* $tmp6389 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6389));
*(&local1) = $tmp6388;
// line 1727
frost$io$IndentedOutputStream** $tmp6390 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6391 = *$tmp6390;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6391));
frost$io$IndentedOutputStream** $tmp6392 = &param0->out;
frost$io$IndentedOutputStream* $tmp6393 = *$tmp6392;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6393));
frost$io$IndentedOutputStream** $tmp6394 = &param0->out;
*$tmp6394 = $tmp6391;
// line 1728
frost$io$MemoryOutputStream** $tmp6395 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6396 = *$tmp6395;
frost$io$MemoryOutputStream$clear($tmp6396);
// line 1729
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR** $tmp6397 = &param0->ir;
org$frostlang$frostc$IR* $tmp6398 = *$tmp6397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6398));
org$frostlang$frostc$IR** $tmp6399 = &param0->ir;
*$tmp6399 = param2;
// line 1730
frost$io$IndentedOutputStream** $tmp6400 = &param0->out;
frost$io$IndentedOutputStream* $tmp6401 = *$tmp6400;
org$frostlang$frostc$Type** $tmp6402 = &param1->returnType;
org$frostlang$frostc$Type* $tmp6403 = *$tmp6402;
frost$core$String* $tmp6404 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp6403);
frost$core$String* $tmp6405 = frost$core$String$get_asString$R$frost$core$String($tmp6404);
frost$core$String* $tmp6406 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6405, &$s6407);
frost$core$String* $tmp6408 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp6409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6406, $tmp6408);
frost$core$String* $tmp6410 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6409, &$s6411);
$fn6413 $tmp6412 = ($fn6413) ((frost$io$OutputStream*) $tmp6401)->$class->vtable[17];
frost$core$Error* $tmp6414 = $tmp6412(((frost$io$OutputStream*) $tmp6401), $tmp6410);
if ($tmp6414 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6414));
*(&local0) = $tmp6414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6404));
frost$io$IndentedOutputStream* $tmp6415 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6415));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6404));
// line 1731
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6416));
frost$core$String* $tmp6417 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6417));
*(&local2) = &$s6418;
// line 1732
frost$core$Int64 $tmp6419 = (frost$core$Int64) {0};
*(&local3) = $tmp6419;
// line 1733
frost$core$Weak** $tmp6420 = &param0->compiler;
frost$core$Weak* $tmp6421 = *$tmp6420;
frost$core$Object* $tmp6422 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6421);
frost$core$Bit $tmp6423 = org$frostlang$frostc$Compiler$hasSelfParam$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp6422), param1);
bool $tmp6424 = $tmp6423.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp6422);
if ($tmp6424) goto block8; else goto block9;
block8:;
// line 1734
frost$io$IndentedOutputStream** $tmp6425 = &param0->out;
frost$io$IndentedOutputStream* $tmp6426 = *$tmp6425;
frost$core$String* $tmp6427 = org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp6428 = frost$core$String$get_asString$R$frost$core$String($tmp6427);
frost$core$String* $tmp6429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6428, &$s6430);
frost$core$Int64 $tmp6431 = *(&local3);
frost$core$Int64$wrapper* $tmp6432;
$tmp6432 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp6432->value = $tmp6431;
frost$core$String* $tmp6433 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp6429, ((frost$core$Object*) $tmp6432));
frost$core$String* $tmp6434 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6433, &$s6435);
$fn6437 $tmp6436 = ($fn6437) ((frost$io$OutputStream*) $tmp6426)->$class->vtable[17];
frost$core$Error* $tmp6438 = $tmp6436(((frost$io$OutputStream*) $tmp6426), $tmp6434);
if ($tmp6438 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6438));
*(&local0) = $tmp6438;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6427));
frost$core$String* $tmp6439 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6439));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6440 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6440));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6427));
// line 1735
frost$core$Int64 $tmp6441 = *(&local3);
frost$core$Int64 $tmp6442 = (frost$core$Int64) {1};
int64_t $tmp6443 = $tmp6441.value;
int64_t $tmp6444 = $tmp6442.value;
int64_t $tmp6445 = $tmp6443 + $tmp6444;
frost$core$Int64 $tmp6446 = (frost$core$Int64) {$tmp6445};
*(&local3) = $tmp6446;
// line 1736
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6447));
frost$core$String* $tmp6448 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6448));
*(&local2) = &$s6449;
goto block9;
block9:;
// line 1738
frost$collections$Array** $tmp6450 = &param1->parameters;
frost$collections$Array* $tmp6451 = *$tmp6450;
ITable* $tmp6452 = ((frost$collections$Iterable*) $tmp6451)->$class->itable;
while ($tmp6452->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp6452 = $tmp6452->next;
}
$fn6454 $tmp6453 = $tmp6452->methods[0];
frost$collections$Iterator* $tmp6455 = $tmp6453(((frost$collections$Iterable*) $tmp6451));
goto block12;
block12:;
ITable* $tmp6456 = $tmp6455->$class->itable;
while ($tmp6456->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6456 = $tmp6456->next;
}
$fn6458 $tmp6457 = $tmp6456->methods[0];
frost$core$Bit $tmp6459 = $tmp6457($tmp6455);
bool $tmp6460 = $tmp6459.value;
if ($tmp6460) goto block14; else goto block13;
block13:;
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp6461 = $tmp6455->$class->itable;
while ($tmp6461->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6461 = $tmp6461->next;
}
$fn6463 $tmp6462 = $tmp6461->methods[1];
frost$core$Object* $tmp6464 = $tmp6462($tmp6455);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp6464)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp6465 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6465));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp6464);
// line 1739
frost$io$IndentedOutputStream** $tmp6466 = &param0->out;
frost$io$IndentedOutputStream* $tmp6467 = *$tmp6466;
frost$core$String* $tmp6468 = *(&local2);
frost$core$String* $tmp6469 = frost$core$String$get_asString$R$frost$core$String($tmp6468);
frost$core$String* $tmp6470 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6469, &$s6471);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6472 = *(&local4);
org$frostlang$frostc$Type** $tmp6473 = &$tmp6472->type;
org$frostlang$frostc$Type* $tmp6474 = *$tmp6473;
frost$core$String* $tmp6475 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp6474);
frost$core$String* $tmp6476 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6470, $tmp6475);
frost$core$String* $tmp6477 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6476, &$s6478);
frost$core$Int64 $tmp6479 = *(&local3);
frost$core$Int64$wrapper* $tmp6480;
$tmp6480 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp6480->value = $tmp6479;
frost$core$String* $tmp6481 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp6477, ((frost$core$Object*) $tmp6480));
frost$core$String* $tmp6482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6481, &$s6483);
$fn6485 $tmp6484 = ($fn6485) ((frost$io$OutputStream*) $tmp6467)->$class->vtable[17];
frost$core$Error* $tmp6486 = $tmp6484(((frost$io$OutputStream*) $tmp6467), $tmp6482);
if ($tmp6486 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6486));
*(&local0) = $tmp6486;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6469));
frost$core$Frost$unref$frost$core$Object$Q($tmp6464);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6487 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6487));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6455));
frost$core$String* $tmp6488 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6488));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6489 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6489));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6469));
// line 1740
frost$core$Int64 $tmp6490 = *(&local3);
frost$core$Int64 $tmp6491 = (frost$core$Int64) {1};
int64_t $tmp6492 = $tmp6490.value;
int64_t $tmp6493 = $tmp6491.value;
int64_t $tmp6494 = $tmp6492 + $tmp6493;
frost$core$Int64 $tmp6495 = (frost$core$Int64) {$tmp6494};
*(&local3) = $tmp6495;
// line 1741
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6496));
frost$core$String* $tmp6497 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6497));
*(&local2) = &$s6498;
frost$core$Frost$unref$frost$core$Object$Q($tmp6464);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6499 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6499));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6455));
// line 1743
frost$io$IndentedOutputStream** $tmp6500 = &param0->out;
frost$io$IndentedOutputStream* $tmp6501 = *$tmp6500;
$fn6503 $tmp6502 = ($fn6503) ((frost$io$OutputStream*) $tmp6501)->$class->vtable[19];
frost$core$Error* $tmp6504 = $tmp6502(((frost$io$OutputStream*) $tmp6501), &$s6505);
if ($tmp6504 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6504));
*(&local0) = $tmp6504;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6504));
frost$core$String* $tmp6506 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6506));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6507 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6507));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6504));
// line 1744
frost$io$MemoryOutputStream* $tmp6508 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp6508);
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6508));
frost$io$MemoryOutputStream* $tmp6509 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6509));
*(&local5) = $tmp6508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6508));
// line 1745
frost$io$IndentedOutputStream* $tmp6510 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp6511 = *(&local5);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp6510, ((frost$io$OutputStream*) $tmp6511));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6510));
frost$io$IndentedOutputStream** $tmp6512 = &param0->out;
frost$io$IndentedOutputStream* $tmp6513 = *$tmp6512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6513));
frost$io$IndentedOutputStream** $tmp6514 = &param0->out;
*$tmp6514 = $tmp6510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6510));
// line 1746
org$frostlang$frostc$CCodeGenerator$writeIR$org$frostlang$frostc$IR(param0, param2);
// line 1747
frost$io$IndentedOutputStream** $tmp6515 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6516 = *$tmp6515;
frost$io$MemoryOutputStream** $tmp6517 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6518 = *$tmp6517;
$fn6520 $tmp6519 = ($fn6520) ((frost$io$OutputStream*) $tmp6516)->$class->vtable[20];
frost$core$Error* $tmp6521 = $tmp6519(((frost$io$OutputStream*) $tmp6516), ((frost$core$Object*) $tmp6518));
if ($tmp6521 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6521));
*(&local0) = $tmp6521;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6521));
frost$io$MemoryOutputStream* $tmp6522 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6522));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6523 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6523));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6524 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6524));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6521));
// line 1748
frost$io$IndentedOutputStream** $tmp6525 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6526 = *$tmp6525;
frost$io$MemoryOutputStream* $tmp6527 = *(&local5);
$fn6529 $tmp6528 = ($fn6529) ((frost$io$OutputStream*) $tmp6526)->$class->vtable[20];
frost$core$Error* $tmp6530 = $tmp6528(((frost$io$OutputStream*) $tmp6526), ((frost$core$Object*) $tmp6527));
if ($tmp6530 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6530));
*(&local0) = $tmp6530;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6530));
frost$io$MemoryOutputStream* $tmp6531 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6531));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6532 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6532));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6533 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6533));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6530));
// line 1749
frost$io$IndentedOutputStream** $tmp6534 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6535 = *$tmp6534;
$fn6537 $tmp6536 = ($fn6537) ((frost$io$OutputStream*) $tmp6535)->$class->vtable[19];
frost$core$Error* $tmp6538 = $tmp6536(((frost$io$OutputStream*) $tmp6535), &$s6539);
if ($tmp6538 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6538));
*(&local0) = $tmp6538;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6538));
frost$io$MemoryOutputStream* $tmp6540 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6540));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6541 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6541));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6542 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6542));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6538));
// line 1750
frost$io$IndentedOutputStream* $tmp6543 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6543));
frost$io$IndentedOutputStream** $tmp6544 = &param0->out;
frost$io$IndentedOutputStream* $tmp6545 = *$tmp6544;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6545));
frost$io$IndentedOutputStream** $tmp6546 = &param0->out;
*$tmp6546 = $tmp6543;
frost$io$MemoryOutputStream* $tmp6547 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6547));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6548 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6548));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6549 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6549));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block5;
block4:;
// line 1753
frost$core$Bit $tmp6550 = frost$core$Bit$init$builtin_bit(false);
bool $tmp6551 = $tmp6550.value;
if ($tmp6551) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp6552 = (frost$core$Int64) {1753};
frost$core$Error* $tmp6553 = *(&local0);
$fn6555 $tmp6554 = ($fn6555) ((frost$core$Object*) $tmp6553)->$class->vtable[0];
frost$core$String* $tmp6556 = $tmp6554(((frost$core$Object*) $tmp6553));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s6557, $tmp6552, $tmp6556);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6556));
abort(); // unreachable
block25:;
// line 1754
goto block27;
block27:;
goto block27;
block28:;
goto block5;
block5:;
frost$core$Error* $tmp6558 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6558));
*(&local0) = ((frost$core$Error*) NULL);
goto block1;
block1:;
frost$io$IndentedOutputStream** $tmp6559 = &param0->out;
frost$io$IndentedOutputStream* $tmp6560 = *$tmp6559;
bool $tmp6561 = $tmp6560 == $tmp6386;
frost$core$Bit $tmp6562 = frost$core$Bit$init$builtin_bit($tmp6561);
bool $tmp6563 = $tmp6562.value;
if ($tmp6563) goto block2; else goto block3;
block2:;
return;
block3:;
frost$core$Int64 $tmp6564 = (frost$core$Int64) {1724};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s6565, $tmp6564, &$s6566);
abort(); // unreachable

}
void org$frostlang$frostc$CCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
// line 1760
*(&local0) = ((frost$core$Error*) NULL);
// line 1761
org$frostlang$frostc$ClassDecl** $tmp6567 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6568 = *$tmp6567;
frost$core$Bit $tmp6569 = frost$core$Bit$init$builtin_bit($tmp6568 == NULL);
bool $tmp6570 = $tmp6569.value;
if ($tmp6570) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp6571 = (frost$core$Int64) {1761};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s6572, $tmp6571);
abort(); // unreachable
block3:;
// line 1762
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$ClassDecl** $tmp6573 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6574 = *$tmp6573;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6574));
org$frostlang$frostc$ClassDecl** $tmp6575 = &param0->currentClass;
*$tmp6575 = param1;
// line 1763
frost$collections$HashSet** $tmp6576 = &param0->imports;
frost$collections$HashSet* $tmp6577 = *$tmp6576;
frost$collections$HashSet$clear($tmp6577);
// line 1764
frost$io$MemoryOutputStream** $tmp6578 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6579 = *$tmp6578;
frost$io$MemoryOutputStream$clear($tmp6579);
// line 1765
frost$io$MemoryOutputStream** $tmp6580 = &param0->declarations;
frost$io$MemoryOutputStream* $tmp6581 = *$tmp6580;
frost$io$MemoryOutputStream$clear($tmp6581);
// line 1766
frost$io$MemoryOutputStream** $tmp6582 = &param0->types;
frost$io$MemoryOutputStream* $tmp6583 = *$tmp6582;
frost$io$MemoryOutputStream$clear($tmp6583);
// line 1767
frost$io$MemoryOutputStream** $tmp6584 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6585 = *$tmp6584;
frost$io$MemoryOutputStream$clear($tmp6585);
// line 1768
frost$io$MemoryOutputStream** $tmp6586 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6587 = *$tmp6586;
frost$io$MemoryOutputStream$clear($tmp6587);
// line 1769
frost$collections$HashSet** $tmp6588 = &param0->declared;
frost$collections$HashSet* $tmp6589 = *$tmp6588;
frost$collections$HashSet$clear($tmp6589);
// line 1770
frost$collections$HashSet** $tmp6590 = &param0->writtenTypes;
frost$collections$HashSet* $tmp6591 = *$tmp6590;
frost$collections$HashSet$clear($tmp6591);
// line 1771
frost$collections$HashSet** $tmp6592 = &param0->writtenWrappers;
frost$collections$HashSet* $tmp6593 = *$tmp6592;
frost$collections$HashSet$clear($tmp6593);
// line 1772
frost$collections$HashMap** $tmp6594 = &param0->classConstants;
frost$collections$HashMap* $tmp6595 = *$tmp6594;
frost$collections$HashMap$clear($tmp6595);
// line 1773
frost$collections$IdentityMap** $tmp6596 = &param0->variableNames;
frost$collections$IdentityMap* $tmp6597 = *$tmp6596;
frost$collections$IdentityMap$clear($tmp6597);
// line 1774
frost$core$Int64 $tmp6598 = (frost$core$Int64) {0};
frost$core$Int64* $tmp6599 = &param0->varCount;
*$tmp6599 = $tmp6598;
// line 1775
frost$collections$IdentityMap** $tmp6600 = &param0->methodShims;
frost$collections$IdentityMap* $tmp6601 = *$tmp6600;
frost$collections$IdentityMap$clear($tmp6601);
// line 1776
frost$core$Weak** $tmp6602 = &param0->hCodeGen;
frost$core$Weak* $tmp6603 = *$tmp6602;
frost$core$Object* $tmp6604 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6603);
frost$io$File* $tmp6605 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(((org$frostlang$frostc$HCodeGenerator*) $tmp6604), param1, &$s6606);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6605));
frost$io$File* $tmp6607 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6607));
*(&local1) = $tmp6605;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6605));
frost$core$Frost$unref$frost$core$Object$Q($tmp6604);
// line 1777
frost$io$File* $tmp6608 = *(&local1);
frost$io$File* $tmp6609 = frost$io$File$get_parent$R$frost$io$File$Q($tmp6608);
frost$core$Error* $tmp6610 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp6609);
if ($tmp6610 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6610));
*(&local0) = $tmp6610;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6609));
frost$io$File* $tmp6611 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6611));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6609));
// line 1778
frost$io$IndentedOutputStream* $tmp6612 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp6613 = *(&local1);
frost$core$Maybe* $tmp6614 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp6613);
frost$core$Int64* $tmp6615 = &$tmp6614->$rawValue;
frost$core$Int64 $tmp6616 = *$tmp6615;
int64_t $tmp6617 = $tmp6616.value;
bool $tmp6618 = $tmp6617 == 0;
if ($tmp6618) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp6619 = (frost$core$Error**) ($tmp6614->$data + 0);
frost$core$Error* $tmp6620 = *$tmp6619;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6620));
*(&local0) = $tmp6620;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6612));
frost$io$File* $tmp6621 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6621));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block7:;
frost$core$Object** $tmp6622 = (frost$core$Object**) ($tmp6614->$data + 0);
frost$core$Object* $tmp6623 = *$tmp6622;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp6612, ((frost$io$OutputStream*) $tmp6623));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6612));
frost$io$IndentedOutputStream** $tmp6624 = &param0->out;
frost$io$IndentedOutputStream* $tmp6625 = *$tmp6624;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6625));
frost$io$IndentedOutputStream** $tmp6626 = &param0->out;
*$tmp6626 = $tmp6612;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6612));
// line 1779
frost$io$IndentedOutputStream** $tmp6627 = &param0->out;
frost$io$IndentedOutputStream* $tmp6628 = *$tmp6627;
$fn6630 $tmp6629 = ($fn6630) ((frost$io$OutputStream*) $tmp6628)->$class->vtable[22];
frost$core$Error* $tmp6631 = $tmp6629(((frost$io$OutputStream*) $tmp6628));
if ($tmp6631 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6631));
*(&local0) = $tmp6631;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6631));
frost$io$File* $tmp6632 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6632));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6631));
// line 1780
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp6633 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6633));
// line 1781
frost$core$Weak** $tmp6634 = &param0->compiler;
frost$core$Weak* $tmp6635 = *$tmp6634;
frost$core$Object* $tmp6636 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6635);
frost$core$Bit $tmp6637 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp6636), param1);
bool $tmp6638 = $tmp6637.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp6636);
if ($tmp6638) goto block11; else goto block12;
block11:;
// line 1782
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp6639 = org$frostlang$frostc$CCodeGenerator$getWrapperClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6639));
goto block12;
block12:;
frost$io$File* $tmp6640 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6640));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// line 1786
frost$core$Weak** $tmp6641 = &param0->compiler;
frost$core$Weak* $tmp6642 = *$tmp6641;
frost$core$Object* $tmp6643 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6642);
org$frostlang$frostc$Position* $tmp6644 = &param1->position;
org$frostlang$frostc$Position $tmp6645 = *$tmp6644;
frost$core$Error* $tmp6646 = *(&local0);
frost$core$String** $tmp6647 = &$tmp6646->message;
frost$core$String* $tmp6648 = *$tmp6647;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp6643), $tmp6645, $tmp6648);
frost$core$Frost$unref$frost$core$Object$Q($tmp6643);
goto block2;
block2:;
frost$core$Error* $tmp6649 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6649));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// line 1792
org$frostlang$frostc$CCodeGenerator$finish(param0);
// line 1793
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl** $tmp6650 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6651 = *$tmp6650;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6651));
org$frostlang$frostc$ClassDecl** $tmp6652 = &param0->currentClass;
*$tmp6652 = ((org$frostlang$frostc$ClassDecl*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$finish(org$frostlang$frostc$CCodeGenerator* param0) {

frost$core$Error* local0 = NULL;
// line 1798
*(&local0) = ((frost$core$Error*) NULL);
// line 1799
frost$io$IndentedOutputStream** $tmp6653 = &param0->out;
frost$io$IndentedOutputStream* $tmp6654 = *$tmp6653;
frost$io$MemoryOutputStream** $tmp6655 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6656 = *$tmp6655;
$fn6658 $tmp6657 = ($fn6658) ((frost$io$OutputStream*) $tmp6654)->$class->vtable[20];
frost$core$Error* $tmp6659 = $tmp6657(((frost$io$OutputStream*) $tmp6654), ((frost$core$Object*) $tmp6656));
if ($tmp6659 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6659));
*(&local0) = $tmp6659;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6659));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6659));
// line 1800
frost$io$MemoryOutputStream** $tmp6660 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6661 = *$tmp6660;
frost$io$MemoryOutputStream$clear($tmp6661);
// line 1801
frost$io$IndentedOutputStream** $tmp6662 = &param0->out;
frost$io$IndentedOutputStream* $tmp6663 = *$tmp6662;
frost$io$MemoryOutputStream** $tmp6664 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6665 = *$tmp6664;
$fn6667 $tmp6666 = ($fn6667) ((frost$io$OutputStream*) $tmp6663)->$class->vtable[20];
frost$core$Error* $tmp6668 = $tmp6666(((frost$io$OutputStream*) $tmp6663), ((frost$core$Object*) $tmp6665));
if ($tmp6668 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6668));
*(&local0) = $tmp6668;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6668));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6668));
// line 1802
frost$io$MemoryOutputStream** $tmp6669 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6670 = *$tmp6669;
frost$io$MemoryOutputStream$clear($tmp6670);
// line 1803
frost$io$IndentedOutputStream** $tmp6671 = &param0->out;
frost$io$IndentedOutputStream* $tmp6672 = *$tmp6671;
frost$io$MemoryOutputStream** $tmp6673 = &param0->types;
frost$io$MemoryOutputStream* $tmp6674 = *$tmp6673;
$fn6676 $tmp6675 = ($fn6676) ((frost$io$OutputStream*) $tmp6672)->$class->vtable[20];
frost$core$Error* $tmp6677 = $tmp6675(((frost$io$OutputStream*) $tmp6672), ((frost$core$Object*) $tmp6674));
if ($tmp6677 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6677));
*(&local0) = $tmp6677;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6677));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6677));
// line 1804
frost$io$MemoryOutputStream** $tmp6678 = &param0->types;
frost$io$MemoryOutputStream* $tmp6679 = *$tmp6678;
frost$io$MemoryOutputStream$clear($tmp6679);
// line 1805
frost$io$IndentedOutputStream** $tmp6680 = &param0->out;
frost$io$IndentedOutputStream* $tmp6681 = *$tmp6680;
frost$io$MemoryOutputStream** $tmp6682 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6683 = *$tmp6682;
$fn6685 $tmp6684 = ($fn6685) ((frost$io$OutputStream*) $tmp6681)->$class->vtable[20];
frost$core$Error* $tmp6686 = $tmp6684(((frost$io$OutputStream*) $tmp6681), ((frost$core$Object*) $tmp6683));
if ($tmp6686 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6686));
*(&local0) = $tmp6686;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6686));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6686));
// line 1806
frost$io$MemoryOutputStream** $tmp6687 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6688 = *$tmp6687;
frost$io$MemoryOutputStream$clear($tmp6688);
// line 1807
frost$io$IndentedOutputStream** $tmp6689 = &param0->out;
frost$io$IndentedOutputStream* $tmp6690 = *$tmp6689;
frost$io$MemoryOutputStream** $tmp6691 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6692 = *$tmp6691;
$fn6694 $tmp6693 = ($fn6694) ((frost$io$OutputStream*) $tmp6690)->$class->vtable[20];
frost$core$Error* $tmp6695 = $tmp6693(((frost$io$OutputStream*) $tmp6690), ((frost$core$Object*) $tmp6692));
if ($tmp6695 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6695));
*(&local0) = $tmp6695;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6695));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6695));
// line 1808
frost$io$MemoryOutputStream** $tmp6696 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6697 = *$tmp6696;
frost$io$MemoryOutputStream$clear($tmp6697);
goto block2;
block1:;
// line 1811
frost$core$Error* $tmp6698 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp6698));
// line 1812
frost$core$Int64 $tmp6699 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp6699);
goto block2;
block2:;
frost$core$Error* $tmp6700 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6700));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$cleanup(org$frostlang$frostc$CCodeGenerator* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp6701 = &param0->compiler;
frost$core$Weak* $tmp6702 = *$tmp6701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6702));
frost$io$File** $tmp6703 = &param0->outDir;
frost$io$File* $tmp6704 = *$tmp6703;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6704));
frost$io$IndentedOutputStream** $tmp6705 = &param0->out;
frost$io$IndentedOutputStream* $tmp6706 = *$tmp6705;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6706));
frost$io$MemoryOutputStream** $tmp6707 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6708 = *$tmp6707;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6708));
frost$collections$HashSet** $tmp6709 = &param0->imports;
frost$collections$HashSet* $tmp6710 = *$tmp6709;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6710));
frost$core$Weak** $tmp6711 = &param0->hCodeGen;
frost$core$Weak* $tmp6712 = *$tmp6711;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6712));
org$frostlang$frostc$HCodeGenerator** $tmp6713 = &param0->hCodeGenRetain;
org$frostlang$frostc$HCodeGenerator* $tmp6714 = *$tmp6713;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6714));
org$frostlang$frostc$ClassDecl** $tmp6715 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6716 = *$tmp6715;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6716));
frost$io$MemoryOutputStream** $tmp6717 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6718 = *$tmp6717;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6718));
frost$io$MemoryOutputStream** $tmp6719 = &param0->declarations;
frost$io$MemoryOutputStream* $tmp6720 = *$tmp6719;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6720));
frost$io$MemoryOutputStream** $tmp6721 = &param0->types;
frost$io$MemoryOutputStream* $tmp6722 = *$tmp6721;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6722));
frost$io$MemoryOutputStream** $tmp6723 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6724 = *$tmp6723;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6724));
frost$io$IndentedOutputStream** $tmp6725 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6726 = *$tmp6725;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6726));
frost$io$MemoryOutputStream** $tmp6727 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6728 = *$tmp6727;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6728));
frost$io$IndentedOutputStream** $tmp6729 = &param0->methodHeader;
frost$io$IndentedOutputStream* $tmp6730 = *$tmp6729;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6730));
frost$io$MemoryOutputStream** $tmp6731 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6732 = *$tmp6731;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6732));
frost$io$IndentedOutputStream** $tmp6733 = &param0->shims;
frost$io$IndentedOutputStream* $tmp6734 = *$tmp6733;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6734));
frost$collections$HashSet** $tmp6735 = &param0->declared;
frost$collections$HashSet* $tmp6736 = *$tmp6735;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6736));
frost$collections$HashSet** $tmp6737 = &param0->writtenTypes;
frost$collections$HashSet* $tmp6738 = *$tmp6737;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6738));
frost$collections$HashSet** $tmp6739 = &param0->writtenWrappers;
frost$collections$HashSet* $tmp6740 = *$tmp6739;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6740));
frost$collections$HashMap** $tmp6741 = &param0->classConstants;
frost$collections$HashMap* $tmp6742 = *$tmp6741;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6742));
frost$collections$IdentityMap** $tmp6743 = &param0->variableNames;
frost$collections$IdentityMap* $tmp6744 = *$tmp6743;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6744));
frost$core$String** $tmp6745 = &param0->currentBlock;
frost$core$String* $tmp6746 = *$tmp6745;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6746));
org$frostlang$frostc$MethodDecl** $tmp6747 = &param0->currentMethod;
org$frostlang$frostc$MethodDecl* $tmp6748 = *$tmp6747;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6748));
frost$core$String** $tmp6749 = &param0->returnValueVar;
frost$core$String* $tmp6750 = *$tmp6749;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6750));
frost$collections$Stack** $tmp6751 = &param0->enclosingContexts;
frost$collections$Stack* $tmp6752 = *$tmp6751;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6752));
frost$collections$IdentityMap** $tmp6753 = &param0->methodShims;
frost$collections$IdentityMap* $tmp6754 = *$tmp6753;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6754));
frost$collections$IdentityMap** $tmp6755 = &param0->choiceDataSizes;
frost$collections$IdentityMap* $tmp6756 = *$tmp6755;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6756));
frost$collections$HashMap** $tmp6757 = &param0->refs;
frost$collections$HashMap* $tmp6758 = *$tmp6757;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6758));
org$frostlang$frostc$IR** $tmp6759 = &param0->ir;
org$frostlang$frostc$IR* $tmp6760 = *$tmp6759;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6760));
return;

}

